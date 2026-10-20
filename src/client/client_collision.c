#include "shared_client.h"
#include "../engine/physics.h"

//----- (0000000140006F70) ----------------------------------------------------
__int64            sub_140006F70(int a1, float *a2, float *a3, float a4)
{
  __int64 input_value;
  int scaled_index;
  __int64 result;
  int masked_bits;
  int *record_byte_offset;
  unsigned int shifted_bits;
  __int64 remaining_count;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 loaded_word;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float product_difference;
  float product_difference_2;
  __int64 scaled_index_4;
  __int64 table_value;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float product_difference_3;
  float product_difference_4;
  float source_component_z;
  float scaled_value;
  __int64 scaled_index_5;
  float combined_products_7;
  float combined_products_8;
  float combined_products_9;
  unsigned int masked_bits_2;
  float scaled_value_2;
  float scaled_value_3;
  float source_component_y;
  __int64 scaled_index_6;
  float combined_products_10;
  float combined_products_11;
  float combined_products_12;
  float scaled_value_4;
  float scaled_value_5;
  __int64 remaining_count_2;
  unsigned int *buffer_cursor;
  float source_component_z_2;
  float source_component_y_2;
  float scaled_value_6;
  __int64 scaled_index_7;
  float combined_products_13;
  float combined_products_14;
  float combined_products_15;
  float scaled_value_7;

  input_value = a1;
  scaled_index = 0;
  result = 20840LL * a1;
  masked_bits = *(unsigned int *)((char *)&g_15F2D92EC + result);
  if ( masked_bits < 4 )
  {
    if ( masked_bits <= 0 )
      return result;
    scaled_index_2 = 0;
    goto LABEL_8;
  }
  record_byte_offset = (int *)((char *)&g_15F2D92F4 + result);
  shifted_bits = ((unsigned int)(masked_bits - 4) >> 2) + 1;
  remaining_count = shifted_bits;
  scaled_index = 4 * shifted_bits;
  scaled_index_2 = 4LL * shifted_bits;
  do
  {
    scaled_index_3 = 60LL * *(record_byte_offset - 1);
    loaded_word = *record_byte_offset;
    combined_products = *(float *)&dword_140404A6C[scaled_index_3 + 73007027] - a2[1];
    combined_products_2 = *(float *)&dword_140404A6C[scaled_index_3 + 73007028] - a2[2];
    combined_products_3 = *(float *)&dword_140404A6C[scaled_index_3 + 73007026] - *a2;
    product_difference = (float)((float)(a3[1] * combined_products_3) - (float)(*a3 * combined_products)) * a4;
    product_difference_2 = (float)((float)(*a3 * combined_products_2) - (float)(a3[2] * combined_products_3)) * a4;
    *(float *)&dword_140404A6C[scaled_index_3 + 73007032] = (float)((float)((float)(a3[2] * combined_products) - (float)(a3[1] * combined_products_2)) * a4)
                                               + *(float *)&dword_140404A6C[scaled_index_3 + 73007032];
    *(float *)&dword_140404A6C[scaled_index_3 + 73007033] = product_difference_2 + *(float *)&dword_140404A6C[scaled_index_3 + 73007033];
    *(float *)&dword_140404A6C[scaled_index_3 + 73007034] = product_difference + *(float *)&dword_140404A6C[scaled_index_3 + 73007034];
    scaled_index_4 = 60 * loaded_word;
    table_value = record_byte_offset[1];
    combined_products_4 = *(float *)&dword_140404A6C[scaled_index_4 + 73007027] - a2[1];
    combined_products_5 = *(float *)&dword_140404A6C[scaled_index_4 + 73007028] - a2[2];
    combined_products_6 = *(float *)&dword_140404A6C[scaled_index_4 + 73007026] - *a2;
    product_difference_3 = (float)((float)(a3[1] * combined_products_6) - (float)(*a3 * combined_products_4)) * a4;
    product_difference_4 = (float)((float)(*a3 * combined_products_5) - (float)(a3[2] * combined_products_6)) * a4;
    *(float *)&dword_140404A6C[scaled_index_4 + 73007032] = (float)((float)((float)(a3[2] * combined_products_4) - (float)(a3[1] * combined_products_5)) * a4)
                                               + *(float *)&dword_140404A6C[scaled_index_4 + 73007032];
    *(float *)&dword_140404A6C[scaled_index_4 + 73007033] = product_difference_4 + *(float *)&dword_140404A6C[scaled_index_4 + 73007033];
    *(float *)&dword_140404A6C[scaled_index_4 + 73007034] = product_difference_3 + *(float *)&dword_140404A6C[scaled_index_4 + 73007034];
    source_component_z = a3[2];
    scaled_value = *a3;
    scaled_index_5 = 60 * table_value;
    combined_products_7 = *(float *)&dword_140404A6C[60 * table_value + 73007027] - a2[1];
    combined_products_8 = *(float *)&dword_140404A6C[60 * table_value + 73007028] - a2[2];
    combined_products_9 = *(float *)&dword_140404A6C[60 * table_value + 73007026] - *a2;
    *(float *)&masked_bits_2 = (float)((float)((float)(source_component_z * combined_products_7) - (float)(a3[1] * combined_products_8)) * a4)
                   + *(float *)&dword_140404A6C[60 * table_value + 73007032];
    result = record_byte_offset[2];
    scaled_value_2 = *a3 * combined_products_8;
    record_byte_offset += 4;
    scaled_value_3 = a3[1] * combined_products_9;
    dword_140404A6C[scaled_index_5 + 73007032] = masked_bits_2;
    *(float *)&dword_140404A6C[scaled_index_5 + 73007033] = (float)((float)(scaled_value_2 - (float)(source_component_z * combined_products_9)) * a4)
                                               + *(float *)&dword_140404A6C[scaled_index_5 + 73007033];
    *(float *)&dword_140404A6C[scaled_index_5 + 73007034] = (float)((float)(scaled_value_3 - (float)(scaled_value * combined_products_7)) * a4)
                                               + *(float *)&dword_140404A6C[scaled_index_5 + 73007034];
    source_component_y = a3[1];
    scaled_index_6 = 60 * result;
    combined_products_10 = *(float *)&dword_140404A6C[60 * result + 73007027] - a2[1];
    combined_products_11 = *(float *)&dword_140404A6C[60 * result + 73007028] - a2[2];
    combined_products_12 = *(float *)&dword_140404A6C[60 * result + 73007026] - *a2;
    scaled_value_4 = a3[2] * combined_products_12;
    scaled_value_5 = *a3;
    *(float *)&dword_140404A6C[scaled_index_6 + 73007032] = (float)((float)((float)(a3[2] * combined_products_10) - (float)(source_component_y * combined_products_11)) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007032];
    *(float *)&dword_140404A6C[scaled_index_6 + 73007033] = (float)((float)((float)(scaled_value_5 * combined_products_11) - scaled_value_4) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007033];
    *(float *)&dword_140404A6C[scaled_index_6 + 73007034] = (float)((float)((float)(source_component_y * combined_products_12) - (float)(scaled_value_5 * combined_products_10)) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007034];
    --remaining_count;
  }
  while ( remaining_count );
  if ( scaled_index < masked_bits )
  {
LABEL_8:
    remaining_count_2 = (unsigned int)(masked_bits - scaled_index);
    buffer_cursor = &dword_140404A6C[5210 * input_value + 129716769 + scaled_index_2];
    do
    {
      source_component_z_2 = a3[2];
      source_component_y_2 = a3[1];
      scaled_value_6 = *a3;
      result = (int)*buffer_cursor++;
      scaled_index_7 = 60 * result;
      combined_products_13 = *(float *)&dword_140404A6C[60 * result + 73007026] - *a2;
      combined_products_14 = *(float *)&dword_140404A6C[60 * result + 73007027] - a2[1];
      combined_products_15 = *(float *)&dword_140404A6C[60 * result + 73007028] - a2[2];
      scaled_value_7 = combined_products_15 * *a3;
      *(float *)&dword_140404A6C[scaled_index_7 + 73007032] = (float)((float)((float)(combined_products_14 * source_component_z_2) - (float)(combined_products_15 * source_component_y_2)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007032];
      *(float *)&dword_140404A6C[scaled_index_7 + 73007033] = (float)((float)(scaled_value_7 - (float)(combined_products_13 * source_component_z_2)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007033];
      *(float *)&dword_140404A6C[scaled_index_7 + 73007034] = (float)((float)((float)(combined_products_13 * source_component_y_2) - (float)(combined_products_14 * scaled_value_6)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007034];
      --remaining_count_2;
    }
    while ( remaining_count_2 );
  }
  return result;
}

//----- (0000000140031530) ----------------------------------------------------
__int64            sub_140031530(float *a1, float *a2, float *a3, signed int a4, float *a5, float *a6, float a7)
{
  float float_word;
  __int64 record_word_offset;
  __int64 float_word_2;
  float weighted_sum;
  float scaled_value;
  float weighted_sum_2;
  float source_component_y;
  float weighted_sum_3;
  float source_component_z;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float float_word_3;
  float weighted_sum_8;
  float component_delta;
  float float_word_4;
  float weighted_sum_9;
  float float_word_5;
  float component_delta_2;
  float weighted_sum_10;
  float component_delta_3;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  float state_address;
  float weighted_sum_14;
  float scaled_value_2;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float scaled_value_3;
  float product_difference;
  float weighted_sum_18;
  float component_delta_4;
  float weighted_sum_19;
  float component_delta_5;
  float scaled_value_4;
  float weighted_sum_20;
  float state_address_2;
  float weighted_sum_21;
  float weighted_sum_22;
  float weighted_sum_23;
  float weighted_sum_24;
  float comparison_result;
  int float_word_6;
  float comparison_result_2;
  signed int iteration_count;
  int limited_value;
  float comparison_result_3;
  int scaled_index;
  int limited_value_2;
  int iteration_count_2;
  int saved_limited_value;
  int iteration_count_3;
  __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 masked_bits;
  unsigned int table_value;
  float weighted_sum_25;
  __int64 masked_bits_2;
  __m128i converted_vector;
  signed int iteration_count_4;
  signed int hibyte_result;
  float weighted_sum_26;
  float converted_vector_2;
  float weighted_sum_27;
  int rol4_result;
  unsigned int table_value_2;
  __int64 saved_state_address;
  __int64 running_total;
  __int64 loaded_word;
  double scaled_value_5;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float product_difference_2;
  float combined_products_4;
  __int128 loaded_word_2;
  __int64 scaled_index_2;
  unsigned int *mesh;
  BOOL slodword_result;
  float comparison_operand;
  float *saved_source_component_x;
  float source_component_y_2;
  unsigned int comparison_operand_2;
  unsigned int saved_layer;
  float source_component_z_2;
  float source_component_w;
  float *record_pointer;
  float comparison_operand_3;
  __int16 table_value_3;
  int table_value_4;
  int masked_bits_3;
  __int64 masked_bits_4;
  unsigned int float_word_7;
  int masked_bits_5;
  __int64 selection_code;
  float weighted_sum_28;
  __int64 selection_code_2;
  unsigned int table_value_5;
  unsigned int masked_bits_6;
  float weighted_sum_29;
  float weighted_sum_30;
  float weighted_sum_31;
  float weighted_sum_32;
  float weighted_sum_33;
  float weighted_sum_34;
  float weighted_sum_35;
  float weighted_sum_36;
  float *saved_source_component_x_2;
  float *source_component_x;
  float source_component_y_3;
  float weighted_sum_37;
  float scaled_value_6;
  float weighted_sum_38;
  float source_component_z_3;
  float weighted_sum_39;
  float scaled_value_7;
  float scaled_value_8;
  float scaled_value_9;
  float weighted_sum_40;
  float weighted_sum_41;
  float weighted_sum_42;
  float weighted_sum_43;
  float weighted_sum_44;
  float weighted_sum_45;
  float weighted_sum_46;
  float weighted_sum_47;
  float weighted_sum_48;
  float weighted_sum_49;
  float state_address_3;
  float weighted_sum_50;
  float weighted_sum_51;
  float weighted_sum_52;
  float source_component_z_4;
  float source_component_x_2;
  float scaled_value_10;
  float component_sum;
  float source_component_y_4;
  float weighted_sum_53;
  float weighted_sum_54;
  float comparison_operand_4;
  unsigned int layer;
  unsigned int byte2_result;
  unsigned int byte1_result;
  float weighted_sum_55;
  float weighted_sum_56;
  float weighted_sum_57;
  float weighted_sum_58;
  float weighted_sum_59;
  float weighted_sum_60;
  float weighted_sum_61;
  float source_component_z_5;
  float *saved_component_sum;
  unsigned int comparison_operand_5;
  float source_component_z_6;
  float weighted_sum_62;
  float source_component_z_7;
  float weighted_sum_63;
  float weighted_sum_64;
  float component_sum_2;
  float scaled_value_11;
  float scaled_value_12;
  float weighted_sum_65;
  float weighted_sum_66;
  float weighted_sum_67;
  float scaled_value_13;
  float weighted_sum_68;
  float weighted_sum_69;
  float component_sum_3;
  float weighted_sum_70;
  float comparison_operand_6;
  unsigned int table_value_6;
  unsigned int masked_bits_7;
  float weighted_sum_71;
  float weighted_sum_72;
  float weighted_sum_73;
  float weighted_sum_74;
  float weighted_sum_75;
  float weighted_sum_76;
  float weighted_sum_77;
  float weighted_sum_78;
  float scaled_value_14;
  float weighted_sum_79;
  float weighted_sum_80;
  float scaled_value_15;
  float scaled_value_16;
  float component_sum_4;
  float source_component_x_3;
  float *saved_weighted_sum;
  float state_address_4;
  float scaled_value_17;
  float source_component_x_4;
  float scaled_value_18;
  float weighted_sum_81;
  float scaled_value_19;
  float scaled_value_20;
  float scaled_value_21;
  float weighted_sum_82;
  float comparison_operand_7;
  float weighted_sum_83;
  float weighted_sum_84;
  float weighted_sum_85;
  unsigned int x;
  unsigned int byte2_result_2;
  unsigned int byte1_result_2;
  float weighted_sum_86;
  float weighted_sum_87;
  float weighted_sum_88;
  float weighted_sum_89;
  float weighted_sum_90;
  float *saved_weighted_sum_2;
  float scaled_value_22;
  float weighted_sum_91;
  float state_address_5;
  float source_component_z_8;
  float weighted_sum_92;
  float state_address_6;
  float weighted_sum_93;
  float state_address_7;
  float weighted_sum_94;
  float component_sum_5;
  float scaled_value_23;
  float weighted_sum_95;
  float weighted_sum_96;
  float weighted_sum_97;
  float component_sum_6;
  float weighted_sum_98;
  float comparison_operand_8;
  float *saved_source_component_x_3;
  float *saved_source_component_x_4;
  float source_component_y_5;
  float source_component_z_9;
  float source_component_x_5;
  float source_component_y_6;
  float source_component_z_10;
  float comparison_operand_9;
  __int64 unused_local;
  float sr_swept_position[3];
  float sr_swept_normal[3];
  float sr_swept_origin[3];
  int sr_swept_cell[3];
  unsigned sr_swept_displaced_cell[3];
  float sr_swept_mesh_result[8];
  _Alignas(16) float sr_swept_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140031530[13248];
#define float_word_8 (*(__int64 (*))(void *)(sr_frame_140031530 + 0)) /* [rsp+8h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_140031530 + 16)) /* [rsp+18h] */
#define packed_word_bits_2 (*(__int64 (*))(void *)(sr_frame_140031530 + 24)) /* [rsp+20h] */
#define frame_float_at_40 (*(float (*))(void *)(sr_frame_140031530 + 40)) /* [rsp+30h] */
#define layer_2 (*(unsigned int (*))(void *)(sr_frame_140031530 + 44)) /* [rsp+34h] */
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_140031530 + 80)) /* [rsp+58h] */
#define limited_value_3 (*(int (*))(void *)(sr_frame_140031530 + 84)) /* [rsp+5Ch] */
#define weighted_sum_99 (*(float (*))(void *)(sr_frame_140031530 + 6816)) /* [rsp+1AA8h] */
#define state_address_8 (*(__int64 (*))(void *)(sr_frame_140031530 + 6824)) /* [rsp+1AB0h] */
#define saved_component_delta (*(float (*))(void *)(sr_frame_140031530 + 6832)) /* [rsp+1AB8h] */
#define source_component_x_6 (*(float * (*))(void *)(sr_frame_140031530 + 6840)) /* [rsp+1AC0h] */
#define input_value (*(__int64 (*))(void *)(sr_frame_140031530 + 6848)) /* [rsp+1AC8h] */
#define saved_component_delta_2 (*(float (*))(void *)(sr_frame_140031530 + 6872)) /* [rsp+1AE0h] */
#define saved_source_component_w (*(float * (*))(void *)(sr_frame_140031530 + 6880)) /* [rsp+1AE8h] */
#define world_block_unknown_3008_at_result (*(unsigned int (*))(void *)(sr_frame_140031530 + 6904)) /* [rsp+1B00h] */
#define saved_masked_bits (*(__int64 (*))(void *)(sr_frame_140031530 + 6912)) /* [rsp+1B08h] */
#define saved_limited_value_2 (*(int (*))(void *)(sr_frame_140031530 + 6936)) /* [rsp+1B20h] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_140031530 + 6940)) /* [rsp+1B24h] */
#define saved_limited_value_3 (*(int (*))(void *)(sr_frame_140031530 + 6944)) /* [rsp+1B28h] */
#define position (*(float (*)[4])(void *)(sr_frame_140031530 + 6952)) /* [rsp+1B30h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_140031530 + 6968)) /* [rsp+1B40h] */
#define to (*(float (*)[4])(void *)(sr_frame_140031530 + 7016)) /* [rsp+1B70h] */
#define from (*(float (*)[4])(void *)(sr_frame_140031530 + 7032)) /* [rsp+1B80h] */
#define placed (*(_BYTE (*)[6144])(void *)(sr_frame_140031530 + 7088)) /* [rsp+1BB8h] */
#define unused_frame_slot_13232 (*(__int64 (*))(void *)(sr_frame_140031530 + 13232)) /* [rsp+33B8h] */

  float_word = a7;
  record_word_offset = 1052016LL * a4;
  *a3 = 65536.0;
  float_word_2 = a4;
  source_component_x_6 = a1;
  layer_2 = a4;
  weighted_sum = *(float *)((char *)&g_15ADA9290 + record_word_offset);
  input_value = a4;
  scaled_value = *a5;
  weighted_sum_2 = *a5 + a7;
  saved_source_component_w = a2;
  saved_record_word_offset = record_word_offset;
  if ( weighted_sum_2 < weighted_sum && (float)(a7 + *a6) < weighted_sum )
    return 0;
  source_component_y = a5[1];
  weighted_sum_3 = *(float *)((char *)&g_15ADA9294 + record_word_offset);
  if ( (float)(source_component_y + a7) < weighted_sum_3 && (float)(a7 + a6[1]) < weighted_sum_3 )
    return 0;
  source_component_z = a5[2];
  weighted_sum_4 = *(float *)((char *)&g_15ADA9298 + record_word_offset);
  if ( (float)(source_component_z + a7) < weighted_sum_4 && (float)(a7 + a6[2]) < weighted_sum_4 )
    return 0;
  weighted_sum_5 = *(float *)((char *)&g_15ADA929C + record_word_offset);
  if ( (float)(scaled_value - a7) > weighted_sum_5 && (float)(*a6 - a7) > weighted_sum_5 )
    return 0;
  weighted_sum_6 = *(float *)((char *)&g_15ADA92A0 + record_word_offset);
  if ( (float)(source_component_y - a7) > weighted_sum_6 && (float)(a6[1] - a7) > weighted_sum_6 )
    return 0;
  weighted_sum_7 = *(float *)((char *)&g_15ADA92A4 + record_word_offset);
  if ( (float)(source_component_z - a7) > weighted_sum_7 && (float)(a6[2] - a7) > weighted_sum_7 )
    return 0;
  float_word_3 = *(float *)((char *)&g_15ADA9244 + record_word_offset);
  weighted_sum_8 = *(float *)((char *)&g_15ADA9250 + record_word_offset);
  component_delta = scaled_value - float_word_3;
  float_word_4 = *(float *)((char *)&g_15ADA925C + record_word_offset);
  weighted_sum_9 = *(float *)((char *)&g_15ADA9248 + record_word_offset);
  float_word_5 = *(float *)((char *)&g_15ADA924C + record_word_offset);
  component_delta_2 = source_component_y - weighted_sum_9;
  weighted_sum_10 = *(float *)((char *)&g_15ADA9258 + record_word_offset);
  component_delta_3 = source_component_z - float_word_5;
  weighted_sum_11 = *(float *)((char *)&g_15ADA9264 + record_word_offset);
  weighted_sum_12 = *(float *)((char *)&g_15ADA926C + record_word_offset);
  weighted_sum_13 = *(float *)((char *)&g_15ADA9260 + record_word_offset) * component_delta_2;
  state_address = (float)(*(float *)((char *)&g_15ADA9254 + record_word_offset) * component_delta_2) + (float)(weighted_sum_8 * component_delta);
  saved_component_delta_2 = component_delta_2;
  weighted_sum_14 = *(float *)((char *)&g_15ADA9268 + record_word_offset);
  scaled_value_2 = float_word_4 * component_delta;
  weighted_sum_15 = state_address + (float)(weighted_sum_10 * component_delta_3);
  saved_component_delta = component_delta;
  weighted_sum_16 = *(float *)((char *)&g_15ADA9270 + record_word_offset);
  weighted_sum_17 = (float)(weighted_sum_13 + scaled_value_2) + (float)(weighted_sum_11 * component_delta_3);
  from[0] = weighted_sum_15;
  scaled_value_3 = weighted_sum_16 * component_delta_3;
  product_difference = *a6 - float_word_3;
  weighted_sum_18 = *(float *)((char *)&g_15ADA9254 + record_word_offset);
  component_delta_4 = a6[1] - weighted_sum_9;
  weighted_sum_19 = (float)((float)(weighted_sum_12 * saved_component_delta_2) + (float)(weighted_sum_14 * saved_component_delta)) + scaled_value_3;
  from[1] = weighted_sum_17;
  component_delta_5 = a6[2] - float_word_5;
  scaled_value_4 = weighted_sum_14 * product_difference;
  weighted_sum_20 = (float)((float)(weighted_sum_18 * component_delta_4) + (float)(weighted_sum_8 * product_difference)) + (float)(weighted_sum_10 * component_delta_5);
  state_address_2 = (float)(*(float *)((char *)&g_15ADA9260 + record_word_offset) * component_delta_4) + (float)(float_word_4 * product_difference);
  weighted_sum_21 = *(float *)((char *)&g_15ADA926C + record_word_offset);
  weighted_sum_22 = state_address_2 + (float)(weighted_sum_11 * component_delta_5);
  sr_swept_origin[0] = product_difference;
  weighted_sum_23 = *(float *)((char *)(unsigned int *)&g_15ADA9284 + record_word_offset);
  from[2] = weighted_sum_19;
  sr_swept_origin[1] = component_delta_4;
  sr_swept_origin[2] = component_delta_5;
  to[0] = weighted_sum_20;
  to[1] = weighted_sum_22;
  weighted_sum_24 = (float)((float)(weighted_sum_21 * component_delta_4) + scaled_value_4) + (float)(weighted_sum_16 * component_delta_5);
  to[2] = weighted_sum_24;
  comparison_result = weighted_sum_15 >= weighted_sum_20 ? weighted_sum_20 : weighted_sum_15;
  float_word_6 = (int)(float)((float)(comparison_result - a7) * weighted_sum_23);
  saved_component_delta_2 = *(float *)&float_word_6;
  limited_value_3 = (int)(float)((float)(fmaxf(weighted_sum_15, weighted_sum_20) + a7) * weighted_sum_23);
  comparison_result_2 = weighted_sum_17 >= weighted_sum_22 ? weighted_sum_22 : weighted_sum_17;
  iteration_count = (int)(float)(weighted_sum_23 * (float)(comparison_result_2 - a7));
  limited_value = (int)(float)((float)(fmaxf(weighted_sum_17, weighted_sum_22) + a7) * weighted_sum_23);
  saved_component_delta = *(float *)&iteration_count;
  saved_limited_value_3 = limited_value;
  comparison_result_3 = weighted_sum_19 >= weighted_sum_24 ? weighted_sum_24 : weighted_sum_19;
  sr_swept_cell[1] = iteration_count;
  scaled_index = (int)(float)(weighted_sum_23 * (float)(comparison_result_3 - a7));
  limited_value_2 = (int)(float)((float)(fmaxf(weighted_sum_19, weighted_sum_24) + a7) * weighted_sum_23);
  cached_scaled_index = scaled_index;
  saved_limited_value_2 = limited_value_2;
  if ( iteration_count > limited_value )
    return 0;
  sr_swept_cell[1] = iteration_count;
  do
  {
    sr_swept_cell[2] = scaled_index;
    iteration_count_2 = scaled_index;
    if ( scaled_index > limited_value_2 )
      goto LABEL_98;
    saved_limited_value = limited_value_3;
    do
    {
      sr_swept_cell[0] = float_word_6;
      iteration_count_3 = float_word_6;
      if ( float_word_6 <= saved_limited_value )
      {
        while ( 1 )
        {
          if ( iteration_count_3 < 0 )
            goto LABEL_94;
          if ( iteration_count_3 >= (int)(*(unsigned int *)((char *)&g_15ADA9274 + record_word_offset) << 6) )
            goto LABEL_94;
          if ( iteration_count < 0 )
            goto LABEL_94;
          if ( iteration_count >= (int)(*(unsigned int *)((char *)&g_15ADA9278 + record_word_offset) << 6) )
            goto LABEL_94;
          if ( iteration_count_2 < 0 )
            goto LABEL_94;
          if ( iteration_count_2 >= (int)(*(unsigned int *)((char *)&g_15ADA927C + record_word_offset) << 6) )
            goto LABEL_94;
          shifted_bits = *(int *)(*(_QWORD *)((char *)(unsigned int *)&g_15ADA9288 + record_word_offset)
                       + 4LL
                       * (int)((iteration_count_3 >> 6)
                             + *(unsigned int *)((char *)&g_15ADA9274 + record_word_offset)
                             * ((iteration_count_2 >> 6) + *(unsigned int *)((char *)&g_15ADA927C + record_word_offset) * (iteration_count >> 6))));
          if ( (_DWORD)shifted_bits == -1 )
            goto LABEL_94;
          shifted_bits_2 = (int)dword_140404A6C[263004 * float_word_2
                                   + 111579985
                                   + 513 * shifted_bits
                                   + 64 * ((iteration_count >> 3) & 7)
                                   + 8 * ((iteration_count_2 >> 3) & 7)
                                   + ((iteration_count_3 >> 3) & 7)];
          if ( (_DWORD)shifted_bits_2 == -1 )
            goto LABEL_94;
          masked_bits = 6930 * shifted_bits_2 + (iteration_count_3 & 7) + 8 * ((iteration_count_2 & 7) + 8 * (iteration_count & 7u));
          saved_masked_bits = masked_bits;
          table_value = dword_140404A6C[masked_bits + 83199479];
          if ( table_value )
          {
            weighted_sum_25 = *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset);
            masked_bits_2 = table_value & 0x3FF;
            converted_vector = _mm_cvtsi32_si128(iteration_count);
            iteration_count_4 = 0;
            hibyte_result = HIBYTE(dword_140404A6C[masked_bits + 83199479]) & 3;
            weighted_sum_99 = *(float *)&masked_bits_2;
            saved_weighted_sum_3 = *(float *)&hibyte_result;
            state_address_8 = 3792 * masked_bits_2;
            weighted_sum_26 = (float)((float)iteration_count_3 + 0.5) * weighted_sum_25;
            converted_vector_2 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0] * weighted_sum_25;
            weighted_sum_27 = (float)((float)iteration_count_2 + 0.5) * weighted_sum_25;
            if ( (int)dword_140404A6C[948 * masked_bits_2 + 272299416] > 0 )
            {
              rol4_result = 1;
              table_value_2 = sr_swept_cell[2];
              saved_state_address = state_address_8;
              running_total = ((intptr_t)dword_140404A6C - 0x404a6cLL) + state_address_8 + 1093411124;
              do
              {
                if ( (rol4_result & dword_140404A6C[masked_bits + 83199991]) == 0 )
                {
                  loaded_word = *(int *)(running_total - 36);
                  (*(__int128 *)(void *)sr_swept_rotation) = xmmword_140278D30;
                  sr_swept_rotation[8] = 1.0;
                  (*(__int128 *)(void *)(sr_swept_rotation+4)) = xmmword_140278D30;
                  scaled_value_5 = (float)hibyte_result * 1.570796326795;
                  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_swept_rotation), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)(scaled_value_5))) /* the original converts to float (cvtsd2ss) before this call */);
                  combined_products = (float)((float)((float)(*(float *)(running_total - 32) * *(float *)&(*(__int128 *)(void *)sr_swept_rotation)) + weighted_sum_26)
                              + (float)(*(float *)(running_total - 28) * *((float *)&(*(__int128 *)(void *)sr_swept_rotation) + 3)))
                      + (float)(*(float *)(running_total - 24) * *((float *)&(*(__int128 *)(void *)(sr_swept_rotation+4)) + 2));
                  combined_products_2 = *(float *)(running_total - 24) * *((float *)&(*(__int128 *)(void *)(sr_swept_rotation+4)) + 3);
                  combined_products_3 = (float)((float)(*(float *)(running_total - 32) * *((float *)&(*(__int128 *)(void *)sr_swept_rotation) + 1)) + converted_vector_2)
                      + (float)(*(float *)(running_total - 28) * *(float *)&(*(__int128 *)(void *)(sr_swept_rotation+4)));
                  product_difference_2 = *(float *)(running_total - 24) * sr_swept_rotation[8];
                  combined_products_4 = (float)((float)(*(float *)(running_total - 32) * *((float *)&(*(__int128 *)(void *)sr_swept_rotation) + 2)) + weighted_sum_27)
                      + (float)(*(float *)(running_total - 28) * *((float *)&(*(__int128 *)(void *)(sr_swept_rotation+4)) + 1));
                  (*(__int128 *)(void *)sr_swept_rotation) = *(_OWORD *)(running_total - 20);
                  loaded_word_2 = *(_OWORD *)(running_total - 4);
                  position[0] = combined_products;
                  (*(__int128 *)(void *)(sr_swept_rotation+4)) = loaded_word_2;
                  sr_swept_rotation[8] = *(float *)(running_total + 12);
                  position[1] = combined_products_3 + combined_products_2;
                  position[2] = combined_products_4 + product_difference_2;
                  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_swept_rotation), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)(scaled_value_5))) /* the original converts to float (cvtsd2ss) before this call */);
                  scaled_index_2 = 1268 * loaded_word;
                  if ( *(_QWORD *)&dword_140404A6C[1268 * loaded_word + 278522249] )
                  {
                    mesh = &dword_140404A6C[scaled_index_2 + 278522247];
                    sr_collision_place_mesh((__int64)placed, (__int64)&dword_140404A6C[scaled_index_2 + 278522247], position, (float *)&(*(__int128 *)(void *)sr_swept_rotation));
                    slodword_result = sr_collision_capsule_placed_mesh(sr_swept_mesh_result, (__int64)mesh, (__int64)placed, from, to, SLODWORD(float_word));
                    *(float *)&hibyte_result = saved_weighted_sum_3;
                    masked_bits = saved_masked_bits;
                    if ( slodword_result )
                    {
                      comparison_operand = sr_swept_mesh_result[7];
                      if ( sr_swept_mesh_result[7] < *a3 )
                      {
                        saved_source_component_x = source_component_x_6;
                        source_component_y_2 = sr_swept_mesh_result[1];
                        comparison_operand_2 = LODWORD(saved_component_delta);
                        saved_layer = layer_2;
                        *source_component_x_6 = sr_swept_mesh_result[0];
                        source_component_z_2 = sr_swept_mesh_result[2];
                        saved_source_component_x[1] = source_component_y_2;
                        source_component_w = sr_swept_mesh_result[3];
                        saved_source_component_x[2] = source_component_z_2;
                        record_pointer = saved_source_component_w;
                        comparison_operand_3 = sr_swept_mesh_result[4];
                        *saved_source_component_w = source_component_w;
                        record_pointer[2] = sr_swept_mesh_result[5];
                        record_pointer[1] = comparison_operand_3;
                        g_151A848DC = comparison_operand_2;
                        *(float *)&item_hit_block = weighted_sum_99;
                        g_151A848F0 = 0;
                        item_hit_layer = saved_layer;
                        g_151A848D8 = iteration_count_3;
                        g_151A848E0 = table_value_2;
                        item_hit_unknown_7c = -1;
                        item_hit_block_turn = hibyte_result;
                        item_hit_block_part = iteration_count_4;
                        *a3 = comparison_operand;
                      }
                    }
                  }
                  else
                  {
                    *(float *)&hibyte_result = saved_weighted_sum_3;
                    masked_bits = saved_masked_bits;
                  }
                  saved_state_address = state_address_8;
                }
                ++iteration_count_4;
                rol4_result = __ROL4__(rol4_result, 1);
                running_total += 116;
              }
              while ( iteration_count_4 < *(int *)((char *)&g_1812C20CC + saved_state_address) );
              record_word_offset = saved_record_word_offset;
              iteration_count_2 = sr_swept_cell[2];
            }
            *(float *)&iteration_count = saved_component_delta;
          }
          table_value_3 = dword_140404A6C[masked_bits + 83198967];
          table_value_4 = dword_140404A6C[masked_bits + 83198967];
          if ( table_value_4 > 0 )
            break;
LABEL_64:
          table_value_5 = dword_140404A6C[saved_masked_bits + 83194359];
          masked_bits_6 = table_value_5 & 0xE0000000;
          if ( (table_value_5 & 0xE0000000) == 0x40000000 )
          {
            LODWORD(packed_word_bits_2) = *(unsigned int *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset);
            LODWORD(packed_word_bits) = table_value_5;
            *(float *)&float_word_8 = float_word;
            if ( sub_140034370(&sr_swept_position[0], &sr_swept_normal[0], &frame_float_at_40, from, to, float_word_8, &sr_swept_cell[0], packed_word_bits, packed_word_bits_2) && frame_float_at_40 < *a3 )
            {
              weighted_sum_29 = *(float *)((char *)&g_15ADA9254 + record_word_offset);
              weighted_sum_30 = *(float *)((char *)&g_15ADA9268 + record_word_offset);
              weighted_sum_31 = *(float *)((char *)&g_15ADA9258 + record_word_offset);
              weighted_sum_32 = *(float *)((char *)&g_15ADA926C + record_word_offset);
              weighted_sum_33 = *(float *)((char *)&g_15ADA925C + record_word_offset);
              weighted_sum_34 = *(float *)((char *)&g_15ADA9260 + record_word_offset);
              weighted_sum_35 = *(float *)((char *)&g_15ADA9270 + record_word_offset);
              weighted_sum_36 = *(float *)((char *)&g_15ADA9264 + record_word_offset);
              saved_source_component_x_2 = source_component_x_6;
              source_component_x = saved_source_component_w;
              weighted_sum_99 = *(float *)((char *)&g_15ADA9250 + record_word_offset);
              saved_weighted_sum_3 = weighted_sum_29;
              source_component_y_3 = sr_swept_normal[1];
              weighted_sum_37 = (float)((float)(weighted_sum_30 * sr_swept_position[2]) + (float)(weighted_sum_99 * sr_swept_position[0]))
                   + (float)((float)(weighted_sum_33 * sr_swept_position[1]) + *(float *)((char *)&g_15ADA9244 + record_word_offset));
              scaled_value_6 = weighted_sum_33 * sr_swept_normal[1];
              weighted_sum_38 = (float)((float)(weighted_sum_34 * sr_swept_position[1]) + *(float *)((char *)&g_15ADA9248 + record_word_offset))
                   + (float)((float)(weighted_sum_32 * sr_swept_position[2]) + (float)(weighted_sum_29 * sr_swept_position[0]));
              source_component_z_3 = sr_swept_normal[2];
              weighted_sum_39 = (float)(weighted_sum_35 * sr_swept_position[2]) + (float)(weighted_sum_31 * sr_swept_position[0]);
              scaled_value_7 = weighted_sum_31 * sr_swept_normal[0];
              scaled_value_8 = weighted_sum_99 * sr_swept_normal[0];
              scaled_value_9 = saved_weighted_sum_3 * sr_swept_normal[0];
              weighted_sum_40 = weighted_sum_39 + (float)((float)(weighted_sum_36 * sr_swept_position[1]) + *(float *)((char *)&g_15ADA924C + record_word_offset));
              *source_component_x_6 = weighted_sum_37;
              saved_source_component_x_2[1] = weighted_sum_38;
              saved_source_component_x_2[2] = weighted_sum_40;
              sr_swept_position[0] = weighted_sum_37;
              sr_swept_normal[0] = (float)(scaled_value_8 + scaled_value_6) + (float)(weighted_sum_30 * source_component_z_3);
              *source_component_x = sr_swept_normal[0];
              sr_swept_position[1] = weighted_sum_38;
              weighted_sum_41 = (float)(scaled_value_9 + (float)(weighted_sum_34 * source_component_y_3)) + (float)(weighted_sum_32 * source_component_z_3);
              sr_swept_position[2] = weighted_sum_40;
              sr_swept_normal[2] = (float)(scaled_value_7 + (float)(weighted_sum_36 * source_component_y_3)) + (float)(weighted_sum_35 * source_component_z_3);
              source_component_x[2] = sr_swept_normal[2];
LABEL_72:
              comparison_operand_4 = frame_float_at_40;
              source_component_x[1] = weighted_sum_41;
              *a3 = comparison_operand_4;
              g_151A848F0 = table_value_5;
              g_151A848D8 = iteration_count_3;
              g_151A848DC = iteration_count;
              g_151A848E0 = iteration_count_2;
LABEL_73:
              layer = layer_2;
              float_word = a7;
              item_hit_layer = layer_2;
              sr_swept_normal[1] = weighted_sum_41;
              item_hit_unknown_7c = -1;
              item_hit_block_part = -1;
              goto LABEL_79;
            }
          }
          else if ( masked_bits_6 == 0x80000000 )
          {
            if ( sub_140034AE0(
                   &sr_swept_position[0],
                   (__int64)&sr_swept_normal[0],
                   &frame_float_at_40,
                   from,
                   to,
                   SLODWORD(float_word),
                   (__int64)&sr_swept_cell[0],
                   table_value_5,
                   *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset))
              && frame_float_at_40 < *a3 )
            {
              weighted_sum_42 = *(float *)((char *)&g_15ADA925C + record_word_offset);
              weighted_sum_43 = *(float *)((char *)&g_15ADA9250 + record_word_offset);
              weighted_sum_44 = *(float *)((char *)&g_15ADA9268 + record_word_offset);
              weighted_sum_45 = *(float *)((char *)&g_15ADA9260 + record_word_offset);
              weighted_sum_46 = *(float *)((char *)&g_15ADA9254 + record_word_offset);
              weighted_sum_47 = *(float *)((char *)&g_15ADA926C + record_word_offset);
              weighted_sum_48 = *(float *)((char *)&g_15ADA9258 + record_word_offset);
              weighted_sum_49 = *(float *)((char *)&g_15ADA9270 + record_word_offset);
              saved_source_component_x_2 = source_component_x_6;
              source_component_x = saved_source_component_w;
              state_address_3 = (float)(sr_swept_position[1] * *(float *)((char *)&g_15ADA9264 + record_word_offset))
                   + *(float *)((char *)&g_15ADA924C + record_word_offset);
              weighted_sum_50 = (float)(sr_swept_position[1] * weighted_sum_45) + *(float *)((char *)&g_15ADA9248 + record_word_offset);
              weighted_sum_51 = (float)(sr_swept_position[2] * weighted_sum_47) + (float)(sr_swept_position[0] * weighted_sum_46);
              weighted_sum_52 = (float)(sr_swept_position[2] * weighted_sum_49) + (float)(sr_swept_position[0] * weighted_sum_48);
              source_component_z_4 = sr_swept_normal[2];
              weighted_sum_99 = (float)((float)(sr_swept_position[0] * weighted_sum_43) + (float)(sr_swept_position[1] * weighted_sum_42))
                   + (float)((float)(sr_swept_position[2] * weighted_sum_44) + *(float *)((char *)&g_15ADA9244 + record_word_offset));
              sr_swept_position[0] = weighted_sum_99;
              source_component_x_2 = sr_swept_normal[0];
              scaled_value_10 = sr_swept_normal[2] * weighted_sum_44;
              component_sum = weighted_sum_52 + state_address_3;
              saved_weighted_sum_3 = weighted_sum_50 + weighted_sum_51;
              source_component_y_4 = sr_swept_normal[1];
              sr_swept_position[1] = weighted_sum_50 + weighted_sum_51;
              weighted_sum_53 = sr_swept_normal[1] * *(float *)((char *)&g_15ADA9264 + record_word_offset);
              weighted_sum_54 = (float)(sr_swept_normal[1] * weighted_sum_42) + (float)(sr_swept_normal[0] * weighted_sum_43);
              source_component_x_6[2] = component_sum;
              sr_swept_position[2] = component_sum;
              *saved_source_component_x_2 = weighted_sum_99;
              saved_source_component_x_2[1] = saved_weighted_sum_3;
              sr_swept_normal[0] = weighted_sum_54 + scaled_value_10;
              *source_component_x = weighted_sum_54 + scaled_value_10;
              weighted_sum_41 = (float)((float)(source_component_y_4 * weighted_sum_45) + (float)(source_component_x_2 * weighted_sum_46)) + (float)(source_component_z_4 * weighted_sum_47);
              sr_swept_normal[2] = (float)((float)(source_component_x_2 * weighted_sum_48) + weighted_sum_53) + (float)(source_component_z_4 * weighted_sum_49);
              source_component_x[2] = sr_swept_normal[2];
              goto LABEL_72;
            }
          }
          else if ( masked_bits_6 == -1073741824 )
          {
            world_block_unknown_3008_at_result = iteration_count_3 - (unsigned __int8)table_value_5;
            byte2_result = iteration_count - BYTE2(table_value_5);
            byte1_result = iteration_count_2 - BYTE1(table_value_5);
            sr_swept_displaced_cell[0] = world_block_unknown_3008_at_result;
            LODWORD(state_address_8) = byte2_result;
            sr_swept_displaced_cell[1] = byte2_result;
            sr_swept_displaced_cell[2] = byte1_result;
            LODWORD(saved_weighted_sum_3) = sr_world_block_unknown_8_at(layer_2, world_block_unknown_3008_at_result, byte2_result, byte1_result);
            if ( sub_140034AE0(
                   &sr_swept_position[0],
                   (__int64)&sr_swept_normal[0],
                   &frame_float_at_40,
                   from,
                   to,
                   SLODWORD(float_word),
                   (__int64)&sr_swept_displaced_cell[0],
                   LODWORD(saved_weighted_sum_3),
                   *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset))
              && frame_float_at_40 < *a3 )
            {
              weighted_sum_55 = *(float *)((char *)&g_15ADA9258 + record_word_offset);
              weighted_sum_56 = *(float *)((char *)&g_15ADA9250 + record_word_offset);
              weighted_sum_57 = *(float *)((char *)&g_15ADA9268 + record_word_offset);
              weighted_sum_58 = *(float *)((char *)&g_15ADA925C + record_word_offset);
              weighted_sum_59 = *(float *)((char *)&g_15ADA9260 + record_word_offset);
              weighted_sum_60 = *(float *)((char *)&g_15ADA9254 + record_word_offset);
              weighted_sum_61 = *(float *)((char *)&g_15ADA926C + record_word_offset);
              source_component_z_5 = sr_swept_position[2];
              saved_source_component_x_2 = source_component_x_6;
              saved_component_sum = saved_source_component_w;
              comparison_operand_5 = LODWORD(saved_weighted_sum_3);
              source_component_z_6 = sr_swept_normal[2];
              weighted_sum_62 = (float)(sr_swept_position[2] * weighted_sum_57) + (float)(sr_swept_position[0] * weighted_sum_56);
              weighted_sum_63 = (float)(sr_swept_position[1] * weighted_sum_58) + *(float *)((char *)&g_15ADA9244 + record_word_offset);
              sr_swept_position[2] = (float)((float)(*(float *)((char *)&g_15ADA9270 + record_word_offset) * sr_swept_position[2]) + (float)(weighted_sum_55 * sr_swept_position[0]))
                   + (float)((float)(*(float *)((char *)&g_15ADA9264 + record_word_offset) * sr_swept_position[1])
                           + *(float *)((char *)&g_15ADA924C + record_word_offset));
              source_component_z_7 = sr_swept_position[2];
              weighted_sum_64 = (float)(sr_swept_position[1] * weighted_sum_59) + *(float *)((char *)&g_15ADA9248 + record_word_offset);
              component_sum_2 = weighted_sum_62 + weighted_sum_63;
              scaled_value_11 = source_component_z_5 * weighted_sum_61;
              scaled_value_12 = sr_swept_normal[2] * weighted_sum_57;
              weighted_sum_65 = scaled_value_11 + (float)(sr_swept_position[0] * weighted_sum_60);
              sr_swept_position[0] = component_sum_2;
              weighted_sum_99 = weighted_sum_64 + weighted_sum_65;
              sr_swept_position[1] = weighted_sum_64 + weighted_sum_65;
              weighted_sum_66 = sr_swept_normal[1] * *(float *)((char *)&g_15ADA9264 + record_word_offset);
              weighted_sum_67 = (float)(sr_swept_normal[1] * weighted_sum_58) + (float)(sr_swept_normal[0] * weighted_sum_56);
              scaled_value_13 = sr_swept_normal[0] * weighted_sum_55;
              weighted_sum_68 = (float)(sr_swept_normal[1] * weighted_sum_59) + (float)(sr_swept_normal[0] * weighted_sum_60);
              weighted_sum_69 = *(float *)((char *)&g_15ADA9270 + record_word_offset);
              *source_component_x_6 = component_sum_2;
              component_sum_3 = weighted_sum_67 + scaled_value_12;
              saved_source_component_x_2[2] = source_component_z_7;
              weighted_sum_70 = (float)(scaled_value_13 + weighted_sum_66) + (float)(weighted_sum_69 * source_component_z_6);
              sr_swept_normal[0] = component_sum_3;
              saved_source_component_x_2[1] = weighted_sum_99;
              weighted_sum_41 = weighted_sum_68 + (float)(source_component_z_6 * weighted_sum_61);
              comparison_operand_6 = frame_float_at_40;
              *saved_component_sum = component_sum_3;
              saved_component_sum[2] = weighted_sum_70;
              sr_swept_normal[2] = weighted_sum_70;
              saved_component_sum[1] = weighted_sum_41;
              *a3 = comparison_operand_6;
              g_151A848F0 = comparison_operand_5;
              g_151A848D8 = world_block_unknown_3008_at_result;
              g_151A848DC = state_address_8;
              g_151A848E0 = byte1_result;
              goto LABEL_73;
            }
          }
          saved_source_component_x_2 = source_component_x_6;
          layer = layer_2;
LABEL_79:
          table_value_6 = dword_140404A6C[saved_masked_bits + 83197431];
          masked_bits_7 = table_value_6 & 0xE0000000;
          if ( (table_value_6 & 0xE0000000) == 0x40000000 )
          {
            LODWORD(packed_word_bits_2) = *(unsigned int *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset);
            LODWORD(packed_word_bits) = table_value_6;
            *(float *)&float_word_8 = float_word;
            if ( !sub_140034370(&sr_swept_position[0], &sr_swept_normal[0], &frame_float_at_40, from, to, float_word_8, &sr_swept_cell[0], packed_word_bits, packed_word_bits_2) || frame_float_at_40 >= *a3 )
              goto LABEL_93;
            weighted_sum_71 = *(float *)((char *)&g_15ADA9250 + record_word_offset);
            weighted_sum_72 = *(float *)((char *)&g_15ADA9254 + record_word_offset);
            weighted_sum_73 = *(float *)((char *)&g_15ADA9258 + record_word_offset);
            weighted_sum_74 = *(float *)((char *)&g_15ADA925C + record_word_offset);
            weighted_sum_75 = *(float *)((char *)&g_15ADA9268 + record_word_offset);
            weighted_sum_76 = *(float *)((char *)&g_15ADA926C + record_word_offset);
            weighted_sum_77 = *(float *)((char *)&g_15ADA9260 + record_word_offset);
            weighted_sum_78 = *(float *)((char *)&g_15ADA9270 + record_word_offset);
            scaled_value_14 = weighted_sum_73 * sr_swept_position[0];
            weighted_sum_79 = *(float *)((char *)&g_15ADA9264 + record_word_offset) * sr_swept_position[1];
            weighted_sum_80 = (float)(weighted_sum_76 * sr_swept_position[2]) + (float)(weighted_sum_72 * sr_swept_position[0]);
            scaled_value_15 = weighted_sum_78 * sr_swept_position[2];
            *(float *)&state_address_8 = (float)((float)(weighted_sum_75 * sr_swept_position[2]) + (float)(weighted_sum_71 * sr_swept_position[0]))
                            + (float)((float)(weighted_sum_74 * sr_swept_position[1]) + *(float *)((char *)&g_15ADA9244 + record_word_offset));
            sr_swept_position[0] = *(float *)&state_address_8;
            scaled_value_16 = weighted_sum_77 * sr_swept_position[1];
          }
          else
          {
            if ( masked_bits_7 != 0x80000000 )
            {
              if ( masked_bits_7 != -1073741824 )
                goto LABEL_93;
              x = iteration_count_3 - (unsigned __int8)table_value_6;
              weighted_sum_99 = *(float *)&x;
              byte2_result_2 = iteration_count - BYTE2(table_value_6);
              sr_swept_displaced_cell[0] = x;
              byte1_result_2 = iteration_count_2 - BYTE1(table_value_6);
              saved_weighted_sum_3 = *(float *)&byte2_result_2;
              sr_swept_displaced_cell[1] = byte2_result_2;
              sr_swept_displaced_cell[2] = byte1_result_2;
              world_block_unknown_3008_at_result = sr_world_block_unknown_3008_at(layer, x, byte2_result_2, byte1_result_2);
              if ( !sub_140034AE0(
                      &sr_swept_position[0],
                      (__int64)&sr_swept_normal[0],
                      &frame_float_at_40,
                      from,
                      to,
                      SLODWORD(float_word),
                      (__int64)&sr_swept_displaced_cell[0],
                      world_block_unknown_3008_at_result,
                      *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset))
                || frame_float_at_40 >= *a3 )
              {
                goto LABEL_93;
              }
              weighted_sum_86 = *(float *)((char *)&g_15ADA9250 + record_word_offset);
              weighted_sum_87 = *(float *)((char *)&g_15ADA9254 + record_word_offset);
              weighted_sum_88 = *(float *)((char *)&g_15ADA9258 + record_word_offset);
              weighted_sum_89 = *(float *)((char *)&g_15ADA925C + record_word_offset);
              weighted_sum_90 = *(float *)((char *)&g_15ADA9260 + record_word_offset);
              saved_weighted_sum_2 = saved_source_component_w;
              scaled_value_22 = weighted_sum_88 * sr_swept_position[0];
              weighted_sum_91 = (float)(weighted_sum_90 * sr_swept_position[1]) + *(float *)((char *)&g_15ADA9248 + record_word_offset);
              state_address_5 = (float)(*(float *)((char *)&g_15ADA9264 + record_word_offset) * sr_swept_position[1])
                   + *(float *)((char *)&g_15ADA924C + record_word_offset);
              source_component_z_8 = sr_swept_normal[2];
              weighted_sum_92 = *(float *)((char *)&g_15ADA9268 + record_word_offset) * sr_swept_normal[2];
              state_address_6 = (float)(*(float *)((char *)&g_15ADA926C + record_word_offset) * sr_swept_position[2]) + (float)(weighted_sum_87 * sr_swept_position[0]);
              weighted_sum_93 = *(float *)((char *)&g_15ADA926C + record_word_offset) * sr_swept_normal[2];
              *(float *)&state_address_8 = (float)((float)(*(float *)((char *)&g_15ADA9268 + record_word_offset) * sr_swept_position[2])
                                      + (float)(weighted_sum_86 * sr_swept_position[0]))
                              + (float)((float)(weighted_sum_89 * sr_swept_position[1]) + *(float *)((char *)&g_15ADA9244 + record_word_offset));
              sr_swept_position[0] = *(float *)&state_address_8;
              state_address_7 = (float)(*(float *)((char *)&g_15ADA9270 + record_word_offset) * sr_swept_position[2]) + scaled_value_22;
              sr_swept_position[1] = weighted_sum_91 + state_address_6;
              weighted_sum_94 = sr_swept_normal[1] * *(float *)((char *)&g_15ADA9264 + record_word_offset);
              component_sum_5 = state_address_7 + state_address_5;
              scaled_value_23 = sr_swept_normal[0] * weighted_sum_88;
              weighted_sum_95 = (float)(sr_swept_normal[1] * weighted_sum_90) + (float)(sr_swept_normal[0] * weighted_sum_87);
              sr_swept_position[2] = component_sum_5;
              weighted_sum_96 = *(float *)((char *)&g_15ADA9270 + record_word_offset);
              weighted_sum_97 = (float)((float)(sr_swept_normal[1] * weighted_sum_89) + (float)(sr_swept_normal[0] * weighted_sum_86)) + weighted_sum_92;
              saved_source_component_x_2[1] = sr_swept_position[1];
              saved_source_component_x_2[2] = component_sum_5;
              component_sum_6 = weighted_sum_95 + weighted_sum_93;
              sr_swept_normal[0] = weighted_sum_97;
              weighted_sum_98 = (float)(scaled_value_23 + weighted_sum_94) + (float)(weighted_sum_96 * source_component_z_8);
              *(_DWORD *)saved_source_component_x_2 = state_address_8;
              comparison_operand_8 = frame_float_at_40;
              *saved_weighted_sum_2 = weighted_sum_97;
              saved_weighted_sum_2[1] = component_sum_6;
              saved_weighted_sum_2[2] = weighted_sum_98;
              LODWORD(saved_weighted_sum_2) = world_block_unknown_3008_at_result;
              *a3 = comparison_operand_8;
              g_151A848F0 = (unsigned int)saved_weighted_sum_2;
              item_hit_layer = layer_2;
              sr_swept_normal[1] = component_sum_6;
              sr_swept_normal[2] = weighted_sum_98;
              *(float *)&g_151A848D8 = weighted_sum_99;
              *(float *)&g_151A848DC = saved_weighted_sum_3;
              g_151A848E0 = byte1_result_2;
              goto LABEL_92;
            }
            if ( !sub_140034AE0(
                    &sr_swept_position[0],
                    (__int64)&sr_swept_normal[0],
                    &frame_float_at_40,
                    from,
                    to,
                    SLODWORD(float_word),
                    (__int64)&sr_swept_cell[0],
                    table_value_6,
                    *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset))
              || frame_float_at_40 >= *a3 )
            {
              goto LABEL_93;
            }
            weighted_sum_71 = *(float *)((char *)&g_15ADA9250 + record_word_offset);
            weighted_sum_72 = *(float *)((char *)&g_15ADA9254 + record_word_offset);
            weighted_sum_73 = *(float *)((char *)&g_15ADA9258 + record_word_offset);
            weighted_sum_74 = *(float *)((char *)&g_15ADA925C + record_word_offset);
            weighted_sum_75 = *(float *)((char *)&g_15ADA9268 + record_word_offset);
            weighted_sum_76 = *(float *)((char *)&g_15ADA926C + record_word_offset);
            weighted_sum_77 = *(float *)((char *)&g_15ADA9260 + record_word_offset);
            weighted_sum_78 = *(float *)((char *)&g_15ADA9270 + record_word_offset);
            scaled_value_14 = weighted_sum_73 * sr_swept_position[0];
            weighted_sum_79 = *(float *)((char *)&g_15ADA9264 + record_word_offset) * sr_swept_position[1];
            weighted_sum_80 = (float)(weighted_sum_76 * sr_swept_position[2]) + (float)(weighted_sum_72 * sr_swept_position[0]);
            scaled_value_15 = weighted_sum_78 * sr_swept_position[2];
            *(float *)&state_address_8 = (float)((float)(weighted_sum_74 * sr_swept_position[1]) + (float)(weighted_sum_71 * sr_swept_position[0]))
                            + (float)((float)(weighted_sum_75 * sr_swept_position[2]) + *(float *)((char *)&g_15ADA9244 + record_word_offset));
            sr_swept_position[0] = *(float *)&state_address_8;
            scaled_value_16 = weighted_sum_77 * sr_swept_position[1];
          }
          component_sum_4 = scaled_value_15 + scaled_value_14;
          source_component_x_3 = sr_swept_normal[0];
          saved_weighted_sum = saved_source_component_w;
          state_address_4 = (float)(scaled_value_16 + *(float *)((char *)&g_15ADA9248 + record_word_offset)) + weighted_sum_80;
          scaled_value_17 = weighted_sum_74 * sr_swept_normal[1];
          source_component_x_4 = sr_swept_normal[0];
          scaled_value_18 = weighted_sum_75 * sr_swept_normal[2];
          weighted_sum_81 = component_sum_4 + (float)(weighted_sum_79 + *(float *)((char *)&g_15ADA924C + record_word_offset));
          scaled_value_19 = weighted_sum_76 * sr_swept_normal[2];
          scaled_value_20 = weighted_sum_78 * sr_swept_normal[2];
          scaled_value_21 = weighted_sum_77 * sr_swept_normal[1];
          weighted_sum_82 = sr_swept_normal[1] * *(float *)((char *)&g_15ADA9264 + record_word_offset);
          *(_DWORD *)saved_source_component_x_2 = state_address_8;
          comparison_operand_7 = frame_float_at_40;
          saved_source_component_x_2[1] = state_address_4;
          saved_source_component_x_2[2] = weighted_sum_81;
          sr_swept_position[1] = state_address_4;
          sr_swept_position[2] = weighted_sum_81;
          weighted_sum_83 = (float)((float)(source_component_x_3 * weighted_sum_71) + scaled_value_17) + scaled_value_18;
          weighted_sum_84 = (float)((float)(source_component_x_4 * weighted_sum_72) + scaled_value_21) + scaled_value_19;
          weighted_sum_85 = (float)((float)(source_component_x_3 * weighted_sum_73) + weighted_sum_82) + scaled_value_20;
          *saved_weighted_sum = weighted_sum_83;
          sr_swept_normal[0] = weighted_sum_83;
          saved_weighted_sum[1] = weighted_sum_84;
          sr_swept_normal[1] = weighted_sum_84;
          saved_weighted_sum[2] = weighted_sum_85;
          LODWORD(saved_weighted_sum) = layer_2;
          *a3 = comparison_operand_7;
          g_151A848F0 = table_value_6;
          item_hit_layer = (unsigned int)saved_weighted_sum;
          g_151A848D8 = iteration_count_3;
          g_151A848DC = iteration_count;
          g_151A848E0 = iteration_count_2;
          sr_swept_normal[2] = weighted_sum_85;
LABEL_92:
          item_hit_block_part = -1;
          item_hit_unknown_7c = -1;
LABEL_93:
          float_word_2 = input_value;
          saved_limited_value = limited_value_3;
LABEL_94:
          float_word = a7;
          sr_swept_cell[0] = ++iteration_count_3;
          if ( iteration_count_3 > saved_limited_value )
          {
            *(float *)&float_word_6 = saved_component_delta_2;
            limited_value_2 = saved_limited_value_2;
            goto LABEL_96;
          }
        }
        masked_bits_3 = table_value_4 & 0x7F;
        masked_bits_4 = 2310LL * (table_value_4 & 0x7F);
        float_word_7 = dword_140404A6C[masked_bits_4 + 432533577];
        sr_swept_origin[0] = *(float *)&dword_140404A6C[masked_bits_4 + 432533576];
        sr_swept_origin[2] = *(float *)&dword_140404A6C[masked_bits_4 + 432533578];
        sr_swept_origin[1] = *(float *)&float_word_7;
        if ( (table_value_3 & 0xC00) == 0x400 )
        {
          sr_math_vec3_rotate(&sr_swept_origin[0], (float *)&dword_1402F6188, sr_export_float_lane_container(1070141403));
          masked_bits_5 = table_value_4 & 0xC00;
          goto LABEL_56;
        }
        masked_bits_5 = table_value_4 & 0xC00;
        if ( masked_bits_5 == 2048 )
        {
          selection_code = 1078530011;
        }
        else
        {
          if ( masked_bits_5 != 3072 )
            goto LABEL_56;
          selection_code = 1083624420;
        }
        sr_math_vec3_rotate(&sr_swept_origin[0], (float *)&dword_1402F6188, *(double *)&selection_code);
LABEL_56:
        weighted_sum_28 = *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset);
        sr_swept_rotation[8] = 1.0;
        sr_swept_origin[0] = sr_swept_origin[0] + (float)((float)((float)iteration_count_3 + 0.5) * weighted_sum_28);
        sr_swept_origin[1] = sr_swept_origin[1] + (float)((float)iteration_count * weighted_sum_28);
        sr_swept_origin[2] = sr_swept_origin[2] + (float)((float)((float)iteration_count_2 + 0.5) * weighted_sum_28);
        (*(__int128 *)(void *)sr_swept_rotation) = xmmword_140278D30;
        (*(__int128 *)(void *)(sr_swept_rotation+4)) = xmmword_140278D30;
        switch ( masked_bits_5 )
        {
          case 1024:
            selection_code_2 = 1070141403;
            break;
          case 2048:
            selection_code_2 = 1078530011;
            break;
          case 3072:
            selection_code_2 = 1083624420;
            break;
          default:
            goto LABEL_63;
        }
        sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_swept_rotation), (float *)&dword_1402F6188, *(double *)&selection_code_2);
LABEL_63:
        if ( sub_140032E60(&sr_swept_position[0], (__int64)&sr_swept_normal[0], &frame_float_at_40, masked_bits_3, &sr_swept_origin[0], (float *)&(*(__int128 *)(void *)sr_swept_rotation), from, to, float_word) )
        {
          saved_source_component_x_3 = source_component_x_6;
          saved_source_component_x_4 = saved_source_component_w;
          source_component_y_5 = sr_swept_position[1];
          *source_component_x_6 = sr_swept_position[0];
          source_component_z_9 = sr_swept_position[2];
          saved_source_component_x_3[1] = source_component_y_5;
          source_component_x_5 = sr_swept_normal[0];
          saved_source_component_x_3[2] = source_component_z_9;
          source_component_y_6 = sr_swept_normal[1];
          *saved_source_component_x_4 = source_component_x_5;
          source_component_z_10 = sr_swept_normal[2];
          saved_source_component_x_4[1] = source_component_y_6;
          comparison_operand_9 = frame_float_at_40;
          saved_source_component_x_4[2] = source_component_z_10;
          *a3 = comparison_operand_9;
          g_151A848D8 = -1;
          return 1;
        }
        goto LABEL_64;
      }
LABEL_96:
      sr_swept_cell[2] = ++iteration_count_2;
    }
    while ( iteration_count_2 <= limited_value_2 );
    scaled_index = cached_scaled_index;
    limited_value = saved_limited_value_3;
LABEL_98:
    ++iteration_count;
    saved_component_delta = *(float *)&iteration_count;
    sr_swept_cell[1] = iteration_count;
  }
  while ( iteration_count <= limited_value );
  unsigned char sr_swept_hit;
  __asm__ volatile("comiss %2, %1; seta %0" : "=qm"(sr_swept_hit)
    : "x"(_mm_set_ss(65536.0f)), "x"(_mm_set_ss(*a3)) : "cc");
  return sr_swept_hit;
}
#undef float_word_8
#undef packed_word_bits
#undef packed_word_bits_2
#undef frame_float_at_40
#undef layer_2
#undef saved_weighted_sum_3
#undef limited_value_3
#undef weighted_sum_99
#undef state_address_8
#undef saved_component_delta
#undef source_component_x_6
#undef input_value
#undef saved_component_delta_2
#undef saved_source_component_w
#undef world_block_unknown_3008_at_result
#undef saved_masked_bits
#undef saved_limited_value_2
#undef cached_scaled_index
#undef saved_limited_value_3
#undef position
#undef saved_record_word_offset
#undef to
#undef from
#undef placed
#undef unused_frame_slot_13232

//----- (0000000140032E60) ----------------------------------------------------
_BOOL8            sub_140032E60(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        int a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float a9)
{
  float *from;
  float input_value;
  float scaled_value;
  __int64 record_word_offset;
  float weighted_sum;
  float product_difference;
  float source_component_y;
  float component_delta;
  float component_sum;
  signed int iteration_count;
  __int64 record_word_offset_2;
  unsigned int *state_address;
  float source_component_w;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  __int64 table_value;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float state_address_2;
  float weighted_sum_6;
  float weighted_sum_7;
  float state_address_3;
  float weighted_sum_8;
  float state_address_4;
  float product_difference_2;
  float product_difference_3;
  float product_difference_4;
  float square_root;
  bool comparison_result;
  float source_component_y_2;
  float scaled_value_2;
  float source_component_z;
  __int64 table_value_2;
  float state_address_5;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float state_address_6;
  float input_value_2;
  int table_value_3;
  int table_value_4;
  int loaded_word;
  int loaded_word_2;
  float input_value_3;
  int table_value_5;
  int table_value_6;
  int loaded_word_3;
  int loaded_word_4;
  _Alignas(8) unsigned sr_swept_surface_normal[3];
  int sr_swept_surface_point[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140032E60[400];
#define radius (*(__int64 (*))(void *)(sr_frame_140032E60 + 0)) /* [rsp+28h] */
#define scaled_index (*(__int64 (*))(void *)(sr_frame_140032E60 + 40)) /* [rsp+50h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_140032E60 + 48)) /* [rsp+58h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_140032E60 + 88)) /* [rsp+80h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_140032E60 + 104)) /* [rsp+90h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_140032E60 + 120)) /* [rsp+A0h] */
#define float_buffer_4 (*(float (*)[4])(void *)(sr_frame_140032E60 + 136)) /* [rsp+B0h] */
#define state_address_7 (*(float (*))(void *)(sr_frame_140032E60 + 384)) /* [rsp+1A8h] */
#define state_address_8 (*(float (*))(void *)(sr_frame_140032E60 + 392)) /* [rsp+1B0h] */

  from = a7;
  input_value = a9;
  scaled_value = *a5;
  record_word_offset = 2310LL * a4;
  scaled_index = record_word_offset * 4;
  weighted_sum = *(float *)&dword_140404A6C[record_word_offset + 432531269];
  product_difference = *a5 - weighted_sum;
  if ( (float)(*a7 + a9) < product_difference && (float)(a9 + *a8) < product_difference )
    return 0;
  source_component_y = a5[1];
  if ( (float)(a7[1] + a9) < (float)(source_component_y - weighted_sum) && (float)(a9 + a8[1]) < (float)(source_component_y - weighted_sum) )
    return 0;
  component_delta = a5[2] - weighted_sum;
  if ( (float)(a7[2] + a9) < component_delta && (float)(a9 + a8[2]) < component_delta )
    return 0;
  if ( (float)(*a7 - a9) > (float)(weighted_sum + scaled_value) && (float)(*a8 - a9) > (float)(weighted_sum + scaled_value) )
    return 0;
  if ( (float)(a7[1] - a9) > (float)(weighted_sum + source_component_y) && (float)(a8[1] - a9) > (float)(weighted_sum + source_component_y) )
    return 0;
  component_sum = weighted_sum + a5[2];
  if ( (float)(a7[2] - a9) > component_sum && (float)(a8[2] - a9) > component_sum )
    return 0;
  iteration_count = 0;
  *a3 = 65536.0;
  if ( (int)dword_140404A6C[record_word_offset + 432532039] <= 0 )
    return 0;
  record_word_offset_2 = 770LL * a4;
  state_address = &dword_140404A6C[record_word_offset + 432532042];
  saved_record_word_offset = record_word_offset_2;
  do
  {
    source_component_w = a6[3];
    combined_products = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531271 + 3 * (int)*(state_address - 1)];
    combined_products_2 = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)*(state_address - 1)];
    combined_products_3 = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)*(state_address - 1)];
    table_value = record_word_offset_2 + (int)state_address[1];
    weighted_sum_2 = (float)((float)(source_component_w * combined_products_2) + (float)(*a6 * combined_products)) + (float)(a6[6] * combined_products_3);
    weighted_sum_3 = (float)((float)(a6[4] * combined_products_2) + (float)(a6[1] * combined_products)) + (float)(a6[7] * combined_products_3);
    weighted_sum_4 = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)*state_address];
    weighted_sum_5 = (float)((float)(a6[5] * combined_products_2) + (float)(a6[2] * combined_products)) + (float)(a6[8] * combined_products_3);
    state_address_2 = (float)((float)(*(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531271 + 3 * (int)*state_address] * *a6) + (float)(weighted_sum_4 * source_component_w))
        + (float)(*(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)*state_address] * a6[6]);
    weighted_sum_6 = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)*state_address];
    weighted_sum_7 = (float)((float)(weighted_sum_4 * a6[4]) + (float)(*(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531271 + 3 * (int)*state_address] * a6[1]))
        + (float)(weighted_sum_6 * a6[7]);
    state_address_3 = (float)((float)(*(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531271 + 3 * (int)*state_address] * a6[2]) + (float)(weighted_sum_4 * a6[5]))
        + (float)(weighted_sum_6 * a6[8]);
    weighted_sum_8 = *(float *)&dword_140404A6C[3 * table_value + 432531273];
    state_address_7 = (float)((float)(*(float *)&dword_140404A6C[3 * table_value + 432531271] * *a6)
                + (float)(*(float *)&dword_140404A6C[3 * table_value + 432531272] * source_component_w))
        + (float)(weighted_sum_8 * a6[6]);
    state_address_4 = (float)((float)(*(float *)&dword_140404A6C[3 * table_value + 432531271] * a6[2])
                + (float)(*(float *)&dword_140404A6C[3 * table_value + 432531272] * a6[5]))
        + (float)(weighted_sum_8 * a6[8]);
    state_address_8 = (float)((float)(*(float *)&dword_140404A6C[3 * table_value + 432531271] * a6[1])
                + (float)(*(float *)&dword_140404A6C[3 * table_value + 432531272] * a6[4]))
        + (float)(weighted_sum_8 * a6[7]);
    product_difference_2 = (float)((float)(state_address_8 - weighted_sum_3) * (float)(state_address_3 - weighted_sum_5)) - (float)((float)(state_address_4 - weighted_sum_5) * (float)(weighted_sum_7 - weighted_sum_3));
    product_difference_3 = (float)((float)(state_address_4 - weighted_sum_5) * (float)(state_address_2 - weighted_sum_2)) - (float)((float)(state_address_7 - weighted_sum_2) * (float)(state_address_3 - weighted_sum_5));
    product_difference_4 = (float)((float)(state_address_7 - weighted_sum_2) * (float)(weighted_sum_7 - weighted_sum_3)) - (float)((float)(state_address_8 - weighted_sum_3) * (float)(state_address_2 - weighted_sum_2));
    square_root = fsqrt((float)((float)(product_difference_3 * product_difference_3) + (float)(product_difference_2 * product_difference_2)) + (float)(product_difference_4 * product_difference_4));
    if ( square_root == 0.0 )
    {
      (*(int64_t *)(void *)sr_swept_surface_normal) = 0;
      (*(float *)&sr_swept_surface_normal[2]) = 0.0;
    }
    else
    {
      *(float *)&(*(int64_t *)(void *)sr_swept_surface_normal) = (float)(1.0 / square_root) * product_difference_2;
      *((float *)&(*(int64_t *)(void *)sr_swept_surface_normal) + 1) = (float)(1.0 / square_root) * product_difference_3;
      (*(float *)&sr_swept_surface_normal[2]) = (float)(1.0 / square_root) * product_difference_4;
    }
    comparison_result = *(state_address - 2) == 4;
    source_component_y_2 = a5[1];
    scaled_value_2 = *a5;
    source_component_z = a5[2];
    float_buffer_2[1] = weighted_sum_3 + source_component_y_2;
    float_buffer_2[0] = weighted_sum_2 + scaled_value_2;
    float_buffer_2[2] = weighted_sum_5 + source_component_z;
    float_buffer_3[1] = source_component_y_2 + weighted_sum_7;
    float_buffer_3[2] = source_component_z + state_address_3;
    float_buffer_3[0] = state_address_2 + scaled_value_2;
    float_buffer[0] = scaled_value_2 + state_address_7;
    float_buffer[1] = source_component_y_2 + state_address_8;
    float_buffer[2] = source_component_z + state_address_4;
    if ( comparison_result )
    {
      table_value_2 = record_word_offset_2 + (int)state_address[2];
      state_address_5 = (float)(*(float *)&dword_140404A6C[3 * table_value_2 + 432531272] * a6[3]) + scaled_value_2;
      weighted_sum_9 = *(float *)&dword_140404A6C[3 * table_value_2 + 432531273];
      weighted_sum_10 = *(float *)&dword_140404A6C[3 * table_value_2 + 432531271];
      weighted_sum_11 = (float)((float)(weighted_sum_9 * a6[6]) + (float)(weighted_sum_10 * *a6)) + state_address_5;
      weighted_sum_12 = (float)(weighted_sum_9 * a6[8]) + (float)(weighted_sum_10 * a6[2]);
      weighted_sum_13 = *(float *)&dword_140404A6C[3 * table_value_2 + 432531272] * a6[5];
      weighted_sum_14 = (float)(weighted_sum_9 * a6[7]) + (float)(weighted_sum_10 * a6[1]);
      state_address_6 = (float)(*(float *)&dword_140404A6C[3 * table_value_2 + 432531272] * a6[4]) + source_component_y_2;
      float_buffer_4[0] = weighted_sum_11;
      float_buffer_4[1] = weighted_sum_14 + state_address_6;
      float_buffer_4[2] = weighted_sum_12 + (float)(weighted_sum_13 + source_component_z);
    }
    *(float *)&radius = input_value;
    if ( (unsigned int)sr_collision_sphere_triangle((float *)&sr_swept_surface_point[0], (float *)&(*(int64_t *)(void *)sr_swept_surface_normal), &a9, from, a8, radius, float_buffer_2, float_buffer_3, float_buffer) )
    {
      input_value_2 = a9;
      if ( a9 < *a3 )
      {
        table_value_3 = sr_swept_surface_point[1];
        *a1 = sr_swept_surface_point[0];
        table_value_4 = sr_swept_surface_point[2];
        a1[1] = table_value_3;
        loaded_word = (*(int64_t *)(void *)sr_swept_surface_normal);
        a1[2] = table_value_4;
        loaded_word_2 = HIDWORD((*(int64_t *)(void *)sr_swept_surface_normal));
        *(_DWORD *)a2 = loaded_word;
        *(float *)(a2 + 8) = (*(float *)&sr_swept_surface_normal[2]);
        *(_DWORD *)(a2 + 4) = loaded_word_2;
        *a3 = input_value_2;
      }
    }
    if ( *(state_address - 2) == 4 )
    {
      *(float *)&radius = input_value;
      if ( (unsigned int)sr_collision_sphere_triangle((float *)&sr_swept_surface_point[0], (float *)&(*(int64_t *)(void *)sr_swept_surface_normal), &a9, a7, a8, radius, float_buffer_2, float_buffer, float_buffer_4) )
      {
        input_value_3 = a9;
        if ( a9 < *a3 )
        {
          table_value_5 = sr_swept_surface_point[1];
          *a1 = sr_swept_surface_point[0];
          table_value_6 = sr_swept_surface_point[2];
          a1[1] = table_value_5;
          loaded_word_3 = (*(int64_t *)(void *)sr_swept_surface_normal);
          a1[2] = table_value_6;
          loaded_word_4 = HIDWORD((*(int64_t *)(void *)sr_swept_surface_normal));
          *(_DWORD *)a2 = loaded_word_3;
          *(float *)(a2 + 8) = (*(float *)&sr_swept_surface_normal[2]);
          *(_DWORD *)(a2 + 4) = loaded_word_4;
          *a3 = input_value_3;
        }
      }
    }
    from = a7;
    ++iteration_count;
    record_word_offset_2 = saved_record_word_offset;
    state_address += 6;
  }
  while ( iteration_count < *(int *)((char *)&g_1A75FF388 + scaled_index) );
  return *a3 < 65536.0;
}
#undef radius
#undef scaled_index
#undef saved_record_word_offset
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef state_address_7
#undef state_address_8

//----- (00000001400337B0) ----------------------------------------------------
_BOOL8            sub_1400337B0(float *a1, __int64 a2, float *a3, float *a4, int a5)
{
  int iteration_count;
  int *record_byte_offset;
  int input_value;
  float combined_products;
  float combined_products_2;
  __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 scaled_index_2;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float component_delta_4;
  float component_delta_5;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float saved_distance;
  int table_value;
  int table_value_2;
  int loaded_word;
  int loaded_word_2;
  float state_address;
  __int64 scaled_index_3;
  float weighted_sum_6;
  float weighted_sum_7;
  float saved_distance_2;
  int table_value_3;
  int table_value_4;
  int loaded_word_3;
  int loaded_word_4;
  float state_address_2;
  _Alignas(8) unsigned sr_swept_triangle_normal[3];
  int sr_swept_triangle_point[3];
  float sr_swept_triangle_vertex[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400337B0[304];
#define radius (*(__int64 (*))(void *)(sr_frame_1400337B0 + 0)) /* [rsp+30h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400337B0 + 88)) /* [rsp+88h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400337B0 + 104)) /* [rsp+98h] */
#define float_buffer_3 (*(float (*)[6])(void *)(sr_frame_1400337B0 + 120)) /* [rsp+A8h] */
#define distance (*(float (*))(void *)(sr_frame_1400337B0 + 296)) /* [rsp+158h] */

  iteration_count = 0;
  a1[7] = 65536.0;
  if ( *(int *)(a2 + 32772) <= 0 )
    return 0;
  record_byte_offset = (int *)(a2 + 32784);
  input_value = a5;
  do
  {
    combined_products = *(float *)(a2 + 16LL * *(record_byte_offset - 1) + 12);
    combined_products_2 = *(float *)(a2 + 16LL * *(record_byte_offset - 1) + 16);
    scaled_index = 2LL * *record_byte_offset;
    float_buffer[0] = *(float *)(a2 + 16LL * *(record_byte_offset - 1) + 8);
    float_buffer[2] = combined_products_2;
    float_buffer[1] = combined_products;
    weighted_sum = *(float *)(a2 + 8 * scaled_index + 16);
    weighted_sum_2 = *(float *)(a2 + 8 * scaled_index + 8);
    weighted_sum_3 = *(float *)(a2 + 8 * scaled_index + 12);
    scaled_index_2 = 2LL * record_byte_offset[1];
    float_buffer_2[2] = weighted_sum;
    component_delta = weighted_sum - combined_products_2;
    float_buffer_2[1] = weighted_sum_3;
    component_delta_2 = weighted_sum_3 - combined_products;
    float_buffer_2[0] = weighted_sum_2;
    component_delta_3 = weighted_sum_2 - float_buffer[0];
    weighted_sum_4 = *(float *)(a2 + 8 * scaled_index_2 + 8);
    weighted_sum_5 = *(float *)(a2 + 8 * scaled_index_2 + 12);
    sr_swept_triangle_vertex[2] = *(float *)(a2 + 8 * scaled_index_2 + 16);
    sr_swept_triangle_vertex[0] = weighted_sum_4;
    component_delta_4 = weighted_sum_4 - float_buffer[0];
    sr_swept_triangle_vertex[1] = weighted_sum_5;
    component_delta_5 = weighted_sum_5 - combined_products;
    product_difference = (float)(component_delta_5 * component_delta) - (float)((float)(sr_swept_triangle_vertex[2] - combined_products_2) * component_delta_2);
    product_difference_2 = (float)((float)(sr_swept_triangle_vertex[2] - combined_products_2) * component_delta_3) - (float)(component_delta_4 * component_delta);
    product_difference_3 = (float)(component_delta_4 * component_delta_2) - (float)(component_delta_5 * component_delta_3);
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      (*(int64_t *)(void *)sr_swept_triangle_normal) = 0;
      (*(float *)&sr_swept_triangle_normal[2]) = 0.0;
    }
    else
    {
      *(float *)&(*(int64_t *)(void *)sr_swept_triangle_normal) = product_difference * (float)(1.0 / square_root);
      *((float *)&(*(int64_t *)(void *)sr_swept_triangle_normal) + 1) = product_difference_2 * (float)(1.0 / square_root);
      (*(float *)&sr_swept_triangle_normal[2]) = product_difference_3 * (float)(1.0 / square_root);
    }
    LODWORD(radius) = input_value;
    if ( (unsigned int)sr_collision_sphere_triangle((float *)&sr_swept_triangle_point[0], (float *)&(*(int64_t *)(void *)sr_swept_triangle_normal), &distance, a3, a4, radius, float_buffer, float_buffer_2, sr_swept_triangle_vertex) )
    {
      saved_distance = distance;
      if ( distance < a1[7] )
      {
        table_value = sr_swept_triangle_point[1];
        *(_DWORD *)a1 = sr_swept_triangle_point[0];
        table_value_2 = sr_swept_triangle_point[2];
        *((_DWORD *)a1 + 1) = table_value;
        loaded_word = (*(int64_t *)(void *)sr_swept_triangle_normal);
        *((_DWORD *)a1 + 2) = table_value_2;
        loaded_word_2 = HIDWORD((*(int64_t *)(void *)sr_swept_triangle_normal));
        *((_DWORD *)a1 + 3) = loaded_word;
        state_address = (*(float *)&sr_swept_triangle_normal[2]);
        *((_DWORD *)a1 + 4) = loaded_word_2;
        a1[5] = state_address;
        a1[7] = saved_distance;
      }
    }
    if ( *(record_byte_offset - 2) == 4 )
    {
      scaled_index_3 = 2LL * record_byte_offset[2];
      weighted_sum_6 = *(float *)(a2 + 16LL * record_byte_offset[2] + 12);
      float_buffer_3[0] = *(float *)(a2 + 16LL * record_byte_offset[2] + 8);
      weighted_sum_7 = *(float *)(a2 + 8 * scaled_index_3 + 16);
      LODWORD(radius) = input_value;
      float_buffer_3[1] = weighted_sum_6;
      float_buffer_3[2] = weighted_sum_7;
      if ( (unsigned int)sr_collision_sphere_triangle((float *)&sr_swept_triangle_point[0], (float *)&(*(int64_t *)(void *)sr_swept_triangle_normal), &distance, a3, a4, radius, float_buffer, sr_swept_triangle_vertex, float_buffer_3) )
      {
        saved_distance_2 = distance;
        if ( distance < a1[7] )
        {
          table_value_3 = sr_swept_triangle_point[1];
          *(_DWORD *)a1 = sr_swept_triangle_point[0];
          table_value_4 = sr_swept_triangle_point[2];
          *((_DWORD *)a1 + 1) = table_value_3;
          loaded_word_3 = (*(int64_t *)(void *)sr_swept_triangle_normal);
          *((_DWORD *)a1 + 2) = table_value_4;
          loaded_word_4 = HIDWORD((*(int64_t *)(void *)sr_swept_triangle_normal));
          *((_DWORD *)a1 + 3) = loaded_word_3;
          state_address_2 = (*(float *)&sr_swept_triangle_normal[2]);
          *((_DWORD *)a1 + 4) = loaded_word_4;
          a1[5] = state_address_2;
          a1[7] = saved_distance_2;
        }
      }
    }
    ++iteration_count;
    record_byte_offset += 8;
  }
  while ( iteration_count < *(_DWORD *)(a2 + 32772) );
  return a1[7] < 65536.0;
}
#undef radius
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef distance

//----- (0000000140033FE0) ----------------------------------------------------
__int64            sub_140033FE0(float *a1, float *a2, float a3)
{
  float source_component_y;
  float source_component_z;
  float product_difference;
  float scaled_value;
  float weighted_sum;
  float source_component_y_2;
  float source_component_z_2;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float component_delta_4;
  float component_delta_5;
  float component_delta_6;
  float component_sum;
  float component_sum_2;
  float component_sum_3;
  signed int iteration_count;
  unsigned int *state_address;
  __int64 unused_local;
  float sr_swept_lower[3];
  float sr_swept_upper[3];
  _Alignas(16) unsigned sr_swept_result[8];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140033FE0[147824];
#define frame_float_at_0 (*(float (*))(void *)(sr_frame_140033FE0 + 0)) /* [rsp+40h] */
#define scratch_buffer (*(int (*)[18436])(void *)(sr_frame_140033FE0 + 74064)) /* [rsp+12190h] */
#define unused_frame_slot_147808 (*(__int64 (*))(void *)(sr_frame_140033FE0 + 147808)) /* [rsp+241A0h] */

  *(unsigned int *)&world_unknown_151a84898 = 1065353216;
  *(unsigned int *)&g_151A8489C = 1199570944;
  item_hit_unknown_7c = -1;
  item_hit_block_part = -1;
  source_component_y = a1[1];
  source_component_z = a1[2];
  product_difference = *a1 - a3;
  scaled_value = *a2;
  weighted_sum = *a1 + a3;
  source_component_y_2 = a2[1];
  source_component_z_2 = a2[2];
  component_delta = source_component_y - a3;
  scratch_buffer[0] = 0;
  sr_swept_upper[0] = product_difference;
  sr_swept_lower[0] = weighted_sum;
  component_delta_2 = source_component_z - a3;
  scratch_buffer[8193] = 0;
  component_delta_3 = source_component_y + a3;
  sr_swept_upper[1] = component_delta;
  component_delta_4 = source_component_z + a3;
  scratch_buffer[16386] = 0;
  sr_swept_upper[2] = component_delta_2;
  component_delta_5 = source_component_y_2 - a3;
  sr_swept_lower[1] = component_delta_3;
  component_delta_6 = source_component_z_2 - a3;
  sr_swept_lower[2] = component_delta_4;
  if ( product_difference > (float)(scaled_value - a3) )
  {
    sr_swept_upper[0] = scaled_value - a3;
    product_difference = scaled_value - a3;
  }
  if ( component_delta > component_delta_5 )
  {
    sr_swept_upper[1] = source_component_y_2 - a3;
    component_delta = source_component_y_2 - a3;
  }
  if ( component_delta_2 > component_delta_6 )
  {
    sr_swept_upper[2] = source_component_z_2 - a3;
    component_delta_2 = source_component_z_2 - a3;
  }
  if ( weighted_sum < (float)(scaled_value - a3) )
  {
    sr_swept_lower[0] = scaled_value - a3;
    weighted_sum = scaled_value - a3;
  }
  if ( component_delta_3 < component_delta_5 )
  {
    sr_swept_lower[1] = source_component_y_2 - a3;
    component_delta_3 = source_component_y_2 - a3;
  }
  if ( component_delta_4 < component_delta_6 )
  {
    sr_swept_lower[2] = source_component_z_2 - a3;
    component_delta_4 = source_component_z_2 - a3;
  }
  component_sum = scaled_value + a3;
  component_sum_2 = source_component_y_2 + a3;
  component_sum_3 = source_component_z_2 + a3;
  if ( product_difference > component_sum )
    sr_swept_upper[0] = component_sum;
  if ( component_delta > component_sum_2 )
    sr_swept_upper[1] = component_sum_2;
  if ( component_delta_2 > component_sum_3 )
    sr_swept_upper[2] = component_sum_3;
  if ( weighted_sum < component_sum )
    sr_swept_lower[0] = component_sum;
  if ( component_delta_3 < component_sum_2 )
    sr_swept_lower[1] = component_sum_2;
  if ( component_delta_4 < component_sum_3 )
    sr_swept_lower[2] = component_sum_3;
  sub_1400D05B0(scratch_buffer, &sr_swept_upper[0], &sr_swept_lower[0]);
  if ( sub_1400337B0((float *)&(*(__int128 *)(void *)sr_swept_result), (__int64)scratch_buffer, a1, a2, SLODWORD(a3)) && g_151A8489C > (*(float *)&sr_swept_result[7]) )
  {
    item_hit_layer = 0;
    *(_OWORD *)&g_151A84880 = (*(__int128 *)(void *)sr_swept_result);
    *(unsigned int *)&g_151A84890 = sr_swept_result[4];
    *(unsigned int *)&g_151A84894 = sr_swept_result[5];
    g_151A8489C = (*(float *)&sr_swept_result[7]);
  }
  iteration_count = 0;
  state_address = &g_15ADA9240;
  do
  {
    if ( *state_address
      && (unsigned int)sub_140031530(&sr_swept_upper[0], &sr_swept_lower[0], &frame_float_at_0, iteration_count, a1, a2, a3)
      && g_151A8489C > frame_float_at_0 )
    {
      *(float *)&g_151A84880 = sr_swept_upper[0];
      (ragdoll_unknown_height) = sr_swept_upper[1];
      *(float *)&g_151A84888 = sr_swept_upper[2];
      g_151A8488C = sr_swept_lower[0];
      g_151A84890 = sr_swept_lower[1];
      g_151A84894 = sr_swept_lower[2];
      g_151A8489C = frame_float_at_0;
      item_hit_layer = iteration_count;
    }
    ++iteration_count;
    state_address += 263004;
  }
  while ( iteration_count < 4 );
  unsigned char sr_swept_hit;
  __asm__ volatile("comiss %2, %1; setb %0" : "=qm"(sr_swept_hit)
    : "x"(_mm_set_ss(g_151A8489C)), "x"(_mm_set_ss(65536.0f)) : "cc");
  return sr_swept_hit;
}
#undef frame_float_at_0
#undef scratch_buffer
#undef unused_frame_slot_147808

//----- (000000014003C760) ----------------------------------------------------
__int64            sub_14003C760(float *a1, float *a2, float *a3, signed int a4, float *a5, float *a6, __int64 a7)
{
  float float_word;
  unsigned int layer;
  __int64 saved_layer;
  float scaled_value;
  __int64 block_record_offset;
  float weighted_sum;
  float source_component_y;
  float source_component_z;
  float combined_products;
  float float_word_2;
  float combined_products_2;
  float source_component_y_2;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float component_sum;
  float weighted_sum_11;
  float component_sum_2;
  int state_address;
  signed int y;
  int masked_bits;
  int masked_bits_2;
  int state_address_2;
  int state_address_3;
  signed int z;
  signed int x;
  __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 masked_bits_3;
  unsigned int table_value;
  unsigned int masked_bits_4;
  float weighted_sum_12;
  unsigned int float_word_3;
  float weighted_sum_13;
  float weighted_sum_14;
  unsigned int float_word_4;
  unsigned int float_word_5;
  float weighted_sum_15;
  float weighted_sum_16;
  float *saved_source_component_x;
  unsigned int layer_2;
  float source_component_x;
  float weighted_sum_17;
  float source_component_y_3;
  float saved_weighted_sum;
  float state_address_4;
  float source_component_z_2;
  float weighted_sum_18;
  float saved_weighted_sum_2;
  float weighted_sum_19;
  float weighted_sum_20;
  float weighted_sum_21;
  float weighted_sum_22;
  float weighted_sum_23;
  float *saved_weighted_sum_3;
  float component_sum_3;
  float scaled_value_2;
  float scaled_value_3;
  float comparison_operand;
  float weighted_sum_24;
  float weighted_sum_25;
  unsigned int world_block_unknown_1008_at_result;
  unsigned int x_2;
  unsigned int byte2_result;
  unsigned int byte1_result;
  unsigned int world_block_unknown_8_at_result;
  float weighted_sum_26;
  float weighted_sum_27;
  float weighted_sum_28;
  float weighted_sum_29;
  float weighted_sum_30;
  float weighted_sum_31;
  unsigned int float_word_6;
  float weighted_sum_32;
  float source_component_z_3;
  unsigned int y_2;
  float scaled_value_4;
  float state_address_5;
  float weighted_sum_33;
  float source_component_y_4;
  float *saved_source_component_x_2;
  float weighted_sum_34;
  float source_component_x_2;
  float scaled_value_5;
  float weighted_sum_35;
  float scaled_value_6;
  float component_sum_4;
  float source_component_z_4;
  float weighted_sum_36;
  float scaled_value_7;
  float saved_weighted_sum_4;
  float component_sum_5;
  float scaled_value_8;
  float scaled_value_9;
  float scaled_value_10;
  float comparison_operand_2;
  float weighted_sum_37;
  float *saved_component_sum;
  float weighted_sum_38;
  float weighted_sum_39;
  unsigned int table_value_2;
  float weighted_sum_40;
  float weighted_sum_41;
  float weighted_sum_42;
  float weighted_sum_43;
  float weighted_sum_44;
  float weighted_sum_45;
  float weighted_sum_46;
  float weighted_sum_47;
  unsigned int layer_3;
  float scaled_value_11;
  float weighted_sum_48;
  float source_component_y_5;
  float weighted_sum_49;
  float source_component_x_3;
  float scaled_value_12;
  float saved_weighted_sum_5;
  float weighted_sum_50;
  float source_component_z_5;
  float weighted_sum_51;
  float component_sum_6;
  float scaled_value_13;
  float component_sum_7;
  float scaled_value_14;
  float scaled_value_15;
  float *saved_weighted_sum_6;
  float scaled_value_16;
  float comparison_operand_3;
  float component_sum_8;
  float weighted_sum_52;
  float weighted_sum_53;
  unsigned int x_3;
  unsigned int byte2_result_2;
  unsigned int world_block_unknown_3008_at_result;
  float weighted_sum_54;
  float weighted_sum_55;
  float weighted_sum_56;
  float weighted_sum_57;
  float weighted_sum_58;
  float weighted_sum_59;
  float weighted_sum_60;
  float weighted_sum_61;
  float source_component_x_4;
  float scaled_value_17;
  float state_address_6;
  float weighted_sum_62;
  float weighted_sum_63;
  float source_component_z_6;
  float weighted_sum_64;
  float scaled_value_18;
  float weighted_sum_65;
  float *saved_source_component_x_3;
  float scaled_value_19;
  float weighted_sum_66;
  float saved_source_component_x_4;
  float weighted_sum_67;
  float weighted_sum_68;
  float *saved_component_sum_2;
  float comparison_operand_4;
  float sr_collision_position[3];
  float sr_collision_normal[3];
  int sr_collision_cell[3];
  unsigned sr_collision_displaced_cell[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003C760[272];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_14003C760 + 8)) /* [rsp+8h] */
#define float_word_7 (*(__int64 (*))(void *)(sr_frame_14003C760 + 48)) /* [rsp+30h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_14003C760 + 64)) /* [rsp+40h] */
#define packed_word_bits_2 (*(__int64 (*))(void *)(sr_frame_14003C760 + 72)) /* [rsp+48h] */
#define layer_4 (*(signed int (*))(void *)(sr_frame_14003C760 + 88)) /* [rsp+58h] */
#define saved_state_address (*(int (*))(void *)(sr_frame_14003C760 + 92)) /* [rsp+5Ch] */
#define frame_float_at_96 (*(float (*))(void *)(sr_frame_14003C760 + 96)) /* [rsp+60h] */
#define weighted_sum_69 (*(float (*))(void *)(sr_frame_14003C760 + 136)) /* [rsp+88h] */
#define weighted_sum_70 (*(float (*))(void *)(sr_frame_14003C760 + 140)) /* [rsp+8Ch] */
#define source_component_x_5 (*(float * (*))(void *)(sr_frame_14003C760 + 144)) /* [rsp+90h] */
#define saved_weighted_sum_7 (*(float (*))(void *)(sr_frame_14003C760 + 152)) /* [rsp+98h] */
#define scaled_value_20 (*(float (*))(void *)(sr_frame_14003C760 + 156)) /* [rsp+9Ch] */
#define saved_weighted_sum_8 (*(float * (*))(void *)(sr_frame_14003C760 + 176)) /* [rsp+B0h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_14003C760 + 200)) /* [rsp+C8h] */
#define saved_masked_bits (*(int (*))(void *)(sr_frame_14003C760 + 216)) /* [rsp+D8h] */
#define saved_state_address_2 (*(int (*))(void *)(sr_frame_14003C760 + 220)) /* [rsp+DCh] */
#define saved_masked_bits_2 (*(int (*))(void *)(sr_frame_14003C760 + 224)) /* [rsp+E0h] */
#define saved_state_address_3 (*(int (*))(void *)(sr_frame_14003C760 + 228)) /* [rsp+E4h] */
#define input_value (*(__int64 (*))(void *)(sr_frame_14003C760 + 232)) /* [rsp+E8h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_14003C760 + 240)) /* [rsp+F0h] */
#define unused_frame_slot_256 (*(__int128 (*))(void *)(sr_frame_14003C760 + 256)) /* [rsp+100h] */

  float_word = *(float *)&a7;
  layer = a4;
  *a3 = 65536.0;
  saved_layer = a4;
  scaled_value = *a5;
  block_record_offset = 263004LL * a4;
  weighted_sum = *a5 + *(float *)&a7;
  layer_4 = a4;
  saved_weighted_sum_8 = a2;
  source_component_x_5 = a1;
  input_value = a4;
  if ( weighted_sum < *(float *)&dword_140404A6C[block_record_offset + 111579657] )
    return 0;
  source_component_y = a5[1];
  if ( (float)(source_component_y + *(float *)&a7) < *(float *)&dword_140404A6C[block_record_offset + 111579658] )
    return 0;
  source_component_z = a5[2];
  if ( (float)(source_component_z + *(float *)&a7) < *(float *)&dword_140404A6C[block_record_offset + 111579659] )
    return 0;
  if ( (float)(scaled_value - *(float *)&a7) > *(float *)&dword_140404A6C[block_record_offset + 111579660] )
    return 0;
  if ( (float)(source_component_y - *(float *)&a7) > *(float *)&dword_140404A6C[block_record_offset + 111579661] )
    return 0;
  if ( (float)(source_component_z - *(float *)&a7) > *(float *)&dword_140404A6C[block_record_offset + 111579662] )
    return 0;
  combined_products = scaled_value - *(float *)&dword_140404A6C[block_record_offset + 111579638];
  float_word_2 = source_component_y - *(float *)&dword_140404A6C[block_record_offset + 111579639];
  combined_products_2 = source_component_z - *(float *)&dword_140404A6C[block_record_offset + 111579640];
  source_component_y_2 = a6[1];
  weighted_sum_2 = combined_products * *(float *)&dword_140404A6C[block_record_offset + 111579641];
  weighted_sum_3 = combined_products_2 * *(float *)&dword_140404A6C[block_record_offset + 111579643];
  weighted_sum_4 = combined_products * *(float *)&dword_140404A6C[block_record_offset + 111579644];
  weighted_sum_5 = float_word_2 * *(float *)&dword_140404A6C[block_record_offset + 111579645];
  weighted_sum_6 = combined_products * *(float *)&dword_140404A6C[block_record_offset + 111579647];
  weighted_sum_7 = weighted_sum_2 + (float)(float_word_2 * *(float *)&dword_140404A6C[block_record_offset + 111579642]);
  weighted_sum_8 = float_word_2 * *(float *)&dword_140404A6C[block_record_offset + 111579648];
  weighted_sum_9 = combined_products_2 * *(float *)&dword_140404A6C[block_record_offset + 111579646];
  weighted_sum_10 = combined_products_2 * *(float *)&dword_140404A6C[block_record_offset + 111579649];
  float_buffer[0] = *a6;
  component_sum = weighted_sum_4 + weighted_sum_5;
  float_buffer[2] = a6[2];
  float_buffer[1] = source_component_y_2;
  weighted_sum_11 = *(float *)&dword_140404A6C[block_record_offset + 111579654];
  float_buffer_2[0] = weighted_sum_7 + weighted_sum_3;
  component_sum_2 = weighted_sum_6 + weighted_sum_8;
  float_buffer_2[1] = component_sum + weighted_sum_9;
  float_buffer_2[2] = component_sum_2 + weighted_sum_10;
  state_address = (int)(float)((float)((float)(*(float *)&a7 + weighted_sum_3) + weighted_sum_7) * weighted_sum_11);
  saved_state_address = state_address;
  y = (int)(float)((float)((float)(component_sum + weighted_sum_9) - *(float *)&a7) * weighted_sum_11);
  masked_bits = (int)(float)((float)((float)(weighted_sum_7 + weighted_sum_3) - *(float *)&a7) * weighted_sum_11);
  sr_collision_cell[1] = y;
  saved_masked_bits = masked_bits;
  masked_bits_2 = (int)(float)((float)((float)(component_sum_2 + weighted_sum_10) - *(float *)&a7) * weighted_sum_11);
  state_address_2 = (int)(float)((float)((float)(*(float *)&a7 + weighted_sum_9) + component_sum) * weighted_sum_11);
  saved_masked_bits_2 = masked_bits_2;
  saved_state_address_3 = state_address_2;
  state_address_3 = (int)(float)((float)((float)(*(float *)&a7 + weighted_sum_10) + component_sum_2) * weighted_sum_11);
  saved_state_address_2 = state_address_3;
  if ( y > state_address_2 )
    return 0;
  sr_collision_cell[1] = (int)(float)((float)((float)(component_sum + weighted_sum_9) - *(float *)&a7) * weighted_sum_11);
  do
  {
    sr_collision_cell[2] = masked_bits_2;
    z = masked_bits_2;
    if ( masked_bits_2 > state_address_3 )
      goto LABEL_48;
    do
    {
      sr_collision_cell[0] = masked_bits;
      x = masked_bits;
      if ( masked_bits > state_address )
        goto LABEL_46;
      do
      {
        if ( x < 0 )
          goto LABEL_44;
        if ( x >= (int)(dword_140404A6C[block_record_offset + 111579650] << 6) )
          goto LABEL_44;
        if ( y < 0 )
          goto LABEL_44;
        if ( y >= (int)(dword_140404A6C[block_record_offset + 111579651] << 6) )
          goto LABEL_44;
        if ( z < 0 )
          goto LABEL_44;
        if ( z >= (int)(dword_140404A6C[block_record_offset + 111579652] << 6) )
          goto LABEL_44;
        shifted_bits = *(int *)(*(_QWORD *)&dword_140404A6C[block_record_offset + 111579655]
                     + 4LL
                     * (int)((x >> 6)
                           + dword_140404A6C[block_record_offset + 111579650]
                           * ((z >> 6) + dword_140404A6C[block_record_offset + 111579652] * (y >> 6))));
        if ( (_DWORD)shifted_bits == -1 )
          goto LABEL_44;
        shifted_bits_2 = (int)dword_140404A6C[263004 * saved_layer
                                 + 111579985
                                 + 513 * shifted_bits
                                 + 64 * ((y >> 3) & 7)
                                 + 8 * ((z >> 3) & 7)
                                 + ((x >> 3) & 7)];
        if ( (_DWORD)shifted_bits_2 == -1 )
          goto LABEL_44;
        masked_bits_3 = 6930 * shifted_bits_2 + (x & 7) + 8 * ((z & 7) + 8 * (y & 7u));
        table_value = dword_140404A6C[masked_bits_3 + 83194359];
        masked_bits_4 = table_value & 0xE0000000;
        if ( (table_value & 0xE0000000) == 0x40000000 )
        {
          LODWORD(packed_word_bits_2) = dword_140404A6C[block_record_offset + 111579653];
          LODWORD(packed_word_bits) = table_value;
          *(float *)&float_word_7 = float_word;
          if ( sub_14003E100(&sr_collision_position[0], &sr_collision_normal[0], &frame_float_at_96, float_buffer_2, float_buffer, float_word_7, &sr_collision_cell[0], packed_word_bits, packed_word_bits_2) && frame_float_at_96 < *a3 )
          {
            weighted_sum_12 = *(float *)&dword_140404A6C[block_record_offset + 111579643];
            float_word_3 = dword_140404A6C[block_record_offset + 111579645];
            weighted_sum_13 = *(float *)&dword_140404A6C[block_record_offset + 111579646];
            weighted_sum_14 = *(float *)&dword_140404A6C[block_record_offset + 111579649];
            float_word_4 = dword_140404A6C[block_record_offset + 111579641];
            float_word_5 = dword_140404A6C[block_record_offset + 111579642];
            weighted_sum_15 = *(float *)&dword_140404A6C[block_record_offset + 111579647];
            weighted_sum_16 = *(float *)&dword_140404A6C[block_record_offset + 111579648];
            saved_source_component_x = source_component_x_5;
            layer_2 = layer_4;
            weighted_sum_69 = *(float *)&dword_140404A6C[block_record_offset + 111579644];
            weighted_sum_70 = *(float *)&float_word_3;
            source_component_x = sr_collision_normal[0];
            weighted_sum_17 = (float)(weighted_sum_13 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579640];
            source_component_y_3 = sr_collision_normal[1];
            saved_weighted_sum = *(float *)&float_word_3;
            state_address_4 = (float)((float)(*(float *)&float_word_3 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579639])
                + (float)((float)(weighted_sum_16 * sr_collision_position[2]) + (float)(*(float *)&float_word_5 * sr_collision_position[0]));
            source_component_z_2 = sr_collision_normal[2];
            weighted_sum_18 = (float)(weighted_sum_14 * sr_collision_position[2]) + (float)(weighted_sum_12 * sr_collision_position[0]);
            saved_weighted_sum_2 = weighted_sum_69;
            sr_collision_position[0] = (float)((float)(weighted_sum_15 * sr_collision_position[2]) + (float)(*(float *)&float_word_4 * sr_collision_position[0]))
                 + (float)((float)(weighted_sum_69 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579638]);
            weighted_sum_19 = (float)((float)(weighted_sum_13 * sr_collision_normal[1]) + (float)(weighted_sum_12 * sr_collision_normal[0])) + (float)(weighted_sum_14 * sr_collision_normal[2]);
            *source_component_x_5 = sr_collision_position[0];
LABEL_27:
            saved_weighted_sum_3 = saved_weighted_sum_8;
            component_sum_3 = weighted_sum_18 + weighted_sum_17;
            saved_source_component_x[1] = state_address_4;
            saved_source_component_x[2] = component_sum_3;
            scaled_value_2 = weighted_sum_15 * source_component_z_2;
            scaled_value_3 = weighted_sum_16 * source_component_z_2;
            comparison_operand = frame_float_at_96;
            saved_weighted_sum_3[2] = weighted_sum_19;
            sr_collision_position[2] = component_sum_3;
            sr_collision_position[1] = state_address_4;
            sr_collision_normal[2] = weighted_sum_19;
            weighted_sum_24 = (float)((float)(saved_weighted_sum_2 * source_component_y_3) + (float)(*(float *)&float_word_4 * source_component_x)) + scaled_value_2;
            weighted_sum_25 = (float)((float)(saved_weighted_sum * source_component_y_3) + (float)(*(float *)&float_word_5 * source_component_x)) + scaled_value_3;
            *saved_weighted_sum_3 = weighted_sum_24;
            sr_collision_normal[0] = weighted_sum_24;
            saved_weighted_sum_3[1] = weighted_sum_25;
            *a3 = comparison_operand;
            sr_collision_normal[1] = weighted_sum_25;
            world_block_unknown_1008_at_result = sr_world_block_unknown_1008_at(layer_2, x, y, z, g_151A848EC);
            layer = layer_4;
            state_address = saved_state_address;
            float_word = *(float *)&a7;
            g_151A848E8 = world_block_unknown_1008_at_result;
            goto LABEL_34;
          }
          goto LABEL_32;
        }
        if ( masked_bits_4 == 0x80000000 )
        {
          if ( sub_14003E4B0(
                 &sr_collision_position[0],
                 (__int64)&sr_collision_normal[0],
                 &frame_float_at_96,
                 float_buffer_2,
                 float_buffer,
                 float_word,
                 &sr_collision_cell[0],
                 table_value,
                 *(float *)&dword_140404A6C[block_record_offset + 111579653])
            && frame_float_at_96 < *a3 )
          {
            weighted_sum_20 = *(float *)&dword_140404A6C[block_record_offset + 111579642];
            weighted_sum_21 = *(float *)&dword_140404A6C[block_record_offset + 111579643];
            weighted_sum_22 = *(float *)&dword_140404A6C[block_record_offset + 111579646];
            weighted_sum_23 = *(float *)&dword_140404A6C[block_record_offset + 111579649];
            weighted_sum_15 = *(float *)&dword_140404A6C[block_record_offset + 111579647];
            float_word_4 = dword_140404A6C[block_record_offset + 111579644];
            float_word_5 = dword_140404A6C[block_record_offset + 111579645];
            weighted_sum_16 = *(float *)&dword_140404A6C[block_record_offset + 111579648];
            layer_2 = layer_4;
            weighted_sum_70 = *(float *)&dword_140404A6C[block_record_offset + 111579641];
            g_151A848F0 = table_value;
            saved_source_component_x = source_component_x_5;
            item_hit_layer = layer_4;
            weighted_sum_69 = weighted_sum_20;
            g_151A848D8 = x;
            g_151A848DC = y;
            g_151A848E0 = z;
            item_hit_unknown_7c = -1;
            item_hit_block_part = -1;
            source_component_x = sr_collision_normal[1];
            weighted_sum_17 = (float)(weighted_sum_22 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579640];
            source_component_y_3 = sr_collision_normal[0];
            saved_weighted_sum = weighted_sum_20;
            state_address_4 = (float)((float)(*(float *)&float_word_5 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579639])
                + (float)((float)(weighted_sum_16 * sr_collision_position[2]) + (float)(weighted_sum_20 * sr_collision_position[0]));
            source_component_z_2 = sr_collision_normal[2];
            weighted_sum_18 = (float)(weighted_sum_23 * sr_collision_position[2]) + (float)(weighted_sum_21 * sr_collision_position[0]);
            saved_weighted_sum_2 = weighted_sum_70;
            sr_collision_position[0] = (float)((float)(weighted_sum_15 * sr_collision_position[2]) + (float)(weighted_sum_70 * sr_collision_position[0]))
                 + (float)((float)(*(float *)&float_word_4 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579638]);
            weighted_sum_19 = (float)((float)(weighted_sum_21 * sr_collision_normal[0]) + (float)(weighted_sum_22 * sr_collision_normal[1])) + (float)(weighted_sum_23 * sr_collision_normal[2]);
            *source_component_x_5 = sr_collision_position[0];
            goto LABEL_27;
          }
          goto LABEL_32;
        }
        if ( masked_bits_4 == -1073741824 )
        {
          x_2 = x - (unsigned __int8)table_value;
          saved_weighted_sum_7 = *(float *)&x_2;
          byte2_result = y - BYTE2(table_value);
          sr_collision_displaced_cell[0] = x_2;
          byte1_result = z - BYTE1(table_value);
          scaled_value_20 = *(float *)&byte2_result;
          sr_collision_displaced_cell[1] = byte2_result;
          sr_collision_displaced_cell[2] = byte1_result;
          world_block_unknown_8_at_result = sr_world_block_unknown_8_at(layer, x_2, byte2_result, byte1_result);
          if ( sub_14003E4B0(
                 &sr_collision_position[0],
                 (__int64)&sr_collision_normal[0],
                 &frame_float_at_96,
                 float_buffer_2,
                 float_buffer,
                 float_word,
                 (int *)&sr_collision_displaced_cell[0],
                 world_block_unknown_8_at_result,
                 *(float *)&dword_140404A6C[block_record_offset + 111579653])
            && frame_float_at_96 < *a3 )
          {
            weighted_sum_26 = *(float *)&dword_140404A6C[block_record_offset + 111579641];
            weighted_sum_27 = *(float *)&dword_140404A6C[block_record_offset + 111579647];
            weighted_sum_28 = *(float *)&dword_140404A6C[block_record_offset + 111579642];
            weighted_sum_29 = *(float *)&dword_140404A6C[block_record_offset + 111579643];
            weighted_sum_30 = *(float *)&dword_140404A6C[block_record_offset + 111579648];
            weighted_sum_31 = *(float *)&dword_140404A6C[block_record_offset + 111579649];
            float_word_6 = dword_140404A6C[block_record_offset + 111579645];
            weighted_sum_32 = *(float *)&dword_140404A6C[block_record_offset + 111579646];
            source_component_z_3 = sr_collision_position[2];
            y_2 = LODWORD(scaled_value_20);
            weighted_sum_69 = *(float *)&dword_140404A6C[block_record_offset + 111579644];
            scaled_value_4 = weighted_sum_29 * sr_collision_position[0];
            weighted_sum_70 = *(float *)&float_word_6;
            state_address_5 = (float)(*(float *)&float_word_6 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579639];
            weighted_sum_33 = (float)(weighted_sum_32 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579640];
            source_component_y_4 = sr_collision_normal[1];
            saved_source_component_x_2 = source_component_x_5;
            weighted_sum_34 = (float)((float)(weighted_sum_27 * sr_collision_position[2]) + (float)(weighted_sum_26 * sr_collision_position[0]))
                + (float)((float)(weighted_sum_69 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579638]);
            source_component_x_2 = sr_collision_normal[0];
            scaled_value_5 = weighted_sum_29 * sr_collision_normal[0];
            weighted_sum_35 = (float)(weighted_sum_30 * sr_collision_position[2]) + (float)(weighted_sum_28 * sr_collision_position[0]);
            scaled_value_6 = weighted_sum_26 * sr_collision_normal[0];
            *source_component_x_5 = weighted_sum_34;
            component_sum_4 = state_address_5 + weighted_sum_35;
            source_component_z_4 = sr_collision_normal[2];
            weighted_sum_36 = (float)(weighted_sum_31 * source_component_z_3) + scaled_value_4;
            scaled_value_7 = weighted_sum_70 * source_component_y_4;
            saved_weighted_sum_4 = weighted_sum_69;
            saved_source_component_x_2[1] = component_sum_4;
            component_sum_5 = weighted_sum_36 + weighted_sum_33;
            scaled_value_8 = weighted_sum_27 * source_component_z_4;
            scaled_value_9 = weighted_sum_30 * source_component_z_4;
            scaled_value_10 = weighted_sum_31 * source_component_z_4;
            comparison_operand_2 = frame_float_at_96;
            saved_source_component_x_2[2] = component_sum_5;
            weighted_sum_37 = (float)((float)(saved_weighted_sum_4 * source_component_y_4) + scaled_value_6) + scaled_value_8;
            saved_component_sum = saved_weighted_sum_8;
            *saved_weighted_sum_8 = weighted_sum_37;
            sr_collision_position[0] = weighted_sum_34;
            sr_collision_position[1] = component_sum_4;
            sr_collision_position[2] = component_sum_5;
            sr_collision_normal[0] = weighted_sum_37;
            weighted_sum_38 = (float)(scaled_value_7 + (float)(weighted_sum_28 * source_component_x_2)) + scaled_value_9;
            weighted_sum_39 = (float)(scaled_value_5 + (float)(weighted_sum_32 * source_component_y_4)) + scaled_value_10;
            saved_component_sum[1] = weighted_sum_38;
            sr_collision_normal[1] = weighted_sum_38;
            saved_component_sum[2] = weighted_sum_39;
            *a3 = comparison_operand_2;
            sr_collision_normal[2] = weighted_sum_39;
            float_word = *(float *)&a7;
            g_151A848E8 = sr_world_block_unknown_1008_at(layer_4, LODWORD(saved_weighted_sum_7), y_2, byte1_result, g_151A848EC);
          }
LABEL_32:
          state_address = saved_state_address;
          layer = layer_4;
        }
        saved_source_component_x = source_component_x_5;
LABEL_34:
        table_value_2 = dword_140404A6C[masked_bits_3 + 83197431];
        if ( (table_value_2 & 0xE0000000) == 0x80000000 )
        {
          if ( sub_14003E4B0(
                 &sr_collision_position[0],
                 (__int64)&sr_collision_normal[0],
                 &frame_float_at_96,
                 float_buffer_2,
                 float_buffer,
                 float_word,
                 &sr_collision_cell[0],
                 table_value_2,
                 *(float *)&dword_140404A6C[block_record_offset + 111579653])
            && frame_float_at_96 < *a3 )
          {
            weighted_sum_40 = *(float *)&dword_140404A6C[block_record_offset + 111579641];
            weighted_sum_41 = *(float *)&dword_140404A6C[block_record_offset + 111579647];
            weighted_sum_42 = *(float *)&dword_140404A6C[block_record_offset + 111579642];
            weighted_sum_43 = *(float *)&dword_140404A6C[block_record_offset + 111579643];
            weighted_sum_44 = *(float *)&dword_140404A6C[block_record_offset + 111579648];
            weighted_sum_45 = *(float *)&dword_140404A6C[block_record_offset + 111579649];
            weighted_sum_46 = *(float *)&dword_140404A6C[block_record_offset + 111579645];
            weighted_sum_47 = *(float *)&dword_140404A6C[block_record_offset + 111579646];
            layer_3 = layer_4;
            weighted_sum_69 = *(float *)&dword_140404A6C[block_record_offset + 111579644];
            scaled_value_11 = weighted_sum_43 * sr_collision_position[0];
            saved_weighted_sum_7 = weighted_sum_46;
            weighted_sum_48 = (float)(weighted_sum_47 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579640];
            source_component_y_5 = sr_collision_normal[1];
            weighted_sum_49 = (float)((float)(weighted_sum_41 * sr_collision_position[2]) + (float)(weighted_sum_40 * sr_collision_position[0]))
                 + (float)((float)(weighted_sum_69 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579638]);
            source_component_x_3 = sr_collision_normal[0];
            scaled_value_12 = weighted_sum_45 * sr_collision_position[2];
            saved_weighted_sum_5 = weighted_sum_46;
            weighted_sum_50 = (float)((float)(weighted_sum_46 * sr_collision_position[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579639])
                 + (float)((float)(weighted_sum_44 * sr_collision_position[2]) + (float)(weighted_sum_42 * sr_collision_position[0]));
            source_component_z_5 = sr_collision_normal[2];
            weighted_sum_51 = (float)(weighted_sum_43 * sr_collision_normal[0]) + (float)(weighted_sum_47 * sr_collision_normal[1]);
            *saved_source_component_x = weighted_sum_49;
            component_sum_6 = scaled_value_12 + scaled_value_11;
            scaled_value_13 = weighted_sum_69 * source_component_y_5;
            saved_source_component_x[1] = weighted_sum_50;
            component_sum_7 = component_sum_6 + weighted_sum_48;
            scaled_value_14 = weighted_sum_41 * source_component_z_5;
            scaled_value_15 = weighted_sum_44 * source_component_z_5;
            saved_source_component_x[2] = component_sum_7;
            saved_weighted_sum_6 = saved_weighted_sum_8;
            scaled_value_16 = weighted_sum_45 * source_component_z_5;
            comparison_operand_3 = frame_float_at_96;
            component_sum_8 = weighted_sum_51 + scaled_value_16;
            sr_collision_position[0] = weighted_sum_49;
            sr_collision_position[1] = weighted_sum_50;
            sr_collision_position[2] = component_sum_7;
            saved_weighted_sum_8[2] = component_sum_8;
            sr_collision_normal[2] = component_sum_8;
            weighted_sum_52 = (float)(scaled_value_13 + (float)(weighted_sum_40 * source_component_x_3)) + scaled_value_14;
            weighted_sum_53 = (float)((float)(saved_weighted_sum_5 * source_component_y_5) + (float)(weighted_sum_42 * source_component_x_3)) + scaled_value_15;
            *saved_weighted_sum_6 = weighted_sum_52;
            sr_collision_normal[0] = weighted_sum_52;
            saved_weighted_sum_6[1] = weighted_sum_53;
            *a3 = comparison_operand_3;
            sr_collision_normal[1] = weighted_sum_53;
            g_151A848E8 = sr_world_block_unknown_3808_at(layer_3, x, y, z, g_151A848EC);
          }
          state_address = saved_state_address;
        }
        else if ( (table_value_2 & 0xE0000000) == 0xC0000000 )
        {
          x_3 = x - (unsigned __int8)table_value_2;
          sr_collision_displaced_cell[0] = x_3;
          byte2_result_2 = y - BYTE2(table_value_2);
          sr_collision_displaced_cell[1] = byte2_result_2;
          LODWORD(weighted_sum_70) = z - BYTE1(table_value_2);
          sr_collision_displaced_cell[2] = LODWORD(weighted_sum_70);
          world_block_unknown_3008_at_result = sr_world_block_unknown_3008_at(layer, x_3, byte2_result_2, LODWORD(weighted_sum_70));
          if ( sub_14003E4B0(
                 &sr_collision_position[0],
                 (__int64)&sr_collision_normal[0],
                 &frame_float_at_96,
                 float_buffer_2,
                 float_buffer,
                 float_word,
                 (int *)&sr_collision_displaced_cell[0],
                 world_block_unknown_3008_at_result,
                 *(float *)&dword_140404A6C[block_record_offset + 111579653])
            && frame_float_at_96 < *a3 )
          {
            weighted_sum_54 = *(float *)&dword_140404A6C[block_record_offset + 111579641];
            weighted_sum_55 = *(float *)&dword_140404A6C[block_record_offset + 111579647];
            weighted_sum_56 = *(float *)&dword_140404A6C[block_record_offset + 111579644];
            weighted_sum_57 = *(float *)&dword_140404A6C[block_record_offset + 111579643];
            weighted_sum_58 = *(float *)&dword_140404A6C[block_record_offset + 111579649];
            weighted_sum_59 = *(float *)&dword_140404A6C[block_record_offset + 111579645];
            weighted_sum_60 = *(float *)&dword_140404A6C[block_record_offset + 111579642];
            weighted_sum_61 = *(float *)&dword_140404A6C[block_record_offset + 111579648];
            source_component_x_4 = sr_collision_normal[0];
            scaled_value_17 = sr_collision_position[0] * weighted_sum_57;
            state_address_6 = (float)(sr_collision_position[1] * *(float *)&dword_140404A6C[block_record_offset + 111579646])
                 + *(float *)&dword_140404A6C[block_record_offset + 111579640];
            weighted_sum_62 = (float)(sr_collision_position[1] * weighted_sum_59) + *(float *)&dword_140404A6C[block_record_offset + 111579639];
            weighted_sum_63 = (float)(sr_collision_position[2] * weighted_sum_61) + (float)(sr_collision_position[0] * weighted_sum_60);
            sr_collision_position[0] = (float)((float)(sr_collision_position[2] * weighted_sum_55) + (float)(sr_collision_position[0] * weighted_sum_54))
                 + (float)((float)(sr_collision_position[1] * weighted_sum_56) + *(float *)&dword_140404A6C[block_record_offset + 111579638]);
            source_component_z_6 = sr_collision_normal[2];
            weighted_sum_64 = (float)(sr_collision_position[2] * weighted_sum_58) + scaled_value_17;
            scaled_value_18 = sr_collision_normal[2] * weighted_sum_55;
            saved_weighted_sum_7 = weighted_sum_62 + weighted_sum_63;
            sr_collision_position[1] = weighted_sum_62 + weighted_sum_63;
            scaled_value_20 = weighted_sum_64 + state_address_6;
            sr_collision_position[2] = weighted_sum_64 + state_address_6;
            weighted_sum_65 = sr_collision_normal[1] * *(float *)&dword_140404A6C[block_record_offset + 111579646];
            saved_source_component_x_3 = source_component_x_5;
            scaled_value_19 = sr_collision_normal[1] * weighted_sum_59;
            weighted_sum_66 = (float)(sr_collision_normal[1] * weighted_sum_56) + (float)(sr_collision_normal[0] * weighted_sum_54);
            *source_component_x_5 = sr_collision_position[0];
            saved_source_component_x_4 = source_component_x_4;
            saved_source_component_x_3[1] = saved_weighted_sum_7;
            weighted_sum_67 = (float)((float)(source_component_x_4 * weighted_sum_57) + weighted_sum_65) + (float)(source_component_z_6 * weighted_sum_58);
            saved_source_component_x_3[2] = scaled_value_20;
            weighted_sum_68 = (float)(scaled_value_19 + (float)(saved_source_component_x_4 * weighted_sum_60)) + (float)(source_component_z_6 * weighted_sum_61);
            saved_component_sum_2 = saved_weighted_sum_8;
            comparison_operand_4 = frame_float_at_96;
            sr_collision_normal[0] = weighted_sum_66 + scaled_value_18;
            sr_collision_normal[2] = weighted_sum_67;
            *saved_weighted_sum_8 = weighted_sum_66 + scaled_value_18;
            saved_component_sum_2[1] = weighted_sum_68;
            saved_component_sum_2[2] = weighted_sum_67;
            *a3 = comparison_operand_4;
            sr_collision_normal[1] = weighted_sum_68;
            g_151A848E8 = sr_world_block_unknown_3808_at(layer_4, x_3, byte2_result_2, LODWORD(weighted_sum_70), g_151A848EC);
          }
          state_address = saved_state_address;
        }
LABEL_44:
        layer = layer_4;
        ++x;
        float_word = *(float *)&a7;
        saved_layer = layer_4;
        sr_collision_cell[0] = x;
      }
      while ( x <= state_address );
      layer = layer_4;
      saved_layer = input_value;
      masked_bits = saved_masked_bits;
      state_address_3 = saved_state_address_2;
LABEL_46:
      sr_collision_cell[2] = ++z;
    }
    while ( z <= state_address_3 );
    masked_bits_2 = saved_masked_bits_2;
    state_address_2 = saved_state_address_3;
LABEL_48:
    sr_collision_cell[1] = ++y;
  }
  while ( y <= state_address_2 );
  unsigned char sr_collision_hit;
  __asm__ volatile("comiss %2, %1; seta %0" : "=qm"(sr_collision_hit)
                   : "x"(_mm_set_ss(65536.0f)), "x"(_mm_set_ss(*a3)) : "cc");
  return sr_collision_hit;
}
#undef unused_frame_slot_8
#undef float_word_7
#undef packed_word_bits
#undef packed_word_bits_2
#undef layer_4
#undef saved_state_address
#undef frame_float_at_96
#undef weighted_sum_69
#undef weighted_sum_70
#undef source_component_x_5
#undef saved_weighted_sum_7
#undef scaled_value_20
#undef saved_weighted_sum_8
#undef float_buffer
#undef saved_masked_bits
#undef saved_state_address_2
#undef saved_masked_bits_2
#undef saved_state_address_3
#undef input_value
#undef float_buffer_2
#undef unused_frame_slot_256

//----- (000000014003DE80) ----------------------------------------------------
__int64            sub_14003DE80(float *a1, float *a2, float a3)
{
  float scaled_value;
  float source_component_y;
  float source_component_z;
  unsigned int float_word;
  signed int iteration_count;
  unsigned int *state_address;
  __int64 unused_local;
  float sr_collision_upper[3];
  uint32_t sr_collision_lower[3];
  _Alignas(16) uint32_t sr_collision_result[8];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003DE80[147776];
#define float_word_2 (*(__int64 (*))(void *)(sr_frame_14003DE80 + 0)) /* [rsp+10h] */
#define frame_float_at_48 (*(float (*))(void *)(sr_frame_14003DE80 + 48)) /* [rsp+40h] */
#define scratch_buffer (*(int (*)[18436])(void *)(sr_frame_14003DE80 + 74016)) /* [rsp+12130h] */
#define unused_frame_slot_147760 (*(__int64 (*))(void *)(sr_frame_14003DE80 + 147760)) /* [rsp+24140h] */

  *(unsigned int *)&world_unknown_151a84898 = 1065353216;
  *(unsigned int *)&g_151A8489C = 1199570944;
  item_hit_unknown_7c = -1;
  item_hit_block_part = -1;
  scaled_value = *a1;
  source_component_y = a1[1];
  source_component_z = a1[2];
  *(float *)&float_word = *a1 - a3;
  scratch_buffer[0] = 0;
  scratch_buffer[8193] = 0;
  scratch_buffer[16386] = 0;
  sr_collision_lower[0] = float_word;
  (*(float *)&sr_collision_lower[1]) = source_component_y - a3;
  sr_collision_upper[0] = scaled_value + a3;
  sr_collision_upper[1] = source_component_y + a3;
  sr_collision_upper[2] = source_component_z + a3;
  (*(float *)&sr_collision_lower[2]) = source_component_z - a3;
  sub_1400D05B0(scratch_buffer, (float *)&sr_collision_lower[0], &sr_collision_upper[0]);
  if ( sub_14003DAE0((float *)&(*(__int128 *)(void *)sr_collision_result), (__int64)scratch_buffer, a1, a2, a3) && g_151A8489C > (*(float *)&sr_collision_result[7]) )
  {
    *(unsigned int *)&world_unknown_151a84898 = 0;
    *(_OWORD *)&g_151A84880 = (*(__int128 *)(void *)sr_collision_result);
    g_151A848E4 = 0;
    *(unsigned int *)&g_151A84890 = sr_collision_result[4];
    *(unsigned int *)&g_151A84894 = sr_collision_result[5];
    g_151A8489C = (*(float *)&sr_collision_result[7]);
    item_hit_layer = 0;
  }
  iteration_count = 0;
  state_address = &g_15ADA9240;
  do
  {
    if ( *state_address )
    {
      *(float *)&float_word_2 = a3;
      if ( (unsigned int)sub_14003C760((float *)&sr_collision_lower[0], &sr_collision_upper[0], &frame_float_at_48, iteration_count, a1, a2, float_word_2) )
      {
        if ( g_151A8489C > frame_float_at_48 )
        {
          g_151A84880 = sr_collision_lower[0];
          (ragdoll_unknown_height) = (*(float *)&sr_collision_lower[1]);
          *(float *)&g_151A84888 = (*(float *)&sr_collision_lower[2]);
          g_151A8488C = sr_collision_upper[0];
          g_151A84890 = sr_collision_upper[1];
          g_151A84894 = sr_collision_upper[2];
          g_151A8489C = frame_float_at_48;
          *(unsigned int *)&world_unknown_151a84898 = 0;
          g_151A848E4 = g_151A848E8;
          item_hit_layer = iteration_count;
        }
      }
    }
    ++iteration_count;
    state_address += 263004;
  }
  while ( iteration_count < 4 );
  unsigned char sr_collision_hit;
  __asm__ volatile("comiss %2, %1; setb %0" : "=qm"(sr_collision_hit)
                   : "x"(_mm_set_ss(g_151A8489C)),
                     "x"(_mm_set_ss(65536.0f)) : "cc");
  return sr_collision_hit;
}
#undef float_word_2
#undef frame_float_at_48
#undef scratch_buffer
#undef unused_frame_slot_147760

//----- (000000014004A7A0) ----------------------------------------------------
__int64            sub_14004A7A0(int a1, int a2, int *a3, int *a4, float *a5, float *a6, float *a7, float *a8)
{
  float *input_cursor;
  int float_word;
  float *float_word_2;
  int *input_cursor_2;
  __int64 remaining_count;
  float *float_word_3;
  __int64 loaded_word;
  float source_component_w;
  float *weighted_sum;
  float float_word_4;
  float source_float_6;
  float source_float_4;
  float *weighted_sum_2;
  float source_component_y;
  __int64 scaled_index;
  float source_float_7;
  float product_difference;
  float weighted_sum_3;
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float float_word_5;
  float float_word_6;
  float saved_scaled_value;
  float scaled_value_4;
  float saved_scaled_value_2;
  float scaled_value_5;
  float scaled_value_6;
  float scaled_value_7;
  float weighted_sum_4;
  float component_sum;
  float scaled_value_8;
  float weighted_sum_5;
  float component_sum_2;
  float component_sum_3;
  float component_sum_4;
  float component_sum_5;
  __int64 remaining_count_2;
  float *input_cursor_3;
  __int64 loaded_word_2;
  float source_component_w_2;
  float *weighted_sum_6;
  float scaled_value_9;
  float source_float_6_2;
  float source_float_4_2;
  float *weighted_sum_7;
  float source_component_y_2;
  __int64 scaled_index_2;
  float source_float_7_2;
  float product_difference_2;
  float weighted_sum_8;
  float saved_weighted_sum;
  float scaled_value_10;
  float scaled_value_11;
  float saved_scaled_value_3;
  float scaled_value_12;
  float saved_product_difference;
  float saved_product_difference_2;
  float scaled_value_13;
  float scaled_value_14;
  float scaled_value_15;
  float weighted_sum_9;
  unsigned int float_word_7;
  float weighted_sum_10;
  float weighted_sum_11;
  float component_sum_6;
  float component_sum_7;
  float component_sum_8;
  float component_sum_9;
  float component_sum_10;
  __int64 cached_input_cursor;
  int iteration_count;
  int loaded_word_3;
  float *weighted_sum_12;
  int iteration_count_2;
  float product_difference_3;
  float product_difference_4;
  float product_difference_5;
  float scaled_value_16;
  float scaled_value_17;
  float scaled_value_18;
  float scaled_value_19;
  float product_difference_6;
  float scaled_value_20;
  float product_difference_7;
  unsigned int float_word_8;
  float scaled_value_21;
  float weighted_sum_13;
  float component_sum_11;
  float component_sum_12;
  float component_sum_13;
  float component_sum_14;
  int body_b;
  __int64 record_byte_offset;
  int loaded_word_4;
  unsigned int float_word_9;
  float depth;
  float component_delta;
  unsigned int float_word_10;
  float component_delta_2;
  float component_delta_3;
  int iteration_count_3;
  float *weighted_sum_14;
  int iteration_count_4;
  float product_difference_8;
  float product_difference_9;
  float scaled_value_22;
  float product_difference_10;
  float scaled_value_23;
  float product_difference_11;
  float product_difference_12;
  float product_difference_13;
  float product_difference_14;
  unsigned int float_word_11;
  float product_difference_15;
  float weighted_sum_15;
  float component_sum_15;
  float component_sum_16;
  float component_sum_17;
  float component_sum_18;
  int body_a;
  __int64 record_byte_offset_2;
  int loaded_word_5;
  unsigned int float_word_12;
  float depth_2;
  float component_delta_4;
  unsigned int float_word_13;
  float component_delta_5;
  float component_delta_6;
  int iteration_count_5;
  float *record_pointer;
  __int64 running_total;
  bool comparison_result;
  float product_difference_16;
  float product_difference_17;
  float scaled_value_24;
  float scaled_value_25;
  float scaled_value_26;
  float scaled_value_27;
  float scaled_value_28;
  float scaled_value_29;
  float weighted_sum_16;
  float scaled_value_30;
  float weighted_sum_17;
  float scaled_value_31;
  float scaled_value_32;
  float weighted_sum_18;
  float component_sum_19;
  float component_sum_20;
  float component_sum_21;
  float component_sum_22;
  float component_sum_23;
  float component_sum_24;
  float component_sum_25;
  int *running_total_2;
  float product_difference_18;
  int scaled_index_3;
  float product_difference_19;
  float scaled_value_33;
  int loaded_word_6;
  __int64 scaled_index_4;
  float scaled_value_34;
  float scaled_value_35;
  float scaled_value_36;
  float saved_product_difference_3;
  float scaled_value_37;
  float scaled_value_38;
  float scaled_value_39;
  float saved_scaled_value_4;
  float scaled_value_40;
  float scaled_value_41;
  unsigned int float_word_14;
  float scaled_value_42;
  float weighted_sum_19;
  float component_sum_26;
  float component_sum_27;
  float component_sum_28;
  float component_delta_7;
  float component_sum_29;
  float component_sum_30;
  float component_sum_31;
  float component_sum_32;
  float component_delta_8;
  float component_sum_33;
  float component_delta_9;
  __int64 loaded_word_7;
  int rol4_result;
  __int64 record_byte_offset_3;
  unsigned int shifted_bits;
  _DWORD *record_byte_offset_4;
  __int64 remaining_count_3;
  __int64 scaled_index_5;
  float weighted_sum_20;
  float weighted_sum_21;
  int rol4_result_2;
  __int64 scaled_index_6;
  float weighted_sum_22;
  float weighted_sum_23;
  int rol4_result_3;
  __int64 scaled_index_7;
  float weighted_sum_24;
  float weighted_sum_25;
  int rol4_result_4;
  __int64 scaled_index_8;
  float weighted_sum_26;
  float weighted_sum_27;
  __int64 scaled_index_9;
  float weighted_sum_28;
  float weighted_sum_29;
  __int64 iteration_count_6;
  _DWORD *running_total_3;
  __int64 remaining_count_4;
  __int64 scaled_index_10;
  float weighted_sum_30;
  float weighted_sum_31;
  __int64 scaled_index_11;
  float weighted_sum_32;
  float weighted_sum_33;
  int table_value;
  int scaled_index_12;
  __int64 scaled_index_13;
  __int64 loaded_word_8;
  int rol4_result_5;
  unsigned int shifted_bits_2;
  __int64 record_byte_offset_5;
  __int64 remaining_count_5;
  _DWORD *record_byte_offset_6;
  __int64 scaled_index_14;
  float product_difference_20;
  float combined_products;
  float combined_products_2;
  int rol4_result_6;
  __int64 scaled_index_15;
  float product_difference_21;
  float combined_products_3;
  float combined_products_4;
  int rol4_result_7;
  __int64 scaled_index_16;
  float product_difference_22;
  float combined_products_5;
  float combined_products_6;
  int rol4_result_8;
  __int64 scaled_index_17;
  float combined_products_7;
  float combined_products_8;
  float product_difference_23;
  __int64 scaled_index_18;
  float product_difference_24;
  float combined_products_9;
  float combined_products_10;
  __int64 iteration_count_7;
  _DWORD *running_total_4;
  __int64 remaining_count_6;
  __int64 scaled_index_19;
  float combined_products_11;
  float combined_products_12;
  float product_difference_25;
  __int64 scaled_index_20;
  float product_difference_26;
  float combined_products_13;
  float combined_products_14;
  int iteration_count_8;
  __int64 record_byte_offset_7;
  int iteration_count_9;
  int rol4_result_9;
  int rol4_result_10;
  __int64 record_byte_offset_8;
  __int64 loaded_word_9;
  __int64 packed_word_bits;
  float weighted_sum_34;
  float weighted_sum_35;
  __int64 loaded_word_10;
  __int64 packed_word_bits_2;
  int table_value_2;
  float weighted_sum_36;
  __int64 packed_word_bits_3;
  float weighted_sum_37;
  float weighted_sum_38;
  __int64 scaled_index_21;
  float weighted_sum_39;
  float weighted_sum_40;
  float scaled_value_43;
  float weighted_sum_41;
  __m128 converted_vector;
  __m128 converted_vector_2;
  float product_difference_27;
  float state_address;
  float combined_products_15;
  float state_address_2;
  float state_address_3;
  float square_root;
  unsigned __int64 reordered_vector;
  float float_lane_0;
  unsigned int float_word_15;
  unsigned int float_word_16;
  float component_delta_10;
  float state_address_4;
  __int64 unused_local;
  _Alignas(8) unsigned sr_shape_offset_b[3];
  float sr_shape_offset_a[3];
  float sr_shape_center_a[3];
  _Alignas(8) unsigned sr_shape_edge_normal[3];
  _Alignas(8) unsigned sr_shape_edge_a[3];
  _Alignas(8) unsigned sr_shape_edge_b[3];
  float sr_shape_contact[7];
  _Alignas(8) unsigned sr_shape_vertices_a[1536];
  _Alignas(8) unsigned sr_shape_vertices_b[2048];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004A7A0[29824];
#define packed_word_bits_4 (*(__int64 (*))(void *)(sr_frame_14004A7A0 + 0)) /* [rsp+10h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14004A7A0 + 8)) /* [rsp+18h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14004A7A0 + 16)) /* [rsp+20h] */
#define saved_iteration_count (*(int (*))(void *)(sr_frame_14004A7A0 + 64)) /* [rsp+50h] */
#define saved_float_word (*(int (*))(void *)(sr_frame_14004A7A0 + 68)) /* [rsp+54h] */
#define distance (*(float (*))(void *)(sr_frame_14004A7A0 + 72)) /* [rsp+58h] */
#define body_b_2 (*(int (*))(void *)(sr_frame_14004A7A0 + 76)) /* [rsp+5Ch] */
#define body_a_2 (*(int (*))(void *)(sr_frame_14004A7A0 + 15104)) /* [rsp+3B10h] */
#define iteration_count_10 (*(int (*))(void *)(sr_frame_14004A7A0 + 15144)) /* [rsp+3B38h] */
#define saved_iteration_count_2 (*(int (*))(void *)(sr_frame_14004A7A0 + 15148)) /* [rsp+3B3Ch] */
#define input_cursor_4 (*(float * (*))(void *)(sr_frame_14004A7A0 + 15152)) /* [rsp+3B40h] */
#define input_cursor_5 (*(int * (*))(void *)(sr_frame_14004A7A0 + 15160)) /* [rsp+3B48h] */
#define saved_running_total (*(__int64 (*))(void *)(sr_frame_14004A7A0 + 15168)) /* [rsp+3B50h] */
#define input_cursor_6 (*(float * (*))(void *)(sr_frame_14004A7A0 + 15176)) /* [rsp+3B58h] */
#define input_cursor_7 (*(int * (*))(void *)(sr_frame_14004A7A0 + 15184)) /* [rsp+3B60h] */
#define component_delta_11 (*(float (*))(void *)(sr_frame_14004A7A0 + 15192)) /* [rsp+3B68h] */
#define component_delta_12 (*(float (*))(void *)(sr_frame_14004A7A0 + 15196)) /* [rsp+3B6Ch] */
#define component_delta_13 (*(float (*))(void *)(sr_frame_14004A7A0 + 15200)) /* [rsp+3B70h] */
#define saved_component_sum (*(float (*))(void *)(sr_frame_14004A7A0 + 15204)) /* [rsp+3B74h] */
#define saved_component_sum_2 (*(float (*))(void *)(sr_frame_14004A7A0 + 15208)) /* [rsp+3B78h] */
#define saved_component_sum_3 (*(float (*))(void *)(sr_frame_14004A7A0 + 15212)) /* [rsp+3B7Ch] */
#define b1 (*(float (*)[4])(void *)(sr_frame_14004A7A0 + 15216)) /* [rsp+3B80h] */
#define b0 (*(float (*)[4])(void *)(sr_frame_14004A7A0 + 15232)) /* [rsp+3B90h] */
#define float_buffer (*(float (*)[6])(void *)(sr_frame_14004A7A0 + 15320)) /* [rsp+3BE8h] */
#define scratch_buffer (*(_QWORD (*)[8])(void *)(sr_frame_14004A7A0 + 15344)) /* [rsp+3C00h] */
#define scratch_buffer_2 (*(_QWORD (*)[8])(void *)(sr_frame_14004A7A0 + 15408)) /* [rsp+3C40h] */
#define unused_frame_slot_29808 (*(__int64 (*))(void *)(sr_frame_14004A7A0 + 29808)) /* [rsp+7480h] */

  input_cursor = a8;
  float_word = 0;
  float_word_2 = a5;
  input_cursor_2 = a4;
  body_b_2 = a2;
  remaining_count = *a3;
  input_cursor_7 = a4;
  float_word_3 = a6;
  input_cursor_5 = a3;
  body_a_2 = a1;
  input_cursor_6 = a8;
  input_cursor_4 = a6;
  saved_float_word = 0;
  if ( remaining_count > 0 )
  {
    loaded_word = *((_QWORD *)a3 + 1);
    source_component_w = a6[3];
    weighted_sum = ((float *)(void *)(sr_shape_vertices_a+2));
    float_word_4 = *a6;
    source_float_6 = a6[6];
    source_float_4 = a6[4];
    weighted_sum_2 = (float *)(loaded_word + 8);
    source_component_y = a6[1];
    scaled_index = loaded_word - (_QWORD)((float *)(void *)(sr_shape_vertices_a+2));
    source_float_7 = a6[7];
    do
    {
      product_difference = *(weighted_sum_2 - 1);
      weighted_sum_3 = *(float *)((char *)weighted_sum + scaled_index);
      scaled_value = *weighted_sum_2;
      scaled_value_2 = product_difference * source_component_w;
      weighted_sum_2 += 3;
      scaled_value_3 = weighted_sum_3 * a6[2];
      float_word_5 = product_difference;
      float_word_6 = product_difference * a6[5];
      saved_scaled_value = scaled_value;
      scaled_value_4 = float_word_5 * source_float_4;
      saved_scaled_value_2 = scaled_value;
      scaled_value_5 = scaled_value * a6[8];
      scaled_value_6 = weighted_sum_3 * float_word_4;
      scaled_value_7 = saved_scaled_value * source_float_6;
      weighted_sum_4 = *(float *)((char *)weighted_sum + scaled_index) * source_component_y;
      component_sum = scaled_value_6 + scaled_value_2;
      scaled_value_8 = saved_scaled_value_2 * source_float_7;
      weighted_sum_5 = (float)(scaled_value_2 + *a5) + (float)(scaled_value_6 + scaled_value_7);
      sr_shape_offset_a[0] = component_sum + scaled_value_7;
      component_sum_2 = weighted_sum_4 + scaled_value_4;
      component_sum_3 = scaled_value_4 + a5[1];
      *(weighted_sum - 2) = weighted_sum_5;
      sr_shape_offset_a[1] = component_sum_2 + scaled_value_8;
      component_sum_4 = scaled_value_3 + float_word_6;
      component_sum_5 = float_word_6 + a5[2];
      *(weighted_sum - 1) = component_sum_3 + (float)(weighted_sum_4 + scaled_value_8);
      sr_shape_offset_a[2] = component_sum_4 + scaled_value_5;
      *weighted_sum = component_sum_5 + (float)(scaled_value_3 + scaled_value_5);
      weighted_sum += 3;
      --remaining_count;
    }
    while ( remaining_count );
  }
  remaining_count_2 = *input_cursor_2;
  input_cursor_3 = a7;
  if ( remaining_count_2 > 0 )
  {
    loaded_word_2 = *((_QWORD *)input_cursor_2 + 1);
    source_component_w_2 = a8[3];
    weighted_sum_6 = ((float *)(void *)(sr_shape_vertices_b+2));
    scaled_value_9 = *a8;
    source_float_6_2 = a8[6];
    source_float_4_2 = a8[4];
    weighted_sum_7 = (float *)(loaded_word_2 + 8);
    source_component_y_2 = a8[1];
    scaled_index_2 = loaded_word_2 - (_QWORD)((float *)(void *)(sr_shape_vertices_b+2));
    source_float_7_2 = a8[7];
    do
    {
      product_difference_2 = *(weighted_sum_7 - 1);
      weighted_sum_8 = *(float *)((char *)weighted_sum_6 + scaled_index_2);
      saved_weighted_sum = weighted_sum_8;
      scaled_value_10 = weighted_sum_8 * a8[2];
      scaled_value_11 = *weighted_sum_7;
      weighted_sum_7 += 3;
      saved_scaled_value_3 = scaled_value_11;
      scaled_value_12 = scaled_value_11 * a8[8];
      saved_product_difference = product_difference_2;
      saved_product_difference_2 = product_difference_2;
      scaled_value_13 = product_difference_2 * a8[5];
      scaled_value_14 = scaled_value_11 * source_float_6_2;
      scaled_value_15 = saved_scaled_value_3 * source_float_7_2;
      weighted_sum_9 = (float)(weighted_sum_8 * scaled_value_9) + (float)(saved_product_difference * source_component_w_2);
      *(float *)&float_word_7 = weighted_sum_9 + scaled_value_14;
      weighted_sum_10 = scaled_value_14 + *a7;
      sr_shape_offset_a[0] = *(float *)&float_word_7;
      weighted_sum_11 = (float)(saved_weighted_sum * source_component_y_2) + (float)(saved_product_difference_2 * source_float_4_2);
      component_sum_6 = weighted_sum_11 + scaled_value_15;
      component_sum_7 = scaled_value_15 + a7[1];
      *(weighted_sum_6 - 2) = weighted_sum_9 + weighted_sum_10;
      sr_shape_offset_a[1] = component_sum_6;
      component_sum_8 = scaled_value_10 + scaled_value_13;
      component_sum_9 = component_sum_8 + scaled_value_12;
      component_sum_10 = scaled_value_12 + a7[2];
      *(weighted_sum_6 - 1) = weighted_sum_11 + component_sum_7;
      sr_shape_offset_a[2] = component_sum_9;
      *weighted_sum_6 = component_sum_8 + component_sum_10;
      weighted_sum_6 += 3;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
  }
  cached_input_cursor = (__int64)input_cursor_5;
  iteration_count = 0;
  loaded_word_3 = input_cursor_5[4];
  saved_iteration_count = 0;
  if ( loaded_word_3 > 0 )
  {
    weighted_sum_12 = (float *)(input_cursor_5 + 10);
    do
    {
      iteration_count_2 = 0;
      product_difference_3 = *(weighted_sum_12 - 3);
      product_difference_4 = *(weighted_sum_12 - 2);
      product_difference_5 = *(weighted_sum_12 - 4) * *float_word_3;
      scaled_value_16 = product_difference_4 * float_word_3[6];
      scaled_value_17 = product_difference_4 * float_word_3[7];
      scaled_value_18 = product_difference_3 * float_word_3[3];
      scaled_value_19 = product_difference_4 * float_word_3[8];
      product_difference_6 = *(weighted_sum_12 - 4) * float_word_3[1];
      scaled_value_20 = product_difference_3 * float_word_3[4];
      product_difference_7 = *(weighted_sum_12 - 4) * float_word_3[2];
      *(float *)&float_word_8 = (float)(product_difference_5 + scaled_value_18) + scaled_value_16;
      scaled_value_21 = product_difference_3 * float_word_3[5];
      weighted_sum_13 = scaled_value_18 + *a5;
      sr_shape_offset_a[0] = *(float *)&float_word_8;
      component_sum_11 = product_difference_6 + scaled_value_20;
      component_sum_12 = scaled_value_20 + a5[1];
      sr_shape_center_a[0] = (float)(scaled_value_16 + product_difference_5) + weighted_sum_13;
      sr_shape_offset_a[1] = component_sum_11 + scaled_value_17;
      component_sum_13 = product_difference_7 + scaled_value_21;
      component_sum_14 = scaled_value_21 + a5[2];
      sr_shape_center_a[1] = (float)(scaled_value_17 + product_difference_6) + component_sum_12;
      sr_shape_offset_a[2] = component_sum_13 + scaled_value_19;
      sr_shape_center_a[2] = (float)(scaled_value_19 + product_difference_7) + component_sum_14;
      if ( *((int *)weighted_sum_12 - 1) > 0 )
      {
        body_b = body_b_2;
        record_byte_offset = 0;
        do
        {
          if ( sub_1400DAD20(
                 (__int64)&sr_shape_contact[0],
                 (__int64)input_cursor_2,
                 (__int64)sr_shape_vertices_b,
                 (__int64)a7,
                 input_cursor,
                 &sr_shape_center_a[0],
                 (float *)&sr_shape_vertices_a[3 * *(_DWORD *)(record_byte_offset + *(_QWORD *)weighted_sum_12)]) )
          {
            loaded_word_4 = *(_DWORD *)(record_byte_offset + *(_QWORD *)weighted_sum_12);
            unused_written_slot_2 = 1023410176;
            unused_written_slot = 1015021568;
            LODWORD(packed_word_bits_4) = 1053609165;
            *(float *)&float_word_9 = sr_shape_contact[0] - *a7;
            depth = (float)((float)((float)(sr_shape_contact[1] - *(float *)&sr_shape_vertices_a[3 * loaded_word_4 + 1]) * sr_shape_contact[4])
                         + (float)((float)(sr_shape_contact[0] - *(float *)&sr_shape_vertices_a[3 * loaded_word_4]) * sr_shape_contact[3]))
                 + (float)((float)(sr_shape_contact[2] - ((float *)(void *)(sr_shape_vertices_a+2))[3 * loaded_word_4]) * sr_shape_contact[5]);
            component_delta = sr_shape_contact[1] - a5[1];
            *(float *)&float_word_10 = sr_shape_contact[1] - a7[1];
            sr_shape_offset_a[0] = sr_shape_contact[0] - *a5;
            component_delta_2 = sr_shape_contact[2] - a5[2];
            component_delta_3 = sr_shape_contact[2] - a7[2];
            distance = depth;
            sr_shape_offset_a[1] = component_delta;
            sr_shape_offset_a[2] = component_delta_2;
            (*(uint64_t *)(void *)sr_shape_offset_b) = __PAIR64__(float_word_10, float_word_9);
            (*(float *)&sr_shape_offset_b[2]) = component_delta_3;
            sr_physics_add_contact(
              body_a_2,
              body_b,
              (unsigned int *)&sr_shape_offset_a[0],
              (unsigned int *)&(*(uint64_t *)(void *)sr_shape_offset_b),
              (unsigned int *)&sr_shape_contact[3],
              depth,
              0x3ECCCCCDu,
              0.015625,
              0x3D000000u);
            float_word = 1;
          }
          input_cursor = input_cursor_6;
          ++iteration_count_2;
          input_cursor_2 = input_cursor_7;
          record_byte_offset += 4;
        }
        while ( iteration_count_2 < *((_DWORD *)weighted_sum_12 - 1) );
        iteration_count = saved_iteration_count;
        float_word_3 = input_cursor_4;
        cached_input_cursor = (__int64)input_cursor_5;
        saved_float_word = float_word;
      }
      loaded_word_3 = *(_DWORD *)(cached_input_cursor + 16);
      ++iteration_count;
      weighted_sum_12 += 14;
      saved_iteration_count = iteration_count;
    }
    while ( iteration_count < loaded_word_3 );
  }
  iteration_count_3 = 0;
  saved_iteration_count = 0;
  if ( input_cursor_2[4] > 0 )
  {
    weighted_sum_14 = (float *)(input_cursor_2 + 10);
    do
    {
      iteration_count_4 = 0;
      product_difference_8 = *(weighted_sum_14 - 2);
      product_difference_9 = *(weighted_sum_14 - 4) * *input_cursor;
      scaled_value_22 = product_difference_8 * input_cursor[6];
      product_difference_10 = *(weighted_sum_14 - 3) * input_cursor[3];
      scaled_value_23 = product_difference_8 * input_cursor[8];
      product_difference_11 = *(weighted_sum_14 - 3) * input_cursor[4];
      product_difference_12 = *(weighted_sum_14 - 4) * input_cursor[1];
      product_difference_13 = *(weighted_sum_14 - 2) * input_cursor[7];
      product_difference_14 = *(weighted_sum_14 - 4) * input_cursor[2];
      *(float *)&float_word_11 = (float)(product_difference_9 + product_difference_10) + scaled_value_22;
      product_difference_15 = *(weighted_sum_14 - 3) * input_cursor[5];
      weighted_sum_15 = product_difference_10 + *a7;
      sr_shape_offset_a[0] = *(float *)&float_word_11;
      component_sum_15 = product_difference_12 + product_difference_11;
      component_sum_16 = product_difference_11 + a7[1];
      sr_shape_center_a[0] = (float)(scaled_value_22 + product_difference_9) + weighted_sum_15;
      sr_shape_offset_a[1] = component_sum_15 + product_difference_13;
      component_sum_17 = product_difference_14 + product_difference_15;
      component_sum_18 = product_difference_15 + a7[2];
      sr_shape_center_a[1] = component_sum_16 + (float)(product_difference_13 + product_difference_12);
      sr_shape_offset_a[2] = component_sum_17 + scaled_value_23;
      sr_shape_center_a[2] = (float)(scaled_value_23 + product_difference_14) + component_sum_18;
      if ( *((int *)weighted_sum_14 - 1) > 0 )
      {
        body_a = body_b_2;
        record_byte_offset_2 = 0;
        do
        {
          if ( sub_1400DAD20(
                 (__int64)&sr_shape_contact[0],
                 cached_input_cursor,
                 (__int64)sr_shape_vertices_a,
                 (__int64)a5,
                 float_word_3,
                 &sr_shape_center_a[0],
                 (float *)&sr_shape_vertices_b[3 * *(_DWORD *)(record_byte_offset_2 + *(_QWORD *)weighted_sum_14)]) )
          {
            loaded_word_5 = *(_DWORD *)(record_byte_offset_2 + *(_QWORD *)weighted_sum_14);
            unused_written_slot_2 = 1023410176;
            unused_written_slot = 1015021568;
            LODWORD(packed_word_bits_4) = 1053609165;
            *(float *)&float_word_12 = sr_shape_contact[0] - *a5;
            depth_2 = (float)((float)((float)(sr_shape_contact[1] - *(float *)&sr_shape_vertices_b[3 * loaded_word_5 + 1]) * sr_shape_contact[4])
                         + (float)((float)(sr_shape_contact[0] - *(float *)&sr_shape_vertices_b[3 * loaded_word_5]) * sr_shape_contact[3]))
                 + (float)((float)(sr_shape_contact[2] - ((float *)(void *)(sr_shape_vertices_b+2))[3 * loaded_word_5]) * sr_shape_contact[5]);
            component_delta_4 = sr_shape_contact[1] - a7[1];
            *(float *)&float_word_13 = sr_shape_contact[1] - a5[1];
            sr_shape_offset_a[0] = sr_shape_contact[0] - *a7;
            component_delta_5 = sr_shape_contact[2] - a7[2];
            component_delta_6 = sr_shape_contact[2] - a5[2];
            distance = depth_2;
            sr_shape_offset_a[1] = component_delta_4;
            sr_shape_offset_a[2] = component_delta_5;
            (*(uint64_t *)(void *)sr_shape_offset_b) = __PAIR64__(float_word_13, float_word_12);
            (*(float *)&sr_shape_offset_b[2]) = component_delta_6;
            sr_physics_add_contact(
              body_a,
              body_a_2,
              (unsigned int *)&sr_shape_offset_a[0],
              (unsigned int *)&(*(uint64_t *)(void *)sr_shape_offset_b),
              (unsigned int *)&sr_shape_contact[3],
              depth_2,
              0x3ECCCCCDu,
              0.015625,
              0x3D000000u);
            float_word = 1;
          }
          float_word_3 = input_cursor_4;
          ++iteration_count_4;
          cached_input_cursor = (__int64)input_cursor_5;
          record_byte_offset_2 += 4;
        }
        while ( iteration_count_4 < *((_DWORD *)weighted_sum_14 - 1) );
        iteration_count_3 = saved_iteration_count;
        input_cursor = input_cursor_6;
        input_cursor_2 = input_cursor_7;
        saved_float_word = float_word;
      }
      float_word_3 = input_cursor_4;
      ++iteration_count_3;
      weighted_sum_14 += 14;
      saved_iteration_count = iteration_count_3;
    }
    while ( iteration_count_3 < input_cursor_2[4] );
    loaded_word_3 = *(_DWORD *)(cached_input_cursor + 16);
  }
  iteration_count_5 = 0;
  saved_iteration_count_2 = 0;
  if ( loaded_word_3 <= 0 )
    return (uint32_t)float_word;
  record_pointer = input_cursor_4;
  running_total = cached_input_cursor + 32;
  saved_running_total = cached_input_cursor + 32;
  do
  {
    comparison_result = input_cursor_2[4] <= 0;
    product_difference_16 = *(float *)(running_total - 8);
    product_difference_17 = *(float *)(running_total - 4);
    scaled_value_24 = *(float *)running_total;
    scaled_value_25 = product_difference_17 * record_pointer[3];
    iteration_count_10 = 0;
    scaled_value_26 = product_difference_17 * record_pointer[4];
    scaled_value_27 = product_difference_17 * record_pointer[5];
    scaled_value_28 = scaled_value_24 * record_pointer[6];
    scaled_value_29 = product_difference_16 * record_pointer[1];
    weighted_sum_16 = (float)(product_difference_16 * *record_pointer) + scaled_value_25;
    scaled_value_30 = scaled_value_24 * record_pointer[7];
    weighted_sum_17 = (float)(product_difference_16 * *record_pointer) + scaled_value_28;
    scaled_value_31 = product_difference_16 * record_pointer[2];
    scaled_value_32 = scaled_value_24 * record_pointer[8];
    weighted_sum_18 = scaled_value_25 + *float_word_2;
    sr_shape_offset_a[0] = weighted_sum_16 + scaled_value_28;
    component_sum_19 = scaled_value_29 + scaled_value_26;
    component_sum_20 = scaled_value_26 + float_word_2[1];
    component_sum_21 = weighted_sum_18 + weighted_sum_17;
    saved_component_sum_2 = component_sum_21;
    component_sum_22 = component_sum_20 + (float)(scaled_value_29 + scaled_value_30);
    sr_shape_center_a[0] = component_sum_21;
    sr_shape_offset_a[1] = component_sum_19 + scaled_value_30;
    component_sum_23 = scaled_value_31 + scaled_value_27;
    component_sum_24 = scaled_value_27 + float_word_2[2];
    saved_component_sum_3 = component_sum_22;
    sr_shape_center_a[1] = component_sum_22;
    component_sum_25 = component_sum_24 + (float)(scaled_value_31 + scaled_value_32);
    sr_shape_offset_a[2] = component_sum_23 + scaled_value_32;
    saved_component_sum = component_sum_25;
    sr_shape_center_a[2] = component_sum_25;
    if ( comparison_result )
      goto LABEL_98;
    running_total_2 = input_cursor_2 + 8;
    do
    {
      product_difference_18 = *((float *)running_total_2 - 2);
      scaled_index_3 = 0;
      product_difference_19 = *((float *)running_total_2 - 1);
      scaled_value_33 = product_difference_18 * *input_cursor;
      loaded_word_6 = *(_DWORD *)(running_total + 32);
      scaled_index_4 = 0;
      scaled_value_34 = product_difference_19 * input_cursor[3];
      scratch_buffer[0] = 0;
      scaled_value_35 = *(float *)running_total_2;
      scaled_value_36 = product_difference_18 * input_cursor[1];
      saved_product_difference_3 = product_difference_19;
      scratch_buffer_2[0] = 0;
      scaled_value_37 = product_difference_18 * input_cursor[2];
      scaled_value_38 = product_difference_19 * input_cursor[5];
      scaled_value_39 = scaled_value_35 * input_cursor[6];
      saved_scaled_value_4 = scaled_value_35;
      scaled_value_40 = scaled_value_35 * input_cursor[8];
      scaled_value_41 = saved_product_difference_3 * input_cursor[4];
      *(float *)&float_word_14 = (float)(scaled_value_33 + scaled_value_34) + scaled_value_39;
      scaled_value_42 = saved_scaled_value_4 * input_cursor[7];
      weighted_sum_19 = scaled_value_34 + *input_cursor_3;
      sr_shape_offset_a[0] = *(float *)&float_word_14;
      component_sum_26 = scaled_value_36 + scaled_value_41;
      component_sum_27 = weighted_sum_19 + (float)(scaled_value_33 + scaled_value_39);
      component_sum_28 = (float)(scaled_value_36 + scaled_value_42) + (float)(scaled_value_41 + input_cursor_3[1]);
      float_buffer[0] = component_sum_27;
      component_delta_7 = component_sum_27 - component_sum_21;
      sr_shape_offset_a[1] = component_sum_26 + scaled_value_42;
      component_sum_29 = scaled_value_37 + scaled_value_38;
      float_buffer[1] = component_sum_28;
      component_sum_30 = scaled_value_37 + scaled_value_40;
      component_sum_31 = scaled_value_38 + input_cursor_3[2];
      component_delta_12 = component_sum_27 - component_sum_21;
      component_sum_32 = component_sum_29 + scaled_value_40;
      component_delta_8 = component_sum_28 - component_sum_22;
      component_sum_33 = component_sum_30 + component_sum_31;
      sr_shape_offset_a[2] = component_sum_32;
      component_delta_11 = component_sum_28 - component_sum_22;
      float_buffer[2] = component_sum_33;
      component_delta_9 = component_sum_33 - component_sum_25;
      component_delta_13 = component_sum_33 - component_sum_25;
      if ( loaded_word_6 < 4 )
      {
        if ( loaded_word_6 <= 0 )
          goto LABEL_54;
        loaded_word_7 = *(_QWORD *)(running_total + 40);
        rol4_result = 1;
LABEL_49:
        iteration_count_6 = scaled_index_3;
        running_total_3 = (_DWORD *)(loaded_word_7 + 12 * scaled_index_4);
        remaining_count_4 = (unsigned int)(loaded_word_6 - scaled_index_3);
        do
        {
          scaled_index_10 = 3 * *running_total_3;
          weighted_sum_30 = *(float *)&sr_shape_vertices_a[scaled_index_10 + 1];
          weighted_sum_31 = ((float *)(void *)(sr_shape_vertices_a+2))[scaled_index_10];
          sr_shape_offset_a[0] = *(float *)&sr_shape_vertices_a[scaled_index_10] - component_sum_21;
          sr_shape_offset_a[1] = weighted_sum_30 - component_sum_22;
          sr_shape_offset_a[2] = weighted_sum_31 - component_sum_25;
          if ( (float)((float)((float)((float)(weighted_sum_30 - component_sum_22) * component_delta_8) + (float)(sr_shape_offset_a[0] * component_delta_7))
                     + (float)((float)(weighted_sum_31 - component_sum_25) * component_delta_9)) < 0.0 )
          {
            scaled_index_11 = 3 * running_total_3[1];
            weighted_sum_32 = *(float *)&sr_shape_vertices_a[scaled_index_11 + 1];
            weighted_sum_33 = ((float *)(void *)(sr_shape_vertices_a+2))[scaled_index_11];
            *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = *(float *)&sr_shape_vertices_a[scaled_index_11] - component_sum_21;
            *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = weighted_sum_32 - component_sum_22;
            (*(float *)&sr_shape_offset_b[2]) = weighted_sum_33 - component_sum_25;
            if ( (float)((float)((float)((float)(weighted_sum_32 - component_sum_22) * component_delta_8) + (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) * component_delta_7))
                       + (float)((float)(weighted_sum_33 - component_sum_25) * component_delta_9)) < 0.0 )
              *((_DWORD *)scratch_buffer + (iteration_count_6 >> 5)) |= rol4_result;
          }
          rol4_result = __ROL4__(rol4_result, 1);
          running_total_3 += 3;
          ++iteration_count_6;
          --remaining_count_4;
        }
        while ( remaining_count_4 );
        goto LABEL_54;
      }
      loaded_word_7 = *(_QWORD *)(running_total + 40);
      rol4_result = 1;
      record_byte_offset_3 = 2;
      shifted_bits = ((unsigned int)(loaded_word_6 - 4) >> 2) + 1;
      record_byte_offset_4 = (_DWORD *)(loaded_word_7 + 12);
      remaining_count_3 = shifted_bits;
      scaled_index_3 = 4 * shifted_bits;
      scaled_index_4 = 4LL * shifted_bits;
      do
      {
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_a[3 * *(record_byte_offset_4 - 3) + 1] - component_sum_22) * component_delta_8)
                           + (float)((float)(*(float *)&sr_shape_vertices_a[3 * *(record_byte_offset_4 - 3)] - component_sum_21) * component_delta_7))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_a+2))[3 * *(record_byte_offset_4 - 3)] - component_sum_25) * component_delta_9)) < 0.0 )
        {
          scaled_index_5 = 3 * *(record_byte_offset_4 - 2);
          weighted_sum_20 = *(float *)&sr_shape_vertices_a[scaled_index_5 + 1];
          weighted_sum_21 = ((float *)(void *)(sr_shape_vertices_a+2))[scaled_index_5];
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = *(float *)&sr_shape_vertices_a[scaled_index_5] - component_sum_21;
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = weighted_sum_20 - component_sum_22;
          (*(float *)&sr_shape_offset_b[2]) = weighted_sum_21 - component_sum_25;
          if ( (float)((float)((float)((float)(weighted_sum_20 - component_sum_22) * component_delta_8) + (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) * component_delta_7))
                     + (float)((float)(weighted_sum_21 - component_sum_25) * component_delta_9)) < 0.0 )
            *((_DWORD *)scratch_buffer + ((record_byte_offset_3 - 2) >> 5)) |= rol4_result;
        }
        rol4_result_2 = __ROL4__(rol4_result, 1);
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_a[3 * *record_byte_offset_4 + 1] - component_sum_22) * component_delta_8)
                           + (float)((float)(*(float *)&sr_shape_vertices_a[3 * *record_byte_offset_4] - component_sum_21) * component_delta_7))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_a+2))[3 * *record_byte_offset_4] - component_sum_25) * component_delta_9)) < 0.0 )
        {
          scaled_index_6 = 3 * record_byte_offset_4[1];
          weighted_sum_22 = *(float *)&sr_shape_vertices_a[scaled_index_6 + 1];
          weighted_sum_23 = ((float *)(void *)(sr_shape_vertices_a+2))[scaled_index_6];
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = *(float *)&sr_shape_vertices_a[scaled_index_6] - component_sum_21;
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = weighted_sum_22 - component_sum_22;
          (*(float *)&sr_shape_offset_b[2]) = weighted_sum_23 - component_sum_25;
          if ( (float)((float)((float)((float)(weighted_sum_22 - component_sum_22) * component_delta_8) + (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) * component_delta_7))
                     + (float)((float)(weighted_sum_23 - component_sum_25) * component_delta_9)) < 0.0 )
            *((_DWORD *)scratch_buffer + ((record_byte_offset_3 - 1) >> 5)) |= rol4_result_2;
        }
        rol4_result_3 = __ROL4__(rol4_result_2, 1);
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_a[3 * record_byte_offset_4[3] + 1] - component_sum_22) * component_delta_8)
                           + (float)((float)(*(float *)&sr_shape_vertices_a[3 * record_byte_offset_4[3]] - component_sum_21) * component_delta_7))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_a+2))[3 * record_byte_offset_4[3]] - component_sum_25) * component_delta_9)) < 0.0 )
        {
          scaled_index_7 = 3 * record_byte_offset_4[4];
          weighted_sum_24 = *(float *)&sr_shape_vertices_a[scaled_index_7 + 1];
          weighted_sum_25 = ((float *)(void *)(sr_shape_vertices_a+2))[scaled_index_7];
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = *(float *)&sr_shape_vertices_a[scaled_index_7] - component_sum_21;
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = weighted_sum_24 - component_sum_22;
          (*(float *)&sr_shape_offset_b[2]) = weighted_sum_25 - component_sum_25;
          if ( (float)((float)((float)((float)(weighted_sum_24 - component_sum_22) * component_delta_8) + (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) * component_delta_7))
                     + (float)((float)(weighted_sum_25 - component_sum_25) * component_delta_9)) < 0.0 )
            *((_DWORD *)scratch_buffer + (record_byte_offset_3 >> 5)) |= rol4_result_3;
        }
        rol4_result_4 = __ROL4__(rol4_result_3, 1);
        scaled_index_8 = 3 * record_byte_offset_4[6];
        weighted_sum_26 = *(float *)&sr_shape_vertices_a[scaled_index_8 + 1];
        weighted_sum_27 = ((float *)(void *)(sr_shape_vertices_a+2))[scaled_index_8];
        sr_shape_offset_a[0] = *(float *)&sr_shape_vertices_a[scaled_index_8] - component_sum_21;
        sr_shape_offset_a[1] = weighted_sum_26 - component_sum_22;
        sr_shape_offset_a[2] = weighted_sum_27 - component_sum_25;
        if ( (float)((float)((float)((float)(weighted_sum_26 - component_sum_22) * component_delta_8) + (float)(sr_shape_offset_a[0] * component_delta_7))
                   + (float)((float)(weighted_sum_27 - component_sum_25) * component_delta_9)) < 0.0 )
        {
          scaled_index_9 = 3 * record_byte_offset_4[7];
          weighted_sum_28 = *(float *)&sr_shape_vertices_a[scaled_index_9 + 1];
          weighted_sum_29 = ((float *)(void *)(sr_shape_vertices_a+2))[scaled_index_9];
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = *(float *)&sr_shape_vertices_a[scaled_index_9] - component_sum_21;
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = weighted_sum_28 - component_sum_22;
          (*(float *)&sr_shape_offset_b[2]) = weighted_sum_29 - component_sum_25;
          if ( (float)((float)((float)((float)(weighted_sum_28 - component_sum_22) * component_delta_8) + (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) * component_delta_7))
                     + (float)((float)(weighted_sum_29 - component_sum_25) * component_delta_9)) < 0.0 )
            *((_DWORD *)scratch_buffer + ((record_byte_offset_3 + 1) >> 5)) |= rol4_result_4;
        }
        rol4_result = __ROL4__(rol4_result_4, 1);
        record_byte_offset_4 += 12;
        record_byte_offset_3 += 4;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
      if ( scaled_index_3 < loaded_word_6 )
        goto LABEL_49;
LABEL_54:
      table_value = running_total_2[8];
      scaled_index_12 = 0;
      scaled_index_13 = 0;
      if ( table_value < 4 )
      {
        if ( table_value <= 0 )
          goto LABEL_78;
        loaded_word_8 = *((_QWORD *)running_total_2 + 5);
        rol4_result_5 = 1;
LABEL_73:
        iteration_count_7 = scaled_index_12;
        running_total_4 = (_DWORD *)(loaded_word_8 + 12 * scaled_index_13);
        remaining_count_6 = (unsigned int)(table_value - scaled_index_12);
        do
        {
          scaled_index_19 = 3 * *running_total_4;
          combined_products_11 = *(float *)&sr_shape_vertices_b[scaled_index_19 + 1] - component_sum_28;
          combined_products_12 = ((float *)(void *)(sr_shape_vertices_b+2))[scaled_index_19] - component_sum_33;
          product_difference_25 = component_delta_7 * (float)(*(float *)&sr_shape_vertices_b[scaled_index_19] - component_sum_27);
          sr_shape_offset_a[0] = *(float *)&sr_shape_vertices_b[scaled_index_19] - component_sum_27;
          sr_shape_offset_a[1] = combined_products_11;
          sr_shape_offset_a[2] = combined_products_12;
          if ( (float)((float)(product_difference_25 + (float)(component_delta_8 * combined_products_11)) + (float)(component_delta_9 * combined_products_12)) > 0.0 )
          {
            scaled_index_20 = 3 * running_total_4[1];
            product_difference_26 = *(float *)&sr_shape_vertices_b[scaled_index_20] - component_sum_27;
            combined_products_13 = ((float *)(void *)(sr_shape_vertices_b+2))[scaled_index_20] - component_sum_33;
            combined_products_14 = component_delta_8 * (float)(*(float *)&sr_shape_vertices_b[scaled_index_20 + 1] - component_sum_28);
            *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = *(float *)&sr_shape_vertices_b[scaled_index_20 + 1] - component_sum_28;
            *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = product_difference_26;
            (*(float *)&sr_shape_offset_b[2]) = combined_products_13;
            if ( (float)((float)(combined_products_14 + (float)(component_delta_7 * product_difference_26)) + (float)(component_delta_9 * combined_products_13)) > 0.0 )
              *((_DWORD *)scratch_buffer_2 + (iteration_count_7 >> 5)) |= rol4_result_5;
          }
          rol4_result_5 = __ROL4__(rol4_result_5, 1);
          running_total_4 += 3;
          ++iteration_count_7;
          --remaining_count_6;
        }
        while ( remaining_count_6 );
        goto LABEL_78;
      }
      loaded_word_8 = *((_QWORD *)running_total_2 + 5);
      rol4_result_5 = 1;
      shifted_bits_2 = ((unsigned int)(table_value - 4) >> 2) + 1;
      record_byte_offset_5 = 2;
      remaining_count_5 = shifted_bits_2;
      record_byte_offset_6 = (_DWORD *)(loaded_word_8 + 12);
      scaled_index_12 = 4 * shifted_bits_2;
      scaled_index_13 = 4LL * shifted_bits_2;
      do
      {
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_b[3 * *(record_byte_offset_6 - 3) + 1] - component_sum_28) * component_delta_8)
                           + (float)((float)(*(float *)&sr_shape_vertices_b[3 * *(record_byte_offset_6 - 3)] - component_sum_27) * component_delta_7))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_b+2))[3 * *(record_byte_offset_6 - 3)] - component_sum_33) * component_delta_9)) > 0.0 )
        {
          scaled_index_14 = 3 * *(record_byte_offset_6 - 2);
          product_difference_20 = *(float *)&sr_shape_vertices_b[scaled_index_14] - component_sum_27;
          combined_products = ((float *)(void *)(sr_shape_vertices_b+2))[scaled_index_14] - component_sum_33;
          combined_products_2 = component_delta_8 * (float)(*(float *)&sr_shape_vertices_b[scaled_index_14 + 1] - component_sum_28);
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = *(float *)&sr_shape_vertices_b[scaled_index_14 + 1] - component_sum_28;
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = product_difference_20;
          (*(float *)&sr_shape_offset_b[2]) = combined_products;
          if ( (float)((float)(combined_products_2 + (float)(component_delta_7 * product_difference_20)) + (float)(component_delta_9 * combined_products)) > 0.0 )
            *((_DWORD *)scratch_buffer_2 + ((record_byte_offset_5 - 2) >> 5)) |= rol4_result_5;
        }
        rol4_result_6 = __ROL4__(rol4_result_5, 1);
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_b[3 * *record_byte_offset_6 + 1] - component_sum_28) * component_delta_8)
                           + (float)((float)(*(float *)&sr_shape_vertices_b[3 * *record_byte_offset_6] - component_sum_27) * component_delta_7))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_b+2))[3 * *record_byte_offset_6] - component_sum_33) * component_delta_9)) > 0.0 )
        {
          scaled_index_15 = 3 * record_byte_offset_6[1];
          product_difference_21 = *(float *)&sr_shape_vertices_b[scaled_index_15] - component_sum_27;
          combined_products_3 = ((float *)(void *)(sr_shape_vertices_b+2))[scaled_index_15] - component_sum_33;
          combined_products_4 = component_delta_8 * (float)(*(float *)&sr_shape_vertices_b[scaled_index_15 + 1] - component_sum_28);
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = *(float *)&sr_shape_vertices_b[scaled_index_15 + 1] - component_sum_28;
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = product_difference_21;
          (*(float *)&sr_shape_offset_b[2]) = combined_products_3;
          if ( (float)((float)(combined_products_4 + (float)(component_delta_7 * product_difference_21)) + (float)(component_delta_9 * combined_products_3)) > 0.0 )
            *((_DWORD *)scratch_buffer_2 + ((record_byte_offset_5 - 1) >> 5)) |= rol4_result_6;
        }
        rol4_result_7 = __ROL4__(rol4_result_6, 1);
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_b[3 * record_byte_offset_6[3] + 1] - component_sum_28) * component_delta_8)
                           + (float)((float)(*(float *)&sr_shape_vertices_b[3 * record_byte_offset_6[3]] - component_sum_27) * component_delta_7))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_b+2))[3 * record_byte_offset_6[3]] - component_sum_33) * component_delta_9)) > 0.0 )
        {
          scaled_index_16 = 3 * record_byte_offset_6[4];
          product_difference_22 = *(float *)&sr_shape_vertices_b[scaled_index_16] - component_sum_27;
          combined_products_5 = ((float *)(void *)(sr_shape_vertices_b+2))[scaled_index_16] - component_sum_33;
          combined_products_6 = component_delta_8 * (float)(*(float *)&sr_shape_vertices_b[scaled_index_16 + 1] - component_sum_28);
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = *(float *)&sr_shape_vertices_b[scaled_index_16 + 1] - component_sum_28;
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = product_difference_22;
          (*(float *)&sr_shape_offset_b[2]) = combined_products_5;
          if ( (float)((float)(combined_products_6 + (float)(component_delta_7 * product_difference_22)) + (float)(component_delta_9 * combined_products_5)) > 0.0 )
            *((_DWORD *)scratch_buffer_2 + (record_byte_offset_5 >> 5)) |= rol4_result_7;
        }
        rol4_result_8 = __ROL4__(rol4_result_7, 1);
        scaled_index_17 = 3 * record_byte_offset_6[6];
        combined_products_7 = *(float *)&sr_shape_vertices_b[scaled_index_17 + 1] - component_sum_28;
        combined_products_8 = ((float *)(void *)(sr_shape_vertices_b+2))[scaled_index_17] - component_sum_33;
        product_difference_23 = component_delta_7 * (float)(*(float *)&sr_shape_vertices_b[scaled_index_17] - component_sum_27);
        sr_shape_offset_a[0] = *(float *)&sr_shape_vertices_b[scaled_index_17] - component_sum_27;
        sr_shape_offset_a[1] = combined_products_7;
        sr_shape_offset_a[2] = combined_products_8;
        if ( (float)((float)(product_difference_23 + (float)(component_delta_8 * combined_products_7)) + (float)(component_delta_9 * combined_products_8)) > 0.0 )
        {
          scaled_index_18 = 3 * record_byte_offset_6[7];
          product_difference_24 = *(float *)&sr_shape_vertices_b[scaled_index_18] - component_sum_27;
          combined_products_9 = ((float *)(void *)(sr_shape_vertices_b+2))[scaled_index_18] - component_sum_33;
          combined_products_10 = component_delta_8 * (float)(*(float *)&sr_shape_vertices_b[scaled_index_18 + 1] - component_sum_28);
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = *(float *)&sr_shape_vertices_b[scaled_index_18 + 1] - component_sum_28;
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = product_difference_24;
          (*(float *)&sr_shape_offset_b[2]) = combined_products_9;
          if ( (float)((float)(combined_products_10 + (float)(component_delta_7 * product_difference_24)) + (float)(component_delta_9 * combined_products_9)) > 0.0 )
            *((_DWORD *)scratch_buffer_2 + ((record_byte_offset_5 + 1) >> 5)) |= rol4_result_8;
        }
        rol4_result_5 = __ROL4__(rol4_result_8, 1);
        record_byte_offset_6 += 12;
        record_byte_offset_5 += 4;
        --remaining_count_5;
      }
      while ( remaining_count_5 );
      if ( scaled_index_12 < table_value )
        goto LABEL_73;
LABEL_78:
      running_total = saved_running_total;
      iteration_count_8 = 0;
      saved_iteration_count = 0;
      if ( loaded_word_6 > 0 )
      {
        record_byte_offset_7 = 0;
        do
        {
          iteration_count_9 = 0;
          if ( table_value > 0 )
          {
            rol4_result_9 = 1;
            rol4_result_10 = __ROL4__(1, iteration_count_8) & *((_DWORD *)scratch_buffer + ((__int64)iteration_count_8 >> 5));
            record_byte_offset_8 = 0;
            do
            {
              if ( !rol4_result_10 || (rol4_result_9 & *((_DWORD *)scratch_buffer_2 + ((__int64)iteration_count_9 >> 5))) == 0 )
              {
                loaded_word_9 = *(_QWORD *)(saved_running_total + 40);
                packed_word_bits = 3 * *(_DWORD *)(loaded_word_9 + record_byte_offset_7);
                weighted_sum_34 = *(float *)&sr_shape_vertices_a[packed_word_bits + 1];
                sr_shape_offset_a[0] = *(float *)&sr_shape_vertices_a[packed_word_bits];
                weighted_sum_35 = ((float *)(void *)(sr_shape_vertices_a+2))[packed_word_bits];
                LODWORD(packed_word_bits) = *(_DWORD *)(loaded_word_9 + record_byte_offset_7 + 4);
                loaded_word_10 = *((_QWORD *)running_total_2 + 5);
                sr_shape_offset_a[2] = weighted_sum_35;
                sr_shape_offset_a[1] = weighted_sum_34;
                packed_word_bits_2 = 3 * (int)packed_word_bits;
                table_value_2 = sr_shape_vertices_a[packed_word_bits_2 + 1];
                LODWORD((*(uint64_t *)(void *)sr_shape_offset_b)) = sr_shape_vertices_a[packed_word_bits_2];
                weighted_sum_36 = ((float *)(void *)(sr_shape_vertices_a+2))[packed_word_bits_2];
                LODWORD(packed_word_bits_2) = *(_DWORD *)(loaded_word_10 + record_byte_offset_8);
                (*(float *)&sr_shape_offset_b[2]) = weighted_sum_36;
                HIDWORD((*(uint64_t *)(void *)sr_shape_offset_b)) = table_value_2;
                packed_word_bits_3 = 3 * (int)packed_word_bits_2;
                weighted_sum_37 = *(float *)&sr_shape_vertices_b[packed_word_bits_3 + 1];
                b0[0] = *(float *)&sr_shape_vertices_b[packed_word_bits_3];
                weighted_sum_38 = ((float *)(void *)(sr_shape_vertices_b+2))[packed_word_bits_3];
                LODWORD(packed_word_bits_3) = *(_DWORD *)(loaded_word_10 + record_byte_offset_8 + 4);
                b0[2] = weighted_sum_38;
                b0[1] = weighted_sum_37;
                scaled_index_21 = 3 * (int)packed_word_bits_3;
                weighted_sum_39 = *(float *)&sr_shape_vertices_b[scaled_index_21 + 1];
                b1[0] = *(float *)&sr_shape_vertices_b[scaled_index_21];
                weighted_sum_40 = ((float *)(void *)(sr_shape_vertices_b+2))[scaled_index_21];
                b1[1] = weighted_sum_39;
                b1[2] = weighted_sum_40;
                if ( (unsigned int)sr_collision_edge_edge(
                                     (float *)&(*(uint64_t *)(void *)sr_shape_edge_a),
                                     (float *)&(*(uint64_t *)(void *)sr_shape_edge_b),
                                     &distance,
                                     &sr_shape_offset_a[0],
                                     (float *)&(*(uint64_t *)(void *)sr_shape_offset_b),
                                     b0,
                                     b1) )
                {
                  scaled_value_43 = *(float *)&(*(uint64_t *)(void *)sr_shape_edge_b);
                  weighted_sum_41 = *((float *)&(*(uint64_t *)(void *)sr_shape_edge_b) + 1);
                  converted_vector = ((__m128)_mm_cvtsi32_si128((int)((*(uint64_t *)(void *)sr_shape_edge_a))));
                  converted_vector_2 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD((*(uint64_t *)(void *)sr_shape_edge_a)))));
                  product_difference_27 = *(float *)&(*(uint64_t *)(void *)sr_shape_edge_b) - *(float *)&(*(uint64_t *)(void *)sr_shape_edge_a);
                  state_address = (*(float *)&sr_shape_edge_b[2]);
                  combined_products_15 = *((float *)&(*(uint64_t *)(void *)sr_shape_edge_b) + 1) - *((float *)&(*(uint64_t *)(void *)sr_shape_edge_a) + 1);
                  state_address_2 = (*(float *)&sr_shape_edge_a[2]);
                  state_address_3 = (*(float *)&sr_shape_edge_b[2]) - (*(float *)&sr_shape_edge_a[2]);
                  *(float *)&(*(int64_t *)(void *)sr_shape_edge_normal) = *(float *)&(*(uint64_t *)(void *)sr_shape_edge_b) - *(float *)&(*(uint64_t *)(void *)sr_shape_edge_a);
                  *((float *)&(*(int64_t *)(void *)sr_shape_edge_normal) + 1) = *((float *)&(*(uint64_t *)(void *)sr_shape_edge_b) + 1) - *((float *)&(*(uint64_t *)(void *)sr_shape_edge_a) + 1);
                  (*(float *)&sr_shape_edge_normal[2]) = (*(float *)&sr_shape_edge_b[2]) - (*(float *)&sr_shape_edge_a[2]);
                  if ( (float)((float)((float)(component_delta_11 * (float)(*((float *)&(*(uint64_t *)(void *)sr_shape_edge_b) + 1) - *((float *)&(*(uint64_t *)(void *)sr_shape_edge_a) + 1)))
                                     + (float)(component_delta_12 * (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_edge_b) - *(float *)&(*(uint64_t *)(void *)sr_shape_edge_a))))
                             + (float)(component_delta_13 * (float)((*(float *)&sr_shape_edge_b[2]) - (*(float *)&sr_shape_edge_a[2])))) <= 0.0
                    && sr_collision_edge_side(b0, b1, &sr_shape_center_a[0], &sr_shape_offset_a[0], (float *)&(*(uint64_t *)(void *)sr_shape_offset_b))
                    && sr_collision_edge_side(&sr_shape_offset_a[0], (float *)&(*(uint64_t *)(void *)sr_shape_offset_b), float_buffer, b0, b1) )
                  {
                    square_root = fsqrt((float)((float)(combined_products_15 * combined_products_15) + (float)(product_difference_27 * product_difference_27)) + (float)(state_address_3 * state_address_3));
                    if ( square_root == 0.0 )
                    {
                      (*(int64_t *)(void *)sr_shape_edge_normal) = 0;
                      (*(float *)&sr_shape_edge_normal[2]) = 0.0;
                    }
                    else
                    {
                      *(float *)&(*(int64_t *)(void *)sr_shape_edge_normal) = (float)(1.0 / square_root) * product_difference_27;
                      *((float *)&(*(int64_t *)(void *)sr_shape_edge_normal) + 1) = (float)(1.0 / square_root) * combined_products_15;
                      (*(float *)&sr_shape_edge_normal[2]) = (float)(1.0 / square_root) * state_address_3;
                    }
                    SR_VEC_LANES(128, converted_vector, f32)[0] = (float)(SR_VEC_LANES(128, converted_vector, f32)[0] + scaled_value_43) * 0.5;
                    SR_VEC_LANES(128, converted_vector_2, f32)[0] = (float)(SR_VEC_LANES(128, converted_vector_2, f32)[0] + weighted_sum_41) * 0.5;
                    (*(float *)&sr_shape_offset_b[2]) = (float)(state_address_2 + state_address) * 0.5;
                    reordered_vector = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(converted_vector, converted_vector_2), u64)[0];
                    float_lane_0 = SR_VEC_LANES(128, converted_vector_2, f32)[0];
                    *(float *)&float_word_15 = SR_VEC_LANES(128, converted_vector_2, f32)[0] - a7[1];
                    (*(uint64_t *)(void *)sr_shape_offset_b) = reordered_vector;
                    (*(uint64_t *)(void *)sr_shape_edge_a) = reordered_vector;
                    (*(uint64_t *)(void *)sr_shape_edge_b) = reordered_vector;
                    LODWORD(reordered_vector) = SR_VEC_LANES(128, converted_vector, i32)[0];
                    *(float *)&float_word_16 = SR_VEC_LANES(128, converted_vector, f32)[0] - *a7;
                    (*(float *)&sr_shape_edge_a[2]) = (*(float *)&sr_shape_offset_b[2]);
                    (*(float *)&sr_shape_edge_b[2]) = (*(float *)&sr_shape_offset_b[2]);
                    (*(uint64_t *)(void *)sr_shape_offset_b) = __PAIR64__(float_word_15, float_word_16);
                    component_delta_10 = float_lane_0 - a5[1];
                    sr_shape_offset_a[0] = *(float *)&reordered_vector - *a5;
                    *(float *)&reordered_vector = (*(float *)&sr_shape_offset_b[2]) - a5[2];
                    state_address_4 = (*(float *)&sr_shape_offset_b[2]) - a7[2];
                    sr_shape_offset_a[1] = component_delta_10;
                    sr_shape_offset_a[2] = *(float *)&reordered_vector;
                    (*(float *)&sr_shape_offset_b[2]) = state_address_4;
                    sr_physics_add_contact(
                      body_a_2,
                      body_b_2,
                      (unsigned int *)&sr_shape_offset_a[0],
                      (unsigned int *)&(*(uint64_t *)(void *)sr_shape_offset_b),
                      (unsigned int *)&(*(int64_t *)(void *)sr_shape_edge_normal),
                      distance,
                      0x3ECCCCCDu,
                      0.015625,
                      0x3D000000u);
                    saved_float_word = 1;
                  }
                }
              }
              table_value = running_total_2[8];
              ++iteration_count_9;
              rol4_result_9 = __ROL4__(rol4_result_9, 1);
              record_byte_offset_8 += 12;
            }
            while ( iteration_count_9 < table_value );
            iteration_count_8 = saved_iteration_count;
            running_total = saved_running_total;
          }
          ++iteration_count_8;
          record_byte_offset_7 += 12;
          saved_iteration_count = iteration_count_8;
        }
        while ( iteration_count_8 < *(_DWORD *)(running_total + 32) );
        component_sum_25 = saved_component_sum;
        component_sum_21 = saved_component_sum_2;
        component_sum_22 = saved_component_sum_3;
        input_cursor_3 = a7;
      }
      running_total_2 += 14;
      input_cursor_2 = input_cursor_7;
      input_cursor = input_cursor_6;
      ++iteration_count_10;
    }
    while ( iteration_count_10 < input_cursor_7[4] );
    float_word_2 = a5;
    record_pointer = input_cursor_4;
    cached_input_cursor = (__int64)input_cursor_5;
    iteration_count_5 = saved_iteration_count_2;
LABEL_98:
    input_cursor = input_cursor_6;
    ++iteration_count_5;
    running_total += 56;
    saved_iteration_count_2 = iteration_count_5;
    saved_running_total = running_total;
  }
  while ( iteration_count_5 < *(_DWORD *)(cached_input_cursor + 16) );
  return (uint32_t)saved_float_word;
}
#undef packed_word_bits_4
#undef unused_written_slot
#undef unused_written_slot_2
#undef saved_iteration_count
#undef saved_float_word
#undef distance
#undef body_b_2
#undef body_a_2
#undef iteration_count_10
#undef saved_iteration_count_2
#undef input_cursor_4
#undef input_cursor_5
#undef saved_running_total
#undef input_cursor_6
#undef input_cursor_7
#undef component_delta_11
#undef component_delta_12
#undef component_delta_13
#undef saved_component_sum
#undef saved_component_sum_2
#undef saved_component_sum_3
#undef b1
#undef b0
#undef float_buffer
#undef scratch_buffer
#undef scratch_buffer_2
#undef unused_frame_slot_29808

//----- (000000014004DE30) ----------------------------------------------------
__int64            sub_14004DE30(unsigned int a1, int a2, int a3, int a4)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 input_value_3;
  __int64 record_word_offset;
  __int64 table_value;
  __int64 record_word_offset_2;
  int table_value_2;
  unsigned int element_index;
  int iteration_count;
  unsigned int *buffer_cursor;
  __int64 scaled_index;
  unsigned int table_value_3;
  int iteration_count_2;
  unsigned int *buffer_cursor_2;
  __int64 scaled_index_2;
  unsigned int table_value_4;
  unsigned int *state_address;
  __int64 scaled_index_3;
  unsigned int *state_address_2;
  unsigned int table_value_5;
  float combined_products;
  float combined_products_2;
  float combined_products_3;

  input_value = a3;
  input_value_2 = a2;
  input_value_3 = a4;
  if ( a2 == a3 )
    return 0xFFFFFFFFLL;
  if ( a2 < 0 )
    return 0xFFFFFFFFLL;
  if ( a2 >= (int)physics_point_count )
    return 0xFFFFFFFFLL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a3 >= (int)physics_point_count )
    return 0xFFFFFFFFLL;
  record_word_offset = 60LL * a2;
  table_value = (int)dword_140404A6C[record_word_offset + 73007041];
  if ( (int)table_value >= 31 )
    return 0xFFFFFFFFLL;
  record_word_offset_2 = 60LL * a3;
  table_value_2 = dword_140404A6C[record_word_offset_2 + 73007041];
  if ( table_value_2 >= 31 || (_DWORD)input_value_3 != -1 && (int)dword_140404A6C[5210 * input_value_3 + 129716962] >= 127 )
    return 0xFFFFFFFFLL;
  element_index = 0;
  iteration_count = 0;
  if ( (int)table_value > 0 )
  {
    buffer_cursor = &dword_140404A6C[record_word_offset + 73007042];
    do
    {
      scaled_index = 61LL * (int)*buffer_cursor;
      table_value_3 = dword_140404A6C[scaled_index + 486149259];
      if ( (_DWORD)input_value_2 == table_value_3 && (_DWORD)input_value == dword_140404A6C[scaled_index + 486149260] )
        return 0xFFFFFFFFLL;
      if ( (_DWORD)input_value_2 == dword_140404A6C[scaled_index + 486149260] && (_DWORD)input_value == table_value_3 )
        return 0xFFFFFFFFLL;
      ++iteration_count;
      ++buffer_cursor;
    }
    while ( iteration_count < (int)table_value );
  }
  iteration_count_2 = 0;
  if ( table_value_2 > 0 )
  {
    buffer_cursor_2 = &dword_140404A6C[record_word_offset_2 + 73007042];
    do
    {
      scaled_index_2 = 61LL * (int)*buffer_cursor_2;
      table_value_4 = dword_140404A6C[scaled_index_2 + 486149259];
      if ( (_DWORD)input_value_2 == table_value_4 && (_DWORD)input_value == dword_140404A6C[scaled_index_2 + 486149260] )
        return 0xFFFFFFFFLL;
      if ( (_DWORD)input_value_2 == dword_140404A6C[scaled_index_2 + 486149260] && (_DWORD)input_value == table_value_4 )
        return 0xFFFFFFFFLL;
      ++iteration_count_2;
      ++buffer_cursor_2;
    }
    while ( iteration_count_2 < table_value_2 );
  }
  state_address = &g_1B4287C80;
  while ( *state_address )
  {
    ++element_index;
    state_address += 61;
    if ( (__int64)state_address >= (__int64)&g_1B4657C80 )
      return 0xFFFFFFFFLL;
  }
  if ( element_index == -1 )
    return 0xFFFFFFFFLL;
  scaled_index_3 = 61LL * (int)element_index;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index_3 + 486149254]), 0, 0xF0u);
  *(_QWORD *)&dword_140404A6C[scaled_index_3 + 486149253] = 1;
  dword_140404A6C[scaled_index_3 + 486149256] = 0x10000;
  dword_140404A6C[scaled_index_3 + 486149258] = 2;
  state_address_2 = &dword_140404A6C[36 * element_index + 485543029];
  dword_140404A6C[scaled_index_3 + 486149255] = a1;
  dword_140404A6C[scaled_index_3 + 486149259] = input_value_2;
  dword_140404A6C[scaled_index_3 + 486149260] = input_value;
  *(_OWORD *)state_address_2 = 0;
  dword_140404A6C[scaled_index_3 + 486149257] = 3;
  *((_OWORD *)state_address_2 + 1) = 0;
  dword_140404A6C[scaled_index_3 + 486149281] = 1048576000;
  *((_OWORD *)state_address_2 + 2) = 0;
  dword_140404A6C[scaled_index_3 + 486149282] = 1048576000;
  *((_OWORD *)state_address_2 + 3) = 0;
  *((_OWORD *)state_address_2 + 4) = 0;
  *((_OWORD *)state_address_2 + 5) = 0;
  *((_OWORD *)state_address_2 + 6) = 0;
  *((_OWORD *)state_address_2 + 7) = 0;
  *((_OWORD *)state_address_2 + 8) = 0;
  table_value_5 = dword_140404A6C[scaled_index_3 + 486149257];
  if ( a1 == 1 )
    table_value_5 = 0;
  combined_products = *(float *)&dword_140404A6C[60 * input_value + 73007028] - *(float *)&dword_140404A6C[record_word_offset + 73007028];
  combined_products_2 = *(float *)&dword_140404A6C[60 * input_value + 73007027] - *(float *)&dword_140404A6C[record_word_offset + 73007027];
  combined_products_3 = *(float *)&dword_140404A6C[60 * input_value + 73007026] - *(float *)&dword_140404A6C[record_word_offset + 73007026];
  dword_140404A6C[scaled_index_3 + 486149257] = table_value_5;
  dword_140404A6C[60 * input_value_2 + 73007042 + table_value] = element_index;
  ++dword_140404A6C[record_word_offset + 73007041];
  dword_140404A6C[60 * input_value + 73007042 + (int)dword_140404A6C[60 * input_value + 73007041]++] = element_index;
  *(float *)&dword_140404A6C[scaled_index_3 + 486149278] = fsqrt((float)((float)(combined_products_2 * combined_products_2) + (float)(combined_products_3 * combined_products_3)) + (float)(combined_products * combined_products));
  if ( (_DWORD)input_value_3 != -1 )
  {
    dword_140404A6C[61 * element_index + 486149291 + dword_140404A6C[scaled_index_3 + 486149290]++] = input_value_3;
    dword_140404A6C[5210 * input_value_3 + 129716963 + (int)dword_140404A6C[5210 * input_value_3 + 129716962]++] = element_index;
  }
  return element_index;
}

//----- (0000000140080070) ----------------------------------------------------
void            sub_140080070(int a1)
{
  unsigned int cached_physics_point_count;
  __int64 record_word_offset;
  signed int integer_difference;
  __int64 remaining_count;
  unsigned int *buffer_cursor;
  unsigned int integer_difference_2;
  unsigned int *state_address;
  unsigned int *record_byte_offset;
  unsigned int *state_address_2;
  __int128 loaded_word;
  int table_value;
  __int64 remaining_count_2;
  unsigned int *buffer_cursor_2;
  signed int iteration_count;
  __int64 scaled_index;
  unsigned int *buffer_cursor_3;
  int table_value_2;
  __int64 remaining_count_3;
  unsigned int *buffer_cursor_4;
  __int64 scaled_index_2;
  signed int iteration_count_2;
  unsigned int *state_address_3;
  __int64 element_index;
  unsigned int *state_address_4;

  if ( a1 >= 0 )
  {
    cached_physics_point_count = physics_point_count;
    if ( a1 < (int)physics_point_count )
    {
      record_word_offset = 60LL * a1;
      integer_difference = dword_140404A6C[record_word_offset + 73007041] - 1;
      remaining_count = integer_difference;
      if ( integer_difference >= 0 )
      {
        buffer_cursor = &dword_140404A6C[60 * a1 + 73007042 + integer_difference];
        do
        {
          sr_physics_remove_bond(*buffer_cursor);
          --remaining_count;
          --buffer_cursor;
        }
        while ( remaining_count >= 0 );
      }
      integer_difference_2 = cached_physics_point_count - 1;
      physics_point_count = cached_physics_point_count - 1;
      if ( a1 != cached_physics_point_count - 1 )
      {
        state_address = &dword_140404A6C[record_word_offset + 73007021];
        record_byte_offset = &dword_140404A6C[60 * integer_difference_2 + 73007021];
        *(_OWORD *)state_address = *(_OWORD *)record_byte_offset;
        *((_OWORD *)state_address + 1) = *((_OWORD *)record_byte_offset + 1);
        *((_OWORD *)state_address + 2) = *((_OWORD *)record_byte_offset + 2);
        *((_OWORD *)state_address + 3) = *((_OWORD *)record_byte_offset + 3);
        *((_OWORD *)state_address + 4) = *((_OWORD *)record_byte_offset + 4);
        *((_OWORD *)state_address + 5) = *((_OWORD *)record_byte_offset + 5);
        *((_OWORD *)state_address + 6) = *((_OWORD *)record_byte_offset + 6);
        state_address_2 = &dword_140404A6C[record_word_offset + 73007053];
        loaded_word = *((_OWORD *)record_byte_offset + 7);
        record_byte_offset += 32;
        *((_OWORD *)state_address_2 - 1) = loaded_word;
        *(_OWORD *)state_address_2 = *(_OWORD *)record_byte_offset;
        *((_OWORD *)state_address_2 + 1) = *((_OWORD *)record_byte_offset + 1);
        *((_OWORD *)state_address_2 + 2) = *((_OWORD *)record_byte_offset + 2);
        *((_OWORD *)state_address_2 + 3) = *((_OWORD *)record_byte_offset + 3);
        *((_OWORD *)state_address_2 + 4) = *((_OWORD *)record_byte_offset + 4);
        *((_OWORD *)state_address_2 + 5) = *((_OWORD *)record_byte_offset + 5);
        *((_OWORD *)state_address_2 + 6) = *((_OWORD *)record_byte_offset + 6);
        table_value = dword_140404A6C[record_word_offset + 73007041];
        if ( table_value > 0 )
        {
          remaining_count_2 = (unsigned int)table_value;
          buffer_cursor_2 = &dword_140404A6C[record_word_offset + 73007042];
          do
          {
            iteration_count = 0;
            scaled_index = 61LL * (int)*buffer_cursor_2;
            if ( (int)dword_140404A6C[scaled_index + 486149258] > 0 )
            {
              buffer_cursor_3 = &dword_140404A6C[scaled_index + 486149259];
              do
              {
                if ( *buffer_cursor_3 == integer_difference_2 )
                  *buffer_cursor_3 = a1;
                ++iteration_count;
                ++buffer_cursor_3;
              }
              while ( iteration_count < (int)dword_140404A6C[scaled_index + 486149258] );
            }
            ++buffer_cursor_2;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
        }
        table_value_2 = dword_140404A6C[record_word_offset + 73007074];
        if ( table_value_2 > 0 )
        {
          remaining_count_3 = (unsigned int)table_value_2;
          buffer_cursor_4 = &dword_140404A6C[record_word_offset + 73007075];
          do
          {
            scaled_index_2 = (int)*buffer_cursor_4;
            iteration_count_2 = 0;
            state_address_3 = &dword_140404A6C[5210 * scaled_index_2 + 129716768];
            if ( (int)*state_address_3 > 0 )
            {
              element_index = 5210 * scaled_index_2;
              do
              {
                if ( dword_140404A6C[element_index + 129716769] == integer_difference_2 )
                  dword_140404A6C[element_index + 129716769] = a1;
                ++iteration_count_2;
                ++element_index;
              }
              while ( iteration_count_2 < (int)*state_address_3 );
            }
            ++buffer_cursor_4;
            --remaining_count_3;
          }
          while ( remaining_count_3 );
        }
        state_address_4 = &g_18329E32C;
        do
        {
          if ( *(state_address_4 - 9) && *state_address_4 == integer_difference_2 )
            *state_address_4 = a1;
          if ( state_address_4[7157] && state_address_4[7166] == integer_difference_2 )
            state_address_4[7166] = a1;
          if ( state_address_4[14323] && state_address_4[14332] == integer_difference_2 )
            state_address_4[14332] = a1;
          if ( state_address_4[21489] )
          {
            if ( state_address_4[21498] == integer_difference_2 )
              state_address_4[21498] = a1;
          }
          state_address_4 += 28664;
        }
        while ( (__int64)state_address_4 < (__int64)&g_18399DB2C );
      }
    }
  }
}

//----- (00000001400A4B40) ----------------------------------------------------
__int64            sub_1400A4B40(__int64 a1, int a2, float *a3)
{
  signed int iteration_count;
  __int64 result;
  __int64 record_word_offset;
  unsigned int *buffer_cursor;
  float combined_products;
  float combined_products_2;
  __int64 scaled_index;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;

  iteration_count = 0;
  result = a2;
  record_word_offset = 5210LL * a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( (int)dword_140404A6C[record_word_offset + 129716768] > 0 )
  {
    buffer_cursor = &dword_140404A6C[record_word_offset + 129716769];
    combined_products = 0.0;
    combined_products_2 = 0.0;
    do
    {
      scaled_index = 60LL * (int)*buffer_cursor;
      combined_products_3 = *(float *)&dword_140404A6C[scaled_index + 73007026] - *a3;
      combined_products_4 = *(float *)&dword_140404A6C[scaled_index + 73007028] - a3[2];
      combined_products_5 = *(float *)&dword_140404A6C[scaled_index + 73007027] - a3[1];
      *(float *)a1 = (float)((float)((float)((float)((float)((float)(combined_products_4 * *(float *)&dword_1402F6178)
                                                           - (float)(combined_products_3 * *(float *)&dword_1402F6180))
                                                   * *(float *)&dword_140404A6C[scaled_index + 73007033])
                                           + (float)((float)((float)(combined_products_5 * *(float *)&dword_1402F6180)
                                                           - (float)(combined_products_4 * *(float *)&dword_1402F617C))
                                                   * *(float *)&dword_140404A6C[scaled_index + 73007032]))
                                   + (float)((float)((float)(combined_products_3 * *(float *)&dword_1402F617C)
                                                   - (float)(combined_products_5 * *(float *)&dword_1402F6178))
                                           * *(float *)&dword_140404A6C[scaled_index + 73007034]))
                           * 0.0078125)
                   + *(float *)a1;
      combined_products = combined_products
         + (float)((float)((float)((float)((float)((float)(combined_products_4 * *(float *)&dword_1402F6188)
                                                 - (float)(combined_products_3 * *(float *)&dword_1402F6190))
                                         * *(float *)&dword_140404A6C[60 * *buffer_cursor + 73007033])
                                 * 0.0078125)
                         + (float)((float)((float)((float)(combined_products_5 * *(float *)&dword_1402F6190)
                                                 - (float)(combined_products_4 * *(float *)&dword_1402F618C))
                                         * *(float *)&dword_140404A6C[60 * *buffer_cursor + 73007032])
                                 * 0.0078125))
                 + (float)((float)((float)((float)(combined_products_3 * *(float *)&dword_1402F618C)
                                         - (float)(combined_products_5 * *(float *)&dword_1402F6188))
                                 * *(float *)&dword_140404A6C[60 * *buffer_cursor + 73007034])
                         * 0.0078125));
      *(float *)(a1 + 4) = combined_products;
      result = (int)*buffer_cursor;
      combined_products_2 = combined_products_2
          + (float)((float)((float)((float)((float)((float)(combined_products_4 * *(float *)&dword_1402F6198)
                                                  - (float)(combined_products_3 * *(float *)&dword_1402F61A0))
                                          * *(float *)&dword_140404A6C[60 * result + 73007033])
                                  * 0.0078125)
                          + (float)((float)((float)((float)(combined_products_5 * *(float *)&dword_1402F61A0)
                                                  - (float)(combined_products_4 * *(float *)&dword_1402F619C))
                                          * *(float *)&dword_140404A6C[60 * result + 73007032])
                                  * 0.0078125))
                  + (float)((float)((float)((float)(combined_products_3 * *(float *)&dword_1402F619C)
                                          - (float)(combined_products_5 * *(float *)&dword_1402F6198))
                                  * *(float *)&dword_140404A6C[60 * result + 73007034])
                          * 0.0078125));
      ++iteration_count;
      *(float *)(a1 + 8) = combined_products_2;
      ++buffer_cursor;
    }
    while ( iteration_count < (int)dword_140404A6C[record_word_offset + 129716768] );
  }
  return result;
}

//----- (00000001400CAA90) ----------------------------------------------------
__int64            sub_1400CAA90(int a1, float *a2, float a3)
{
  int *record_byte_offset;
  unsigned int selection_flag;
  int iteration_count;
  __int64 item_record_offset;
  __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  __int64 scaled_index_2;
  float state_address;
  float state_address_2;
  float state_address_3;
  float weighted_sum_10;
  float state_address_4;
  float state_address_5;
  float scaled_value;
  float product_difference;
  float combined_products;
  float state_address_6;
  float weighted_sum_11;
  float saved_weighted_sum;
  __int64 scaled_index_3;
  float scaled_value_2;
  float state_address_7;
  float state_address_8;
  float weighted_sum_12;
  float component_sum;
  float scaled_value_3;
  float combined_products_2;
  float state_address_9;
  float state_address_10;
  float state_address_11;
  float state_address_12;
  float weighted_sum_13;
  float state_address_13;
  __int64 table_value;
  float component_sum_2;
  float scaled_value_4;
  float combined_products_3;
  float state_address_14;
  float state_address_15;
  float state_address_16;
  float state_address_17;
  float product_difference_2;
  float product_difference_3;
  float product_difference_4;
  float square_root;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CAA90[368];
#define float_word (*(__int64 (*))(void *)(sr_frame_1400CAA90 + 0)) /* [rsp+40h] */
#define scaled_ratio (*(float (*))(void *)(sr_frame_1400CAA90 + 8)) /* [rsp+48h] */
#define float_word_2 (*(unsigned int (*))(void *)(sr_frame_1400CAA90 + 16)) /* [rsp+50h] */
#define frame_word_at_20 (*(unsigned int (*))(void *)(sr_frame_1400CAA90 + 20)) /* [rsp+54h] */
#define frame_word_at_24 (*(unsigned int (*))(void *)(sr_frame_1400CAA90 + 24)) /* [rsp+58h] */
#define weighted_sum_14 (*(float (*))(void *)(sr_frame_1400CAA90 + 32)) /* [rsp+60h] */
#define state_address_18 (*(float (*))(void *)(sr_frame_1400CAA90 + 36)) /* [rsp+64h] */
#define weighted_sum_15 (*(float (*))(void *)(sr_frame_1400CAA90 + 40)) /* [rsp+68h] */
#define weighted_sum_16 (*(float (*))(void *)(sr_frame_1400CAA90 + 44)) /* [rsp+6Ch] */
#define weighted_sum_17 (*(float (*))(void *)(sr_frame_1400CAA90 + 48)) /* [rsp+70h] */
#define state_address_19 (*(float (*))(void *)(sr_frame_1400CAA90 + 52)) /* [rsp+74h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400CAA90 + 56)) /* [rsp+78h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400CAA90 + 64)) /* [rsp+80h] */
#define weighted_sum_18 (*(float (*))(void *)(sr_frame_1400CAA90 + 80)) /* [rsp+90h] */
#define weighted_sum_19 (*(float (*))(void *)(sr_frame_1400CAA90 + 84)) /* [rsp+94h] */
#define weighted_sum_20 (*(float (*))(void *)(sr_frame_1400CAA90 + 88)) /* [rsp+98h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400CAA90 + 96)) /* [rsp+A0h] */
#define frame_float_at_360 (*(float (*))(void *)(sr_frame_1400CAA90 + 360)) /* [rsp+1A8h] */

  record_byte_offset = dword_1402B3664;
  selection_flag = 0;
  iteration_count = 0;
  item_record_offset = 1760LL * a1;
  *(unsigned int *)&g_151A8489C = 1199570944;
  scaled_index = 1268LL * (int)dword_140404A6C[item_record_offset + 278845898];
  do
  {
    weighted_sum = *(float *)&dword_140404A6C[scaled_index + 278521350];
    weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index + 278521351];
    weighted_sum_3 = *(float *)&dword_140404A6C[item_record_offset + 278845934];
    weighted_sum_4 = *(float *)&dword_140404A6C[item_record_offset + 278845937];
    weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index + 278521352];
    weighted_sum_6 = *(float *)&dword_140404A6C[item_record_offset + 278845940];
    weighted_sum_7 = *(float *)&dword_140404A6C[item_record_offset + 278845938];
    weighted_sum_8 = *(float *)&dword_140404A6C[item_record_offset + 278845941];
    weighted_sum_9 = *(float *)&dword_140404A6C[item_record_offset + 278845942];
    scaled_index_2 = 3LL * *record_byte_offset;
    state_address = (float)((float)((float)(*(float *)&dword_1402B34F0[3 * *(record_byte_offset - 1)] - 0.5)
                        + *(float *)&dword_1402B34F0[3 * *(record_byte_offset - 1)])
                - 0.5)
        * weighted_sum;
    state_address_2 = (float)((float)((float)(*(float *)&dword_1402B34F4[3 * *(record_byte_offset - 1)] - 0.5)
                        + *(float *)&dword_1402B34F4[3 * *(record_byte_offset - 1)])
                - 0.5)
        * weighted_sum_2;
    state_address_3 = (float)((float)((float)(*(float *)&dword_1402B34F8[3 * *(record_byte_offset - 1)] - 0.5)
                        + *(float *)&dword_1402B34F8[3 * *(record_byte_offset - 1)])
                - 0.5)
        * weighted_sum_5;
    weighted_sum_14 = (float)((float)((float)(weighted_sum_3 * state_address) + *(float *)&dword_140404A6C[item_record_offset + 278845916]) + (float)(weighted_sum_4 * state_address_2))
        + (float)(weighted_sum_6 * state_address_3);
    float_buffer[0] = weighted_sum_14;
    weighted_sum_10 = *(float *)&dword_140404A6C[item_record_offset + 278845939] * state_address_2;
    state_address_18 = (float)((float)((float)(*(float *)&dword_140404A6C[item_record_offset + 278845935] * state_address)
                        + *(float *)&dword_140404A6C[item_record_offset + 278845917])
                + (float)(weighted_sum_7 * state_address_2))
        + (float)(weighted_sum_8 * state_address_3);
    float_buffer[1] = state_address_18;
    state_address_4 = (float)((float)(*(float *)&dword_140404A6C[item_record_offset + 278845936] * state_address) + *(float *)&dword_140404A6C[item_record_offset + 278845918])
        + weighted_sum_10;
    state_address_5 = (float)(*(float *)&dword_1402B34F0[scaled_index_2] - 0.5) + *(float *)&dword_1402B34F0[scaled_index_2];
    scaled_value = *(float *)&dword_1402B34F4[scaled_index_2];
    weighted_sum_15 = state_address_4 + (float)(weighted_sum_9 * state_address_3);
    float_buffer[2] = weighted_sum_15;
    product_difference = (float)(state_address_5 - 0.5) * weighted_sum;
    combined_products = (float)((float)((float)(scaled_value - 0.5) + scaled_value) - 0.5) * weighted_sum_2;
    state_address_6 = (float)((float)(*(float *)&dword_1402B34F8[scaled_index_2] - 0.5) + *(float *)&dword_1402B34F8[scaled_index_2]) - 0.5;
    weighted_sum_11 = *(float *)&dword_140404A6C[item_record_offset + 278845916];
    saved_weighted_sum = weighted_sum_3;
    scaled_index_3 = 3LL * record_byte_offset[1];
    scaled_value_2 = state_address_6 * weighted_sum_5;
    state_address_7 = (float)((float)(*(float *)&dword_140404A6C[item_record_offset + 278845935] * product_difference) + *(float *)&dword_140404A6C[item_record_offset + 278845917])
        + (float)(weighted_sum_7 * combined_products);
    state_address_8 = (float)(*(float *)&dword_140404A6C[item_record_offset + 278845936] * product_difference) + *(float *)&dword_140404A6C[item_record_offset + 278845918];
    weighted_sum_12 = *(float *)&dword_140404A6C[item_record_offset + 278845939] * combined_products;
    weighted_sum_18 = (float)((float)((float)(saved_weighted_sum * product_difference) + weighted_sum_11) + (float)(weighted_sum_4 * combined_products)) + (float)(weighted_sum_6 * scaled_value_2);
    component_sum = state_address_8 + weighted_sum_12;
    scaled_value_3 = *(float *)&dword_1402B34F0[scaled_index_3];
    weighted_sum_19 = state_address_7 + (float)(weighted_sum_8 * scaled_value_2);
    weighted_sum_20 = component_sum + (float)(weighted_sum_9 * scaled_value_2);
    combined_products_2 = (float)((float)((float)(scaled_value_3 - 0.5) + scaled_value_3) - 0.5) * weighted_sum;
    state_address_9 = (float)((float)((float)(*(float *)&dword_1402B34F4[scaled_index_3] - 0.5) + *(float *)&dword_1402B34F4[scaled_index_3]) - 0.5) * weighted_sum_2;
    state_address_10 = (float)(*(float *)&dword_140404A6C[item_record_offset + 278845934] * combined_products_2) + weighted_sum_11;
    state_address_11 = (float)((float)((float)(*(float *)&dword_1402B34F8[scaled_index_3] - 0.5) + *(float *)&dword_1402B34F8[scaled_index_3]) - 0.5) * weighted_sum_5;
    state_address_12 = (float)(*(float *)&dword_140404A6C[item_record_offset + 278845935] * combined_products_2) + *(float *)&dword_140404A6C[item_record_offset + 278845917];
    weighted_sum_17 = (float)(state_address_10 + (float)(weighted_sum_4 * state_address_9)) + (float)(state_address_11 * weighted_sum_6);
    weighted_sum_13 = *(float *)&dword_140404A6C[item_record_offset + 278845939] * state_address_9;
    state_address_13 = (float)(*(float *)&dword_140404A6C[item_record_offset + 278845936] * combined_products_2) + *(float *)&dword_140404A6C[item_record_offset + 278845918];
    state_address_19 = (float)(state_address_12 + (float)(*(float *)&dword_140404A6C[item_record_offset + 278845938] * state_address_9)) + (float)(state_address_11 * weighted_sum_8);
    table_value = record_byte_offset[2];
    component_sum_2 = state_address_13 + weighted_sum_13;
    scaled_value_4 = *(float *)&dword_1402B34F0[3 * table_value];
    weighted_sum_16 = component_sum_2 + (float)(state_address_11 * weighted_sum_9);
    unused_written_slot = weighted_sum_16;
    combined_products_3 = (float)((float)((float)(scaled_value_4 - 0.5) + scaled_value_4) - 0.5) * weighted_sum;
    state_address_14 = (float)(combined_products_3 * *(float *)&dword_140404A6C[item_record_offset + 278845934]) + *(float *)&dword_140404A6C[item_record_offset + 278845916];
    state_address_15 = (float)((float)(combined_products_3 * *(float *)&dword_140404A6C[item_record_offset + 278845935]) + *(float *)&dword_140404A6C[item_record_offset + 278845917])
        + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * table_value] - 0.5)
                                        + *(float *)&dword_1402B34F4[3 * table_value])
                                - 0.5)
                        * weighted_sum_2)
                * *(float *)&dword_140404A6C[item_record_offset + 278845938]);
    state_address_16 = (float)((float)((float)(*(float *)&dword_1402B34F8[3 * table_value] - 0.5) + *(float *)&dword_1402B34F8[3 * table_value]) - 0.5)
        * weighted_sum_5;
    state_address_17 = (float)((float)((float)(combined_products_3 * *(float *)&dword_140404A6C[item_record_offset + 278845936])
                        + *(float *)&dword_140404A6C[item_record_offset + 278845918])
                + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * table_value] - 0.5)
                                                + *(float *)&dword_1402B34F4[3 * table_value])
                                        - 0.5)
                                * weighted_sum_2)
                        * *(float *)&dword_140404A6C[item_record_offset + 278845939]))
        + (float)(state_address_16 * weighted_sum_9);
    float_buffer_2[0] = (float)(state_address_14
                   + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * table_value] - 0.5)
                                                   + *(float *)&dword_1402B34F4[3 * table_value])
                                           - 0.5)
                                   * weighted_sum_2)
                           * *(float *)&dword_140404A6C[item_record_offset + 278845937]))
           + (float)(state_address_16 * weighted_sum_6);
    float_buffer_2[2] = state_address_17;
    float_buffer_2[1] = state_address_15 + (float)(state_address_16 * weighted_sum_8);
    product_difference_2 = (float)((float)(state_address_19 - state_address_18) * (float)(weighted_sum_20 - weighted_sum_15)) - (float)((float)(weighted_sum_16 - weighted_sum_15) * (float)(weighted_sum_19 - state_address_18));
    product_difference_3 = (float)((float)(weighted_sum_16 - weighted_sum_15) * (float)(weighted_sum_18 - weighted_sum_14)) - (float)((float)(weighted_sum_17 - weighted_sum_14) * (float)(weighted_sum_20 - weighted_sum_15));
    product_difference_4 = (float)((float)(weighted_sum_17 - weighted_sum_14) * (float)(weighted_sum_19 - state_address_18)) - (float)((float)(state_address_19 - state_address_18) * (float)(weighted_sum_18 - weighted_sum_14));
    square_root = fsqrt((float)((float)(product_difference_3 * product_difference_3) + (float)(product_difference_2 * product_difference_2)) + (float)(product_difference_4 * product_difference_4));
    if ( square_root == 0.0 )
    {
      float_word = 0;
      scaled_ratio = 0.0;
    }
    else
    {
      *(float *)&float_word = (float)(1.0 / square_root) * product_difference_2;
      *((float *)&float_word + 1) = (float)(1.0 / square_root) * product_difference_3;
      scaled_ratio = (float)(1.0 / square_root) * product_difference_4;
    }
    if ( sub_140158760((float *)&float_word_2, (float *)&float_word, &frame_float_at_360, a2, a3, float_buffer, &weighted_sum_18, &weighted_sum_17)
      && g_151A8489C > frame_float_at_360 )
    {
      g_151A84880 = float_word_2;
      *(unsigned int *)&ragdoll_unknown_height = frame_word_at_20;
      g_151A84888 = frame_word_at_24;
      *(_QWORD *)&g_151A8488C = float_word;
      g_151A84894 = scaled_ratio;
      g_151A8489C = frame_float_at_360;
      g_151A848B0 = iteration_count;
    }
    if ( sub_140158760((float *)&float_word_2, (float *)&float_word, &frame_float_at_360, a2, a3, float_buffer, &weighted_sum_17, float_buffer_2)
      && g_151A8489C > frame_float_at_360 )
    {
      g_151A84880 = float_word_2;
      *(unsigned int *)&ragdoll_unknown_height = frame_word_at_20;
      g_151A84888 = frame_word_at_24;
      *(_QWORD *)&g_151A8488C = float_word;
      g_151A84894 = scaled_ratio;
      g_151A8489C = frame_float_at_360;
      g_151A848B0 = iteration_count;
    }
    ++iteration_count;
    record_byte_offset += 4;
  }
  while ( iteration_count < 6 );
  LOBYTE(selection_flag) = g_151A8489C < 65536.0;
  return selection_flag;
}
#undef float_word
#undef scaled_ratio
#undef float_word_2
#undef frame_word_at_20
#undef frame_word_at_24
#undef weighted_sum_14
#undef state_address_18
#undef weighted_sum_15
#undef weighted_sum_16
#undef weighted_sum_17
#undef state_address_19
#undef unused_written_slot
#undef float_buffer
#undef weighted_sum_18
#undef weighted_sum_19
#undef weighted_sum_20
#undef float_buffer_2
#undef frame_float_at_360

//----- (00000001400D8B70) ----------------------------------------------------
__int64            sub_1400D8B70(float *a1, float *a2, float *a3, int a4, float *a5, float *a6)
{
  float *to;
  float *from;
  __int64 record_word_offset;
  float scaled_value;
  __int64 table_value;
  float weighted_sum;
  __int64 scaled_index;
  float weighted_sum_2;
  float source_component_y;
  float combined_products;
  float source_component_z;
  float combined_products_2;
  float component_sum;
  float weighted_sum_3;
  float weighted_sum_4;
  signed int iteration_count;
  float state_address;
  __int64 scaled_index_2;
  int *state_address_2;
  float weighted_sum_5;
  float weighted_sum_6;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  __int64 table_value_2;
  float weighted_sum_7;
  float state_address_3;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float state_address_4;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float state_address_5;
  float weighted_sum_15;
  float weighted_sum_16;
  float state_address_6;
  float state_address_7;
  float weighted_sum_17;
  float weighted_sum_18;
  float state_address_8;
  float state_address_9;
  float component_delta;
  float component_delta_2;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  bool comparison_result;
  float weighted_sum_19;
  float weighted_sum_20;
  float weighted_sum_21;
  float weighted_sum_22;
  float weighted_sum_23;
  float component_sum_2;
  float component_sum_3;
  float component_sum_4;
  __int64 table_value_3;
  float weighted_sum_24;
  float weighted_sum_25;
  float weighted_sum_26;
  float state_address_10;
  float state_address_11;
  float state_address_12;
  float saved_t;
  int comparison_operand;
  float component_delta_3;
  float component_delta_4;
  float square_root_2;
  float scaled_ratio_4;
  float component_delta_5;
  float square_root_3;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float product_difference_4;
  float scaled_value_2;
  float saved_t_2;
  int comparison_operand_2;
  float component_delta_6;
  float component_delta_7;
  float component_delta_8;
  float component_delta_9;
  float component_delta_10;
  float product_difference_5;
  float component_delta_11;
  float square_root_4;
  float scaled_ratio_7;
  float scaled_ratio_8;
  float scaled_ratio_9;
  float square_root_5;
  float scaled_ratio_10;
  float scaled_ratio_11;
  float scaled_ratio_12;
  unsigned int table_value_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D8B70[400];
#define component_delta_12 (*(float (*))(void *)(sr_frame_1400D8B70 + 0)) /* [rsp+40h] */
#define scaled_ratio_13 (*(float (*))(void *)(sr_frame_1400D8B70 + 0)) /* [rsp+40h] */
#define saved_state_address (*(float (*))(void *)(sr_frame_1400D8B70 + 4)) /* [rsp+44h] */
#define saved_square_root (*(float (*))(void *)(sr_frame_1400D8B70 + 4)) /* [rsp+44h] */
#define weighted_sum_27 (*(float (*))(void *)(sr_frame_1400D8B70 + 8)) /* [rsp+48h] */
#define saved_scaled_ratio (*(float (*))(void *)(sr_frame_1400D8B70 + 8)) /* [rsp+48h] */
#define saved_square_root_2 (*(float (*))(void *)(sr_frame_1400D8B70 + 12)) /* [rsp+4Ch] */
#define component_delta_13 (*(float (*))(void *)(sr_frame_1400D8B70 + 12)) /* [rsp+4Ch] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1400D8B70 + 16)) /* [rsp+50h] */
#define product_difference_6 (*(float (*))(void *)(sr_frame_1400D8B70 + 16)) /* [rsp+50h] */
#define saved_state_address_2 (*(float (*))(void *)(sr_frame_1400D8B70 + 20)) /* [rsp+54h] */
#define component_delta_14 (*(float (*))(void *)(sr_frame_1400D8B70 + 20)) /* [rsp+54h] */
#define saved_state_address_3 (*(float (*))(void *)(sr_frame_1400D8B70 + 24)) /* [rsp+58h] */
#define product_difference_7 (*(float (*))(void *)(sr_frame_1400D8B70 + 24)) /* [rsp+58h] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_1400D8B70 + 28)) /* [rsp+5Ch] */
#define component_delta_15 (*(float (*))(void *)(sr_frame_1400D8B70 + 28)) /* [rsp+5Ch] */
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_1400D8B70 + 32)) /* [rsp+60h] */
#define component_sum_5 (*(float (*))(void *)(sr_frame_1400D8B70 + 32)) /* [rsp+60h] */
#define state_address_13 (*(float (*))(void *)(sr_frame_1400D8B70 + 36)) /* [rsp+64h] */
#define saved_state_address_4 (*(float (*))(void *)(sr_frame_1400D8B70 + 40)) /* [rsp+68h] */
#define component_delta_16 (*(float (*))(void *)(sr_frame_1400D8B70 + 44)) /* [rsp+6Ch] */
#define normal (*(float (*))(void *)(sr_frame_1400D8B70 + 48)) /* [rsp+70h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400D8B70 + 52)) /* [rsp+74h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400D8B70 + 56)) /* [rsp+78h] */
#define point (*(int (*))(void *)(sr_frame_1400D8B70 + 64)) /* [rsp+80h] */
#define frame_word_at_68 (*(int (*))(void *)(sr_frame_1400D8B70 + 68)) /* [rsp+84h] */
#define frame_word_at_72 (*(int (*))(void *)(sr_frame_1400D8B70 + 72)) /* [rsp+88h] */
#define saved_state_address_5 (*(float (*))(void *)(sr_frame_1400D8B70 + 80)) /* [rsp+90h] */
#define saved_state_address_6 (*(float (*))(void *)(sr_frame_1400D8B70 + 84)) /* [rsp+94h] */
#define saved_state_address_7 (*(float (*))(void *)(sr_frame_1400D8B70 + 88)) /* [rsp+98h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400D8B70 + 96)) /* [rsp+A0h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400D8B70 + 112)) /* [rsp+B0h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_1400D8B70 + 128)) /* [rsp+C0h] */
#define scaled_index_3 (*(unsigned __int64 (*))(void *)(sr_frame_1400D8B70 + 144)) /* [rsp+D0h] */
#define scaled_index_4 (*(__int64 (*))(void *)(sr_frame_1400D8B70 + 152)) /* [rsp+D8h] */
#define t (*(float (*))(void *)(sr_frame_1400D8B70 + 392)) /* [rsp+1C8h] */

  to = a6;
  from = a5;
  record_word_offset = 21LL * a4;
  scaled_value = *a5;
  table_value = (int)dword_140404A6C[record_word_offset + 433433158];
  weighted_sum = *(float *)&dword_140404A6C[record_word_offset + 433433159];
  scaled_index = 2310 * table_value;
  scaled_index_3 = 9240 * table_value;
  weighted_sum_2 = *(float *)&dword_140404A6C[2310 * table_value + 432531269];
  if ( scaled_value < (float)(weighted_sum - weighted_sum_2) && (float)(weighted_sum - weighted_sum_2) > *a6 )
    return 0;
  source_component_y = a5[1];
  combined_products = *(float *)&dword_140404A6C[record_word_offset + 433433160] - weighted_sum_2;
  if ( source_component_y < combined_products && combined_products > a6[1] )
    return 0;
  source_component_z = a5[2];
  combined_products_2 = *(float *)&dword_140404A6C[record_word_offset + 433433161] - weighted_sum_2;
  if ( source_component_z < combined_products_2 && combined_products_2 > a6[2] )
    return 0;
  component_sum = weighted_sum + weighted_sum_2;
  if ( scaled_value > component_sum && component_sum < *a6 )
    return 0;
  weighted_sum_3 = *(float *)&dword_140404A6C[record_word_offset + 433433160] + weighted_sum_2;
  if ( source_component_y > weighted_sum_3 && weighted_sum_3 < a6[1] )
    return 0;
  weighted_sum_4 = *(float *)&dword_140404A6C[record_word_offset + 433433161] + weighted_sum_2;
  if ( source_component_z > weighted_sum_4 && weighted_sum_4 < a6[2] )
    return 0;
  iteration_count = 0;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[scaled_index + 432532039] <= 0 )
    return 0;
  state_address = saved_state_address_7;
  scaled_index_2 = 770 * table_value;
  saved_state_address_4 = saved_state_address_6;
  state_address_13 = saved_state_address_5;
  state_address_2 = (int *)&dword_140404A6C[scaled_index + 432532042];
  scaled_index_4 = 770 * table_value;
  do
  {
    weighted_sum_5 = *(float *)&dword_140404A6C[record_word_offset + 433433168];
    weighted_sum_6 = *(float *)&dword_140404A6C[record_word_offset + 433433165];
    combined_products_3 = *(float *)&dword_140404A6C[3 * scaled_index_2 + 432531271 + 3 * *(state_address_2 - 1)];
    combined_products_4 = *(float *)&dword_140404A6C[3 * scaled_index_2 + 432531272 + 3 * *(state_address_2 - 1)];
    combined_products_5 = *(float *)&dword_140404A6C[3 * scaled_index_2 + 432531273 + 3 * *(state_address_2 - 1)];
    table_value_2 = scaled_index_2 + state_address_2[1];
    weighted_sum_7 = (float)((float)(weighted_sum_5 * combined_products_4) + (float)(weighted_sum_6 * combined_products_3)) + (float)(*(float *)&dword_140404A6C[record_word_offset + 433433171] * combined_products_5);
    state_address_3 = (float)(*(float *)&dword_140404A6C[record_word_offset + 433433169] * combined_products_4)
        + (float)(*(float *)&dword_140404A6C[record_word_offset + 433433166] * combined_products_3);
    weighted_sum_8 = *(float *)&dword_140404A6C[record_word_offset + 433433167] * combined_products_3;
    weighted_sum_9 = *(float *)&dword_140404A6C[3 * scaled_index_2 + 432531273 + 3 * *state_address_2];
    weighted_sum_10 = state_address_3 + (float)(*(float *)&dword_140404A6C[record_word_offset + 433433172] * combined_products_5);
    state_address_4 = (float)(*(float *)&dword_140404A6C[record_word_offset + 433433170] * combined_products_4) + weighted_sum_8;
    weighted_sum_11 = *(float *)&dword_140404A6C[3 * scaled_index_2 + 432531272 + 3 * *state_address_2];
    weighted_sum_12 = weighted_sum_11 * *(float *)&dword_140404A6C[record_word_offset + 433433170];
    weighted_sum_13 = state_address_4 + (float)(*(float *)&dword_140404A6C[record_word_offset + 433433173] * combined_products_5);
    weighted_sum_14 = *(float *)&dword_140404A6C[3 * table_value_2 + 432531272];
    state_address_5 = (float)(*(float *)&dword_140404A6C[3 * scaled_index_2 + 432531271 + 3 * *state_address_2] * weighted_sum_6) + (float)(weighted_sum_11 * weighted_sum_5);
    weighted_sum_15 = *(float *)&dword_140404A6C[3 * scaled_index_2 + 432531271 + 3 * *state_address_2];
    saved_weighted_sum_3 = weighted_sum_10;
    saved_weighted_sum_2 = weighted_sum_13;
    weighted_sum_16 = *(float *)&dword_140404A6C[3 * table_value_2 + 432531271];
    state_address_6 = (float)((float)(*(float *)&dword_140404A6C[3 * scaled_index_2 + 432531272 + 3 * *state_address_2]
                        * *(float *)&dword_140404A6C[record_word_offset + 433433169])
                + (float)(weighted_sum_15 * *(float *)&dword_140404A6C[record_word_offset + 433433166]))
        + (float)(weighted_sum_9 * *(float *)&dword_140404A6C[record_word_offset + 433433172]);
    state_address_7 = (float)(weighted_sum_12 + (float)(weighted_sum_15 * *(float *)&dword_140404A6C[record_word_offset + 433433167]))
        + (float)(weighted_sum_9 * *(float *)&dword_140404A6C[record_word_offset + 433433173]);
    weighted_sum_27 = state_address_5 + (float)(weighted_sum_9 * *(float *)&dword_140404A6C[record_word_offset + 433433171]);
    weighted_sum_17 = *(float *)&dword_140404A6C[3 * table_value_2 + 432531273];
    saved_state_address_3 = state_address_6;
    saved_state_address_2 = state_address_7;
    weighted_sum_18 = (float)((float)(weighted_sum_16 * weighted_sum_6) + (float)(weighted_sum_14 * weighted_sum_5)) + (float)(weighted_sum_17 * *(float *)&dword_140404A6C[record_word_offset + 433433171]);
    saved_weighted_sum = weighted_sum_18;
    state_address_8 = (float)((float)(weighted_sum_14 * *(float *)&dword_140404A6C[record_word_offset + 433433169])
                + (float)(weighted_sum_16 * *(float *)&dword_140404A6C[record_word_offset + 433433166]))
        + (float)(weighted_sum_17 * *(float *)&dword_140404A6C[record_word_offset + 433433172]);
    state_address_9 = (float)((float)(weighted_sum_14 * *(float *)&dword_140404A6C[record_word_offset + 433433170])
                + (float)(weighted_sum_16 * *(float *)&dword_140404A6C[record_word_offset + 433433167]))
        + (float)(weighted_sum_17 * *(float *)&dword_140404A6C[record_word_offset + 433433173]);
    component_delta = state_address_6 - weighted_sum_10;
    component_delta_2 = state_address_8 - weighted_sum_10;
    saved_state_address = state_address_9;
    product_difference = (float)((float)(state_address_8 - weighted_sum_10) * (float)(state_address_7 - weighted_sum_13)) - (float)((float)(state_address_9 - weighted_sum_13) * (float)(state_address_6 - weighted_sum_10));
    product_difference_2 = (float)((float)(state_address_9 - weighted_sum_13) * (float)(weighted_sum_27 - weighted_sum_7)) - (float)((float)(weighted_sum_18 - weighted_sum_7) * (float)(state_address_7 - weighted_sum_13));
    product_difference_3 = (float)((float)(weighted_sum_18 - weighted_sum_7) * component_delta) - (float)(component_delta_2 * (float)(weighted_sum_27 - weighted_sum_7));
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      normal = 0.0;
      scaled_ratio = 0.0;
      unused_written_slot = 0.0;
      scaled_ratio_2 = 0.0;
      unused_written_slot_2 = 0.0;
      scaled_ratio_3 = 0.0;
    }
    else
    {
      scaled_ratio = (float)(1.0 / square_root) * product_difference;
      scaled_ratio_2 = (float)(1.0 / square_root) * product_difference_2;
      scaled_ratio_3 = (float)(1.0 / square_root) * product_difference_3;
      normal = scaled_ratio;
      unused_written_slot = scaled_ratio_2;
      unused_written_slot_2 = scaled_ratio_3;
    }
    comparison_result = *(state_address_2 - 2) == 4;
    weighted_sum_19 = *(float *)&dword_140404A6C[record_word_offset + 433433161];
    weighted_sum_20 = *(float *)&dword_140404A6C[record_word_offset + 433433159];
    weighted_sum_21 = *(float *)&dword_140404A6C[record_word_offset + 433433160] + saved_weighted_sum_3;
    weighted_sum_22 = *(float *)&dword_140404A6C[record_word_offset + 433433160] + saved_state_address_3;
    weighted_sum_23 = *(float *)&dword_140404A6C[record_word_offset + 433433160] + state_address_8;
    component_sum_5 = weighted_sum_19 + saved_weighted_sum_2;
    component_sum_2 = weighted_sum_20 + weighted_sum_7;
    float_buffer_2[2] = weighted_sum_19 + saved_weighted_sum_2;
    component_sum_3 = weighted_sum_20 + weighted_sum_27;
    float_buffer_2[1] = weighted_sum_21;
    float_buffer_2[0] = weighted_sum_20 + weighted_sum_7;
    component_sum_4 = weighted_sum_19 + saved_state_address_2;
    float_buffer_3[0] = weighted_sum_20 + weighted_sum_27;
    float_buffer_3[1] = weighted_sum_22;
    float_buffer[0] = weighted_sum_20 + saved_weighted_sum;
    float_buffer_3[2] = weighted_sum_19 + saved_state_address_2;
    float_buffer[1] = weighted_sum_23;
    float_buffer[2] = weighted_sum_19 + saved_state_address;
    if ( comparison_result )
    {
      table_value_3 = scaled_index_2 + state_address_2[2];
      weighted_sum_24 = *(float *)&dword_140404A6C[3 * table_value_3 + 432531273];
      weighted_sum_25 = *(float *)&dword_140404A6C[3 * table_value_3 + 432531271] * *(float *)&dword_140404A6C[record_word_offset + 433433166];
      weighted_sum_26 = *(float *)&dword_140404A6C[3 * table_value_3 + 432531271] * *(float *)&dword_140404A6C[record_word_offset + 433433167];
      state_address_10 = (float)(*(float *)&dword_140404A6C[3 * table_value_3 + 432531272] * *(float *)&dword_140404A6C[record_word_offset + 433433169])
          + *(float *)&dword_140404A6C[record_word_offset + 433433160];
      state_address_13 = (float)((float)(*(float *)&dword_140404A6C[3 * table_value_3 + 432531271]
                           * *(float *)&dword_140404A6C[record_word_offset + 433433165])
                   + (float)(*(float *)&dword_140404A6C[3 * table_value_3 + 432531272]
                           * *(float *)&dword_140404A6C[record_word_offset + 433433168]))
           + (float)((float)(weighted_sum_24 * *(float *)&dword_140404A6C[record_word_offset + 433433171]) + weighted_sum_20);
      state_address_11 = (float)(*(float *)&dword_140404A6C[3 * table_value_3 + 432531272] * *(float *)&dword_140404A6C[record_word_offset + 433433170])
          + *(float *)&dword_140404A6C[record_word_offset + 433433161];
      saved_state_address_5 = state_address_13;
      state_address_12 = (float)((float)(weighted_sum_24 * *(float *)&dword_140404A6C[record_word_offset + 433433172]) + weighted_sum_25) + state_address_10;
      state_address = (float)((float)(weighted_sum_24 * *(float *)&dword_140404A6C[record_word_offset + 433433173]) + weighted_sum_26) + state_address_11;
      saved_state_address_4 = state_address_12;
      saved_state_address_6 = state_address_12;
      saved_state_address_7 = state_address;
    }
    if ( sr_collision_line_triangle((float *)&point, &normal, &t, from, to, float_buffer_2, float_buffer_3, float_buffer) )
    {
      saved_t = t;
      if ( t < *a3 )
      {
        comparison_operand = frame_word_at_68;
        *(_DWORD *)a1 = point;
        *((_DWORD *)a1 + 2) = frame_word_at_72;
        *((_DWORD *)a1 + 1) = comparison_operand;
        *a2 = scaled_ratio;
        a2[1] = scaled_ratio_2;
        a2[2] = scaled_ratio_3;
        *a3 = saved_t;
        if ( state_address_2[3] <= 0 )
        {
          g_151A8490C = -1;
        }
        else
        {
          component_delta_3 = state_address_13 - component_sum_2;
          component_delta_12 = weighted_sum_22 - weighted_sum_21;
          product_difference_7 = *a1 - component_sum_2;
          component_delta_14 = a1[1] - weighted_sum_21;
          component_delta_15 = a1[2] - component_sum_5;
          component_delta_4 = component_sum_4 - component_sum_5;
          square_root_2 = fsqrt((float)((float)(component_delta_12 * component_delta_12) + (float)((float)(component_sum_3 - component_sum_2) * (float)(component_sum_3 - component_sum_2))) + (float)(component_delta_4 * component_delta_4));
          saved_square_root = square_root_2;
          if ( square_root_2 == 0.0 )
          {
            product_difference_6 = 0.0;
            scaled_ratio_4 = 0.0;
            scaled_ratio_13 = 0.0;
          }
          else
          {
            product_difference_6 = (float)(1.0 / square_root_2) * (float)(component_sum_3 - component_sum_2);
            scaled_ratio_4 = (float)(1.0 / square_root_2) * component_delta_4;
            scaled_ratio_13 = (float)(1.0 / square_root_2) * component_delta_12;
          }
          component_delta_5 = state_address - component_sum_5;
          square_root_3 = fsqrt((float)((float)((float)(saved_state_address_4 - weighted_sum_21) * (float)(saved_state_address_4 - weighted_sum_21)) + (float)(component_delta_3 * component_delta_3)) + (float)(component_delta_5 * component_delta_5));
          saved_square_root_2 = square_root_3;
          if ( square_root_3 == 0.0 )
          {
            saved_scaled_ratio = 0.0;
            product_difference_4 = 0.0;
            scaled_value_2 = 0.0;
          }
          else
          {
            scaled_ratio_5 = 1.0 / square_root_3;
            scaled_ratio_6 = (float)(1.0 / square_root_3) * component_delta_3;
            product_difference_4 = scaled_ratio_5 * (float)(saved_state_address_4 - weighted_sum_21);
            saved_scaled_ratio = scaled_ratio_6;
            scaled_value_2 = scaled_ratio_5 * component_delta_5;
          }
          g_151A8490C = (int)(float)((float)((float)((float)((float)(component_delta_14 * scaled_ratio_13) + (float)(product_difference_7 * product_difference_6))
                                                                 + (float)(component_delta_15 * scaled_ratio_4))
                                                         * 8.0)
                                                 / saved_square_root);
          g_151A84910 = (int)(float)((float)((float)((float)((float)(product_difference_4 * component_delta_14) + (float)(product_difference_7 * saved_scaled_ratio))
                                                                 + (float)(scaled_value_2 * component_delta_15))
                                                         * 4.0)
                                                 / saved_square_root_2);
        }
      }
    }
    if ( *(state_address_2 - 2) == 4 && sr_collision_line_triangle((float *)&point, &normal, &t, a5, to, float_buffer_2, float_buffer, &saved_state_address_5) )
    {
      saved_t_2 = t;
      if ( t < *a3 )
      {
        comparison_operand_2 = frame_word_at_68;
        *(_DWORD *)a1 = point;
        *((_DWORD *)a1 + 2) = frame_word_at_72;
        *((_DWORD *)a1 + 1) = comparison_operand_2;
        *a2 = scaled_ratio;
        a2[1] = scaled_ratio_2;
        a2[2] = scaled_ratio_3;
        *a3 = saved_t_2;
        if ( state_address_2[3] <= 0 )
        {
          g_151A8490C = -1;
        }
        else
        {
          component_delta_6 = component_sum_3 - component_sum_2;
          component_delta_7 = component_sum_4 - component_sum_5;
          component_delta_8 = weighted_sum_22 - weighted_sum_21;
          component_delta_9 = state_address_13 - component_sum_2;
          component_delta_10 = saved_state_address_4 - weighted_sum_21;
          product_difference_5 = *a1 - component_sum_2;
          component_delta_16 = a1[1] - weighted_sum_21;
          component_delta_11 = state_address - component_sum_5;
          component_delta_13 = a1[2] - component_sum_5;
          square_root_4 = fsqrt((float)((float)(component_delta_8 * component_delta_8) + (float)(component_delta_6 * component_delta_6)) + (float)(component_delta_7 * component_delta_7));
          if ( square_root_4 == 0.0 )
          {
            scaled_ratio_7 = 0.0;
            scaled_ratio_8 = 0.0;
            scaled_ratio_9 = 0.0;
          }
          else
          {
            scaled_ratio_7 = (float)(1.0 / square_root_4) * component_delta_6;
            scaled_ratio_8 = (float)(1.0 / square_root_4) * component_delta_8;
            scaled_ratio_9 = (float)(1.0 / square_root_4) * component_delta_7;
          }
          square_root_5 = fsqrt((float)((float)(component_delta_10 * component_delta_10) + (float)(component_delta_9 * component_delta_9)) + (float)(component_delta_11 * component_delta_11));
          if ( square_root_5 == 0.0 )
          {
            scaled_ratio_10 = 0.0;
            scaled_ratio_11 = 0.0;
            scaled_ratio_12 = 0.0;
          }
          else
          {
            scaled_ratio_10 = (float)(1.0 / square_root_5) * component_delta_9;
            scaled_ratio_11 = (float)(1.0 / square_root_5) * component_delta_10;
            scaled_ratio_12 = (float)(1.0 / square_root_5) * component_delta_11;
          }
          g_151A8490C = (int)(float)((float)((float)((float)((float)(product_difference_5 * scaled_ratio_7) + (float)(component_delta_16 * scaled_ratio_8))
                                                                 + (float)(component_delta_13 * scaled_ratio_9))
                                                         * 8.0)
                                                 / square_root_4);
          g_151A84910 = (int)(float)((float)((float)((float)((float)(scaled_ratio_11 * component_delta_16) + (float)(product_difference_5 * scaled_ratio_10))
                                                                 + (float)(scaled_ratio_12 * component_delta_13))
                                                         * 4.0)
                                                 / square_root_5);
        }
      }
    }
    from = a5;
    ++iteration_count;
    scaled_index_2 = scaled_index_4;
    state_address_2 += 6;
  }
  while ( iteration_count < (int)dword_140404A6C[scaled_index_3 / 4 + 432532039] );
  if ( *a3 >= 1.0 )
    return 0;
  table_value_4 = dword_140404A6C[record_word_offset + 433433163];
  *(unsigned int *)&g_151A848A0 = dword_140404A6C[record_word_offset + 433433162];
  g_151A848A8 = dword_140404A6C[record_word_offset + 433433164];
  *(unsigned int *)&g_151A848A4 = table_value_4;
  return 1;
}
#undef component_delta_12
#undef scaled_ratio_13
#undef saved_state_address
#undef saved_square_root
#undef weighted_sum_27
#undef saved_scaled_ratio
#undef saved_square_root_2
#undef component_delta_13
#undef saved_weighted_sum
#undef product_difference_6
#undef saved_state_address_2
#undef component_delta_14
#undef saved_state_address_3
#undef product_difference_7
#undef saved_weighted_sum_2
#undef component_delta_15
#undef saved_weighted_sum_3
#undef component_sum_5
#undef state_address_13
#undef saved_state_address_4
#undef component_delta_16
#undef normal
#undef unused_written_slot
#undef unused_written_slot_2
#undef point
#undef frame_word_at_68
#undef frame_word_at_72
#undef saved_state_address_5
#undef saved_state_address_6
#undef saved_state_address_7
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef scaled_index_3
#undef scaled_index_4
#undef t

//----- (00000001400D97A0) ----------------------------------------------------
__int64            sub_1400D97A0(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  float *from;
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  __int64 record_word_offset;
  float weighted_sum;
  float component_delta;
  float source_component_y;
  float component_delta_2;
  float source_component_z;
  float component_delta_3;
  float component_sum;
  float component_sum_2;
  float component_sum_3;
  signed int iteration_count;
  __int64 record_word_offset_2;
  int *state_address;
  float scaled_value_4;
  float source_float_6;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float source_float_4;
  float source_float_5;
  float source_component_w;
  __int64 scaled_index;
  float scaled_value_5;
  __int64 table_value;
  float weighted_sum_2;
  float scaled_value_6;
  float weighted_sum_3;
  float scaled_value_7;
  float weighted_sum_4;
  float scaled_value_8;
  float component_sum_4;
  float scaled_value_9;
  float weighted_sum_5;
  float component_sum_5;
  float scaled_value_10;
  float weighted_sum_6;
  float component_sum_6;
  float weighted_sum_7;
  float scaled_value_11;
  float weighted_sum_8;
  float weighted_sum_9;
  float scaled_value_12;
  float weighted_sum_10;
  float weighted_sum_11;
  float scaled_value_13;
  float weighted_sum_12;
  float component_sum_7;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  bool comparison_result;
  float scaled_value_14;
  float source_component_y_2;
  float weighted_sum_13;
  float source_component_z_2;
  float component_sum_8;
  float component_sum_9;
  float weighted_sum_14;
  float weighted_sum_15;
  float component_sum_10;
  float component_sum_11;
  __int64 table_value_2;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float saved_t;
  int comparison_operand;
  float component_delta_4;
  float square_root_2;
  float scaled_ratio_4;
  float product_difference_4;
  float scaled_ratio_5;
  float square_root_3;
  float scaled_ratio_6;
  float scaled_ratio_7;
  float scaled_value_15;
  float saved_t_2;
  int comparison_operand_2;
  float component_delta_5;
  float component_delta_6;
  float component_delta_7;
  float product_difference_5;
  float product_difference_6;
  float combined_products_4;
  float component_delta_8;
  float component_delta_9;
  float square_root_4;
  float scaled_ratio_8;
  float scaled_ratio_9;
  float scaled_ratio_10;
  float square_root_5;
  float scaled_ratio_11;
  float scaled_ratio_12;
  float product_difference_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D97A0[416];
#define frame_float_at_0 (*(float (*))(void *)(sr_frame_1400D97A0 + 0)) /* [rsp+40h] */
#define saved_square_root (*(float (*))(void *)(sr_frame_1400D97A0 + 0)) /* [rsp+40h] */
#define weighted_sum_19 (*(float (*))(void *)(sr_frame_1400D97A0 + 4)) /* [rsp+44h] */
#define component_delta_10 (*(float (*))(void *)(sr_frame_1400D97A0 + 4)) /* [rsp+44h] */
#define weighted_sum_20 (*(float (*))(void *)(sr_frame_1400D97A0 + 8)) /* [rsp+48h] */
#define component_delta_11 (*(float (*))(void *)(sr_frame_1400D97A0 + 8)) /* [rsp+48h] */
#define t (*(float (*))(void *)(sr_frame_1400D97A0 + 12)) /* [rsp+4Ch] */
#define float_word (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 16)) /* [rsp+50h] */
#define weighted_sum_21 (*(float (*))(void *)(sr_frame_1400D97A0 + 24)) /* [rsp+58h] */
#define saved_square_root_2 (*(float (*))(void *)(sr_frame_1400D97A0 + 28)) /* [rsp+5Ch] */
#define source_component_y_3 (*(float (*))(void *)(sr_frame_1400D97A0 + 32)) /* [rsp+60h] */
#define product_difference_8 (*(float (*))(void *)(sr_frame_1400D97A0 + 36)) /* [rsp+64h] */
#define source_component_z_3 (*(float (*))(void *)(sr_frame_1400D97A0 + 40)) /* [rsp+68h] */
#define normal (*(float (*))(void *)(sr_frame_1400D97A0 + 48)) /* [rsp+70h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400D97A0 + 52)) /* [rsp+74h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400D97A0 + 56)) /* [rsp+78h] */
#define point (*(int (*))(void *)(sr_frame_1400D97A0 + 64)) /* [rsp+80h] */
#define frame_word_at_68 (*(int (*))(void *)(sr_frame_1400D97A0 + 68)) /* [rsp+84h] */
#define frame_word_at_72 (*(int (*))(void *)(sr_frame_1400D97A0 + 72)) /* [rsp+88h] */
#define float_word_2 (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 80)) /* [rsp+90h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1400D97A0 + 88)) /* [rsp+98h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400D97A0 + 96)) /* [rsp+A0h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400D97A0 + 112)) /* [rsp+B0h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_1400D97A0 + 128)) /* [rsp+C0h] */
#define scaled_index_2 (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 144)) /* [rsp+D0h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 152)) /* [rsp+D8h] */
#define weighted_sum_22 (*(float (*))(void *)(sr_frame_1400D97A0 + 392)) /* [rsp+1C8h] */
#define product_difference_9 (*(float (*))(void *)(sr_frame_1400D97A0 + 392)) /* [rsp+1C8h] */
#define scaled_ratio_13 (*(float (*))(void *)(sr_frame_1400D97A0 + 392)) /* [rsp+1C8h] */
#define frame_float_at_400 (*(float (*))(void *)(sr_frame_1400D97A0 + 400)) /* [rsp+1D0h] */
#define combined_products_5 (*(float (*))(void *)(sr_frame_1400D97A0 + 400)) /* [rsp+1D0h] */

  from = a7;
  scaled_value = *a5;
  scaled_value_2 = *a5;
  scaled_value_3 = *a7;
  record_word_offset = 2310LL * a4;
  scaled_index_2 = record_word_offset * 4;
  weighted_sum = *(float *)&dword_140404A6C[record_word_offset + 432531269];
  component_delta = scaled_value_2 - weighted_sum;
  if ( scaled_value_3 < component_delta && component_delta > *a8 )
    return 0;
  source_component_y = a7[1];
  component_delta_2 = a5[1] - weighted_sum;
  if ( source_component_y < component_delta_2 && component_delta_2 > a8[1] )
    return 0;
  source_component_z = a7[2];
  component_delta_3 = a5[2] - weighted_sum;
  if ( source_component_z < component_delta_3 && component_delta_3 > a8[2] )
    return 0;
  component_sum = scaled_value + weighted_sum;
  if ( scaled_value_3 > component_sum && component_sum < *a8 )
    return 0;
  component_sum_2 = a5[1] + weighted_sum;
  if ( source_component_y > component_sum_2 && component_sum_2 < a8[1] )
    return 0;
  component_sum_3 = a5[2] + weighted_sum;
  if ( source_component_z > component_sum_3 && component_sum_3 < a8[2] )
    return 0;
  iteration_count = 0;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[record_word_offset + 432532039] <= 0 )
    return 0;
  record_word_offset_2 = 770LL * a4;
  weighted_sum_21 = saved_weighted_sum;
  state_address = (int *)&dword_140404A6C[record_word_offset + 432532042];
  saved_record_word_offset = record_word_offset_2;
  float_word = float_word_2;
  do
  {
    scaled_value_4 = *a6;
    source_float_6 = a6[6];
    combined_products = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531271 + 3 * *(state_address - 1)];
    combined_products_2 = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * *(state_address - 1)];
    combined_products_3 = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * *(state_address - 1)];
    source_float_4 = a6[4];
    source_float_5 = a6[5];
    source_component_w = a6[3];
    scaled_index = 3 * (record_word_offset_2 + *state_address);
    scaled_value_5 = source_float_4 * combined_products_2;
    table_value = record_word_offset_2 + state_address[1];
    weighted_sum_2 = (float)(source_component_w * combined_products_2) + (float)(*a6 * combined_products);
    scaled_value_6 = source_float_5 * combined_products_2;
    weighted_sum_3 = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * *state_address];
    scaled_value_7 = a6[1] * combined_products;
    weighted_sum_4 = weighted_sum_2 + (float)(source_float_6 * combined_products_3);
    source_component_y_3 = a6[1];
    scaled_value_8 = a6[7] * combined_products_3;
    component_sum_4 = scaled_value_5 + scaled_value_7;
    source_component_z_3 = a6[2];
    scaled_value_9 = source_component_z_3 * combined_products;
    weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index + 432531271];
    component_sum_5 = component_sum_4 + scaled_value_8;
    scaled_value_10 = a6[8] * combined_products_3;
    weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index + 432531273];
    component_sum_6 = (float)(scaled_value_6 + scaled_value_9) + scaled_value_10;
    saved_square_root_2 = scaled_value_4;
    weighted_sum_7 = (float)((float)(source_component_w * weighted_sum_3) + (float)(scaled_value_4 * weighted_sum_5)) + (float)(source_float_6 * weighted_sum_6);
    scaled_value_11 = source_float_5 * weighted_sum_3;
    weighted_sum_8 = (float)(source_float_4 * weighted_sum_3) + (float)(source_component_y_3 * weighted_sum_5);
    weighted_sum_9 = *(float *)&dword_140404A6C[3 * table_value + 432531272];
    scaled_value_12 = a6[2] * weighted_sum_5;
    weighted_sum_10 = *(float *)&dword_140404A6C[3 * table_value + 432531271];
    weighted_sum_11 = weighted_sum_8 + (float)(a6[7] * weighted_sum_6);
    scaled_value_13 = a6[8] * weighted_sum_6;
    weighted_sum_12 = *(float *)&dword_140404A6C[3 * table_value + 432531273];
    frame_float_at_400 = source_float_6;
    product_difference_8 = source_float_4;
    component_sum_7 = (float)(scaled_value_11 + scaled_value_12) + scaled_value_13;
    frame_float_at_0 = source_float_5;
    weighted_sum_22 = (float)((float)(a6[3] * weighted_sum_9) + (float)(scaled_value_4 * weighted_sum_10)) + (float)(source_float_6 * weighted_sum_12);
    weighted_sum_20 = (float)((float)(source_float_4 * weighted_sum_9) + (float)(a6[1] * weighted_sum_10)) + (float)(a6[7] * weighted_sum_12);
    weighted_sum_19 = (float)((float)(source_float_5 * weighted_sum_9) + (float)(a6[2] * weighted_sum_10)) + (float)(a6[8] * weighted_sum_12);
    product_difference = (float)((float)(weighted_sum_20 - component_sum_5) * (float)(component_sum_7 - component_sum_6)) - (float)((float)(weighted_sum_19 - component_sum_6) * (float)(weighted_sum_11 - component_sum_5));
    product_difference_2 = (float)((float)(weighted_sum_19 - component_sum_6) * (float)(weighted_sum_7 - weighted_sum_4)) - (float)((float)(weighted_sum_22 - weighted_sum_4) * (float)(component_sum_7 - component_sum_6));
    product_difference_3 = (float)((float)(weighted_sum_22 - weighted_sum_4) * (float)(weighted_sum_11 - component_sum_5)) - (float)((float)(weighted_sum_20 - component_sum_5) * (float)(weighted_sum_7 - weighted_sum_4));
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      normal = 0.0;
      scaled_ratio_2 = 0.0;
      unused_written_slot = 0.0;
      scaled_ratio_3 = 0.0;
      unused_written_slot_2 = 0.0;
      scaled_ratio = 0.0;
    }
    else
    {
      scaled_ratio = product_difference_3 * (float)(1.0 / square_root);
      scaled_ratio_2 = (float)(1.0 / square_root) * product_difference;
      scaled_ratio_3 = (float)(1.0 / square_root) * product_difference_2;
      normal = scaled_ratio_2;
      unused_written_slot_2 = scaled_ratio;
      unused_written_slot = scaled_ratio_3;
    }
    comparison_result = *(state_address - 2) == 4;
    scaled_value_14 = *a5;
    source_component_y_2 = a5[1];
    weighted_sum_13 = weighted_sum_4 + *a5;
    source_component_z_2 = a5[2];
    component_sum_8 = component_sum_5 + source_component_y_2;
    component_sum_9 = component_sum_6 + source_component_z_2;
    weighted_sum_14 = *a5 + weighted_sum_22;
    weighted_sum_15 = weighted_sum_7 + *a5;
    component_sum_10 = weighted_sum_11 + source_component_y_2;
    float_buffer_2[0] = weighted_sum_13;
    component_sum_11 = component_sum_7 + source_component_z_2;
    float_buffer_2[1] = component_sum_8;
    float_buffer[0] = weighted_sum_14;
    float_buffer_2[2] = component_sum_9;
    float_buffer_3[0] = weighted_sum_15;
    float_buffer_3[1] = component_sum_10;
    float_buffer_3[2] = component_sum_11;
    float_buffer[2] = source_component_z_2 + weighted_sum_19;
    float_buffer[1] = source_component_y_2 + weighted_sum_20;
    if ( comparison_result )
    {
      table_value_2 = record_word_offset_2 + state_address[2];
      weighted_sum_16 = *(float *)&dword_140404A6C[3 * table_value_2 + 432531273];
      weighted_sum_17 = *(float *)&dword_140404A6C[3 * table_value_2 + 432531271];
      weighted_sum_18 = *(float *)&dword_140404A6C[3 * table_value_2 + 432531272];
      *(float *)&float_word = (float)((float)(a6[3] * weighted_sum_18) + (float)(saved_square_root_2 * weighted_sum_17)) + (float)((float)(frame_float_at_400 * weighted_sum_16) + scaled_value_14);
      LODWORD(float_word_2) = float_word;
      *((float *)&float_word + 1) = (float)((float)(a6[7] * weighted_sum_16) + (float)(source_component_y_3 * weighted_sum_17)) + (float)((float)(product_difference_8 * weighted_sum_18) + source_component_y_2);
      HIDWORD(float_word_2) = HIDWORD(float_word);
      weighted_sum_21 = (float)((float)(a6[8] * weighted_sum_16) + (float)(source_component_z_3 * weighted_sum_17)) + (float)((float)(frame_float_at_0 * weighted_sum_18) + a5[2]);
      saved_weighted_sum = weighted_sum_21;
    }
    if ( sr_collision_line_triangle((float *)&point, &normal, &t, from, a8, float_buffer_2, float_buffer_3, float_buffer) )
    {
      saved_t = t;
      if ( t < *a3 )
      {
        comparison_operand = frame_word_at_68;
        *(_DWORD *)a1 = point;
        *((_DWORD *)a1 + 2) = frame_word_at_72;
        *((_DWORD *)a1 + 1) = comparison_operand;
        *a2 = scaled_ratio_2;
        a2[1] = scaled_ratio_3;
        a2[2] = scaled_ratio;
        *a3 = saved_t;
        if ( state_address[3] <= 0 )
        {
          g_151A8490C = -1;
        }
        else
        {
          component_delta_4 = weighted_sum_15 - weighted_sum_13;
          product_difference_9 = *(float *)&float_word - weighted_sum_13;
          combined_products_5 = *((float *)&float_word + 1) - component_sum_8;
          source_component_z_3 = component_sum_11 - component_sum_9;
          component_delta_10 = weighted_sum_21 - component_sum_9;
          product_difference_8 = *a1 - weighted_sum_13;
          component_delta_11 = a1[1] - component_sum_8;
          source_component_y_3 = a1[2] - component_sum_9;
          square_root_2 = fsqrt(
                  (float)((float)((float)(component_sum_10 - component_sum_8) * (float)(component_sum_10 - component_sum_8)) + (float)(component_delta_4 * component_delta_4))
                + (float)((float)(component_sum_11 - component_sum_9) * (float)(component_sum_11 - component_sum_9)));
          saved_square_root_2 = square_root_2;
          if ( square_root_2 == 0.0 )
          {
            scaled_ratio_4 = 0.0;
            product_difference_4 = 0.0;
            scaled_ratio_5 = 0.0;
          }
          else
          {
            scaled_ratio_4 = (float)(1.0 / square_root_2) * component_delta_4;
            product_difference_4 = (float)(1.0 / square_root_2) * (float)(component_sum_10 - component_sum_8);
            scaled_ratio_5 = (float)(1.0 / square_root_2) * source_component_z_3;
          }
          square_root_3 = fsqrt((float)((float)(combined_products_5 * combined_products_5) + (float)(product_difference_9 * product_difference_9)) + (float)(component_delta_10 * component_delta_10));
          saved_square_root = square_root_3;
          if ( square_root_3 == 0.0 )
          {
            scaled_ratio_13 = 0.0;
            scaled_ratio_7 = 0.0;
            scaled_value_15 = 0.0;
          }
          else
          {
            scaled_ratio_6 = 1.0 / square_root_3;
            scaled_ratio_13 = (float)(1.0 / square_root_3) * product_difference_9;
            scaled_ratio_7 = (float)(1.0 / square_root_3) * combined_products_5;
            scaled_value_15 = scaled_ratio_6 * component_delta_10;
          }
          g_151A8490C = (int)(float)((float)((float)((float)((float)(scaled_ratio_4 * product_difference_8) + (float)(product_difference_4 * component_delta_11))
                                                                 + (float)(scaled_ratio_5 * source_component_y_3))
                                                         * 8.0)
                                                 / saved_square_root_2);
          g_151A84910 = (int)(float)((float)((float)((float)((float)(scaled_ratio_7 * component_delta_11) + (float)(product_difference_8 * scaled_ratio_13))
                                                                 + (float)(scaled_value_15 * source_component_y_3))
                                                         * 4.0)
                                                 / saved_square_root);
        }
      }
    }
    if ( *(state_address - 2) == 4 && sr_collision_line_triangle((float *)&point, &normal, &t, a7, a8, float_buffer_2, float_buffer, (float *)&float_word_2) )
    {
      saved_t_2 = t;
      if ( t < *a3 )
      {
        comparison_operand_2 = frame_word_at_68;
        *(_DWORD *)a1 = point;
        *((_DWORD *)a1 + 2) = frame_word_at_72;
        *((_DWORD *)a1 + 1) = comparison_operand_2;
        *a2 = scaled_ratio_2;
        a2[1] = scaled_ratio_3;
        a2[2] = scaled_ratio;
        *a3 = saved_t_2;
        if ( state_address[3] <= 0 )
        {
          g_151A8490C = -1;
        }
        else
        {
          component_delta_5 = weighted_sum_15 - weighted_sum_13;
          component_delta_6 = component_sum_10 - component_sum_8;
          component_delta_7 = component_sum_11 - component_sum_9;
          product_difference_5 = *(float *)&float_word - weighted_sum_13;
          product_difference_6 = *a1 - weighted_sum_13;
          combined_products_4 = *((float *)&float_word + 1) - component_sum_8;
          component_delta_8 = a1[1] - component_sum_8;
          component_delta_9 = a1[2] - component_sum_9;
          square_root_4 = fsqrt((float)((float)(component_delta_6 * component_delta_6) + (float)(component_delta_5 * component_delta_5)) + (float)(component_delta_7 * component_delta_7));
          if ( square_root_4 == 0.0 )
          {
            scaled_ratio_8 = 0.0;
            scaled_ratio_9 = 0.0;
            scaled_ratio_10 = 0.0;
          }
          else
          {
            scaled_ratio_8 = (float)(1.0 / square_root_4) * component_delta_5;
            scaled_ratio_9 = (float)(1.0 / square_root_4) * component_delta_6;
            scaled_ratio_10 = (float)(1.0 / square_root_4) * component_delta_7;
          }
          square_root_5 = fsqrt(
                   (float)((float)(combined_products_4 * combined_products_4) + (float)(product_difference_5 * product_difference_5))
                 + (float)((float)(weighted_sum_21 - component_sum_9) * (float)(weighted_sum_21 - component_sum_9)));
          if ( square_root_5 == 0.0 )
          {
            scaled_ratio_11 = 0.0;
            scaled_ratio_12 = 0.0;
            product_difference_7 = 0.0;
          }
          else
          {
            scaled_ratio_11 = (float)(1.0 / square_root_5) * product_difference_5;
            scaled_ratio_12 = (float)(1.0 / square_root_5) * combined_products_4;
            product_difference_7 = (float)(1.0 / square_root_5) * (float)(weighted_sum_21 - component_sum_9);
          }
          g_151A8490C = (int)(float)((float)((float)((float)((float)(scaled_ratio_8 * product_difference_6) + (float)(scaled_ratio_9 * component_delta_8))
                                                                 + (float)(component_delta_9 * scaled_ratio_10))
                                                         * 8.0)
                                                 / square_root_4);
          g_151A84910 = (int)(float)((float)((float)((float)((float)(scaled_ratio_12 * component_delta_8) + (float)(product_difference_6 * scaled_ratio_11))
                                                                 + (float)(product_difference_7 * component_delta_9))
                                                         * 4.0)
                                                 / square_root_5);
        }
      }
    }
    from = a7;
    ++iteration_count;
    record_word_offset_2 = saved_record_word_offset;
    state_address += 6;
  }
  while ( iteration_count < *(int *)((char *)&g_1A75FF388 + scaled_index_2) );
  if ( *a3 >= 1.0 )
    return 0;
  g_151A848A0 = 0;
  g_151A848A8 = 0;
  return 1;
}
#undef frame_float_at_0
#undef saved_square_root
#undef weighted_sum_19
#undef component_delta_10
#undef weighted_sum_20
#undef component_delta_11
#undef t
#undef float_word
#undef weighted_sum_21
#undef saved_square_root_2
#undef source_component_y_3
#undef product_difference_8
#undef source_component_z_3
#undef normal
#undef unused_written_slot
#undef unused_written_slot_2
#undef point
#undef frame_word_at_68
#undef frame_word_at_72
#undef float_word_2
#undef saved_weighted_sum
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef scaled_index_2
#undef saved_record_word_offset
#undef weighted_sum_22
#undef product_difference_9
#undef scaled_ratio_13
#undef frame_float_at_400
#undef combined_products_5

//----- (00000001400DAD20) ----------------------------------------------------
_BOOL8            sub_1400DAD20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float *a5, float *a6, float *a7)
{
  int iteration_count;
  float *to;
  float *from;
  __int64 running_total;
  int iteration_count_2;
  __int64 record_byte_offset;
  __int64 loaded_word;
  bool comparison_result;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 packed_word_bits;
  float weighted_sum_4;
  float weighted_sum_5;
  __int64 packed_word_bits_2;
  float weighted_sum_6;
  float weighted_sum_7;
  __int64 scaled_index;
  float weighted_sum_8;
  float scaled_value;
  float weighted_sum_9;
  float scaled_value_2;
  float weighted_sum_10;
  float scaled_value_3;
  float weighted_sum_11;
  float component_sum;
  float component_sum_2;
  __int64 loaded_word_2;
  float weighted_sum_12;
  float saved_t;
  int table_value;
  float saved_t_2;
  int table_value_2;
  int sr_shape_triangle_point[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DAD20[240];
#define saved_iteration_count (*(int (*))(void *)(sr_frame_1400DAD20 + 0)) /* [rsp+48h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400DAD20 + 24)) /* [rsp+60h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400DAD20 + 40)) /* [rsp+70h] */
#define normal (*(float (*)[4])(void *)(sr_frame_1400DAD20 + 56)) /* [rsp+80h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_1400DAD20 + 72)) /* [rsp+90h] */
#define float_buffer_4 (*(float (*)[4])(void *)(sr_frame_1400DAD20 + 88)) /* [rsp+A0h] */
#define t (*(float (*))(void *)(sr_frame_1400DAD20 + 224)) /* [rsp+128h] */
#define input_value (*(__int64 (*))(void *)(sr_frame_1400DAD20 + 232)) /* [rsp+130h] */

  input_value = a2;
  iteration_count = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  saved_iteration_count = 0;
  if ( *(int *)(a2 + 16) <= 0 )
    return 0;
  to = a7;
  from = a6;
  running_total = a2 + 48;
  do
  {
    iteration_count_2 = 0;
    if ( *(int *)running_total > 0 )
    {
      record_byte_offset = 0;
      do
      {
        loaded_word = *(_QWORD *)(running_total + 8);
        comparison_result = *(_DWORD *)(loaded_word + record_byte_offset + 4) == 4;
        weighted_sum = *(float *)(loaded_word + record_byte_offset + 24);
        weighted_sum_2 = *(float *)(loaded_word + record_byte_offset + 28);
        weighted_sum_3 = *(float *)(loaded_word + record_byte_offset + 32);
        packed_word_bits = 3 * *(_DWORD *)(loaded_word + record_byte_offset + 8);
        weighted_sum_4 = *(float *)(a3 + 4 * packed_word_bits + 4);
        float_buffer_2[0] = *(float *)(a3 + 4 * packed_word_bits);
        weighted_sum_5 = *(float *)(a3 + 4 * packed_word_bits + 8);
        LODWORD(packed_word_bits) = *(_DWORD *)(loaded_word + record_byte_offset + 12);
        float_buffer_2[2] = weighted_sum_5;
        float_buffer_2[1] = weighted_sum_4;
        packed_word_bits_2 = 3 * (int)packed_word_bits;
        weighted_sum_6 = *(float *)(a3 + 4 * packed_word_bits_2 + 4);
        float_buffer_3[0] = *(float *)(a3 + 4 * packed_word_bits_2);
        weighted_sum_7 = *(float *)(a3 + 4 * packed_word_bits_2 + 8);
        LODWORD(packed_word_bits_2) = *(_DWORD *)(loaded_word + record_byte_offset + 16);
        float_buffer_3[2] = weighted_sum_7;
        float_buffer_3[1] = weighted_sum_6;
        scaled_index = 3 * (int)packed_word_bits_2;
        weighted_sum_8 = *(float *)(a3 + 4 * scaled_index + 4);
        float_buffer[0] = *(float *)(a3 + 4 * scaled_index);
        float_buffer[2] = *(float *)(a3 + 4 * scaled_index + 8);
        float_buffer[1] = weighted_sum_8;
        scaled_value = weighted_sum * a5[1];
        weighted_sum_9 = (float)((float)(weighted_sum_2 * a5[3]) + (float)(weighted_sum * *a5)) + (float)(weighted_sum_3 * a5[6]);
        scaled_value_2 = weighted_sum_3 * a5[7];
        weighted_sum_10 = (float)(weighted_sum * a5[2]) + (float)(weighted_sum_2 * a5[5]);
        scaled_value_3 = weighted_sum_3 * a5[8];
        weighted_sum_11 = (float)(weighted_sum_2 * a5[4]) + scaled_value;
        normal[0] = weighted_sum_9;
        component_sum = weighted_sum_10 + scaled_value_3;
        component_sum_2 = weighted_sum_11 + scaled_value_2;
        normal[2] = component_sum;
        normal[1] = component_sum_2;
        if ( comparison_result )
        {
          loaded_word_2 = 3 * *(_DWORD *)(loaded_word + record_byte_offset + 20);
          weighted_sum_12 = *(float *)(a3 + 4 * loaded_word_2 + 4);
          float_buffer_4[0] = *(float *)(a3 + 4 * loaded_word_2);
          float_buffer_4[2] = *(float *)(a3 + 4 * loaded_word_2 + 8);
          float_buffer_4[1] = weighted_sum_12;
        }
        if ( sr_collision_line_triangle((float *)&sr_shape_triangle_point[0], normal, &t, from, to, float_buffer_2, float_buffer_3, float_buffer) )
        {
          saved_t = t;
          if ( t < *(float *)(a1 + 24) )
          {
            table_value = sr_shape_triangle_point[1];
            *(_DWORD *)a1 = sr_shape_triangle_point[0];
            *(_DWORD *)(a1 + 8) = sr_shape_triangle_point[2];
            *(_DWORD *)(a1 + 4) = table_value;
            *(float *)(a1 + 12) = weighted_sum_9;
            *(float *)(a1 + 16) = component_sum_2;
            *(float *)(a1 + 20) = component_sum;
            *(float *)(a1 + 24) = saved_t;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(running_total + 8) + record_byte_offset + 4) == 4
          && sr_collision_line_triangle((float *)&sr_shape_triangle_point[0], normal, &t, from, to, float_buffer_2, float_buffer, float_buffer_4) )
        {
          saved_t_2 = t;
          if ( t < *(float *)(a1 + 24) )
          {
            table_value_2 = sr_shape_triangle_point[1];
            *(_DWORD *)a1 = sr_shape_triangle_point[0];
            *(_DWORD *)(a1 + 8) = sr_shape_triangle_point[2];
            *(_DWORD *)(a1 + 4) = table_value_2;
            *(float *)(a1 + 12) = weighted_sum_9;
            *(float *)(a1 + 16) = component_sum_2;
            *(float *)(a1 + 20) = component_sum;
            *(float *)(a1 + 24) = saved_t_2;
          }
        }
        ++iteration_count_2;
        record_byte_offset += 36;
      }
      while ( iteration_count_2 < *(_DWORD *)running_total );
      iteration_count = saved_iteration_count;
      a2 = input_value;
    }
    ++iteration_count;
    running_total += 56;
    saved_iteration_count = iteration_count;
  }
  while ( iteration_count < *(_DWORD *)(a2 + 16) );
  return *(float *)(a1 + 24) < 1.0;
}
#undef saved_iteration_count
#undef float_buffer
#undef float_buffer_2
#undef normal
#undef float_buffer_3
#undef float_buffer_4
#undef t
#undef input_value

//----- (00000001400DB060) ----------------------------------------------------
_BOOL8            sub_1400DB060(int a1, float *a2, float *a3, float a4)
{
  unsigned int *state_address;
  float scaled_ratio;
  int iteration_count;
  float squared_length;
  __int64 running_total;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float saved_squared_length;
  unsigned int comparison_operand;
  __int64 human_record_offset;
  float *state_address_2;
  float combined_products;
  float weighted_sum;
  __int64 scaled_index;
  float weighted_sum_2;
  float weighted_sum_3;
  float state_address_3;
  float combined_products_2;
  float combined_products_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float radius;
  unsigned int comparison_operand_2;
  unsigned int comparison_operand_3;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float square_root;
  float product_difference;
  float component_delta_4;
  float component_delta_5;
  float component_delta_6;
  float product_difference_2;
  float product_difference_3;
  float component_sum;
  float saved_distance;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DB060[80];
#define frame_float_at_0 (*(float (*))(void *)(sr_frame_1400DB060 + 0)) /* [rsp+48h] */
#define saved_on_a (*(float (*))(void *)(sr_frame_1400DB060 + 4)) /* [rsp+4Ch] */
#define distance (*(float (*))(void *)(sr_frame_1400DB060 + 12)) /* [rsp+54h] */
#define on_b (*(float (*))(void *)(sr_frame_1400DB060 + 16)) /* [rsp+58h] */
#define saved_component_delta (*(float (*))(void *)(sr_frame_1400DB060 + 20)) /* [rsp+5Ch] */
#define saved_component_delta_2 (*(float (*))(void *)(sr_frame_1400DB060 + 24)) /* [rsp+60h] */
#define b1 (*(float (*)[4])(void *)(sr_frame_1400DB060 + 32)) /* [rsp+68h] */
#define b0 (*(float (*)[4])(void *)(sr_frame_1400DB060 + 48)) /* [rsp+78h] */
#define on_a (*(float (*))(void *)(sr_frame_1400DB060 + 64)) /* [rsp+88h] */
#define frame_float_at_68 (*(float (*))(void *)(sr_frame_1400DB060 + 68)) /* [rsp+8Ch] */
#define frame_float_at_72 (*(float (*))(void *)(sr_frame_1400DB060 + 72)) /* [rsp+90h] */

  state_address = &g_18399DF38;
  scaled_ratio = saved_on_a;
  iteration_count = 0;
  squared_length = saved_on_a;
  running_total = 0;
  scaled_ratio_2 = saved_on_a;
  scaled_ratio_3 = saved_on_a;
  saved_squared_length = 1.0;
  comparison_operand = LODWORD(saved_on_a);
  *(unsigned int *)&world_unknown_151a84898 = 1065353216;
  human_record_offset = 7166LL * a1;
  state_address_2 = (float *)&dword_140404A6C[human_record_offset + 280651442];
  do
  {
    combined_products = *((float *)state_address + 1) * -0.5;
    weighted_sum = *((float *)state_address + 1) * 0.5;
    scaled_index = human_record_offset * 4 + 12 * (running_total + (int)*state_address);
    weighted_sum_2 = *(float *)((char *)&g_18329E560 + scaled_index);
    weighted_sum_3 = *(float *)((char *)&g_18329E564 + scaled_index);
    state_address_3 = (float)(*(float *)((char *)(unsigned int *)&g_18329E55C + scaled_index) * weighted_sum) + *(state_address_2 - 2);
    b0[0] = (float)(*(float *)((char *)(unsigned int *)&g_18329E55C + scaled_index) * combined_products) + *(state_address_2 - 2);
    combined_products_2 = (float)(weighted_sum_2 * combined_products) + *(state_address_2 - 1);
    b1[0] = state_address_3;
    combined_products_3 = (float)(weighted_sum_2 * weighted_sum) + *(state_address_2 - 1);
    b0[1] = combined_products_2;
    weighted_sum_4 = (float)(weighted_sum_3 * combined_products) + *state_address_2;
    b1[1] = combined_products_3;
    weighted_sum_5 = (float)(weighted_sum_3 * weighted_sum) + *state_address_2;
    b0[2] = weighted_sum_4;
    radius = a4 + *((float *)state_address + 2);
    b1[2] = weighted_sum_5;
    if ( sr_collision_segment_segment(&on_a, &on_b, &distance, a2, a3, b0, b1, radius) )
    {
      comparison_operand_2 = LODWORD(on_a);
      comparison_operand_3 = LODWORD(frame_float_at_68);
      component_delta = on_b - on_a;
      component_delta_2 = saved_component_delta - frame_float_at_68;
      comparison_operand = LODWORD(frame_float_at_72);
      component_delta_3 = saved_component_delta_2 - frame_float_at_72;
      saved_on_a = on_a;
      frame_float_at_0 = frame_float_at_68;
      square_root = fsqrt((float)((float)(component_delta_2 * component_delta_2) + (float)(component_delta * component_delta)) + (float)(component_delta_3 * component_delta_3));
      if ( square_root == 0.0 )
      {
        scaled_ratio_2 = 0.0;
        scaled_ratio_3 = 0.0;
        scaled_ratio = 0.0;
      }
      else
      {
        scaled_ratio_2 = (float)(1.0 / square_root) * component_delta;
        scaled_ratio_3 = (float)(1.0 / square_root) * component_delta_2;
        scaled_ratio = (float)(1.0 / square_root) * component_delta_3;
      }
      product_difference = *a3 - *a2;
      component_delta_4 = a3[1] - a2[1];
      component_delta_5 = a3[2] - a2[2];
      component_delta_6 = frame_float_at_72 - a2[2];
      product_difference_2 = (float)(on_a - *a2) * product_difference;
      product_difference_3 = (float)(frame_float_at_68 - a2[1]) * component_delta_4;
      saved_component_delta = component_delta_4;
      component_sum = product_difference_2 + product_difference_3;
      saved_distance = distance;
      on_b = product_difference;
      saved_component_delta_2 = component_delta_5;
      squared_length = (float)(component_sum + (float)(component_delta_6 * component_delta_5))
         / (float)((float)((float)(component_delta_4 * component_delta_4) + (float)(product_difference * product_difference)) + (float)(component_delta_5 * component_delta_5));
    }
    else
    {
      saved_distance = 65536.0;
      comparison_operand_3 = LODWORD(frame_float_at_0);
      comparison_operand_2 = LODWORD(saved_on_a);
    }
    if ( saved_distance < 65536.0 && saved_squared_length > squared_length )
    {
      g_151A84880 = comparison_operand_2;
      saved_squared_length = squared_length;
      *(unsigned int *)&ragdoll_unknown_height = comparison_operand_3;
      g_151A84888 = comparison_operand;
      g_151A8488C = scaled_ratio_2;
      g_151A84890 = scaled_ratio_3;
      g_151A84894 = scaled_ratio;
      (world_unknown_151a84898) = squared_length;
      g_151A848B4 = iteration_count;
    }
    ++iteration_count;
    running_total += 26;
    state_address_2 += 78;
    state_address += 25;
  }
  while ( iteration_count < 16 );
  return saved_squared_length < 1.0;
}
#undef frame_float_at_0
#undef saved_on_a
#undef distance
#undef on_b
#undef saved_component_delta
#undef saved_component_delta_2
#undef b1
#undef b0
#undef on_a
#undef frame_float_at_68
#undef frame_float_at_72

//----- (00000001400DC050) ----------------------------------------------------
int                sub_1400DC050(float *a1, float *a2, int a3)
{
  unsigned sr_minimum[3];
  unsigned sr_maximum[3];
  union { __int128 first; unsigned words[8]; float coordinates[8]; } sr_hit;
  float *input_cursor;
  float *input_cursor_2;
  unsigned int *state_address;
  int i;
  int iteration_count;
  unsigned int *state_address_2;
  unsigned int scaled_index;
  unsigned int loaded_word;
  unsigned int scaled_index_2;
  float scaled_value;
  float scaled_value_2;
  float saved_scaled_value;
  float limited_value;
  float source_component_y;
  float limited_value_2;
  float limited_value_3;
  int iteration_count_2;
  float limited_value_4;
  float limited_value_5;
  int float_word;
  int scaled_index_3;
  int scaled_index_4;
  int scaled_index_5;
  unsigned __int64 iteration_count_3;
  __int64 element_index;
  __int64 record_byte_offset;
  __int64 remaining_count;
  unsigned __int64 element_index_2;
  __int64 remaining_count_2;
  __int64 element_index_3;
  __int64 scaled_index_6;
  __int64 saved_iteration_count;
  __int64 element_index_4;
  __int64 street;
  __int64 scaled_index_7;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DC050[99216];
#define scaled_value_3 (*(float (*))(void *)(sr_frame_1400DC050 + 0)) /* [rsp+10h] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_1400DC050 + 4)) /* [rsp+14h] */
#define input_cursor_3 (*(float * (*))(void *)(sr_frame_1400DC050 + 48)) /* [rsp+40h] */
#define input_cursor_4 (*(float * (*))(void *)(sr_frame_1400DC050 + 56)) /* [rsp+48h] */
#define list (*(int (*)[12292])(void *)(sr_frame_1400DC050 + 64)) /* [rsp+50h] */
#define scratch_buffer (*(_DWORD (*)[64])(void *)(sr_frame_1400DC050 + 98944)) /* [rsp+18290h] */
#define unused_frame_slot_99200 (*(__int64 (*))(void *)(sr_frame_1400DC050 + 99200)) /* [rsp+18390h] */

  input_cursor_4 = a2;
  input_cursor_3 = a1;
  input_cursor = a2;
  *(unsigned int *)&world_unknown_151a84898 = 1065353216;
  item_hit_unknown_7c = -1;
  input_cursor_2 = a1;
  item_hit_block_part = -1;
  item_hit_layer = -1;
  if ( (unsigned int)sub_1400D1830((unsigned __int64)&sr_hit.first, a1, a2) && (world_unknown_151a84898) > sr_hit.coordinates[6] )
  {
    g_151A848A0 = 0;
    __builtin_memcpy(&g_151A84880, &sr_hit.first, 16);
    g_151A848A8 = 0;
    *(unsigned int *)&g_151A84890 = sr_hit.words[4];
    *(unsigned int *)&g_151A84894 = sr_hit.words[5];
    (world_unknown_151a84898) = sr_hit.coordinates[6];
    item_hit_layer = -1;
  }
  state_address = &g_15ADA9240;
  for ( i = 0; i < 4; ++i )
  {
    if ( *state_address
      && (unsigned int)sub_1400D6B60((float *)&sr_minimum[0], &(*(float *)&sr_maximum[0]), &scaled_value_3, (unsigned int)i, input_cursor_2, input_cursor)
      && scaled_value_3 < (world_unknown_151a84898) )
    {
      g_151A84880 = sr_minimum[0];
      *(unsigned int *)&ragdoll_unknown_height = sr_minimum[1];
      g_151A84888 = sr_minimum[2];
      g_151A8488C = (*(float *)&sr_maximum[0]);
      *(unsigned int *)&g_151A84890 = sr_maximum[1];
      *(unsigned int *)&g_151A84894 = sr_maximum[2];
      (world_unknown_151a84898) = scaled_value_3;
      g_151A848A0 = 0;
      g_151A848A8 = 0;
      item_hit_layer = i;
    }
    state_address += 263004;
  }
  if ( a3 )
  {
    iteration_count = 0;
    state_address_2 = &g_1A796F39C;
    do
    {
      if ( *(state_address_2 - 7)
        && (unsigned int)sub_1400D8B70((float *)&sr_minimum[0], &(*(float *)&sr_maximum[0]), &scaled_value_3, iteration_count, input_cursor_2, input_cursor)
        && scaled_value_3 < (world_unknown_151a84898) )
      {
        g_151A84880 = sr_minimum[0];
        g_151A84888 = sr_minimum[2];
        *(unsigned int *)&ragdoll_unknown_height = sr_minimum[1];
        *(unsigned int *)&g_151A84890 = sr_maximum[1];
        scaled_index = *(state_address_2 - 2);
        g_151A8488C = (*(float *)&sr_maximum[0]);
        *(unsigned int *)&g_151A848A0 = scaled_index;
        loaded_word = *state_address_2;
        *(unsigned int *)&g_151A84894 = sr_maximum[2];
        scaled_index_2 = *(state_address_2 - 1);
        g_151A848A8 = loaded_word;
        *(unsigned int *)&g_151A848A4 = scaled_index_2;
        (world_unknown_151a84898) = scaled_value_3;
        item_hit_layer = -1;
      }
      ++iteration_count;
      state_address_2 += 21;
    }
    while ( iteration_count < 128 );
  }
  scaled_value = *input_cursor_2;
  scaled_value_2 = *input_cursor;
  if ( *input_cursor_2 >= *input_cursor )
  {
    (*(float *)&sr_maximum[0]) = *input_cursor_2;
    saved_scaled_value = scaled_value;
  }
  else
  {
    (*(float *)&sr_maximum[0]) = *input_cursor;
    saved_scaled_value = scaled_value_2;
  }
  limited_value = fminf(scaled_value, scaled_value_2);
  source_component_y = input_cursor[1];
  limited_value_2 = fmaxf(input_cursor[2], input_cursor_2[2]);
  limited_value_3 = fminf(input_cursor[2], input_cursor_2[2]);
  sr_minimum[0] = LODWORD(limited_value);
  list[0] = 0;
  iteration_count_2 = 0;
  limited_value_4 = fminf(source_component_y, input_cursor_2[1]);
  limited_value_5 = fmaxf(source_component_y, input_cursor_2[1]);
  float_word = (int)(float)(limited_value * 0.015625);
  list[12289] = 0;
  sr_minimum[2] = LODWORD(limited_value_3);
  scaled_value_3 = *(float *)&float_word;
  scaled_index_3 = (int)(float)(saved_scaled_value * 0.015625);
  sr_minimum[1] = LODWORD(limited_value_4);
  cached_scaled_index = scaled_index_3;
  scaled_index_4 = (int)(float)(limited_value_3 * 0.015625);
  scaled_index_5 = (int)(float)(limited_value_2 * 0.015625);
  sr_maximum[1] = LODWORD(limited_value_5);
  sr_maximum[2] = LODWORD(limited_value_2);
  if ( scaled_index_4 <= scaled_index_5 )
  {
    iteration_count_3 = scaled_index_4;
    element_index = 0;
    record_byte_offset = (__int64)scaled_index_4 << 6;
    remaining_count = (unsigned int)(scaled_index_5 - scaled_index_4 + 1);
    do
    {
      if ( iteration_count_3 <= 0x3F && float_word <= scaled_index_3 )
      {
        element_index_2 = float_word;
        remaining_count_2 = (unsigned int)(scaled_index_3 - float_word + 1);
        do
        {
          if ( element_index_2 <= 0x3F )
          {
            element_index_3 = 0;
            scaled_index_6 = (int)dword_140404A6C[9 * record_byte_offset + 254352099 + 9 * element_index_2];
            if ( scaled_index_6 > 0 )
            {
              do
              {
                if ( element_index < 64 )
                {
                  ++iteration_count_2;
                  scratch_buffer[element_index++] = dword_140404A6C[8 * record_byte_offset + 254352100 + 8 * element_index_2 + record_byte_offset + element_index_2 + element_index_3];
                }
                ++element_index_3;
              }
              while ( element_index_3 < scaled_index_6 );
            }
          }
          ++element_index_2;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        *(float *)&float_word = scaled_value_3;
        scaled_index_3 = cached_scaled_index;
      }
      ++iteration_count_3;
      record_byte_offset += 64;
      --remaining_count;
    }
    while ( remaining_count );
    input_cursor_2 = input_cursor_3;
    input_cursor = input_cursor_4;
  }
  saved_iteration_count = iteration_count_2;
  if ( iteration_count_2 > 0 )
  {
    element_index_4 = 0;
    do
    {
      street = (int)scratch_buffer[element_index_4];
      scaled_index_7 = 15432 * street;
      if ( saved_scaled_value >= *(float *)&dword_140404A6C[15432 * street + 358312926]
        && limited_value_5 >= *(float *)&dword_140404A6C[scaled_index_7 + 358312927]
        && limited_value_2 >= *(float *)&dword_140404A6C[scaled_index_7 + 358312928]
        && limited_value <= *(float *)&dword_140404A6C[scaled_index_7 + 358312929]
        && limited_value_4 <= *(float *)&dword_140404A6C[scaled_index_7 + 358312930]
        && limited_value_3 <= *(float *)&dword_140404A6C[scaled_index_7 + 358312931] )
      {
        sr_world_street_triangles_in_box(list, (float *)&sr_minimum[0], &(*(float *)&sr_maximum[0]), street, 2);
      }
      ++element_index_4;
    }
    while ( element_index_4 < saved_iteration_count );
  }
  if ( sub_1400DA300((__int64)&sr_hit.first, list, input_cursor_2, input_cursor) && (world_unknown_151a84898) > sr_hit.coordinates[6] )
  {
    g_151A848A0 = 0;
    __builtin_memcpy(&g_151A84880, &sr_hit.first, 16);
    g_151A848A8 = 0;
    *(unsigned int *)&g_151A84890 = sr_hit.words[4];
    *(unsigned int *)&g_151A84894 = sr_hit.words[5];
    (world_unknown_151a84898) = sr_hit.coordinates[6];
    item_hit_layer = -1;
  }
  return !((world_unknown_151a84898) >= 1.0f);
}
#undef scaled_value_3
#undef cached_scaled_index
#undef input_cursor_3
#undef input_cursor_4
#undef list
#undef scratch_buffer
#undef unused_frame_slot_99200

//----- (00000001400DC940) ----------------------------------------------------
__int64            sub_1400DC940(int a1, float *a2, float *a3, int a4)
{
  __int64 input_value;
  __int64 record_word_offset;
  float weighted_sum;
  float source_component_y;
  float weighted_sum_2;
  float source_component_z;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  int scaled_index;
  signed int element_index;
  signed int iteration_count;
  unsigned int *record_byte_offset;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  float saved_state_address;
  float saved_state_address_2;
  float weighted_sum_7;
  float weighted_sum_8;
  __int64 table_value;
  float state_address;
  float weighted_sum_9;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 table_value_2;
  float saved_state_address_3;
  float saved_state_address_4;
  float weighted_sum_10;
  float weighted_sum_11;
  __int64 table_value_3;
  float state_address_2;
  float weighted_sum_12;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 table_value_4;
  float saved_state_address_5;
  float saved_state_address_6;
  float weighted_sum_13;
  float weighted_sum_14;
  __int64 table_value_5;
  float state_address_3;
  float weighted_sum_15;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float product_difference;
  float product_difference_2;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float scaled_value;
  float component_delta_4;
  float combined_products;
  float combined_products_2;
  float component_delta_5;
  float component_delta_6;
  float product_difference_3;
  float weighted_sum_16;
  float scaled_ratio_4;
  float weighted_sum_17;
  float weighted_sum_18;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  float state_address_4;
  float weighted_sum_19;
  float state_address_5;
  float weighted_sum_20;
  float weighted_sum_21;
  float state_address_6;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  __int64 table_value_6;
  float saved_state_address_7;
  float saved_state_address_8;
  float weighted_sum_22;
  float weighted_sum_23;
  __int64 table_value_7;
  float state_address_7;
  float weighted_sum_24;
  float component_delta_7;
  float product_difference_4;
  float product_difference_5;
  float product_difference_6;
  float square_root_2;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float scaled_ratio_7;
  float source_component_y_2;
  float source_component_z_2;
  float combined_products_3;
  float source_component_z_3;
  float product_difference_7;
  float combined_products_4;
  float product_difference_8;
  float component_delta_8;
  float component_delta_9;
  float weighted_sum_25;
  float scaled_ratio_8;
  float weighted_sum_26;
  float weighted_sum_27;
  __int64 scaled_index_17;
  __int64 scaled_index_18;
  __int64 scaled_index_19;
  __int64 scaled_index_20;
  float state_address_8;
  float weighted_sum_28;
  float weighted_sum_29;
  float state_address_9;
  float *state_address_10;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DC940[432];
#define source_component_z_4 (*(float (*))(void *)(sr_frame_1400DC940 + 0)) /* [rsp+40h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1400DC940 + 0)) /* [rsp+40h] */
#define product_difference_9 (*(float (*))(void *)(sr_frame_1400DC940 + 4)) /* [rsp+44h] */
#define weighted_sum_30 (*(float (*))(void *)(sr_frame_1400DC940 + 4)) /* [rsp+44h] */
#define state_address_11 (*(float (*))(void *)(sr_frame_1400DC940 + 4)) /* [rsp+44h] */
#define state_address_12 (*(float (*))(void *)(sr_frame_1400DC940 + 8)) /* [rsp+48h] */
#define saved_state_address_9 (*(float (*))(void *)(sr_frame_1400DC940 + 12)) /* [rsp+4Ch] */
#define source_component_y_3 (*(float (*))(void *)(sr_frame_1400DC940 + 16)) /* [rsp+50h] */
#define saved_component_delta (*(float (*))(void *)(sr_frame_1400DC940 + 16)) /* [rsp+50h] */
#define saved_state_address_10 (*(float (*))(void *)(sr_frame_1400DC940 + 20)) /* [rsp+54h] */
#define fraction (*(float (*))(void *)(sr_frame_1400DC940 + 24)) /* [rsp+58h] */
#define state_address_13 (*(float (*))(void *)(sr_frame_1400DC940 + 28)) /* [rsp+5Ch] */
#define saved_state_address_11 (*(float (*))(void *)(sr_frame_1400DC940 + 32)) /* [rsp+60h] */
#define weighted_sum_31 (*(float (*))(void *)(sr_frame_1400DC940 + 36)) /* [rsp+64h] */
#define normal (*(float (*))(void *)(sr_frame_1400DC940 + 40)) /* [rsp+68h] */
#define frame_word_at_44 (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 44)) /* [rsp+6Ch] */
#define saved_scaled_ratio (*(float (*))(void *)(sr_frame_1400DC940 + 48)) /* [rsp+70h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_1400DC940 + 56)) /* [rsp+78h] */
#define saved_state_address_12 (*(float (*))(void *)(sr_frame_1400DC940 + 64)) /* [rsp+80h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400DC940 + 68)) /* [rsp+84h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400DC940 + 72)) /* [rsp+88h] */
#define saved_state_address_13 (*(float (*))(void *)(sr_frame_1400DC940 + 80)) /* [rsp+90h] */
#define unused_written_slot_3 (*(float (*))(void *)(sr_frame_1400DC940 + 84)) /* [rsp+94h] */
#define unused_written_slot_4 (*(float (*))(void *)(sr_frame_1400DC940 + 88)) /* [rsp+98h] */
#define point (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 96)) /* [rsp+A0h] */
#define frame_word_at_100 (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 100)) /* [rsp+A4h] */
#define frame_word_at_104 (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 104)) /* [rsp+A8h] */
#define saved_component_delta_2 (*(float (*))(void *)(sr_frame_1400DC940 + 112)) /* [rsp+B0h] */
#define saved_component_delta_3 (*(float (*))(void *)(sr_frame_1400DC940 + 116)) /* [rsp+B4h] */
#define component_delta_10 (*(float (*))(void *)(sr_frame_1400DC940 + 120)) /* [rsp+B8h] */
#define component_delta_11 (*(float (*))(void *)(sr_frame_1400DC940 + 124)) /* [rsp+BCh] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_1400DC940 + 128)) /* [rsp+C0h] */
#define state_address_14 (*(float (*))(void *)(sr_frame_1400DC940 + 136)) /* [rsp+C8h] */
#define unused_written_slot_5 (*(float (*))(void *)(sr_frame_1400DC940 + 140)) /* [rsp+CCh] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_1400DC940 + 144)) /* [rsp+D0h] */
#define component_delta_12 (*(float (*))(void *)(sr_frame_1400DC940 + 152)) /* [rsp+D8h] */
#define cached_scaled_index_2 (*(__int64 (*))(void *)(sr_frame_1400DC940 + 160)) /* [rsp+E0h] */
#define cached_scaled_index_3 (*(__int64 (*))(void *)(sr_frame_1400DC940 + 168)) /* [rsp+E8h] */
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_1400DC940 + 400)) /* [rsp+1D0h] */
#define input_value_3 (*(int (*))(void *)(sr_frame_1400DC940 + 424)) /* [rsp+1E8h] */

  input_value_3 = a4;
  input_value = a1;
  record_word_offset = 5210LL * a1;
  input_value_2 = a1;
  if ( dword_140404A6C[24944 * dword_140404A6C[record_word_offset + 129716710] + 346707717] )
    return sr_collision_ray_vehicle(a1, a2, a3, a4);
  weighted_sum = *(float *)&dword_140404A6C[5210 * a1 + 129716753];
  if ( *a2 < weighted_sum && weighted_sum > *a3 )
    return 0;
  source_component_y = a2[1];
  weighted_sum_2 = *(float *)&dword_140404A6C[5210 * a1 + 129716754];
  if ( source_component_y < weighted_sum_2 && weighted_sum_2 > a3[1] )
    return 0;
  source_component_z = a2[2];
  weighted_sum_3 = *(float *)&dword_140404A6C[5210 * a1 + 129716755];
  if ( source_component_z < weighted_sum_3 && weighted_sum_3 > a3[2] )
    return 0;
  weighted_sum_4 = *(float *)&dword_140404A6C[5210 * a1 + 129716756];
  if ( *a2 > weighted_sum_4 && weighted_sum_4 < *a3 )
    return 0;
  weighted_sum_5 = *(float *)&dword_140404A6C[5210 * a1 + 129716757];
  if ( source_component_y > weighted_sum_5 && weighted_sum_5 < a3[1] )
    return 0;
  weighted_sum_6 = *(float *)&dword_140404A6C[5210 * a1 + 129716758];
  if ( source_component_z > weighted_sum_6 && weighted_sum_6 < a3[2] )
    return 0;
  scaled_index = dword_140404A6C[5210 * a1 + 129717219];
  element_index = 0;
  *(unsigned int *)&world_unknown_151a84898 = 1065353216;
  iteration_count = 0;
  cached_scaled_index = scaled_index;
  if ( scaled_index > 0 )
  {
    record_byte_offset = &dword_140404A6C[record_word_offset + 129717225];
    while ( (int)record_byte_offset[10] <= 0 )
    {
LABEL_58:
      ++iteration_count;
      record_byte_offset += 16;
      if ( iteration_count >= scaled_index )
      {
        a4 = input_value_3;
        element_index = 0;
        goto LABEL_60;
      }
    }
    scaled_index_2 = (int)*(record_byte_offset - 4);
    scaled_index_3 = 5210 * input_value;
    cached_scaled_index_2 = scaled_index_2;
    scaled_index_4 = 60LL * (int)dword_140404A6C[5210 * input_value + 129716769 + scaled_index_2];
    scaled_index_5 = (int)*record_byte_offset;
    saved_state_address = *(float *)&dword_140404A6C[scaled_index_4 + 73007026];
    saved_state_address_2 = *(float *)&dword_140404A6C[scaled_index_4 + 73007027];
    weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index_4 + 73007028];
    state_address_14 = saved_state_address;
    unused_written_slot_5 = saved_state_address_2;
    saved_weighted_sum_2 = weighted_sum_7;
    if ( (_DWORD)scaled_index_5 != -1 )
    {
      weighted_sum_8 = *((float *)record_byte_offset + 4);
      table_value = (int)dword_140404A6C[scaled_index_3 + 129716769 + scaled_index_5];
      state_address = (float)((float)(*(float *)&dword_140404A6C[60 * table_value + 73007027] - saved_state_address_2) * weighted_sum_8) + saved_state_address_2;
      state_address_14 = (float)((float)(*(float *)&dword_140404A6C[60 * table_value + 73007026] - saved_state_address) * weighted_sum_8) + saved_state_address;
      saved_state_address = state_address_14;
      weighted_sum_9 = *(float *)&dword_140404A6C[60 * table_value + 73007028];
      unused_written_slot_5 = state_address;
      saved_state_address_2 = state_address;
      saved_weighted_sum_2 = (float)((float)(weighted_sum_9 - weighted_sum_7) * weighted_sum_8) + weighted_sum_7;
      weighted_sum_7 = saved_weighted_sum_2;
    }
    scaled_index_6 = (int)*(record_byte_offset - 3);
    scaled_index_7 = 60LL * (int)dword_140404A6C[scaled_index_6 + 129716769 + scaled_index_3];
    table_value_2 = (int)record_byte_offset[1];
    saved_state_address_3 = *(float *)&dword_140404A6C[scaled_index_7 + 73007026];
    saved_state_address_4 = *(float *)&dword_140404A6C[scaled_index_7 + 73007027];
    weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index_7 + 73007028];
    state_address_13 = saved_state_address_3;
    saved_state_address_13 = saved_state_address_3;
    saved_state_address_11 = saved_state_address_4;
    unused_written_slot_3 = saved_state_address_4;
    weighted_sum_31 = weighted_sum_10;
    unused_written_slot_4 = weighted_sum_10;
    if ( (_DWORD)table_value_2 != -1 )
    {
      weighted_sum_11 = *((float *)record_byte_offset + 5);
      table_value_3 = (int)dword_140404A6C[scaled_index_3 + 129716769 + table_value_2];
      state_address_2 = (float)((float)(*(float *)&dword_140404A6C[60 * table_value_3 + 73007027] - saved_state_address_4) * weighted_sum_11) + saved_state_address_4;
      state_address_13 = (float)((float)(*(float *)&dword_140404A6C[60 * table_value_3 + 73007026] - saved_state_address_3) * weighted_sum_11) + saved_state_address_3;
      saved_state_address_3 = state_address_13;
      saved_state_address_13 = state_address_13;
      weighted_sum_12 = *(float *)&dword_140404A6C[60 * table_value_3 + 73007028];
      saved_state_address_4 = state_address_2;
      saved_state_address_11 = state_address_2;
      unused_written_slot_3 = state_address_2;
      weighted_sum_31 = (float)((float)(weighted_sum_12 - weighted_sum_10) * weighted_sum_11) + weighted_sum_10;
      weighted_sum_10 = weighted_sum_31;
      unused_written_slot_4 = weighted_sum_31;
    }
    scaled_index_8 = (int)*(record_byte_offset - 2);
    cached_scaled_index_3 = scaled_index_8;
    scaled_index_9 = 60LL * (int)dword_140404A6C[scaled_index_8 + 129716769 + scaled_index_3];
    table_value_4 = (int)record_byte_offset[2];
    saved_state_address_5 = *(float *)&dword_140404A6C[scaled_index_9 + 73007026];
    saved_state_address_6 = *(float *)&dword_140404A6C[scaled_index_9 + 73007027];
    weighted_sum_13 = *(float *)&dword_140404A6C[scaled_index_9 + 73007028];
    state_address_12 = saved_state_address_5;
    saved_state_address_12 = saved_state_address_5;
    saved_state_address_9 = saved_state_address_6;
    unused_written_slot = saved_state_address_6;
    saved_weighted_sum_3 = weighted_sum_13;
    unused_written_slot_2 = weighted_sum_13;
    if ( (_DWORD)table_value_4 != -1 )
    {
      weighted_sum_14 = *((float *)record_byte_offset + 6);
      table_value_5 = (int)dword_140404A6C[scaled_index_3 + 129716769 + table_value_4];
      state_address_3 = (float)((float)(*(float *)&dword_140404A6C[60 * table_value_5 + 73007027] - saved_state_address_6) * weighted_sum_14) + saved_state_address_6;
      state_address_12 = (float)((float)(*(float *)&dword_140404A6C[60 * table_value_5 + 73007026] - saved_state_address_5) * weighted_sum_14) + saved_state_address_5;
      saved_state_address_5 = state_address_12;
      saved_state_address_12 = state_address_12;
      weighted_sum_15 = *(float *)&dword_140404A6C[60 * table_value_5 + 73007028];
      saved_state_address_6 = state_address_3;
      saved_state_address_9 = state_address_3;
      unused_written_slot = state_address_3;
      saved_weighted_sum_3 = (float)((float)(weighted_sum_15 - weighted_sum_13) * weighted_sum_14) + weighted_sum_13;
      weighted_sum_13 = saved_weighted_sum_3;
      unused_written_slot_2 = saved_weighted_sum_3;
    }
    component_delta = saved_state_address_4 - saved_state_address_2;
    component_delta_2 = weighted_sum_10 - weighted_sum_7;
    saved_component_delta_3 = component_delta;
    component_delta_3 = saved_state_address_6 - saved_state_address_2;
    saved_component_delta_2 = component_delta_2;
    component_delta_12 = weighted_sum_13 - weighted_sum_7;
    component_delta_10 = saved_state_address_3 - saved_state_address;
    component_delta_11 = saved_state_address_5 - saved_state_address;
    product_difference = (float)((float)(saved_state_address_6 - saved_state_address_2) * component_delta_2) - (float)((float)(weighted_sum_13 - weighted_sum_7) * component_delta);
    product_difference_2 = (float)((float)(weighted_sum_13 - weighted_sum_7) * component_delta_10) - (float)(component_delta_2 * (float)(saved_state_address_5 - saved_state_address));
    product_difference_9 = (float)(component_delta * (float)(saved_state_address_5 - saved_state_address)) - (float)((float)(saved_state_address_6 - saved_state_address_2) * component_delta_10);
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_9 * product_difference_9));
    if ( square_root == 0.0 )
    {
      normal = 0.0;
      scaled_ratio_2 = 0.0;
      saved_scaled_ratio = 0.0;
      scaled_ratio_3 = 0.0;
      scaled_ratio = 0.0;
    }
    else
    {
      scaled_ratio = (float)(1.0 / square_root) * product_difference_9;
      scaled_ratio_2 = (float)(1.0 / square_root) * product_difference;
      saved_scaled_ratio = scaled_ratio;
      scaled_ratio_3 = (float)(1.0 / square_root) * product_difference_2;
      normal = scaled_ratio_2;
    }
    scaled_value = *a3;
    component_delta_4 = weighted_sum_7 - a3[2];
    source_component_y_3 = a3[1];
    source_component_z_4 = a3[2];
    frame_word_at_44 = LODWORD(scaled_ratio_3);
    combined_products = (float)((float)((float)(saved_state_address_2 - source_component_y_3) * scaled_ratio_3) + (float)((float)(saved_state_address - scaled_value) * scaled_ratio_2)) + (float)(component_delta_4 * scaled_ratio);
    combined_products_2 = (float)((float)((float)(saved_state_address_2 - a2[1]) * scaled_ratio_3) + (float)((float)(saved_state_address - *a2) * scaled_ratio_2))
        + (float)((float)(weighted_sum_7 - a2[2]) * scaled_ratio);
    if ( combined_products_2 <= 0.0 )
    {
      if ( combined_products_2 < 0.0 && combined_products < 0.0 )
        goto LABEL_40;
    }
    else if ( combined_products > 0.0 )
    {
      goto LABEL_40;
    }
    component_delta_5 = source_component_y_3 - a2[1];
    component_delta_6 = source_component_z_4 - a2[2];
    product_difference_3 = scaled_value - *a2;
    fraction = (float)((float)((float)(saved_state_address_2 - a2[1]) * scaled_ratio_3) + (float)((float)(saved_state_address - *a2) * scaled_ratio_2))
         + (float)((float)(weighted_sum_7 - a2[2]) * scaled_ratio);
    saved_component_delta = component_delta_5;
    weighted_sum_16 = (float)((float)(component_delta_5 * scaled_ratio_3) + (float)(product_difference_3 * scaled_ratio_2)) + (float)(component_delta_6 * scaled_ratio);
    if ( weighted_sum_16 != 0.0 )
    {
      scaled_ratio_4 = combined_products_2 / weighted_sum_16;
      fraction = scaled_ratio_4;
      weighted_sum_17 = (float)(scaled_ratio_4 * component_delta_6) + a2[2];
      weighted_sum_18 = (float)(scaled_ratio_4 * saved_component_delta) + a2[1];
      weighted_sum_30 = (float)(scaled_ratio_4 * product_difference_3) + *a2;
      point = LODWORD(weighted_sum_30);
      frame_word_at_104 = LODWORD(weighted_sum_17);
      frame_word_at_100 = LODWORD(weighted_sum_18);
      if ( (float)((float)((float)((float)((float)(saved_component_delta_2 * (float)(weighted_sum_18 - saved_state_address_2)) - (float)(saved_component_delta_3 * (float)(weighted_sum_17 - weighted_sum_7))) * scaled_ratio_2)
                         + (float)((float)((float)(component_delta_10 * (float)(weighted_sum_17 - weighted_sum_7)) - (float)(saved_component_delta_2 * (float)(weighted_sum_30 - saved_state_address)))
                                 * scaled_ratio_3))
                 + (float)((float)((float)(saved_component_delta_3 * (float)(weighted_sum_30 - saved_state_address)) - (float)(component_delta_10 * (float)(weighted_sum_18 - saved_state_address_2))) * scaled_ratio)) >= 0.0 )
      {
        if ( (float)((float)((float)((float)((float)((float)(weighted_sum_17 - weighted_sum_31) * (float)(saved_state_address_5 - state_address_13))
                                           - (float)((float)(saved_weighted_sum_3 - weighted_sum_31) * (float)(weighted_sum_30 - state_address_13)))
                                   * scaled_ratio_3)
                           + (float)((float)((float)((float)(saved_weighted_sum_3 - weighted_sum_31) * (float)(weighted_sum_18 - saved_state_address_11))
                                           - (float)((float)(saved_state_address_6 - saved_state_address_11) * (float)(weighted_sum_17 - weighted_sum_31)))
                                   * scaled_ratio_2))
                   + (float)((float)((float)((float)(saved_state_address_6 - saved_state_address_11) * (float)(weighted_sum_30 - state_address_13))
                                   - (float)((float)(weighted_sum_18 - saved_state_address_11) * (float)(saved_state_address_5 - state_address_13)))
                           * scaled_ratio)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(weighted_sum_7 - saved_weighted_sum_3) * (float)(weighted_sum_18 - saved_state_address_9))
                                           - (float)((float)(saved_state_address_2 - saved_state_address_9) * (float)(weighted_sum_17 - saved_weighted_sum_3)))
                                   * scaled_ratio_2)
                           + (float)((float)((float)((float)(saved_state_address - state_address_12) * (float)(weighted_sum_17 - saved_weighted_sum_3))
                                           - (float)((float)(weighted_sum_7 - saved_weighted_sum_3) * (float)(weighted_sum_30 - state_address_12)))
                                   * scaled_ratio_3))
                   + (float)((float)((float)((float)(saved_state_address_2 - saved_state_address_9) * (float)(weighted_sum_30 - state_address_12))
                                   - (float)((float)(saved_state_address - state_address_12) * (float)(weighted_sum_18 - saved_state_address_9)))
                           * scaled_ratio)) >= 0.0
          && scaled_ratio_4 < (world_unknown_151a84898) )
        {
          *(float *)&g_151A84880 = weighted_sum_30;
          (ragdoll_unknown_height) = weighted_sum_18;
          scaled_index_10 = scaled_index_3 + (int)dword_140404A6C[4 * scaled_index_2 + 129719656 + record_word_offset];
          *(float *)&g_151A84888 = weighted_sum_17;
          g_151A8488C = scaled_ratio_2;
          g_151A84890 = scaled_ratio_3;
          g_151A84894 = scaled_ratio;
          g_151A848B4 = dword_140404A6C[scaled_index_10 + 129716769];
          scaled_index_11 = (int)dword_140404A6C[4 * scaled_index_6 + 129719656 + record_word_offset];
          (world_unknown_151a84898) = scaled_ratio_4;
          g_151A848B0 = iteration_count;
          g_151A848B8 = dword_140404A6C[scaled_index_3 + 129716769 + scaled_index_11];
          g_151A848BC = dword_140404A6C[scaled_index_3 + 129716769 + (int)dword_140404A6C[4 * scaled_index_8 + 129719656 + record_word_offset]];
          sr_collision_triangle_weights((float *)(unsigned int *)&g_151A848C4, (float *)&g_151A84880, &state_address_14, &saved_state_address_13, &saved_state_address_12);
          scaled_index = cached_scaled_index;
          scaled_index_12 = 60LL * (int)g_151A848B4;
          scaled_index_13 = 60LL * (int)g_151A848B8;
          scaled_index_14 = 60LL * (int)g_151A848BC;
          state_address_4 = (float)(g_151A848C4 * *(float *)&dword_140404A6C[scaled_index_12 + 73007032])
              + (float)(g_151A848C8 * *(float *)&dword_140404A6C[scaled_index_13 + 73007032]);
          weighted_sum_19 = g_151A848C4 * *(float *)&dword_140404A6C[scaled_index_12 + 73007033];
          state_address_5 = (float)(g_151A848C8 * *(float *)&dword_140404A6C[scaled_index_13 + 73007034])
              + (float)(g_151A848C4 * *(float *)&dword_140404A6C[scaled_index_12 + 73007034]);
          scaled_index_2 = cached_scaled_index_2;
          weighted_sum_20 = g_151A848CC * *(float *)&dword_140404A6C[scaled_index_14 + 73007033];
          weighted_sum_21 = g_151A848CC * *(float *)&dword_140404A6C[scaled_index_14 + 73007034];
          state_address_6 = (float)(g_151A848C8 * *(float *)&dword_140404A6C[scaled_index_13 + 73007033]) + weighted_sum_19;
          scaled_index_8 = cached_scaled_index_3;
          *(float *)&g_151A848A0 = state_address_4
                                               + (float)(g_151A848CC
                                                       * *(float *)&dword_140404A6C[scaled_index_14 + 73007032]);
          *(float *)&g_151A848A8 = state_address_5 + weighted_sum_21;
          g_151A848A4 = state_address_6 + weighted_sum_20;
        }
        saved_state_address_6 = saved_state_address_9;
        saved_state_address_5 = state_address_12;
      }
      weighted_sum_13 = saved_weighted_sum_3;
    }
LABEL_40:
    if ( *(record_byte_offset - 5) == 4 )
    {
      scaled_index_15 = (int)*(record_byte_offset - 1);
      saved_state_address_13 = saved_state_address_5;
      unused_written_slot_3 = saved_state_address_6;
      unused_written_slot_4 = weighted_sum_13;
      scaled_index_16 = 60LL * (int)dword_140404A6C[scaled_index_15 + 129716769 + scaled_index_3];
      table_value_6 = (int)record_byte_offset[3];
      saved_state_address_7 = *(float *)&dword_140404A6C[scaled_index_16 + 73007026];
      saved_state_address_8 = *(float *)&dword_140404A6C[scaled_index_16 + 73007027];
      weighted_sum_22 = *(float *)&dword_140404A6C[scaled_index_16 + 73007028];
      state_address_11 = saved_state_address_7;
      saved_state_address_12 = saved_state_address_7;
      saved_state_address_10 = saved_state_address_8;
      unused_written_slot = saved_state_address_8;
      saved_weighted_sum = weighted_sum_22;
      unused_written_slot_2 = weighted_sum_22;
      if ( (_DWORD)table_value_6 != -1 )
      {
        weighted_sum_23 = *((float *)record_byte_offset + 7);
        table_value_7 = (int)dword_140404A6C[scaled_index_3 + 129716769 + table_value_6];
        state_address_7 = (float)((float)(*(float *)&dword_140404A6C[60 * table_value_7 + 73007027] - saved_state_address_8) * weighted_sum_23) + saved_state_address_8;
        state_address_11 = (float)((float)(*(float *)&dword_140404A6C[60 * table_value_7 + 73007026] - saved_state_address_7) * weighted_sum_23) + saved_state_address_7;
        saved_state_address_7 = state_address_11;
        saved_state_address_12 = state_address_11;
        weighted_sum_24 = *(float *)&dword_140404A6C[60 * table_value_7 + 73007028];
        saved_state_address_8 = state_address_7;
        saved_state_address_10 = state_address_7;
        unused_written_slot = state_address_7;
        saved_weighted_sum = (float)((float)(weighted_sum_24 - weighted_sum_22) * weighted_sum_23) + weighted_sum_22;
        weighted_sum_22 = saved_weighted_sum;
        unused_written_slot_2 = saved_weighted_sum;
      }
      component_delta_7 = saved_state_address_7 - saved_state_address;
      product_difference_4 = (float)(component_delta_12 * (float)(saved_state_address_8 - saved_state_address_2)) - (float)(component_delta_3 * (float)(weighted_sum_22 - weighted_sum_7));
      product_difference_5 = (float)(component_delta_3 * component_delta_7) - (float)(component_delta_11 * (float)(saved_state_address_8 - saved_state_address_2));
      product_difference_6 = (float)(component_delta_11 * (float)(weighted_sum_22 - weighted_sum_7)) - (float)(component_delta_12 * component_delta_7);
      square_root_2 = fsqrt((float)((float)(product_difference_6 * product_difference_6) + (float)(product_difference_4 * product_difference_4)) + (float)(product_difference_5 * product_difference_5));
      if ( square_root_2 == 0.0 )
      {
        normal = 0.0;
        scaled_ratio_5 = 0.0;
        frame_word_at_44 = 0;
        scaled_ratio_6 = 0.0;
        saved_scaled_ratio = 0.0;
        scaled_ratio_7 = 0.0;
      }
      else
      {
        scaled_ratio_5 = product_difference_4 * (float)(1.0 / square_root_2);
        scaled_ratio_6 = product_difference_6 * (float)(1.0 / square_root_2);
        scaled_ratio_7 = product_difference_5 * (float)(1.0 / square_root_2);
        normal = scaled_ratio_5;
        frame_word_at_44 = LODWORD(scaled_ratio_6);
        saved_scaled_ratio = scaled_ratio_7;
      }
      source_component_y_2 = a3[1];
      source_component_z_2 = a3[2];
      combined_products_3 = (float)((float)((float)(saved_state_address_2 - source_component_y_2) * scaled_ratio_6) + (float)((float)(saved_state_address - *a3) * scaled_ratio_5))
           + (float)((float)(weighted_sum_7 - source_component_z_2) * scaled_ratio_7);
      source_component_z_3 = a2[2];
      product_difference_7 = (float)(weighted_sum_7 - source_component_z_3) * scaled_ratio_7;
      combined_products_4 = (float)((float)((float)(saved_state_address_2 - a2[1]) * scaled_ratio_6) + (float)((float)(saved_state_address - *a2) * scaled_ratio_5)) + product_difference_7;
      if ( combined_products_4 <= 0.0 )
      {
        if ( combined_products_4 < 0.0 && combined_products_3 < 0.0 )
          goto LABEL_57;
      }
      else if ( combined_products_3 > 0.0 )
      {
        goto LABEL_57;
      }
      product_difference_8 = *a3 - *a2;
      component_delta_8 = source_component_y_2 - a2[1];
      component_delta_9 = source_component_z_2 - source_component_z_3;
      fraction = (float)((float)((float)(saved_state_address_2 - a2[1]) * scaled_ratio_6) + (float)((float)(saved_state_address - *a2) * scaled_ratio_5)) + product_difference_7;
      weighted_sum_25 = (float)((float)(component_delta_8 * scaled_ratio_6) + (float)(product_difference_8 * scaled_ratio_5)) + (float)(component_delta_9 * scaled_ratio_7);
      if ( weighted_sum_25 != 0.0 )
      {
        scaled_ratio_8 = combined_products_4 / weighted_sum_25;
        fraction = scaled_ratio_8;
        weighted_sum_26 = (float)(scaled_ratio_8 * component_delta_8) + a2[1];
        weighted_sum_27 = (float)(scaled_ratio_8 * component_delta_9) + a2[2];
        weighted_sum_31 = (float)(scaled_ratio_8 * product_difference_8) + *a2;
        point = LODWORD(weighted_sum_31);
        state_address_13 = weighted_sum_27;
        frame_word_at_104 = LODWORD(weighted_sum_27);
        saved_state_address_11 = weighted_sum_26;
        frame_word_at_100 = LODWORD(weighted_sum_26);
        if ( (float)((float)((float)((float)((float)((float)(weighted_sum_27 - weighted_sum_7) * component_delta_11)
                                           - (float)((float)(weighted_sum_13 - weighted_sum_7) * (float)(weighted_sum_31 - saved_state_address)))
                                   * scaled_ratio_6)
                           + (float)((float)((float)((float)(weighted_sum_13 - weighted_sum_7) * (float)(weighted_sum_26 - saved_state_address_2))
                                           - (float)((float)(saved_state_address_6 - saved_state_address_2) * (float)(weighted_sum_27 - weighted_sum_7)))
                                   * scaled_ratio_5))
                   + (float)((float)((float)((float)(saved_state_address_6 - saved_state_address_2) * (float)(weighted_sum_31 - saved_state_address))
                                   - (float)((float)(weighted_sum_26 - saved_state_address_2) * component_delta_11))
                           * scaled_ratio_7)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(state_address_13 - saved_weighted_sum_3) * (float)(state_address_11 - state_address_12))
                                           - (float)((float)(saved_weighted_sum - saved_weighted_sum_3) * (float)(weighted_sum_31 - state_address_12)))
                                   * scaled_ratio_6)
                           + (float)((float)((float)((float)(saved_weighted_sum - saved_weighted_sum_3) * (float)(saved_state_address_11 - saved_state_address_9))
                                           - (float)((float)(saved_state_address_10 - saved_state_address_9) * (float)(state_address_13 - saved_weighted_sum_3)))
                                   * scaled_ratio_5))
                   + (float)((float)((float)((float)(saved_state_address_10 - saved_state_address_9) * (float)(weighted_sum_31 - state_address_12))
                                   - (float)((float)(saved_state_address_11 - saved_state_address_9) * (float)(state_address_11 - state_address_12)))
                           * scaled_ratio_7)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(saved_state_address - state_address_11) * (float)(state_address_13 - saved_weighted_sum))
                                           - (float)((float)(weighted_sum_7 - saved_weighted_sum) * (float)(weighted_sum_31 - state_address_11)))
                                   * scaled_ratio_6)
                           + (float)((float)((float)((float)(weighted_sum_7 - saved_weighted_sum) * (float)(saved_state_address_11 - saved_state_address_10))
                                           - (float)((float)(saved_state_address_2 - saved_state_address_10) * (float)(state_address_13 - saved_weighted_sum)))
                                   * scaled_ratio_5))
                   + (float)((float)((float)((float)(saved_state_address_2 - saved_state_address_10) * (float)(weighted_sum_31 - state_address_11))
                                   - (float)((float)(saved_state_address - state_address_11) * (float)(saved_state_address_11 - saved_state_address_10)))
                           * scaled_ratio_7)) >= 0.0
          && scaled_ratio_8 < (world_unknown_151a84898) )
        {
          *(float *)&g_151A84880 = weighted_sum_31;
          (ragdoll_unknown_height) = saved_state_address_11;
          *(float *)&g_151A84888 = state_address_13;
          g_151A8488C = scaled_ratio_5;
          g_151A84890 = scaled_ratio_6;
          scaled_index_17 = (int)dword_140404A6C[4 * scaled_index_2 + 129719656 + record_word_offset];
          g_151A84894 = scaled_ratio_7;
          (world_unknown_151a84898) = scaled_ratio_8;
          g_151A848B0 = iteration_count;
          g_151A848B4 = dword_140404A6C[scaled_index_3 + 129716769 + scaled_index_17];
          g_151A848B8 = dword_140404A6C[scaled_index_3 + 129716769 + (int)dword_140404A6C[4 * scaled_index_8 + 129719656 + record_word_offset]];
          g_151A848BC = dword_140404A6C[scaled_index_3 + 129716769 + (int)dword_140404A6C[4 * scaled_index_15 + 129719656 + record_word_offset]];
          sr_collision_triangle_weights((float *)(unsigned int *)&g_151A848C4, (float *)&g_151A84880, &state_address_14, &saved_state_address_13, &saved_state_address_12);
          scaled_index = cached_scaled_index;
          scaled_index_18 = 60LL * (int)g_151A848B4;
          scaled_index_19 = 60LL * (int)g_151A848B8;
          scaled_index_20 = 60LL * (int)g_151A848BC;
          state_address_8 = (float)(g_151A848C8 * *(float *)&dword_140404A6C[scaled_index_19 + 73007034])
               + (float)(g_151A848C4 * *(float *)&dword_140404A6C[scaled_index_18 + 73007034]);
          weighted_sum_28 = g_151A848CC * *(float *)&dword_140404A6C[scaled_index_20 + 73007033];
          weighted_sum_29 = g_151A848CC * *(float *)&dword_140404A6C[scaled_index_20 + 73007034];
          state_address_9 = (float)(g_151A848C8 * *(float *)&dword_140404A6C[scaled_index_19 + 73007033])
               + (float)(g_151A848C4 * *(float *)&dword_140404A6C[scaled_index_18 + 73007033]);
          *(float *)&g_151A848A0 = (float)((float)(g_151A848C8
                                                               * *(float *)&dword_140404A6C[scaled_index_19 + 73007032])
                                                       + (float)(g_151A848C4
                                                               * *(float *)&dword_140404A6C[scaled_index_18 + 73007032]))
                                               + (float)(g_151A848CC
                                                       * *(float *)&dword_140404A6C[scaled_index_20 + 73007032]);
          *(float *)&g_151A848A8 = state_address_8 + weighted_sum_29;
          g_151A848A4 = state_address_9 + weighted_sum_28;
        }
      }
    }
LABEL_57:
    input_value = input_value_2;
    goto LABEL_58;
  }
LABEL_60:
  if ( a4 && (int)dword_140404A6C[record_word_offset + 129720373] > 0 )
  {
    state_address_10 = (float *)&dword_140404A6C[record_word_offset + 129720387];
    do
    {
      if ( (unsigned int)sr_collision_ray_sphere(
                           (float *)&point,
                           &normal,
                           &fraction,
                           a2,
                           a3,
                           (float *)&dword_140404A6C[43 * element_index + 129720393 + record_word_offset],
                           *state_address_10) )
      {
        if ( fraction < (world_unknown_151a84898) )
        {
          g_151A84880 = point;
          *(unsigned int *)&ragdoll_unknown_height = frame_word_at_100;
          g_151A84888 = frame_word_at_104;
          g_151A8488C = normal;
          *(unsigned int *)&g_151A84890 = frame_word_at_44;
          g_151A84894 = saved_scaled_ratio;
          (world_unknown_151a84898) = fraction;
          g_151A848B0 = -1;
          g_151A848B4 = element_index;
        }
      }
      ++element_index;
      state_address_10 += 43;
    }
    while ( element_index < (int)dword_140404A6C[record_word_offset + 129720373] );
  }
  return (world_unknown_151a84898) < 1.0;
}
#undef source_component_z_4
#undef saved_weighted_sum
#undef product_difference_9
#undef weighted_sum_30
#undef state_address_11
#undef state_address_12
#undef saved_state_address_9
#undef source_component_y_3
#undef saved_component_delta
#undef saved_state_address_10
#undef fraction
#undef state_address_13
#undef saved_state_address_11
#undef weighted_sum_31
#undef normal
#undef frame_word_at_44
#undef saved_scaled_ratio
#undef input_value_2
#undef saved_state_address_12
#undef unused_written_slot
#undef unused_written_slot_2
#undef saved_state_address_13
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef point
#undef frame_word_at_100
#undef frame_word_at_104
#undef saved_component_delta_2
#undef saved_component_delta_3
#undef component_delta_10
#undef component_delta_11
#undef cached_scaled_index
#undef state_address_14
#undef unused_written_slot_5
#undef saved_weighted_sum_2
#undef component_delta_12
#undef cached_scaled_index_2
#undef cached_scaled_index_3
#undef saved_weighted_sum_3
#undef input_value_3

//----- (00000001400E21F0) ----------------------------------------------------
__int64            sub_1400E21F0(int a1, float *a2, float *a3)
{
  float scaled_value;
  float *to;
  __int64 record_word_offset;
  float *from;
  float weighted_sum;
  float weighted_sum_2;
  float source_component_y;
  float weighted_sum_3;
  float source_component_z;
  float weighted_sum_4;
  float weighted_sum_5;
  float float_word;
  __int64 loaded_word;
  __int64 loaded_word_2;
  signed int iteration_count;
  __int64 loaded_word_3;
  __int64 scaled_index;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  signed __int64 saved_t;
  signed __int64 saved_masked_bits;
  signed __int64 saved_masked_bits_2;
  unsigned __int64 integer_difference;
  signed __int64 saved_masked_bits_3;
  signed __int64 masked_bits;
  signed __int64 masked_bits_2;
  signed __int64 masked_bits_3;
  signed __int64 masked_bits_4;
  float *record_byte_offset;
  signed __int64 saved_masked_bits_4;
  __int64 remaining_count;
  signed __int64 saved_masked_bits_5;
  float product_difference;
  float source_component_y_2;
  float scaled_value_2;
  float source_component_w;
  float weighted_sum_15;
  float weighted_sum_16;
  float scaled_value_3;
  float source_component_z_2;
  float scaled_value_4;
  float source_float_4;
  float component_sum;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  float scaled_value_5;
  float source_float_6;
  float weighted_sum_20;
  float weighted_sum_21;
  float scaled_value_6;
  float source_float_5;
  float scaled_value_7;
  float source_float_7;
  float component_sum_2;
  float weighted_sum_22;
  float weighted_sum_23;
  float scaled_value_8;
  float source_float_8;
  float weighted_sum_24;
  float scaled_value_9;
  float source_float_9;
  float weighted_sum_25;
  float weighted_sum_26;
  float source_float_10;
  float component_sum_3;
  signed __int64 saved_masked_bits_6;
  float weighted_sum_27;
  signed __int64 saved_masked_bits_7;
  float weighted_sum_28;
  float weighted_sum_29;
  float weighted_sum_30;
  float weighted_sum_31;
  float weighted_sum_32;
  float weighted_sum_33;
  float weighted_sum_34;
  float weighted_sum_35;
  float weighted_sum_36;
  float weighted_sum_37;
  float *running_total;
  __int64 remaining_count_2;
  float product_difference_2;
  float scaled_value_10;
  float source_component_y_3;
  float weighted_sum_38;
  float weighted_sum_39;
  float weighted_sum_40;
  int *state_address;
  __int64 scaled_index_2;
  __int64 loaded_word_4;
  float packed_word_bits;
  float packed_word_bits_2;
  float weighted_sum_41;
  float combined_products;
  float weighted_sum_42;
  __int64 table_value;
  float component_delta;
  float combined_products_2;
  float component_delta_2;
  float combined_products_3;
  float weighted_sum_43;
  float combined_products_4;
  float combined_products_5;
  float component_delta_3;
  float combined_products_6;
  float product_difference_3;
  float combined_products_7;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  __int64 table_value_2;
  float combined_products_8;
  float weighted_sum_44;
  float combined_products_9;
  float component_delta_4;
  float combined_products_10;
  float product_difference_4;
  float combined_products_11;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  _Alignas(8) unsigned char sr_mesh_normal[16];
  _Alignas(8) unsigned char sr_mesh_third[16];
  _Alignas(8) unsigned char sr_mesh_hit[16];
  _Alignas(8) unsigned char sr_mesh_second[16];
  _Alignas(8) unsigned char sr_mesh_first[16];
  _Alignas(16) unsigned char sr_mesh_vertices[3072];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E21F0[3312];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400E21F0 + 0)) /* [rsp+8h] */
#define t (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 112)) /* [rsp+78h] */
#define masked_bits_5 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 152)) /* [rsp+A0h] */
#define masked_bits_6 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 160)) /* [rsp+A8h] */
#define masked_bits_7 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 168)) /* [rsp+B0h] */
#define masked_bits_8 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 176)) /* [rsp+B8h] */
#define masked_bits_9 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 184)) /* [rsp+C0h] */
#define masked_bits_10 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 192)) /* [rsp+C8h] */
#define masked_bits_11 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 200)) /* [rsp+D0h] */
#define cached_scaled_index (*(__int64 (*))(void *)(sr_frame_1400E21F0 + 208)) /* [rsp+D8h] */
#define unused_frame_slot_3296 (*(__int64 (*))(void *)(sr_frame_1400E21F0 + 3296)) /* [rsp+CE8h] */

  scaled_value = *a2;
  to = a3;
  record_word_offset = 5210LL * a1;
  (*(float * *)(void *)sr_mesh_second) = a3;
  from = a2;
  (*(float * *)(void *)sr_mesh_hit) = a2;
  weighted_sum = *(float *)&dword_140404A6C[record_word_offset + 129716753];
  if ( scaled_value < weighted_sum && weighted_sum > *a3 )
    return 0;
  weighted_sum_2 = *(float *)&dword_140404A6C[record_word_offset + 129716754];
  source_component_y = a2[1];
  if ( source_component_y < weighted_sum_2 && weighted_sum_2 > a3[1] )
    return 0;
  weighted_sum_3 = *(float *)&dword_140404A6C[record_word_offset + 129716755];
  source_component_z = a2[2];
  if ( source_component_z < weighted_sum_3 && weighted_sum_3 > a3[2] )
    return 0;
  weighted_sum_4 = *(float *)&dword_140404A6C[record_word_offset + 129716756];
  if ( scaled_value > weighted_sum_4 && weighted_sum_4 < *a3 )
    return 0;
  weighted_sum_5 = *(float *)&dword_140404A6C[record_word_offset + 129716757];
  if ( source_component_y > weighted_sum_5 && weighted_sum_5 < a3[1] )
    return 0;
  float_word = *(float *)&dword_140404A6C[record_word_offset + 129716758];
  if ( source_component_z > float_word && float_word < a3[2] )
    return 0;
  loaded_word = (int)dword_140404A6C[record_word_offset + 129716710];
  loaded_word_2 = 180288 * loaded_word;
  iteration_count = 0;
  *(unsigned int *)&world_unknown_151a84898 = 1065353216;
  (*(__int64 *)(void *)sr_mesh_normal) = loaded_word;
  loaded_word_3 = 0;
  (*(__int64 *)(void *)sr_mesh_third) = 180288 * loaded_word;
  scaled_index = (int)dword_140404A6C[45072 * loaded_word + 335161466];
  cached_scaled_index = scaled_index;
  if ( scaled_index < 4 )
  {
    if ( scaled_index <= 0 )
      goto LABEL_19;
    goto LABEL_17;
  }
  weighted_sum_6 = *(float *)&dword_140404A6C[record_word_offset + 129716726];
  weighted_sum_7 = *(float *)&dword_140404A6C[record_word_offset + 129716720];
  weighted_sum_8 = *(float *)&dword_140404A6C[record_word_offset + 129716727];
  weighted_sum_9 = *(float *)&dword_140404A6C[record_word_offset + 129716721];
  weighted_sum_10 = *(float *)&dword_140404A6C[record_word_offset + 129716728];
  weighted_sum_11 = *(float *)&dword_140404A6C[record_word_offset + 129716722];
  weighted_sum_12 = *(float *)&dword_140404A6C[record_word_offset + 129716729];
  weighted_sum_13 = *(float *)&dword_140404A6C[record_word_offset + 129716730];
  weighted_sum_14 = *(float *)&dword_140404A6C[record_word_offset + 129716731];
  t = &(sr_mesh_vertices+28)[-loaded_word_2] - (_BYTE *)&g_19028EC5C;
  saved_t = t;
  masked_bits_7 = (char *)&(*(int *)(void *)(sr_mesh_vertices+0)) - loaded_word_2 - (char *)&g_19028EC5C;
  masked_bits_5 = &(sr_mesh_vertices+32)[-loaded_word_2] - (_BYTE *)&g_19028EC5C;
  saved_masked_bits = masked_bits_5;
  masked_bits_8 = &(sr_mesh_vertices+12)[-loaded_word_2] - (_BYTE *)&g_19028EC5C;
  masked_bits_6 = &(sr_mesh_vertices+40)[-loaded_word_2] - (_BYTE *)&g_19028EC5C;
  saved_masked_bits_2 = masked_bits_6;
  masked_bits_9 = &(*(char *)(sr_mesh_vertices+24)) - loaded_word_2 - (char *)&g_19028EC5C;
  masked_bits_11 = &(sr_mesh_vertices+44)[-loaded_word_2] - (_BYTE *)&g_19028EC5C;
  integer_difference = scaled_index - 4;
  saved_masked_bits_3 = masked_bits_8;
  masked_bits = (char *)&(*(int *)(void *)(sr_mesh_vertices+4)) - loaded_word_2 - (char *)&g_19028EC5C;
  masked_bits_10 = &(*(char *)(sr_mesh_vertices+36)) - loaded_word_2 - (char *)&g_19028EC5C;
  masked_bits_2 = &(sr_mesh_vertices+12)[-loaded_word_2 - 4] - (_BYTE *)&g_19028EC5C;
  masked_bits_3 = &(sr_mesh_vertices+16)[-loaded_word_2] - (_BYTE *)&g_19028EC5C;
  masked_bits_4 = &(sr_mesh_vertices+20)[-loaded_word_2] - (_BYTE *)&g_19028EC5C;
  record_byte_offset = (float *)((char *)&g_19028EC5C + loaded_word_2);
  saved_masked_bits_4 = masked_bits_7;
  remaining_count = (integer_difference >> 2) + 1;
  (*(__int64 *)(void *)sr_mesh_first) = 4 * remaining_count;
  saved_masked_bits_5 = masked_bits_9;
  do
  {
    product_difference = *(record_byte_offset - 1);
    source_component_y_2 = record_byte_offset[1];
    scaled_value_2 = weighted_sum_14 * *record_byte_offset;
    source_component_w = record_byte_offset[3];
    weighted_sum_15 = (float)((float)((float)(weighted_sum_8 * product_difference) + weighted_sum_9) + (float)(weighted_sum_13 * *record_byte_offset))
        + (float)(*(float *)&dword_140404A6C[record_word_offset + 129716733] * source_component_y_2);
    weighted_sum_16 = *(float *)&dword_140404A6C[record_word_offset + 129716734];
    *(float *)((char *)record_byte_offset + saved_masked_bits_4) = (float)((float)((float)(weighted_sum_6 * product_difference) + weighted_sum_7) + (float)(weighted_sum_12 * *record_byte_offset))
                                  + (float)(*(float *)&dword_140404A6C[record_word_offset + 129716732] * source_component_y_2);
    scaled_value_3 = weighted_sum_10 * product_difference;
    source_component_z_2 = record_byte_offset[2];
    scaled_value_4 = weighted_sum_16 * source_component_y_2;
    source_float_4 = record_byte_offset[4];
    *(float *)((char *)record_byte_offset + masked_bits) = weighted_sum_15;
    component_sum = (float)((float)(scaled_value_3 + weighted_sum_11) + scaled_value_2) + scaled_value_4;
    weighted_sum_17 = *(float *)&dword_140404A6C[record_word_offset + 129716732] * source_float_4;
    *(float *)((char *)record_byte_offset + masked_bits_2) = component_sum;
    weighted_sum_18 = (float)((float)((float)(weighted_sum_6 * source_component_z_2) + weighted_sum_7) + (float)(weighted_sum_12 * source_component_w)) + weighted_sum_17;
    weighted_sum_19 = (float)((float)(weighted_sum_8 * source_component_z_2) + weighted_sum_9) + (float)(weighted_sum_13 * source_component_w);
    scaled_value_5 = weighted_sum_14 * source_component_w;
    source_float_6 = record_byte_offset[6];
    weighted_sum_20 = weighted_sum_19 + (float)(*(float *)&dword_140404A6C[record_word_offset + 129716733] * source_float_4);
    weighted_sum_21 = *(float *)&dword_140404A6C[record_word_offset + 129716734];
    *(float *)((char *)record_byte_offset + saved_masked_bits_3) = weighted_sum_18;
    scaled_value_6 = weighted_sum_10 * source_component_z_2;
    source_float_5 = record_byte_offset[5];
    scaled_value_7 = weighted_sum_21 * source_float_4;
    source_float_7 = record_byte_offset[7];
    *(float *)((char *)record_byte_offset + masked_bits_3) = weighted_sum_20;
    component_sum_2 = (float)((float)(scaled_value_6 + weighted_sum_11) + scaled_value_5) + scaled_value_7;
    weighted_sum_22 = *(float *)&dword_140404A6C[record_word_offset + 129716732] * source_float_7;
    *(float *)((char *)record_byte_offset + masked_bits_4) = component_sum_2;
    *(float *)((char *)record_byte_offset + saved_masked_bits_5) = (float)((float)((float)(weighted_sum_6 * source_float_5) + weighted_sum_7) + (float)(weighted_sum_12 * source_float_6)) + weighted_sum_22;
    weighted_sum_23 = (float)(weighted_sum_10 * source_float_5) + weighted_sum_11;
    scaled_value_8 = weighted_sum_8 * source_float_5;
    source_float_8 = record_byte_offset[8];
    weighted_sum_24 = (float)(scaled_value_8 + weighted_sum_9) + (float)(weighted_sum_13 * source_float_6);
    scaled_value_9 = weighted_sum_14 * source_float_6;
    source_float_9 = record_byte_offset[9];
    weighted_sum_25 = weighted_sum_24 + (float)(*(float *)&dword_140404A6C[record_word_offset + 129716733] * source_float_7);
    weighted_sum_26 = *(float *)&dword_140404A6C[record_word_offset + 129716734] * source_float_7;
    source_float_10 = record_byte_offset[10];
    *(float *)((char *)record_byte_offset + saved_t) = weighted_sum_25;
    component_sum_3 = (float)(weighted_sum_23 + scaled_value_9) + weighted_sum_26;
    saved_masked_bits_6 = masked_bits_10;
    weighted_sum_27 = *(float *)&dword_140404A6C[record_word_offset + 129716732] * source_float_10;
    *(float *)((char *)record_byte_offset + saved_masked_bits) = component_sum_3;
    *(float *)((char *)record_byte_offset + saved_masked_bits_6) = (float)((float)((float)(weighted_sum_6 * source_float_8) + weighted_sum_7) + (float)(weighted_sum_12 * source_float_9)) + weighted_sum_27;
    saved_masked_bits_7 = masked_bits_11;
    weighted_sum_28 = *(float *)&dword_140404A6C[record_word_offset + 129716734] * source_float_10;
    *(float *)((char *)record_byte_offset + saved_masked_bits_2) = (float)((float)((float)(weighted_sum_8 * source_float_8) + weighted_sum_9) + (float)(weighted_sum_13 * source_float_9))
                                  + (float)(*(float *)&dword_140404A6C[record_word_offset + 129716733] * source_float_10);
    *(float *)((char *)record_byte_offset + saved_masked_bits_7) = (float)((float)((float)(weighted_sum_10 * source_float_8) + weighted_sum_11) + (float)(weighted_sum_14 * source_float_9)) + weighted_sum_28;
    record_byte_offset += 12;
    --remaining_count;
  }
  while ( remaining_count );
  scaled_index = cached_scaled_index;
  loaded_word_3 = (*(__int64 *)(void *)sr_mesh_first);
  iteration_count = 0;
  to = (*(float * *)(void *)sr_mesh_second);
  from = (*(float * *)(void *)sr_mesh_hit);
  loaded_word_2 = (*(__int64 *)(void *)sr_mesh_third);
  loaded_word = (*(__int64 *)(void *)sr_mesh_normal);
  if ( (*(__int64 *)(void *)sr_mesh_first) < cached_scaled_index )
  {
LABEL_17:
    weighted_sum_29 = *(float *)&dword_140404A6C[record_word_offset + 129716726];
    weighted_sum_30 = *(float *)&dword_140404A6C[record_word_offset + 129716720];
    weighted_sum_31 = *(float *)&dword_140404A6C[record_word_offset + 129716727];
    weighted_sum_32 = *(float *)&dword_140404A6C[record_word_offset + 129716721];
    weighted_sum_33 = *(float *)&dword_140404A6C[record_word_offset + 129716728];
    weighted_sum_34 = *(float *)&dword_140404A6C[record_word_offset + 129716722];
    weighted_sum_35 = *(float *)&dword_140404A6C[record_word_offset + 129716729];
    weighted_sum_36 = *(float *)&dword_140404A6C[record_word_offset + 129716730];
    weighted_sum_37 = *(float *)&dword_140404A6C[record_word_offset + 129716731];
    running_total = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (loaded_word_3 + 15024 * loaded_word) + 1344859228);
    remaining_count_2 = scaled_index - loaded_word_3;
    do
    {
      product_difference_2 = *(running_total - 1);
      scaled_value_10 = *running_total;
      source_component_y_3 = running_total[1];
      weighted_sum_38 = *(float *)&dword_140404A6C[record_word_offset + 129716733] * source_component_y_3;
      *(float *)((uintptr_t)running_total + (uintptr_t)&(*(int *)(void *)(sr_mesh_vertices+0)) - loaded_word_2 - (uintptr_t)&g_19028EC5C) = (float)((float)((float)(weighted_sum_29 * product_difference_2) + weighted_sum_30)
                                                                                                  + (float)(weighted_sum_35 * *running_total))
                                                                                          + (float)(*(float *)&dword_140404A6C[record_word_offset + 129716732]
                                                                                                  * source_component_y_3);
      weighted_sum_39 = (float)((float)((float)(weighted_sum_31 * product_difference_2) + weighted_sum_32) + (float)(weighted_sum_36 * scaled_value_10)) + weighted_sum_38;
      weighted_sum_40 = *(float *)&dword_140404A6C[record_word_offset + 129716734] * source_component_y_3;
      *(float *)((uintptr_t)running_total + (uintptr_t)&(*(int *)(void *)(sr_mesh_vertices+4)) - loaded_word_2 - (uintptr_t)&g_19028EC5C) = weighted_sum_39;
      *(float *)((uintptr_t)running_total + ((uintptr_t)(sr_mesh_vertices+12) + (-loaded_word_2 - 4)) - (uintptr_t)&g_19028EC5C) = (float)((float)((float)(weighted_sum_33 * product_difference_2) + weighted_sum_34)
                                                                                               + (float)(weighted_sum_37 * scaled_value_10))
                                                                                       + weighted_sum_40;
      running_total += 3;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
  }
LABEL_19:
  if ( *(int *)((char *)&g_190291C58 + loaded_word_2) > 0 )
  {
    state_address = (int *)((char *)&g_190291C68 + loaded_word_2);
    do
    {
      scaled_index_2 = 3LL * *(state_address - 1);
      loaded_word_4 = *state_address;
      LODWORD(packed_word_bits) = *(&(*(int *)(void *)(sr_mesh_vertices+4)) + 3 * *(state_address - 1));
      LODWORD(packed_word_bits_2) = *(&(*(int *)(void *)(sr_mesh_vertices+0)) + 3 * *(state_address - 1));
      (*(float *)(void *)(sr_mesh_first+8)) = *(float *)&(sr_mesh_vertices+12)[12 * *(state_address - 1) - 4];
      weighted_sum_41 = *((float *)&(*(int *)(void *)(sr_mesh_vertices+4)) + 3 * loaded_word_4);
      combined_products = *(float *)&(sr_mesh_vertices+12)[12 * loaded_word_4 - 4];
      weighted_sum_42 = *((float *)&(*(int *)(void *)(sr_mesh_vertices+0)) + 3 * loaded_word_4);
      table_value = state_address[1];
      *((float *)&(*(float * *)(void *)sr_mesh_second) + 1) = weighted_sum_41;
      component_delta = weighted_sum_41 - packed_word_bits;
      (*(float *)(void *)(sr_mesh_second+8)) = combined_products;
      combined_products_2 = combined_products - (*(float *)(void *)(sr_mesh_first+8));
      *(float *)&(*(float * *)(void *)sr_mesh_second) = weighted_sum_42;
      component_delta_2 = weighted_sum_42 - packed_word_bits_2;
      (*(__int64 *)(void *)sr_mesh_first) = __PAIR64__(LODWORD(packed_word_bits), LODWORD(packed_word_bits_2));
      combined_products_3 = *(float *)&(sr_mesh_vertices+12)[12 * table_value - 4];
      weighted_sum_43 = *((float *)&(*(int *)(void *)(sr_mesh_vertices+0)) + 3 * table_value);
      HIDWORD((*(__int64 *)(void *)sr_mesh_third)) = *(&(*(int *)(void *)(sr_mesh_vertices+4)) + 3 * table_value);
      combined_products_4 = *((float *)&(*(__int64 *)(void *)sr_mesh_third) + 1) - packed_word_bits;
      *(float *)&(*(__int64 *)(void *)(sr_mesh_third+8)) = combined_products_3;
      combined_products_5 = combined_products_3 - (*(float *)(void *)(sr_mesh_first+8));
      *(float *)&(*(__int64 *)(void *)sr_mesh_third) = weighted_sum_43;
      component_delta_3 = weighted_sum_43 - packed_word_bits_2;
      combined_products_6 = (float)((float)(*((float *)&(*(__int64 *)(void *)sr_mesh_third) + 1) - packed_word_bits) * combined_products_2) - (float)(combined_products_5 * component_delta);
      product_difference_3 = (float)(combined_products_5 * component_delta_2) - (float)(component_delta_3 * combined_products_2);
      combined_products_7 = (float)(component_delta_3 * component_delta) - (float)((float)(*((float *)&(*(__int64 *)(void *)sr_mesh_third) + 1) - packed_word_bits) * component_delta_2);
      square_root = fsqrt((float)((float)(product_difference_3 * product_difference_3) + (float)(combined_products_6 * combined_products_6)) + (float)(combined_products_7 * combined_products_7));
      if ( square_root == 0.0 )
      {
        (*(__int64 *)(void *)sr_mesh_normal) = 0;
        scaled_ratio = 0.0;
        scaled_ratio_2 = 0.0;
        LODWORD((*(__int64 *)(void *)(sr_mesh_normal+8))) = 0;
        scaled_ratio_3 = 0.0;
      }
      else
      {
        scaled_ratio = (float)(1.0f / square_root) * combined_products_6;
        scaled_ratio_2 = (float)(1.0f / square_root) * product_difference_3;
        scaled_ratio_3 = (float)(1.0f / square_root) * combined_products_7;
        *(float *)&(*(__int64 *)(void *)sr_mesh_normal) = scaled_ratio;
        *((float *)&(*(__int64 *)(void *)sr_mesh_normal) + 1) = scaled_ratio_2;
        *(float *)&(*(__int64 *)(void *)(sr_mesh_normal+8)) = scaled_ratio_3;
      }
      if ( sr_collision_line_triangle(
             (float *)&(*(float * *)(void *)sr_mesh_hit),
             (float *)&(*(__int64 *)(void *)sr_mesh_normal),
             (float *)&t,
             from,
             to,
             (float *)&(*(__int64 *)(void *)sr_mesh_first),
             (float *)&(*(float * *)(void *)sr_mesh_second),
             (float *)&(*(__int64 *)(void *)sr_mesh_third))
        && *(float *)&t < (world_unknown_151a84898) )
      {
        g_151A84880 = (unsigned int)(*(float * *)(void *)sr_mesh_hit);
        *(_QWORD *)&ragdoll_unknown_height = __PAIR64__((*(__int64 *)(void *)(sr_mesh_hit+8)), HIDWORD((*(float * *)(void *)sr_mesh_hit)));
        g_151A8488C = scaled_ratio;
        g_151A84890 = scaled_ratio_2;
        g_151A84894 = scaled_ratio_3;
        *(unsigned int *)&world_unknown_151a84898 = t;
        g_151A848B0 = iteration_count;
      }
      if ( *(state_address - 2) == 4 )
      {
        (*(float * *)(void *)sr_mesh_second) = (float *)(*(__int64 *)(void *)sr_mesh_third);
        (*(float *)(void *)(sr_mesh_second+8)) = *(float *)&(*(__int64 *)(void *)(sr_mesh_third+8));
        table_value_2 = state_address[2];
        combined_products_8 = *(float *)&(sr_mesh_vertices+12)[12 * table_value_2 - 4];
        weighted_sum_44 = *((float *)&(*(int *)(void *)(sr_mesh_vertices+0)) + 3 * table_value_2);
        HIDWORD((*(__int64 *)(void *)sr_mesh_third)) = *(&(*(int *)(void *)(sr_mesh_vertices+4)) + 3 * table_value_2);
        *(float *)&(*(__int64 *)(void *)(sr_mesh_third+8)) = combined_products_8;
        combined_products_9 = combined_products_8 - *(float *)&(sr_mesh_vertices+12)[4 * scaled_index_2 - 4];
        *(float *)&(*(__int64 *)(void *)sr_mesh_third) = weighted_sum_44;
        component_delta_4 = weighted_sum_44 - packed_word_bits_2;
        combined_products_10 = (float)((float)(*((float *)&(*(__int64 *)(void *)sr_mesh_third) + 1) - packed_word_bits) * combined_products_5) - (float)(combined_products_9 * combined_products_4);
        product_difference_4 = (float)(combined_products_9 * component_delta_3) - (float)(component_delta_4 * combined_products_5);
        combined_products_11 = (float)(component_delta_4 * combined_products_4) - (float)((float)(*((float *)&(*(__int64 *)(void *)sr_mesh_third) + 1) - packed_word_bits) * component_delta_3);
        square_root_2 = fsqrt((float)((float)(product_difference_4 * product_difference_4) + (float)(combined_products_10 * combined_products_10)) + (float)(combined_products_11 * combined_products_11));
        if ( square_root_2 == 0.0 )
        {
          (*(__int64 *)(void *)sr_mesh_normal) = 0;
          scaled_ratio_4 = 0.0;
          scaled_ratio_5 = 0.0;
          LODWORD((*(__int64 *)(void *)(sr_mesh_normal+8))) = 0;
          scaled_ratio_6 = 0.0;
        }
        else
        {
          scaled_ratio_4 = (float)(1.0f / square_root_2) * combined_products_10;
          scaled_ratio_5 = (float)(1.0f / square_root_2) * product_difference_4;
          scaled_ratio_6 = (float)(1.0f / square_root_2) * combined_products_11;
          *(float *)&(*(__int64 *)(void *)sr_mesh_normal) = scaled_ratio_4;
          *((float *)&(*(__int64 *)(void *)sr_mesh_normal) + 1) = scaled_ratio_5;
          *(float *)&(*(__int64 *)(void *)(sr_mesh_normal+8)) = scaled_ratio_6;
        }
        if ( sr_collision_line_triangle(
               (float *)&(*(float * *)(void *)sr_mesh_hit),
               (float *)&(*(__int64 *)(void *)sr_mesh_normal),
               (float *)&t,
               from,
               to,
               (float *)&(*(__int64 *)(void *)sr_mesh_first),
               (float *)&(*(float * *)(void *)sr_mesh_second),
               (float *)&(*(__int64 *)(void *)sr_mesh_third))
          && *(float *)&t < (world_unknown_151a84898) )
        {
          g_151A84880 = (unsigned int)(*(float * *)(void *)sr_mesh_hit);
          *(_QWORD *)&ragdoll_unknown_height = __PAIR64__((*(__int64 *)(void *)(sr_mesh_hit+8)), HIDWORD((*(float * *)(void *)sr_mesh_hit)));
          g_151A8488C = scaled_ratio_4;
          g_151A84890 = scaled_ratio_5;
          g_151A84894 = scaled_ratio_6;
          *(unsigned int *)&world_unknown_151a84898 = t;
          g_151A848B0 = iteration_count;
        }
      }
      ++iteration_count;
      state_address += 6;
    }
    while ( iteration_count < *(int *)((char *)&g_190291C58 + loaded_word_2) );
  }
  unsigned char sr_mesh_found;
  __asm__ volatile("comiss %2, %1; setb %0" : "=qm"(sr_mesh_found)
                   : "x"(_mm_set_ss((world_unknown_151a84898))), "x"(_mm_set_ss(1.0f)) : "cc");
  return sr_mesh_found;
}
#undef unused_frame_slot_0
#undef t
#undef masked_bits_5
#undef masked_bits_6
#undef masked_bits_7
#undef masked_bits_8
#undef masked_bits_9
#undef masked_bits_10
#undef masked_bits_11
#undef cached_scaled_index
#undef unused_frame_slot_3296

//----- (00000001400E2D40) ----------------------------------------------------
_BOOL8            sub_1400E2D40(int a1, float *a2, float *a3)
{
  __int64 record_word_offset;
  float weighted_sum;
  float source_component_y;
  float weighted_sum_2;
  float source_component_z;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  signed int iteration_count;
  __int64 scaled_index;
  __int64 record_word_offset_2;
  int *state_address;
  __int64 scaled_index_2;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  __int64 scaled_index_3;
  float weighted_sum_10;
  float weighted_sum_11;
  __int64 table_value;
  float component_delta;
  float component_delta_2;
  float weighted_sum_12;
  float weighted_sum_13;
  float combined_products;
  float component_delta_3;
  float component_delta_4;
  float state_address_2;
  float product_difference;
  float state_address_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  __int64 scaled_index_4;
  __int64 table_value_2;
  __int64 table_value_3;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  float state_address_4;
  float weighted_sum_14;
  float weighted_sum_15;
  float state_address_5;
  __int64 scaled_index_8;
  float weighted_sum_16;
  float weighted_sum_17;
  float component_delta_5;
  float component_delta_6;
  float product_difference_2;
  float product_difference_3;
  float state_address_6;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  __int64 scaled_index_9;
  __int64 table_value_4;
  __int64 table_value_5;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  float state_address_7;
  float weighted_sum_18;
  float weighted_sum_19;
  float state_address_8;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E2D40[320];
#define normal (*(float (*))(void *)(sr_frame_1400E2D40 + 0)) /* [rsp+40h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400E2D40 + 4)) /* [rsp+44h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400E2D40 + 8)) /* [rsp+48h] */
#define float_word (*(__int64 (*))(void *)(sr_frame_1400E2D40 + 16)) /* [rsp+50h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1400E2D40 + 24)) /* [rsp+58h] */
#define float_word_2 (*(__int64 (*))(void *)(sr_frame_1400E2D40 + 32)) /* [rsp+60h] */
#define unused_written_slot_3 (*(float (*))(void *)(sr_frame_1400E2D40 + 40)) /* [rsp+68h] */
#define point (*(unsigned int (*))(void *)(sr_frame_1400E2D40 + 48)) /* [rsp+70h] */
#define frame_word_at_52 (*(unsigned int (*))(void *)(sr_frame_1400E2D40 + 52)) /* [rsp+74h] */
#define frame_word_at_56 (*(unsigned int (*))(void *)(sr_frame_1400E2D40 + 56)) /* [rsp+78h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400E2D40 + 64)) /* [rsp+80h] */
#define t (*(float (*))(void *)(sr_frame_1400E2D40 + 304)) /* [rsp+170h] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_1400E2D40 + 312)) /* [rsp+178h] */

  record_word_offset = 5210LL * a1;
  weighted_sum = *(float *)&dword_140404A6C[record_word_offset + 129716753];
  if ( *a2 < weighted_sum && weighted_sum > *a3 )
    return 0;
  source_component_y = a2[1];
  weighted_sum_2 = *(float *)&dword_140404A6C[record_word_offset + 129716754];
  if ( source_component_y < weighted_sum_2 && weighted_sum_2 > a3[1] )
    return 0;
  source_component_z = a2[2];
  weighted_sum_3 = *(float *)&dword_140404A6C[record_word_offset + 129716755];
  if ( source_component_z < weighted_sum_3 && weighted_sum_3 > a3[2] )
    return 0;
  weighted_sum_4 = *(float *)&dword_140404A6C[record_word_offset + 129716756];
  if ( *a2 > weighted_sum_4 && weighted_sum_4 < *a3 )
    return 0;
  weighted_sum_5 = *(float *)&dword_140404A6C[record_word_offset + 129716757];
  if ( source_component_y > weighted_sum_5 && weighted_sum_5 < a3[1] )
    return 0;
  weighted_sum_6 = *(float *)&dword_140404A6C[record_word_offset + 129716758];
  if ( source_component_z > weighted_sum_6 && weighted_sum_6 < a3[2] )
    return 0;
  iteration_count = 0;
  scaled_index = 45072LL * (int)dword_140404A6C[record_word_offset + 129716710];
  *(unsigned int *)&world_unknown_151a84898 = 1065353216;
  if ( (int)dword_140404A6C[scaled_index + 335164539] <= 0 )
    return 0;
  record_word_offset_2 = 5210LL * a1;
  state_address = (int *)&dword_140404A6C[scaled_index + 335164542];
  do
  {
    scaled_index_2 = 60LL * (int)dword_140404A6C[record_word_offset_2 + 129716769 + *state_address];
    weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index_2 + 73007028];
    weighted_sum_8 = *(float *)&dword_140404A6C[scaled_index_2 + 73007026];
    weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index_2 + 73007027];
    scaled_index_3 = 60LL * (int)dword_140404A6C[record_word_offset_2 + 129716769 + state_address[1]];
    saved_weighted_sum_2 = weighted_sum_7;
    float_buffer[2] = weighted_sum_7;
    float_buffer[0] = weighted_sum_8;
    float_buffer[1] = weighted_sum_9;
    weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index_3 + 73007026];
    weighted_sum_11 = *(float *)&dword_140404A6C[scaled_index_3 + 73007028];
    table_value = (int)dword_140404A6C[record_word_offset_2 + 129716769 + state_address[2]];
    HIDWORD(float_word_2) = dword_140404A6C[scaled_index_3 + 73007027];
    unused_written_slot_3 = weighted_sum_11;
    component_delta = weighted_sum_11 - weighted_sum_7;
    *(float *)&float_word_2 = weighted_sum_10;
    component_delta_2 = weighted_sum_10 - weighted_sum_8;
    weighted_sum_12 = *(float *)&dword_140404A6C[60 * table_value + 73007028];
    weighted_sum_13 = *(float *)&dword_140404A6C[60 * table_value + 73007026];
    HIDWORD(float_word) = dword_140404A6C[60 * table_value + 73007027];
    combined_products = *((float *)&float_word + 1) - weighted_sum_9;
    saved_weighted_sum = weighted_sum_12;
    component_delta_3 = weighted_sum_12 - weighted_sum_7;
    *(float *)&float_word = weighted_sum_13;
    component_delta_4 = weighted_sum_13 - weighted_sum_8;
    state_address_2 = (float)((float)(*((float *)&float_word + 1) - weighted_sum_9) * component_delta) - (float)(component_delta_3 * (float)(*((float *)&float_word_2 + 1) - weighted_sum_9));
    product_difference = (float)(component_delta_3 * component_delta_2) - (float)(component_delta_4 * component_delta);
    state_address_3 = (float)(component_delta_4 * (float)(*((float *)&float_word_2 + 1) - weighted_sum_9)) - (float)((float)(*((float *)&float_word + 1) - weighted_sum_9) * component_delta_2);
    square_root = fsqrt((float)((float)(product_difference * product_difference) + (float)(state_address_2 * state_address_2)) + (float)(state_address_3 * state_address_3));
    if ( square_root == 0.0 )
    {
      normal = 0.0;
      scaled_ratio = 0.0;
      unused_written_slot = 0.0;
      scaled_ratio_2 = 0.0;
      unused_written_slot_2 = 0.0;
      scaled_ratio_3 = 0.0;
    }
    else
    {
      scaled_ratio = state_address_2 * (float)(1.0 / square_root);
      scaled_ratio_2 = product_difference * (float)(1.0 / square_root);
      scaled_ratio_3 = state_address_3 * (float)(1.0 / square_root);
      normal = scaled_ratio;
      unused_written_slot = scaled_ratio_2;
      unused_written_slot_2 = scaled_ratio_3;
    }
    if ( sr_collision_line_triangle((float *)&point, &normal, &t, a2, a3, float_buffer, (float *)&float_word_2, (float *)&float_word)
      && t < (world_unknown_151a84898) )
    {
      scaled_index_4 = record_word_offset_2 + *state_address;
      g_151A84880 = point;
      *(unsigned int *)&ragdoll_unknown_height = frame_word_at_52;
      g_151A84888 = frame_word_at_56;
      g_151A848B4 = dword_140404A6C[scaled_index_4 + 129716769];
      table_value_2 = record_word_offset_2 + state_address[1];
      g_151A8488C = scaled_ratio;
      g_151A84890 = scaled_ratio_2;
      g_151A84894 = scaled_ratio_3;
      (world_unknown_151a84898) = t;
      g_151A848B8 = dword_140404A6C[table_value_2 + 129716769];
      table_value_3 = state_address[2];
      g_151A848B0 = iteration_count;
      g_151A848BC = dword_140404A6C[record_word_offset_2 + 129716769 + table_value_3];
      sr_collision_triangle_weights(
        (float *)(unsigned int *)&g_151A848C4,
        (float *)&g_151A84880,
        float_buffer,
        (float *)&float_word_2,
        (float *)&float_word);
      scaled_index_5 = 60LL * (int)g_151A848B4;
      scaled_index_6 = 60LL * (int)g_151A848B8;
      scaled_index_7 = 60LL * (int)g_151A848BC;
      state_address_4 = (float)(g_151A848C8 * *(float *)&dword_140404A6C[scaled_index_6 + 73007034])
          + (float)(g_151A848C4 * *(float *)&dword_140404A6C[scaled_index_5 + 73007034]);
      weighted_sum_14 = g_151A848CC * *(float *)&dword_140404A6C[scaled_index_7 + 73007033];
      weighted_sum_15 = g_151A848CC * *(float *)&dword_140404A6C[scaled_index_7 + 73007034];
      state_address_5 = (float)(g_151A848C8 * *(float *)&dword_140404A6C[scaled_index_6 + 73007033])
          + (float)(g_151A848C4 * *(float *)&dword_140404A6C[scaled_index_5 + 73007033]);
      *(float *)&g_151A848A0 = (float)((float)(g_151A848C8
                                                           * *(float *)&dword_140404A6C[scaled_index_6 + 73007032])
                                                   + (float)(g_151A848C4
                                                           * *(float *)&dword_140404A6C[scaled_index_5 + 73007032]))
                                           + (float)(g_151A848CC
                                                   * *(float *)&dword_140404A6C[scaled_index_7 + 73007032]);
      *(float *)&g_151A848A8 = state_address_4 + weighted_sum_15;
      g_151A848A4 = state_address_5 + weighted_sum_14;
    }
    if ( *(state_address - 1) == 4 )
    {
      float_word_2 = float_word;
      unused_written_slot_3 = saved_weighted_sum;
      scaled_index_8 = 60LL * (int)dword_140404A6C[record_word_offset_2 + 129716769 + state_address[3]];
      weighted_sum_16 = *(float *)&dword_140404A6C[scaled_index_8 + 73007028];
      weighted_sum_17 = *(float *)&dword_140404A6C[scaled_index_8 + 73007027];
      LODWORD(float_word) = dword_140404A6C[scaled_index_8 + 73007026];
      saved_weighted_sum = weighted_sum_16;
      component_delta_5 = weighted_sum_16 - saved_weighted_sum_2;
      *((float *)&float_word + 1) = weighted_sum_17;
      component_delta_6 = weighted_sum_17 - weighted_sum_9;
      product_difference_2 = (float)(component_delta_4 * component_delta_5) - (float)(component_delta_3 * (float)(*(float *)&float_word - weighted_sum_8));
      product_difference_3 = (float)(component_delta_3 * component_delta_6) - (float)(combined_products * component_delta_5);
      state_address_6 = (float)(combined_products * (float)(*(float *)&float_word - weighted_sum_8)) - (float)(component_delta_4 * component_delta_6);
      square_root_2 = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference_3 * product_difference_3)) + (float)(state_address_6 * state_address_6));
      if ( square_root_2 == 0.0 )
      {
        normal = 0.0;
        scaled_ratio_4 = 0.0;
        unused_written_slot = 0.0;
        scaled_ratio_5 = 0.0;
        unused_written_slot_2 = 0.0;
        scaled_ratio_6 = 0.0;
      }
      else
      {
        scaled_ratio_4 = (float)(1.0 / square_root_2) * product_difference_3;
        scaled_ratio_5 = (float)(1.0 / square_root_2) * product_difference_2;
        scaled_ratio_6 = (float)(1.0 / square_root_2) * state_address_6;
        normal = scaled_ratio_4;
        unused_written_slot = scaled_ratio_5;
        unused_written_slot_2 = scaled_ratio_6;
      }
      if ( sr_collision_line_triangle((float *)&point, &normal, &t, a2, a3, float_buffer, (float *)&float_word_2, (float *)&float_word)
        && t < (world_unknown_151a84898) )
      {
        scaled_index_9 = record_word_offset_2 + *state_address;
        g_151A84880 = point;
        *(unsigned int *)&ragdoll_unknown_height = frame_word_at_52;
        g_151A84888 = frame_word_at_56;
        g_151A848B4 = dword_140404A6C[scaled_index_9 + 129716769];
        table_value_4 = record_word_offset_2 + state_address[2];
        g_151A8488C = scaled_ratio_4;
        g_151A84890 = scaled_ratio_5;
        g_151A84894 = scaled_ratio_6;
        (world_unknown_151a84898) = t;
        g_151A848B8 = dword_140404A6C[table_value_4 + 129716769];
        table_value_5 = state_address[3];
        g_151A848B0 = iteration_count;
        g_151A848BC = dword_140404A6C[record_word_offset_2 + 129716769 + table_value_5];
        sr_collision_triangle_weights(
          (float *)(unsigned int *)&g_151A848C4,
          (float *)&g_151A84880,
          float_buffer,
          (float *)&float_word_2,
          (float *)&float_word);
        scaled_index_10 = 60LL * (int)g_151A848B4;
        scaled_index_11 = 60LL * (int)g_151A848B8;
        scaled_index_12 = 60LL * (int)g_151A848BC;
        state_address_7 = (float)(g_151A848C8 * *(float *)&dword_140404A6C[scaled_index_11 + 73007034])
            + (float)(g_151A848C4 * *(float *)&dword_140404A6C[scaled_index_10 + 73007034]);
        weighted_sum_18 = g_151A848CC * *(float *)&dword_140404A6C[scaled_index_12 + 73007033];
        weighted_sum_19 = g_151A848CC * *(float *)&dword_140404A6C[scaled_index_12 + 73007034];
        state_address_8 = (float)(g_151A848C8 * *(float *)&dword_140404A6C[scaled_index_11 + 73007033])
            + (float)(g_151A848C4 * *(float *)&dword_140404A6C[scaled_index_10 + 73007033]);
        *(float *)&g_151A848A0 = (float)((float)(g_151A848C8
                                                             * *(float *)&dword_140404A6C[scaled_index_11 + 73007032])
                                                     + (float)(g_151A848C4
                                                             * *(float *)&dword_140404A6C[scaled_index_10 + 73007032]))
                                             + (float)(g_151A848CC
                                                     * *(float *)&dword_140404A6C[scaled_index_12 + 73007032]);
        *(float *)&g_151A848A8 = state_address_7 + weighted_sum_19;
        g_151A848A4 = state_address_8 + weighted_sum_18;
      }
    }
    ++iteration_count;
    state_address += 6;
  }
  while ( iteration_count < (int)dword_140404A6C[scaled_index + 335164539] );
  return (world_unknown_151a84898) < 1.0;
}
#undef normal
#undef unused_written_slot
#undef unused_written_slot_2
#undef float_word
#undef saved_weighted_sum
#undef float_word_2
#undef unused_written_slot_3
#undef point
#undef frame_word_at_52
#undef frame_word_at_56
#undef float_buffer
#undef t
#undef saved_weighted_sum_2

//----- (0000000140108930) ----------------------------------------------------
__int64 sub_140108930()
{
  float *state_address;
  int iteration_count;
  signed int iteration_count_2;
  float product_difference;
  float product_difference_2;
  float float_word;
  float product_difference_3;
  __int64 loaded_word;
  float component_delta;
  float square_root;
  float scaled_value;
  float *saved_weighted_sum;
  float source_float_5161;
  float *component_sum;
  float weighted_sum;
  float rand_result;
  unsigned int cached_game_tick;
  float scaled_value_2;
  __int64 shifted_bits;
  float product_difference_4;
  float rand_result_2;
  unsigned int cached_game_tick_2;
  __int64 shifted_bits_2;
  float scaled_value_3;
  __int64 scaled_index;
  float weighted_sum_2;
  float weighted_sum_3;
  float float_word_2;
  float squared_length;
  float squared_value;
  float square_root_2;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float weighted_sum_4;
  float component_delta_2;
  float product_difference_5;
  float scaled_value_4;
  float limited_value;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float product_difference_6;
  float limited_value_2;
  float weighted_sum_8;
  float scaled_value_5;
  float state_address_2;
  float weighted_sum_9;
  float state_address_3;
  float product_difference_7;
  float limited_value_3;
  float *state_address_4;
  unsigned int *buffer_cursor;
  __int64 scaled_index_2;
  int scaled_index_3;
  unsigned int float_word_3;
  float scaled_value_6;
  unsigned int float_word_4;
  unsigned int float_word_5;
  float state_address_5;
  __int64 table_value;
  float limited_value_4;
  unsigned int table_value_2;
  unsigned int cached_game_tick_3;
  unsigned int cached_world_event_count;
  __int64 shifted_bits_3;
  unsigned int table_value_3;
  unsigned int loaded_word_2;
  unsigned int scaled_index_4;
  unsigned int cached_game_tick_4;
  unsigned int cached_world_event_count_2;
  __int64 shifted_bits_4;
  unsigned int table_value_4;
  float scaled_value_7;
  unsigned int scaled_index_5;
  __int64 table_value_5;
  float product_difference_8;
  float scaled_value_8;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  unsigned int integer_sum;
  __int64 scaled_index_6;
  float limited_value_5;
  bool comparison_result;
  int iteration_count_3;
  unsigned int *running_total;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  float weighted_sum_14;
  float combined_products_4;
  float weighted_sum_15;
  float combined_products_5;
  float weighted_sum_16;
  float combined_products_6;
  float combined_products_7;
  float combined_products_8;
  float combined_products_9;
  float component_sum_2;
  float weighted_sum_17;
  float limited_value_6;
  float weighted_sum_18;
  __int64 scaled_index_9;
  unsigned int *state_address_6;
  unsigned int *state_address_7;
  __int64 scaled_index_10;
  signed int iteration_count_4;
  __int64 lookup_index;
  float *state_address_8;
  float scaled_value_9;
  float weighted_sum_19;
  float product_difference_9;
  float weighted_sum_20;
  float weighted_sum_21;
  float combined_products_10;
  float weighted_sum_22;
  float weighted_sum_23;
  float source_component_y;
  float weighted_sum_24;
  float weighted_sum_25;
  float weighted_sum_26;
  unsigned int layer;
  float source_component_z;
  int selection_flag;
  float source_component_y_2;
  float source_component_x;
  unsigned int x;
  unsigned int state_word;
  unsigned int z;
  unsigned int y;
  unsigned int loword_result;
  unsigned int cached_world_event_count_3;
  __int64 shifted_bits_5;
  unsigned int table_value_6;
  unsigned int table_value_7;
  unsigned int table_value_8;
  float comparison_operand;
  float scaled_value_10;
  float scaled_value_11;
  float combined_products_11;
  int call_result;
  float depth_scale;
  unsigned int stiffness;
  float combined_products_12;
  float combined_products_13;
  unsigned int *state_address_9;
  __int64 scaled_index_11;
  float weighted_sum_27;
  float *state_address_10;
  float scaled_value_12;
  float weighted_sum_28;
  float state_address_11;
  float weighted_sum_29;
  float scaled_value_13;
  float scaled_value_14;
  unsigned int scaled_index_12;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  float weighted_sum_30;
  float *state_address_12;
  float scaled_value_15;
  float weighted_sum_31;
  float state_address_13;
  float weighted_sum_32;
  float scaled_value_16;
  float scaled_value_17;
  unsigned int table_value_9;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  float weighted_sum_33;
  float *state_address_14;
  float scaled_value_18;
  float weighted_sum_34;
  float state_address_15;
  float weighted_sum_35;
  float scaled_value_19;
  float scaled_value_20;
  unsigned int table_value_10;
  __int64 scaled_index_17;
  __int64 scaled_index_18;
  float weighted_sum_36;
  float *state_address_16;
  float scaled_value_21;
  float weighted_sum_37;
  float state_address_17;
  float weighted_sum_38;
  float scaled_value_22;
  float scaled_value_23;
  unsigned int table_value_11;
  __int64 scaled_index_19;
  __int64 scaled_index_20;
  float weighted_sum_39;
  float *state_address_18;
  float scaled_value_24;
  float weighted_sum_40;
  float state_address_19;
  float weighted_sum_41;
  float scaled_value_25;
  float scaled_value_26;
  unsigned int table_value_12;
  __int64 scaled_index_21;
  __int64 scaled_index_22;
  float weighted_sum_42;
  float *state_address_20;
  float scaled_value_27;
  float weighted_sum_43;
  float state_address_21;
  float weighted_sum_44;
  float scaled_value_28;
  float scaled_value_29;
  unsigned int table_value_13;
  __int64 scaled_index_23;
  __int64 scaled_index_24;
  float weighted_sum_45;
  float *state_address_22;
  float scaled_value_30;
  float weighted_sum_46;
  float state_address_23;
  float weighted_sum_47;
  float scaled_value_31;
  float scaled_value_32;
  unsigned int table_value_14;
  __int64 scaled_index_25;
  __int64 scaled_index_26;
  float weighted_sum_48;
  float *state_address_24;
  float scaled_value_33;
  float weighted_sum_49;
  float state_address_25;
  float weighted_sum_50;
  float scaled_value_34;
  float scaled_value_35;
  unsigned int table_value_15;
  __int64 scaled_index_27;
  __int64 remaining_count;
  unsigned int *position_a;
  float *state_address_26;
  __int64 loaded_word_3;
  char *record_byte_offset;
  __int64 remaining_count_2;
  __int64 loaded_word_4;
  __int64 scaled_index_28;
  int collision_mesh_contact_result;
  unsigned int *state_address_27;
  unsigned int *saved_state_address;
  int iteration_count_5;
  int iteration_count_6;
  unsigned int *state_address_28;
  __int64 scaled_index_29;
  __int64 scaled_index_30;
  signed int iteration_count_7;
  float *saved_state_address_2;
  float *state_address_29;
  float scaled_value_36;
  float weighted_sum_51;
  float product_difference_10;
  float weighted_sum_52;
  float weighted_sum_53;
  float combined_products_14;
  float weighted_sum_54;
  float weighted_sum_55;
  float source_component_y_3;
  float weighted_sum_56;
  float weighted_sum_57;
  float weighted_sum_58;
  __int64 body_a;
  __int64 body_b;
  float combined_products_15;
  float combined_products_16;
  float combined_products_17;
  float combined_products_18;
  float sr_mesh_ray_start[3];
  float sr_mesh_ray_end[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140108930[2256];
#define float_word_6 (*(_DWORD (*)[12])(void *)(sr_frame_140108930 + 0)) /* [rsp+8h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_140108930 + 48)) /* [rsp+38h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140108930 + 56)) /* [rsp+40h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140108930 + 64)) /* [rsp+48h] */
#define saved_iteration_count (*(int (*))(void *)(sr_frame_140108930 + 80)) /* [rsp+58h] */
#define normal (*(__int64 (*))(void *)(sr_frame_140108930 + 88)) /* [rsp+60h] */
#define float_word_7 (*(__int64 (*))(void *)(sr_frame_140108930 + 96)) /* [rsp+68h] */
#define integer_difference (*(__int64 (*))(void *)(sr_frame_140108930 + 104)) /* [rsp+70h] */
#define state_address_30 (*(unsigned int * (*))(void *)(sr_frame_140108930 + 112)) /* [rsp+78h] */
#define body (*(int (*))(void *)(sr_frame_140108930 + 120)) /* [rsp+80h] */
#define state_address_31 (*(unsigned int * (*))(void *)(sr_frame_140108930 + 128)) /* [rsp+88h] */
#define state_address_32 (*(unsigned int * (*))(void *)(sr_frame_140108930 + 136)) /* [rsp+90h] */
#define callee_output_word (*(unsigned int (*))(void *)(sr_frame_140108930 + 144)) /* [rsp+98h] */
#define callee_output_word_2 (*(char (*))(void *)(sr_frame_140108930 + 152)) /* [rsp+A0h] */
#define unused_frame_slot_2240 (*(__int64 (*))(void *)(sr_frame_140108930 + 2240)) /* [rsp+8C8h] */

  state_address = (float *)&g_15F2D929C;
  iteration_count = 0;
  iteration_count_2 = 0;
  g_183F7CBEC = 0;
  do
  {
    if ( !*((_DWORD *)state_address - 39) )
      goto LABEL_31;
    product_difference = *(state_address - 4);
    product_difference_2 = *(state_address - 1) - product_difference;
    float_word = *state_address - *(state_address - 3);
    product_difference_3 = *(state_address - 2);
    loaded_word = *((int *)state_address - 29);
    component_delta = state_address[1] - product_difference_3;
    *(state_address - 1) = product_difference;
    *state_address = *(state_address - 3);
    state_address[1] = product_difference_3;
    square_root = fsqrt((float)((float)(float_word * float_word) + (float)(product_difference_2 * product_difference_2)) + (float)(component_delta * component_delta));
    if ( *(state_address - 27) < -32.0 )
      *(state_address - 32) = 0.0;
    if ( *((_DWORD *)state_address - 38) != 14 )
    {
      if ( square_root <= 0.11666667 )
      {
        saved_weighted_sum = state_address + 5161;
        component_sum = state_address + 5161;
        source_float_5161 = state_address[5161];
        scaled_value = square_root * 60.0;
        if ( square_root <= 0.033333335 )
        {
          if ( source_float_5161 > 0.5 )
          {
            rand_result_2 = (float)((float)(unsigned __int8)rand() * 0.0009765625) + 0.875;
            if ( game_connected )
            {
              cached_game_tick_2 = game_tick;
              shifted_bits_2 = (__int64)(int)world_event_count << 7;
              scaled_value_3 = *saved_weighted_sum * 0.5;
              ++world_event_count;
              HIWORD(world_event_count) = 0;
              *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_2) = 9;
              *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_2) = cached_game_tick_2;
              *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_2) = g_183E9361C;
              *(unsigned int *)((char *)&g_1873DE468 + shifted_bits_2) = *((_DWORD *)state_address - 28);
              *(unsigned int *)((char *)&g_1873DE46C + shifted_bits_2) = *((_DWORD *)state_address - 27);
              *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_2) = *((_DWORD *)state_address - 26);
              *(float *)((char *)&g_1873DE490 + shifted_bits_2) = scaled_value_3;
              *(float *)((char *)&g_1873DE494 + shifted_bits_2) = rand_result_2;
            }
          }
          *saved_weighted_sum = 0.0;
          goto LABEL_18;
        }
      }
      else
      {
        scaled_value = square_root * 60.0;
        sub_14000B650(iteration_count_2, (int)(float)((float)(square_root * 60.0) + 10.0));
        saved_weighted_sum = state_address + 5161;
        source_float_5161 = state_address[5161];
        component_sum = state_address + 5161;
      }
      weighted_sum = (float)(scaled_value * 0.125) + source_float_5161;
      *saved_weighted_sum = weighted_sum;
      if ( weighted_sum > 2.0 )
      {
        rand_result = (float)((float)(unsigned __int8)rand() * 0.0009765625) + 0.875;
        if ( game_connected )
        {
          cached_game_tick = game_tick;
          scaled_value_2 = *saved_weighted_sum;
          shifted_bits = (__int64)(int)world_event_count << 7;
          product_difference_4 = *saved_weighted_sum - 2.0;
          ++world_event_count;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 9;
          *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
          *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = g_183E9361C;
          *(unsigned int *)((char *)&g_1873DE468 + shifted_bits) = *((_DWORD *)state_address - 28);
          *(unsigned int *)((char *)&g_1873DE46C + shifted_bits) = *((_DWORD *)state_address - 27);
          *(unsigned int *)((char *)&g_1873DE470 + shifted_bits) = *((_DWORD *)state_address - 26);
          *(float *)((char *)&g_1873DE490 + shifted_bits) = scaled_value_2 * 0.5;
          *(float *)((char *)&g_1873DE494 + shifted_bits) = rand_result;
        }
        else
        {
          product_difference_4 = *component_sum - 2.0;
        }
        *saved_weighted_sum = product_difference_4;
      }
    }
LABEL_18:
    scaled_index = 47 * loaded_word;
    weighted_sum_2 = *(float *)&dword_140404A6C[47 * loaded_word + 18215719];
    weighted_sum_3 = *(float *)&dword_140404A6C[47 * loaded_word + 18215718];
    float_word_2 = *(float *)&dword_140404A6C[47 * loaded_word + 18215720];
    squared_length = (float)(weighted_sum_3 * weighted_sum_3) + (float)(weighted_sum_2 * weighted_sum_2);
    squared_value = (float)(float_word_2 * float_word_2) + squared_length;
    square_root_2 = fsqrt(squared_value);
    if ( square_root_2 == 0.0 )
    {
      scaled_ratio = 0.0;
      scaled_ratio_2 = 0.0;
      scaled_ratio_3 = 0.0;
    }
    else
    {
      scaled_ratio = (float)(1.0 / square_root_2) * weighted_sum_3;
      scaled_ratio_2 = (float)(1.0 / square_root_2) * weighted_sum_2;
      scaled_ratio_3 = (float)(1.0 / square_root_2) * float_word_2;
    }
    weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index + 18215724];
    if ( *(float *)&g_1873DE440 >= *(float *)&dword_140404A6C[scaled_index + 18215716] )
      component_delta_2 = -0.30000001;
    else
      component_delta_2 = -0.0015;
    product_difference_5 = square_root_2 * -0.125;
    scaled_value_4 = square_root_2 * 0.125;
    limited_value = fminf(
            fmaxf(
              (float)(squared_value * component_delta_2)
            * (float)((float)((float)(scaled_ratio_2 * *(float *)&dword_140404A6C[scaled_index + 18215725]) + (float)(scaled_ratio * weighted_sum_4))
                    + (float)(scaled_ratio_3 * *(float *)&dword_140404A6C[scaled_index + 18215726])),
              product_difference_5),
            scaled_value_4);
    weighted_sum_5 = (float)((float)((float)(float_word_2 + float_word_2) * float_word_2) + squared_length) + squared_length;
    weighted_sum_6 = (float)(weighted_sum_4 * limited_value) + weighted_sum_3;
    *(float *)&dword_140404A6C[scaled_index + 18215718] = weighted_sum_6;
    *(float *)&dword_140404A6C[scaled_index + 18215719] = (float)(limited_value * *(float *)&dword_140404A6C[scaled_index + 18215725]) + weighted_sum_2;
    *(float *)&dword_140404A6C[scaled_index + 18215720] = (float)(limited_value * *(float *)&dword_140404A6C[scaled_index + 18215726]) + float_word_2;
    weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index + 18215727];
    if ( *(float *)&g_1873DE440 >= *(float *)&dword_140404A6C[scaled_index + 18215716] )
      product_difference_6 = weighted_sum_5 * -0.30000001;
    else
      product_difference_6 = (float)(weighted_sum_5 * -0.00075000001) - (float)(weighted_sum_5 * 0.00075000001);
    limited_value_2 = fminf(
            fmaxf(
              (float)((float)((float)(scaled_ratio_2 * *(float *)&dword_140404A6C[scaled_index + 18215728]) + (float)(scaled_ratio * weighted_sum_7))
                    + (float)(scaled_ratio_3 * *(float *)&dword_140404A6C[scaled_index + 18215729]))
            * product_difference_6,
              product_difference_5),
            scaled_value_4);
    weighted_sum_8 = (float)(weighted_sum_7 * limited_value_2) + weighted_sum_6;
    *(float *)&dword_140404A6C[scaled_index + 18215718] = weighted_sum_8;
    *(float *)&dword_140404A6C[scaled_index + 18215719] = (float)(limited_value_2 * *(float *)&dword_140404A6C[scaled_index + 18215728])
                                               + *(float *)&dword_140404A6C[scaled_index + 18215719];
    scaled_value_5 = *(float *)&g_1873DE440;
    state_address_2 = (float)(limited_value_2 * *(float *)&dword_140404A6C[scaled_index + 18215729]) + *(float *)&dword_140404A6C[scaled_index + 18215720];
    *(float *)&dword_140404A6C[scaled_index + 18215720] = state_address_2;
    weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index + 18215730];
    state_address_3 = (float)((float)(scaled_ratio_2 * *(float *)&dword_140404A6C[scaled_index + 18215731]) + (float)(scaled_ratio * weighted_sum_9))
        + (float)(scaled_ratio_3 * *(float *)&dword_140404A6C[scaled_index + 18215732]);
    if ( scaled_value_5 >= *(float *)&dword_140404A6C[scaled_index + 18215716] )
      product_difference_7 = squared_value * -0.075000003;
    else
      product_difference_7 = weighted_sum_5 * -0.0001875;
    limited_value_3 = fminf(fmaxf(state_address_3 * product_difference_7, product_difference_5), scaled_value_4);
    *(float *)&dword_140404A6C[scaled_index + 18215718] = (float)(weighted_sum_9 * limited_value_3) + weighted_sum_8;
    *(float *)&dword_140404A6C[scaled_index + 18215719] = (float)(limited_value_3 * *(float *)&dword_140404A6C[scaled_index + 18215731])
                                               + *(float *)&dword_140404A6C[scaled_index + 18215719];
    *(float *)&dword_140404A6C[scaled_index + 18215720] = (float)(limited_value_3 * *(float *)&dword_140404A6C[scaled_index + 18215732]) + state_address_2;
LABEL_31:
    ++iteration_count_2;
    state_address += 5210;
  }
  while ( iteration_count_2 < 512 );
  state_address_4 = (float *)&g_15F2D922C;
  buffer_cursor = &g_15F2D9230;
  saved_iteration_count = 0;
  state_address_31 = &g_15F2D922C;
  state_address_30 = &g_15F2D922C;
  state_address_32 = &g_15F2D9230;
  while ( 2 )
  {
    if ( !*(buffer_cursor - 12) )
      goto LABEL_106;
    scaled_index_2 = (int)*(buffer_cursor - 2);
    scaled_index_3 = *(buffer_cursor - 10);
    body = *(buffer_cursor - 2);
    if ( scaled_index_3 == 1 )
    {
      sub_14010AA70(iteration_count);
      scaled_index_3 = *(buffer_cursor - 10);
    }
    if ( scaled_index_3 == 2 )
      sub_14010AF90(iteration_count);
    if ( *(buffer_cursor - 11) == 13 )
    {
      sub_14010C110(iteration_count);
      if ( *(buffer_cursor - 11) == 13 )
      {
        float_word_3 = buffer_cursor[24];
        scaled_value_6 = 0.46666667;
        float_word_4 = buffer_cursor[23];
        float_word_5 = buffer_cursor[25];
        state_address_5 = (float)((float)(*(float *)&float_word_3 * *((float *)buffer_cursor + 12)) + (float)(*(float *)&float_word_4 * *((float *)buffer_cursor + 11)))
            + (float)(*(float *)&float_word_5 * *((float *)buffer_cursor + 13));
        buffer_cursor[3648] = (int)(float)(fabs(state_address_5) * 7200.0);
        table_value = (int)buffer_cursor[5088];
        if ( (_DWORD)table_value != -1 )
        {
          limited_value_4 = fminf(
                  fminf(
                    *(float *)&dword_140404A6C[15432 * dword_140404A6C[15432 * table_value + 358312924] + 358312932],
                    *(float *)&dword_140404A6C[15432 * table_value + 358312932]),
                  *(float *)&dword_140404A6C[15432 * dword_140404A6C[15432 * table_value + 358312925] + 358312932]);
          scaled_value_6 = (float)(limited_value_4 * 0.46666667) * limited_value_4;
        }
        table_value_2 = buffer_cursor[2550];
        if ( state_address_5 <= -0.033333335 )
        {
          if ( table_value_2 )
          {
            if ( game_connected )
            {
              cached_game_tick_4 = game_tick;
              cached_world_event_count_2 = world_event_count;
              shifted_bits_4 = (__int64)(int)world_event_count << 7;
              *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_4) = 4;
              *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_4) = cached_game_tick_4;
              *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_4) = iteration_count;
              *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_4) = 6;
              *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_4) = 3;
              if ( buffer_cursor == (unsigned int *)4 )
              {
                table_value_4 = 0;
                scaled_value_7 = 0.0;
                scaled_index_5 = 0;
              }
              else
              {
                table_value_4 = buffer_cursor[1];
                scaled_value_7 = *(float *)buffer_cursor;
                scaled_index_5 = *(buffer_cursor - 1);
              }
              *(unsigned int *)((char *)&g_1873DE468 + shifted_bits_4) = scaled_index_5;
              *(float *)((char *)&g_1873DE46C + shifted_bits_4) = scaled_value_7;
              *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_4) = table_value_4;
              *(unsigned int *)((char *)&g_1873DE474 + shifted_bits_4) = float_word_4;
              *(unsigned int *)((char *)&g_1873DE478 + shifted_bits_4) = float_word_3;
              *(unsigned int *)((char *)&g_1873DE47C + shifted_bits_4) = float_word_5;
              world_event_count = cached_world_event_count_2 + 1;
              HIWORD(world_event_count) = 0;
            }
            buffer_cursor[2550] = 0;
          }
        }
        else if ( !table_value_2 )
        {
          if ( game_connected )
          {
            cached_game_tick_3 = game_tick;
            cached_world_event_count = world_event_count;
            shifted_bits_3 = (__int64)(int)world_event_count << 7;
            *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_3) = 4;
            *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_3) = cached_game_tick_3;
            *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_3) = iteration_count;
            *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_3) = 0;
            *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_3) = 3;
            if ( buffer_cursor == (unsigned int *)4 )
            {
              table_value_3 = 0;
              loaded_word_2 = 0;
              scaled_index_4 = 0;
            }
            else
            {
              table_value_3 = buffer_cursor[1];
              loaded_word_2 = *buffer_cursor;
              scaled_index_4 = *(buffer_cursor - 1);
            }
            *(unsigned int *)((char *)&g_1873DE468 + shifted_bits_3) = scaled_index_4;
            *(unsigned int *)((char *)&g_1873DE46C + shifted_bits_3) = loaded_word_2;
            *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_3) = table_value_3;
            *(unsigned int *)((char *)&g_1873DE474 + shifted_bits_3) = float_word_4;
            *(unsigned int *)((char *)&g_1873DE478 + shifted_bits_3) = float_word_3;
            *(unsigned int *)((char *)&g_1873DE47C + shifted_bits_3) = float_word_5;
            world_event_count = cached_world_event_count + 1;
            HIWORD(world_event_count) = 0;
          }
          buffer_cursor[2550] = 1;
        }
        table_value_5 = (int)buffer_cursor[5090];
        product_difference_8 = *((float *)buffer_cursor - 1);
        scaled_value_8 = *(float *)buffer_cursor;
        weighted_sum_10 = *((float *)buffer_cursor + 1);
        weighted_sum_11 = *(float *)&dword_140404A6C[5 * table_value_5 + 112631655];
        weighted_sum_12 = *(float *)&dword_140404A6C[5 * table_value_5 + 112631656];
        weighted_sum_13 = *(float *)&dword_140404A6C[5 * table_value_5 + 112631657];
        if ( (float)((float)((float)((float)(weighted_sum_12 - scaled_value_8) * (float)(weighted_sum_12 - scaled_value_8))
                           + (float)((float)(weighted_sum_11 - product_difference_8) * (float)(weighted_sum_11 - product_difference_8)))
                   + (float)((float)(weighted_sum_13 - weighted_sum_10) * (float)(weighted_sum_13 - weighted_sum_10))) < 65536.0 )
        {
          sr_mesh_ray_start[0] = product_difference_8 - weighted_sum_11;
          combined_products = (float)(product_difference_8 - weighted_sum_11) * *((float *)buffer_cursor + 11);
          sr_mesh_ray_start[1] = scaled_value_8 - weighted_sum_12;
          combined_products_2 = (float)(scaled_value_8 - weighted_sum_12) * *((float *)buffer_cursor + 12);
          sr_mesh_ray_start[2] = weighted_sum_10 - weighted_sum_13;
          combined_products_3 = (float)(combined_products_2 + combined_products) + (float)((float)(weighted_sum_10 - weighted_sum_13) * *((float *)buffer_cursor + 13));
          if ( combined_products_3 < 16.0 )
            combined_products_3 = 0.0;
          if ( buffer_cursor[5089] == 1 )
            combined_products_3 = -combined_products_3;
          scaled_value_6 = combined_products_3 * 0.0018229167;
          if ( state_address_5 >= 0.016666668 || state_address_5 <= -0.016666668 )
          {
LABEL_68:
            buffer_cursor[5087] = 0;
          }
          else if ( (int)++buffer_cursor[5087] >= 900 )
          {
            integer_sum = table_value_5 + 1;
            if ( (int)table_value_5 + 1 >= (int)world_train_stop_count )
              integer_sum = 0;
            buffer_cursor[5090] = integer_sum;
            goto LABEL_68;
          }
        }
        scaled_index_6 = 47LL * (int)*(buffer_cursor - 2);
        limited_value_5 = fminf(fmaxf((float)(state_address_5 + scaled_value_6) * 8.0, -0.875), 0.75) * -0.0011111111;
        *(float *)&dword_140404A6C[scaled_index_6 + 18215718] = (float)(limited_value_5 * *(float *)&dword_140404A6C[scaled_index_6 + 18215730])
                                                   + *(float *)&dword_140404A6C[scaled_index_6 + 18215718];
        *(float *)&dword_140404A6C[scaled_index_6 + 18215719] = (float)(limited_value_5 * *(float *)&dword_140404A6C[scaled_index_6 + 18215731])
                                                   + *(float *)&dword_140404A6C[scaled_index_6 + 18215719];
        *(float *)&dword_140404A6C[scaled_index_6 + 18215720] = (float)(limited_value_5 * *(float *)&dword_140404A6C[scaled_index_6 + 18215732])
                                                   + *(float *)&dword_140404A6C[scaled_index_6 + 18215720];
      }
    }
    comparison_result = (int)buffer_cursor[3652] <= 0;
    iteration_count_3 = 0;
    integer_difference = scaled_index_2;
    if ( !comparison_result )
    {
      running_total = buffer_cursor + 3674;
      scaled_index_7 = 47 * scaled_index_2;
      do
      {
        scaled_index_8 = (int)*(running_total - 21);
        weighted_sum_14 = *(float *)&dword_140404A6C[scaled_index_7 + 18215728];
        combined_products_4 = *((float *)running_total - 11) + *((float *)running_total + 8);
        weighted_sum_15 = *(float *)&dword_140404A6C[scaled_index_7 + 18215729];
        combined_products_5 = *((float *)running_total - 12) * *(float *)&dword_140404A6C[scaled_index_7 + 18215726];
        weighted_sum_16 = *(float *)&dword_140404A6C[47 * scaled_index_8 + 18215716];
        combined_products_6 = (float)(*((float *)running_total - 10) * *(float *)&dword_140404A6C[scaled_index_7 + 18215731])
            + *(float *)&dword_140404A6C[scaled_index_7 + 18215716];
        combined_products_7 = (float)(*((float *)running_total - 10) * *(float *)&dword_140404A6C[scaled_index_7 + 18215732])
            + *(float *)&dword_140404A6C[scaled_index_7 + 18215717];
        combined_products_8 = *(float *)&dword_140404A6C[scaled_index_7 + 18215727]
             * (float)(*(float *)&dword_140404A6C[47 * scaled_index_8 + 18215715]
                     - (float)((float)((float)(*((float *)running_total - 12) * *(float *)&dword_140404A6C[scaled_index_7 + 18215724])
                                     + (float)(*(float *)&dword_140404A6C[scaled_index_7 + 18215727] * combined_products_4))
                             + (float)((float)(*((float *)running_total - 10) * *(float *)&dword_140404A6C[scaled_index_7 + 18215730])
                                     + *(float *)&dword_140404A6C[scaled_index_7 + 18215715])));
        combined_products_9 = (float)(weighted_sum_14 * combined_products_4) + (float)(*((float *)running_total - 12) * *(float *)&dword_140404A6C[scaled_index_7 + 18215725]);
        sr_mesh_ray_start[0] = *(float *)&dword_140404A6C[47 * scaled_index_8 + 18215715]
             - (float)((float)((float)(*((float *)running_total - 12) * *(float *)&dword_140404A6C[scaled_index_7 + 18215724])
                             + (float)(*(float *)&dword_140404A6C[scaled_index_7 + 18215727] * combined_products_4))
                     + (float)((float)(*((float *)running_total - 10) * *(float *)&dword_140404A6C[scaled_index_7 + 18215730])
                             + *(float *)&dword_140404A6C[scaled_index_7 + 18215715]));
        component_sum_2 = combined_products_9 + combined_products_6;
        weighted_sum_17 = *(float *)&dword_140404A6C[47 * scaled_index_8 + 18215717];
        sr_mesh_ray_start[1] = weighted_sum_16 - component_sum_2;
        sr_mesh_ray_start[2] = weighted_sum_17 - (float)((float)((float)(weighted_sum_15 * combined_products_4) + combined_products_5) + combined_products_7);
        limited_value_6 = fmaxf((float)((float)(weighted_sum_14 * (float)(weighted_sum_16 - component_sum_2)) + combined_products_8) + (float)(sr_mesh_ray_start[2] * weighted_sum_15), -1.0);
        if ( limited_value_6 > 1.0 )
          limited_value_6 = 1.0;
        weighted_sum_18 = *(float *)&dword_140404A6C[47 * scaled_index_8 + 18215755];
        *((float *)running_total + 7) = limited_value_6;
        *((float *)running_total + 12) = weighted_sum_18;
        if ( weighted_sum_18 >= 0.0 )
        {
          if ( weighted_sum_18 > 1.0 )
            running_total[12] = 1065353216;
        }
        else
        {
          running_total[12] = 0;
        }
        *((float *)running_total - 4) = *((float *)running_total - 5) + *((float *)running_total - 4);
        sub_14010D0D0(iteration_count, iteration_count_3);
        scaled_index_9 = (int)*(running_total - 21);
        ++iteration_count_3;
        state_address_6 = &dword_140404A6C[47 * scaled_index_9 + 18215715];
        *(running_total - 2) = *state_address_6;
        *(running_total - 1) = state_address_6[1];
        *running_total = state_address_6[2];
        state_address_7 = &dword_140404A6C[47 * scaled_index_9 + 18215718];
        running_total[4] = *state_address_7;
        running_total[5] = state_address_7[1];
        running_total[6] = state_address_7[2];
        running_total += 43;
      }
      while ( iteration_count_3 < (int)buffer_cursor[3652] );
      state_address_4 = (float *)state_address_30;
    }
    scaled_index_10 = 45072LL * (int)*(buffer_cursor - 11);
    iteration_count_4 = 0;
    if ( (int)dword_140404A6C[scaled_index_10 + 335161466] > 0 )
    {
      lookup_index = integer_difference;
      state_address_8 = (float *)&dword_140404A6C[scaled_index_10 + 335161468];
      do
      {
        scaled_value_9 = *state_address_8;
        weighted_sum_19 = *state_address_8 * *((float *)buffer_cursor + 8);
        product_difference_9 = *(state_address_8 - 1);
        weighted_sum_20 = (float)(product_difference_9 * *((float *)buffer_cursor + 7)) + *((float *)buffer_cursor + 1);
        weighted_sum_21 = (float)(product_difference_9 * *((float *)buffer_cursor + 6)) + *(float *)buffer_cursor;
        combined_products_10 = (float)(*(state_address_8 - 1) * *((float *)buffer_cursor + 5)) + *((float *)buffer_cursor - 1);
        sr_mesh_ray_start[0] = combined_products_10 + weighted_sum_19;
        weighted_sum_22 = weighted_sum_21 + (float)(scaled_value_9 * *((float *)buffer_cursor + 9));
        weighted_sum_23 = weighted_sum_20 + (float)(scaled_value_9 * *((float *)buffer_cursor + 10));
        source_component_y = state_address_8[1];
        weighted_sum_24 = source_component_y * *((float *)buffer_cursor + 11);
        sr_mesh_ray_start[1] = weighted_sum_22;
        sr_mesh_ray_start[2] = weighted_sum_23;
        sr_mesh_ray_end[0] = (float)(weighted_sum_24 + weighted_sum_19) + combined_products_10;
        weighted_sum_25 = (float)(source_component_y * *((float *)buffer_cursor + 12)) + weighted_sum_22;
        weighted_sum_26 = (float)(source_component_y * *((float *)buffer_cursor + 13)) + weighted_sum_23;
        sr_mesh_ray_end[1] = weighted_sum_25;
        sr_mesh_ray_end[2] = weighted_sum_26;
        if ( (unsigned int)sub_1400DC050(state_address_4, &sr_mesh_ray_end[0], 0) )
        {
          layer = item_hit_layer;
          source_component_z = sr_mesh_ray_end[2];
          selection_flag = 0;
          source_component_y_2 = sr_mesh_ray_end[1];
          source_component_x = sr_mesh_ray_end[0];
          if ( item_hit_layer != -1 )
          {
            x = g_151A848D8;
            if ( g_151A848D8 != -1 )
            {
              state_word = g_151A848F0;
              z = g_151A848E0;
              y = g_151A848DC;
              if ( item_hit_layer <= 3
                && (g_151A848D8 & 0x80000000) == 0
                && (g_151A848F0 & 0xE0000000) == 0x80000000
                && (g_151A848F4 & 0x10000) != 0 )
              {
                loword_result = LOWORD(g_151A848F4);
                if ( game_connected )
                {
                  cached_world_event_count_3 = world_event_count;
                  shifted_bits_5 = (__int64)(int)world_event_count << 7;
                  *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_5) = 16;
                  *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_5) = game_tick;
                  *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_5) = layer + (x << 16);
                  *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_5) = y + (z << 16);
                  *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_5) = state_word;
                  *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_5) = loword_result;
                  *(float *)((char *)&g_1873DE468 + shifted_bits_5) = source_component_x;
                  *(float *)((char *)&g_1873DE46C + shifted_bits_5) = source_component_y_2;
                  *(float *)((char *)&g_1873DE470 + shifted_bits_5) = source_component_z;
                  if ( buffer_cursor == (unsigned int *)-92LL )
                  {
                    table_value_6 = 0;
                    table_value_7 = 0;
                    table_value_8 = 0;
                  }
                  else
                  {
                    table_value_6 = buffer_cursor[25];
                    table_value_7 = buffer_cursor[24];
                    table_value_8 = buffer_cursor[23];
                  }
                  *(unsigned int *)((char *)&g_1873DE474 + shifted_bits_5) = table_value_8;
                  *(unsigned int *)((char *)&g_1873DE478 + shifted_bits_5) = table_value_7;
                  *(unsigned int *)((char *)&g_1873DE47C + shifted_bits_5) = table_value_6;
                  world_event_count = cached_world_event_count_3 + 1;
                  HIWORD(world_event_count) = 0;
                  lookup_index = integer_difference;
                }
                sr_world_set_block_unknown_3008(layer, x, y, z, state_word | (0x10000 << loword_result));
                selection_flag = 1;
              }
              else
              {
                selection_flag = 0;
              }
            }
          }
          comparison_operand = (ragdoll_unknown_height);
          scaled_value_10 = *(float *)&g_151A84880;
          scaled_value_11 = *(float *)&g_151A84888;
          normal = *(_QWORD *)&g_151A8488C;
          LODWORD(float_word_7) = *(unsigned int *)&g_151A84894;
          sr_mesh_ray_start[1] = (ragdoll_unknown_height) - source_component_y_2;
          sr_mesh_ray_start[0] = *(float *)&g_151A84880 - source_component_x;
          sr_mesh_ray_start[2] = *(float *)&g_151A84888 - source_component_z;
          combined_products_11 = (float)((float)(g_151A84890
                               * (float)((ragdoll_unknown_height) - source_component_y_2))
                       + (float)(g_151A8488C
                               * (float)(*(float *)&g_151A84880 - source_component_x)))
               + (float)(g_151A84894 * (float)(*(float *)&g_151A84888 - source_component_z));
          if ( item_hit_block_part == -1 )
          {
            comparison_result = *state_address_8 >= 0.0;
            sr_mesh_ray_start[0] = (float)(*(float *)&dword_1402F6188 * 0.25) + source_component_x;
            sr_mesh_ray_start[1] = (float)(*(float *)&dword_1402F618C * 0.25) + source_component_y_2;
            sr_mesh_ray_start[2] = (float)(*(float *)&dword_1402F6190 * 0.25) + source_component_z;
            if ( !comparison_result )
            {
              call_result = sub_1400DC050(&sr_mesh_ray_start[0], &sr_mesh_ray_end[0], 0);
              comparison_operand = (ragdoll_unknown_height);
              scaled_value_10 = *(float *)&g_151A84880;
              scaled_value_11 = *(float *)&g_151A84888;
              if ( call_result )
              {
                normal = *(_QWORD *)&g_151A8488C;
                LODWORD(float_word_7) = *(unsigned int *)&g_151A84894;
                combined_products_11 = (float)((float)((float)((ragdoll_unknown_height) - sr_mesh_ray_end[1])
                                     * g_151A84890)
                             + (float)((float)(*(float *)&g_151A84880 - sr_mesh_ray_end[0])
                                     * g_151A8488C))
                     + (float)((float)(*(float *)&g_151A84888 - sr_mesh_ray_end[2])
                             * g_151A84894);
              }
            }
            depth_scale = 0.015625;
            stiffness = 1023410176;
            if ( selection_flag )
            {
              depth_scale = 0.001953125;
              stiffness = 998244352;
            }
            LODWORD(packed_word_bits) = stiffness;
            *(float *)&float_word_6[10] = depth_scale;
            float_word_6[8] = 1058642330;
            combined_products_12 = comparison_operand - *(float *)&dword_140404A6C[47 * lookup_index + 18215716];
            combined_products_13 = scaled_value_11 - *(float *)&dword_140404A6C[47 * lookup_index + 18215717];
            sr_mesh_ray_start[0] = scaled_value_10 - *(float *)&dword_140404A6C[47 * lookup_index + 18215715];
            sr_mesh_ray_start[1] = combined_products_12;
            sr_mesh_ray_start[2] = combined_products_13;
            sr_physics_add_world_contact(
              body,
              (unsigned int *)&sr_mesh_ray_start[0],
              (unsigned int *)&normal,
              fminf(combined_products_11, 0.125),
              0x3F19999Au,
              depth_scale,
              stiffness);
            state_address_4 = (float *)state_address_30;
          }
          else
          {
            state_address_4 = (float *)state_address_30;
          }
        }
        ++iteration_count_4;
        state_address_8 += 3;
      }
      while ( iteration_count_4 < (int)dword_140404A6C[scaled_index_10 + 335161466] );
    }
    iteration_count = saved_iteration_count;
LABEL_106:
    ++iteration_count;
    state_address_4 += 5210;
    saved_iteration_count = iteration_count;
    buffer_cursor += 5210;
    state_address_30 = (unsigned int *)state_address_4;
    if ( iteration_count < 512 )
      continue;
    break;
  }
  state_address_9 = &g_15F2D9258;
  do
  {
    if ( *(state_address_9 - 22) && *(state_address_9 - 21) == 17 && (int)state_address_9[5019] > 0 )
    {
      scaled_index_11 = 47LL * (int)state_address_9[5020];
      weighted_sum_27 = *(float *)&dword_140404A6C[scaled_index_11 + 18215729];
      state_address_10 = (float *)&dword_140404A6C[47 * *(state_address_9 - 12) + 18215727];
      scaled_value_12 = *state_address_10;
      weighted_sum_28 = *state_address_10 * *(float *)&dword_140404A6C[scaled_index_11 + 18215728];
      state_address_11 = (float)(*(float *)&dword_140404A6C[scaled_index_11 + 18215728] * state_address_10[2]) - (float)(weighted_sum_27 * state_address_10[1]);
      weighted_sum_29 = *(float *)&dword_140404A6C[scaled_index_11 + 18215727];
      scaled_value_13 = weighted_sum_29 * state_address_10[1];
      scaled_value_14 = weighted_sum_29 * state_address_10[2];
      scaled_index_12 = *(state_address_9 - 2);
      scaled_index_13 = 18LL * (int)state_address_9[5033];
      *(float *)&dword_140404A6C[2 * scaled_index_13 + 485543033] = state_address_11 * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_13 + 485543035] = (float)(scaled_value_13 - weighted_sum_28) * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_13 + 485543034] = (float)((float)(scaled_value_12 * weighted_sum_27) - scaled_value_14) * 0.0625;
      dword_140404A6C[2 * scaled_index_13 + 485543052] = 1;
      dword_140404A6C[2 * scaled_index_13 + 485543053] = scaled_index_12;
      dword_140404A6C[2 * scaled_index_13 + 485543054] = *(state_address_9 - 1);
      dword_140404A6C[2 * scaled_index_13 + 485543055] = *state_address_9;
    }
    if ( state_address_9[5188] && state_address_9[5189] == 17 && (int)state_address_9[10229] > 0 )
    {
      scaled_index_14 = 47LL * (int)state_address_9[10230];
      weighted_sum_30 = *(float *)&dword_140404A6C[scaled_index_14 + 18215729];
      state_address_12 = (float *)&dword_140404A6C[47 * state_address_9[5198] + 18215727];
      scaled_value_15 = *state_address_12;
      weighted_sum_31 = *state_address_12 * *(float *)&dword_140404A6C[scaled_index_14 + 18215728];
      state_address_13 = (float)(*(float *)&dword_140404A6C[scaled_index_14 + 18215728] * state_address_12[2]) - (float)(weighted_sum_30 * state_address_12[1]);
      weighted_sum_32 = *(float *)&dword_140404A6C[scaled_index_14 + 18215727];
      scaled_value_16 = weighted_sum_32 * state_address_12[1];
      scaled_value_17 = weighted_sum_32 * state_address_12[2];
      table_value_9 = state_address_9[5208];
      scaled_index_15 = 18LL * (int)state_address_9[10243];
      *(float *)&dword_140404A6C[2 * scaled_index_15 + 485543033] = state_address_13 * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_15 + 485543034] = (float)((float)(scaled_value_15 * weighted_sum_30) - scaled_value_17) * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_15 + 485543035] = (float)(scaled_value_16 - weighted_sum_31) * 0.0625;
      dword_140404A6C[2 * scaled_index_15 + 485543052] = 1;
      dword_140404A6C[2 * scaled_index_15 + 485543053] = table_value_9;
      dword_140404A6C[2 * scaled_index_15 + 485543054] = state_address_9[5209];
      dword_140404A6C[2 * scaled_index_15 + 485543055] = state_address_9[5210];
    }
    if ( state_address_9[10398] && state_address_9[10399] == 17 && (int)state_address_9[15439] > 0 )
    {
      scaled_index_16 = 47LL * (int)state_address_9[15440];
      weighted_sum_33 = *(float *)&dword_140404A6C[scaled_index_16 + 18215729];
      state_address_14 = (float *)&dword_140404A6C[47 * state_address_9[10408] + 18215727];
      scaled_value_18 = *state_address_14;
      weighted_sum_34 = *state_address_14 * *(float *)&dword_140404A6C[scaled_index_16 + 18215728];
      state_address_15 = (float)(*(float *)&dword_140404A6C[scaled_index_16 + 18215728] * state_address_14[2]) - (float)(weighted_sum_33 * state_address_14[1]);
      weighted_sum_35 = *(float *)&dword_140404A6C[scaled_index_16 + 18215727];
      scaled_value_19 = weighted_sum_35 * state_address_14[1];
      scaled_value_20 = weighted_sum_35 * state_address_14[2];
      table_value_10 = state_address_9[10418];
      scaled_index_17 = 18LL * (int)state_address_9[15453];
      *(float *)&dword_140404A6C[2 * scaled_index_17 + 485543033] = state_address_15 * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_17 + 485543034] = (float)((float)(scaled_value_18 * weighted_sum_33) - scaled_value_20) * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_17 + 485543035] = (float)(scaled_value_19 - weighted_sum_34) * 0.0625;
      dword_140404A6C[2 * scaled_index_17 + 485543052] = 1;
      dword_140404A6C[2 * scaled_index_17 + 485543053] = table_value_10;
      dword_140404A6C[2 * scaled_index_17 + 485543054] = state_address_9[10419];
      dword_140404A6C[2 * scaled_index_17 + 485543055] = state_address_9[10420];
    }
    if ( state_address_9[15608] && state_address_9[15609] == 17 && (int)state_address_9[20649] > 0 )
    {
      scaled_index_18 = 47LL * (int)state_address_9[20650];
      weighted_sum_36 = *(float *)&dword_140404A6C[scaled_index_18 + 18215729];
      state_address_16 = (float *)&dword_140404A6C[47 * state_address_9[15618] + 18215727];
      scaled_value_21 = *state_address_16;
      weighted_sum_37 = *state_address_16 * *(float *)&dword_140404A6C[scaled_index_18 + 18215728];
      state_address_17 = (float)(*(float *)&dword_140404A6C[scaled_index_18 + 18215728] * state_address_16[2]) - (float)(weighted_sum_36 * state_address_16[1]);
      weighted_sum_38 = *(float *)&dword_140404A6C[scaled_index_18 + 18215727];
      scaled_value_22 = weighted_sum_38 * state_address_16[1];
      scaled_value_23 = weighted_sum_38 * state_address_16[2];
      table_value_11 = state_address_9[15628];
      scaled_index_19 = 18LL * (int)state_address_9[20663];
      *(float *)&dword_140404A6C[2 * scaled_index_19 + 485543033] = state_address_17 * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_19 + 485543034] = (float)((float)(scaled_value_21 * weighted_sum_36) - scaled_value_23) * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_19 + 485543035] = (float)(scaled_value_22 - weighted_sum_37) * 0.0625;
      dword_140404A6C[2 * scaled_index_19 + 485543052] = 1;
      dword_140404A6C[2 * scaled_index_19 + 485543053] = table_value_11;
      dword_140404A6C[2 * scaled_index_19 + 485543054] = state_address_9[15629];
      dword_140404A6C[2 * scaled_index_19 + 485543055] = state_address_9[15630];
    }
    if ( state_address_9[20818] && state_address_9[20819] == 17 && (int)state_address_9[25859] > 0 )
    {
      scaled_index_20 = 47LL * (int)state_address_9[25860];
      weighted_sum_39 = *(float *)&dword_140404A6C[scaled_index_20 + 18215729];
      state_address_18 = (float *)&dword_140404A6C[47 * state_address_9[20828] + 18215727];
      scaled_value_24 = *state_address_18;
      weighted_sum_40 = *state_address_18 * *(float *)&dword_140404A6C[scaled_index_20 + 18215728];
      state_address_19 = (float)(*(float *)&dword_140404A6C[scaled_index_20 + 18215728] * state_address_18[2]) - (float)(weighted_sum_39 * state_address_18[1]);
      weighted_sum_41 = *(float *)&dword_140404A6C[scaled_index_20 + 18215727];
      scaled_value_25 = weighted_sum_41 * state_address_18[1];
      scaled_value_26 = weighted_sum_41 * state_address_18[2];
      table_value_12 = state_address_9[20838];
      scaled_index_21 = 18LL * (int)state_address_9[25873];
      *(float *)&dword_140404A6C[2 * scaled_index_21 + 485543033] = state_address_19 * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_21 + 485543034] = (float)((float)(scaled_value_24 * weighted_sum_39) - scaled_value_26) * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_21 + 485543035] = (float)(scaled_value_25 - weighted_sum_40) * 0.0625;
      dword_140404A6C[2 * scaled_index_21 + 485543052] = 1;
      dword_140404A6C[2 * scaled_index_21 + 485543053] = table_value_12;
      dword_140404A6C[2 * scaled_index_21 + 485543054] = state_address_9[20839];
      dword_140404A6C[2 * scaled_index_21 + 485543055] = state_address_9[20840];
    }
    if ( state_address_9[26028] && state_address_9[26029] == 17 && (int)state_address_9[31069] > 0 )
    {
      scaled_index_22 = 47LL * (int)state_address_9[31070];
      weighted_sum_42 = *(float *)&dword_140404A6C[scaled_index_22 + 18215729];
      state_address_20 = (float *)&dword_140404A6C[47 * state_address_9[26038] + 18215727];
      scaled_value_27 = *state_address_20;
      weighted_sum_43 = *state_address_20 * *(float *)&dword_140404A6C[scaled_index_22 + 18215728];
      state_address_21 = (float)(*(float *)&dword_140404A6C[scaled_index_22 + 18215728] * state_address_20[2]) - (float)(weighted_sum_42 * state_address_20[1]);
      weighted_sum_44 = *(float *)&dword_140404A6C[scaled_index_22 + 18215727];
      scaled_value_28 = weighted_sum_44 * state_address_20[1];
      scaled_value_29 = weighted_sum_44 * state_address_20[2];
      table_value_13 = state_address_9[26048];
      scaled_index_23 = 18LL * (int)state_address_9[31083];
      *(float *)&dword_140404A6C[2 * scaled_index_23 + 485543033] = state_address_21 * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_23 + 485543034] = (float)((float)(scaled_value_27 * weighted_sum_42) - scaled_value_29) * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_23 + 485543035] = (float)(scaled_value_28 - weighted_sum_43) * 0.0625;
      dword_140404A6C[2 * scaled_index_23 + 485543052] = 1;
      dword_140404A6C[2 * scaled_index_23 + 485543053] = table_value_13;
      dword_140404A6C[2 * scaled_index_23 + 485543054] = state_address_9[26049];
      dword_140404A6C[2 * scaled_index_23 + 485543055] = state_address_9[26050];
    }
    if ( state_address_9[31238] && state_address_9[31239] == 17 && (int)state_address_9[36279] > 0 )
    {
      scaled_index_24 = 47LL * (int)state_address_9[36280];
      weighted_sum_45 = *(float *)&dword_140404A6C[scaled_index_24 + 18215729];
      state_address_22 = (float *)&dword_140404A6C[47 * state_address_9[31248] + 18215727];
      scaled_value_30 = *state_address_22;
      weighted_sum_46 = *state_address_22 * *(float *)&dword_140404A6C[scaled_index_24 + 18215728];
      state_address_23 = (float)(*(float *)&dword_140404A6C[scaled_index_24 + 18215728] * state_address_22[2]) - (float)(weighted_sum_45 * state_address_22[1]);
      weighted_sum_47 = *(float *)&dword_140404A6C[scaled_index_24 + 18215727];
      scaled_value_31 = weighted_sum_47 * state_address_22[1];
      scaled_value_32 = weighted_sum_47 * state_address_22[2];
      table_value_14 = state_address_9[31258];
      scaled_index_25 = 18LL * (int)state_address_9[36293];
      *(float *)&dword_140404A6C[2 * scaled_index_25 + 485543033] = state_address_23 * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_25 + 485543034] = (float)((float)(scaled_value_30 * weighted_sum_45) - scaled_value_32) * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_25 + 485543035] = (float)(scaled_value_31 - weighted_sum_46) * 0.0625;
      dword_140404A6C[2 * scaled_index_25 + 485543052] = 1;
      dword_140404A6C[2 * scaled_index_25 + 485543053] = table_value_14;
      dword_140404A6C[2 * scaled_index_25 + 485543054] = state_address_9[31259];
      dword_140404A6C[2 * scaled_index_25 + 485543055] = state_address_9[31260];
    }
    if ( state_address_9[36448] && state_address_9[36449] == 17 && (int)state_address_9[41489] > 0 )
    {
      scaled_index_26 = 47LL * (int)state_address_9[41490];
      weighted_sum_48 = *(float *)&dword_140404A6C[scaled_index_26 + 18215729];
      state_address_24 = (float *)&dword_140404A6C[47 * state_address_9[36458] + 18215727];
      scaled_value_33 = *state_address_24;
      weighted_sum_49 = *state_address_24 * *(float *)&dword_140404A6C[scaled_index_26 + 18215728];
      state_address_25 = (float)(*(float *)&dword_140404A6C[scaled_index_26 + 18215728] * state_address_24[2]) - (float)(weighted_sum_48 * state_address_24[1]);
      weighted_sum_50 = *(float *)&dword_140404A6C[scaled_index_26 + 18215727];
      scaled_value_34 = weighted_sum_50 * state_address_24[1];
      scaled_value_35 = weighted_sum_50 * state_address_24[2];
      table_value_15 = state_address_9[36468];
      scaled_index_27 = 18LL * (int)state_address_9[41503];
      *(float *)&dword_140404A6C[2 * scaled_index_27 + 485543033] = state_address_25 * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_27 + 485543034] = (float)((float)(scaled_value_33 * weighted_sum_48) - scaled_value_35) * 0.0625;
      *(float *)&dword_140404A6C[2 * scaled_index_27 + 485543035] = (float)(scaled_value_34 - weighted_sum_49) * 0.0625;
      dword_140404A6C[2 * scaled_index_27 + 485543052] = 1;
      dword_140404A6C[2 * scaled_index_27 + 485543053] = table_value_15;
      dword_140404A6C[2 * scaled_index_27 + 485543054] = state_address_9[36469];
      dword_140404A6C[2 * scaled_index_27 + 485543055] = state_address_9[36470];
    }
    state_address_9 += 41680;
  }
  while ( (__int64)state_address_9 < (__int64)&g_15FD06258 );
  remaining_count = 512;
  g_16B2A2EA0 = 1;
  integer_difference = 512;
  position_a = &g_15F2D922C;
  state_address_26 = (float *)&g_15F2D92B8;
  do
  {
    if ( *((_DWORD *)state_address_26 - 46) )
    {
      loaded_word_3 = *((int *)state_address_26 - 45);
      sr_world_grid_query_items((int *)&callee_output_word, (int *)position_a + 39, (int *)position_a + 42);
      if ( (int)callee_output_word > 0 )
      {
        record_byte_offset = &callee_output_word_2;
        remaining_count_2 = callee_output_word;
        do
        {
          loaded_word_4 = 1760LL * *(int *)record_byte_offset;
          if ( *(float *)&dword_140404A6C[loaded_word_4 + 278845958] <= state_address_26[1]
            && *(float *)&dword_140404A6C[loaded_word_4 + 278845961] >= *(state_address_26 - 2)
            && *(float *)&dword_140404A6C[loaded_word_4 + 278845960] <= state_address_26[3]
            && *(float *)&dword_140404A6C[loaded_word_4 + 278845963] >= *state_address_26
            && *(float *)&dword_140404A6C[loaded_word_4 + 278845959] <= state_address_26[2]
            && *(float *)&dword_140404A6C[loaded_word_4 + 278845962] >= *(state_address_26 - 1) )
          {
            if ( (_DWORD)loaded_word_3 == 17
              && (scaled_index_28 = 1268LL * (int)dword_140404A6C[loaded_word_4 + 278845898], dword_140404A6C[scaled_index_28 + 278521285] == 1) )
            {
              collision_mesh_contact_result = sr_collision_mesh_contact(
                       *((_DWORD *)state_address_26 - 36),
                       dword_140404A6C[loaded_word_4 + 278845915],
                       (__int64)&g_1905A2DC8,
                       (__int64)&dword_140404A6C[scaled_index_28 + 278522365],
                       (float *)position_a,
                       (float *)position_a + 6,
                       (float *)&dword_140404A6C[loaded_word_4 + 278845916],
                       (float *)&dword_140404A6C[loaded_word_4 + 278845934],
                       1);
            }
            else
            {
              collision_mesh_contact_result = sub_14004A7A0(
                       *((_DWORD *)state_address_26 - 36),
                       dword_140404A6C[loaded_word_4 + 278845915],
                       (int *)&dword_140404A6C[45072 * loaded_word_3 + 335202129],
                       (int *)&dword_140404A6C[1268 * dword_140404A6C[loaded_word_4 + 278845898] + 278522247],
                       (float *)position_a,
                       (float *)position_a + 6,
                       (float *)&dword_140404A6C[loaded_word_4 + 278845916],
                       (float *)&dword_140404A6C[loaded_word_4 + 278845934]);
            }
            if ( collision_mesh_contact_result )
              *(_QWORD *)&dword_140404A6C[loaded_word_4 + 278845895] = 0;
          }
          record_byte_offset += 8;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        remaining_count = integer_difference;
      }
    }
    position_a += 5210;
    state_address_26 += 5210;
    integer_difference = --remaining_count;
  }
  while ( remaining_count );
  state_address_27 = &g_15F2D922C;
  saved_state_address = state_address_32;
  g_16B2A2EA0 = 0;
  iteration_count_5 = 0;
  saved_iteration_count = 0;
  do
  {
    if ( *(saved_state_address - 12) && *(saved_state_address - 10) != 3 )
    {
      iteration_count_6 = 0;
      state_address_28 = &g_15F2D9208;
      do
      {
        if ( iteration_count_6 != iteration_count_5 )
        {
          if ( *(state_address_28 - 2) )
          {
            if ( *state_address_28 != 3
              && saved_state_address[3454] != iteration_count_6
              && state_address_28[3464] != iteration_count_5
              && *((float *)state_address_28 + 42) <= *((float *)saved_state_address + 35)
              && *((float *)state_address_28 + 43) <= *((float *)saved_state_address + 36)
              && *((float *)state_address_28 + 44) <= *((float *)saved_state_address + 37)
              && *((float *)state_address_28 + 45) >= *((float *)saved_state_address + 32)
              && *((float *)state_address_28 + 46) >= *((float *)saved_state_address + 33)
              && *((float *)state_address_28 + 47) >= *((float *)saved_state_address + 34) )
            {
              scaled_index_29 = (int)*(saved_state_address - 11);
              if ( (_DWORD)scaled_index_29 != 10 || *(state_address_28 - 1) != 11 )
              {
                scaled_index_30 = 45072 * scaled_index_29;
                iteration_count_7 = 0;
                if ( (int)dword_140404A6C[45072 * scaled_index_29 + 335161466] > 0 )
                {
                  saved_state_address_2 = (float *)state_address_31;
                  state_address_29 = (float *)&dword_140404A6C[scaled_index_30 + 335161468];
                  do
                  {
                    scaled_value_36 = *state_address_29;
                    weighted_sum_51 = *state_address_29 * *((float *)saved_state_address + 8);
                    product_difference_10 = *(state_address_29 - 1);
                    weighted_sum_52 = (float)(product_difference_10 * *((float *)saved_state_address + 7)) + *((float *)saved_state_address + 1);
                    weighted_sum_53 = (float)(product_difference_10 * *((float *)saved_state_address + 6)) + *(float *)saved_state_address;
                    combined_products_14 = (float)(*(state_address_29 - 1) * *((float *)saved_state_address + 5)) + *((float *)saved_state_address - 1);
                    sr_mesh_ray_start[0] = combined_products_14 + weighted_sum_51;
                    weighted_sum_54 = weighted_sum_53 + (float)(scaled_value_36 * *((float *)saved_state_address + 9));
                    weighted_sum_55 = weighted_sum_52 + (float)(scaled_value_36 * *((float *)saved_state_address + 10));
                    source_component_y_3 = state_address_29[1];
                    weighted_sum_56 = source_component_y_3 * *((float *)saved_state_address + 11);
                    sr_mesh_ray_start[1] = weighted_sum_54;
                    sr_mesh_ray_start[2] = weighted_sum_55;
                    sr_mesh_ray_end[0] = (float)(weighted_sum_56 + weighted_sum_51) + combined_products_14;
                    weighted_sum_57 = (float)(source_component_y_3 * *((float *)saved_state_address + 12)) + weighted_sum_54;
                    weighted_sum_58 = (float)(source_component_y_3 * *((float *)saved_state_address + 13)) + weighted_sum_55;
                    sr_mesh_ray_end[1] = weighted_sum_57;
                    sr_mesh_ray_end[2] = weighted_sum_58;
                    if ( (unsigned int)sub_1400E21F0(iteration_count_6, saved_state_address_2, &sr_mesh_ray_end[0]) )
                    {
                      body_a = (int)*(saved_state_address - 2);
                      body_b = (int)state_address_28[8];
                      unused_written_slot_2 = 1023410176;
                      unused_written_slot = 1015021568;
                      LODWORD(packed_word_bits) = 1053609165;
                      combined_products_15 = (ragdoll_unknown_height) - *(float *)&dword_140404A6C[47 * body_a + 18215716];
                      sr_mesh_ray_start[0] = *(float *)&g_151A84880 - *(float *)&dword_140404A6C[47 * body_a + 18215715];
                      combined_products_16 = *(float *)&g_151A84888 - *(float *)&dword_140404A6C[47 * body_a + 18215717];
                      sr_mesh_ray_start[1] = combined_products_15;
                      sr_mesh_ray_start[2] = combined_products_16;
                      combined_products_17 = (ragdoll_unknown_height) - *(float *)&dword_140404A6C[47 * body_b + 18215716];
                      *(float *)&normal = *(float *)&g_151A84880
                                      - *(float *)&dword_140404A6C[47 * body_b + 18215715];
                      combined_products_18 = *(float *)&g_151A84888 - *(float *)&dword_140404A6C[47 * body_b + 18215717];
                      *((float *)&normal + 1) = combined_products_17;
                      *(float *)&float_word_7 = combined_products_18;
                      sr_physics_add_contact(
                        body_a,
                        body_b,
                        (unsigned int *)&sr_mesh_ray_start[0],
                        (unsigned int *)&normal,
                        (unsigned int *)&g_151A8488C,
                        fminf(
                          (float)((float)((float)((ragdoll_unknown_height) - sr_mesh_ray_end[1])
                                        * g_151A84890)
                                + (float)((float)(*(float *)&g_151A84880 - sr_mesh_ray_end[0])
                                        * g_151A8488C))
                        + (float)((float)(*(float *)&g_151A84888 - sr_mesh_ray_end[2])
                                * g_151A84894),
                          0.125),
                        0x3ECCCCCDu,
                        0.015625,
                        0x3D000000u);
                    }
                    ++iteration_count_7;
                    state_address_29 += 3;
                  }
                  while ( iteration_count_7 < (int)dword_140404A6C[scaled_index_30 + 335161466] );
                  iteration_count_5 = saved_iteration_count;
                }
              }
            }
          }
        }
        ++iteration_count_6;
        state_address_28 += 5210;
      }
      while ( iteration_count_6 < 512 );
      state_address_27 = state_address_31;
    }
    ++iteration_count_5;
    state_address_27 += 5210;
    saved_state_address += 5210;
    saved_iteration_count = iteration_count_5;
    state_address_31 = state_address_27;
  }
  while ( iteration_count_5 < 512 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef float_word_6
#undef packed_word_bits
#undef unused_written_slot
#undef unused_written_slot_2
#undef saved_iteration_count
#undef normal
#undef float_word_7
#undef integer_difference
#undef state_address_30
#undef body
#undef state_address_31
#undef state_address_32
#undef callee_output_word
#undef callee_output_word_2
#undef unused_frame_slot_2240

//----- (000000014010D0D0) ----------------------------------------------------
__int64            sub_14010D0D0(int a1, int a2)
{
  int iteration_count;
  __int64 record_word_offset;
  __int64 saved_record_word_offset;
  unsigned __int64 body;
  float weighted_sum;
  unsigned __int64 saved_body;
  float weighted_sum_2;
  float component_sum;
  float component_delta;
  float weighted_sum_3;
  float component_sum_2;
  float weighted_sum_4;
  float component_delta_2;
  float component_delta_3;
  float component_sum_3;
  int scaled_index;
  int scaled_index_2;
  int scaled_index_3;
  int scaled_index_4;
  unsigned __int64 iteration_count_2;
  __int64 element_index;
  __int64 record_byte_offset;
  __int64 remaining_count;
  unsigned __int64 element_index_2;
  __int64 remaining_count_2;
  __int64 element_index_3;
  __int64 scaled_index_5;
  __int64 saved_iteration_count;
  __int64 element_index_4;
  __int64 slodword_result;
  __int64 scaled_index_6;
  int iteration_count_3;
  __int64 scaled_index_7;
  float packed_word_bits;
  float packed_word_bits_2;
  float weighted_sum_5;
  float weighted_sum_6;
  float state_address;
  float weighted_sum_7;
  float weighted_sum_8;
  float combined_products;
  float depth;
  float combined_products_2;
  float combined_products_3;
  float depth_2;
  float combined_products_4;
  __int64 unused_local;
  _Alignas(8) uint32_t sr_actor_contact_point[3];
  _Alignas(8) uint32_t sr_actor_contact_offset[3];
  float sr_actor_contact_result[8];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010D0D0[99232];
#define cached_scaled_index (*(int (*))(void *)(sr_frame_14010D0D0 + 0)) /* [rsp+40h] */
#define saved_body_2 (*(int (*))(void *)(sr_frame_14010D0D0 + 4)) /* [rsp+44h] */
#define list (*(int (*)[12292])(void *)(sr_frame_14010D0D0 + 49760)) /* [rsp+C2A0h] */
#define box_max (*(float (*)[4])(void *)(sr_frame_14010D0D0 + 98928)) /* [rsp+182B0h] */
#define box_min (*(float (*)[68])(void *)(sr_frame_14010D0D0 + 98944)) /* [rsp+182C0h] */
#define unused_frame_slot_99216 (*(__int64 (*))(void *)(sr_frame_14010D0D0 + 99216)) /* [rsp+183D0h] */

  iteration_count = 0;
  list[0] = 0;
  list[12289] = 0;
  record_word_offset = 172LL * a2 + 20840LL * a1;
  saved_record_word_offset = record_word_offset;
  body = *(int *)((char *)&g_15F2DCB44 + record_word_offset);
  weighted_sum = *(float *)((char *)&g_15F2DCB78 + record_word_offset) + *(float *)((char *)&g_15F2DCB48 + record_word_offset);
  (*(int64_t *)(void *)sr_actor_contact_offset) = record_word_offset;
  saved_body = body;
  saved_body_2 = body;
  (*(uint64_t *)(void *)sr_actor_contact_point) = body;
  weighted_sum_2 = *(float *)&dword_140404A6C[47 * body + 18215715];
  component_sum = weighted_sum + weighted_sum_2;
  component_delta = weighted_sum_2 - weighted_sum;
  weighted_sum_3 = *(float *)&dword_140404A6C[47 * body + 18215716];
  component_sum_2 = weighted_sum + weighted_sum_3;
  weighted_sum_4 = *(float *)&dword_140404A6C[47 * body + 18215717];
  component_delta_2 = weighted_sum_3 - weighted_sum;
  component_delta_3 = weighted_sum_4 - weighted_sum;
  box_max[0] = component_sum;
  component_sum_3 = weighted_sum + weighted_sum_4;
  box_min[0] = component_delta;
  box_max[1] = component_sum_2;
  box_min[1] = component_delta_2;
  scaled_index = (int)(float)(component_delta * 0.015625);
  box_min[2] = component_delta_3;
  scaled_index_2 = (int)(float)(component_delta_3 * 0.015625);
  scaled_index_3 = (int)(float)(component_sum * 0.015625);
  box_max[2] = component_sum_3;
  cached_scaled_index = scaled_index_3;
  scaled_index_4 = (int)(float)(component_sum_3 * 0.015625);
  if ( scaled_index_2 <= scaled_index_4 )
  {
    iteration_count_2 = scaled_index_2;
    element_index = 0;
    record_byte_offset = (__int64)scaled_index_2 << 6;
    remaining_count = (unsigned int)(scaled_index_4 - scaled_index_2 + 1);
    do
    {
      if ( iteration_count_2 <= 0x3F && scaled_index <= scaled_index_3 )
      {
        element_index_2 = scaled_index;
        remaining_count_2 = (unsigned int)(scaled_index_3 - scaled_index + 1);
        do
        {
          if ( element_index_2 <= 0x3F )
          {
            element_index_3 = 0;
            scaled_index_5 = (int)dword_140404A6C[9 * record_byte_offset + 254352099 + 9 * element_index_2];
            if ( scaled_index_5 > 0 )
            {
              do
              {
                if ( element_index < 64 )
                {
                  ++iteration_count;
                  LODWORD(box_min[element_index++ + 4]) = dword_140404A6C[8 * record_byte_offset + 254352100 + 8 * element_index_2 + record_byte_offset + element_index_2 + element_index_3];
                }
                ++element_index_3;
              }
              while ( element_index_3 < scaled_index_5 );
            }
          }
          ++element_index_2;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        scaled_index_3 = cached_scaled_index;
      }
      ++iteration_count_2;
      record_byte_offset += 64;
      --remaining_count;
    }
    while ( remaining_count );
    saved_record_word_offset = (*(int64_t *)(void *)sr_actor_contact_offset);
    LOWORD(body) = saved_body_2;
    saved_body = (*(uint64_t *)(void *)sr_actor_contact_point);
  }
  saved_iteration_count = iteration_count;
  if ( iteration_count > 0 )
  {
    element_index_4 = 0;
    do
    {
      slodword_result = SLODWORD(box_min[element_index_4 + 4]);
      scaled_index_6 = 15432 * slodword_result;
      if ( component_sum >= *(float *)&dword_140404A6C[15432 * slodword_result + 358312926]
        && component_sum_2 >= *(float *)&dword_140404A6C[scaled_index_6 + 358312927]
        && component_sum_3 >= *(float *)&dword_140404A6C[scaled_index_6 + 358312928]
        && component_delta <= *(float *)&dword_140404A6C[scaled_index_6 + 358312929]
        && component_delta_2 <= *(float *)&dword_140404A6C[scaled_index_6 + 358312930]
        && component_delta_3 <= *(float *)&dword_140404A6C[scaled_index_6 + 358312931] )
      {
        sr_world_street_triangles_in_box(list, box_min, box_max, slodword_result, 2);
      }
      ++element_index_4;
    }
    while ( element_index_4 < saved_iteration_count );
  }
  iteration_count_3 = 0;
  scaled_index_7 = 47 * saved_body;
  do
  {
    LODWORD(packed_word_bits) = dword_140404A6C[scaled_index_7 + 18215715];
    LODWORD(packed_word_bits_2) = dword_140404A6C[scaled_index_7 + 18215716];
    weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index_7 + 18215717];
    (*(uint64_t *)(void *)sr_actor_contact_point) = __PAIR64__(LODWORD(packed_word_bits_2), LODWORD(packed_word_bits));
    (*(float *)&sr_actor_contact_point[2]) = weighted_sum_5;
    if ( iteration_count_3 )
    {
      if ( iteration_count_3 != 1 )
        goto LABEL_31;
      weighted_sum_6 = *(float *)((char *)&g_15F2DCB48 + saved_record_word_offset);
    }
    else
    {
      weighted_sum_6 = -*(float *)((char *)&g_15F2DCB48 + saved_record_word_offset);
    }
    state_address = (float)(weighted_sum_6 * *(float *)&dword_140404A6C[scaled_index_7 + 18215724]) + packed_word_bits;
    weighted_sum_7 = weighted_sum_6 * *(float *)&dword_140404A6C[scaled_index_7 + 18215725];
    weighted_sum_8 = weighted_sum_6 * *(float *)&dword_140404A6C[scaled_index_7 + 18215726];
    *(float *)&(*(uint64_t *)(void *)sr_actor_contact_point) = state_address;
    *((float *)&(*(uint64_t *)(void *)sr_actor_contact_point) + 1) = weighted_sum_7 + packed_word_bits_2;
    (*(float *)&sr_actor_contact_point[2]) = weighted_sum_8 + weighted_sum_5;
LABEL_31:
    if ( (unsigned int)sub_14003DE80(
                         (float *)&(*(uint64_t *)(void *)sr_actor_contact_point),
                         (float *)&dword_140404A6C[scaled_index_7 + 18215724],
                         *(float *)((char *)&g_15F2DCB78 + saved_record_word_offset)) )
    {
      combined_products = (ragdoll_unknown_height) - *(float *)&dword_140404A6C[scaled_index_7 + 18215716];
      depth = *(float *)((char *)&g_15F2DCB78 + saved_record_word_offset) - g_151A8489C;
      *(float *)&(*(int64_t *)(void *)sr_actor_contact_offset) = *(float *)&g_151A84880 - *(float *)&dword_140404A6C[scaled_index_7 + 18215715];
      combined_products_2 = *(float *)&g_151A84888 - *(float *)&dword_140404A6C[scaled_index_7 + 18215717];
      *((float *)&(*(int64_t *)(void *)sr_actor_contact_offset) + 1) = combined_products;
      (*(float *)&sr_actor_contact_offset[2]) = combined_products_2;
      sr_physics_add_world_contact(body, (unsigned int *)&(*(int64_t *)(void *)sr_actor_contact_offset), (unsigned int *)&g_151A8488C, depth, 0x3F99999Au, 0.03125, 0x3E000000u);
    }
    if ( sub_14003D830(
           sr_actor_contact_result,
           list,
           (float *)&(*(uint64_t *)(void *)sr_actor_contact_point),
           (float *)&dword_140404A6C[scaled_index_7 + 18215724],
           *(float *)((char *)&g_15F2DCB78 + saved_record_word_offset)) )
    {
      combined_products_3 = sr_actor_contact_result[1] - *(float *)&dword_140404A6C[scaled_index_7 + 18215716];
      depth_2 = *(float *)((char *)&g_15F2DCB78 + saved_record_word_offset) - sr_actor_contact_result[7];
      *(float *)&(*(int64_t *)(void *)sr_actor_contact_offset) = sr_actor_contact_result[0] - *(float *)&dword_140404A6C[scaled_index_7 + 18215715];
      combined_products_4 = sr_actor_contact_result[2] - *(float *)&dword_140404A6C[scaled_index_7 + 18215717];
      *((float *)&(*(int64_t *)(void *)sr_actor_contact_offset) + 1) = combined_products_3;
      (*(float *)&sr_actor_contact_offset[2]) = combined_products_4;
      sr_physics_add_world_contact(body, (unsigned int *)&(*(int64_t *)(void *)sr_actor_contact_offset), ((unsigned *)(void *)(sr_actor_contact_result+3)), depth_2, 0x3F99999Au, 0.03125, 0x3E000000u);
    }
    ++iteration_count_3;
  }
  while ( iteration_count_3 < 2 );
  g_16B2A2EA0 = 0;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef cached_scaled_index
#undef saved_body_2
#undef list
#undef box_max
#undef box_min
#undef unused_frame_slot_99216

// 14015003A: conditional instruction was optimized away because edx.4>=8

//----- (0000000140151190) ----------------------------------------------------
__int64            sub_140151190(float *a1, float *a2, float *a3, signed int a4, float *a5, __int64 a6)
{
  float float_word;
  float *input_cursor;
  __int64 input_value;
  float scaled_value;
  __int64 block_record_offset;
  float weighted_sum;
  bool comparison_result;
  float source_component_y;
  float source_component_z;
  float float_word_2;
  float weighted_sum_2;
  float combined_products;
  float combined_products_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float float_word_3;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float component_sum;
  int masked_bits;
  int masked_bits_2;
  int iteration_count;
  int state_address;
  int state_address_2;
  int iteration_count_2;
  int saved_state_address;
  int iteration_count_3;
  __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 masked_bits_3;
  unsigned int table_value;
  float weighted_sum_11;
  signed int iteration_count_4;
  __int64 masked_bits_4;
  float scaled_value_2;
  __int64 running_total;
  double hibyte_result;
  int loaded_word;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float weighted_sum_12;
  float weighted_sum_13;
  int table_value_2;
  __int16 cached_table_value;
  __int16 cached_table_value_2;
  unsigned int masked_bits_5;
  __int64 scaled_index;
  unsigned int float_word_4;
  int masked_bits_6;
  __int64 selection_code;
  float weighted_sum_14;
  __int64 selection_code_2;
  int float_word_5;
  unsigned int masked_bits_7;
  BOOL masked_bits_8;
  float *saved_m;
  float source_component_y_2;
  float scaled_value_3;
  float source_component_z_2;
  float source_component_w;
  float source_float_6;
  float source_float_7;
  float source_float_8;
  float source_float_4;
  float *saved_source_component_x;
  float *saved_weighted_sum;
  float scaled_value_4;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float source_component_x;
  float scaled_value_5;
  float scaled_value_6;
  float component_sum_2;
  float weighted_sum_18;
  float scaled_value_7;
  float scaled_value_8;
  float scaled_value_9;
  float scaled_value_10;
  float scaled_value_11;
  float comparison_operand;
  float component_sum_3;
  float weighted_sum_19;
  float weighted_sum_20;
  BOOL masked_bits_9;
  float source_component_y_3;
  float source_float_4_2;
  float source_float_6_2;
  float comparison_operand_2;
  float source_component_z_3;
  float source_float_7_2;
  float source_component_w_2;
  float source_float_8_2;
  float source_float_5;
  float *saved_source_component_x_2;
  float *saved_weighted_sum_2;
  float source_component_y_4;
  float weighted_sum_21;
  float scaled_value_12;
  float weighted_sum_22;
  float source_component_x_2;
  float weighted_sum_23;
  float source_component_z_4;
  float saved_source_component_y;
  float weighted_sum_24;
  float saved_source_component_w;
  float component_sum_4;
  float weighted_sum_25;
  float scaled_value_13;
  float scaled_value_14;
  float scaled_value_15;
  float comparison_operand_3;
  float component_sum_5;
  float weighted_sum_26;
  float weighted_sum_27;
  float packed_word_bits;
  BOOL masked_bits_10;
  float source_component_y_5;
  float source_float_4_3;
  float source_float_6_3;
  float source_component_z_5;
  float source_float_7_3;
  float source_component_w_3;
  float source_float_8_3;
  float source_float_5_2;
  float *saved_source_component_x_3;
  float *saved_weighted_sum_3;
  float scaled_value_16;
  float source_component_x_3;
  float weighted_sum_28;
  float scaled_value_17;
  float weighted_sum_29;
  float source_component_y_6;
  float weighted_sum_30;
  float source_component_z_6;
  float saved_source_component_y_2;
  float weighted_sum_31;
  float scaled_value_18;
  float component_sum_6;
  float weighted_sum_32;
  float scaled_value_19;
  float scaled_value_20;
  float scaled_value_21;
  float comparison_operand_4;
  float component_sum_7;
  float weighted_sum_33;
  float weighted_sum_34;
  int float_word_6;
  unsigned int masked_bits_11;
  float scaled_value_22;
  float source_float_6_4;
  float source_component_y_7;
  float source_component_z_7;
  float source_float_7_4;
  float source_float_8_4;
  float source_float_4_4;
  float source_float_5_3;
  float *saved_source_component_x_4;
  float *saved_weighted_sum_4;
  float weighted_sum_35;
  float source_component_x_4;
  float weighted_sum_36;
  float scaled_value_23;
  float source_component_y_8;
  float scaled_value_24;
  float comparison_operand_5;
  float weighted_sum_37;
  float source_component_z_8;
  float weighted_sum_38;
  float scaled_value_25;
  float component_sum_8;
  float scaled_value_26;
  float scaled_value_27;
  float weighted_sum_39;
  float comparison_operand_6;
  float weighted_sum_40;
  float weighted_sum_41;
  float weighted_sum_42;
  float source_component_y_9;
  float weighted_sum_43;
  float scaled_value_28;
  float scaled_value_29;
  float weighted_sum_44;
  float source_component_x_5;
  float scaled_value_30;
  float scaled_value_31;
  float *saved_source_component_x_5;
  float scaled_value_32;
  float *saved_weighted_sum_5;
  float weighted_sum_45;
  float scaled_value_33;
  float scaled_value_34;
  float component_sum_9;
  float component_sum_10;
  float comparison_operand_7;
  float packed_word_bits_2;
  float weighted_sum_46;
  float scaled_value_35;
  float *saved_source_component_x_6;
  float *saved_source_component_x_7;
  float source_component_y_10;
  float *unused_written_slot;
  float source_component_z_9;
  float source_component_x_6;
  float source_component_y_11;
  float source_component_z_10;
  float comparison_operand_8;
  float *source_component_x_7;
  float *saved_source_component_x_8;
  float *record_pointer;
  float *m;
  float source_component_y_12;
  float source_component_z_11;
  float source_component_x_8;
  float source_component_y_13;
  float source_component_z_12;
  float comparison_operand_9;
  float sr_static_sphere_point[3];
  float sr_static_sphere_normal[3];
  float sr_static_sphere_origin[3];
  int sr_static_sphere_cell[3];
  _Alignas(8) unsigned sr_static_sphere_displaced_cell[4];
  _Alignas(8) unsigned sr_static_sphere_center[4];
  _Alignas(16) unsigned sr_static_sphere_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140151190[320];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140151190 + 0)) /* [rsp+8h] */
#define frame_float_at_64 (*(float (*))(void *)(sr_frame_140151190 + 64)) /* [rsp+48h] */
#define source_component_w_4 (*(float (*))(void *)(sr_frame_140151190 + 104)) /* [rsp+70h] */
#define state_address_3 (*(int (*))(void *)(sr_frame_140151190 + 108)) /* [rsp+74h] */
#define packed_word_bits_3 (*(__int64 (*))(void *)(sr_frame_140151190 + 112)) /* [rsp+78h] */
#define saved_source_component_y_3 (*(__int64 (*))(void *)(sr_frame_140151190 + 120)) /* [rsp+80h] */
#define m_2 (*(float * (*))(void *)(sr_frame_140151190 + 144)) /* [rsp+98h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_140151190 + 152)) /* [rsp+A0h] */
#define source_component_x_9 (*(float * (*))(void *)(sr_frame_140151190 + 160)) /* [rsp+A8h] */
#define input_cursor_2 (*(float * (*))(void *)(sr_frame_140151190 + 168)) /* [rsp+B0h] */
#define layer (*(unsigned int (*))(void *)(sr_frame_140151190 + 192)) /* [rsp+C8h] */
#define saved_masked_bits (*(int (*))(void *)(sr_frame_140151190 + 216)) /* [rsp+E0h] */
#define saved_state_address_2 (*(int (*))(void *)(sr_frame_140151190 + 220)) /* [rsp+E4h] */
#define saved_masked_bits_2 (*(int (*))(void *)(sr_frame_140151190 + 224)) /* [rsp+E8h] */
#define saved_state_address_3 (*(int (*))(void *)(sr_frame_140151190 + 228)) /* [rsp+ECh] */
#define input_cursor_3 (*(float * (*))(void *)(sr_frame_140151190 + 232)) /* [rsp+F0h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_140151190 + 240)) /* [rsp+F8h] */
#define unused_frame_slot_312 (*(__int64 (*))(void *)(sr_frame_140151190 + 312)) /* [rsp+140h] */

  const float sr_static_sphere_axis[3] = {0.0f, 1.0f, 0.0f};
  float_word = *(float *)&a6;
  input_cursor = a3;
  input_value = a4;
  *a3 = 65536.0;
  scaled_value = *a5;
  block_record_offset = 263004LL * a4;
  weighted_sum = *a5 + *(float *)&a6;
  layer = a4;
  input_cursor_3 = a3;
  input_cursor_2 = a2;
  source_component_x_9 = a1;
  comparison_result = weighted_sum < *(float *)&dword_140404A6C[block_record_offset + 111579657];
  input_value_2 = a4;
  if ( comparison_result )
    return 0;
  source_component_y = a5[1];
  if ( (float)(source_component_y + *(float *)&a6) < *(float *)&dword_140404A6C[block_record_offset + 111579658] )
    return 0;
  source_component_z = a5[2];
  if ( (float)(source_component_z + *(float *)&a6) < *(float *)&dword_140404A6C[block_record_offset + 111579659] )
    return 0;
  if ( (float)(scaled_value - *(float *)&a6) > *(float *)&dword_140404A6C[block_record_offset + 111579660] )
    return 0;
  if ( (float)(source_component_y - *(float *)&a6) > *(float *)&dword_140404A6C[block_record_offset + 111579661] )
    return 0;
  if ( (float)(source_component_z - *(float *)&a6) > *(float *)&dword_140404A6C[block_record_offset + 111579662] )
    return 0;
  float_word_2 = scaled_value - *(float *)&dword_140404A6C[block_record_offset + 111579638];
  weighted_sum_2 = *(float *)&dword_140404A6C[block_record_offset + 111579654];
  combined_products = source_component_y - *(float *)&dword_140404A6C[block_record_offset + 111579639];
  combined_products_2 = source_component_z - *(float *)&dword_140404A6C[block_record_offset + 111579640];
  m_2 = (float *)&dword_140404A6C[block_record_offset + 111579641];
  sr_static_sphere_origin[0] = float_word_2;
  weighted_sum_3 = float_word_2 * *(float *)&dword_140404A6C[block_record_offset + 111579644];
  weighted_sum_4 = float_word_2 * *(float *)&dword_140404A6C[block_record_offset + 111579641];
  weighted_sum_5 = combined_products_2 * *(float *)&dword_140404A6C[block_record_offset + 111579643];
  weighted_sum_6 = combined_products * *(float *)&dword_140404A6C[block_record_offset + 111579645];
  weighted_sum_7 = combined_products_2 * *(float *)&dword_140404A6C[block_record_offset + 111579646];
  float_word_3 = weighted_sum_4 + (float)(combined_products * *(float *)&dword_140404A6C[block_record_offset + 111579642]);
  weighted_sum_8 = float_word_2 * *(float *)&dword_140404A6C[block_record_offset + 111579647];
  sr_static_sphere_origin[1] = combined_products;
  weighted_sum_9 = combined_products * *(float *)&dword_140404A6C[block_record_offset + 111579648];
  sr_static_sphere_origin[2] = combined_products_2;
  weighted_sum_10 = combined_products_2 * *(float *)&dword_140404A6C[block_record_offset + 111579649];
  component_sum = weighted_sum_3 + weighted_sum_6;
  ((float *)(void *)sr_static_sphere_center)[0] = float_word_3 + weighted_sum_5;
  ((float *)(void *)sr_static_sphere_center)[1] = component_sum + weighted_sum_7;
  masked_bits = (int)(float)((float)((float)(float_word_3 + weighted_sum_5) - *(float *)&a6) * weighted_sum_2);
  *(float *)&(*(int64_t *)(void *)(sr_static_sphere_center+2)) = (float)(weighted_sum_8 + weighted_sum_9) + weighted_sum_10;
  saved_masked_bits = masked_bits;
  masked_bits_2 = (int)(float)((float)(*(float *)&(*(int64_t *)(void *)(sr_static_sphere_center+2)) - *(float *)&a6) * weighted_sum_2);
  saved_masked_bits_2 = masked_bits_2;
  state_address_3 = (int)(float)((float)((float)(*(float *)&a6 + weighted_sum_5) + float_word_3) * weighted_sum_2);
  iteration_count = (int)(float)((float)((float)(component_sum + weighted_sum_7) - *(float *)&a6) * weighted_sum_2);
  LODWORD(packed_word_bits_3) = iteration_count;
  sr_static_sphere_cell[1] = iteration_count;
  state_address = (int)(float)((float)((float)(*(float *)&a6 + weighted_sum_7) + component_sum) * weighted_sum_2);
  saved_state_address_3 = state_address;
  state_address_2 = (int)(float)((float)((float)(*(float *)&a6 + weighted_sum_10) + (float)(weighted_sum_8 + weighted_sum_9)) * weighted_sum_2);
  saved_state_address_2 = state_address_2;
  if ( iteration_count > state_address )
    return 0;
  sr_static_sphere_cell[1] = (int)(float)((float)((float)(component_sum + weighted_sum_7) - *(float *)&a6) * weighted_sum_2);
  while ( 1 )
  {
    sr_static_sphere_cell[2] = masked_bits_2;
    iteration_count_2 = masked_bits_2;
    if ( masked_bits_2 <= state_address_2 )
      break;
LABEL_74:
    LODWORD(packed_word_bits_3) = ++iteration_count;
    sr_static_sphere_cell[1] = iteration_count;
    if ( iteration_count > state_address )
      { unsigned char sr_swept_hit;
  __asm__ volatile("comiss %2, %1; seta %0" : "=qm"(sr_swept_hit)
    : "x"(_mm_set_ss(65536.0f)), "x"(_mm_set_ss(*a3)) : "cc");
  return sr_swept_hit; }
  }
  saved_state_address = state_address_3;
  while ( 1 )
  {
    sr_static_sphere_cell[0] = masked_bits;
    iteration_count_3 = masked_bits;
    if ( masked_bits <= saved_state_address )
      break;
LABEL_72:
    sr_static_sphere_cell[2] = ++iteration_count_2;
    if ( iteration_count_2 > state_address_2 )
    {
      masked_bits_2 = saved_masked_bits_2;
      state_address = saved_state_address_3;
      goto LABEL_74;
    }
  }
  while ( 1 )
  {
    if ( iteration_count_3 < 0 )
      goto LABEL_70;
    if ( iteration_count_3 >= (int)(dword_140404A6C[block_record_offset + 111579650] << 6) )
      goto LABEL_70;
    if ( iteration_count < 0 )
      goto LABEL_70;
    if ( iteration_count >= (int)(dword_140404A6C[block_record_offset + 111579651] << 6) )
      goto LABEL_70;
    if ( iteration_count_2 < 0 )
      goto LABEL_70;
    if ( iteration_count_2 >= (int)(dword_140404A6C[block_record_offset + 111579652] << 6) )
      goto LABEL_70;
    shifted_bits = *(int *)(*(_QWORD *)&dword_140404A6C[block_record_offset + 111579655]
                 + 4LL
                 * (int)((iteration_count_3 >> 6)
                       + dword_140404A6C[block_record_offset + 111579650] * ((iteration_count_2 >> 6) + dword_140404A6C[block_record_offset + 111579652] * (iteration_count >> 6))));
    if ( (_DWORD)shifted_bits == -1 )
      goto LABEL_70;
    shifted_bits_2 = (int)dword_140404A6C[263004 * input_value
                             + 111579985
                             + 513 * shifted_bits
                             + 64 * ((iteration_count >> 3) & 7)
                             + 8 * ((iteration_count_2 >> 3) & 7)
                             + ((iteration_count_3 >> 3) & 7)];
    if ( (_DWORD)shifted_bits_2 == -1 )
      goto LABEL_70;
    masked_bits_3 = 6930 * shifted_bits_2 + (iteration_count_3 & 7) + 8 * ((iteration_count_2 & 7) + 8 * (iteration_count & 7u));
    saved_source_component_y_3 = masked_bits_3;
    table_value = dword_140404A6C[masked_bits_3 + 83199479];
    if ( !table_value )
      goto LABEL_26;
    weighted_sum_11 = *(float *)&dword_140404A6C[block_record_offset + 111579653];
    iteration_count_4 = 0;
    masked_bits_4 = 948LL * (table_value & 0x3FF);
    scaled_value_2 = (float)iteration_count * weighted_sum_11;
    sr_static_sphere_origin[0] = (float)((float)iteration_count_3 + 0.5) * weighted_sum_11;
    sr_static_sphere_origin[1] = scaled_value_2;
    sr_static_sphere_origin[2] = (float)((float)iteration_count_2 + 0.5) * weighted_sum_11;
    if ( (int)dword_140404A6C[masked_bits_4 + 272299416] > 0 )
      break;
LABEL_25:
    input_cursor = input_cursor_3;
    masked_bits_3 = saved_source_component_y_3;
LABEL_26:
    table_value_2 = dword_140404A6C[masked_bits_3 + 83198967];
    cached_table_value = table_value_2;
    cached_table_value_2 = table_value_2;
    if ( table_value_2 > 0 )
    {
      masked_bits_5 = table_value_2 & 0x7F;
      scaled_index = 2310LL * masked_bits_5;
      float_word_4 = dword_140404A6C[scaled_index + 432533577];
      sr_static_sphere_origin[0] = *(float *)&dword_140404A6C[scaled_index + 432533576];
      sr_static_sphere_origin[2] = *(float *)&dword_140404A6C[scaled_index + 432533578];
      sr_static_sphere_origin[1] = *(float *)&float_word_4;
      if ( (cached_table_value & 0xC00) == 0x400 )
      {
        sr_math_vec3_rotate(&sr_static_sphere_origin[0], (float *)sr_static_sphere_axis, sr_export_float_lane_container(1070141403));
        masked_bits_6 = cached_table_value_2 & 0xC00;
        goto LABEL_34;
      }
      masked_bits_6 = cached_table_value_2 & 0xC00;
      if ( masked_bits_6 == 2048 )
      {
        selection_code = 1078530011;
        goto LABEL_33;
      }
      if ( masked_bits_6 == 3072 )
      {
        selection_code = 1083624420;
LABEL_33:
        sr_math_vec3_rotate(&sr_static_sphere_origin[0], (float *)sr_static_sphere_axis, *(double *)&selection_code);
      }
LABEL_34:
      weighted_sum_14 = *(float *)&dword_140404A6C[block_record_offset + 111579653];
      (*(float *)(void *)(sr_static_sphere_rotation+8)) = 1.0;
      sr_static_sphere_origin[0] = sr_static_sphere_origin[0] + (float)((float)((float)iteration_count_3 + 0.5) * weighted_sum_14);
      sr_static_sphere_origin[1] = sr_static_sphere_origin[1] + (float)((float)(int)packed_word_bits_3 * weighted_sum_14);
      sr_static_sphere_origin[2] = sr_static_sphere_origin[2] + (float)((float)((float)iteration_count_2 + 0.5) * weighted_sum_14);
      (*(__int128 *)(void *)sr_static_sphere_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_static_sphere_rotation+4)) = xmmword_140278D30;
      switch ( masked_bits_6 )
      {
        case 1024:
          selection_code_2 = 1070141403;
          goto LABEL_40;
        case 2048:
          selection_code_2 = 1078530011;
          goto LABEL_40;
        case 3072:
          selection_code_2 = 1083624420;
LABEL_40:
          sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_static_sphere_rotation), (float *)sr_static_sphere_axis, *(double *)&selection_code_2);
          break;
      }
      if ( sub_140152750(&sr_static_sphere_point[0], &sr_static_sphere_normal[0], &frame_float_at_64, masked_bits_5, &sr_static_sphere_origin[0], (float *)&(*(__int128 *)(void *)sr_static_sphere_rotation), ((float *)(void *)sr_static_sphere_center), float_word) )
      {
        source_component_x_7 = source_component_x_9;
        sr_math_vec3_multiply_mat3(source_component_x_9, source_component_x_9, m_2);
        saved_source_component_x_8 = input_cursor_2;
        record_pointer = input_cursor_2;
        m = m_2;
        *source_component_x_7 = *(float *)&dword_140404A6C[block_record_offset + 111579638] + *source_component_x_7;
        source_component_x_7[1] = *(float *)&dword_140404A6C[block_record_offset + 111579639] + source_component_x_7[1];
        source_component_x_7[2] = *(float *)&dword_140404A6C[block_record_offset + 111579640] + source_component_x_7[2];
        sr_math_vec3_multiply_mat3(record_pointer, record_pointer, m);
        source_component_y_12 = sr_static_sphere_point[1];
        *source_component_x_7 = sr_static_sphere_point[0];
        source_component_z_11 = sr_static_sphere_point[2];
        source_component_x_7[1] = source_component_y_12;
        source_component_x_8 = sr_static_sphere_normal[0];
        source_component_x_7[2] = source_component_z_11;
        source_component_y_13 = sr_static_sphere_normal[1];
        *saved_source_component_x_8 = source_component_x_8;
        source_component_z_12 = sr_static_sphere_normal[2];
        saved_source_component_x_8[1] = source_component_y_13;
        comparison_operand_9 = frame_float_at_64;
        saved_source_component_x_8[2] = source_component_z_12;
        *input_cursor = comparison_operand_9;
        g_151A848D8 = -1;
        return 1;
      }
    }
    float_word_5 = dword_140404A6C[masked_bits_3 + 83194359];
    masked_bits_7 = float_word_5 & 0xE0000000;
    if ( (float_word_5 & 0xE0000000) == 0x40000000 )
    {
      masked_bits_8 = sub_1401543C0(&sr_static_sphere_point[0], &sr_static_sphere_normal[0], &frame_float_at_64, ((float *)(void *)sr_static_sphere_center), float_word, &sr_static_sphere_cell[0], float_word_5, *(float *)&dword_140404A6C[block_record_offset + 111579653]);
      saved_m = m_2;
      if ( masked_bits_8 && frame_float_at_64 < *input_cursor )
      {
        source_component_y_2 = m_2[1];
        scaled_value_3 = *m_2;
        source_component_z_2 = m_2[2];
        source_component_w = m_2[3];
        source_float_6 = m_2[6];
        source_float_7 = m_2[7];
        source_float_8 = m_2[8];
        source_float_4 = m_2[4];
        saved_source_component_x = source_component_x_9;
        saved_weighted_sum = input_cursor_2;
        iteration_count = packed_word_bits_3;
        scaled_value_4 = source_component_z_2 * sr_static_sphere_point[0];
        weighted_sum_15 = (float)(m_2[5] * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579640];
        weighted_sum_16 = (float)(source_float_7 * sr_static_sphere_point[2]) + (float)(source_component_y_2 * sr_static_sphere_point[0]);
        source_component_w_4 = (float)((float)(source_float_6 * sr_static_sphere_point[2]) + (float)(*m_2 * sr_static_sphere_point[0]))
             + (float)((float)(source_component_w * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579638]);
        sr_static_sphere_point[0] = source_component_w_4;
        weighted_sum_17 = (float)(source_float_8 * sr_static_sphere_point[2]) + scaled_value_4;
        source_component_x = sr_static_sphere_normal[0];
        scaled_value_5 = source_component_w * sr_static_sphere_normal[1];
        scaled_value_6 = sr_static_sphere_normal[0] * source_component_y_2;
        component_sum_2 = weighted_sum_17 + weighted_sum_15;
        float_word = *(float *)&a6;
        weighted_sum_18 = (float)((float)(source_float_4 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579639]) + weighted_sum_16;
        scaled_value_7 = source_float_6 * sr_static_sphere_normal[2];
        scaled_value_8 = source_float_7 * sr_static_sphere_normal[2];
        scaled_value_9 = source_float_8 * sr_static_sphere_normal[2];
        scaled_value_10 = source_float_4 * sr_static_sphere_normal[1];
        scaled_value_11 = sr_static_sphere_normal[1] * m_2[5];
        *source_component_x_9 = source_component_w_4;
        comparison_operand = frame_float_at_64;
        saved_source_component_x[1] = weighted_sum_18;
        saved_source_component_x[2] = component_sum_2;
        component_sum_3 = (float)(scaled_value_6 + scaled_value_10) + scaled_value_8;
        sr_static_sphere_point[1] = weighted_sum_18;
        sr_static_sphere_point[2] = component_sum_2;
        saved_weighted_sum[1] = component_sum_3;
        sr_static_sphere_normal[1] = component_sum_3;
        weighted_sum_19 = (float)((float)(source_component_x * scaled_value_3) + scaled_value_5) + scaled_value_7;
        weighted_sum_20 = (float)((float)(source_component_x * source_component_z_2) + scaled_value_11) + scaled_value_9;
        *saved_weighted_sum = weighted_sum_19;
        sr_static_sphere_normal[0] = weighted_sum_19;
        saved_weighted_sum[2] = weighted_sum_20;
        *input_cursor = comparison_operand;
        sr_static_sphere_normal[2] = weighted_sum_20;
        goto LABEL_56;
      }
      goto LABEL_50;
    }
    if ( masked_bits_7 == 0x80000000 )
    {
      masked_bits_9 = sub_1401564A0(
              &sr_static_sphere_point[0],
              &sr_static_sphere_normal[0],
              &frame_float_at_64,
              ((float *)(void *)sr_static_sphere_center),
              float_word,
              (__int64)&sr_static_sphere_cell[0],
              *(float *)&float_word_5,
              *(float *)&dword_140404A6C[block_record_offset + 111579653]);
      saved_m = m_2;
      if ( masked_bits_9 && frame_float_at_64 < *input_cursor )
      {
        source_component_y_3 = m_2[1];
        source_float_4_2 = m_2[4];
        source_float_6_2 = m_2[6];
        comparison_operand_2 = source_float_4_2;
        source_component_z_3 = m_2[2];
        source_float_7_2 = m_2[7];
        source_component_w_2 = m_2[3];
        source_float_8_2 = m_2[8];
        source_float_5 = m_2[5];
        saved_source_component_x_2 = source_component_x_9;
        saved_weighted_sum_2 = input_cursor_2;
        source_component_w_4 = *m_2;
        *(float *)&saved_source_component_y_3 = source_component_y_3;
        source_component_y_4 = sr_static_sphere_normal[1];
        weighted_sum_21 = (float)((float)(source_float_6_2 * sr_static_sphere_point[2]) + (float)(source_component_w_4 * sr_static_sphere_point[0]))
             + (float)((float)(source_component_w_2 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579638]);
        scaled_value_12 = source_float_4_2 * sr_static_sphere_normal[1];
        weighted_sum_22 = (float)(source_float_5 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579640];
        source_component_x_2 = sr_static_sphere_normal[0];
        weighted_sum_23 = (float)((float)(comparison_operand_2 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579639])
             + (float)((float)(source_float_7_2 * sr_static_sphere_point[2]) + (float)(source_component_y_3 * sr_static_sphere_point[0]));
        source_component_z_4 = sr_static_sphere_normal[2];
        saved_source_component_y = source_component_y_3;
        weighted_sum_24 = (float)(source_float_8_2 * sr_static_sphere_point[2]) + (float)(source_component_z_3 * sr_static_sphere_point[0]);
        *source_component_x_9 = weighted_sum_21;
        saved_source_component_w = source_component_w_4;
        saved_source_component_x_2[1] = weighted_sum_23;
        component_sum_4 = weighted_sum_24 + weighted_sum_22;
        weighted_sum_25 = (float)(saved_source_component_y * source_component_x_2) + scaled_value_12;
        scaled_value_13 = source_float_6_2 * source_component_z_4;
        float_word = *(float *)&a6;
        saved_source_component_x_2[2] = component_sum_4;
        scaled_value_14 = source_float_7_2 * source_component_z_4;
        scaled_value_15 = source_float_8_2 * source_component_z_4;
        comparison_operand_3 = frame_float_at_64;
        component_sum_5 = weighted_sum_25 + scaled_value_14;
        saved_weighted_sum_2[1] = component_sum_5;
        sr_static_sphere_point[0] = weighted_sum_21;
        sr_static_sphere_point[1] = weighted_sum_23;
        sr_static_sphere_point[2] = component_sum_4;
        sr_static_sphere_normal[1] = component_sum_5;
        weighted_sum_26 = (float)((float)(saved_source_component_w * source_component_x_2) + (float)(source_component_w_2 * source_component_y_4)) + scaled_value_13;
        weighted_sum_27 = (float)((float)(source_component_z_3 * source_component_x_2) + (float)(source_float_5 * source_component_y_4)) + scaled_value_15;
        *saved_weighted_sum_2 = weighted_sum_26;
        sr_static_sphere_normal[0] = weighted_sum_26;
        saved_weighted_sum_2[2] = weighted_sum_27;
        *input_cursor = comparison_operand_3;
        sr_static_sphere_normal[2] = weighted_sum_27;
      }
LABEL_50:
      iteration_count = packed_word_bits_3;
      goto LABEL_56;
    }
    iteration_count = packed_word_bits_3;
    if ( masked_bits_7 == -1073741824 )
    {
      sr_static_sphere_displaced_cell[0] = iteration_count_3 - (unsigned __int8)float_word_5;
      sr_static_sphere_displaced_cell[1] = packed_word_bits_3 - BYTE2(float_word_5);
      LODWORD((*(int64_t *)(void *)(sr_static_sphere_displaced_cell+2))) = iteration_count_2 - BYTE1(float_word_5);
      LODWORD(packed_word_bits) = sr_world_block_unknown_8_at(layer, sr_static_sphere_displaced_cell[0], sr_static_sphere_displaced_cell[1], (*(int64_t *)(void *)(sr_static_sphere_displaced_cell+2)));
      masked_bits_10 = sub_1401564A0(
               &sr_static_sphere_point[0],
               &sr_static_sphere_normal[0],
               &frame_float_at_64,
               ((float *)(void *)sr_static_sphere_center),
               float_word,
               (__int64)&sr_static_sphere_displaced_cell[0],
               packed_word_bits,
               *(float *)&dword_140404A6C[block_record_offset + 111579653]);
      saved_m = m_2;
      if ( masked_bits_10 && frame_float_at_64 < *input_cursor )
      {
        source_component_y_5 = m_2[1];
        source_float_4_3 = m_2[4];
        source_float_6_3 = m_2[6];
        source_component_z_5 = m_2[2];
        source_float_7_3 = m_2[7];
        source_component_w_3 = m_2[3];
        source_float_8_3 = m_2[8];
        source_float_5_2 = m_2[5];
        saved_source_component_x_3 = source_component_x_9;
        saved_weighted_sum_3 = input_cursor_2;
        scaled_value_16 = source_component_z_5 * sr_static_sphere_point[0];
        *(float *)&saved_source_component_y_3 = *m_2;
        source_component_w_4 = source_component_y_5;
        source_component_x_3 = sr_static_sphere_normal[0];
        weighted_sum_28 = (float)((float)(source_float_6_3 * sr_static_sphere_point[2]) + (float)(*(float *)&saved_source_component_y_3 * sr_static_sphere_point[0]))
             + (float)((float)(source_component_w_3 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579638]);
        scaled_value_17 = source_component_z_5 * sr_static_sphere_normal[0];
        weighted_sum_29 = (float)(source_float_5_2 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579640];
        source_component_y_6 = sr_static_sphere_normal[1];
        weighted_sum_30 = (float)((float)(source_float_4_3 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579639])
             + (float)((float)(source_float_7_3 * sr_static_sphere_point[2]) + (float)(source_component_y_5 * sr_static_sphere_point[0]));
        source_component_z_6 = sr_static_sphere_normal[2];
        saved_source_component_y_2 = source_component_y_5;
        weighted_sum_31 = (float)(source_float_8_3 * sr_static_sphere_point[2]) + scaled_value_16;
        *source_component_x_9 = weighted_sum_28;
        scaled_value_18 = *(float *)&saved_source_component_y_3;
        saved_source_component_x_3[1] = weighted_sum_30;
        component_sum_6 = weighted_sum_31 + weighted_sum_29;
        saved_source_component_x_3[2] = component_sum_6;
        weighted_sum_32 = (float)(saved_source_component_y_2 * source_component_x_3) + (float)(source_float_4_3 * source_component_y_6);
        float_word = *(float *)&a6;
        scaled_value_19 = source_float_6_3 * source_component_z_6;
        scaled_value_20 = source_float_7_3 * source_component_z_6;
        scaled_value_21 = source_float_8_3 * source_component_z_6;
        comparison_operand_4 = frame_float_at_64;
        component_sum_7 = weighted_sum_32 + scaled_value_20;
        weighted_sum_33 = (float)((float)(source_float_5_2 * source_component_y_6) + scaled_value_17) + scaled_value_21;
        sr_static_sphere_point[0] = weighted_sum_28;
        sr_static_sphere_point[1] = weighted_sum_30;
        saved_weighted_sum_3[1] = component_sum_7;
        sr_static_sphere_point[2] = component_sum_6;
        sr_static_sphere_normal[1] = component_sum_7;
        saved_weighted_sum_3[2] = weighted_sum_33;
        sr_static_sphere_normal[2] = weighted_sum_33;
        weighted_sum_34 = (float)((float)(scaled_value_18 * source_component_x_3) + (float)(source_component_w_3 * source_component_y_6)) + scaled_value_19;
        *saved_weighted_sum_3 = weighted_sum_34;
        *input_cursor = comparison_operand_4;
        sr_static_sphere_normal[0] = weighted_sum_34;
      }
    }
    else
    {
      saved_m = m_2;
    }
LABEL_56:
    float_word_6 = dword_140404A6C[masked_bits_3 + 83197431];
    masked_bits_11 = float_word_6 & 0xE0000000;
    if ( (float_word_6 & 0xE0000000) == 0x40000000 )
    {
      if ( sub_1401543C0(&sr_static_sphere_point[0], &sr_static_sphere_normal[0], &frame_float_at_64, ((float *)(void *)sr_static_sphere_center), float_word, &sr_static_sphere_cell[0], float_word_6, *(float *)&dword_140404A6C[block_record_offset + 111579653])
        && frame_float_at_64 < *input_cursor )
      {
        scaled_value_22 = *saved_m;
        source_float_6_4 = saved_m[6];
        source_component_y_7 = saved_m[1];
        source_component_z_7 = saved_m[2];
        source_float_7_4 = saved_m[7];
        source_float_8_4 = saved_m[8];
        source_float_4_4 = saved_m[4];
        source_float_5_3 = saved_m[5];
        saved_source_component_x_4 = source_component_x_9;
        saved_weighted_sum_4 = input_cursor_2;
        source_component_w_4 = saved_m[3];
        *(float *)&saved_source_component_y_3 = source_float_4_4;
        weighted_sum_35 = (float)(source_float_5_3 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579640];
        source_component_x_4 = sr_static_sphere_normal[0];
        weighted_sum_36 = (float)((float)(source_float_6_4 * sr_static_sphere_point[2]) + (float)(scaled_value_22 * sr_static_sphere_point[0]))
             + (float)((float)(source_component_w_4 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579638]);
        scaled_value_23 = scaled_value_22 * sr_static_sphere_normal[0];
        source_component_y_8 = sr_static_sphere_normal[1];
        scaled_value_24 = source_float_5_3 * sr_static_sphere_normal[1];
        comparison_operand_5 = source_float_4_4;
        weighted_sum_37 = (float)((float)(source_float_4_4 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[block_record_offset + 111579639])
             + (float)((float)(source_float_7_4 * sr_static_sphere_point[2]) + (float)(source_component_y_7 * sr_static_sphere_point[0]));
        source_component_z_8 = sr_static_sphere_normal[2];
        weighted_sum_38 = (float)(source_float_8_4 * sr_static_sphere_point[2]) + (float)(source_component_z_7 * sr_static_sphere_point[0]);
        *source_component_x_9 = weighted_sum_36;
        scaled_value_25 = source_component_w_4 * source_component_y_8;
        saved_source_component_x_4[1] = weighted_sum_37;
        component_sum_8 = weighted_sum_38 + weighted_sum_35;
        scaled_value_26 = source_float_7_4 * source_component_z_8;
        saved_source_component_x_4[2] = component_sum_8;
        scaled_value_27 = source_float_8_4 * source_component_z_8;
        weighted_sum_39 = (float)(scaled_value_25 + scaled_value_23) + (float)(source_float_6_4 * source_component_z_8);
        comparison_operand_6 = frame_float_at_64;
        *saved_weighted_sum_4 = weighted_sum_39;
        sr_static_sphere_point[0] = weighted_sum_36;
        sr_static_sphere_point[1] = weighted_sum_37;
        sr_static_sphere_point[2] = component_sum_8;
        sr_static_sphere_normal[0] = weighted_sum_39;
        weighted_sum_40 = (float)((float)(comparison_operand_5 * source_component_y_8) + (float)(source_component_y_7 * source_component_x_4)) + scaled_value_26;
        weighted_sum_41 = (float)(scaled_value_24 + (float)(source_component_z_7 * source_component_x_4)) + scaled_value_27;
        saved_weighted_sum_4[1] = weighted_sum_40;
        sr_static_sphere_normal[1] = weighted_sum_40;
        saved_weighted_sum_4[2] = weighted_sum_41;
        *input_cursor = comparison_operand_6;
        sr_static_sphere_normal[2] = weighted_sum_41;
      }
      goto LABEL_69;
    }
    if ( masked_bits_11 == 0x80000000 )
    {
      if ( !sub_1401564A0(
              &sr_static_sphere_point[0],
              &sr_static_sphere_normal[0],
              &frame_float_at_64,
              ((float *)(void *)sr_static_sphere_center),
              float_word,
              (__int64)&sr_static_sphere_cell[0],
              *(float *)&float_word_6,
              *(float *)&dword_140404A6C[block_record_offset + 111579653])
        || frame_float_at_64 >= *input_cursor )
      {
        goto LABEL_69;
      }
      weighted_sum_42 = (float)((float)(sr_static_sphere_point[2] * saved_m[6]) + (float)(sr_static_sphere_point[0] * *saved_m))
           + (float)((float)(sr_static_sphere_point[1] * saved_m[3]) + *(float *)&dword_140404A6C[block_record_offset + 111579638]);
      source_component_y_9 = sr_static_sphere_normal[1];
      weighted_sum_43 = (float)((float)(sr_static_sphere_point[1] * saved_m[4]) + *(float *)&dword_140404A6C[block_record_offset + 111579639])
           + (float)((float)(sr_static_sphere_point[2] * saved_m[7]) + (float)(sr_static_sphere_point[0] * saved_m[1]));
      source_component_w_4 = (float)((float)(sr_static_sphere_point[2] * saved_m[8]) + (float)(sr_static_sphere_point[0] * saved_m[2]))
           + (float)((float)(sr_static_sphere_point[1] * saved_m[5]) + *(float *)&dword_140404A6C[block_record_offset + 111579640]);
      sr_static_sphere_point[2] = source_component_w_4;
      *(float *)&saved_source_component_y_3 = weighted_sum_43;
      scaled_value_28 = sr_static_sphere_normal[0] * *saved_m;
      sr_static_sphere_point[1] = weighted_sum_43;
      scaled_value_29 = sr_static_sphere_normal[1] * saved_m[5];
      weighted_sum_44 = (float)(sr_static_sphere_normal[1] * saved_m[3]) + scaled_value_28;
      source_component_x_5 = sr_static_sphere_normal[0];
      scaled_value_30 = sr_static_sphere_normal[0] * saved_m[2];
    }
    else
    {
      if ( masked_bits_11 != -1073741824 )
        goto LABEL_69;
      sr_static_sphere_displaced_cell[0] = iteration_count_3 - (unsigned __int8)float_word_6;
      sr_static_sphere_displaced_cell[1] = iteration_count - BYTE2(float_word_6);
      LODWORD((*(int64_t *)(void *)(sr_static_sphere_displaced_cell+2))) = iteration_count_2 - BYTE1(float_word_6);
      LODWORD(packed_word_bits_2) = sr_world_block_unknown_3008_at(layer, sr_static_sphere_displaced_cell[0], sr_static_sphere_displaced_cell[1], (*(int64_t *)(void *)(sr_static_sphere_displaced_cell+2)));
      if ( !sub_1401564A0(
              &sr_static_sphere_point[0],
              &sr_static_sphere_normal[0],
              &frame_float_at_64,
              ((float *)(void *)sr_static_sphere_center),
              float_word,
              (__int64)&sr_static_sphere_displaced_cell[0],
              packed_word_bits_2,
              *(float *)&dword_140404A6C[block_record_offset + 111579653])
        || frame_float_at_64 >= *input_cursor )
      {
        goto LABEL_69;
      }
      weighted_sum_42 = (float)((float)(sr_static_sphere_point[2] * saved_m[6]) + (float)(sr_static_sphere_point[0] * *saved_m))
           + (float)((float)(sr_static_sphere_point[1] * saved_m[3]) + *(float *)&dword_140404A6C[block_record_offset + 111579638]);
      weighted_sum_46 = (float)((float)(sr_static_sphere_point[1] * saved_m[4]) + *(float *)&dword_140404A6C[block_record_offset + 111579639])
           + (float)((float)(sr_static_sphere_point[2] * saved_m[7]) + (float)(sr_static_sphere_point[0] * saved_m[1]));
      source_component_w_4 = (float)((float)(sr_static_sphere_point[2] * saved_m[8]) + (float)(sr_static_sphere_point[0] * saved_m[2]))
           + (float)((float)(sr_static_sphere_point[1] * saved_m[5]) + *(float *)&dword_140404A6C[block_record_offset + 111579640]);
      sr_static_sphere_point[2] = source_component_w_4;
      *(float *)&saved_source_component_y_3 = weighted_sum_46;
      scaled_value_35 = sr_static_sphere_normal[1] * saved_m[3];
      source_component_y_9 = sr_static_sphere_normal[1];
      scaled_value_30 = sr_static_sphere_normal[1] * saved_m[5];
      sr_static_sphere_point[1] = weighted_sum_46;
      weighted_sum_44 = (float)(sr_static_sphere_normal[0] * *saved_m) + scaled_value_35;
      source_component_x_5 = sr_static_sphere_normal[0];
      scaled_value_29 = sr_static_sphere_normal[0] * saved_m[2];
    }
    scaled_value_31 = source_component_x_5 * saved_m[1];
    saved_source_component_x_5 = source_component_x_9;
    scaled_value_32 = source_component_y_9 * saved_m[4];
    saved_weighted_sum_5 = input_cursor_2;
    sr_static_sphere_point[0] = weighted_sum_42;
    weighted_sum_45 = weighted_sum_44 + (float)(sr_static_sphere_normal[2] * saved_m[6]);
    scaled_value_33 = sr_static_sphere_normal[2] * saved_m[7];
    scaled_value_34 = sr_static_sphere_normal[2] * saved_m[8];
    *((_DWORD *)source_component_x_9 + 1) = saved_source_component_y_3;
    component_sum_9 = (float)(scaled_value_32 + scaled_value_31) + scaled_value_33;
    saved_source_component_x_5[2] = source_component_w_4;
    component_sum_10 = (float)(scaled_value_29 + scaled_value_30) + scaled_value_34;
    comparison_operand_7 = frame_float_at_64;
    *saved_source_component_x_5 = weighted_sum_42;
    saved_weighted_sum_5[1] = component_sum_9;
    *saved_weighted_sum_5 = weighted_sum_45;
    saved_weighted_sum_5[2] = component_sum_10;
    *input_cursor = comparison_operand_7;
    sr_static_sphere_normal[1] = component_sum_9;
    sr_static_sphere_normal[0] = weighted_sum_45;
    sr_static_sphere_normal[2] = component_sum_10;
LABEL_69:
    input_value = input_value_2;
    saved_state_address = state_address_3;
LABEL_70:
    float_word = *(float *)&a6;
    sr_static_sphere_cell[0] = ++iteration_count_3;
    if ( iteration_count_3 > saved_state_address )
    {
      masked_bits = saved_masked_bits;
      state_address_2 = saved_state_address_2;
      goto LABEL_72;
    }
  }
  running_total = ((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_4 * 4 + 1093411124;
  hibyte_result = (float)(HIBYTE(table_value) & 3) * 1.570796326795;
  while ( 1 )
  {
    loaded_word = *(_DWORD *)(running_total - 36);
    (*(float *)(void *)(sr_static_sphere_rotation+8)) = 1.0;
    (*(__int128 *)(void *)sr_static_sphere_rotation) = xmmword_140278D30;
    (*(__int128 *)(void *)(sr_static_sphere_rotation+4)) = xmmword_140278D30;
    sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_static_sphere_rotation), (float *)sr_static_sphere_axis, sr_export_float_lane_container(sr_text_float_bits((float)(hibyte_result))) /* the original converts to float (cvtsd2ss) before this call */);
    product_difference = *(float *)(running_total - 32);
    product_difference_2 = *(float *)(running_total - 28);
    product_difference_3 = *(float *)(running_total - 24);
    float_buffer[0] = (float)((float)((float)(*(float *)&(*(__int128 *)(void *)sr_static_sphere_rotation) * product_difference) + (float)((float)((float)iteration_count_3 + 0.5) * weighted_sum_11))
                    + (float)(*((float *)&(*(__int128 *)(void *)sr_static_sphere_rotation) + 3) * product_difference_2))
            + (float)(*((float *)&(*(__int128 *)(void *)(sr_static_sphere_rotation+4)) + 2) * product_difference_3);
    float_buffer[1] = (float)((float)((float)(*((float *)&(*(__int128 *)(void *)sr_static_sphere_rotation) + 1) * product_difference) + scaled_value_2) + (float)(*(float *)&(*(__int128 *)(void *)(sr_static_sphere_rotation+4)) * product_difference_2))
            + (float)(*((float *)&(*(__int128 *)(void *)(sr_static_sphere_rotation+4)) + 3) * product_difference_3);
    weighted_sum_12 = (float)((float)(*((float *)&(*(__int128 *)(void *)sr_static_sphere_rotation) + 2) * product_difference) + (float)((float)((float)iteration_count_2 + 0.5) * weighted_sum_11))
        + (float)(*((float *)&(*(__int128 *)(void *)(sr_static_sphere_rotation+4)) + 1) * product_difference_2);
    (*(__int128 *)(void *)sr_static_sphere_rotation) = *(_OWORD *)(running_total - 20);
    weighted_sum_13 = weighted_sum_12 + (float)((*(float *)(void *)(sr_static_sphere_rotation+8)) * product_difference_3);
    (*(__int128 *)(void *)(sr_static_sphere_rotation+4)) = *(_OWORD *)(running_total - 4);
    (*(float *)(void *)(sr_static_sphere_rotation+8)) = *(float *)(running_total + 12);
    float_buffer[2] = weighted_sum_13;
    sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_static_sphere_rotation), (float *)sr_static_sphere_axis, sr_export_float_lane_container(sr_text_float_bits((float)(hibyte_result))) /* the original converts to float (cvtsd2ss) before this call */);
    if ( sub_140153850(&sr_static_sphere_point[0], &sr_static_sphere_normal[0], &frame_float_at_64, loaded_word, float_buffer, (float *)&(*(__int128 *)(void *)sr_static_sphere_rotation), ((float *)(void *)sr_static_sphere_center), float_word) )
      break;
    ++iteration_count_4;
    running_total += 116;
    if ( iteration_count_4 >= (int)dword_140404A6C[masked_bits_4 + 272299416] )
      goto LABEL_25;
  }
  saved_source_component_x_6 = source_component_x_9;
  saved_source_component_x_7 = input_cursor_2;
  source_component_y_10 = sr_static_sphere_point[1];
  unused_written_slot = input_cursor_3;
  *source_component_x_9 = sr_static_sphere_point[0];
  source_component_z_9 = sr_static_sphere_point[2];
  saved_source_component_x_6[1] = source_component_y_10;
  source_component_x_6 = sr_static_sphere_normal[0];
  saved_source_component_x_6[2] = source_component_z_9;
  source_component_y_11 = sr_static_sphere_normal[1];
  *saved_source_component_x_7 = source_component_x_6;
  source_component_z_10 = sr_static_sphere_normal[2];
  saved_source_component_x_7[1] = source_component_y_11;
  comparison_operand_8 = frame_float_at_64;
  saved_source_component_x_7[2] = source_component_z_10;
  *unused_written_slot = comparison_operand_8;
  g_151A848D8 = -1;
  return 1;
}
#undef unused_frame_slot_0
#undef frame_float_at_64
#undef source_component_w_4
#undef state_address_3
#undef packed_word_bits_3
#undef saved_source_component_y_3
#undef m_2
#undef input_value_2
#undef source_component_x_9
#undef input_cursor_2
#undef layer
#undef saved_masked_bits
#undef saved_state_address_2
#undef saved_masked_bits_2
#undef saved_state_address_3
#undef input_cursor_3
#undef float_buffer
#undef unused_frame_slot_312

//----- (0000000140152750) ----------------------------------------------------
_BOOL8            sub_140152750(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float a8)
{
  float scaled_value;
  __int64 record_word_offset;
  float scaled_value_2;
  float scaled_value_3;
  float weighted_sum;
  float weighted_sum_2;
  signed int iteration_count;
  __int64 record_word_offset_2;
  unsigned int *state_address;
  float source_component_w;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  __int64 table_value;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  bool comparison_result;
  float scaled_value_4;
  float source_component_y;
  float weighted_sum_13;
  float source_component_z;
  float scaled_value_5;
  float component_sum;
  float component_sum_2;
  float component_sum_3;
  __int64 table_value_2;
  float weighted_sum_14;
  float weighted_sum_15;
  float state_address_2;
  float weighted_sum_16;
  float state_address_3;
  float state_address_4;
  float component_sum_4;
  float source_component_y_2;
  float scaled_value_6;
  float source_component_z_2;
  float product_difference_4;
  float combined_products_4;
  float source_component_y_3;
  float source_component_z_3;
  float square_root_2;
  float scaled_value_7;
  float source_component_y_4;
  float source_component_z_4;
  float combined_products_5;
  float source_component_y_5;
  float source_component_z_5;
  float square_root_3;
  float sr_sphere_152750_vector_78[3];
  float sr_sphere_152750_vector_81[3];
  float sr_sphere_152750_vector_84[3];
  float sr_sphere_152750_vector_87[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140152750[384];
#define weighted_sum_17 (*(float (*))(void *)(sr_frame_140152750 + 0)) /* [rsp+88h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_140152750 + 4)) /* [rsp+8Ch] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_140152750 + 8)) /* [rsp+90h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_140152750 + 16)) /* [rsp+98h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_140152750 + 32)) /* [rsp+A8h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_140152750 + 48)) /* [rsp+B8h] */
#define float_buffer_4 (*(float (*)[4])(void *)(sr_frame_140152750 + 64)) /* [rsp+C8h] */
#define t (*(float (*))(void *)(sr_frame_140152750 + 80)) /* [rsp+D8h] */
#define t_2 (*(float (*))(void *)(sr_frame_140152750 + 84)) /* [rsp+DCh] */
#define scaled_index (*(__int64 (*))(void *)(sr_frame_140152750 + 88)) /* [rsp+E0h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_140152750 + 96)) /* [rsp+E8h] */
#define weighted_sum_18 (*(float (*))(void *)(sr_frame_140152750 + 344)) /* [rsp+1E0h] */
#define weighted_sum_19 (*(float (*))(void *)(sr_frame_140152750 + 352)) /* [rsp+1E8h] */
#define weighted_sum_20 (*(float (*))(void *)(sr_frame_140152750 + 368)) /* [rsp+1F8h] */
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_140152750 + 376)) /* [rsp+200h] */

  scaled_value = *a7;
  record_word_offset = 2310LL * a4;
  scaled_value_2 = *a5;
  scaled_value_3 = *a5;
  weighted_sum = *a7 + a8;
  scaled_index = record_word_offset * 4;
  weighted_sum_2 = *(float *)&dword_140404A6C[record_word_offset + 432531269];
  if ( weighted_sum < (float)(scaled_value_3 - weighted_sum_2) )
    return 0;
  if ( (float)(a7[1] + a8) < (float)(a5[1] - weighted_sum_2) )
    return 0;
  if ( (float)(a7[2] + a8) < (float)(a5[2] - weighted_sum_2) )
    return 0;
  if ( (float)(scaled_value - a8) > (float)(scaled_value_2 + weighted_sum_2) )
    return 0;
  if ( (float)(a7[1] - a8) > (float)(a5[1] + weighted_sum_2) )
    return 0;
  if ( (float)(a7[2] - a8) > (float)(a5[2] + weighted_sum_2) )
    return 0;
  iteration_count = 0;
  *a3 = 65536.0;
  if ( (int)dword_140404A6C[record_word_offset + 432532039] <= 0 )
    return 0;
  record_word_offset_2 = 770LL * a4;
  state_address = &dword_140404A6C[record_word_offset + 432532042];
  saved_record_word_offset = record_word_offset_2;
  do
  {
    source_component_w = a6[3];
    combined_products = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531271 + 3 * (int)*(state_address - 1)];
    combined_products_2 = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)*(state_address - 1)];
    combined_products_3 = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)*(state_address - 1)];
    table_value = record_word_offset_2 + (int)state_address[1];
    weighted_sum_3 = (float)((float)(source_component_w * combined_products_2) + (float)(*a6 * combined_products)) + (float)(a6[6] * combined_products_3);
    weighted_sum_4 = (float)((float)(a6[4] * combined_products_2) + (float)(a6[1] * combined_products)) + (float)(a6[7] * combined_products_3);
    weighted_sum_5 = (float)((float)(a6[5] * combined_products_2) + (float)(a6[2] * combined_products)) + (float)(a6[8] * combined_products_3);
    weighted_sum_6 = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531271 + 3 * (int)*state_address];
    weighted_sum_7 = *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)*state_address];
    weighted_sum_8 = *(float *)&dword_140404A6C[3 * table_value + 432531271];
    weighted_sum_9 = *(float *)&dword_140404A6C[3 * table_value + 432531272];
    weighted_sum_10 = *(float *)&dword_140404A6C[3 * table_value + 432531273];
    saved_weighted_sum_3 = weighted_sum_5;
    weighted_sum_18 = (float)((float)(weighted_sum_6 * *a6) + (float)(weighted_sum_7 * source_component_w))
         + (float)(*(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)*state_address] * a6[6]);
    weighted_sum_20 = (float)((float)(weighted_sum_6 * a6[1]) + (float)(weighted_sum_7 * a6[4]))
         + (float)(*(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)*state_address] * a6[7]);
    weighted_sum_19 = (float)((float)(weighted_sum_6 * a6[2]) + (float)(weighted_sum_7 * a6[5]))
         + (float)(*(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)*state_address] * a6[8]);
    weighted_sum_17 = (float)((float)(weighted_sum_8 * *a6) + (float)(weighted_sum_9 * source_component_w)) + (float)(weighted_sum_10 * a6[6]);
    weighted_sum_11 = (float)((float)(weighted_sum_8 * a6[1]) + (float)(weighted_sum_9 * a6[4])) + (float)(weighted_sum_10 * a6[7]);
    weighted_sum_12 = (float)((float)(weighted_sum_8 * a6[2]) + (float)(weighted_sum_9 * a6[5])) + (float)(weighted_sum_10 * a6[8]);
    saved_weighted_sum = weighted_sum_11;
    saved_weighted_sum_2 = weighted_sum_12;
    product_difference = (float)((float)(weighted_sum_11 - weighted_sum_4) * (float)(weighted_sum_19 - weighted_sum_5)) - (float)((float)(weighted_sum_12 - weighted_sum_5) * (float)(weighted_sum_20 - weighted_sum_4));
    product_difference_2 = (float)((float)(weighted_sum_12 - weighted_sum_5) * (float)(weighted_sum_18 - weighted_sum_3)) - (float)((float)(weighted_sum_17 - weighted_sum_3) * (float)(weighted_sum_19 - weighted_sum_5));
    product_difference_3 = (float)((float)(weighted_sum_17 - weighted_sum_3) * (float)(weighted_sum_20 - weighted_sum_4)) - (float)((float)(weighted_sum_11 - weighted_sum_4) * (float)(weighted_sum_18 - weighted_sum_3));
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      sr_sphere_152750_vector_78[0] = 0.0;
      scaled_ratio = 0.0;
      sr_sphere_152750_vector_78[1] = 0.0;
      scaled_ratio_2 = 0.0;
      scaled_ratio_3 = 0.0;
    }
    else
    {
      scaled_ratio = (float)(1.0 / square_root) * product_difference;
      scaled_ratio_2 = (float)(1.0 / square_root) * product_difference_2;
      sr_sphere_152750_vector_78[0] = scaled_ratio;
      scaled_ratio_3 = (float)(1.0 / square_root) * product_difference_3;
      sr_sphere_152750_vector_78[1] = scaled_ratio_2;
    }
    comparison_result = *(state_address - 2) == 4;
    scaled_value_4 = *a5;
    source_component_y = a5[1];
    weighted_sum_13 = *a5 + weighted_sum_18;
    source_component_z = a5[2];
    scaled_value_5 = *a5;
    sr_sphere_152750_vector_78[2] = scaled_ratio_3;
    component_sum = scaled_value_5 + weighted_sum_3;
    float_buffer_3[0] = weighted_sum_13;
    component_sum_2 = source_component_y + weighted_sum_4;
    component_sum_3 = source_component_z + saved_weighted_sum_3;
    float_buffer_3[1] = source_component_y + weighted_sum_20;
    float_buffer_2[0] = component_sum;
    float_buffer_3[2] = source_component_z + weighted_sum_19;
    float_buffer_2[1] = component_sum_2;
    float_buffer[0] = scaled_value_4 + weighted_sum_17;
    float_buffer_2[2] = source_component_z + saved_weighted_sum_3;
    float_buffer[1] = source_component_y + saved_weighted_sum;
    float_buffer[2] = source_component_z + saved_weighted_sum_2;
    if ( comparison_result )
    {
      table_value_2 = record_word_offset_2 + (int)state_address[2];
      weighted_sum_14 = *(float *)&dword_140404A6C[3 * table_value_2 + 432531271];
      weighted_sum_15 = (float)((float)(weighted_sum_14 * *a6) + (float)(*(float *)&dword_140404A6C[3 * table_value_2 + 432531272] * a6[3]))
          + (float)((float)(*(float *)&dword_140404A6C[3 * table_value_2 + 432531273] * a6[6]) + scaled_value_4);
      state_address_2 = (float)(*(float *)&dword_140404A6C[3 * table_value_2 + 432531273] * a6[8]) + (float)(weighted_sum_14 * a6[2]);
      weighted_sum_16 = *(float *)&dword_140404A6C[3 * table_value_2 + 432531272] * a6[5];
      state_address_3 = (float)(*(float *)&dword_140404A6C[3 * table_value_2 + 432531273] * a6[7]) + (float)(weighted_sum_14 * a6[1]);
      state_address_4 = (float)(*(float *)&dword_140404A6C[3 * table_value_2 + 432531272] * a6[4]) + source_component_y;
      float_buffer_4[0] = weighted_sum_15;
      component_sum_4 = state_address_2 + (float)(weighted_sum_16 + a5[2]);
      float_buffer_4[1] = state_address_3 + state_address_4;
      float_buffer_4[2] = component_sum_4;
    }
    source_component_y_2 = a7[1];
    scaled_value_6 = *a7;
    source_component_z_2 = a7[2];
    product_difference_4 = *a7 - component_sum;
    sr_sphere_152750_vector_84[1] = source_component_y_2 - component_sum_2;
    sr_sphere_152750_vector_84[0] = product_difference_4;
    sr_sphere_152750_vector_84[2] = source_component_z_2 - component_sum_3;
    combined_products_4 = (float)((float)(scaled_ratio_2 * (float)(source_component_y_2 - component_sum_2)) + (float)(scaled_ratio * product_difference_4)) + (float)(scaled_ratio_3 * (float)(source_component_z_2 - component_sum_3));
    if ( combined_products_4 <= a8 && combined_products_4 >= 0.0 )
    {
      sr_sphere_152750_vector_84[0] = (float)(scaled_ratio * (float)-a8) + scaled_value_6;
      sr_sphere_152750_vector_84[1] = (float)(scaled_ratio_2 * (float)-a8) + source_component_y_2;
      sr_sphere_152750_vector_84[2] = (float)(scaled_ratio_3 * (float)-a8) + source_component_z_2;
      if ( sr_collision_line_triangle(&sr_sphere_152750_vector_81[0], &sr_sphere_152750_vector_78[0], &t, a7, &sr_sphere_152750_vector_84[0], float_buffer_2, float_buffer_3, float_buffer) )
      {
        source_component_y_3 = sr_sphere_152750_vector_81[1];
        source_component_z_3 = sr_sphere_152750_vector_81[2];
        square_root_2 = fsqrt(
                (float)((float)((float)(sr_sphere_152750_vector_81[1] - a7[1]) * (float)(sr_sphere_152750_vector_81[1] - a7[1]))
                      + (float)((float)(sr_sphere_152750_vector_81[0] - *a7) * (float)(sr_sphere_152750_vector_81[0] - *a7)))
              + (float)((float)(sr_sphere_152750_vector_81[2] - a7[2]) * (float)(sr_sphere_152750_vector_81[2] - a7[2])));
        if ( square_root_2 < *a3 )
        {
          *a1 = sr_sphere_152750_vector_81[0];
          a1[1] = source_component_y_3;
          a1[2] = source_component_z_3;
          *a2 = scaled_ratio;
          a2[1] = scaled_ratio_2;
          a2[2] = scaled_ratio_3;
          *a3 = square_root_2;
        }
      }
    }
    if ( *(state_address - 2) == 4 )
    {
      scaled_value_7 = *a7;
      source_component_y_4 = a7[1];
      source_component_z_4 = a7[2];
      sr_sphere_152750_vector_87[0] = *a7 - component_sum;
      sr_sphere_152750_vector_87[1] = source_component_y_4 - component_sum_2;
      sr_sphere_152750_vector_87[2] = source_component_z_4 - component_sum_3;
      combined_products_5 = (float)((float)((float)(source_component_y_4 - component_sum_2) * scaled_ratio_2) + (float)(sr_sphere_152750_vector_87[0] * scaled_ratio)) + (float)((float)(source_component_z_4 - component_sum_3) * scaled_ratio_3);
      if ( combined_products_5 <= a8 && combined_products_5 >= 0.0 )
      {
        sr_sphere_152750_vector_87[0] = (float)(scaled_ratio * (float)-a8) + scaled_value_7;
        sr_sphere_152750_vector_87[1] = (float)(scaled_ratio_2 * (float)-a8) + source_component_y_4;
        sr_sphere_152750_vector_87[2] = (float)(scaled_ratio_3 * (float)-a8) + source_component_z_4;
        if ( sr_collision_line_triangle(&sr_sphere_152750_vector_81[0], &sr_sphere_152750_vector_78[0], &t_2, a7, &sr_sphere_152750_vector_87[0], float_buffer_2, float_buffer, float_buffer_4) )
        {
          source_component_y_5 = sr_sphere_152750_vector_81[1];
          source_component_z_5 = sr_sphere_152750_vector_81[2];
          square_root_3 = fsqrt(
                  (float)((float)((float)(sr_sphere_152750_vector_81[1] - a7[1]) * (float)(sr_sphere_152750_vector_81[1] - a7[1]))
                        + (float)((float)(sr_sphere_152750_vector_81[0] - *a7) * (float)(sr_sphere_152750_vector_81[0] - *a7)))
                + (float)((float)(sr_sphere_152750_vector_81[2] - a7[2]) * (float)(sr_sphere_152750_vector_81[2] - a7[2])));
          if ( square_root_3 < *a3 )
          {
            *a1 = sr_sphere_152750_vector_81[0];
            a1[1] = source_component_y_5;
            a1[2] = source_component_z_5;
            *a2 = scaled_ratio;
            a2[1] = scaled_ratio_2;
            a2[2] = scaled_ratio_3;
            *a3 = square_root_3;
          }
        }
      }
    }
    ++iteration_count;
    record_word_offset_2 = saved_record_word_offset;
    state_address += 6;
  }
  while ( iteration_count < *(int *)((char *)&g_1A75FF388 + scaled_index) );
  return *a3 < 65536.0;
}
#undef weighted_sum_17
#undef saved_weighted_sum
#undef saved_weighted_sum_2
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef t
#undef t_2
#undef scaled_index
#undef saved_record_word_offset
#undef weighted_sum_18
#undef weighted_sum_19
#undef weighted_sum_20
#undef saved_weighted_sum_3

//----- (0000000140153850) ----------------------------------------------------
_BOOL8            sub_140153850(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float a8)
{
  signed int iteration_count;
  unsigned __int64 record_word_offset;
  float input_value;
  unsigned int *state_address;
  float source_component_w;
  float scaled_value;
  unsigned __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  unsigned __int64 scaled_index_2;
  float scaled_value_2;
  float weighted_sum_4;
  float scaled_value_3;
  float weighted_sum_5;
  float source_component_y;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float scaled_value_4;
  float weighted_sum_9;
  float weighted_sum_10;
  float scaled_value_5;
  float weighted_sum_11;
  float scaled_value_6;
  unsigned __int64 scaled_index_3;
  float weighted_sum_12;
  float scaled_value_7;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float component_delta;
  float scaled_value_8;
  float weighted_sum_19;
  float scaled_value_9;
  float scaled_value_10;
  float scaled_value_11;
  float weighted_sum_20;
  float component_delta_2;
  float component_sum;
  float component_delta_3;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  bool comparison_result;
  float scaled_value_12;
  float source_component_y_2;
  float source_component_z;
  float weighted_sum_21;
  float component_sum_2;
  float component_sum_3;
  unsigned __int64 scaled_index_4;
  float weighted_sum_22;
  float weighted_sum_23;
  float weighted_sum_24;
  float scaled_value_13;
  float state_address_2;
  float scaled_value_14;
  float state_address_3;
  float component_sum_4;
  float source_component_y_3;
  float scaled_value_15;
  float source_component_z_2;
  float product_difference_4;
  float combined_products;
  float source_component_y_4;
  float source_component_z_3;
  float square_root_2;
  float source_component_y_5;
  float scaled_value_16;
  float product_difference_5;
  float source_component_z_4;
  float combined_products_2;
  float source_component_y_6;
  float source_component_z_5;
  float square_root_3;
  float sr_sphere_153850_vector_95[3];
  float sr_sphere_153850_vector_98[3];
  float sr_sphere_153850_vector_101[3];
  float sr_sphere_153850_vector_104[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140153850[368];
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_140153850 + 8)) /* [rsp+88h] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_140153850 + 12)) /* [rsp+8Ch] */
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_140153850 + 16)) /* [rsp+90h] */
#define component_sum_5 (*(float (*))(void *)(sr_frame_140153850 + 20)) /* [rsp+94h] */
#define saved_component_sum (*(float (*))(void *)(sr_frame_140153850 + 24)) /* [rsp+98h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_140153850 + 32)) /* [rsp+A0h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_140153850 + 48)) /* [rsp+B0h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_140153850 + 64)) /* [rsp+C0h] */
#define float_buffer_4 (*(float (*)[4])(void *)(sr_frame_140153850 + 80)) /* [rsp+D0h] */
#define t (*(__int128 (*))(void *)(sr_frame_140153850 + 96)) /* [rsp+E0h] */
#define saved_weighted_sum_4 (*(float (*))(void *)(sr_frame_140153850 + 344)) /* [rsp+1D8h] */
#define component_sum_6 (*(float (*))(void *)(sr_frame_140153850 + 352)) /* [rsp+1E0h] */

  iteration_count = 0;
  record_word_offset = 5072LL * a4;
  *a3 = 65536.0;
  if ( (int)dword_140404A6C[record_word_offset / 4 + 278521861] <= 0 )
    return 0;
  input_value = a8;
  state_address = &dword_140404A6C[record_word_offset / 4 + 278521865];
  do
  {
    source_component_w = a6[3];
    scaled_value = *a6;
    scaled_index = record_word_offset + 12LL * (int)*(state_address - 1);
    weighted_sum = *(float *)((char *)&g_182A7E780 + scaled_index);
    weighted_sum_2 = *(float *)((char *)&g_182A7E784 + scaled_index);
    weighted_sum_3 = *(float *)((char *)&g_182A7E788 + scaled_index);
    scaled_index_2 = record_word_offset + 12LL * (int)*state_address;
    scaled_value_2 = a6[4] * weighted_sum_2;
    weighted_sum_4 = (float)(source_component_w * weighted_sum_2) + (float)(*a6 * weighted_sum);
    scaled_value_3 = a6[5] * weighted_sum_2;
    weighted_sum_5 = *(float *)((char *)&g_182A7E784 + scaled_index_2);
    source_component_y = a6[1];
    weighted_sum_6 = *(float *)((char *)&g_182A7E780 + scaled_index_2) * source_component_y;
    weighted_sum_7 = weighted_sum_4 + (float)(a6[6] * weighted_sum_3);
    weighted_sum_8 = scaled_value_2 + (float)(source_component_y * weighted_sum);
    scaled_value_4 = a6[2] * weighted_sum;
    weighted_sum_9 = *(float *)((char *)&g_182A7E788 + scaled_index_2);
    weighted_sum_10 = weighted_sum_8 + (float)(a6[7] * weighted_sum_3);
    scaled_value_5 = a6[8] * weighted_sum_3;
    weighted_sum_11 = *(float *)((char *)&g_182A7E780 + scaled_index_2);
    scaled_value_6 = weighted_sum_11 * a6[2];
    scaled_index_3 = record_word_offset + 12LL * (int)state_address[1];
    weighted_sum_12 = *(float *)((char *)&g_182A7E780 + scaled_index_3);
    component_sum_6 = (float)(scaled_value_3 + scaled_value_4) + scaled_value_5;
    scaled_value_7 = weighted_sum_5 * a6[4];
    weighted_sum_13 = (float)((float)(weighted_sum_11 * *a6) + (float)(weighted_sum_5 * source_component_w)) + (float)(weighted_sum_9 * a6[6]);
    weighted_sum_14 = scaled_value_6 + (float)(weighted_sum_5 * a6[5]);
    weighted_sum_15 = *(float *)((char *)&g_182A7E784 + scaled_index_3);
    weighted_sum_16 = (float)(weighted_sum_6 + scaled_value_7) + (float)(weighted_sum_9 * a6[7]);
    saved_weighted_sum_4 = weighted_sum_13;
    weighted_sum_17 = weighted_sum_14 + (float)(weighted_sum_9 * a6[8]);
    weighted_sum_18 = *(float *)((char *)&g_182A7E788 + scaled_index_3);
    saved_weighted_sum = weighted_sum_16;
    saved_weighted_sum_2 = weighted_sum_17;
    component_delta = weighted_sum_13 - weighted_sum_7;
    scaled_value_8 = weighted_sum_15 * a6[4];
    weighted_sum_19 = (float)((float)(weighted_sum_12 * scaled_value) + (float)(weighted_sum_15 * source_component_w)) + (float)(weighted_sum_18 * a6[6]);
    scaled_value_9 = weighted_sum_12 * a6[1];
    scaled_value_10 = weighted_sum_18 * a6[7];
    scaled_value_11 = weighted_sum_18 * a6[8];
    weighted_sum_20 = (float)(weighted_sum_12 * a6[2]) + (float)(weighted_sum_15 * a6[5]);
    saved_weighted_sum_3 = weighted_sum_19;
    component_delta_2 = weighted_sum_19 - weighted_sum_7;
    component_sum = weighted_sum_20 + scaled_value_11;
    component_delta_3 = weighted_sum_16 - weighted_sum_10;
    component_sum_5 = (float)(scaled_value_9 + scaled_value_8) + scaled_value_10;
    saved_component_sum = component_sum;
    product_difference = (float)((float)(component_sum_5 - weighted_sum_10) * (float)(weighted_sum_17 - component_sum_6)) - (float)((float)(component_sum - component_sum_6) * (float)(weighted_sum_16 - weighted_sum_10));
    product_difference_2 = (float)((float)(component_sum - component_sum_6) * component_delta) - (float)(component_delta_2 * (float)(weighted_sum_17 - component_sum_6));
    product_difference_3 = (float)(component_delta_2 * component_delta_3) - (float)((float)(component_sum_5 - weighted_sum_10) * component_delta);
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      sr_sphere_153850_vector_95[0] = 0.0;
      scaled_ratio = 0.0;
      sr_sphere_153850_vector_95[1] = 0.0;
      scaled_ratio_2 = 0.0;
      scaled_ratio_3 = 0.0;
    }
    else
    {
      scaled_ratio = (float)(1.0 / square_root) * product_difference;
      scaled_ratio_2 = (float)(1.0 / square_root) * product_difference_2;
      sr_sphere_153850_vector_95[0] = scaled_ratio;
      scaled_ratio_3 = (float)(1.0 / square_root) * product_difference_3;
      sr_sphere_153850_vector_95[1] = scaled_ratio_2;
    }
    comparison_result = *(state_address - 2) == 4;
    sr_sphere_153850_vector_95[2] = scaled_ratio_3;
    scaled_value_12 = *a5;
    source_component_y_2 = a5[1];
    source_component_z = a5[2];
    weighted_sum_21 = *a5 + weighted_sum_7;
    float_buffer_3[0] = *a5 + saved_weighted_sum_4;
    component_sum_2 = source_component_y_2 + weighted_sum_10;
    component_sum_3 = source_component_z + component_sum_6;
    float_buffer_3[1] = source_component_y_2 + saved_weighted_sum;
    float_buffer_2[0] = weighted_sum_21;
    float_buffer_3[2] = source_component_z + saved_weighted_sum_2;
    float_buffer_2[1] = component_sum_2;
    float_buffer[0] = scaled_value_12 + saved_weighted_sum_3;
    float_buffer_2[2] = source_component_z + component_sum_6;
    float_buffer[1] = source_component_y_2 + component_sum_5;
    float_buffer[2] = source_component_z + saved_component_sum;
    if ( comparison_result )
    {
      scaled_index_4 = record_word_offset + 12LL * (int)state_address[2];
      weighted_sum_22 = *(float *)((char *)&g_182A7E780 + scaled_index_4);
      weighted_sum_23 = (float)((float)(weighted_sum_22 * *a6) + (float)(*(float *)((char *)&g_182A7E784 + scaled_index_4) * a6[3]))
          + (float)((float)(*(float *)((char *)&g_182A7E788 + scaled_index_4) * a6[6]) + scaled_value_12);
      weighted_sum_24 = *(float *)((char *)&g_182A7E784 + scaled_index_4);
      scaled_value_13 = weighted_sum_24 * a6[5];
      state_address_2 = (float)(*(float *)((char *)&g_182A7E788 + scaled_index_4) * a6[8]) + (float)(weighted_sum_22 * a6[2]);
      scaled_value_14 = weighted_sum_24 * a6[4];
      state_address_3 = (float)(*(float *)((char *)&g_182A7E788 + scaled_index_4) * a6[7]) + (float)(weighted_sum_22 * a6[1]);
      float_buffer_4[0] = weighted_sum_23;
      component_sum_4 = state_address_2 + (float)(scaled_value_13 + source_component_z);
      input_value = a8;
      float_buffer_4[2] = component_sum_4;
      float_buffer_4[1] = state_address_3 + (float)(scaled_value_14 + source_component_y_2);
    }
    source_component_y_3 = a7[1];
    scaled_value_15 = *a7;
    source_component_z_2 = a7[2];
    product_difference_4 = *a7 - weighted_sum_21;
    sr_sphere_153850_vector_101[1] = source_component_y_3 - component_sum_2;
    sr_sphere_153850_vector_101[0] = product_difference_4;
    sr_sphere_153850_vector_101[2] = source_component_z_2 - component_sum_3;
    combined_products = (float)((float)(scaled_ratio_2 * (float)(source_component_y_3 - component_sum_2)) + (float)(scaled_ratio * product_difference_4)) + (float)(scaled_ratio_3 * (float)(source_component_z_2 - component_sum_3));
    if ( combined_products <= input_value && combined_products >= 0.0 )
    {
      sr_sphere_153850_vector_101[0] = (float)(scaled_ratio * (float)-input_value) + scaled_value_15;
      sr_sphere_153850_vector_101[1] = (float)(scaled_ratio_2 * (float)-input_value) + source_component_y_3;
      sr_sphere_153850_vector_101[2] = (float)(scaled_ratio_3 * (float)-input_value) + source_component_z_2;
      if ( sr_collision_line_triangle(&sr_sphere_153850_vector_98[0], &sr_sphere_153850_vector_95[0], (float *)&t, a7, &sr_sphere_153850_vector_101[0], float_buffer_2, float_buffer_3, float_buffer) )
      {
        source_component_y_4 = sr_sphere_153850_vector_98[1];
        source_component_z_3 = sr_sphere_153850_vector_98[2];
        square_root_2 = fsqrt(
                (float)((float)((float)(sr_sphere_153850_vector_98[0] - *a7) * (float)(sr_sphere_153850_vector_98[0] - *a7))
                      + (float)((float)(sr_sphere_153850_vector_98[1] - a7[1]) * (float)(sr_sphere_153850_vector_98[1] - a7[1])))
              + (float)((float)(sr_sphere_153850_vector_98[2] - a7[2]) * (float)(sr_sphere_153850_vector_98[2] - a7[2])));
        if ( square_root_2 < *a3 )
        {
          *a1 = sr_sphere_153850_vector_98[0];
          a1[1] = source_component_y_4;
          a1[2] = source_component_z_3;
          *a2 = scaled_ratio;
          a2[1] = scaled_ratio_2;
          a2[2] = scaled_ratio_3;
          *a3 = square_root_2;
        }
      }
      input_value = a8;
    }
    if ( *(state_address - 2) == 4 )
    {
      source_component_y_5 = a7[1];
      scaled_value_16 = *a7;
      product_difference_5 = *a7 - weighted_sum_21;
      source_component_z_4 = a7[2];
      sr_sphere_153850_vector_104[1] = source_component_y_5 - component_sum_2;
      sr_sphere_153850_vector_104[0] = product_difference_5;
      sr_sphere_153850_vector_104[2] = source_component_z_4 - component_sum_3;
      combined_products_2 = (float)((float)(scaled_ratio_2 * (float)(source_component_y_5 - component_sum_2)) + (float)(scaled_ratio * product_difference_5)) + (float)(scaled_ratio_3 * (float)(source_component_z_4 - component_sum_3));
      if ( combined_products_2 <= input_value && combined_products_2 >= 0.0 )
      {
        sr_sphere_153850_vector_104[0] = (float)(scaled_ratio * (float)-input_value) + scaled_value_16;
        sr_sphere_153850_vector_104[1] = (float)(scaled_ratio_2 * (float)-input_value) + source_component_y_5;
        sr_sphere_153850_vector_104[2] = (float)(scaled_ratio_3 * (float)-input_value) + source_component_z_4;
        if ( sr_collision_line_triangle(&sr_sphere_153850_vector_98[0], &sr_sphere_153850_vector_95[0], (float *)&t + 1, a7, &sr_sphere_153850_vector_104[0], float_buffer_2, float_buffer, float_buffer_4) )
        {
          source_component_y_6 = sr_sphere_153850_vector_98[1];
          source_component_z_5 = sr_sphere_153850_vector_98[2];
          square_root_3 = fsqrt(
                  (float)((float)((float)(sr_sphere_153850_vector_98[0] - *a7) * (float)(sr_sphere_153850_vector_98[0] - *a7))
                        + (float)((float)(sr_sphere_153850_vector_98[1] - a7[1]) * (float)(sr_sphere_153850_vector_98[1] - a7[1])))
                + (float)((float)(sr_sphere_153850_vector_98[2] - a7[2]) * (float)(sr_sphere_153850_vector_98[2] - a7[2])));
          if ( square_root_3 < *a3 )
          {
            *a1 = sr_sphere_153850_vector_98[0];
            a1[1] = source_component_y_6;
            a1[2] = source_component_z_5;
            *a2 = scaled_ratio;
            a2[1] = scaled_ratio_2;
            a2[2] = scaled_ratio_3;
            *a3 = square_root_3;
          }
        }
      }
    }
    input_value = a8;
    ++iteration_count;
    state_address += 6;
  }
  while ( iteration_count < (int)dword_140404A6C[record_word_offset / 4 + 278521861] );
  return *a3 < 65536.0;
}
#undef saved_weighted_sum
#undef saved_weighted_sum_2
#undef saved_weighted_sum_3
#undef component_sum_5
#undef saved_component_sum
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef t
#undef saved_weighted_sum_4
#undef component_sum_6

//----- (00000001401540B0) ----------------------------------------------------
__int64            sub_1401540B0(float *a1, float a2)
{
  unsigned int *state_address;
  unsigned int selection_flag;
  signed int iteration_count;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401540B0[112];
#define float_word (*(__int64 (*))(void *)(sr_frame_1401540B0 + 0)) /* [rsp+28h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1401540B0 + 8)) /* [rsp+30h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1401540B0 + 24)) /* [rsp+40h] */
#define frame_float_at_96 (*(float (*))(void *)(sr_frame_1401540B0 + 96)) /* [rsp+88h] */

  state_address = &g_15ADA9240;
  selection_flag = 0;
  *(unsigned int *)&world_unknown_151a84898 = 1065353216;
  iteration_count = 0;
  *(unsigned int *)&g_151A8489C = 1199570944;
  item_hit_unknown_7c = -1;
  item_hit_block_part = -1;
  do
  {
    if ( *state_address )
    {
      *(float *)&float_word = a2;
      if ( (unsigned int)sub_140151190(float_buffer, float_buffer_2, &frame_float_at_96, iteration_count, a1, float_word) )
      {
        if ( g_151A8489C > frame_float_at_96 )
        {
          *(float *)&g_151A84880 = float_buffer[0];
          (ragdoll_unknown_height) = float_buffer[1];
          *(float *)&g_151A84888 = float_buffer[2];
          g_151A8488C = float_buffer_2[0];
          g_151A84890 = float_buffer_2[1];
          g_151A84894 = float_buffer_2[2];
          g_151A8489C = frame_float_at_96;
          item_hit_layer = iteration_count;
        }
      }
    }
    ++iteration_count;
    state_address += 263004;
  }
  while ( iteration_count < 4 );
  LOBYTE(selection_flag) = g_151A8489C < 65536.0;
  return selection_flag;
}
#undef float_word
#undef float_buffer
#undef float_buffer_2
#undef frame_float_at_96

//----- (00000001401543C0) ----------------------------------------------------
_BOOL8            sub_1401543C0(float *a1, float *a2, float *a3, float *a4, float a5, int *a6, int a7, float a8)
{
  int *record_byte_offset;
  float input_value;
  float *weighted_sum;
  float input_value_2;
  int bit_mask;
  signed int iteration_count;
  float scaled_value;
  float source_component_y;
  float source_component_z;
  float scaled_value_2;
  float source_component_y_2;
  float product_difference;
  float product_difference_2;
  float scaled_value_3;
  float source_component_z_2;
  float state_address;
  __int64 scaled_index;
  __int64 table_value;
  float state_address_2;
  float weighted_sum_2;
  float state_address_3;
  float weighted_sum_3;
  float weighted_sum_4;
  __int64 scaled_index_2;
  __int64 table_value_2;
  float weighted_sum_5;
  float weighted_sum_6;
  float component_delta;
  float combined_products;
  float combined_products_2;
  float source_component_y_3;
  float source_component_z_3;
  float square_root;
  float scaled_value_4;
  float source_component_y_4;
  float source_component_z_4;
  float product_difference_3;
  float combined_products_3;
  float source_component_y_5;
  float source_component_z_5;
  float square_root_2;
  float component_delta_2;
  float component_delta_3;
  float source_component_y_6;
  float component_delta_4;
  float source_component_z_6;
  float scaled_value_5;
  float product_difference_4;
  float square_root_3;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float combined_products_4;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float component_delta_5;
  float component_delta_6;
  float component_delta_7;
  float square_root_4;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float saved_square_root;
  float component_delta_8;
  float component_delta_9;
  float component_delta_10;
  float square_root_5;
  float scaled_ratio_7;
  float scaled_ratio_8;
  float scaled_ratio_9;
  float combined_products_5;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float component_delta_11;
  float component_delta_12;
  float component_delta_13;
  float square_root_6;
  float scaled_ratio_10;
  float scaled_ratio_11;
  float scaled_ratio_12;
  float component_delta_14;
  float component_delta_15;
  float component_delta_16;
  float square_root_7;
  float scaled_ratio_13;
  float scaled_ratio_14;
  float scaled_ratio_15;
  float combined_products_6;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float component_delta_17;
  float component_delta_18;
  float component_delta_19;
  float square_root_8;
  float scaled_ratio_16;
  float scaled_ratio_17;
  float scaled_ratio_18;
  float component_delta_20;
  float component_delta_21;
  float component_delta_22;
  float square_root_9;
  float scaled_ratio_19;
  float scaled_ratio_20;
  float scaled_ratio_21;
  float combined_products_7;
  bool comparison_result;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float component_delta_23;
  float component_delta_24;
  float component_delta_25;
  float square_root_10;
  float scaled_ratio_22;
  float scaled_ratio_23;
  float scaled_ratio_24;
  float sr_sphere_1543c0_vector_142[3];
  float sr_sphere_1543c0_vector_145[3];
  float sr_sphere_1543c0_vector_148[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401543C0[464];
#define saved_source_component_z (*(float (*))(void *)(sr_frame_1401543C0 + 8)) /* [rsp+48h] */
#define scaled_value_6 (*(float (*))(void *)(sr_frame_1401543C0 + 16)) /* [rsp+50h] */
#define state_address_4 (*(float (*))(void *)(sr_frame_1401543C0 + 20)) /* [rsp+54h] */
#define scaled_value_7 (*(float (*))(void *)(sr_frame_1401543C0 + 24)) /* [rsp+58h] */
#define scaled_value_8 (*(float (*))(void *)(sr_frame_1401543C0 + 28)) /* [rsp+5Ch] */
#define state_address_5 (*(float (*))(void *)(sr_frame_1401543C0 + 32)) /* [rsp+60h] */
#define state_address_6 (*(float (*))(void *)(sr_frame_1401543C0 + 36)) /* [rsp+64h] */
#define state_address_7 (*(float (*))(void *)(sr_frame_1401543C0 + 40)) /* [rsp+68h] */
#define scaled_value_9 (*(float (*))(void *)(sr_frame_1401543C0 + 44)) /* [rsp+6Ch] */
#define scaled_value_10 (*(float (*))(void *)(sr_frame_1401543C0 + 48)) /* [rsp+70h] */
#define component_delta_26 (*(float (*))(void *)(sr_frame_1401543C0 + 104)) /* [rsp+A8h] */
#define saved_state_address (*(float (*))(void *)(sr_frame_1401543C0 + 108)) /* [rsp+ACh] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1401543C0 + 112)) /* [rsp+B0h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1401543C0 + 128)) /* [rsp+C0h] */
#define normal (*(float (*)[4])(void *)(sr_frame_1401543C0 + 144)) /* [rsp+D0h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_1401543C0 + 160)) /* [rsp+E0h] */
#define float_buffer_4 (*(float (*)[4])(void *)(sr_frame_1401543C0 + 176)) /* [rsp+F0h] */
#define t (*(__int128 (*))(void *)(sr_frame_1401543C0 + 192)) /* [rsp+100h] */
#define saved_source_component_y (*(float (*))(void *)(sr_frame_1401543C0 + 424)) /* [rsp+1E8h] */
#define saved_scaled_value (*(float (*))(void *)(sr_frame_1401543C0 + 448)) /* [rsp+200h] */

  static const unsigned sr_static_voxel_vertices[24] = {0x00000000u,0x00000000u,0x00000000u,0x3f800000u,0x00000000u,0x00000000u,0x3f800000u,0x00000000u,0x3f800000u,0x00000000u,0x00000000u,0x3f800000u,0x00000000u,0x3f800000u,0x00000000u,0x3f800000u,0x3f800000u,0x00000000u,0x3f800000u,0x3f800000u,0x3f800000u,0x00000000u,0x3f800000u,0x3f800000u};
  static const unsigned sr_static_voxel_normals[18] = {0x00000000u,0xbf800000u,0x00000000u,0x00000000u,0x00000000u,0x3f800000u,0xbf800000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0xbf800000u,0x3f800000u,0x00000000u,0x00000000u,0x00000000u,0x3f800000u,0x00000000u};
  static const unsigned sr_static_voxel_faces[24] = {0x00000003u,0x00000002u,0x00000001u,0x00000000u,0x00000007u,0x00000006u,0x00000002u,0x00000003u,0x00000004u,0x00000007u,0x00000003u,0x00000000u,0x00000005u,0x00000004u,0x00000000u,0x00000001u,0x00000006u,0x00000005u,0x00000001u,0x00000002u,0x00000004u,0x00000005u,0x00000006u,0x00000007u};
  record_byte_offset = (sr_static_voxel_faces+1);
  input_value = a8;
  weighted_sum = (float *)(sr_static_voxel_normals+2);
  input_value_2 = a5;
  bit_mask = a7;
  iteration_count = 0;
  *a3 = 65536.0;
  scaled_value = (float)*a6;
  source_component_y = (float)a6[1];
  source_component_z = (float)a6[2];
  saved_scaled_value = scaled_value;
  saved_source_component_y = source_component_y;
  saved_source_component_z = source_component_z;
  do
  {
    if ( ((((64 << iteration_count) & bit_mask) != 0) & _bittest(&bit_mask, iteration_count)) == 0 )
      goto LABEL_63;
    scaled_value_2 = *a4;
    source_component_y_2 = a4[1];
    product_difference = *(weighted_sum - 2);
    product_difference_2 = *(weighted_sum - 1);
    scaled_value_3 = *weighted_sum;
    source_component_z_2 = a4[2];
    state_address = (float)(scaled_value + *(float *)&sr_static_voxel_vertices[3 * *(record_byte_offset - 1)]) * input_value;
    scaled_index = 3LL * *record_byte_offset;
    table_value = record_byte_offset[1];
    state_address_2 = (float)(source_component_y + *(float *)&sr_static_voxel_vertices[3 * *(record_byte_offset - 1) + 1]) * input_value;
    weighted_sum_2 = scaled_value + *(float *)&sr_static_voxel_vertices[3 * *record_byte_offset];
    state_address_3 = (float)(source_component_z + *(float *)&sr_static_voxel_vertices[3 * *(record_byte_offset - 1) + 2]) * input_value;
    float_buffer_2[0] = state_address;
    float_buffer_2[1] = state_address_2;
    saved_state_address = state_address_3;
    float_buffer_2[2] = state_address_3;
    scaled_value_7 = weighted_sum_2 * input_value;
    float_buffer_3[0] = weighted_sum_2 * input_value;
    weighted_sum_3 = source_component_y + *(float *)&sr_static_voxel_vertices[scaled_index + 1];
    normal[0] = product_difference;
    normal[1] = product_difference_2;
    normal[2] = scaled_value_3;
    scaled_value_8 = weighted_sum_3 * input_value;
    float_buffer_3[1] = weighted_sum_3 * input_value;
    weighted_sum_4 = source_component_z + *(float *)&sr_static_voxel_vertices[scaled_index + 2];
    scaled_index_2 = 3 * table_value;
    table_value_2 = record_byte_offset[2];
    scaled_value_6 = weighted_sum_4 * input_value;
    float_buffer_3[2] = weighted_sum_4 * input_value;
    state_address_5 = (float)(scaled_value + *(float *)&sr_static_voxel_vertices[scaled_index_2]) * input_value;
    float_buffer[0] = state_address_5;
    state_address_6 = (float)(source_component_y + *(float *)&sr_static_voxel_vertices[scaled_index_2 + 1]) * input_value;
    float_buffer[1] = state_address_6;
    state_address_4 = (float)(source_component_z + *(float *)&sr_static_voxel_vertices[scaled_index_2 + 2]) * input_value;
    float_buffer[2] = state_address_4;
    state_address_7 = (float)(scaled_value + *(float *)&sr_static_voxel_vertices[3 * table_value_2]) * input_value;
    float_buffer_4[0] = state_address_7;
    weighted_sum_5 = source_component_y + *(float *)&sr_static_voxel_vertices[3 * table_value_2 + 1];
    sr_sphere_1543c0_vector_142[0] = scaled_value_2 - state_address;
    scaled_value_9 = weighted_sum_5 * input_value;
    float_buffer_4[1] = weighted_sum_5 * input_value;
    weighted_sum_6 = source_component_z + *(float *)&sr_static_voxel_vertices[3 * table_value_2 + 2];
    sr_sphere_1543c0_vector_142[1] = source_component_y_2 - state_address_2;
    scaled_value_10 = weighted_sum_6 * input_value;
    float_buffer_4[2] = weighted_sum_6 * input_value;
    component_delta = source_component_z_2 - state_address_3;
    sr_sphere_1543c0_vector_142[2] = component_delta;
    combined_products = (float)((float)((float)(scaled_value_2 - state_address) * product_difference) + (float)((float)(source_component_y_2 - state_address_2) * product_difference_2)) + (float)(component_delta * scaled_value_3);
    if ( combined_products > 0.0 )
    {
      sr_sphere_1543c0_vector_145[0] = scaled_value_2 - state_address;
      sr_sphere_1543c0_vector_145[1] = source_component_y_2 - state_address_2;
      sr_sphere_1543c0_vector_145[2] = component_delta;
      if ( combined_products <= input_value_2 )
      {
        combined_products_2 = (float)((float)-input_value_2 * scaled_value_3) + a4[2];
        sr_sphere_1543c0_vector_145[0] = (float)((float)-input_value_2 * product_difference) + scaled_value_2;
        sr_sphere_1543c0_vector_145[1] = (float)((float)-input_value_2 * product_difference_2) + source_component_y_2;
        sr_sphere_1543c0_vector_145[2] = combined_products_2;
        if ( sr_collision_line_triangle(&sr_sphere_1543c0_vector_142[0], normal, (float *)&t, a4, &sr_sphere_1543c0_vector_145[0], float_buffer_2, float_buffer_3, float_buffer) )
        {
          source_component_y_3 = sr_sphere_1543c0_vector_142[1];
          source_component_z_3 = sr_sphere_1543c0_vector_142[2];
          square_root = fsqrt(
                  (float)((float)((float)(sr_sphere_1543c0_vector_142[1] - a4[1]) * (float)(sr_sphere_1543c0_vector_142[1] - a4[1]))
                        + (float)((float)(sr_sphere_1543c0_vector_142[0] - *a4) * (float)(sr_sphere_1543c0_vector_142[0] - *a4)))
                + (float)((float)(sr_sphere_1543c0_vector_142[2] - a4[2]) * (float)(sr_sphere_1543c0_vector_142[2] - a4[2])));
          if ( square_root < *a3 )
          {
            *a1 = sr_sphere_1543c0_vector_142[0];
            a1[1] = source_component_y_3;
            a1[2] = source_component_z_3;
            *a2 = product_difference;
            a2[1] = product_difference_2;
            a2[2] = scaled_value_3;
            *a3 = square_root;
          }
        }
      }
      scaled_value_4 = *a4;
      source_component_y_4 = a4[1];
      source_component_z_4 = a4[2];
      product_difference_3 = product_difference * (float)(*a4 - state_address);
      sr_sphere_1543c0_vector_148[0] = *a4 - state_address;
      sr_sphere_1543c0_vector_148[2] = source_component_z_4 - state_address_3;
      sr_sphere_1543c0_vector_148[1] = source_component_y_4 - state_address_2;
      combined_products_3 = (float)(product_difference_3 + (float)(product_difference_2 * (float)(source_component_y_4 - state_address_2))) + (float)((float)(source_component_z_4 - state_address_3) * scaled_value_3);
      if ( combined_products_3 <= input_value_2 && combined_products_3 >= 0.0 )
      {
        sr_sphere_1543c0_vector_148[0] = (float)(product_difference * (float)-input_value_2) + scaled_value_4;
        sr_sphere_1543c0_vector_148[1] = (float)(product_difference_2 * (float)-input_value_2) + source_component_y_4;
        sr_sphere_1543c0_vector_148[2] = (float)(scaled_value_3 * (float)-input_value_2) + source_component_z_4;
        if ( sr_collision_line_triangle(&sr_sphere_1543c0_vector_142[0], normal, (float *)&t + 1, a4, &sr_sphere_1543c0_vector_148[0], float_buffer_2, float_buffer, float_buffer_4) )
        {
          source_component_y_5 = sr_sphere_1543c0_vector_142[1];
          source_component_z_5 = sr_sphere_1543c0_vector_142[2];
          square_root_2 = fsqrt(
                  (float)((float)((float)(sr_sphere_1543c0_vector_142[1] - a4[1]) * (float)(sr_sphere_1543c0_vector_142[1] - a4[1]))
                        + (float)((float)(sr_sphere_1543c0_vector_142[0] - *a4) * (float)(sr_sphere_1543c0_vector_142[0] - *a4)))
                + (float)((float)(sr_sphere_1543c0_vector_142[2] - a4[2]) * (float)(sr_sphere_1543c0_vector_142[2] - a4[2])));
          if ( square_root_2 < *a3 )
          {
            *a1 = sr_sphere_1543c0_vector_142[0];
            a1[1] = source_component_y_5;
            a1[2] = source_component_z_5;
            *a2 = product_difference;
            a2[1] = product_difference_2;
            a2[2] = scaled_value_3;
            *a3 = square_root_2;
          }
        }
      }
      component_delta_2 = scaled_value_7 - state_address;
      component_delta_3 = scaled_value_8 - state_address_2;
      source_component_y_6 = a4[1];
      component_delta_4 = scaled_value_6 - state_address_3;
      source_component_z_6 = a4[2];
      scaled_value_5 = *a4;
      product_difference_4 = *a4 - state_address;
      square_root_3 = fsqrt((float)((float)(component_delta_3 * component_delta_3) + (float)(component_delta_2 * component_delta_2)) + (float)(component_delta_4 * component_delta_4));
      component_delta_26 = source_component_y_6 - state_address_2;
      if ( square_root_3 == 0.0 )
      {
        scaled_ratio = 0.0;
        scaled_ratio_2 = 0.0;
        scaled_ratio_3 = 0.0;
      }
      else
      {
        scaled_ratio = (float)(1.0 / square_root_3) * component_delta_2;
        scaled_ratio_2 = (float)(1.0 / square_root_3) * component_delta_3;
        scaled_ratio_3 = (float)(1.0 / square_root_3) * component_delta_4;
      }
      combined_products_4 = (float)((float)(scaled_ratio_2 * component_delta_26) + (float)(scaled_ratio * product_difference_4)) + (float)(scaled_ratio_3 * (float)(source_component_z_6 - state_address_3));
      if ( combined_products_4 <= 0.0
        || combined_products_4 >= square_root_3
        || (weighted_sum_7 = (float)(scaled_ratio * combined_products_4) + state_address,
            weighted_sum_8 = (float)(scaled_ratio_2 * combined_products_4) + state_address_2,
            weighted_sum_9 = (float)(scaled_ratio_3 * combined_products_4) + state_address_3,
            component_delta_5 = scaled_value_5 - weighted_sum_7,
            component_delta_6 = source_component_y_6 - weighted_sum_8,
            component_delta_7 = source_component_z_6 - weighted_sum_9,
            square_root_4 = fsqrt((float)((float)(component_delta_6 * component_delta_6) + (float)(component_delta_5 * component_delta_5)) + (float)(component_delta_7 * component_delta_7)),
            square_root_4 >= a5) )
      {
        saved_square_root = *a3;
      }
      else
      {
        if ( square_root_4 == 0.0 )
        {
          scaled_ratio_4 = 0.0;
          scaled_ratio_5 = 0.0;
          scaled_ratio_6 = 0.0;
        }
        else
        {
          scaled_ratio_4 = (float)(1.0 / square_root_4) * component_delta_5;
          scaled_ratio_5 = (float)(1.0 / square_root_4) * component_delta_6;
          scaled_ratio_6 = (float)(1.0 / square_root_4) * component_delta_7;
        }
        saved_square_root = *a3;
        if ( *a3 > square_root_4 )
        {
          *a1 = weighted_sum_7;
          saved_square_root = square_root_4;
          a1[1] = weighted_sum_8;
          a1[2] = weighted_sum_9;
          *a2 = scaled_ratio_4;
          a2[1] = scaled_ratio_5;
          a2[2] = scaled_ratio_6;
          *a3 = square_root_4;
          scaled_value_5 = *a4;
          source_component_y_6 = a4[1];
          source_component_z_6 = a4[2];
        }
      }
      component_delta_8 = state_address_5 - scaled_value_7;
      component_delta_9 = state_address_6 - scaled_value_8;
      component_delta_10 = state_address_4 - scaled_value_6;
      square_root_5 = fsqrt((float)((float)(component_delta_9 * component_delta_9) + (float)(component_delta_8 * component_delta_8)) + (float)(component_delta_10 * component_delta_10));
      if ( square_root_5 == 0.0 )
      {
        scaled_ratio_7 = 0.0;
        scaled_ratio_8 = 0.0;
        scaled_ratio_9 = 0.0;
      }
      else
      {
        scaled_ratio_7 = (float)(1.0 / square_root_5) * component_delta_8;
        scaled_ratio_8 = (float)(1.0 / square_root_5) * component_delta_9;
        scaled_ratio_9 = (float)(1.0 / square_root_5) * component_delta_10;
      }
      combined_products_5 = (float)((float)(scaled_ratio_7 * (float)(scaled_value_5 - scaled_value_7)) + (float)((float)(source_component_y_6 - scaled_value_8) * scaled_ratio_8))
          + (float)((float)(source_component_z_6 - scaled_value_6) * scaled_ratio_9);
      if ( combined_products_5 <= 0.0
        || combined_products_5 >= square_root_5
        || (weighted_sum_10 = (float)(combined_products_5 * scaled_ratio_8) + scaled_value_8,
            weighted_sum_11 = (float)(scaled_ratio_7 * combined_products_5) + scaled_value_7,
            weighted_sum_12 = (float)(combined_products_5 * scaled_ratio_9) + scaled_value_6,
            component_delta_11 = source_component_y_6 - weighted_sum_10,
            component_delta_12 = scaled_value_5 - weighted_sum_11,
            component_delta_13 = source_component_z_6 - weighted_sum_12,
            square_root_6 = fsqrt((float)((float)(component_delta_11 * component_delta_11) + (float)(component_delta_12 * component_delta_12)) + (float)(component_delta_13 * component_delta_13)),
            square_root_6 >= a5) )
      {
        saved_square_root = *a3;
      }
      else
      {
        if ( square_root_6 == 0.0 )
        {
          scaled_ratio_10 = 0.0;
          scaled_ratio_11 = 0.0;
          scaled_ratio_12 = 0.0;
        }
        else
        {
          scaled_ratio_10 = (float)(1.0 / square_root_6) * component_delta_12;
          scaled_ratio_11 = (float)(1.0 / square_root_6) * component_delta_11;
          scaled_ratio_12 = (float)(1.0 / square_root_6) * component_delta_13;
        }
        if ( saved_square_root > square_root_6 )
        {
          *a1 = weighted_sum_11;
          saved_square_root = square_root_6;
          a1[1] = weighted_sum_10;
          a1[2] = weighted_sum_12;
          *a2 = scaled_ratio_10;
          a2[1] = scaled_ratio_11;
          a2[2] = scaled_ratio_12;
          *a3 = square_root_6;
          scaled_value_5 = *a4;
          source_component_y_6 = a4[1];
          source_component_z_6 = a4[2];
        }
      }
      component_delta_14 = state_address_7 - state_address_5;
      component_delta_15 = scaled_value_9 - state_address_6;
      component_delta_16 = scaled_value_10 - state_address_4;
      square_root_7 = fsqrt((float)((float)(component_delta_15 * component_delta_15) + (float)(component_delta_14 * component_delta_14)) + (float)(component_delta_16 * component_delta_16));
      if ( square_root_7 == 0.0 )
      {
        scaled_ratio_13 = 0.0;
        scaled_ratio_14 = 0.0;
        scaled_ratio_15 = 0.0;
      }
      else
      {
        scaled_ratio_13 = (float)(1.0 / square_root_7) * component_delta_14;
        scaled_ratio_14 = (float)(1.0 / square_root_7) * component_delta_15;
        scaled_ratio_15 = (float)(1.0 / square_root_7) * component_delta_16;
      }
      combined_products_6 = (float)((float)((float)(source_component_y_6 - state_address_6) * scaled_ratio_14) + (float)(scaled_ratio_13 * (float)(scaled_value_5 - state_address_5)))
           + (float)((float)(source_component_z_6 - state_address_4) * scaled_ratio_15);
      if ( combined_products_6 <= 0.0
        || combined_products_6 >= square_root_7
        || (weighted_sum_13 = (float)(combined_products_6 * scaled_ratio_14) + state_address_6,
            weighted_sum_14 = (float)(scaled_ratio_13 * combined_products_6) + state_address_5,
            weighted_sum_15 = (float)(combined_products_6 * scaled_ratio_15) + state_address_4,
            component_delta_17 = source_component_y_6 - weighted_sum_13,
            component_delta_18 = scaled_value_5 - weighted_sum_14,
            component_delta_19 = source_component_z_6 - weighted_sum_15,
            square_root_8 = fsqrt((float)((float)(component_delta_17 * component_delta_17) + (float)(component_delta_18 * component_delta_18)) + (float)(component_delta_19 * component_delta_19)),
            square_root_8 >= a5) )
      {
        saved_square_root = *a3;
      }
      else
      {
        if ( square_root_8 == 0.0 )
        {
          scaled_ratio_16 = 0.0;
          scaled_ratio_17 = 0.0;
          scaled_ratio_18 = 0.0;
        }
        else
        {
          scaled_ratio_16 = (float)(1.0 / square_root_8) * component_delta_18;
          scaled_ratio_17 = (float)(1.0 / square_root_8) * component_delta_17;
          scaled_ratio_18 = (float)(1.0 / square_root_8) * component_delta_19;
        }
        if ( saved_square_root > square_root_8 )
        {
          *a1 = weighted_sum_14;
          saved_square_root = square_root_8;
          a1[1] = weighted_sum_13;
          a1[2] = weighted_sum_15;
          *a2 = scaled_ratio_16;
          a2[1] = scaled_ratio_17;
          a2[2] = scaled_ratio_18;
          *a3 = square_root_8;
          scaled_value_5 = *a4;
          source_component_y_6 = a4[1];
          source_component_z_6 = a4[2];
        }
      }
      component_delta_20 = state_address - state_address_7;
      component_delta_21 = state_address_2 - scaled_value_9;
      component_delta_22 = saved_state_address - scaled_value_10;
      square_root_9 = fsqrt((float)((float)(component_delta_21 * component_delta_21) + (float)(component_delta_20 * component_delta_20)) + (float)(component_delta_22 * component_delta_22));
      if ( square_root_9 == 0.0 )
      {
        scaled_ratio_19 = 0.0;
        scaled_ratio_20 = 0.0;
        scaled_ratio_21 = 0.0;
      }
      else
      {
        scaled_ratio_19 = (float)(1.0 / square_root_9) * component_delta_20;
        scaled_ratio_20 = (float)(1.0 / square_root_9) * component_delta_21;
        scaled_ratio_21 = (float)(1.0 / square_root_9) * component_delta_22;
      }
      combined_products_7 = (float)((float)((float)(source_component_y_6 - scaled_value_9) * scaled_ratio_20) + (float)((float)(scaled_value_5 - state_address_7) * scaled_ratio_19))
           + (float)((float)(source_component_z_6 - scaled_value_10) * scaled_ratio_21);
      if ( combined_products_7 <= 0.0 )
      {
        input_value_2 = a5;
      }
      else
      {
        comparison_result = combined_products_7 < square_root_9;
        input_value_2 = a5;
        if ( comparison_result )
        {
          weighted_sum_16 = (float)(combined_products_7 * scaled_ratio_19) + state_address_7;
          weighted_sum_17 = (float)(combined_products_7 * scaled_ratio_20) + scaled_value_9;
          weighted_sum_18 = (float)(combined_products_7 * scaled_ratio_21) + scaled_value_10;
          component_delta_23 = scaled_value_5 - weighted_sum_16;
          component_delta_24 = source_component_y_6 - weighted_sum_17;
          component_delta_25 = source_component_z_6 - weighted_sum_18;
          square_root_10 = fsqrt((float)((float)(component_delta_24 * component_delta_24) + (float)(component_delta_23 * component_delta_23)) + (float)(component_delta_25 * component_delta_25));
          if ( square_root_10 < a5 )
          {
            if ( square_root_10 == 0.0 )
            {
              scaled_ratio_23 = 0.0;
              scaled_ratio_24 = 0.0;
              scaled_ratio_22 = 0.0;
            }
            else
            {
              scaled_ratio_22 = component_delta_25 * (float)(1.0 / square_root_10);
              scaled_ratio_23 = (float)(1.0 / square_root_10) * component_delta_23;
              scaled_ratio_24 = (float)(1.0 / square_root_10) * component_delta_24;
            }
            bit_mask = a7;
            if ( saved_square_root > square_root_10 )
            {
              *a1 = weighted_sum_16;
              a1[1] = weighted_sum_17;
              a1[2] = weighted_sum_18;
              *a2 = scaled_ratio_23;
              a2[1] = scaled_ratio_24;
              a2[2] = scaled_ratio_22;
              *a3 = square_root_10;
            }
            goto LABEL_62;
          }
        }
      }
      bit_mask = a7;
    }
LABEL_62:
    source_component_z = saved_source_component_z;
    source_component_y = saved_source_component_y;
    scaled_value = saved_scaled_value;
    input_value = a8;
LABEL_63:
    ++iteration_count;
    record_byte_offset += 4;
    weighted_sum += 3;
  }
  while ( iteration_count < 6 );
  return *a3 < 65536.0;
}
#undef saved_source_component_z
#undef scaled_value_6
#undef state_address_4
#undef scaled_value_7
#undef scaled_value_8
#undef state_address_5
#undef state_address_6
#undef state_address_7
#undef scaled_value_9
#undef scaled_value_10
#undef component_delta_26
#undef saved_state_address
#undef float_buffer
#undef float_buffer_2
#undef normal
#undef float_buffer_3
#undef float_buffer_4
#undef t
#undef saved_source_component_y
#undef saved_scaled_value

//----- (00000001401564A0) ----------------------------------------------------
_BOOL8            sub_1401564A0(float *a1, float *a2, float *a3, float *a4, float a5, __int64 a6, float a7, float a8)
{
  unsigned __int16 loword_result;
  float input_value;
  float input_value_2;
  float input_value_3;
  signed int iteration_count;
  int hiword_result;
  __m128i converted_vector;
  __m128i converted_vector_2;
  __int64 scaled_index;
  float scaled_value;
  float converted_vector_3;
  float converted_vector_4;
  __int64 record_byte_offset;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 loaded_word;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 packed_word_bits;
  float scaled_value_2;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  __int64 packed_word_bits_2;
  float scaled_value_3;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float component_delta;
  __int64 scaled_index_2;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float product_difference_4;
  float product_difference_5;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float product_difference_6;
  float component_delta_2;
  float component_delta_3;
  float weighted_sum_13;
  float combined_products;
  float source_component_y;
  float source_component_z;
  float square_root_2;
  bool comparison_result;
  float source_component_y_2;
  float scaled_value_4;
  float component_delta_4;
  float product_difference_7;
  float combined_products_2;
  float source_component_y_3;
  float source_component_z_2;
  float square_root_3;
  float saved_product_difference;
  float source_component_z_3;
  float scaled_value_5;
  float source_component_y_4;
  float product_difference_8;
  float square_root_4;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float combined_products_3;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  float component_delta_5;
  float component_delta_6;
  float component_delta_7;
  float square_root_5;
  float scaled_ratio_7;
  float scaled_ratio_8;
  float scaled_ratio_9;
  float saved_square_root;
  float component_delta_8;
  float component_delta_9;
  float component_delta_10;
  float square_root_6;
  float scaled_ratio_10;
  float scaled_ratio_11;
  float scaled_ratio_12;
  float combined_products_4;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  float component_delta_11;
  float component_delta_12;
  float component_delta_13;
  float square_root_7;
  float scaled_ratio_13;
  float scaled_ratio_14;
  float scaled_ratio_15;
  float component_delta_14;
  float component_delta_15;
  float component_delta_16;
  float square_root_8;
  float scaled_ratio_16;
  float scaled_ratio_17;
  float scaled_ratio_18;
  float combined_products_5;
  float weighted_sum_20;
  float weighted_sum_21;
  float weighted_sum_22;
  float component_delta_17;
  float component_delta_18;
  float component_delta_19;
  float square_root_9;
  float scaled_ratio_19;
  float scaled_ratio_20;
  float scaled_ratio_21;
  float component_delta_20;
  float component_delta_21;
  float component_delta_22;
  float square_root_10;
  float scaled_ratio_22;
  float scaled_ratio_23;
  float scaled_ratio_24;
  float combined_products_6;
  float weighted_sum_23;
  float weighted_sum_24;
  float combined_products_7;
  float component_delta_23;
  float component_delta_24;
  float component_delta_25;
  float square_root_11;
  float scaled_ratio_25;
  float scaled_ratio_26;
  float scaled_ratio_27;
  __int64 cached_scaled_index;
  signed int iteration_count_2;
  unsigned __int64 iteration_count_3;
  int rol4_result;
  __int64 scaled_index_3;
  __int64 masked_bits_3;
  float saved_converted_vector;
  float saved_converted_vector_2;
  float weighted_sum_25;
  float weighted_sum_26;
  float weighted_sum_27;
  float weighted_sum_28;
  float weighted_sum_29;
  float weighted_sum_30;
  float weighted_sum_31;
  float weighted_sum_32;
  float weighted_sum_33;
  float scaled_value_6;
  float scaled_value_7;
  float scaled_value_8;
  float weighted_sum_34;
  float scaled_value_9;
  float scaled_value_10;
  float product_difference_9;
  float product_difference_10;
  float product_difference_11;
  float product_difference_12;
  float square_root_12;
  float scaled_ratio_28;
  float scaled_ratio_29;
  float scaled_ratio_30;
  float product_difference_13;
  float component_delta_26;
  float component_delta_27;
  float weighted_sum_35;
  float combined_products_8;
  float combined_products_9;
  float source_component_y_5;
  float source_component_z_4;
  float square_root_13;
  float scaled_value_11;
  float source_component_y_6;
  float source_component_z_5;
  float combined_products_10;
  float source_component_y_7;
  float source_component_z_6;
  float square_root_14;
  float source_component_y_8;
  float source_component_z_7;
  float component_delta_28;
  float scaled_value_12;
  float product_difference_14;
  float square_root_15;
  float scaled_ratio_31;
  float scaled_value_13;
  float scaled_value_14;
  float scaled_value_15;
  float combined_products_11;
  float weighted_sum_36;
  float weighted_sum_37;
  float weighted_sum_38;
  float component_delta_29;
  float square_root_16;
  float scaled_ratio_32;
  float input_value_4;
  float saved_square_root_2;
  float component_delta_30;
  float square_root_17;
  float scaled_ratio_33;
  float scaled_ratio_34;
  float scaled_ratio_35;
  float combined_products_12;
  float weighted_sum_39;
  float weighted_sum_40;
  float component_delta_31;
  float square_root_18;
  float scaled_ratio_36;
  float scaled_ratio_37;
  float scaled_ratio_38;
  float component_delta_32;
  float square_root_19;
  float scaled_ratio_39;
  float scaled_ratio_40;
  float scaled_ratio_41;
  float combined_products_13;
  float weighted_sum_41;
  float weighted_sum_42;
  float weighted_sum_43;
  float square_root_20;
  float scaled_ratio_42;
  float product_difference_15;
  float component_delta_33;
  float component_delta_34;
  float component_delta_35;
  float square_root_21;
  float scaled_ratio_43;
  float scaled_ratio_44;
  float scaled_ratio_45;
  float combined_products_14;
  float weighted_sum_44;
  float weighted_sum_45;
  float weighted_sum_46;
  float component_delta_36;
  float component_delta_37;
  float component_delta_38;
  float square_root_22;
  float scaled_ratio_46;
  float scaled_ratio_47;
  float scaled_ratio_48;
  __int64 masked_bits_4;
  float weighted_sum_47;
  float weighted_sum_48;
  float weighted_sum_49;
  float weighted_sum_50;
  float weighted_sum_51;
  float weighted_sum_52;
  float weighted_sum_53;
  float weighted_sum_54;
  float weighted_sum_55;
  float weighted_sum_56;
  float weighted_sum_57;
  float scaled_value_16;
  float scaled_value_17;
  float component_delta_39;
  float scaled_value_18;
  float product_difference_16;
  float product_difference_17;
  float product_difference_18;
  float product_difference_19;
  float product_difference_20;
  float product_difference_21;
  float product_difference_22;
  float product_difference_23;
  float square_root_23;
  float scaled_ratio_49;
  float scaled_ratio_50;
  float scaled_ratio_51;
  float component_delta_40;
  float scaled_value_19;
  float component_delta_41;
  float product_difference_24;
  float weighted_sum_58;
  float combined_products_15;
  float combined_products_16;
  float source_component_y_9;
  float source_component_z_8;
  float square_root_24;
  float scaled_value_20;
  float source_component_y_10;
  float source_component_z_9;
  float combined_products_17;
  float source_component_y_11;
  float source_component_z_10;
  float square_root_25;
  float input_value_5;
  float source_component_y_12;
  float source_component_z_11;
  float source_component_x;
  float source_component_y_13;
  float input_value_6;
  float source_component_y_14;
  float source_component_z_12;
  float source_component_x_2;
  float source_component_y_15;
  float input_value_7;
  float source_component_y_16;
  float source_component_z_13;
  float source_component_x_3;
  float source_component_y_17;
  int call_result;
  float input_value_8;
  float source_component_y_18;
  float source_component_z_14;
  float source_component_x_4;
  float source_component_y_19;
  float sr_sphere_1564a0_vector_323[3];
  float sr_sphere_1564a0_vector_327[3];
  _Alignas(8) unsigned sr_sphere_mesh_offset[3];
  float sr_sphere_1564a0_vector_345[3];
  float sr_sphere_1564a0_vector_348[3];
  float sr_sphere_1564a0_vector_352[3];
  float sr_sphere_1564a0_vector_355[3];
  float sr_sphere_1564a0_vector_358[3];
  float sr_sphere_1564a0_vector_363[3];
  float sr_sphere_1564a0_vector_366[3];
  float sr_sphere_1564a0_vector_369[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401564A0[528];
#define saved_square_root_3 (*(float (*))(void *)(sr_frame_1401564A0 + 0)) /* [rsp+58h] */
#define saved_square_root_4 (*(float (*))(void *)(sr_frame_1401564A0 + 24)) /* [rsp+70h] */
#define saved_square_root_5 (*(float (*))(void *)(sr_frame_1401564A0 + 28)) /* [rsp+74h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1401564A0 + 32)) /* [rsp+78h] */
#define scaled_value_21 (*(float (*))(void *)(sr_frame_1401564A0 + 36)) /* [rsp+7Ch] */
#define scaled_value_22 (*(float (*))(void *)(sr_frame_1401564A0 + 40)) /* [rsp+80h] */
#define scaled_value_23 (*(float (*))(void *)(sr_frame_1401564A0 + 44)) /* [rsp+84h] */
#define scaled_ratio_52 (*(float (*))(void *)(sr_frame_1401564A0 + 48)) /* [rsp+88h] */
#define weighted_sum_59 (*(float (*))(void *)(sr_frame_1401564A0 + 52)) /* [rsp+8Ch] */
#define scaled_value_24 (*(float (*))(void *)(sr_frame_1401564A0 + 56)) /* [rsp+90h] */
#define weighted_sum_60 (*(float (*))(void *)(sr_frame_1401564A0 + 60)) /* [rsp+94h] */
#define product_difference_25 (*(float (*))(void *)(sr_frame_1401564A0 + 64)) /* [rsp+98h] */
#define saved_converted_vector_3 (*(float (*))(void *)(sr_frame_1401564A0 + 68)) /* [rsp+9Ch] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_1401564A0 + 72)) /* [rsp+A0h] */
#define saved_scaled_value (*(float (*))(void *)(sr_frame_1401564A0 + 128)) /* [rsp+D8h] */
#define saved_hiword_result (*(int (*))(void *)(sr_frame_1401564A0 + 184)) /* [rsp+110h] */
#define scaled_index_4 (*(__int64 (*))(void *)(sr_frame_1401564A0 + 192)) /* [rsp+118h] */
#define t (*(float (*))(void *)(sr_frame_1401564A0 + 248)) /* [rsp+150h] */
#define t_2 (*(float (*))(void *)(sr_frame_1401564A0 + 252)) /* [rsp+154h] */
#define t_3 (*(float (*))(void *)(sr_frame_1401564A0 + 256)) /* [rsp+158h] */
#define t_4 (*(float (*)[43])(void *)(sr_frame_1401564A0 + 260)) /* [rsp+15Ch] */
#define scaled_value_25 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define component_delta_42 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define component_delta_43 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define scaled_ratio_53 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define component_delta_44 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define component_delta_45 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define component_delta_46 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define saved_converted_vector_4 (*(float (*))(void *)(sr_frame_1401564A0 + 520)) /* [rsp+260h] */

  loword_result = LOWORD(a7);
  input_value = a8;
  input_value_2 = a7;
  input_value_3 = a5;
  *a3 = 65536.0;
  iteration_count = 0;
  hiword_result = HIWORD(LODWORD(input_value_2));
  converted_vector = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 4));
  converted_vector_2 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 8));
  scaled_index = 58LL * loword_result;
  scaled_value = (float)*(int *)a6;
  saved_hiword_result = hiword_result;
  converted_vector_3 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0];
  scaled_index_4 = scaled_index * 4;
  converted_vector_4 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_2), f32)[0];
  saved_scaled_value = scaled_value;
  saved_converted_vector_3 = converted_vector_3;
  saved_converted_vector_4 = converted_vector_4;
  if ( (int)dword_140404A6C[scaled_index + 20074623] > 0 )
  {
    record_byte_offset = 0;
    do
    {
      masked_bits = *(_QWORD *)&dword_140404A6C[scaled_index + 20074615];
      masked_bits_2 = *(_QWORD *)&dword_140404A6C[scaled_index + 20074631];
      loaded_word = 3 * *(_DWORD *)(record_byte_offset + masked_bits_2);
      weighted_sum = converted_vector_3 + *(float *)(masked_bits + 4 * loaded_word + 4);
      weighted_sum_2 = (float)(scaled_value + *(float *)(masked_bits + 4 * loaded_word)) * input_value;
      weighted_sum_3 = (float)(converted_vector_4 + *(float *)(masked_bits + 4 * loaded_word + 8)) * input_value;
      packed_word_bits = 3 * *(_DWORD *)(record_byte_offset + masked_bits_2 + 4);
      scaled_value_2 = weighted_sum * input_value;
      saved_weighted_sum_2 = weighted_sum_2;
      weighted_sum_4 = scaled_value + *(float *)(masked_bits + 4 * packed_word_bits);
      weighted_sum_5 = converted_vector_3 + *(float *)(masked_bits + 4 * packed_word_bits + 4);
      weighted_sum_6 = converted_vector_4 + *(float *)(masked_bits + 4 * packed_word_bits + 8);
      LODWORD(packed_word_bits) = *(_DWORD *)(record_byte_offset + masked_bits_2 + 8);
      sr_sphere_1564a0_vector_348[0] = weighted_sum_2;
      packed_word_bits_2 = 3 * (int)packed_word_bits;
      scaled_value_3 = weighted_sum_5 * input_value;
      scaled_value_23 = weighted_sum_6 * input_value;
      weighted_sum_7 = scaled_value + *(float *)(masked_bits + 4 * packed_word_bits_2);
      weighted_sum_8 = converted_vector_3 + *(float *)(masked_bits + 4 * packed_word_bits_2 + 4);
      weighted_sum_9 = converted_vector_4 + *(float *)(masked_bits + 4 * packed_word_bits_2 + 8);
      LODWORD(packed_word_bits_2) = *(_DWORD *)(record_byte_offset + masked_bits_2 + 12);
      sr_sphere_1564a0_vector_352[2] = weighted_sum_6 * input_value;
      component_delta = scaled_value_3 - scaled_value_2;
      scaled_index_2 = 3 * (int)packed_word_bits_2;
      saved_square_root_5 = scaled_value_2;
      weighted_sum_10 = scaled_value + *(float *)(masked_bits + 4 * scaled_index_2);
      sr_sphere_1564a0_vector_348[1] = scaled_value_2;
      saved_square_root_3 = weighted_sum_3;
      sr_sphere_1564a0_vector_348[2] = weighted_sum_3;
      weighted_sum_60 = weighted_sum_4 * input_value;
      sr_sphere_1564a0_vector_352[0] = weighted_sum_4 * input_value;
      scaled_ratio_52 = scaled_value_3;
      weighted_sum_59 = weighted_sum_10 * input_value;
      sr_sphere_1564a0_vector_355[0] = weighted_sum_10 * input_value;
      weighted_sum_11 = saved_converted_vector_3 + *(float *)(masked_bits + 4 * scaled_index_2 + 4);
      sr_sphere_1564a0_vector_352[1] = scaled_value_3;
      scaled_value_22 = weighted_sum_7 * input_value;
      sr_sphere_1564a0_vector_345[0] = weighted_sum_7 * input_value;
      scaled_value_21 = weighted_sum_8 * input_value;
      sr_sphere_1564a0_vector_345[1] = weighted_sum_8 * input_value;
      scaled_value_25 = weighted_sum_9 * input_value;
      scaled_value_24 = weighted_sum_11 * input_value;
      sr_sphere_1564a0_vector_355[1] = weighted_sum_11 * input_value;
      weighted_sum_12 = saved_converted_vector_4 + *(float *)(masked_bits + 4 * scaled_index_2 + 8);
      sr_sphere_1564a0_vector_345[2] = weighted_sum_9 * input_value;
      product_difference_25 = (float)(weighted_sum_6 * input_value) - weighted_sum_3;
      saved_weighted_sum = weighted_sum_12 * input_value;
      sr_sphere_1564a0_vector_355[2] = weighted_sum_12 * input_value;
      saved_square_root_4 = (float)(weighted_sum_4 * input_value) - weighted_sum_2;
      product_difference = (float)(weighted_sum_8 * input_value) - scaled_value_2;
      product_difference_2 = (float)(weighted_sum_9 * input_value) - weighted_sum_3;
      product_difference_3 = (float)(product_difference * product_difference_25) - (float)(product_difference_2 * component_delta);
      product_difference_4 = (float)(product_difference_2 * saved_square_root_4) - (float)((float)((float)(weighted_sum_7 * input_value) - weighted_sum_2) * product_difference_25);
      product_difference_5 = (float)((float)((float)(weighted_sum_7 * input_value) - weighted_sum_2) * component_delta) - (float)(product_difference * saved_square_root_4);
      square_root = fsqrt((float)((float)(product_difference_4 * product_difference_4) + (float)(product_difference_3 * product_difference_3)) + (float)(product_difference_5 * product_difference_5));
      if ( square_root == 0.0 )
      {
        sr_sphere_1564a0_vector_327[0] = 0.0;
        scaled_ratio = 0.0;
        sr_sphere_1564a0_vector_327[1] = 0.0;
        scaled_ratio_2 = 0.0;
        sr_sphere_1564a0_vector_327[2] = 0.0;
        scaled_ratio_3 = 0.0;
      }
      else
      {
        scaled_ratio = product_difference_3 * (float)(1.0 / square_root);
        scaled_ratio_2 = product_difference_4 * (float)(1.0 / square_root);
        scaled_ratio_3 = product_difference_5 * (float)(1.0 / square_root);
        sr_sphere_1564a0_vector_327[0] = scaled_ratio;
        sr_sphere_1564a0_vector_327[1] = scaled_ratio_2;
        sr_sphere_1564a0_vector_327[2] = scaled_ratio_3;
      }
      product_difference_6 = *a4 - weighted_sum_2;
      component_delta_2 = a4[1] - scaled_value_2;
      component_delta_3 = a4[2] - weighted_sum_3;
      sr_sphere_1564a0_vector_323[0] = product_difference_6;
      sr_sphere_1564a0_vector_323[1] = component_delta_2;
      sr_sphere_1564a0_vector_323[2] = component_delta_3;
      if ( (float)((float)((float)(component_delta_2 * scaled_ratio_2) + (float)(product_difference_6 * scaled_ratio)) + (float)(component_delta_3 * scaled_ratio_3)) > 0.0 )
      {
        (*(uint64_t *)(void *)sr_sphere_mesh_offset) = __PAIR64__(LODWORD(component_delta_2), LODWORD(product_difference_6));
        (*(float *)(void *)(sr_sphere_mesh_offset+2)) = component_delta_3;
        weighted_sum_13 = (float)((float)(component_delta_2 * scaled_ratio_2) + (float)(product_difference_6 * scaled_ratio)) + (float)(component_delta_3 * scaled_ratio_3);
        if ( weighted_sum_13 <= a5 && weighted_sum_13 >= 0.0 )
        {
          combined_products = (float)(scaled_ratio_2 * (float)-a5) + a4[1];
          *(float *)&(*(uint64_t *)(void *)sr_sphere_mesh_offset) = (float)(scaled_ratio * (float)-a5) + *a4;
          *((float *)&(*(uint64_t *)(void *)sr_sphere_mesh_offset) + 1) = combined_products;
          (*(float *)(void *)(sr_sphere_mesh_offset+2)) = (float)(scaled_ratio_3 * (float)-a5) + a4[2];
          if ( sr_collision_line_triangle(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &t, a4, (float *)&(*(uint64_t *)(void *)sr_sphere_mesh_offset), &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_352[0], &sr_sphere_1564a0_vector_345[0]) )
          {
            source_component_y = sr_sphere_1564a0_vector_323[1];
            source_component_z = sr_sphere_1564a0_vector_323[2];
            square_root_2 = fsqrt(
                    (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                          + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                  + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
            comparison_result = square_root_2 < *a3;
            a7 = square_root_2;
            if ( comparison_result )
            {
              *a1 = sr_sphere_1564a0_vector_323[0];
              a1[1] = source_component_y;
              a1[2] = source_component_z;
              *a2 = scaled_ratio;
              a2[1] = scaled_ratio_2;
              a2[2] = scaled_ratio_3;
              *a3 = square_root_2;
            }
          }
        }
        source_component_y_2 = a4[1];
        scaled_value_4 = *a4;
        component_delta_4 = a4[2] - weighted_sum_3;
        product_difference_7 = *a4 - weighted_sum_2;
        sr_sphere_1564a0_vector_358[1] = source_component_y_2 - scaled_value_2;
        sr_sphere_1564a0_vector_358[0] = product_difference_7;
        sr_sphere_1564a0_vector_358[2] = component_delta_4;
        combined_products_2 = (float)((float)(scaled_ratio_2 * (float)(source_component_y_2 - scaled_value_2)) + (float)(scaled_ratio * product_difference_7)) + (float)(scaled_ratio_3 * component_delta_4);
        if ( combined_products_2 <= a5 && combined_products_2 >= 0.0 )
        {
          sr_sphere_1564a0_vector_358[0] = (float)(scaled_ratio * (float)-a5) + scaled_value_4;
          sr_sphere_1564a0_vector_358[1] = (float)(scaled_ratio_2 * (float)-a5) + source_component_y_2;
          sr_sphere_1564a0_vector_358[2] = (float)(scaled_ratio_3 * (float)-a5) + a4[2];
          if ( sr_collision_line_triangle(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &t_2, a4, &sr_sphere_1564a0_vector_358[0], &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_345[0], &sr_sphere_1564a0_vector_355[0]) )
          {
            source_component_y_3 = sr_sphere_1564a0_vector_323[1];
            source_component_z_2 = sr_sphere_1564a0_vector_323[2];
            square_root_3 = fsqrt(
                    (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                          + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                  + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
            comparison_result = square_root_3 < *a3;
            a7 = square_root_3;
            if ( comparison_result )
            {
              *a1 = sr_sphere_1564a0_vector_323[0];
              a1[1] = source_component_y_3;
              a1[2] = source_component_z_2;
              *a2 = scaled_ratio;
              a2[1] = scaled_ratio_2;
              a2[2] = scaled_ratio_3;
              *a3 = square_root_3;
            }
          }
        }
        saved_product_difference = saved_square_root_4;
        source_component_z_3 = a4[2];
        scaled_value_5 = *a4;
        source_component_y_4 = a4[1];
        product_difference_8 = *a4 - weighted_sum_2;
        square_root_4 = fsqrt((float)((float)(saved_product_difference * saved_product_difference) + (float)(component_delta * component_delta)) + (float)(product_difference_25 * product_difference_25));
        saved_square_root_4 = source_component_z_3 - weighted_sum_3;
        if ( square_root_4 == 0.0 )
        {
          scaled_ratio_6 = 0.0;
          scaled_ratio_4 = 0.0;
          scaled_ratio_5 = 0.0;
        }
        else
        {
          scaled_ratio_4 = component_delta * (float)(1.0 / square_root_4);
          scaled_ratio_5 = (float)(1.0 / square_root_4) * product_difference_25;
          scaled_ratio_6 = (float)(1.0 / square_root_4) * saved_product_difference;
        }
        combined_products_3 = (float)((float)(scaled_ratio_4 * (float)(source_component_y_4 - scaled_value_2)) + (float)(scaled_ratio_6 * product_difference_8)) + (float)(scaled_ratio_5 * saved_square_root_4);
        if ( combined_products_3 <= 0.0
          || combined_products_3 >= square_root_4
          || (weighted_sum_14 = (float)(scaled_ratio_6 * combined_products_3) + weighted_sum_2,
              weighted_sum_15 = (float)(scaled_ratio_4 * combined_products_3) + scaled_value_2,
              weighted_sum_16 = (float)(combined_products_3 * scaled_ratio_5) + weighted_sum_3,
              component_delta_5 = scaled_value_5 - weighted_sum_14,
              component_delta_6 = source_component_y_4 - weighted_sum_15,
              component_delta_7 = source_component_z_3 - weighted_sum_16,
              square_root_5 = fsqrt((float)((float)(component_delta_6 * component_delta_6) + (float)(component_delta_5 * component_delta_5)) + (float)(component_delta_7 * component_delta_7)),
              square_root_5 >= a5) )
        {
          saved_square_root = *a3;
        }
        else
        {
          if ( square_root_5 == 0.0 )
          {
            scaled_ratio_7 = 0.0;
            scaled_ratio_8 = 0.0;
            scaled_ratio_9 = 0.0;
          }
          else
          {
            scaled_ratio_7 = component_delta_5 * (float)(1.0 / square_root_5);
            scaled_ratio_8 = (float)(1.0 / square_root_5) * component_delta_6;
            scaled_ratio_9 = (float)(1.0 / square_root_5) * component_delta_7;
          }
          saved_square_root = *a3;
          a7 = square_root_5;
          if ( saved_square_root > square_root_5 )
          {
            *a1 = weighted_sum_14;
            saved_square_root = square_root_5;
            a1[1] = weighted_sum_15;
            a1[2] = weighted_sum_16;
            *a2 = scaled_ratio_7;
            a2[1] = scaled_ratio_8;
            a2[2] = scaled_ratio_9;
            *a3 = square_root_5;
            scaled_value_5 = *a4;
            source_component_y_4 = a4[1];
            source_component_z_3 = a4[2];
          }
        }
        component_delta_8 = scaled_value_22 - weighted_sum_60;
        component_delta_9 = scaled_value_21 - scaled_ratio_52;
        component_delta_10 = scaled_value_25 - scaled_value_23;
        square_root_6 = fsqrt((float)((float)(component_delta_9 * component_delta_9) + (float)(component_delta_8 * component_delta_8)) + (float)(component_delta_10 * component_delta_10));
        saved_square_root_4 = source_component_z_3 - scaled_value_23;
        if ( square_root_6 == 0.0 )
        {
          scaled_ratio_10 = 0.0;
          scaled_ratio_11 = 0.0;
          scaled_ratio_12 = 0.0;
        }
        else
        {
          scaled_ratio_10 = (float)(1.0 / square_root_6) * component_delta_8;
          scaled_ratio_11 = (float)(1.0 / square_root_6) * component_delta_9;
          scaled_ratio_12 = (float)(1.0 / square_root_6) * component_delta_10;
        }
        combined_products_4 = (float)((float)(scaled_ratio_11 * (float)(source_component_y_4 - scaled_ratio_52)) + (float)(scaled_ratio_10 * (float)(scaled_value_5 - weighted_sum_60))) + (float)(scaled_ratio_12 * saved_square_root_4);
        if ( combined_products_4 <= 0.0
          || combined_products_4 >= square_root_6
          || (weighted_sum_17 = (float)(scaled_ratio_10 * combined_products_4) + weighted_sum_60,
              weighted_sum_18 = (float)(scaled_ratio_11 * combined_products_4) + scaled_ratio_52,
              weighted_sum_19 = (float)(scaled_ratio_12 * combined_products_4) + scaled_value_23,
              component_delta_11 = scaled_value_5 - weighted_sum_17,
              component_delta_12 = source_component_y_4 - weighted_sum_18,
              component_delta_13 = source_component_z_3 - weighted_sum_19,
              square_root_7 = fsqrt((float)((float)(component_delta_12 * component_delta_12) + (float)(component_delta_11 * component_delta_11)) + (float)(component_delta_13 * component_delta_13)),
              square_root_7 >= a5) )
        {
          saved_square_root = *a3;
        }
        else
        {
          if ( square_root_7 == 0.0 )
          {
            scaled_ratio_13 = 0.0;
            scaled_ratio_14 = 0.0;
            scaled_ratio_15 = 0.0;
          }
          else
          {
            scaled_ratio_13 = (float)(1.0 / square_root_7) * component_delta_11;
            scaled_ratio_14 = (float)(1.0 / square_root_7) * component_delta_12;
            scaled_ratio_15 = (float)(1.0 / square_root_7) * component_delta_13;
          }
          a7 = square_root_7;
          if ( saved_square_root > square_root_7 )
          {
            *a1 = weighted_sum_17;
            saved_square_root = square_root_7;
            a1[1] = weighted_sum_18;
            a1[2] = weighted_sum_19;
            *a2 = scaled_ratio_13;
            a2[1] = scaled_ratio_14;
            a2[2] = scaled_ratio_15;
            *a3 = square_root_7;
            scaled_value_5 = *a4;
            source_component_y_4 = a4[1];
            source_component_z_3 = a4[2];
          }
        }
        component_delta_14 = weighted_sum_59 - scaled_value_22;
        component_delta_15 = scaled_value_24 - scaled_value_21;
        component_delta_16 = saved_weighted_sum - scaled_value_25;
        saved_square_root_4 = scaled_value_5 - scaled_value_22;
        square_root_8 = fsqrt((float)((float)(component_delta_15 * component_delta_15) + (float)(component_delta_14 * component_delta_14)) + (float)(component_delta_16 * component_delta_16));
        if ( square_root_8 == 0.0 )
        {
          scaled_ratio_16 = 0.0;
          scaled_ratio_17 = 0.0;
          scaled_ratio_18 = 0.0;
        }
        else
        {
          scaled_ratio_16 = (float)(1.0 / square_root_8) * component_delta_14;
          scaled_ratio_17 = (float)(1.0 / square_root_8) * component_delta_15;
          scaled_ratio_18 = (float)(1.0 / square_root_8) * component_delta_16;
        }
        combined_products_5 = (float)((float)(scaled_ratio_17 * (float)(source_component_y_4 - scaled_value_21)) + (float)(scaled_ratio_16 * saved_square_root_4)) + (float)((float)(source_component_z_3 - scaled_value_25) * scaled_ratio_18);
        if ( combined_products_5 <= 0.0
          || combined_products_5 >= square_root_8
          || (weighted_sum_20 = (float)(scaled_ratio_16 * combined_products_5) + scaled_value_22,
              weighted_sum_21 = (float)(scaled_ratio_17 * combined_products_5) + scaled_value_21,
              weighted_sum_22 = (float)(combined_products_5 * scaled_ratio_18) + scaled_value_25,
              component_delta_17 = scaled_value_5 - weighted_sum_20,
              component_delta_18 = source_component_y_4 - weighted_sum_21,
              component_delta_19 = source_component_z_3 - weighted_sum_22,
              square_root_9 = fsqrt((float)((float)(component_delta_18 * component_delta_18) + (float)(component_delta_17 * component_delta_17)) + (float)(component_delta_19 * component_delta_19)),
              square_root_9 >= a5) )
        {
          saved_square_root = *a3;
        }
        else
        {
          if ( square_root_9 == 0.0 )
          {
            scaled_ratio_19 = 0.0;
            scaled_ratio_20 = 0.0;
            scaled_ratio_21 = 0.0;
          }
          else
          {
            scaled_ratio_19 = (float)(1.0 / square_root_9) * component_delta_17;
            scaled_ratio_20 = (float)(1.0 / square_root_9) * component_delta_18;
            scaled_ratio_21 = (float)(1.0 / square_root_9) * component_delta_19;
          }
          a7 = square_root_9;
          if ( saved_square_root > square_root_9 )
          {
            *a1 = weighted_sum_20;
            saved_square_root = square_root_9;
            a1[1] = weighted_sum_21;
            a1[2] = weighted_sum_22;
            *a2 = scaled_ratio_19;
            a2[1] = scaled_ratio_20;
            a2[2] = scaled_ratio_21;
            *a3 = square_root_9;
            scaled_value_5 = *a4;
            source_component_y_4 = a4[1];
            source_component_z_3 = a4[2];
          }
        }
        component_delta_20 = saved_weighted_sum_2 - weighted_sum_59;
        component_delta_21 = saved_square_root_5 - scaled_value_24;
        component_delta_22 = saved_square_root_3 - saved_weighted_sum;
        square_root_10 = fsqrt((float)((float)(component_delta_21 * component_delta_21) + (float)(component_delta_20 * component_delta_20)) + (float)(component_delta_22 * component_delta_22));
        if ( square_root_10 == 0.0 )
        {
          scaled_ratio_22 = 0.0;
          scaled_ratio_23 = 0.0;
          scaled_ratio_24 = 0.0;
        }
        else
        {
          scaled_ratio_22 = (float)(1.0 / square_root_10) * component_delta_20;
          scaled_ratio_23 = (float)(1.0 / square_root_10) * component_delta_21;
          scaled_ratio_24 = (float)(1.0 / square_root_10) * component_delta_22;
        }
        combined_products_6 = (float)((float)(scaled_ratio_23 * (float)(source_component_y_4 - scaled_value_24)) + (float)(scaled_ratio_22 * (float)(scaled_value_5 - weighted_sum_59)))
             + (float)(scaled_ratio_24 * (float)(source_component_z_3 - saved_weighted_sum));
        if ( combined_products_6 > 0.0 && combined_products_6 < square_root_10 )
        {
          weighted_sum_23 = (float)(combined_products_6 * scaled_ratio_22) + weighted_sum_59;
          weighted_sum_24 = (float)(combined_products_6 * scaled_ratio_24) + saved_weighted_sum;
          combined_products_7 = (float)((float)((float)((float)(scaled_ratio_23 * (float)(source_component_y_4 - scaled_value_24)) + (float)(scaled_ratio_22 * (float)(scaled_value_5 - weighted_sum_59)))
                               + (float)(scaled_ratio_24 * (float)(source_component_z_3 - saved_weighted_sum)))
                       * scaled_ratio_23)
               + scaled_value_24;
          component_delta_23 = scaled_value_5 - weighted_sum_23;
          component_delta_24 = source_component_z_3 - weighted_sum_24;
          component_delta_25 = source_component_y_4 - combined_products_7;
          square_root_11 = fsqrt((float)((float)(component_delta_25 * component_delta_25) + (float)(component_delta_23 * component_delta_23)) + (float)(component_delta_24 * component_delta_24));
          if ( square_root_11 < a5 )
          {
            if ( square_root_11 == 0.0 )
            {
              scaled_ratio_25 = 0.0;
              scaled_ratio_26 = 0.0;
              scaled_ratio_27 = 0.0;
            }
            else
            {
              scaled_ratio_25 = (float)(1.0 / square_root_11) * component_delta_23;
              scaled_ratio_26 = (float)(1.0 / square_root_11) * component_delta_25;
              scaled_ratio_27 = (float)(1.0 / square_root_11) * component_delta_24;
            }
            a7 = square_root_11;
            if ( saved_square_root > square_root_11 )
            {
              *a1 = weighted_sum_23;
              a1[1] = combined_products_7;
              a1[2] = weighted_sum_24;
              *a2 = scaled_ratio_25;
              a2[1] = scaled_ratio_26;
              a2[2] = scaled_ratio_27;
              *a3 = square_root_11;
            }
          }
        }
      }
      input_value = a8;
      scaled_value = saved_scaled_value;
      ++iteration_count;
      converted_vector_3 = saved_converted_vector_3;
      record_byte_offset += 16;
      converted_vector_4 = saved_converted_vector_4;
    }
    while ( iteration_count < (int)dword_140404A6C[scaled_index + 20074623] );
    LOWORD(hiword_result) = saved_hiword_result;
  }
  cached_scaled_index = scaled_index_4;
  iteration_count_2 = 0;
  if ( *(int *)((char *)&g_145098CD8 + scaled_index_4) > 0 )
  {
    iteration_count_3 = 0;
    (*(uint64_t *)(void *)sr_sphere_mesh_offset) = 0;
    rol4_result = 1;
    do
    {
      if ( ((unsigned __int16)rol4_result & (unsigned __int16)hiword_result & 0x3FF) == 0 )
      {
        scaled_index_3 = 6 * iteration_count_3;
        masked_bits_3 = *(_QWORD *)((char *)&g_145098CE0 + cached_scaled_index);
        saved_converted_vector = converted_vector_4;
        saved_converted_vector_2 = converted_vector_4;
        weighted_sum_25 = saved_converted_vector_4 + *(float *)(masked_bits_3 + 48 * iteration_count_3 + 32);
        weighted_sum_26 = scaled_value + *(float *)(masked_bits_3 + 48 * iteration_count_3 + 24);
        weighted_sum_27 = converted_vector_3 + *(float *)(masked_bits_3 + 48 * iteration_count_3 + 28);
        weighted_sum_28 = saved_converted_vector_2 + *(float *)(masked_bits_3 + 48 * iteration_count_3 + 20);
        weighted_sum_29 = scaled_value + *(float *)(masked_bits_3 + 48 * iteration_count_3 + 12);
        weighted_sum_30 = saved_converted_vector + *(float *)(masked_bits_3 + 48 * iteration_count_3 + 8);
        weighted_sum_31 = converted_vector_3 + *(float *)(masked_bits_3 + 48 * iteration_count_3 + 4);
        weighted_sum_32 = (float)(converted_vector_3 + *(float *)(masked_bits_3 + 48 * iteration_count_3 + 16)) * input_value;
        weighted_sum_33 = scaled_value + *(float *)(masked_bits_3 + 48 * iteration_count_3);
        weighted_sum_59 = (float)(scaled_value + *(float *)(masked_bits_3 + 48 * iteration_count_3 + 36)) * input_value;
        sr_sphere_1564a0_vector_355[0] = weighted_sum_59;
        scaled_value_6 = weighted_sum_27 * input_value;
        weighted_sum_60 = (float)(converted_vector_3 + *(float *)(masked_bits_3 + 48 * iteration_count_3 + 40)) * input_value;
        sr_sphere_1564a0_vector_355[1] = weighted_sum_60;
        scaled_value_7 = weighted_sum_31 * input_value;
        scaled_value_8 = weighted_sum_30 * input_value;
        weighted_sum_34 = (float)(saved_converted_vector_4 + *(float *)(masked_bits_3 + 48 * iteration_count_3 + 44)) * input_value;
        scaled_value_9 = weighted_sum_33 * input_value;
        scaled_value_10 = weighted_sum_29 * input_value;
        saved_weighted_sum = weighted_sum_32;
        sr_sphere_1564a0_vector_352[1] = weighted_sum_32;
        scaled_value_23 = weighted_sum_25 * input_value;
        sr_sphere_1564a0_vector_345[2] = weighted_sum_25 * input_value;
        scaled_value_24 = weighted_sum_26 * input_value;
        sr_sphere_1564a0_vector_345[0] = weighted_sum_26 * input_value;
        product_difference_25 = weighted_sum_34;
        sr_sphere_1564a0_vector_355[2] = weighted_sum_34;
        scaled_value_21 = weighted_sum_28 * input_value;
        sr_sphere_1564a0_vector_352[2] = weighted_sum_28 * input_value;
        product_difference_9 = (float)(weighted_sum_28 * input_value) - scaled_value_8;
        sr_sphere_1564a0_vector_348[0] = scaled_value_9;
        sr_sphere_1564a0_vector_348[1] = scaled_value_7;
        sr_sphere_1564a0_vector_348[2] = scaled_value_8;
        product_difference_10 = (float)((float)(scaled_value_6 - scaled_value_7) * product_difference_9)
             - (float)((float)((float)(weighted_sum_25 * input_value) - scaled_value_8) * (float)(weighted_sum_32 - scaled_value_7));
        scaled_ratio_52 = scaled_value_10;
        sr_sphere_1564a0_vector_352[0] = scaled_value_10;
        scaled_value_22 = scaled_value_6;
        sr_sphere_1564a0_vector_345[1] = scaled_value_6;
        product_difference_11 = (float)((float)((float)(weighted_sum_25 * input_value) - scaled_value_8) * (float)(scaled_value_10 - scaled_value_9))
             - (float)((float)((float)(weighted_sum_26 * input_value) - scaled_value_9) * product_difference_9);
        product_difference_12 = (float)((float)((float)(weighted_sum_26 * input_value) - scaled_value_9) * (float)(weighted_sum_32 - scaled_value_7))
             - (float)((float)(scaled_value_6 - scaled_value_7) * (float)(scaled_value_10 - scaled_value_9));
        square_root_12 = fsqrt((float)((float)(product_difference_11 * product_difference_11) + (float)(product_difference_10 * product_difference_10)) + (float)(product_difference_12 * product_difference_12));
        if ( square_root_12 == 0.0 )
        {
          sr_sphere_1564a0_vector_327[0] = 0.0;
          scaled_ratio_28 = 0.0;
          sr_sphere_1564a0_vector_327[1] = 0.0;
          scaled_ratio_29 = 0.0;
          sr_sphere_1564a0_vector_327[2] = 0.0;
          scaled_ratio_30 = 0.0;
        }
        else
        {
          scaled_ratio_28 = product_difference_10 * (float)(1.0 / square_root_12);
          scaled_ratio_29 = product_difference_11 * (float)(1.0 / square_root_12);
          scaled_ratio_30 = product_difference_12 * (float)(1.0 / square_root_12);
          sr_sphere_1564a0_vector_327[0] = scaled_ratio_28;
          sr_sphere_1564a0_vector_327[1] = scaled_ratio_29;
          sr_sphere_1564a0_vector_327[2] = scaled_ratio_30;
        }
        product_difference_13 = *a4 - scaled_value_9;
        component_delta_26 = a4[1] - scaled_value_7;
        component_delta_27 = a4[2] - scaled_value_8;
        sr_sphere_1564a0_vector_323[0] = product_difference_13;
        sr_sphere_1564a0_vector_323[1] = component_delta_26;
        sr_sphere_1564a0_vector_323[2] = component_delta_27;
        if ( (float)((float)((float)(component_delta_26 * scaled_ratio_29) + (float)(product_difference_13 * scaled_ratio_28)) + (float)(component_delta_27 * scaled_ratio_30)) > 0.0 )
        {
          sr_sphere_1564a0_vector_358[1] = component_delta_26;
          sr_sphere_1564a0_vector_358[0] = product_difference_13;
          sr_sphere_1564a0_vector_358[2] = component_delta_27;
          weighted_sum_35 = (float)((float)(component_delta_26 * scaled_ratio_29) + (float)(product_difference_13 * scaled_ratio_28)) + (float)(component_delta_27 * scaled_ratio_30);
          if ( weighted_sum_35 <= input_value_3 && weighted_sum_35 >= 0.0 )
          {
            combined_products_8 = (float)((float)-input_value_3 * scaled_ratio_29) + a4[1];
            combined_products_9 = (float)((float)-input_value_3 * scaled_ratio_30) + a4[2];
            sr_sphere_1564a0_vector_358[0] = (float)((float)-input_value_3 * scaled_ratio_28) + *a4;
            sr_sphere_1564a0_vector_358[1] = combined_products_8;
            sr_sphere_1564a0_vector_358[2] = combined_products_9;
            if ( sr_collision_line_triangle(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &t_2, a4, &sr_sphere_1564a0_vector_358[0], &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_352[0], &sr_sphere_1564a0_vector_345[0]) )
            {
              source_component_y_5 = sr_sphere_1564a0_vector_323[1];
              source_component_z_4 = sr_sphere_1564a0_vector_323[2];
              square_root_13 = fsqrt(
                       (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                             + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                     + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
              comparison_result = square_root_13 < *a3;
              a7 = square_root_13;
              if ( comparison_result )
              {
                *a1 = sr_sphere_1564a0_vector_323[0];
                a1[1] = source_component_y_5;
                a1[2] = source_component_z_4;
                *a2 = scaled_ratio_28;
                a2[1] = scaled_ratio_29;
                a2[2] = scaled_ratio_30;
                *a3 = square_root_13;
              }
            }
          }
          scaled_value_11 = *a4;
          source_component_y_6 = a4[1];
          source_component_z_5 = a4[2];
          sr_sphere_1564a0_vector_363[0] = *a4 - scaled_value_9;
          sr_sphere_1564a0_vector_363[1] = source_component_y_6 - scaled_value_7;
          sr_sphere_1564a0_vector_363[2] = source_component_z_5 - scaled_value_8;
          combined_products_10 = (float)((float)((float)(source_component_y_6 - scaled_value_7) * scaled_ratio_29) + (float)(sr_sphere_1564a0_vector_363[0] * scaled_ratio_28))
               + (float)((float)(source_component_z_5 - scaled_value_8) * scaled_ratio_30);
          if ( combined_products_10 <= input_value_3 && combined_products_10 >= 0.0 )
          {
            sr_sphere_1564a0_vector_363[0] = (float)((float)-input_value_3 * scaled_ratio_28) + scaled_value_11;
            sr_sphere_1564a0_vector_363[1] = (float)((float)-input_value_3 * scaled_ratio_29) + source_component_y_6;
            sr_sphere_1564a0_vector_363[2] = (float)((float)-input_value_3 * scaled_ratio_30) + source_component_z_5;
            if ( sr_collision_line_triangle(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &t, a4, &sr_sphere_1564a0_vector_363[0], &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_345[0], &sr_sphere_1564a0_vector_355[0]) )
            {
              source_component_y_7 = sr_sphere_1564a0_vector_323[1];
              source_component_z_6 = sr_sphere_1564a0_vector_323[2];
              square_root_14 = fsqrt(
                       (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                             + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                     + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
              comparison_result = square_root_14 < *a3;
              a7 = square_root_14;
              if ( comparison_result )
              {
                *a1 = sr_sphere_1564a0_vector_323[0];
                a1[1] = source_component_y_7;
                a1[2] = source_component_z_6;
                *a2 = scaled_ratio_28;
                a2[1] = scaled_ratio_29;
                a2[2] = scaled_ratio_30;
                *a3 = square_root_14;
              }
            }
          }
          source_component_y_8 = a4[1];
          source_component_z_7 = a4[2];
          component_delta_28 = scaled_value_10 - scaled_value_9;
          component_delta_42 = saved_weighted_sum - scaled_value_7;
          saved_square_root_3 = scaled_value_21 - scaled_value_8;
          scaled_value_12 = *a4;
          product_difference_14 = *a4 - scaled_value_9;
          square_root_15 = fsqrt(
                   (float)((float)(component_delta_42 * component_delta_42) + (float)(component_delta_28 * component_delta_28))
                 + (float)((float)(scaled_value_21 - scaled_value_8) * (float)(scaled_value_21 - scaled_value_8)));
          saved_square_root_5 = square_root_15;
          if ( square_root_15 == 0.0 )
          {
            scaled_value_15 = 0.0;
            scaled_value_13 = 0.0;
            scaled_value_14 = 0.0;
          }
          else
          {
            scaled_ratio_31 = 1.0 / square_root_15;
            scaled_value_13 = scaled_ratio_31 * component_delta_42;
            scaled_value_14 = scaled_ratio_31 * saved_square_root_3;
            scaled_value_15 = scaled_ratio_31 * component_delta_28;
          }
          combined_products_11 = (float)((float)(product_difference_14 * scaled_value_15) + (float)((float)(source_component_y_8 - scaled_value_7) * scaled_value_13))
               + (float)((float)(source_component_z_7 - scaled_value_8) * scaled_value_14);
          if ( combined_products_11 <= 0.0
            || combined_products_11 >= saved_square_root_5
            || (weighted_sum_36 = (float)(scaled_value_13 * combined_products_11) + scaled_value_7,
                weighted_sum_37 = (float)(scaled_value_15 * combined_products_11) + scaled_value_9,
                weighted_sum_38 = (float)(scaled_value_14 * combined_products_11) + scaled_value_8,
                component_delta_29 = scaled_value_12 - weighted_sum_37,
                saved_square_root_3 = source_component_y_8 - weighted_sum_36,
                component_delta_43 = source_component_z_7 - weighted_sum_38,
                square_root_16 = fsqrt(
                         (float)((float)((float)(source_component_y_8 - weighted_sum_36) * (float)(source_component_y_8 - weighted_sum_36)) + (float)(component_delta_29 * component_delta_29))
                       + (float)(component_delta_43 * component_delta_43)),
                square_root_16 >= input_value_3) )
          {
            saved_square_root_2 = *a3;
          }
          else
          {
            if ( square_root_16 == 0.0 )
            {
              scaled_ratio_53 = 0.0;
              input_value_4 = 0.0;
              scaled_ratio_32 = 0.0;
            }
            else
            {
              scaled_ratio_32 = saved_square_root_3 * (float)(1.0 / square_root_16);
              a7 = component_delta_29 * (float)(1.0 / square_root_16);
              input_value_4 = a7;
              scaled_ratio_53 = component_delta_43 * (float)(1.0 / square_root_16);
            }
            saved_square_root_2 = *a3;
            a7 = square_root_16;
            if ( saved_square_root_2 > square_root_16 )
            {
              *a1 = weighted_sum_37;
              saved_square_root_2 = square_root_16;
              a1[1] = weighted_sum_36;
              a1[2] = weighted_sum_38;
              *a2 = input_value_4;
              a2[2] = scaled_ratio_53;
              a2[1] = scaled_ratio_32;
              *a3 = square_root_16;
              scaled_value_12 = *a4;
              source_component_y_8 = a4[1];
              source_component_z_7 = a4[2];
            }
          }
          component_delta_30 = scaled_value_24 - scaled_ratio_52;
          component_delta_44 = scaled_value_22 - saved_weighted_sum;
          saved_square_root_3 = scaled_value_23 - scaled_value_21;
          square_root_17 = fsqrt(
                   (float)((float)(component_delta_44 * component_delta_44) + (float)(component_delta_30 * component_delta_30))
                 + (float)((float)(scaled_value_23 - scaled_value_21) * (float)(scaled_value_23 - scaled_value_21)));
          saved_square_root_5 = source_component_y_8 - saved_weighted_sum;
          saved_square_root_4 = square_root_17;
          saved_weighted_sum_2 = source_component_z_7 - scaled_value_21;
          if ( square_root_17 == 0.0 )
          {
            scaled_ratio_33 = 0.0;
            scaled_ratio_34 = 0.0;
            scaled_ratio_35 = 0.0;
          }
          else
          {
            scaled_ratio_33 = (float)(1.0 / square_root_17) * component_delta_30;
            scaled_ratio_34 = (float)(1.0 / square_root_17) * component_delta_44;
            scaled_ratio_35 = (float)(1.0 / square_root_17) * saved_square_root_3;
          }
          combined_products_12 = (float)((float)(scaled_ratio_33 * (float)(scaled_value_12 - scaled_ratio_52)) + (float)(scaled_ratio_34 * saved_square_root_5)) + (float)(scaled_ratio_35 * saved_weighted_sum_2);
          if ( combined_products_12 <= 0.0
            || combined_products_12 >= saved_square_root_4
            || (weighted_sum_39 = (float)(scaled_ratio_34 * combined_products_12) + saved_weighted_sum,
                weighted_sum_40 = (float)(scaled_ratio_35 * combined_products_12) + scaled_value_21,
                saved_square_root_5 = (float)(combined_products_12 * scaled_ratio_33) + scaled_ratio_52,
                component_delta_31 = scaled_value_12 - saved_square_root_5,
                saved_square_root_3 = source_component_y_8 - weighted_sum_39,
                component_delta_45 = source_component_z_7 - weighted_sum_40,
                square_root_18 = fsqrt(
                         (float)((float)((float)(source_component_y_8 - weighted_sum_39) * (float)(source_component_y_8 - weighted_sum_39)) + (float)(component_delta_31 * component_delta_31))
                       + (float)(component_delta_45 * component_delta_45)),
                square_root_18 >= input_value_3) )
          {
            saved_square_root_2 = *a3;
          }
          else
          {
            if ( square_root_18 == 0.0 )
            {
              scaled_ratio_36 = 0.0;
              scaled_ratio_37 = 0.0;
              scaled_ratio_38 = 0.0;
            }
            else
            {
              scaled_ratio_36 = (float)(1.0 / square_root_18) * component_delta_31;
              scaled_ratio_37 = (float)(1.0 / square_root_18) * saved_square_root_3;
              scaled_ratio_38 = (float)(1.0 / square_root_18) * component_delta_45;
            }
            a7 = square_root_18;
            if ( saved_square_root_2 > square_root_18 )
            {
              saved_square_root_2 = square_root_18;
              *a1 = saved_square_root_5;
              a1[1] = weighted_sum_39;
              a1[2] = weighted_sum_40;
              *a2 = scaled_ratio_36;
              a2[1] = scaled_ratio_37;
              a2[2] = scaled_ratio_38;
              *a3 = square_root_18;
              scaled_value_12 = *a4;
              source_component_y_8 = a4[1];
              source_component_z_7 = a4[2];
            }
          }
          component_delta_32 = weighted_sum_59 - scaled_value_24;
          component_delta_46 = weighted_sum_60 - scaled_value_22;
          saved_square_root_3 = product_difference_25 - scaled_value_23;
          square_root_19 = fsqrt(
                   (float)((float)(component_delta_46 * component_delta_46) + (float)(component_delta_32 * component_delta_32))
                 + (float)((float)(product_difference_25 - scaled_value_23) * (float)(product_difference_25 - scaled_value_23)));
          saved_square_root_5 = source_component_y_8 - scaled_value_22;
          saved_square_root_4 = square_root_19;
          saved_weighted_sum_2 = source_component_z_7 - scaled_value_23;
          if ( square_root_19 == 0.0 )
          {
            scaled_ratio_39 = 0.0;
            scaled_ratio_40 = 0.0;
            scaled_ratio_41 = 0.0;
          }
          else
          {
            scaled_ratio_39 = (float)(1.0 / square_root_19) * component_delta_32;
            scaled_ratio_40 = (float)(1.0 / square_root_19) * component_delta_46;
            scaled_ratio_41 = (float)(1.0 / square_root_19) * saved_square_root_3;
          }
          combined_products_13 = (float)((float)(scaled_ratio_40 * saved_square_root_5) + (float)(scaled_ratio_39 * (float)(scaled_value_12 - scaled_value_24))) + (float)(scaled_ratio_41 * saved_weighted_sum_2);
          if ( combined_products_13 <= 0.0
            || combined_products_13 >= saved_square_root_4
            || (weighted_sum_41 = (float)(scaled_ratio_41 * combined_products_13) + scaled_value_23,
                weighted_sum_42 = (float)(scaled_ratio_40 * combined_products_13) + scaled_value_22,
                weighted_sum_43 = (float)(scaled_ratio_39 * combined_products_13) + scaled_value_24,
                saved_square_root_5 = source_component_y_8 - weighted_sum_42,
                saved_square_root_3 = scaled_value_12 - weighted_sum_43,
                square_root_20 = fsqrt(
                         (float)((float)((float)(source_component_y_8 - weighted_sum_42) * (float)(source_component_y_8 - weighted_sum_42))
                               + (float)((float)(scaled_value_12 - weighted_sum_43) * (float)(scaled_value_12 - weighted_sum_43)))
                       + (float)((float)(source_component_z_7 - weighted_sum_41) * (float)(source_component_z_7 - weighted_sum_41))),
                square_root_20 >= input_value_3) )
          {
            saved_square_root_2 = *a3;
          }
          else
          {
            if ( square_root_20 == 0.0 )
            {
              scaled_ratio_52 = 0.0;
              scaled_ratio_42 = 0.0;
              product_difference_15 = 0.0;
            }
            else
            {
              scaled_ratio_42 = (float)(1.0 / square_root_20) * saved_square_root_3;
              product_difference_15 = (float)(1.0 / square_root_20) * (float)(source_component_z_7 - weighted_sum_41);
              scaled_ratio_52 = (float)(1.0 / square_root_20) * saved_square_root_5;
              input_value_3 = a5;
            }
            a7 = square_root_20;
            if ( saved_square_root_2 > square_root_20 )
            {
              *a1 = weighted_sum_43;
              saved_square_root_2 = square_root_20;
              a1[1] = weighted_sum_42;
              a1[2] = weighted_sum_41;
              *a2 = scaled_ratio_42;
              a2[1] = scaled_ratio_52;
              a2[2] = product_difference_15;
              *a3 = square_root_20;
              scaled_value_12 = *a4;
              source_component_y_8 = a4[1];
              source_component_z_7 = a4[2];
            }
          }
          component_delta_33 = scaled_value_9 - weighted_sum_59;
          component_delta_34 = scaled_value_7 - weighted_sum_60;
          component_delta_35 = scaled_value_8 - product_difference_25;
          square_root_21 = fsqrt((float)((float)(component_delta_34 * component_delta_34) + (float)(component_delta_33 * component_delta_33)) + (float)(component_delta_35 * component_delta_35));
          saved_square_root_3 = square_root_21;
          if ( square_root_21 == 0.0 )
          {
            scaled_ratio_43 = 0.0;
            scaled_ratio_44 = 0.0;
            scaled_ratio_45 = 0.0;
          }
          else
          {
            scaled_ratio_43 = (float)(1.0 / square_root_21) * component_delta_33;
            scaled_ratio_44 = (float)(1.0 / square_root_21) * component_delta_34;
            scaled_ratio_45 = (float)(1.0 / square_root_21) * component_delta_35;
          }
          combined_products_14 = (float)((float)((float)(source_component_y_8 - weighted_sum_60) * scaled_ratio_44) + (float)(scaled_ratio_43 * (float)(scaled_value_12 - weighted_sum_59)))
               + (float)(scaled_ratio_45 * (float)(source_component_z_7 - product_difference_25));
          if ( combined_products_14 <= 0.0
            || combined_products_14 >= saved_square_root_3
            || (weighted_sum_44 = (float)(scaled_ratio_43 * combined_products_14) + weighted_sum_59,
                weighted_sum_45 = (float)(scaled_ratio_45 * combined_products_14) + product_difference_25,
                weighted_sum_46 = (float)(combined_products_14 * scaled_ratio_44) + weighted_sum_60,
                component_delta_36 = scaled_value_12 - weighted_sum_44,
                component_delta_37 = source_component_z_7 - weighted_sum_45,
                component_delta_38 = source_component_y_8 - weighted_sum_46,
                square_root_22 = fsqrt((float)((float)(component_delta_38 * component_delta_38) + (float)(component_delta_36 * component_delta_36)) + (float)(component_delta_37 * component_delta_37)),
                square_root_22 >= input_value_3) )
          {
            iteration_count_3 = (*(uint64_t *)(void *)sr_sphere_mesh_offset);
          }
          else
          {
            if ( square_root_22 == 0.0 )
            {
              scaled_ratio_46 = 0.0;
              scaled_ratio_47 = 0.0;
              scaled_ratio_48 = 0.0;
            }
            else
            {
              scaled_ratio_46 = component_delta_36 * (float)(1.0 / square_root_22);
              scaled_ratio_47 = (float)(1.0 / square_root_22) * component_delta_38;
              scaled_ratio_48 = (float)(1.0 / square_root_22) * component_delta_37;
            }
            iteration_count_3 = (*(uint64_t *)(void *)sr_sphere_mesh_offset);
            a7 = square_root_22;
            if ( saved_square_root_2 > square_root_22 )
            {
              *a1 = weighted_sum_44;
              a1[1] = weighted_sum_46;
              a1[2] = weighted_sum_45;
              *a2 = scaled_ratio_46;
              a2[1] = scaled_ratio_47;
              a2[2] = scaled_ratio_48;
              *a3 = square_root_22;
            }
          }
        }
        masked_bits_4 = *(_QWORD *)((char *)&g_145098CE0 + scaled_index_4);
        weighted_sum_47 = saved_converted_vector_4 + *(float *)(masked_bits_4 + 8 * scaled_index_3 + 20);
        weighted_sum_48 = saved_scaled_value + *(float *)(masked_bits_4 + 8 * scaled_index_3 + 12);
        weighted_sum_49 = saved_converted_vector_4 + *(float *)(masked_bits_4 + 8 * scaled_index_3 + 32);
        weighted_sum_50 = saved_converted_vector_3 + *(float *)(masked_bits_4 + 8 * scaled_index_3 + 4);
        weighted_sum_51 = saved_converted_vector_3 + *(float *)(masked_bits_4 + 8 * scaled_index_3 + 28);
        weighted_sum_52 = saved_scaled_value + *(float *)(masked_bits_4 + 8 * scaled_index_3 + 24);
        weighted_sum_53 = saved_converted_vector_3 + *(float *)(masked_bits_4 + 8 * scaled_index_3 + 40);
        weighted_sum_54 = saved_converted_vector_4 + *(float *)(masked_bits_4 + 8 * scaled_index_3 + 44);
        weighted_sum_55 = saved_scaled_value + *(float *)(masked_bits_4 + 8 * scaled_index_3 + 36);
        weighted_sum_56 = (float)(saved_converted_vector_3 + *(float *)(masked_bits_4 + 8 * scaled_index_3 + 16)) * a8;
        sr_sphere_1564a0_vector_355[0] = (float)(saved_scaled_value + *(float *)(masked_bits_4 + 8 * scaled_index_3)) * a8;
        weighted_sum_57 = (float)(saved_converted_vector_4 + *(float *)(masked_bits_4 + 8 * scaled_index_3 + 8)) * a8;
        scaled_value_16 = weighted_sum_53 * a8;
        scaled_value_17 = weighted_sum_54 * a8;
        sr_sphere_1564a0_vector_345[1] = weighted_sum_56;
        component_delta_39 = weighted_sum_56 - scaled_value_16;
        scaled_value_18 = weighted_sum_55 * a8;
        sr_sphere_1564a0_vector_355[2] = weighted_sum_57;
        sr_sphere_1564a0_vector_345[2] = weighted_sum_47 * a8;
        product_difference_16 = (float)(weighted_sum_47 * a8) - scaled_value_17;
        sr_sphere_1564a0_vector_352[2] = weighted_sum_49 * a8;
        product_difference_17 = (float)(weighted_sum_49 * a8) - scaled_value_17;
        sr_sphere_1564a0_vector_345[0] = weighted_sum_48 * a8;
        product_difference_18 = (float)(weighted_sum_48 * a8) - scaled_value_18;
        sr_sphere_1564a0_vector_355[1] = weighted_sum_50 * a8;
        sr_sphere_1564a0_vector_352[1] = weighted_sum_51 * a8;
        product_difference_19 = (float)(weighted_sum_51 * a8) - scaled_value_16;
        sr_sphere_1564a0_vector_352[0] = weighted_sum_52 * a8;
        product_difference_20 = (float)(weighted_sum_52 * a8) - scaled_value_18;
        sr_sphere_1564a0_vector_348[0] = scaled_value_18;
        product_difference_21 = (float)(component_delta_39 * product_difference_17) - (float)(product_difference_16 * product_difference_19);
        sr_sphere_1564a0_vector_348[1] = scaled_value_16;
        product_difference_22 = (float)(product_difference_16 * product_difference_20) - (float)(product_difference_18 * product_difference_17);
        sr_sphere_1564a0_vector_348[2] = scaled_value_17;
        product_difference_23 = (float)(product_difference_18 * product_difference_19) - (float)(component_delta_39 * product_difference_20);
        square_root_23 = fsqrt((float)((float)(product_difference_22 * product_difference_22) + (float)(product_difference_21 * product_difference_21)) + (float)(product_difference_23 * product_difference_23));
        if ( square_root_23 == 0.0 )
        {
          sr_sphere_1564a0_vector_327[0] = 0.0;
          scaled_ratio_49 = 0.0;
          sr_sphere_1564a0_vector_327[1] = 0.0;
          scaled_ratio_50 = 0.0;
          sr_sphere_1564a0_vector_327[2] = 0.0;
          scaled_ratio_51 = 0.0;
        }
        else
        {
          scaled_ratio_49 = product_difference_21 * (float)(1.0 / square_root_23);
          scaled_ratio_50 = product_difference_22 * (float)(1.0 / square_root_23);
          scaled_ratio_51 = product_difference_23 * (float)(1.0 / square_root_23);
          sr_sphere_1564a0_vector_327[0] = scaled_ratio_49;
          sr_sphere_1564a0_vector_327[1] = scaled_ratio_50;
          sr_sphere_1564a0_vector_327[2] = scaled_ratio_51;
        }
        component_delta_40 = a4[1] - scaled_value_16;
        scaled_value_19 = *a4;
        component_delta_41 = a4[2] - scaled_value_17;
        product_difference_24 = *a4 - scaled_value_18;
        sr_sphere_1564a0_vector_323[1] = component_delta_40;
        sr_sphere_1564a0_vector_323[0] = product_difference_24;
        sr_sphere_1564a0_vector_323[2] = component_delta_41;
        if ( (float)((float)((float)(component_delta_40 * scaled_ratio_50) + (float)(product_difference_24 * scaled_ratio_49)) + (float)(component_delta_41 * scaled_ratio_51)) > 0.0 )
        {
          sr_sphere_1564a0_vector_366[1] = component_delta_40;
          sr_sphere_1564a0_vector_366[0] = product_difference_24;
          sr_sphere_1564a0_vector_366[2] = component_delta_41;
          weighted_sum_58 = (float)((float)(component_delta_40 * scaled_ratio_50) + (float)(product_difference_24 * scaled_ratio_49)) + (float)(component_delta_41 * scaled_ratio_51);
          if ( weighted_sum_58 <= input_value_3 && weighted_sum_58 >= 0.0 )
          {
            combined_products_15 = (float)((float)-input_value_3 * scaled_ratio_50) + a4[1];
            combined_products_16 = (float)((float)-input_value_3 * scaled_ratio_51) + a4[2];
            sr_sphere_1564a0_vector_366[0] = (float)((float)-input_value_3 * scaled_ratio_49) + scaled_value_19;
            sr_sphere_1564a0_vector_366[1] = combined_products_15;
            sr_sphere_1564a0_vector_366[2] = combined_products_16;
            if ( sr_collision_line_triangle(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &t_3, a4, &sr_sphere_1564a0_vector_366[0], &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_352[0], &sr_sphere_1564a0_vector_345[0]) )
            {
              source_component_y_9 = sr_sphere_1564a0_vector_323[1];
              source_component_z_8 = sr_sphere_1564a0_vector_323[2];
              square_root_24 = fsqrt(
                       (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                             + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                     + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
              comparison_result = square_root_24 < *a3;
              a7 = square_root_24;
              if ( comparison_result )
              {
                *a1 = sr_sphere_1564a0_vector_323[0];
                a1[1] = source_component_y_9;
                a1[2] = source_component_z_8;
                *a2 = scaled_ratio_49;
                a2[1] = scaled_ratio_50;
                a2[2] = scaled_ratio_51;
                *a3 = square_root_24;
              }
            }
          }
          scaled_value_20 = *a4;
          source_component_y_10 = a4[1];
          source_component_z_9 = a4[2];
          sr_sphere_1564a0_vector_369[0] = *a4 - scaled_value_18;
          sr_sphere_1564a0_vector_369[1] = source_component_y_10 - scaled_value_16;
          sr_sphere_1564a0_vector_369[2] = source_component_z_9 - scaled_value_17;
          combined_products_17 = (float)((float)((float)(source_component_y_10 - scaled_value_16) * scaled_ratio_50) + (float)(sr_sphere_1564a0_vector_369[0] * scaled_ratio_49))
               + (float)((float)(source_component_z_9 - scaled_value_17) * scaled_ratio_51);
          if ( combined_products_17 <= input_value_3 && combined_products_17 >= 0.0 )
          {
            sr_sphere_1564a0_vector_369[0] = (float)((float)-input_value_3 * scaled_ratio_49) + scaled_value_20;
            sr_sphere_1564a0_vector_369[1] = (float)((float)-input_value_3 * scaled_ratio_50) + source_component_y_10;
            sr_sphere_1564a0_vector_369[2] = (float)((float)-input_value_3 * scaled_ratio_51) + source_component_z_9;
            if ( sr_collision_line_triangle(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], t_4, a4, &sr_sphere_1564a0_vector_369[0], &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_345[0], &sr_sphere_1564a0_vector_355[0]) )
            {
              source_component_y_11 = sr_sphere_1564a0_vector_323[1];
              source_component_z_10 = sr_sphere_1564a0_vector_323[2];
              square_root_25 = fsqrt(
                       (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                             + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                     + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
              comparison_result = square_root_25 < *a3;
              a7 = square_root_25;
              if ( comparison_result )
              {
                *a1 = sr_sphere_1564a0_vector_323[0];
                a1[1] = source_component_y_11;
                a1[2] = source_component_z_10;
                *a2 = scaled_ratio_49;
                a2[1] = scaled_ratio_50;
                a2[2] = scaled_ratio_51;
                *a3 = square_root_25;
              }
            }
          }
          if ( (unsigned int)sub_140154200(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &a7, a4, input_value_3, &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_352[0]) )
          {
            input_value_5 = a7;
            if ( a7 < *a3 )
            {
              source_component_y_12 = sr_sphere_1564a0_vector_323[1];
              *a1 = sr_sphere_1564a0_vector_323[0];
              source_component_z_11 = sr_sphere_1564a0_vector_323[2];
              a1[1] = source_component_y_12;
              source_component_x = sr_sphere_1564a0_vector_327[0];
              a1[2] = source_component_z_11;
              source_component_y_13 = sr_sphere_1564a0_vector_327[1];
              *a2 = source_component_x;
              a2[2] = sr_sphere_1564a0_vector_327[2];
              a2[1] = source_component_y_13;
              *a3 = input_value_5;
            }
          }
          if ( (unsigned int)sub_140154200(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &a7, a4, input_value_3, &sr_sphere_1564a0_vector_352[0], &sr_sphere_1564a0_vector_345[0]) )
          {
            input_value_6 = a7;
            if ( a7 < *a3 )
            {
              source_component_y_14 = sr_sphere_1564a0_vector_323[1];
              *a1 = sr_sphere_1564a0_vector_323[0];
              source_component_z_12 = sr_sphere_1564a0_vector_323[2];
              a1[1] = source_component_y_14;
              source_component_x_2 = sr_sphere_1564a0_vector_327[0];
              a1[2] = source_component_z_12;
              source_component_y_15 = sr_sphere_1564a0_vector_327[1];
              *a2 = source_component_x_2;
              a2[2] = sr_sphere_1564a0_vector_327[2];
              a2[1] = source_component_y_15;
              *a3 = input_value_6;
            }
          }
          if ( (unsigned int)sub_140154200(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &a7, a4, input_value_3, &sr_sphere_1564a0_vector_345[0], &sr_sphere_1564a0_vector_355[0]) )
          {
            input_value_7 = a7;
            if ( a7 < *a3 )
            {
              source_component_y_16 = sr_sphere_1564a0_vector_323[1];
              *a1 = sr_sphere_1564a0_vector_323[0];
              source_component_z_13 = sr_sphere_1564a0_vector_323[2];
              a1[1] = source_component_y_16;
              source_component_x_3 = sr_sphere_1564a0_vector_327[0];
              a1[2] = source_component_z_13;
              source_component_y_17 = sr_sphere_1564a0_vector_327[1];
              *a2 = source_component_x_3;
              a2[2] = sr_sphere_1564a0_vector_327[2];
              a2[1] = source_component_y_17;
              *a3 = input_value_7;
            }
          }
          call_result = sub_140154200(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &a7, a4, input_value_3, &sr_sphere_1564a0_vector_355[0], &sr_sphere_1564a0_vector_348[0]);
          iteration_count_3 = (*(uint64_t *)(void *)sr_sphere_mesh_offset);
          if ( call_result )
          {
            input_value_8 = a7;
            if ( a7 < *a3 )
            {
              source_component_y_18 = sr_sphere_1564a0_vector_323[1];
              *a1 = sr_sphere_1564a0_vector_323[0];
              source_component_z_14 = sr_sphere_1564a0_vector_323[2];
              a1[1] = source_component_y_18;
              source_component_x_4 = sr_sphere_1564a0_vector_327[0];
              a1[2] = source_component_z_14;
              source_component_y_19 = sr_sphere_1564a0_vector_327[1];
              *a2 = source_component_x_4;
              a2[2] = sr_sphere_1564a0_vector_327[2];
              a2[1] = source_component_y_19;
              *a3 = input_value_8;
            }
          }
        }
      }
      ++iteration_count_3;
      input_value = a8;
      ++iteration_count_2;
      scaled_value = saved_scaled_value;
      cached_scaled_index = scaled_index_4;
      converted_vector_3 = saved_converted_vector_3;
      converted_vector_4 = saved_converted_vector_4;
      LOWORD(hiword_result) = saved_hiword_result;
      rol4_result = __ROL4__(rol4_result, 1);
      (*(uint64_t *)(void *)sr_sphere_mesh_offset) = iteration_count_3;
    }
    while ( iteration_count_2 < *(int *)((char *)&g_145098CD8 + scaled_index_4) );
  }
  return *a3 < 65536.0;
}
#undef saved_square_root_3
#undef saved_square_root_4
#undef saved_square_root_5
#undef saved_weighted_sum
#undef scaled_value_21
#undef scaled_value_22
#undef scaled_value_23
#undef scaled_ratio_52
#undef weighted_sum_59
#undef scaled_value_24
#undef weighted_sum_60
#undef product_difference_25
#undef saved_converted_vector_3
#undef saved_weighted_sum_2
#undef saved_scaled_value
#undef saved_hiword_result
#undef scaled_index_4
#undef t
#undef t_2
#undef t_3
#undef t_4
#undef scaled_value_25
#undef component_delta_42
#undef component_delta_43
#undef scaled_ratio_53
#undef component_delta_44
#undef component_delta_45
#undef component_delta_46
#undef saved_converted_vector_4

//----- (0000000140188120) ----------------------------------------------------
__int64 sub_140188120()
{
  unsigned int *state_address;
  int masked_bits;
  signed int iteration_count;
  float *weighted_sum;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float product_difference_4;
  float scaled_value;
  float scaled_value_2;
  float product_difference_5;
  float product_difference_6;
  float product_difference_7;
  float *state_address_2;
  float product_difference_8;
  float product_difference_9;
  int call_result;
  __int64 state_word;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float *state_address_3;
  float product_difference_10;
  float product_difference_11;
  int call_result_2;
  __int64 state_word_2;
  float combined_products_4;
  float weighted_sum_2;
  float component_sum;
  float *state_address_4;
  float product_difference_12;
  float product_difference_13;
  int call_result_3;
  __int64 state_word_3;
  float product_difference_14;
  float product_difference_15;
  float *state_address_5;
  float component_delta;
  float product_difference_16;
  float product_difference_17;
  int call_result_4;
  __int64 state_word_4;
  unsigned int state_word_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140188120[64];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140188120 + 0)) /* [rsp+0h] */
#define saved_product_difference (*(float (*))(void *)(sr_frame_140188120 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140188120 + 36)) /* [rsp+24h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_140188120 + 40)) /* [rsp+28h] */
#define unused_frame_slot_48 (*(__int64 (*))(void *)(sr_frame_140188120 + 48)) /* [rsp+30h] */

  state_address = &g_15F2DCB40;
  masked_bits = g_1A70AE560;
  do
  {
    if ( *(state_address - 3664) )
    {
      iteration_count = 0;
      if ( (int)*state_address > 0 )
      {
        weighted_sum = (float *)(state_address + 36);
        do
        {
          if ( *(weighted_sum - 2) > 0.03125 )
          {
            product_difference = *(weighted_sum - 16) - *(weighted_sum - 1);
            product_difference_2 = *(weighted_sum - 15) - *weighted_sum;
            product_difference_3 = *(weighted_sum - 14) - weighted_sum[1];
            square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
            if ( square_root == 0.0 )
            {
              scaled_ratio = 0.0;
              scaled_ratio_2 = 0.0;
              scaled_ratio_3 = 0.0;
            }
            else
            {
              scaled_ratio = (float)(1.0 / square_root) * product_difference;
              scaled_ratio_2 = (float)(1.0 / square_root) * product_difference_2;
              scaled_ratio_3 = (float)(1.0 / square_root) * product_difference_3;
            }
            product_difference_4 = scaled_ratio_3 * -0.0625;
            scaled_value = scaled_ratio_2 * 0.0625;
            scaled_value_2 = scaled_ratio * 0.0625;
            product_difference_5 = *(weighted_sum - 16) - product_difference_4;
            product_difference_6 = *(weighted_sum - 15) - scaled_value;
            product_difference_7 = *(weighted_sum - 14) - scaled_value_2;
            state_address_2 = (float *)&dword_140404A6C[17 * masked_bits + 430859966];
            *state_address_2 = product_difference_5;
            product_difference_8 = product_difference_5 - *(float *)&dword_1402F6188;
            state_address_2[1] = product_difference_6;
            product_difference_9 = product_difference_6 - *(float *)&dword_1402F618C;
            state_address_2[2] = product_difference_7;
            saved_product_difference = product_difference_8;
            unused_written_slot = product_difference_9;
            unused_written_slot_2 = product_difference_7 - *(float *)&dword_1402F6190;
            call_result = sub_1400DC050(state_address_2, &saved_product_difference, 0);
            state_word = (int)g_1A70AE560;
            if ( call_result )
              *(float *)&dword_140404A6C[17 * g_1A70AE560 + 430859967] = (ragdoll_unknown_height)
                                                                                      + 0.03125;
            combined_products = product_difference_4 + *(weighted_sum - 16);
            combined_products_2 = scaled_value + *(weighted_sum - 15);
            *(float *)&dword_140404A6C[17 * state_word + 430859969] = *(weighted_sum - 2) * 8.0;
            combined_products_3 = scaled_value_2 + *(weighted_sum - 14);
            state_address_3 = (float *)&dword_140404A6C[17 * state_word + 430859970];
            state_address_3[2] = combined_products_3;
            product_difference_10 = combined_products_3 - *(float *)&dword_1402F6190;
            *state_address_3 = combined_products;
            product_difference_11 = combined_products - *(float *)&dword_1402F6188;
            state_address_3[1] = combined_products_2;
            unused_written_slot_2 = product_difference_10;
            saved_product_difference = product_difference_11;
            unused_written_slot = combined_products_2 - *(float *)&dword_1402F618C;
            call_result_2 = sub_1400DC050(state_address_3, &saved_product_difference, 0);
            state_word_2 = (int)g_1A70AE560;
            if ( call_result_2 )
              *(float *)&dword_140404A6C[17 * g_1A70AE560 + 430859971] = (ragdoll_unknown_height)
                                                                                      + 0.03125;
            combined_products_4 = product_difference_4 + *(weighted_sum - 1);
            weighted_sum_2 = scaled_value + *weighted_sum;
            *(float *)&dword_140404A6C[17 * state_word_2 + 430859973] = *(weighted_sum - 2) * 8.0;
            component_sum = scaled_value_2 + weighted_sum[1];
            state_address_4 = (float *)&dword_140404A6C[17 * state_word_2 + 430859974];
            state_address_4[2] = component_sum;
            product_difference_12 = component_sum - *(float *)&dword_1402F6190;
            *state_address_4 = combined_products_4;
            product_difference_13 = combined_products_4 - *(float *)&dword_1402F6188;
            state_address_4[1] = weighted_sum_2;
            unused_written_slot_2 = product_difference_12;
            saved_product_difference = product_difference_13;
            unused_written_slot = weighted_sum_2 - *(float *)&dword_1402F618C;
            call_result_3 = sub_1400DC050(state_address_4, &saved_product_difference, 0);
            state_word_3 = (int)g_1A70AE560;
            if ( call_result_3 )
              *(float *)&dword_140404A6C[17 * g_1A70AE560 + 430859975] = (ragdoll_unknown_height)
                                                                                      + 0.03125;
            product_difference_14 = *(weighted_sum - 1) - product_difference_4;
            product_difference_15 = *weighted_sum - scaled_value;
            *(float *)&dword_140404A6C[17 * state_word_3 + 430859977] = weighted_sum[2] * 8.0;
            state_address_5 = (float *)&dword_140404A6C[17 * state_word_3 + 430859978];
            component_delta = weighted_sum[1] - scaled_value_2;
            *state_address_5 = product_difference_14;
            product_difference_16 = product_difference_14 - *(float *)&dword_1402F6188;
            state_address_5[2] = component_delta;
            product_difference_17 = component_delta - *(float *)&dword_1402F6190;
            state_address_5[1] = product_difference_15;
            saved_product_difference = product_difference_16;
            unused_written_slot_2 = product_difference_17;
            unused_written_slot = product_difference_15 - *(float *)&dword_1402F618C;
            call_result_4 = sub_1400DC050(state_address_5, &saved_product_difference, 0);
            state_word_4 = (int)g_1A70AE560;
            if ( call_result_4 )
              *(float *)&dword_140404A6C[17 * g_1A70AE560 + 430859979] = (ragdoll_unknown_height)
                                                                                      + 0.03125;
            state_word_5 = g_1A70AE564;
            *(float *)&dword_140404A6C[17 * state_word_4 + 430859981] = weighted_sum[2] * 8.0;
            masked_bits = ((_WORD)state_word_4 + 1) & 0x3FFF;
            g_1A70AE560 = masked_bits;
            if ( state_word_5 == masked_bits )
              g_1A70AE564 = ((_WORD)state_word_5 + 1) & 0x3FFF;
          }
          ++iteration_count;
          *(weighted_sum - 1) = *(weighted_sum - 16);
          *weighted_sum = *(weighted_sum - 15);
          weighted_sum[1] = *(weighted_sum - 14);
          weighted_sum[2] = *(weighted_sum - 2);
          weighted_sum += 43;
        }
        while ( iteration_count < (int)*state_address );
      }
    }
    state_address += 5210;
  }
  while ( (__int64)state_address < (__int64)&g_15FD09B40 );
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef saved_product_difference
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_frame_slot_48

