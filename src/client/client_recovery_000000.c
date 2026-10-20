#include "shared_client.h"

//----- (0000000140002D00) ----------------------------------------------------
__int64            sub_140002D00(float *a1, float a2, float a3, float a4)
{
  unsigned int cached_mesh_vertex_count;
  unsigned int cached_mesh_vertex_count_2;
  float component_delta;
  float component_delta_2;
  int record_byte_offset;
  unsigned int masked_bits;
  float saved_component_delta;
  float saved_component_delta_2;
  float component_delta_3;
  unsigned int float_word;
  unsigned int float_word_2;
  __int64 scaled_index;
  unsigned int integer_sum;
  unsigned int masked_bits_2;
  float saved_component_delta_3;
  float saved_component_delta_4;
  float component_delta_4;
  unsigned int float_word_3;
  unsigned int float_word_4;
  __int64 scaled_index_2;
  unsigned int integer_sum_2;
  unsigned int masked_bits_3;
  float saved_component_delta_5;
  float saved_component_delta_6;
  float component_delta_5;
  unsigned int float_word_5;
  unsigned int float_word_6;
  __int64 scaled_index_3;
  unsigned int integer_sum_3;
  unsigned int masked_bits_4;
  float saved_component_delta_7;
  float saved_component_delta_8;
  float component_delta_6;
  unsigned int float_word_7;
  unsigned int float_word_8;
  __int64 scaled_index_4;
  unsigned int integer_sum_4;
  unsigned int integer_sum_5;
  unsigned int integer_sum_6;
  unsigned int integer_sum_7;
  unsigned int integer_sum_8;
  unsigned int integer_sum_9;
  unsigned int integer_sum_10;
  unsigned int integer_sum_11;
  unsigned int integer_sum_12;
  unsigned int integer_sum_13;
  __int64 result;

  cached_mesh_vertex_count = mesh_vertex_count;
  cached_mesh_vertex_count_2 = mesh_vertex_count;
  component_delta = -a2;
  component_delta_2 = -a3;
  record_byte_offset = 2;
  do
  {
    masked_bits = ((_BYTE)record_byte_offset - 2) & 3;
    if ( (((_BYTE)record_byte_offset - 2) & 3) == 0 || masked_bits == 3 )
      saved_component_delta = component_delta;
    else
      saved_component_delta = a2;
    if ( record_byte_offset - 2 >= 4 )
      saved_component_delta_2 = a3;
    else
      saved_component_delta_2 = component_delta_2;
    if ( masked_bits < 2 )
      component_delta_3 = -a4;
    else
      component_delta_3 = a4;
    *(float *)&float_word = saved_component_delta_2 + a1[1];
    *(float *)&float_word_2 = component_delta_3 + a1[2];
    scaled_index = (int)(3 * cached_mesh_vertex_count);
    *(float *)&dword_140404A6C[scaled_index + 177167567] = saved_component_delta + *a1;
    dword_140404A6C[scaled_index + 177167568] = float_word;
    dword_140404A6C[scaled_index + 177167569] = float_word_2;
    integer_sum = ++mesh_vertex_count;
    masked_bits_2 = ((_BYTE)record_byte_offset - 1) & 3;
    if ( (((_BYTE)record_byte_offset - 1) & 3) == 0 || masked_bits_2 == 3 )
      saved_component_delta_3 = component_delta;
    else
      saved_component_delta_3 = a2;
    if ( record_byte_offset - 1 >= 4 )
      saved_component_delta_4 = a3;
    else
      saved_component_delta_4 = component_delta_2;
    if ( masked_bits_2 < 2 )
      component_delta_4 = -a4;
    else
      component_delta_4 = a4;
    *(float *)&float_word_3 = saved_component_delta_4 + a1[1];
    *(float *)&float_word_4 = component_delta_4 + a1[2];
    scaled_index_2 = (int)(3 * integer_sum);
    *(float *)&dword_140404A6C[scaled_index_2 + 177167567] = saved_component_delta_3 + *a1;
    dword_140404A6C[scaled_index_2 + 177167568] = float_word_3;
    dword_140404A6C[scaled_index_2 + 177167569] = float_word_4;
    integer_sum_2 = ++mesh_vertex_count;
    masked_bits_3 = record_byte_offset & 3;
    if ( (record_byte_offset & 3) == 0 || masked_bits_3 == 3 )
      saved_component_delta_5 = component_delta;
    else
      saved_component_delta_5 = a2;
    if ( record_byte_offset >= 4 )
      saved_component_delta_6 = a3;
    else
      saved_component_delta_6 = component_delta_2;
    if ( masked_bits_3 < 2 )
      component_delta_5 = -a4;
    else
      component_delta_5 = a4;
    *(float *)&float_word_5 = saved_component_delta_6 + a1[1];
    *(float *)&float_word_6 = component_delta_5 + a1[2];
    scaled_index_3 = (int)(3 * integer_sum_2);
    *(float *)&dword_140404A6C[scaled_index_3 + 177167567] = saved_component_delta_5 + *a1;
    dword_140404A6C[scaled_index_3 + 177167568] = float_word_5;
    dword_140404A6C[scaled_index_3 + 177167569] = float_word_6;
    integer_sum_3 = ++mesh_vertex_count;
    masked_bits_4 = ((_BYTE)record_byte_offset + 1) & 3;
    if ( (((_BYTE)record_byte_offset + 1) & 3) == 0 || masked_bits_4 == 3 )
      saved_component_delta_7 = component_delta;
    else
      saved_component_delta_7 = a2;
    if ( record_byte_offset + 1 >= 4 )
      saved_component_delta_8 = a3;
    else
      saved_component_delta_8 = component_delta_2;
    if ( masked_bits_4 < 2 )
      component_delta_6 = -a4;
    else
      component_delta_6 = a4;
    *(float *)&float_word_7 = saved_component_delta_8 + a1[1];
    *(float *)&float_word_8 = component_delta_6 + a1[2];
    record_byte_offset += 4;
    scaled_index_4 = (int)(3 * integer_sum_3);
    *(float *)&dword_140404A6C[scaled_index_4 + 177167567] = saved_component_delta_7 + *a1;
    dword_140404A6C[scaled_index_4 + 177167568] = float_word_7;
    dword_140404A6C[scaled_index_4 + 177167569] = float_word_8;
    cached_mesh_vertex_count = ++mesh_vertex_count;
  }
  while ( record_byte_offset - 2 < 8 );
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_2 + dword_1402B36C0;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B36C4;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B36C8;
  integer_sum_4 = cached_mesh_vertex_count_2 + dword_1402B36CC;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_4;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B36D0;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B36D4;
  integer_sum_5 = cached_mesh_vertex_count_2 + dword_1402B36D8;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_5;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B36DC;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B36E0;
  integer_sum_6 = cached_mesh_vertex_count_2 + dword_1402B36E4;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_6;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B36E8;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B36EC;
  integer_sum_7 = cached_mesh_vertex_count_2 + dword_1402B36F0;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_7;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B36F4;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B36F8;
  integer_sum_8 = cached_mesh_vertex_count_2 + dword_1402B36FC;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_8;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B3700;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B3704;
  integer_sum_9 = cached_mesh_vertex_count_2 + dword_1402B3708;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_9;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B370C;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B3710;
  integer_sum_10 = cached_mesh_vertex_count_2 + dword_1402B3714;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_10;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B3718;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B371C;
  integer_sum_11 = cached_mesh_vertex_count_2 + dword_1402B3720;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_11;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B3724;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B3728;
  integer_sum_12 = cached_mesh_vertex_count_2 + dword_1402B372C;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_12;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B3730;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B3734;
  integer_sum_13 = cached_mesh_vertex_count_2 + dword_1402B3738;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_13;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B373C;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B3740;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_2 + dword_1402B3744;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + dword_1402B3748;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + dword_1402B374C;
  result = (int)mesh_triangle_count;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  return result;
}

//----- (0000000140003460) ----------------------------------------------------
__int64            sub_140003460(float *a1, float a2, float a3, float a4)
{
  unsigned int cached_mesh_vertex_count;
  int record_byte_offset;
  unsigned int cached_mesh_vertex_count_2;
  float scaled_value;
  float product_difference;
  unsigned int masked_bits;
  float component_delta;
  float scaled_value_2;
  float saved_product_difference;
  float component_delta_2;
  unsigned int float_word;
  __int64 scaled_index;
  unsigned int float_word_2;
  unsigned int integer_sum;
  unsigned int masked_bits_2;
  float component_delta_3;
  float scaled_value_3;
  float saved_product_difference_2;
  float component_delta_4;
  unsigned int float_word_3;
  __int64 scaled_index_2;
  unsigned int float_word_4;
  unsigned int integer_sum_2;
  unsigned int masked_bits_3;
  float component_delta_5;
  float scaled_value_4;
  float saved_product_difference_3;
  float component_delta_6;
  unsigned int float_word_5;
  __int64 scaled_index_3;
  unsigned int float_word_6;
  unsigned int integer_sum_3;
  unsigned int masked_bits_4;
  float component_delta_7;
  float scaled_value_5;
  float saved_product_difference_4;
  float component_delta_8;
  unsigned int float_word_7;
  __int64 scaled_index_4;
  unsigned int float_word_8;
  unsigned int state_word;
  int *record_byte_offset_2;
  int table_value;
  __int64 result;

  cached_mesh_vertex_count = mesh_vertex_count;
  record_byte_offset = 2;
  cached_mesh_vertex_count_2 = mesh_vertex_count;
  scaled_value = a3 * 0.5;
  product_difference = a3 * -0.5;
  do
  {
    masked_bits = ((_BYTE)record_byte_offset - 2) & 3;
    if ( (((_BYTE)record_byte_offset - 2) & 3) == 0 || masked_bits == 3 )
      component_delta = -0.5;
    else
      component_delta = 0.5;
    scaled_value_2 = component_delta * a2;
    if ( record_byte_offset - 2 >= 4 )
      saved_product_difference = scaled_value;
    else
      saved_product_difference = product_difference;
    if ( masked_bits < 2 )
      component_delta_2 = -0.5;
    else
      component_delta_2 = 0.5;
    *(float *)&float_word = saved_product_difference + a1[1];
    scaled_index = (int)(3 * cached_mesh_vertex_count);
    *(float *)&float_word_2 = (float)(component_delta_2 * a4) + a1[2];
    *(float *)&dword_140404A6C[scaled_index + 177167567] = scaled_value_2 + *a1;
    dword_140404A6C[scaled_index + 177167568] = float_word;
    dword_140404A6C[scaled_index + 177167569] = float_word_2;
    integer_sum = ++mesh_vertex_count;
    masked_bits_2 = ((_BYTE)record_byte_offset - 1) & 3;
    if ( (((_BYTE)record_byte_offset - 1) & 3) == 0 || masked_bits_2 == 3 )
      component_delta_3 = -0.5;
    else
      component_delta_3 = 0.5;
    scaled_value_3 = component_delta_3 * a2;
    if ( record_byte_offset - 1 >= 4 )
      saved_product_difference_2 = scaled_value;
    else
      saved_product_difference_2 = product_difference;
    if ( masked_bits_2 < 2 )
      component_delta_4 = -0.5;
    else
      component_delta_4 = 0.5;
    *(float *)&float_word_3 = saved_product_difference_2 + a1[1];
    scaled_index_2 = (int)(3 * integer_sum);
    *(float *)&float_word_4 = (float)(component_delta_4 * a4) + a1[2];
    *(float *)&dword_140404A6C[scaled_index_2 + 177167567] = scaled_value_3 + *a1;
    dword_140404A6C[scaled_index_2 + 177167568] = float_word_3;
    dword_140404A6C[scaled_index_2 + 177167569] = float_word_4;
    integer_sum_2 = ++mesh_vertex_count;
    masked_bits_3 = record_byte_offset & 3;
    if ( (record_byte_offset & 3) == 0 || masked_bits_3 == 3 )
      component_delta_5 = -0.5;
    else
      component_delta_5 = 0.5;
    scaled_value_4 = component_delta_5 * a2;
    if ( record_byte_offset >= 4 )
      saved_product_difference_3 = scaled_value;
    else
      saved_product_difference_3 = product_difference;
    if ( masked_bits_3 < 2 )
      component_delta_6 = -0.5;
    else
      component_delta_6 = 0.5;
    *(float *)&float_word_5 = saved_product_difference_3 + a1[1];
    scaled_index_3 = (int)(3 * integer_sum_2);
    *(float *)&float_word_6 = (float)(component_delta_6 * a4) + a1[2];
    *(float *)&dword_140404A6C[scaled_index_3 + 177167567] = scaled_value_4 + *a1;
    dword_140404A6C[scaled_index_3 + 177167568] = float_word_5;
    dword_140404A6C[scaled_index_3 + 177167569] = float_word_6;
    integer_sum_3 = ++mesh_vertex_count;
    masked_bits_4 = ((_BYTE)record_byte_offset + 1) & 3;
    if ( (((_BYTE)record_byte_offset + 1) & 3) == 0 || masked_bits_4 == 3 )
      component_delta_7 = -0.5;
    else
      component_delta_7 = 0.5;
    scaled_value_5 = component_delta_7 * a2;
    if ( record_byte_offset + 1 >= 4 )
      saved_product_difference_4 = scaled_value;
    else
      saved_product_difference_4 = product_difference;
    if ( masked_bits_4 < 2 )
      component_delta_8 = -0.5;
    else
      component_delta_8 = 0.5;
    *(float *)&float_word_7 = saved_product_difference_4 + a1[1];
    scaled_index_4 = (int)(3 * integer_sum_3);
    record_byte_offset += 4;
    *(float *)&float_word_8 = (float)(component_delta_8 * a4) + a1[2];
    *(float *)&dword_140404A6C[scaled_index_4 + 177167567] = scaled_value_5 + *a1;
    dword_140404A6C[scaled_index_4 + 177167568] = float_word_7;
    dword_140404A6C[scaled_index_4 + 177167569] = float_word_8;
    cached_mesh_vertex_count = ++mesh_vertex_count;
  }
  while ( record_byte_offset - 2 < 8 );
  state_word = g_16AC43DB0;
  record_byte_offset_2 = dword_1402B3664;
  do
  {
    dword_140404A6C[4 * state_word + 178322642] = cached_mesh_vertex_count_2 + *(record_byte_offset_2 - 1);
    dword_140404A6C[4 * g_16AC43DB0 + 178322643] = cached_mesh_vertex_count_2 + *record_byte_offset_2;
    dword_140404A6C[4 * g_16AC43DB0 + 178322644] = cached_mesh_vertex_count_2 + record_byte_offset_2[1];
    table_value = record_byte_offset_2[2];
    record_byte_offset_2 += 4;
    result = 4 * g_16AC43DB0;
    dword_140404A6C[(int)result + 178322645] = cached_mesh_vertex_count_2 + table_value;
    state_word = ++g_16AC43DB0;
  }
  while ( (__int64)record_byte_offset_2 < (__int64)&dword_1402B36C4 );
  return result;
}

//----- (0000000140003760) ----------------------------------------------------
__int64            sub_140003760(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *state_address;
  __int64 record_word_offset;
  unsigned int state_word;
  signed int table_value;
  __int64 result;

  dword_140404A6C[12 * g_1760B9468 + 225628800] = a3;
  dword_140404A6C[12 * g_1760B9468 + 225628801] = a4;
  state_address = &dword_140404A6C[34 * a1 + 225391205];
  dword_140404A6C[12 * g_1760B9468 + 225628802] = state_address[35] + state_address[25];
  dword_140404A6C[12 * g_1760B9468 + 225628804] = state_address[36] + state_address[27];
  record_word_offset = 34LL * a2;
  dword_140404A6C[12 * g_1760B9468 + 225628803] = state_address[26];
  state_word = g_1760B9468;
  table_value = dword_140404A6C[record_word_offset + 225391231];
  if ( (int)dword_140404A6C[12 * g_1760B9468 + 225628803] > table_value )
  {
    dword_140404A6C[12 * g_1760B9468 + 225628803] = table_value;
    state_word = g_1760B9468;
  }
  dword_140404A6C[12 * state_word + 225628805] = dword_140404A6C[record_word_offset + 225391230]
                                       - dword_140404A6C[record_word_offset + 225391242]
                                       - state_address[25]
                                       - state_address[35];
  dword_140404A6C[12 * g_1760B9468 + 225628806] = dword_140404A6C[record_word_offset + 225391232]
                                                               - dword_140404A6C[record_word_offset + 225391243]
                                                               - state_address[27]
                                                               - dword_140404A6C[34 * a1 + 225391241];
  result = (int)g_1760B9468;
  dword_140404A6C[12 * g_1760B9468++ + 225628807] = 0;
  return result;
}

//----- (00000001400038E0) ----------------------------------------------------
__int64            sub_1400038E0(signed int a1, signed int a2, signed int a3, signed int a4)
{
  __int64 record_word_offset;
  __int64 record_word_offset_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 result;
  signed int integer_difference;
  int integer_quotient;

  record_word_offset = 34LL * a1;
  record_word_offset_2 = 34LL * a2;
  if ( (int)(dword_140404A6C[record_word_offset_2 + 225391230] - dword_140404A6C[record_word_offset + 225391230]) <= (int)(dword_140404A6C[record_word_offset_2 + 225391232]
                                                                                       - dword_140404A6C[record_word_offset + 225391232]) )
  {
    dword_140404A6C[396 * g_175FF3464 + 225426058] = 1;
    dword_140404A6C[record_word_offset + 225391237] = g_175FF3464;
    if ( (int)dword_140404A6C[record_word_offset + 225391240] < a3 )
      dword_140404A6C[record_word_offset + 225391240] = a3;
    if ( (int)dword_140404A6C[record_word_offset + 225391242] < a4 )
      dword_140404A6C[record_word_offset + 225391242] = a4;
    dword_140404A6C[record_word_offset_2 + 225391239] = g_175FF3464;
    if ( (int)dword_140404A6C[record_word_offset_2 + 225391240] < a3 )
      dword_140404A6C[record_word_offset_2 + 225391240] = a3;
    if ( (int)dword_140404A6C[record_word_offset_2 + 225391242] < a4 )
      dword_140404A6C[record_word_offset_2 + 225391242] = a4;
  }
  else
  {
    dword_140404A6C[396 * g_175FF3464 + 225426058] = 0;
    dword_140404A6C[record_word_offset + 225391236] = g_175FF3464;
    if ( (int)dword_140404A6C[record_word_offset + 225391241] < a4 )
      dword_140404A6C[record_word_offset + 225391241] = a4;
    if ( (int)dword_140404A6C[record_word_offset + 225391243] < a3 )
      dword_140404A6C[record_word_offset + 225391243] = a3;
    dword_140404A6C[record_word_offset_2 + 225391238] = g_175FF3464;
    if ( (int)dword_140404A6C[record_word_offset_2 + 225391241] < a4 )
      dword_140404A6C[record_word_offset_2 + 225391241] = a4;
    if ( (int)dword_140404A6C[record_word_offset_2 + 225391243] < a3 )
      dword_140404A6C[record_word_offset_2 + 225391243] = a3;
  }
  *(float *)&dword_140404A6C[396 * g_175FF3464 + 225426174] = (float)(int)(dword_140404A6C[record_word_offset_2 + 225391230]
                                                                                        - dword_140404A6C[record_word_offset + 225391230]);
  dword_140404A6C[396 * g_175FF3464 + 225426175] = 0;
  *(float *)&dword_140404A6C[396 * g_175FF3464 + 225426176] = (float)(int)(dword_140404A6C[record_word_offset_2 + 225391232]
                                                                                        - dword_140404A6C[record_word_offset + 225391232]);
  sr_math_vec3_normalize(
    (__int64)&dword_140404A6C[396 * g_175FF3464 + 225426174],
    (float *)&dword_140404A6C[396 * g_175FF3464 + 225426174]);
  *(float *)&dword_140404A6C[396 * g_175FF3464 + 225426177] = -*(float *)&dword_140404A6C[396 * g_175FF3464 + 225426176];
  dword_140404A6C[396 * g_175FF3464 + 225426178] = 0;
  dword_140404A6C[396 * g_175FF3464 + 225426179] = dword_140404A6C[396 * g_175FF3464
                                                                                + 225426174];
  dword_140404A6C[396 * g_175FF3464 + 225426056] = a1;
  dword_140404A6C[396 * g_175FF3464 + 225426057] = a2;
  dword_140404A6C[396 * g_175FF3464 + 225426059] = a3;
  dword_140404A6C[396 * g_175FF3464 + 225426060] = a4;
  scaled_index = 396LL * (int)g_175FF3464;
  scaled_index_2 = 34LL * (int)dword_140404A6C[scaled_index + 225426056];
  if ( dword_140404A6C[scaled_index + 225426058] )
  {
    integer_difference = dword_140404A6C[scaled_index_2 + 225391230] - 256;
    result = (unsigned int)((unsigned __int64)(2454267027LL * integer_difference) >> 32) >> 31;
    integer_quotient = integer_difference / 56;
    if ( integer_difference / 56 )
    {
      switch ( integer_quotient )
      {
        case 1:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Bunten Ave");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 10;
          break;
        case 2:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Carmack Ave");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 11;
          break;
        case 3:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "David Ave");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 12;
          break;
        case 4:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Eugene Ave");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 13;
          break;
        case 5:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Flinn Ave");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 14;
          break;
        case 6:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Garriott Ave");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 15;
          break;
        case 7:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Holland Ave");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 16;
          break;
      }
    }
    else
    {
      strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Abrash Ave");
      result = (int)g_175FF3464;
      dword_140404A6C[396 * g_175FF3464 + 225426055] = 9;
    }
  }
  else
  {
    result = (unsigned int)((int)(dword_140404A6C[scaled_index_2 + 225391232] - 256) / 32);
    if ( (_DWORD)result )
    {
      switch ( (_DWORD)result )
      {
        case 1:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Second Street");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 1;
          break;
        case 2:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Third Street");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 2;
          break;
        case 3:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Fourth Street");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 3;
          break;
        case 4:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Fifth Street");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 4;
          break;
        case 5:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Sixth Street");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 5;
          break;
        case 6:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Seventh Street");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 6;
          break;
        case 7:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Eighth Street");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 7;
          break;
        case 8:
          strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "Ninth Street");
          result = (int)g_175FF3464;
          dword_140404A6C[396 * g_175FF3464 + 225426055] = 8;
          break;
      }
    }
    else
    {
      strcpy((char *)&dword_140404A6C[scaled_index + 225426047], "First Street");
      result = (int)g_175FF3464;
      dword_140404A6C[396 * g_175FF3464 + 225426055] = 0;
    }
  }
  ++g_175FF3464;
  return result;
}

//----- (0000000140004140) ----------------------------------------------------
__int64            sub_140004140(__int64 a1)
{
  unsigned int cached_mesh_vertex_count;
  int iteration_count;
  __int64 remaining_count;
  unsigned int cached_mesh_vertex_count_2;
  __int64 record_byte_offset;
  int *buffer_cursor;
  char element_index;
  __int64 remaining_count_2;
  __int64 loaded_word;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 masked_bits;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  __int64 masked_bits_2;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  __int64 scaled_index;
  unsigned int cached_mesh_triangle_count;
  __int64 record_byte_offset_2;
  int *buffer_cursor_2;
  char element_index_2;
  int iteration_count_2;
  __int64 loaded_word_2;
  unsigned int masked_bits_3;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  int *state_address;
  int iteration_count_3;
  unsigned int integer_sum;
  unsigned int record_byte_offset_3;
  int scaled_index_6;
  int *record_byte_offset_4;
  __int64 masked_bits_4;
  int iteration_count_4;
  unsigned int record_byte_offset_5;
  unsigned int integer_difference;
  unsigned int running_total;
  unsigned int integer_sum_2;
  int iteration_count_5;
  unsigned int record_byte_offset_6;
  int *record_byte_offset_7;
  int loaded_word_3;
  unsigned int integer_sum_3;
  unsigned int integer_sum_4;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140004140[16];
#define buffer_cursor_3 (*(int * (*))(void *)(sr_frame_140004140 + 0)) /* [rsp+E8h] */
#define remaining_count_3 (*(__int64 (*))(void *)(sr_frame_140004140 + 8)) /* [rsp+F0h] */

  cached_mesh_vertex_count = mesh_vertex_count;
  iteration_count = 0;
  remaining_count = 4;
  cached_mesh_vertex_count_2 = mesh_vertex_count;
  record_byte_offset = 0;
  buffer_cursor = dword_1402B3660;
  remaining_count_3 = 4;
  do
  {
    element_index = 3;
    remaining_count_2 = 4;
    do
    {
      loaded_word = 3 * *(_DWORD *)(a1 + 4LL * *buffer_cursor);
      weighted_sum = *(float *)&dword_140404A6C[loaded_word + 177167567];
      weighted_sum_2 = *(float *)&dword_140404A6C[loaded_word + 177167568];
      weighted_sum_3 = *(float *)&dword_140404A6C[loaded_word + 177167569];
      masked_bits = 3 * *(_DWORD *)(a1 + 4LL * dword_1402B3660[record_byte_offset + ((element_index - 2) & 3)]);
      combined_products = *(float *)&dword_140404A6C[masked_bits + 177167567] - weighted_sum;
      combined_products_2 = *(float *)&dword_140404A6C[masked_bits + 177167568] - weighted_sum_2;
      combined_products_3 = *(float *)&dword_140404A6C[masked_bits + 177167569] - weighted_sum_3;
      masked_bits_2 = 3 * *(_DWORD *)(a1 + 4LL * dword_1402B3660[record_byte_offset + (element_index & 3)]);
      combined_products_4 = *(float *)&dword_140404A6C[masked_bits_2 + 177167567] - weighted_sum;
      combined_products_5 = *(float *)&dword_140404A6C[masked_bits_2 + 177167568] - weighted_sum_2;
      combined_products_6 = *(float *)&dword_140404A6C[masked_bits_2 + 177167569] - weighted_sum_3;
      square_root = fsqrt((float)((float)(combined_products_2 * combined_products_2) + (float)(combined_products * combined_products)) + (float)(combined_products_3 * combined_products_3));
      if ( square_root == 0.0 )
      {
        scaled_ratio = 0.0;
        scaled_ratio_2 = 0.0;
        scaled_ratio_3 = 0.0;
      }
      else
      {
        scaled_ratio = (float)(1.0 / square_root) * combined_products;
        scaled_ratio_2 = (float)(1.0 / square_root) * combined_products_2;
        scaled_ratio_3 = (float)(1.0 / square_root) * combined_products_3;
      }
      square_root_2 = fsqrt((float)((float)(combined_products_5 * combined_products_5) + (float)(combined_products_4 * combined_products_4)) + (float)(combined_products_6 * combined_products_6));
      if ( square_root_2 == 0.0 )
      {
        scaled_ratio_4 = 0.0;
        scaled_ratio_5 = 0.0;
        scaled_ratio_6 = 0.0;
      }
      else
      {
        scaled_ratio_4 = (float)(1.0 / square_root_2) * combined_products_4;
        scaled_ratio_5 = (float)(1.0 / square_root_2) * combined_products_5;
        scaled_ratio_6 = (float)(1.0 / square_root_2) * combined_products_6;
      }
      weighted_sum_4 = (float)((float)(scaled_ratio_4 + scaled_ratio) * 0.0625) + weighted_sum;
      weighted_sum_5 = (float)((float)(scaled_ratio_5 + scaled_ratio_2) * 0.0625) + weighted_sum_2;
      weighted_sum_6 = (float)((float)(scaled_ratio_6 + scaled_ratio_3) * 0.0625) + weighted_sum_3;
      if ( iteration_count )
      {
        if ( iteration_count == 5 )
        {
          weighted_sum_4 = weighted_sum_4 + (float)(*(float *)&dword_1402F6188 * -0.0625);
          weighted_sum_5 = weighted_sum_5 + (float)(*(float *)&dword_1402F618C * -0.0625);
          weighted_sum_6 = weighted_sum_6 + (float)(*(float *)&dword_1402F6190 * -0.0625);
        }
      }
      else
      {
        weighted_sum_4 = weighted_sum_4 - (float)(*(float *)&dword_1402F6188 * 0.375);
        weighted_sum_5 = weighted_sum_5 - (float)(*(float *)&dword_1402F618C * 0.375);
        weighted_sum_6 = weighted_sum_6 - (float)(*(float *)&dword_1402F6190 * 0.375);
      }
      ++element_index;
      scaled_index = (int)(3 * cached_mesh_vertex_count);
      ++buffer_cursor;
      *(float *)&dword_140404A6C[scaled_index + 177167567] = weighted_sum_4;
      *(float *)&dword_140404A6C[scaled_index + 177167568] = weighted_sum_5;
      *(float *)&dword_140404A6C[scaled_index + 177167569] = weighted_sum_6;
      cached_mesh_vertex_count = ++mesh_vertex_count;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    ++iteration_count;
    record_byte_offset += 4;
  }
  while ( iteration_count < 6 );
  cached_mesh_triangle_count = mesh_triangle_count;
  record_byte_offset_2 = 0;
  buffer_cursor_2 = dword_1402B3660;
  do
  {
    element_index_2 = 1;
    iteration_count_2 = 1;
    do
    {
      loaded_word_2 = *buffer_cursor_2;
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = *(_DWORD *)(a1 + 4 * loaded_word_2);
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(_DWORD *)(a1
                                                                              + 4LL * dword_1402B3660[record_byte_offset_2 + (element_index_2 & 3)]);
      masked_bits_3 = cached_mesh_vertex_count_2 + 4 * remaining_count_2 + (iteration_count_2 & 3);
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_3;
      dword_140404A6C[mesh_triangle_count + 178207953] = -1;
      scaled_index_2 = 6 * mesh_triangle_count;
      *(_QWORD *)&dword_140404A6C[scaled_index_2 + 178011345] = 1099169792;
      *(_QWORD *)&dword_140404A6C[scaled_index_2 + 178011347] = 1099169792;
      *(_QWORD *)&dword_140404A6C[scaled_index_2 + 178011349] = 1099169792;
      if ( (_DWORD)remaining_count_2 == 5 )
      {
        scaled_index_3 = 6 * mesh_triangle_count;
        dword_140404A6C[scaled_index_3 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[scaled_index_3 + 178011346] = 1065353216;
        *(_QWORD *)&dword_140404A6C[scaled_index_3 + 178011348] = 1065353216;
        dword_140404A6C[scaled_index_3 + 178011350] = 1065353216;
      }
      ++mesh_triangle_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = *(_DWORD *)(a1 + 4 * loaded_word_2);
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_3;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = iteration_count_2 + 4 * remaining_count_2 + cached_mesh_vertex_count_2 - 1;
      dword_140404A6C[mesh_triangle_count + 178207953] = -1;
      scaled_index_4 = 6 * mesh_triangle_count;
      *(_QWORD *)&dword_140404A6C[scaled_index_4 + 178011345] = 1099169792;
      *(_QWORD *)&dword_140404A6C[scaled_index_4 + 178011347] = 1099169792;
      *(_QWORD *)&dword_140404A6C[scaled_index_4 + 178011349] = 1099169792;
      if ( (_DWORD)remaining_count_2 == 5 )
      {
        scaled_index_5 = 6 * mesh_triangle_count;
        dword_140404A6C[scaled_index_5 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[scaled_index_5 + 178011346] = 1065353216;
        *(_QWORD *)&dword_140404A6C[scaled_index_5 + 178011348] = 1065353216;
        dword_140404A6C[scaled_index_5 + 178011350] = 1065353216;
      }
      ++element_index_2;
      cached_mesh_triangle_count = mesh_triangle_count + 1;
      ++iteration_count_2;
      ++buffer_cursor_2;
      ++mesh_triangle_count;
      --remaining_count;
    }
    while ( remaining_count );
    LODWORD(remaining_count_2) = remaining_count_2 + 1;
    record_byte_offset_2 += 4;
    remaining_count = 4;
  }
  while ( (int)remaining_count_2 < 6 );
  state_address = &dword_1402B36B0;
  iteration_count_3 = 1;
  buffer_cursor_3 = &dword_1402B36B0;
  integer_sum = cached_mesh_vertex_count_2 + 7;
  record_byte_offset_3 = cached_mesh_vertex_count_2 + 4;
  do
  {
    scaled_index_6 = *(state_address - 20);
    record_byte_offset_4 = &dword_1402B3678;
    masked_bits_4 = iteration_count_3 & 3;
    iteration_count_4 = 1;
    record_byte_offset_5 = integer_sum;
    do
    {
      if ( scaled_index_6 == record_byte_offset_4[1] && dword_1402B3660[masked_bits_4] == *record_byte_offset_4 )
      {
        integer_difference = iteration_count_3 + cached_mesh_vertex_count_2 - 1;
        dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = integer_difference;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_4 + cached_mesh_vertex_count_2;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset_5 - 1;
        dword_140404A6C[mesh_triangle_count + 178207953] = -1;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
        dword_140404A6C[6 * mesh_triangle_count++ + 178011350] = 1065353216;
        dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_difference;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset_5 - 1;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset_5;
        dword_140404A6C[mesh_triangle_count + 178207953] = -1;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
        dword_140404A6C[6 * mesh_triangle_count++ + 178011350] = 1065353216;
        dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_difference;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset_5;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + 6 + 4 * (iteration_count_4 & 3);
        dword_140404A6C[mesh_triangle_count + 178207953] = -1;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 1065353216;
        cached_mesh_triangle_count = ++mesh_triangle_count;
      }
      ++iteration_count_4;
      record_byte_offset_5 += 4;
      record_byte_offset_4 += 4;
    }
    while ( iteration_count_4 < 5 );
    dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = record_byte_offset_3;
    running_total = cached_mesh_vertex_count_2 + 4 * masked_bits_4;
    integer_sum_2 = running_total + 5;
    running_total += 6;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = integer_sum_2;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = running_total;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
    dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
    dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
    dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
    dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
    dword_140404A6C[6 * mesh_triangle_count++ + 178011350] = 1065353216;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset_3;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = running_total;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset_3 + 3;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
    dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
    dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
    iteration_count_5 = 1;
    record_byte_offset_6 = cached_mesh_vertex_count_2 + 4;
    record_byte_offset_7 = &dword_1402B3670;
    loaded_word_3 = *buffer_cursor_3;
    dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
    dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
    dword_140404A6C[6 * mesh_triangle_count + 178011350] = 1065353216;
    cached_mesh_triangle_count = ++mesh_triangle_count;
    do
    {
      if ( loaded_word_3 == record_byte_offset_7[1] && dword_1402B3660[masked_bits_4 + 20] == *record_byte_offset_7 )
      {
        integer_sum_3 = iteration_count_3 + cached_mesh_vertex_count_2 + 19;
        dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = integer_sum_3;
        integer_sum_4 = masked_bits_4 + cached_mesh_vertex_count_2 + 20;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = integer_sum_4;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset_6;
        dword_140404A6C[mesh_triangle_count + 178207953] = -1;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
        dword_140404A6C[6 * mesh_triangle_count++ + 178011350] = 1065353216;
        dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_3;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset_6;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset_6 + 1;
        dword_140404A6C[mesh_triangle_count + 178207953] = -1;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
        dword_140404A6C[6 * mesh_triangle_count++ + 178011350] = 1065353216;
        dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_4;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + 5 + 4 * (iteration_count_5 & 3);
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset_6;
        dword_140404A6C[mesh_triangle_count + 178207953] = -1;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 1065353216;
        cached_mesh_triangle_count = ++mesh_triangle_count;
      }
      ++iteration_count_5;
      record_byte_offset_6 += 4;
      record_byte_offset_7 += 4;
    }
    while ( iteration_count_5 < 5 );
    state_address = buffer_cursor_3 + 1;
    integer_sum = cached_mesh_vertex_count_2 + 7;
    ++iteration_count_3;
    ++buffer_cursor_3;
    record_byte_offset_3 += 4;
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = cached_mesh_vertex_count_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + 2;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + 1;
  dword_140404A6C[mesh_triangle_count + 178207953] = -1;
  dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
  dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
  dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
  dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
  dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
  dword_140404A6C[6 * mesh_triangle_count++ + 178011350] = 1065353216;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + 3;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + 2;
  dword_140404A6C[mesh_triangle_count + 178207953] = -1;
  dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
  dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
  dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
  dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
  dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
  result = 6 * mesh_triangle_count;
  dword_140404A6C[result + 178011350] = 1065353216;
  ++mesh_triangle_count;
  return result;
}
#undef buffer_cursor_3
#undef remaining_count_3

//----- (00000001400054F0) ----------------------------------------------------
__int64            sub_1400054F0(float *a1, float *a2, double a3, float a4)
{
  unsigned int cached_mesh_vertex_count;
  __int64 remaining_count;
  unsigned int cached_mesh_vertex_count_2;
  __m128 converted_vector;
  __int64 remaining_count_2;
  float weighted_sum;
  float scaled_value;
  __m128d converted_vector_2;
  __m128 vector_result;
  int scaled_index;
  float source_component_z;
  double scaled_value_2;
  double saved_scaled_value;
  float reordered_vector;
  float scaled_value_3;
  float weighted_sum_2;
  float component_delta;
  __int64 scaled_index_2;
  float weighted_sum_3;
  float weighted_sum_4;
  double float_word;
  float weighted_sum_5;
  __m128 converted_vector_3;
  __m128d converted_vector_4;
  unsigned int cached_mesh_vertex_count_3;
  __int64 unrecovered_register_value;
  __m128 vector_result_2;
  int scaled_index_3;
  float source_component_z_2;
  float reordered_vector_2;
  float scaled_value_4;
  float weighted_sum_6;
  float component_delta_2;
  __int64 scaled_index_4;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float component_delta_3;
  __m128 vector_result_3;
  int scaled_index_5;
  double float_word_2;
  float component_delta_4;
  float reordered_vector_3;
  float weighted_sum_10;
  float scaled_value_5;
  float component_delta_5;
  __int64 scaled_index_6;
  float weighted_sum_11;
  float weighted_sum_12;
  double float_word_3;
  float weighted_sum_13;
  unsigned int cached_mesh_vertex_count_4;
  __int64 unrecovered_register_value_2;
  __m128 vector_result_4;
  int scaled_index_7;
  double scaled_value_6;
  float component_delta_6;
  float reordered_vector_4;
  float weighted_sum_14;
  float scaled_value_7;
  float component_delta_7;
  __int64 scaled_index_8;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float scaled_value_8;
  float source_component_y;
  float scaled_value_9;
  __int64 scaled_index_9;
  float source_component_z_3;
  __int64 scaled_index_10;
  float weighted_sum_18;
  float weighted_sum_19;
  float weighted_sum_20;
  float scaled_value_10;
  float source_component_y_2;
  __int64 scaled_index_11;
  float component_sum;
  float scaled_value_11;
  float weighted_sum_21;
  float weighted_sum_22;
  float weighted_sum_23;
  __int64 result;
  unsigned int integer_sum;
  unsigned int integer_sum_2;
  unsigned int record_byte_offset;
  __int64 remaining_count_3;
  unsigned int masked_bits;
  unsigned int masked_bits_2;
  unsigned int integer_sum_3;
  unsigned int masked_bits_3;
  unsigned int integer_sum_4;
  unsigned int integer_sum_5;
  unsigned int masked_bits_4;
  unsigned int integer_sum_6;

  cached_mesh_vertex_count = mesh_vertex_count;
  remaining_count = 8;
  cached_mesh_vertex_count_2 = mesh_vertex_count;
  converted_vector = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  remaining_count_2 = 8;
  weighted_sum = 0.0;
  scaled_value = *(float *)&a3;
  do
  {
    converted_vector_2 = _mm_cvtps_pd(converted_vector);
    vector_result = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_2, f64)[0], (__int64)a2, a3));
    scaled_index = 3 * cached_mesh_vertex_count;
    source_component_z = a1[2];
    scaled_value_2 = *(double *)SR_VEC_LANES(128, vector_result, u64);
    saved_scaled_value = scaled_value;
    reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * scaled_value;
    scaled_value_3 = scaled_value * *(double *)SR_VEC_LANES(128, vector_result, u64);
    weighted_sum_2 = reordered_vector + *a1;
    component_delta = a1[1] - scaled_value_3;
    *(float *)&dword_140404A6C[scaled_index + 177167567] = (float)((float)(component_delta * a2[3]) + (float)(weighted_sum_2 * *a2))
                                                + (float)(source_component_z * a2[6]);
    *(float *)&dword_140404A6C[scaled_index + 177167568] = (float)((float)(component_delta * a2[4]) + (float)(weighted_sum_2 * a2[1]))
                                                + (float)(source_component_z * a2[7]);
    *(float *)&dword_140404A6C[scaled_index + 177167569] = (float)((float)(component_delta * a2[5]) + (float)(weighted_sum_2 * a2[2]))
                                                + (float)(source_component_z * a2[8]);
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177249487] = cosf(SR_VEC_LANES(128, converted_vector, f32)[0]);
    SR_VEC_LANES(128, vector_result, f32)[0] = -scaled_value_2;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = SR_VEC_LANES(128, vector_result, i32)[0];
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    scaled_index_2 = 3 * mesh_vertex_count;
    weighted_sum_3 = *(float *)&dword_140404A6C[scaled_index_2 + 177249487];
    weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index_2 + 177249488];
    *(_QWORD *)&float_word = LODWORD(weighted_sum_4);
    weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index_2 + 177249489];
    *(float *)&float_word = (float)((float)(weighted_sum_4 * a2[3]) + (float)(weighted_sum_3 * *a2)) + (float)(weighted_sum_5 * a2[6]);
    dword_140404A6C[scaled_index_2 + 177249487] = LODWORD(float_word);
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + 0.39269908169875;
    converted_vector_3 = _mm_cvtpd_ps(converted_vector_2);
    *(float *)&dword_140404A6C[scaled_index_2 + 177249488] = (float)((float)(weighted_sum_4 * a2[4]) + (float)(weighted_sum_3 * a2[1]))
                                                + (float)(weighted_sum_5 * a2[7]);
    converted_vector_4 = _mm_cvtps_pd(converted_vector_3);
    *(float *)&dword_140404A6C[scaled_index_2 + 177249489] = (float)((float)(weighted_sum_4 * a2[5]) + (float)(weighted_sum_3 * a2[2]))
                                                + (float)(weighted_sum_5 * a2[8]);
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_3 = mesh_vertex_count;
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_4, f64)[0], unrecovered_register_value, float_word));
    scaled_index_3 = 3 * cached_mesh_vertex_count_3;
    source_component_z_2 = a1[2];
    *(_QWORD *)&SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, vector_result_2, u64)[0];
    reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * scaled_value;
    scaled_value_4 = scaled_value * *(double *)SR_VEC_LANES(128, vector_result_2, u64);
    weighted_sum_6 = reordered_vector_2 + *a1;
    component_delta_2 = a1[1] - scaled_value_4;
    *(float *)&dword_140404A6C[scaled_index_3 + 177167567] = (float)((float)(component_delta_2 * a2[3]) + (float)(weighted_sum_6 * *a2))
                                                + (float)(source_component_z_2 * a2[6]);
    *(float *)&dword_140404A6C[scaled_index_3 + 177167568] = (float)((float)(component_delta_2 * a2[4]) + (float)(weighted_sum_6 * a2[1]))
                                                + (float)(source_component_z_2 * a2[7]);
    *(float *)&dword_140404A6C[scaled_index_3 + 177167569] = (float)((float)(component_delta_2 * a2[5]) + (float)(weighted_sum_6 * a2[2]))
                                                + (float)(source_component_z_2 * a2[8]);
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177249487] = cosf(SR_VEC_LANES(128, converted_vector_3, f32)[0]);
    SR_VEC_LANES(128, vector_result_2, f32)[0] = -SR_VEC_LANES(128, converted_vector_2, f64)[0];
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = SR_VEC_LANES(128, vector_result_2, i32)[0];
    SR_VEC_LANES(128, converted_vector_4, f64)[0] = SR_VEC_LANES(128, converted_vector_4, f64)[0] + 0.39269908169875;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    converted_vector = _mm_cvtpd_ps(converted_vector_4);
    scaled_index_4 = 3 * mesh_vertex_count;
    weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index_4 + 177249487];
    weighted_sum_8 = *(float *)&dword_140404A6C[scaled_index_4 + 177249488];
    weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index_4 + 177249489];
    *(_QWORD *)&a3 = LODWORD(weighted_sum_8);
    *(float *)&a3 = (float)((float)(weighted_sum_8 * a2[3]) + (float)(weighted_sum_7 * *a2)) + (float)(weighted_sum_9 * a2[6]);
    dword_140404A6C[scaled_index_4 + 177249487] = LODWORD(a3);
    *(float *)&dword_140404A6C[scaled_index_4 + 177249488] = (float)((float)(weighted_sum_7 * a2[1]) + (float)(weighted_sum_8 * a2[4]))
                                                + (float)(weighted_sum_9 * a2[7]);
    *(float *)&dword_140404A6C[scaled_index_4 + 177249489] = (float)((float)(weighted_sum_7 * a2[2]) + (float)(weighted_sum_8 * a2[5]))
                                                + (float)(weighted_sum_9 * a2[8]);
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = 0;
    cached_mesh_vertex_count = ++mesh_vertex_count;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  component_delta_3 = -a4;
  do
  {
    vector_result_3 = _mm_castpd_ps(sub_1401F8A50(weighted_sum, (__int64)a2, a3));
    scaled_index_5 = 3 * cached_mesh_vertex_count;
    float_word_2 = *(double *)SR_VEC_LANES(128, vector_result_3, u64);
    component_delta_4 = a1[2] - a4;
    reordered_vector_3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * saved_scaled_value;
    weighted_sum_10 = reordered_vector_3 + *a1;
    scaled_value_5 = *(double *)SR_VEC_LANES(128, vector_result_3, u64) * saved_scaled_value;
    component_delta_5 = a1[1] - scaled_value_5;
    *(float *)&dword_140404A6C[scaled_index_5 + 177167567] = (float)((float)(component_delta_5 * a2[3]) + (float)(weighted_sum_10 * *a2))
                                                + (float)(component_delta_4 * a2[6]);
    *(float *)&dword_140404A6C[scaled_index_5 + 177167568] = (float)((float)(weighted_sum_10 * a2[1]) + (float)(component_delta_5 * a2[4]))
                                                + (float)(component_delta_4 * a2[7]);
    *(float *)&dword_140404A6C[scaled_index_5 + 177167569] = (float)((float)(weighted_sum_10 * a2[2]) + (float)(component_delta_5 * a2[5]))
                                                + (float)(component_delta_4 * a2[8]);
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177249487] = cosf(weighted_sum);
    SR_VEC_LANES(128, vector_result_3, f32)[0] = -float_word_2;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = SR_VEC_LANES(128, vector_result_3, i32)[0];
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    scaled_index_6 = 3 * mesh_vertex_count;
    weighted_sum_11 = *(float *)&dword_140404A6C[scaled_index_6 + 177249487];
    weighted_sum_12 = *(float *)&dword_140404A6C[scaled_index_6 + 177249488];
    *(_QWORD *)&float_word_3 = LODWORD(weighted_sum_12);
    weighted_sum_13 = *(float *)&dword_140404A6C[scaled_index_6 + 177249489];
    *(float *)&float_word_3 = (float)((float)(weighted_sum_12 * a2[3]) + (float)(weighted_sum_11 * *a2)) + (float)(weighted_sum_13 * a2[6]);
    dword_140404A6C[scaled_index_6 + 177249487] = LODWORD(float_word_3);
    *(float *)&float_word_2 = weighted_sum + 0.39269908169875;
    *(float *)&dword_140404A6C[scaled_index_6 + 177249488] = (float)((float)(weighted_sum_11 * a2[1]) + (float)(weighted_sum_12 * a2[4]))
                                                + (float)(weighted_sum_13 * a2[7]);
    *(float *)&dword_140404A6C[scaled_index_6 + 177249489] = (float)((float)(weighted_sum_11 * a2[2]) + (float)(weighted_sum_12 * a2[5]))
                                                + (float)(weighted_sum_13 * a2[8]);
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_4 = mesh_vertex_count;
    vector_result_4 = _mm_castpd_ps(sub_1401F8A50(*(float *)&float_word_2, unrecovered_register_value_2, float_word_3));
    scaled_index_7 = 3 * cached_mesh_vertex_count_4;
    scaled_value_6 = *(double *)SR_VEC_LANES(128, vector_result_4, u64);
    component_delta_6 = a1[2] - a4;
    reordered_vector_4 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_4, (__m128d)vector_result_4, 1), f64)[0] * saved_scaled_value;
    weighted_sum_14 = reordered_vector_4 + *a1;
    scaled_value_7 = *(double *)SR_VEC_LANES(128, vector_result_4, u64) * saved_scaled_value;
    component_delta_7 = a1[1] - scaled_value_7;
    *(float *)&dword_140404A6C[scaled_index_7 + 177167567] = (float)((float)(component_delta_7 * a2[3]) + (float)(weighted_sum_14 * *a2))
                                                + (float)(component_delta_6 * a2[6]);
    *(float *)&dword_140404A6C[scaled_index_7 + 177167568] = (float)((float)(weighted_sum_14 * a2[1]) + (float)(component_delta_7 * a2[4]))
                                                + (float)(component_delta_6 * a2[7]);
    *(float *)&dword_140404A6C[scaled_index_7 + 177167569] = (float)((float)(weighted_sum_14 * a2[2]) + (float)(component_delta_7 * a2[5]))
                                                + (float)(component_delta_6 * a2[8]);
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177249487] = cosf(*(float *)&float_word_2);
    SR_VEC_LANES(128, vector_result_4, f32)[0] = -scaled_value_6;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = SR_VEC_LANES(128, vector_result_4, i32)[0];
    weighted_sum = *(float *)&float_word_2 + 0.39269908169875;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    scaled_index_8 = 3 * mesh_vertex_count;
    weighted_sum_15 = *(float *)&dword_140404A6C[scaled_index_8 + 177249487];
    weighted_sum_16 = *(float *)&dword_140404A6C[scaled_index_8 + 177249488];
    weighted_sum_17 = *(float *)&dword_140404A6C[scaled_index_8 + 177249489];
    *(_QWORD *)&a3 = LODWORD(weighted_sum_16);
    *(float *)&a3 = (float)((float)(weighted_sum_16 * a2[3]) + (float)(weighted_sum_15 * *a2)) + (float)(weighted_sum_17 * a2[6]);
    dword_140404A6C[scaled_index_8 + 177249487] = LODWORD(a3);
    *(float *)&dword_140404A6C[scaled_index_8 + 177249488] = (float)((float)(weighted_sum_15 * a2[1]) + (float)(weighted_sum_16 * a2[4]))
                                                + (float)(weighted_sum_17 * a2[7]);
    *(float *)&dword_140404A6C[scaled_index_8 + 177249489] = (float)((float)(weighted_sum_15 * a2[2]) + (float)(weighted_sum_16 * a2[5]))
                                                + (float)(weighted_sum_17 * a2[8]);
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = 0;
    cached_mesh_vertex_count = ++mesh_vertex_count;
    --remaining_count;
  }
  while ( remaining_count );
  scaled_value_8 = *a1;
  source_component_y = a1[1];
  scaled_value_9 = *a1;
  scaled_index_9 = (int)(3 * cached_mesh_vertex_count);
  source_component_z_3 = a1[2];
  *(float *)&dword_140404A6C[scaled_index_9 + 177167567] = (float)((float)(source_component_y * a2[3]) + (float)(*a1 * *a2))
                                              + (float)(source_component_z_3 * a2[6]);
  *(float *)&dword_140404A6C[scaled_index_9 + 177167568] = (float)((float)(scaled_value_9 * a2[1]) + (float)(source_component_y * a2[4]))
                                              + (float)(source_component_z_3 * a2[7]);
  *(float *)&dword_140404A6C[scaled_index_9 + 177167569] = (float)((float)(scaled_value_8 * a2[2]) + (float)(source_component_y * a2[5]))
                                              + (float)(source_component_z_3 * a2[8]);
  dword_140404A6C[3 * mesh_vertex_count + 177249487] = 0;
  dword_140404A6C[3 * mesh_vertex_count + 177249488] = 0;
  dword_140404A6C[3 * mesh_vertex_count + 177249489] = 1065353216;
  scaled_index_10 = 3 * mesh_vertex_count;
  weighted_sum_18 = *(float *)&dword_140404A6C[scaled_index_10 + 177249487];
  weighted_sum_19 = *(float *)&dword_140404A6C[scaled_index_10 + 177249488];
  weighted_sum_20 = *(float *)&dword_140404A6C[scaled_index_10 + 177249489];
  *(float *)&dword_140404A6C[scaled_index_10 + 177249487] = (float)((float)(weighted_sum_19 * a2[3]) + (float)(weighted_sum_18 * *a2))
                                              + (float)(weighted_sum_20 * a2[6]);
  *(float *)&dword_140404A6C[scaled_index_10 + 177249488] = (float)((float)(weighted_sum_19 * a2[4]) + (float)(weighted_sum_18 * a2[1]))
                                              + (float)(weighted_sum_20 * a2[7]);
  *(float *)&dword_140404A6C[scaled_index_10 + 177249489] = (float)((float)(weighted_sum_19 * a2[5]) + (float)(weighted_sum_18 * a2[2]))
                                              + (float)(weighted_sum_20 * a2[8]);
  dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
  dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
  scaled_value_10 = *a1;
  source_component_y_2 = a1[1];
  scaled_index_11 = 3 * mesh_vertex_count;
  component_sum = component_delta_3 + a1[2];
  scaled_value_11 = *a1;
  *(float *)&dword_140404A6C[scaled_index_11 + 177167567] = (float)((float)(source_component_y_2 * a2[3]) + (float)(*a1 * *a2))
                                              + (float)(component_sum * a2[6]);
  *(float *)&dword_140404A6C[scaled_index_11 + 177167568] = (float)((float)(source_component_y_2 * a2[4]) + (float)(scaled_value_11 * a2[1]))
                                              + (float)(component_sum * a2[7]);
  *(float *)&dword_140404A6C[scaled_index_11 + 177167569] = (float)((float)(source_component_y_2 * a2[5]) + (float)(scaled_value_10 * a2[2]))
                                              + (float)(component_sum * a2[8]);
  dword_140404A6C[3 * mesh_vertex_count + 177249487] = 0;
  dword_140404A6C[3 * mesh_vertex_count + 177249488] = 0;
  dword_140404A6C[3 * mesh_vertex_count + 177249489] = -1082130432;
  result = 3 * mesh_vertex_count;
  weighted_sum_21 = *(float *)&dword_140404A6C[result + 177249487];
  weighted_sum_22 = *(float *)&dword_140404A6C[result + 177249488];
  weighted_sum_23 = *(float *)&dword_140404A6C[result + 177249489];
  *(float *)&dword_140404A6C[result + 177249487] = (float)((float)(weighted_sum_22 * a2[3]) + (float)(weighted_sum_21 * *a2))
                                                 + (float)(weighted_sum_23 * a2[6]);
  *(float *)&dword_140404A6C[result + 177249488] = (float)((float)(weighted_sum_21 * a2[1]) + (float)(weighted_sum_22 * a2[4]))
                                                 + (float)(weighted_sum_23 * a2[7]);
  *(float *)&dword_140404A6C[result + 177249489] = (float)((float)(weighted_sum_21 * a2[2]) + (float)(weighted_sum_22 * a2[5]))
                                                 + (float)(weighted_sum_23 * a2[8]);
  dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
  dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
  LODWORD(result) = mesh_triangle_count;
  integer_sum = cached_mesh_vertex_count_2 + 32;
  integer_sum_2 = cached_mesh_vertex_count_2 + 33;
  record_byte_offset = cached_mesh_vertex_count_2 + 1;
  remaining_count_3 = 4;
  do
  {
    masked_bits = cached_mesh_vertex_count_2 + (((_BYTE)record_byte_offset - (_BYTE)cached_mesh_vertex_count_2) & 0xF);
    dword_140404A6C[3 * (_DWORD)result + 177495248] = record_byte_offset - 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 15;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits + 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset - 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset - 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = masked_bits + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 15;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_2;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 16;
    masked_bits_2 = cached_mesh_vertex_count_2 + ((1 - (_BYTE)cached_mesh_vertex_count_2 + (_BYTE)record_byte_offset) & 0xF);
    integer_sum_3 = masked_bits_2 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_2 + 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_2 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_2;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_2;
    masked_bits_3 = cached_mesh_vertex_count_2 + ((2 - (_BYTE)cached_mesh_vertex_count_2 + (_BYTE)record_byte_offset) & 0xF);
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_3;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 16;
    integer_sum_4 = masked_bits_3 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_2;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 17;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_3 + 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_3 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_3;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 1;
    integer_sum_5 = record_byte_offset + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_3;
    masked_bits_4 = cached_mesh_vertex_count_2 + ((3 - (_BYTE)cached_mesh_vertex_count_2 + (_BYTE)record_byte_offset) & 0xF);
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_4;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 17;
    integer_sum_6 = record_byte_offset + 18;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_2;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 18;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_4 + 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_4 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_4;
    record_byte_offset += 4;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_5;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_4;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = masked_bits_4 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = integer_sum_6;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_2;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    result = ++mesh_triangle_count;
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  return result;
}

//----- (00000001400066B0) ----------------------------------------------------
__int64            sub_1400066B0(float *a1, float *a2, float a3, float a4, float a5, int a6)
{
  unsigned int cached_mesh_vertex_count;
  int running_total;
  unsigned int cached_mesh_vertex_count_2;
  int record_byte_offset;
  unsigned int masked_bits;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float component_sum;
  float weighted_sum;
  float component_sum_2;
  __int64 scaled_index;
  unsigned int integer_sum;
  unsigned int masked_bits_2;
  float component_delta_4;
  float component_delta_5;
  float component_delta_6;
  float component_sum_3;
  float weighted_sum_2;
  float component_sum_4;
  __int64 scaled_index_2;
  unsigned int integer_sum_2;
  unsigned int masked_bits_3;
  float component_delta_7;
  float component_delta_8;
  float component_delta_9;
  float weighted_sum_3;
  float component_sum_5;
  float component_sum_6;
  __int64 scaled_index_3;
  unsigned int integer_sum_3;
  unsigned int masked_bits_4;
  float component_delta_10;
  float component_delta_11;
  float component_delta_12;
  float component_sum_7;
  float weighted_sum_4;
  float component_sum_8;
  __int64 scaled_index_4;
  int *state_address;
  unsigned int cached_mesh_triangle_count;
  unsigned int scaled_index_5;
  unsigned int scaled_index_6;
  unsigned int scaled_index_7;
  unsigned int scaled_index_8;
  unsigned int scaled_index_9;
  unsigned int table_value;
  unsigned int table_value_2;
  unsigned int table_value_3;
  unsigned int table_value_4;
  unsigned int table_value_5;
  unsigned int table_value_6;
  unsigned int table_value_7;
  unsigned int table_value_8;
  unsigned int table_value_9;
  unsigned int table_value_10;
  unsigned int table_value_11;
  unsigned int table_value_12;
  unsigned int table_value_13;
  __int64 result;

  cached_mesh_vertex_count = mesh_vertex_count;
  running_total = 2;
  cached_mesh_vertex_count_2 = mesh_vertex_count;
  record_byte_offset = 2;
  do
  {
    masked_bits = ((_BYTE)record_byte_offset - 2) & 3;
    if ( (((_BYTE)record_byte_offset - 2) & 3) == 0 || masked_bits == 3 )
      component_delta = -a3;
    else
      component_delta = a3;
    if ( record_byte_offset - 2 >= 4 )
      component_delta_2 = a4;
    else
      component_delta_2 = -a4;
    if ( masked_bits < 2 )
      component_delta_3 = -a5;
    else
      component_delta_3 = a5;
    component_sum = component_delta_2 + a1[1];
    weighted_sum = component_delta + *a1;
    component_sum_2 = component_delta_3 + a1[2];
    scaled_index = (int)(3 * cached_mesh_vertex_count);
    *(float *)&dword_140404A6C[scaled_index + 177167567] = (float)((float)(component_sum * a2[3]) + (float)(weighted_sum * *a2))
                                                + (float)(component_sum_2 * a2[6]);
    *(float *)&dword_140404A6C[scaled_index + 177167568] = (float)((float)(component_sum * a2[4]) + (float)(weighted_sum * a2[1]))
                                                + (float)(component_sum_2 * a2[7]);
    *(float *)&dword_140404A6C[scaled_index + 177167569] = (float)((float)(component_sum * a2[5]) + (float)(weighted_sum * a2[2]))
                                                + (float)(component_sum_2 * a2[8]);
    integer_sum = ++mesh_vertex_count;
    masked_bits_2 = ((_BYTE)record_byte_offset - 1) & 3;
    if ( (((_BYTE)record_byte_offset - 1) & 3) == 0 || masked_bits_2 == 3 )
      component_delta_4 = -a3;
    else
      component_delta_4 = a3;
    if ( record_byte_offset - 1 >= 4 )
      component_delta_5 = a4;
    else
      component_delta_5 = -a4;
    if ( masked_bits_2 < 2 )
      component_delta_6 = -a5;
    else
      component_delta_6 = a5;
    component_sum_3 = component_delta_5 + a1[1];
    weighted_sum_2 = component_delta_4 + *a1;
    component_sum_4 = component_delta_6 + a1[2];
    scaled_index_2 = (int)(3 * integer_sum);
    *(float *)&dword_140404A6C[scaled_index_2 + 177167567] = (float)((float)(component_sum_3 * a2[3]) + (float)(weighted_sum_2 * *a2))
                                                + (float)(component_sum_4 * a2[6]);
    *(float *)&dword_140404A6C[scaled_index_2 + 177167568] = (float)((float)(component_sum_3 * a2[4]) + (float)(weighted_sum_2 * a2[1]))
                                                + (float)(component_sum_4 * a2[7]);
    *(float *)&dword_140404A6C[scaled_index_2 + 177167569] = (float)((float)(component_sum_3 * a2[5]) + (float)(weighted_sum_2 * a2[2]))
                                                + (float)(component_sum_4 * a2[8]);
    integer_sum_2 = ++mesh_vertex_count;
    masked_bits_3 = record_byte_offset & 3;
    if ( (record_byte_offset & 3) == 0 || masked_bits_3 == 3 )
      component_delta_7 = -a3;
    else
      component_delta_7 = a3;
    if ( record_byte_offset >= 4 )
      component_delta_8 = a4;
    else
      component_delta_8 = -a4;
    if ( masked_bits_3 < 2 )
      component_delta_9 = -a5;
    else
      component_delta_9 = a5;
    weighted_sum_3 = component_delta_7 + *a1;
    component_sum_5 = component_delta_8 + a1[1];
    component_sum_6 = component_delta_9 + a1[2];
    scaled_index_3 = (int)(3 * integer_sum_2);
    *(float *)&dword_140404A6C[scaled_index_3 + 177167567] = (float)((float)(component_sum_5 * a2[3]) + (float)(weighted_sum_3 * *a2))
                                                + (float)(component_sum_6 * a2[6]);
    *(float *)&dword_140404A6C[scaled_index_3 + 177167568] = (float)((float)(weighted_sum_3 * a2[1]) + (float)(component_sum_5 * a2[4]))
                                                + (float)(component_sum_6 * a2[7]);
    *(float *)&dword_140404A6C[scaled_index_3 + 177167569] = (float)((float)(weighted_sum_3 * a2[2]) + (float)(component_sum_5 * a2[5]))
                                                + (float)(component_sum_6 * a2[8]);
    integer_sum_3 = ++mesh_vertex_count;
    masked_bits_4 = ((_BYTE)record_byte_offset + 1) & 3;
    if ( (((_BYTE)record_byte_offset + 1) & 3) == 0 || masked_bits_4 == 3 )
      component_delta_10 = -a3;
    else
      component_delta_10 = a3;
    if ( record_byte_offset + 1 >= 4 )
      component_delta_11 = a4;
    else
      component_delta_11 = -a4;
    if ( masked_bits_4 < 2 )
      component_delta_12 = -a5;
    else
      component_delta_12 = a5;
    component_sum_7 = component_delta_11 + a1[1];
    weighted_sum_4 = component_delta_10 + *a1;
    component_sum_8 = component_delta_12 + a1[2];
    record_byte_offset += 4;
    scaled_index_4 = (int)(3 * integer_sum_3);
    *(float *)&dword_140404A6C[scaled_index_4 + 177167567] = (float)((float)(component_sum_7 * a2[3]) + (float)(weighted_sum_4 * *a2))
                                                + (float)(component_sum_8 * a2[6]);
    *(float *)&dword_140404A6C[scaled_index_4 + 177167568] = (float)((float)(component_sum_7 * a2[4]) + (float)(weighted_sum_4 * a2[1]))
                                                + (float)(component_sum_8 * a2[7]);
    *(float *)&dword_140404A6C[scaled_index_4 + 177167569] = (float)((float)(component_sum_7 * a2[5]) + (float)(weighted_sum_4 * a2[2]))
                                                + (float)(component_sum_8 * a2[8]);
    cached_mesh_vertex_count = ++mesh_vertex_count;
  }
  while ( record_byte_offset - 2 < 8 );
  state_address = &dword_1402B36D0;
  cached_mesh_triangle_count = mesh_triangle_count;
  do
  {
    if ( (running_total - 2) >> 1 != a6 )
    {
      scaled_index_5 = cached_mesh_vertex_count_2 + *(state_address - 4);
      scaled_index_6 = cached_mesh_vertex_count_2 + *(state_address - 3);
      scaled_index_7 = cached_mesh_vertex_count_2 + *(state_address - 2);
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = scaled_index_5;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = scaled_index_6;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = scaled_index_7;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      ++mesh_triangle_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = scaled_index_5;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = scaled_index_7;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = scaled_index_6;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      cached_mesh_triangle_count = ++mesh_triangle_count;
    }
    if ( (running_total - 1) >> 1 != a6 )
    {
      scaled_index_8 = cached_mesh_vertex_count_2 + *(state_address - 1);
      scaled_index_9 = cached_mesh_vertex_count_2 + *state_address;
      table_value = cached_mesh_vertex_count_2 + state_address[1];
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = scaled_index_8;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = scaled_index_9;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      ++mesh_triangle_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = scaled_index_8;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = scaled_index_9;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      cached_mesh_triangle_count = ++mesh_triangle_count;
    }
    if ( running_total >> 1 != a6 )
    {
      table_value_2 = cached_mesh_vertex_count_2 + state_address[2];
      table_value_3 = cached_mesh_vertex_count_2 + state_address[3];
      table_value_4 = cached_mesh_vertex_count_2 + state_address[4];
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = table_value_2;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_3;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_4;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      ++mesh_triangle_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = table_value_2;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_4;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_3;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      cached_mesh_triangle_count = ++mesh_triangle_count;
    }
    if ( (running_total + 1) >> 1 != a6 )
    {
      table_value_5 = cached_mesh_vertex_count_2 + state_address[5];
      table_value_6 = cached_mesh_vertex_count_2 + state_address[6];
      table_value_7 = cached_mesh_vertex_count_2 + state_address[7];
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = table_value_5;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_6;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_7;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      ++mesh_triangle_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = table_value_5;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_7;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_6;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      cached_mesh_triangle_count = ++mesh_triangle_count;
    }
    if ( (running_total + 2) >> 1 != a6 )
    {
      table_value_8 = cached_mesh_vertex_count_2 + state_address[8];
      table_value_9 = cached_mesh_vertex_count_2 + state_address[9];
      table_value_10 = cached_mesh_vertex_count_2 + state_address[10];
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = table_value_8;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_9;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_10;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      ++mesh_triangle_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = table_value_8;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_10;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_9;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      cached_mesh_triangle_count = ++mesh_triangle_count;
    }
    if ( (running_total + 3) >> 1 != a6 )
    {
      table_value_11 = cached_mesh_vertex_count_2 + state_address[11];
      table_value_12 = cached_mesh_vertex_count_2 + state_address[12];
      table_value_13 = cached_mesh_vertex_count_2 + state_address[13];
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = table_value_11;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_12;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_13;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      ++mesh_triangle_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = table_value_11;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_13;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_12;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      cached_mesh_triangle_count = ++mesh_triangle_count;
    }
    running_total += 6;
    state_address += 18;
    result = (unsigned int)(running_total - 2);
  }
  while ( (int)result < 12 );
  return result;
}

//----- (0000000140007490) ----------------------------------------------------
__int64            sub_140007490(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        float a6,
        float a7)
{
  __int64 input_value;
  __int64 result;
  __int64 scaled_index;
  __int64 scaled_index_2;

  input_value = a1;
  result = sub_1400A4620(a1, a6 / a7);
  if ( (_DWORD)result != -1 )
  {
    scaled_index = 5LL * (int)result;
    scaled_index_2 = 188896 * input_value + 8 * scaled_index;
    *(float *)((char *)&g_1A8E3DA9C + scaled_index_2) = a6;
    *(float *)((char *)&g_1A8E3DAA0 + scaled_index_2) = a7;
    *(unsigned int *)((char *)&g_1A8E3DA7C + scaled_index_2) = 1;
    *(unsigned int *)((char *)&g_1A8E3DA80 + scaled_index_2) = a2;
    *(unsigned int *)((char *)&g_1A8E3DA84 + scaled_index_2) = a3;
    *(unsigned int *)((char *)&g_1A8E3DA88 + scaled_index_2) = a4;
    *(unsigned int *)((char *)&g_1A8E3DA8C + scaled_index_2) = a5;
    return a5;
  }
  return result;
}

//----- (0000000140007550) ----------------------------------------------------
__int64            sub_140007550(float *a1, float a2, float a3, float a4)
{
  unsigned int cached_mesh_vertex_count;
  __int64 iteration_count;
  float component_delta;
  unsigned int cached_mesh_vertex_count_2;
  int running_total;
  unsigned int masked_bits;
  float saved_component_delta;
  float product_difference;
  float component_delta_2;
  unsigned int float_word;
  unsigned int float_word_2;
  __int64 scaled_index;
  int integer_sum;
  unsigned int integer_sum_2;
  unsigned int masked_bits_2;
  float saved_component_delta_2;
  float product_difference_2;
  float component_delta_3;
  unsigned int float_word_3;
  unsigned int float_word_4;
  __int64 scaled_index_2;
  int integer_sum_3;
  unsigned int integer_sum_4;
  unsigned int masked_bits_3;
  float saved_component_delta_3;
  float product_difference_3;
  float component_delta_4;
  unsigned int float_word_5;
  unsigned int float_word_6;
  __int64 scaled_index_3;
  int integer_sum_5;
  unsigned int integer_sum_6;
  unsigned int masked_bits_4;
  float saved_component_delta_4;
  float product_difference_4;
  float component_delta_5;
  unsigned int float_word_7;
  unsigned int float_word_8;
  __int64 scaled_index_4;
  unsigned int integer_sum_7;
  float saved_component_delta_5;
  float product_difference_5;
  float component_delta_6;
  unsigned int float_word_9;
  unsigned int float_word_10;
  __int64 scaled_index_5;
  unsigned int state_word;
  int *record_byte_offset;
  __int64 result;

  cached_mesh_vertex_count = mesh_vertex_count;
  iteration_count = 0;
  component_delta = -a2;
  cached_mesh_vertex_count_2 = mesh_vertex_count;
  running_total = 0;
  do
  {
    masked_bits = running_total & 3;
    if ( (running_total & 3) == 0 || masked_bits == 3 )
      saved_component_delta = component_delta;
    else
      saved_component_delta = a2;
    product_difference = a3;
    if ( running_total < 4 )
      product_difference = -a3;
    if ( masked_bits < 2 )
      component_delta_2 = -a4;
    else
      component_delta_2 = a4;
    if ( running_total >= 8 )
    {
      saved_component_delta = 0.0;
      product_difference = a3 * -1.25;
      if ( running_total == 8 )
        component_delta_2 = -a4;
      else
        component_delta_2 = a4;
    }
    *(float *)&float_word = product_difference + a1[1];
    *(float *)&float_word_2 = component_delta_2 + a1[2];
    scaled_index = (int)(3 * cached_mesh_vertex_count);
    integer_sum = running_total + 1;
    *(float *)&dword_140404A6C[scaled_index + 177167567] = saved_component_delta + *a1;
    dword_140404A6C[scaled_index + 177167568] = float_word;
    dword_140404A6C[scaled_index + 177167569] = float_word_2;
    integer_sum_2 = ++mesh_vertex_count;
    masked_bits_2 = ((_BYTE)running_total + 1) & 3;
    if ( (((_BYTE)running_total + 1) & 3) == 0 || masked_bits_2 == 3 )
      saved_component_delta_2 = component_delta;
    else
      saved_component_delta_2 = a2;
    product_difference_2 = a3;
    if ( integer_sum < 4 )
      product_difference_2 = -a3;
    if ( masked_bits_2 < 2 )
      component_delta_3 = -a4;
    else
      component_delta_3 = a4;
    if ( integer_sum >= 8 )
    {
      saved_component_delta_2 = 0.0;
      product_difference_2 = a3 * -1.25;
      if ( running_total == 7 )
        component_delta_3 = -a4;
      else
        component_delta_3 = a4;
    }
    *(float *)&float_word_3 = product_difference_2 + a1[1];
    *(float *)&float_word_4 = component_delta_3 + a1[2];
    scaled_index_2 = (int)(3 * integer_sum_2);
    integer_sum_3 = running_total + 2;
    *(float *)&dword_140404A6C[scaled_index_2 + 177167567] = saved_component_delta_2 + *a1;
    dword_140404A6C[scaled_index_2 + 177167568] = float_word_3;
    dword_140404A6C[scaled_index_2 + 177167569] = float_word_4;
    integer_sum_4 = ++mesh_vertex_count;
    masked_bits_3 = ((_BYTE)running_total + 2) & 3;
    if ( (((_BYTE)running_total + 2) & 3) == 0 || masked_bits_3 == 3 )
      saved_component_delta_3 = component_delta;
    else
      saved_component_delta_3 = a2;
    product_difference_3 = a3;
    if ( integer_sum_3 < 4 )
      product_difference_3 = -a3;
    if ( masked_bits_3 < 2 )
      component_delta_4 = -a4;
    else
      component_delta_4 = a4;
    if ( integer_sum_3 >= 8 )
    {
      saved_component_delta_3 = 0.0;
      product_difference_3 = a3 * -1.25;
      if ( running_total == 6 )
        component_delta_4 = -a4;
      else
        component_delta_4 = a4;
    }
    *(float *)&float_word_5 = product_difference_3 + a1[1];
    *(float *)&float_word_6 = component_delta_4 + a1[2];
    scaled_index_3 = (int)(3 * integer_sum_4);
    integer_sum_5 = running_total + 3;
    *(float *)&dword_140404A6C[scaled_index_3 + 177167567] = saved_component_delta_3 + *a1;
    dword_140404A6C[scaled_index_3 + 177167568] = float_word_5;
    dword_140404A6C[scaled_index_3 + 177167569] = float_word_6;
    integer_sum_6 = ++mesh_vertex_count;
    masked_bits_4 = ((_BYTE)running_total + 3) & 3;
    if ( (((_BYTE)running_total + 3) & 3) == 0 || masked_bits_4 == 3 )
      saved_component_delta_4 = component_delta;
    else
      saved_component_delta_4 = a2;
    product_difference_4 = a3;
    if ( integer_sum_5 < 4 )
      product_difference_4 = -a3;
    if ( masked_bits_4 < 2 )
      component_delta_5 = -a4;
    else
      component_delta_5 = a4;
    if ( integer_sum_5 >= 8 )
    {
      saved_component_delta_4 = 0.0;
      product_difference_4 = a3 * -1.25;
      if ( running_total == 5 )
        component_delta_5 = -a4;
      else
        component_delta_5 = a4;
    }
    *(float *)&float_word_7 = product_difference_4 + a1[1];
    *(float *)&float_word_8 = component_delta_5 + a1[2];
    scaled_index_4 = (int)(3 * integer_sum_6);
    *(float *)&dword_140404A6C[scaled_index_4 + 177167567] = saved_component_delta_4 + *a1;
    dword_140404A6C[scaled_index_4 + 177167568] = float_word_7;
    dword_140404A6C[scaled_index_4 + 177167569] = float_word_8;
    integer_sum_7 = ++mesh_vertex_count;
    if ( (running_total & 3) == 0 || masked_bits == 3 )
      saved_component_delta_5 = component_delta;
    else
      saved_component_delta_5 = a2;
    product_difference_5 = a3;
    if ( running_total + 4 < 4 )
      product_difference_5 = -a3;
    if ( masked_bits < 2 )
      component_delta_6 = -a4;
    else
      component_delta_6 = a4;
    if ( running_total + 4 >= 8 )
    {
      saved_component_delta_5 = 0.0;
      product_difference_5 = a3 * -1.25;
      if ( running_total == 4 )
        component_delta_6 = -a4;
      else
        component_delta_6 = a4;
    }
    *(float *)&float_word_9 = product_difference_5 + a1[1];
    *(float *)&float_word_10 = component_delta_6 + a1[2];
    running_total += 5;
    scaled_index_5 = (int)(3 * integer_sum_7);
    *(float *)&dword_140404A6C[scaled_index_5 + 177167567] = saved_component_delta_5 + *a1;
    dword_140404A6C[scaled_index_5 + 177167568] = float_word_9;
    dword_140404A6C[scaled_index_5 + 177167569] = float_word_10;
    cached_mesh_vertex_count = ++mesh_vertex_count;
  }
  while ( running_total < 10 );
  state_word = g_16AC43DB0;
  record_byte_offset = dword_1402B3664;
  do
  {
    if ( ((iteration_count - 2) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && iteration_count != 3 )
    {
      dword_140404A6C[4 * state_word + 178322642] = cached_mesh_vertex_count_2 + *(record_byte_offset - 1);
      dword_140404A6C[4 * g_16AC43DB0 + 178322643] = cached_mesh_vertex_count_2 + *record_byte_offset;
      dword_140404A6C[4 * g_16AC43DB0 + 178322644] = cached_mesh_vertex_count_2 + record_byte_offset[1];
      dword_140404A6C[4 * g_16AC43DB0 + 178322645] = cached_mesh_vertex_count_2 + record_byte_offset[2];
      state_word = ++g_16AC43DB0;
    }
    ++iteration_count;
    record_byte_offset += 4;
  }
  while ( (__int64)record_byte_offset < (__int64)&dword_1402B36C4 );
  dword_140404A6C[4 * state_word + 178322642] = cached_mesh_vertex_count_2 + 3;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = cached_mesh_vertex_count_2 + 9;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = cached_mesh_vertex_count_2 + 8;
  dword_140404A6C[4 * g_16AC43DB0++ + 178322645] = cached_mesh_vertex_count_2;
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = cached_mesh_vertex_count_2 + 9;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = cached_mesh_vertex_count_2 + 2;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = cached_mesh_vertex_count_2 + 1;
  dword_140404A6C[4 * g_16AC43DB0++ + 178322645] = cached_mesh_vertex_count_2 + 8;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_2 + 7;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + 9;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + 3;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_2 + 7;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + 6;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + 9;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_2 + 6;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + 2;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + 9;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_2 + 5;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + 8;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + 1;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_2 + 5;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2 + 4;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + 8;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_2 + 4;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_2 + 8;
  result = (int)mesh_triangle_count;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  ++mesh_triangle_count;
  return result;
}

//----- (0000000140007EA0) ----------------------------------------------------
unsigned int *           sub_140007EA0(int a1)
{
  unsigned int cached_game_connected;
  __int64 remaining_count;
  unsigned int *result;
  unsigned int *state_address;
  __int64 remaining_count_2;
  unsigned int *buffer_cursor;
  __int64 scaled_index;
  __int64 scaled_index_2;
  int iteration_count;
  int table_value;
  unsigned __int64 table_value_2;
  __int64 integer_difference;

  cached_game_connected = game_connected;
  remaining_count = 8;
  result = &g_1832A4DDC;
  integer_difference = 8;
  state_address = &dword_140404A6C[7166 * a1 + 280658140];
  do
  {
    remaining_count_2 = (int)*(state_address - 1);
    if ( remaining_count_2 > 0 )
    {
      buffer_cursor = state_address;
      do
      {
        scaled_index = (int)*buffer_cursor;
        scaled_index_2 = 1760 * scaled_index;
        if ( (int)dword_140404A6C[1760 * scaled_index + 278845906] > 0 )
        {
          result = (unsigned int *)(int)dword_140404A6C[scaled_index_2 + 278845907];
          iteration_count = 0;
          dword_140404A6C[1760 * (_QWORD)result + 278845900] = 0;
          table_value = dword_140404A6C[scaled_index_2 + 278845906];
          table_value_2 = (int)dword_140404A6C[scaled_index_2 + 278845907];
          if ( table_value > 0 )
          {
            result = &dword_140404A6C[1760 * scaled_index + 278845907];
            do
            {
              if ( *result == (_DWORD)table_value_2 )
              {
                dword_140404A6C[scaled_index_2 + 278845906] = table_value - 1;
                *result = dword_140404A6C[1760 * scaled_index + 278845906 + table_value];
                dword_140404A6C[1760 * table_value_2 + 278845903] = -1;
                if ( cached_game_connected )
                {
                  if ( table_value_2 <= 0x3FF )
                    ++dword_140404A6C[table_value_2 + 280648157];
                  if ( (unsigned int)scaled_index <= 0x3FF )
                    ++dword_140404A6C[scaled_index + 280648157];
                }
              }
              else
              {
                ++iteration_count;
                ++result;
              }
              table_value = dword_140404A6C[scaled_index_2 + 278845906];
            }
            while ( iteration_count < table_value );
          }
        }
        ++buffer_cursor;
        dword_140404A6C[scaled_index_2 + 278845900] = 0;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      remaining_count = integer_difference;
    }
    state_address += 10;
    integer_difference = --remaining_count;
  }
  while ( remaining_count );
  return result;
}

//----- (00000001400090C0) ----------------------------------------------------
__int64            sub_1400090C0(int a1)
{
  __int64 player_record_offset;
  unsigned int rand_result;
  __int64 scaled_index;
  __int64 masked_bits;
  __int64 xor_value;
  signed int table_value;
  __int64 scaled_index_2;
  int comparison_result;
  int rand_result_2;
  __int64 scaled_index_3;
  unsigned int table_value_2;
  signed int table_value_3;
  signed int table_value_4;
  int table_value_5;
  bool comparison_result_2;
  int iteration_count;
  __int64 scaled_index_4;
  unsigned int table_value_6;
  __int64 result;

  player_record_offset = 3597LL * a1;
  rand_result = 2;
  scaled_index = player_record_offset * 4 + 32LL * (int)dword_140404A6C[player_record_offset + 71859146];
  masked_bits = *(int *)((char *)&g_1516239A8 + scaled_index);
  xor_value = (int)dword_140404A6C[396 * masked_bits + 225426056 + (*(int *)((char *)&g_1516239AC + scaled_index) ^ 1LL)];
  table_value = dword_140404A6C[player_record_offset + 71859660];
  scaled_index_2 = 34 * xor_value;
  comparison_result = masked_bits == dword_140404A6C[34 * xor_value + 225391237];
  if ( (_DWORD)masked_bits == dword_140404A6C[34 * xor_value + 225391238] )
    comparison_result = 2;
  if ( (_DWORD)masked_bits == dword_140404A6C[scaled_index_2 + 225391239] )
    comparison_result = 3;
  if ( dword_140404A6C[scaled_index_2 + 225391230] == table_value && dword_140404A6C[scaled_index_2 + 225391232] == dword_140404A6C[player_record_offset + 71859661] )
  {
    if ( (int)g_175FD145C <= 0 )
      rand_result_2 = 0;
    else
      rand_result_2 = rand() % (signed int)g_175FD145C;
    scaled_index_3 = 34LL * rand_result_2;
    table_value = dword_140404A6C[scaled_index_3 + 225391230];
    table_value_2 = dword_140404A6C[scaled_index_3 + 225391232];
    dword_140404A6C[player_record_offset + 71859660] = table_value;
    dword_140404A6C[player_record_offset + 71859661] = table_value_2;
  }
  table_value_3 = dword_140404A6C[scaled_index_2 + 225391232];
  table_value_4 = dword_140404A6C[player_record_offset + 71859661];
  table_value_5 = dword_140404A6C[scaled_index_2 + 225391230];
  if ( table_value_3 == table_value_4 )
  {
    if ( table_value_5 < table_value )
      rand_result = 0;
  }
  else
  {
    comparison_result_2 = table_value_5 <= (signed int)g_175FD1684;
    if ( table_value_5 < (int)g_175FD1684 )
    {
      if ( comparison_result )
      {
        rand_result = 0;
        goto LABEL_23;
      }
      comparison_result_2 = table_value_5 <= (signed int)g_175FD1684;
    }
    if ( comparison_result_2 || comparison_result == 2 )
    {
      rand_result = 3;
      if ( table_value_3 < table_value_4 )
        rand_result = 1;
    }
  }
LABEL_23:
  iteration_count = 0;
  scaled_index_4 = 34 * xor_value;
  do
  {
    table_value_6 = dword_140404A6C[scaled_index_4 + 225391236 + rand_result];
    if ( table_value_6 != (_DWORD)masked_bits && table_value_6 != -1 )
      break;
    ++iteration_count;
    rand_result = rand() & 3;
  }
  while ( iteration_count < 512 );
  dword_140404A6C[8 * (int)dword_140404A6C[player_record_offset + 71859146] + 71859159 + player_record_offset] = dword_140404A6C[scaled_index_4 + 225391236 + rand_result];
  dword_140404A6C[8 * (int)dword_140404A6C[player_record_offset + 71859146] + 71859160 + player_record_offset] = rand_result >= 2;
  dword_140404A6C[8 * (int)dword_140404A6C[player_record_offset + 71859146] + 71859162 + player_record_offset] = rand() & 1;
  dword_140404A6C[8 * (int)dword_140404A6C[player_record_offset + 71859146] + 71859163 + player_record_offset] = 0;
  if ( rand_result == (((_BYTE)comparison_result + 1) & 3) )
    dword_140404A6C[8 * (int)dword_140404A6C[player_record_offset + 71859146] + 71859163 + player_record_offset] = -1;
  result = ((_BYTE)comparison_result - 1) & 3;
  if ( rand_result == (_DWORD)result )
  {
    result = player_record_offset * 4 + 32LL * (int)dword_140404A6C[player_record_offset + 71859146];
    *(unsigned int *)((char *)&g_1516239D8 + result) = 1;
  }
  return result;
}

//----- (00000001400096B0) ----------------------------------------------------
__int64            sub_1400096B0(int a1, int a2, int a3, unsigned int a4)
{
  __int64 packed_word_bits;
  __int64 input_value;
  __int64 input_value_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  signed int scaled_index_3;
  signed int table_value;
  signed int comparison_operand;
  signed int state_word;
  signed int comparison_operand_2;
  __int64 lookup_index;
  __int64 scaled_index_4;
  signed int table_value_2;
  signed int table_value_3;
  int saved_packed_word_bits;
  __m128i loaded_vector;
  int iteration_count;
  __int64 element_index;
  __int64 scaled_index_5;
  __int64 table_value_4;
  __int64 table_value_5;
  int record_byte_offset;
  __int64 table_value_6;
  __int64 scaled_index_6;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400096B0[16528];
#define si128 (*(__m128i (*))(void *)(sr_frame_1400096B0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_DWORD (*)[4096])(void *)(sr_frame_1400096B0 + 16)) /* [rsp+10h] */
#define unused_frame_slot_16400 (*(__int64 (*))(void *)(sr_frame_1400096B0 + 16400)) /* [rsp+4010h] */
#define frame_word_at_16512 (*(signed int (*))(void *)(sr_frame_1400096B0 + 16512)) /* [rsp+4080h] */
#define frame_word_at_16520 (*(signed int (*))(void *)(sr_frame_1400096B0 + 16520)) /* [rsp+4088h] */

  LODWORD(packed_word_bits) = a3;
  input_value = a2;
  input_value_2 = a1;
  crt_memset((void *)(uintptr_t)(scratch_buffer), 0, 0x4000u);
  scaled_index = 3597 * input_value_2;
  scaled_index_2 = 396 * input_value;
  *(_QWORD *)&dword_140404A6C[3597 * input_value_2 + 71859146] = 0;
  if ( a4 )
    scaled_index_3 = dword_140404A6C[scaled_index_2 + 225426056];
  else
    scaled_index_3 = dword_140404A6C[scaled_index_2 + 225426057];
  dword_140404A6C[scaled_index + 71859663] = scaled_index_3;
  dword_140404A6C[scaled_index + 71859151] = input_value;
  dword_140404A6C[8 * (int)dword_140404A6C[scaled_index + 71859147] + 71859152 + scaled_index] = packed_word_bits;
  dword_140404A6C[8 * (int)dword_140404A6C[scaled_index + 71859147] + 71859153 + scaled_index] = a4;
  table_value = dword_140404A6C[scaled_index + 71859147] + 1;
  dword_140404A6C[scaled_index + 71859147] = table_value;
  if ( table_value < 32 )
  {
    comparison_operand = frame_word_at_16520;
    state_word = g_175FD517C;
    comparison_operand_2 = frame_word_at_16512;
    do
    {
      lookup_index = scaled_index_3;
      scaled_index_4 = 34LL * scaled_index_3;
      table_value_2 = dword_140404A6C[scaled_index_4 + 225391230];
      if ( table_value_2 == comparison_operand_2 && dword_140404A6C[scaled_index_4 + 225391232] == comparison_operand )
        break;
      table_value_3 = dword_140404A6C[scaled_index_4 + 225391232];
      saved_packed_word_bits = packed_word_bits;
      if ( comparison_operand == table_value_3 )
      {
        if ( comparison_operand_2 <= table_value_2 )
        {
          SR_VEC_LANES(128, si128, i32)[0] = 2;
          SR_VEC_LANES(128, si128, i32)[3] = 0;
        }
        else
        {
          SR_VEC_LANES(128, si128, i32)[0] = 0;
          SR_VEC_LANES(128, si128, i32)[3] = 2;
        }
        *(__int64 *)((char *)SR_VEC_LANES(128, si128, i64) + 4) = 0x300000001LL;
      }
      else if ( table_value_2 >= state_word )
      {
        if ( table_value_2 <= state_word )
        {
          loaded_vector = comparison_operand <= table_value_3
              ? _mm_load_si128((     __m128i *)&xmmword_140278EF0)
              : _mm_load_si128((     __m128i *)&xmmword_140278F40);
          si128 = loaded_vector;
        }
        else
        {
          si128 = _mm_load_si128((     __m128i *)&xmmword_140278DF0);
        }
      }
      else
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140278F20);
      }
      iteration_count = 0;
      element_index = 0;
      scaled_index_5 = 34 * lookup_index;
      do
      {
        table_value_4 = SR_VEC_LANES(128, si128, i32)[element_index];
        if ( dword_140404A6C[table_value_4 + 225391236 + scaled_index_5] != -1 && !scratch_buffer[4 * lookup_index + table_value_4] && (_DWORD)table_value_4 != (((_BYTE)packed_word_bits - 2) & 3) )
          break;
        ++iteration_count;
        ++element_index;
      }
      while ( iteration_count < 3 );
      packed_word_bits = SR_VEC_LANES(128, si128, i32)[element_index];
      table_value_5 = (int)dword_140404A6C[packed_word_bits + 225391236 + scaled_index_5];
      if ( (_DWORD)table_value_5 == -1 )
        break;
      scratch_buffer[4 * lookup_index + packed_word_bits] = 1;
      record_byte_offset = packed_word_bits - saved_packed_word_bits;
      dword_140404A6C[8 * table_value + 71859151 + scaled_index] = table_value_5;
      dword_140404A6C[8 * (int)dword_140404A6C[scaled_index + 71859147] + 71859152 + scaled_index] = packed_word_bits;
      if ( (int)packed_word_bits - saved_packed_word_bits >= -1 )
      {
        if ( record_byte_offset > 1 )
          record_byte_offset -= 4;
      }
      else
      {
        record_byte_offset += 4;
      }
      dword_140404A6C[8 * (int)dword_140404A6C[scaled_index + 71859147] + 71859155 + scaled_index] = 0;
      table_value_6 = (int)dword_140404A6C[scaled_index + 71859147];
      if ( (int)table_value_6 > 0 )
      {
        if ( record_byte_offset == -1 )
        {
          dword_140404A6C[8 * table_value_6 + 71859147 + scaled_index] = -1;
        }
        else if ( record_byte_offset == 1 )
        {
          dword_140404A6C[8 * table_value_6 + 71859147 + scaled_index] = 1;
        }
      }
      scaled_index_6 = scaled_index * 4 + 32LL * (int)dword_140404A6C[scaled_index + 71859147];
      if ( (int)packed_word_bits >= 2 )
      {
        *(unsigned int *)((char *)&g_1516239B0 + scaled_index_6) = 1;
        table_value = dword_140404A6C[scaled_index + 71859147] + 1;
        scaled_index_3 = dword_140404A6C[396 * table_value_5 + 225426056];
      }
      else
      {
        *(unsigned int *)((char *)&g_1516239B0 + scaled_index_6) = 0;
        table_value = dword_140404A6C[scaled_index + 71859147] + 1;
        scaled_index_3 = dword_140404A6C[396 * table_value_5 + 225426057];
      }
      dword_140404A6C[scaled_index + 71859147] = table_value;
    }
    while ( table_value < 32 );
  }
  return 0; /* no result: rax is loop residue at 0x1400099D6 */
}
#undef si128
#undef scratch_buffer
#undef unused_frame_slot_16400
#undef frame_word_at_16512
#undef frame_word_at_16520

//----- (000000014000B650) ----------------------------------------------------
void            sub_14000B650(signed int a1, int a2)
{
  __int64 record_word_offset;
  int table_value;
  int integer_difference;
  unsigned int *state_address;
  unsigned int *state_address_2;
  unsigned int cached_game_tick;
  unsigned int table_value_2;
  unsigned int cached_world_event_count;
  __int64 shifted_bits;
  unsigned int table_value_3;
  unsigned int table_value_4;
  unsigned int loaded_word;
  unsigned int table_value_5;
  unsigned int loaded_word_2;

  record_word_offset = 5210LL * a1;
  if ( dword_140404A6C[record_word_offset + 129716710] != 13 )
  {
    table_value = dword_140404A6C[record_word_offset + 129716712];
    if ( table_value > 0 )
    {
      integer_difference = table_value - a2;
      dword_140404A6C[record_word_offset + 129716712] = integer_difference;
      if ( integer_difference <= 0 )
      {
        state_address = &dword_140404A6C[record_word_offset + 129716744];
        state_address_2 = &dword_140404A6C[record_word_offset + 129716720];
        if ( game_connected )
        {
          cached_game_tick = game_tick;
          table_value_2 = 0;
          cached_world_event_count = world_event_count;
          shifted_bits = (__int64)(int)world_event_count << 7;
          *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 4;
          *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
          *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = a1;
          *(_QWORD *)((char *)&g_1873DE484 + shifted_bits) = 2;
          if ( state_address_2 )
          {
            table_value_3 = state_address_2[2];
            table_value_4 = state_address_2[1];
            loaded_word = *state_address_2;
          }
          else
          {
            table_value_3 = 0;
            table_value_4 = 0;
            loaded_word = 0;
          }
          *(unsigned int *)((char *)&g_1873DE468 + shifted_bits) = loaded_word;
          *(unsigned int *)((char *)&g_1873DE46C + shifted_bits) = table_value_4;
          *(unsigned int *)((char *)&g_1873DE470 + shifted_bits) = table_value_3;
          if ( state_address )
          {
            table_value_2 = state_address[2];
            table_value_5 = state_address[1];
            loaded_word_2 = *state_address;
          }
          else
          {
            table_value_5 = 0;
            loaded_word_2 = 0;
          }
          *(unsigned int *)((char *)&g_1873DE474 + shifted_bits) = loaded_word_2;
          *(unsigned int *)((char *)&g_1873DE478 + shifted_bits) = table_value_5;
          *(unsigned int *)((char *)&g_1873DE47C + shifted_bits) = table_value_2;
          world_event_count = cached_world_event_count + 1;
          HIWORD(world_event_count) = 0;
        }
      }
    }
  }
}

//----- (000000014000B7D0) ----------------------------------------------------
__int64            sub_14000B7D0(
        unsigned int a1,
        signed int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int cached_game_tick;
  unsigned int table_value;
  unsigned int cached_world_event_count;
  __int64 shifted_bits;
  unsigned int table_value_2;

  if ( a1 > 3 || a2 < 0 || (a5 & 0xE0000000) != 0x80000000 || (a6 & 0x10000) == 0 )
    return 0;
  if ( game_connected )
  {
    cached_game_tick = game_tick;
    table_value = 0;
    cached_world_event_count = world_event_count;
    shifted_bits = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 16;
    *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
    *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = a5;
    *(unsigned int *)((char *)&g_1873DE48C + shifted_bits) = (unsigned __int16)a6;
    if ( a7 )
    {
      *(unsigned int *)((char *)&g_1873DE468 + shifted_bits) = *a7;
      *(unsigned int *)((char *)&g_1873DE46C + shifted_bits) = a7[1];
      table_value_2 = a7[2];
    }
    else
    {
      *(_QWORD *)((char *)&g_1873DE468 + shifted_bits) = 0;
      table_value_2 = 0;
    }
    *(unsigned int *)((char *)&g_1873DE470 + shifted_bits) = table_value_2;
    if ( a8 )
    {
      *(unsigned int *)((char *)&g_1873DE474 + shifted_bits) = *a8;
      *(unsigned int *)((char *)&g_1873DE478 + shifted_bits) = a8[1];
      table_value = a8[2];
    }
    else
    {
      *(_QWORD *)((char *)&g_1873DE474 + shifted_bits) = 0;
    }
    *(unsigned int *)((char *)&g_1873DE47C + shifted_bits) = table_value;
    world_event_count = cached_world_event_count + 1;
    HIWORD(world_event_count) = 0;
  }
  sr_world_set_block_unknown_3008(a1, a2, a3, a4, a5 | (0x10000 << a6));
  return 1;
}

//----- (000000014000E8B0) ----------------------------------------------------
char            sub_14000E8B0(int *a1, int a2, int a3, int a4, int a5, float a6)
{
  signed int iteration_count;
  __int64 element_index;
  float input_value;
  float input_value_2;
  float input_value_3;
  __int64 packed_word_bits;
  int iteration_count_2;
  float state_address;
  float state_address_2;
  __int64 packed_word_bits_2;
  float state_address_3;
  float state_address_4;
  float state_address_5;
  float state_address_6;
  float state_address_7;
  float state_address_8;
  float state_address_9;
  float state_address_10;
  float state_address_11;
  float state_address_12;
  float *record_byte_offset;
  float *record_byte_offset_2;
  int iteration_count_3;
  int iteration_count_4;
  float *record_byte_offset_3;
  int iteration_count_5;
  float *record_byte_offset_4;
  __int64 record_word_offset;
  int iteration_count_6;
  int *running_total;
  int scaled_index;
  int *running_total_2;
  int iteration_count_7;
  int scaled_index_2;
  int iteration_count_8;
  int *running_total_3;
  int scaled_index_3;
  int iteration_count_9;
  int *running_total_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000E8B0[48];
#define input_value_4 (*(float (*))(void *)(sr_frame_14000E8B0 + 0)) /* [rsp+D8h] */
#define input_value_5 (*(float (*))(void *)(sr_frame_14000E8B0 + 8)) /* [rsp+E0h] */
#define input_value_6 (*(float (*))(void *)(sr_frame_14000E8B0 + 32)) /* [rsp+F8h] */

  iteration_count = 0;
  element_index = 0;
  input_value = (float)a4;
  input_value_2 = (float)a2;
  input_value_3 = (float)a3;
  input_value_5 = (float)a4;
  input_value_6 = (float)a2;
  input_value_4 = (float)a3;
  do
  {
    LOBYTE(packed_word_bits) = _bittest(&a5, iteration_count);
    if ( ((((64 << iteration_count) & a5) != 0) & (unsigned __int8)packed_word_bits) == 0 || a1[8193] >= 1024 )
      goto LABEL_75;
    iteration_count_2 = 0;
    state_address = (float)(input_value_2 + *(float *)&dword_1402B34F0[3 * dword_1402B3660[4 * element_index]]) * a6;
    state_address_2 = (float)(input_value_3 + *(float *)&dword_1402B34F4[3 * dword_1402B3660[4 * element_index]]) * a6;
    packed_word_bits_2 = *a1;
    state_address_3 = (float)(input_value + *(float *)&dword_1402B34F8[3 * dword_1402B3660[4 * element_index]]) * a6;
    state_address_4 = (float)(input_value_2 + *(float *)&dword_1402B34F0[3 * dword_1402B3664[4 * element_index]]) * a6;
    state_address_5 = (float)(input_value_3 + *(float *)&dword_1402B34F4[3 * dword_1402B3664[4 * element_index]]) * a6;
    state_address_6 = (float)(input_value + *(float *)&dword_1402B34F8[3 * dword_1402B3664[4 * element_index]]) * a6;
    state_address_7 = (float)(input_value_2 + *(float *)&dword_1402B34F0[3 * dword_1402B3668[4 * element_index]]) * a6;
    state_address_8 = (float)(input_value_3 + *(float *)&dword_1402B34F4[3 * dword_1402B3668[4 * element_index]]) * a6;
    state_address_9 = (float)(input_value + *(float *)&dword_1402B34F8[3 * dword_1402B3668[4 * element_index]]) * a6;
    state_address_10 = (float)(input_value_2 + *(float *)&dword_1402B34F0[3 * dword_1402B366C[4 * element_index]]) * a6;
    state_address_11 = (float)(input_value_3 + *(float *)&dword_1402B34F4[3 * dword_1402B366C[4 * element_index]]) * a6;
    state_address_12 = (float)(input_value + *(float *)&dword_1402B34F8[3 * dword_1402B366C[4 * element_index]]) * a6;
    if ( (int)packed_word_bits_2 <= 0 )
    {
LABEL_10:
      if ( (int)packed_word_bits_2 < 2048 )
      {
        packed_word_bits_2 *= 2;
        *(float *)&a1[2 * packed_word_bits_2 + 2] = state_address;
        *(float *)&a1[2 * packed_word_bits_2 + 3] = state_address_2;
        *(float *)&a1[2 * packed_word_bits_2 + 4] = state_address_3;
        LODWORD(packed_word_bits_2) = *a1 + 1;
        *a1 = packed_word_bits_2;
      }
      iteration_count_2 = packed_word_bits_2 - 1;
      if ( (int)packed_word_bits_2 <= 0 )
      {
LABEL_18:
        if ( (int)packed_word_bits_2 < 2048 )
        {
          packed_word_bits_2 = 2LL * (int)packed_word_bits_2;
          *(float *)&a1[2 * packed_word_bits_2 + 2] = state_address_4;
          *(float *)&a1[2 * packed_word_bits_2 + 3] = state_address_5;
          *(float *)&a1[2 * packed_word_bits_2 + 4] = state_address_6;
          LODWORD(packed_word_bits_2) = *a1 + 1;
          *a1 = packed_word_bits_2;
        }
        iteration_count_3 = packed_word_bits_2 - 1;
        goto LABEL_21;
      }
    }
    else
    {
      record_byte_offset = (float *)(a1 + 3);
      while ( fabs(state_address - *(record_byte_offset - 1)) >= 0.000061035156
           || fabs(state_address_2 - *record_byte_offset) >= 0.000061035156
           || fabs(state_address_3 - record_byte_offset[1]) >= 0.000061035156 )
      {
        ++iteration_count_2;
        record_byte_offset += 4;
        if ( iteration_count_2 >= (int)packed_word_bits_2 )
          goto LABEL_10;
      }
    }
    record_byte_offset_2 = (float *)(a1 + 3);
    iteration_count_3 = 0;
    while ( fabs(state_address_4 - *(record_byte_offset_2 - 1)) >= 0.000061035156
         || fabs(state_address_5 - *record_byte_offset_2) >= 0.000061035156
         || fabs(state_address_6 - record_byte_offset_2[1]) >= 0.000061035156 )
    {
      LODWORD(packed_word_bits_2) = *a1;
      ++iteration_count_3;
      record_byte_offset_2 += 4;
      if ( iteration_count_3 >= *a1 )
        goto LABEL_18;
    }
LABEL_21:
    iteration_count_4 = 0;
    if ( (int)packed_word_bits_2 <= 0 )
    {
LABEL_27:
      if ( (int)packed_word_bits_2 < 2048 )
      {
        packed_word_bits_2 = 2LL * (int)packed_word_bits_2;
        *(float *)&a1[2 * packed_word_bits_2 + 2] = state_address_7;
        *(float *)&a1[2 * packed_word_bits_2 + 3] = state_address_8;
        *(float *)&a1[2 * packed_word_bits_2 + 4] = state_address_9;
        LODWORD(packed_word_bits_2) = *a1 + 1;
        *a1 = packed_word_bits_2;
      }
      iteration_count_4 = packed_word_bits_2 - 1;
    }
    else
    {
      record_byte_offset_3 = (float *)(a1 + 3);
      while ( fabs(state_address_7 - *(record_byte_offset_3 - 1)) >= 0.000061035156
           || fabs(state_address_8 - *record_byte_offset_3) >= 0.000061035156
           || fabs(state_address_9 - record_byte_offset_3[1]) >= 0.000061035156 )
      {
        LODWORD(packed_word_bits_2) = *a1;
        ++iteration_count_4;
        record_byte_offset_3 += 4;
        if ( iteration_count_4 >= *a1 )
          goto LABEL_27;
      }
    }
    iteration_count_5 = 0;
    if ( (int)packed_word_bits_2 <= 0 )
    {
LABEL_36:
      if ( (int)packed_word_bits_2 < 2048 )
      {
        packed_word_bits_2 = 2LL * (int)packed_word_bits_2;
        *(float *)&a1[2 * packed_word_bits_2 + 2] = state_address_10;
        *(float *)&a1[2 * packed_word_bits_2 + 3] = state_address_11;
        *(float *)&a1[2 * packed_word_bits_2 + 4] = state_address_12;
        LODWORD(packed_word_bits_2) = *a1 + 1;
        *a1 = packed_word_bits_2;
      }
      iteration_count_5 = packed_word_bits_2 - 1;
    }
    else
    {
      record_byte_offset_4 = (float *)(a1 + 3);
      while ( fabs(state_address_10 - *(record_byte_offset_4 - 1)) >= 0.000061035156
           || fabs(state_address_11 - *record_byte_offset_4) >= 0.000061035156
           || fabs(state_address_12 - record_byte_offset_4[1]) >= 0.000061035156 )
      {
        LODWORD(packed_word_bits_2) = *a1;
        ++iteration_count_5;
        record_byte_offset_4 += 4;
        if ( iteration_count_5 >= *a1 )
          goto LABEL_36;
      }
    }
    a1[8 * a1[8193] + 8194] = 4;
    a1[8 * a1[8193] + 8195] = iteration_count_2;
    a1[8 * a1[8193] + 8196] = iteration_count_3;
    a1[8 * a1[8193] + 8197] = iteration_count_4;
    a1[8 * a1[8193] + 8198] = iteration_count_5;
    record_word_offset = 8LL * a1[8193];
    a1[record_word_offset + 8199] = dword_1402B3550[3 * element_index];
    a1[record_word_offset + 8200] = dword_1402B3554[3 * element_index];
    iteration_count_6 = 0;
    a1[record_word_offset + 8201] = dword_1402B3558[3 * element_index];
    ++a1[8193];
    packed_word_bits = a1[16386];
    if ( (int)packed_word_bits > 0 )
    {
      running_total = a1 + 16388;
      while ( 1 )
      {
        scaled_index = *(running_total - 1);
        if ( iteration_count_2 == scaled_index && iteration_count_3 == *running_total )
          break;
        if ( iteration_count_2 == *running_total && iteration_count_3 == scaled_index )
          break;
        ++iteration_count_6;
        running_total += 2;
        if ( iteration_count_6 >= (int)packed_word_bits )
          goto LABEL_46;
      }
LABEL_49:
      running_total_2 = a1 + 16388;
      iteration_count_7 = 0;
      while ( 1 )
      {
        scaled_index_2 = *(running_total_2 - 1);
        if ( iteration_count_3 == scaled_index_2 && iteration_count_4 == *running_total_2 )
          goto LABEL_57;
        if ( iteration_count_3 == *running_total_2 && iteration_count_4 == scaled_index_2 )
          goto LABEL_57;
        LODWORD(packed_word_bits) = a1[16386];
        ++iteration_count_7;
        running_total_2 += 2;
        if ( iteration_count_7 >= (int)packed_word_bits )
          goto LABEL_55;
      }
    }
LABEL_46:
    if ( (int)packed_word_bits < 1024 )
    {
      a1[2 * packed_word_bits + 16387] = iteration_count_2;
      a1[2 * a1[16386] + 16388] = iteration_count_3;
      LODWORD(packed_word_bits) = a1[16386] + 1;
      a1[16386] = packed_word_bits;
    }
    if ( (int)packed_word_bits > 0 )
      goto LABEL_49;
LABEL_55:
    if ( (int)packed_word_bits < 1024 )
    {
      a1[2 * (int)packed_word_bits + 16387] = iteration_count_3;
      a1[2 * a1[16386] + 16388] = iteration_count_4;
      LODWORD(packed_word_bits) = a1[16386] + 1;
      a1[16386] = packed_word_bits;
    }
LABEL_57:
    iteration_count_8 = 0;
    if ( (int)packed_word_bits <= 0 )
    {
LABEL_64:
      if ( (int)packed_word_bits < 1024 )
      {
        a1[2 * (int)packed_word_bits + 16387] = iteration_count_4;
        a1[2 * a1[16386] + 16388] = iteration_count_5;
        LODWORD(packed_word_bits) = a1[16386] + 1;
        a1[16386] = packed_word_bits;
      }
    }
    else
    {
      running_total_3 = a1 + 16388;
      while ( 1 )
      {
        scaled_index_3 = *(running_total_3 - 1);
        if ( iteration_count_4 == scaled_index_3 && iteration_count_5 == *running_total_3 )
          break;
        if ( iteration_count_4 == *running_total_3 && iteration_count_5 == scaled_index_3 )
          break;
        LODWORD(packed_word_bits) = a1[16386];
        ++iteration_count_8;
        running_total_3 += 2;
        if ( iteration_count_8 >= (int)packed_word_bits )
          goto LABEL_64;
      }
    }
    iteration_count_9 = 0;
    if ( (int)packed_word_bits <= 0 )
    {
LABEL_72:
      input_value_2 = input_value_6;
      input_value_3 = input_value_4;
      input_value = input_value_5;
      if ( (int)packed_word_bits < 1024 )
      {
        a1[2 * (int)packed_word_bits + 16387] = iteration_count_5;
        packed_word_bits = a1[16386];
        a1[2 * packed_word_bits + 16388] = iteration_count_2;
        ++a1[16386];
      }
    }
    else
    {
      running_total_4 = a1 + 16388;
      while ( 1 )
      {
        LODWORD(packed_word_bits) = *(running_total_4 - 1);
        if ( __PAIR64__(iteration_count_2, iteration_count_5) == *(_QWORD *)(running_total_4 - 1) || iteration_count_5 == *running_total_4 && iteration_count_2 == (_DWORD)packed_word_bits )
          break;
        LODWORD(packed_word_bits) = a1[16386];
        ++iteration_count_9;
        running_total_4 += 2;
        if ( iteration_count_9 >= (int)packed_word_bits )
          goto LABEL_72;
      }
      input_value = input_value_5;
      input_value_3 = input_value_4;
      input_value_2 = input_value_6;
    }
LABEL_75:
    ++iteration_count;
    ++element_index;
  }
  while ( iteration_count < 6 );
  return packed_word_bits;
}
#undef input_value_4
#undef input_value_5
#undef input_value_6

//----- (000000014000EF70) ----------------------------------------------------
__int64            sub_14000EF70(int *a1, int a2, int a3, int a4, unsigned int a5, float a6, float *a7, float *a8)
{
  __int64 result;
  float input_value;
  signed int iteration_count;
  __int64 record_word_offset;
  float input_value_2;
  float input_value_3;
  float input_value_4;
  __int64 scaled_index;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 loaded_word;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 loaded_word_2;
  float saved_weighted_sum;
  float scaled_value;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  __int64 loaded_word_3;
  float weighted_sum_7;
  float scaled_value_2;
  float weighted_sum_8;
  float weighted_sum_9;
  __int64 loaded_word_4;
  float scaled_value_3;
  float saved_weighted_sum_2;
  float saved_weighted_sum_3;
  float saved_weighted_sum_4;
  float saved_weighted_sum_5;
  float saved_weighted_sum_6;
  __int64 packed_word_bits;
  int iteration_count_2;
  float *record_byte_offset;
  float *record_byte_offset_2;
  int iteration_count_3;
  int iteration_count_4;
  float *record_byte_offset_3;
  int iteration_count_5;
  float *record_byte_offset_4;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float component_delta_4;
  float component_delta_5;
  float *state_address;
  __int64 packed_word_bits_2;
  int iteration_count_6;
  int *running_total;
  int scaled_index_2;
  int *running_total_2;
  int iteration_count_7;
  int scaled_index_3;
  int iteration_count_8;
  int *running_total_3;
  int scaled_index_4;
  int iteration_count_9;
  int *running_total_4;
  int scaled_index_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000EF70[304];
#define weighted_sum_10 (*(float (*))(void *)(sr_frame_14000EF70 + 0)) /* [rsp+20h] */
#define weighted_sum_11 (*(float (*))(void *)(sr_frame_14000EF70 + 4)) /* [rsp+24h] */
#define saved_weighted_sum_7 (*(float (*))(void *)(sr_frame_14000EF70 + 8)) /* [rsp+28h] */
#define saved_call_status (*(__int64 (*))(void *)(sr_frame_14000EF70 + 16)) /* [rsp+30h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_14000EF70 + 24)) /* [rsp+38h] */
#define input_value_5 (*(float (*))(void *)(sr_frame_14000EF70 + 264)) /* [rsp+128h] */
#define input_value_6 (*(float (*))(void *)(sr_frame_14000EF70 + 272)) /* [rsp+130h] */
#define input_value_7 (*(float (*))(void *)(sr_frame_14000EF70 + 280)) /* [rsp+138h] */
#define weighted_sum_12 (*(float (*))(void *)(sr_frame_14000EF70 + 288)) /* [rsp+140h] */

  result = a5;
  input_value = a6;
  iteration_count = 0;
  record_word_offset = 232LL * (unsigned __int16)a5;
  input_value_2 = (float)a2;
  saved_record_word_offset = record_word_offset;
  input_value_3 = (float)a3;
  input_value_4 = (float)a4;
  input_value_5 = (float)a2;
  input_value_6 = (float)a3;
  input_value_7 = (float)a4;
  if ( *(int *)((char *)&g_145098C68 + record_word_offset) > 0 )
  {
    result = 0;
    saved_call_status = 0;
    while ( a1[8193] >= 1024 )
    {
LABEL_119:
      ++result;
      ++iteration_count;
      saved_call_status = result;
      if ( iteration_count >= *(int *)((char *)&g_145098C68 + record_word_offset) )
        return result;
    }
    scaled_index = 2 * result;
    masked_bits = *(_QWORD *)((char *)&g_145098C48 + saved_record_word_offset);
    masked_bits_2 = *(_QWORD *)((char *)&g_145098C88 + saved_record_word_offset);
    loaded_word = 3 * *(_DWORD *)(masked_bits_2 + 16 * result);
    weighted_sum = input_value_4 + *(float *)(masked_bits + 4 * loaded_word + 8);
    weighted_sum_2 = (float)(input_value_2 + *(float *)(masked_bits + 4 * loaded_word)) * input_value;
    weighted_sum_3 = (float)(input_value_3 + *(float *)(masked_bits + 4 * loaded_word + 4)) * input_value;
    loaded_word_2 = 3 * *(_DWORD *)(masked_bits_2 + 8 * scaled_index + 4);
    saved_weighted_sum_7 = weighted_sum_2;
    saved_weighted_sum = weighted_sum_2;
    scaled_value = weighted_sum * input_value;
    weighted_sum_4 = input_value_4 + *(float *)(masked_bits + 4 * loaded_word_2 + 8);
    weighted_sum_5 = (float)(input_value_2 + *(float *)(masked_bits + 4 * loaded_word_2)) * input_value;
    weighted_sum_6 = (float)(input_value_3 + *(float *)(masked_bits + 4 * loaded_word_2 + 4)) * input_value;
    loaded_word_3 = 3 * *(_DWORD *)(masked_bits_2 + 8 * scaled_index + 8);
    weighted_sum_7 = input_value_4 + *(float *)(masked_bits + 4 * loaded_word_3 + 8);
    scaled_value_2 = weighted_sum_4 * input_value;
    weighted_sum_8 = (float)(input_value_2 + *(float *)(masked_bits + 4 * loaded_word_3)) * input_value;
    weighted_sum_9 = (float)(input_value_3 + *(float *)(masked_bits + 4 * loaded_word_3 + 4)) * input_value;
    loaded_word_4 = 3 * *(_DWORD *)(masked_bits_2 + 8 * scaled_index + 12);
    scaled_value_3 = weighted_sum_7 * input_value;
    weighted_sum_12 = (float)(input_value_2 + *(float *)(masked_bits + 4 * loaded_word_4)) * input_value;
    weighted_sum_10 = (float)(input_value_3 + *(float *)(masked_bits + 4 * loaded_word_4 + 4)) * input_value;
    weighted_sum_11 = (float)(input_value_4 + *(float *)(masked_bits + 4 * loaded_word_4 + 8)) * input_value;
    if ( weighted_sum_2 > weighted_sum_5 )
      saved_weighted_sum = weighted_sum_5;
    saved_weighted_sum_2 = weighted_sum_3;
    if ( weighted_sum_3 > weighted_sum_6 )
      saved_weighted_sum_2 = weighted_sum_6;
    saved_weighted_sum_3 = scaled_value;
    if ( scaled_value > scaled_value_2 )
      saved_weighted_sum_3 = scaled_value_2;
    saved_weighted_sum_4 = weighted_sum_2;
    if ( weighted_sum_2 < weighted_sum_5 )
      saved_weighted_sum_4 = weighted_sum_5;
    saved_weighted_sum_5 = weighted_sum_3;
    if ( weighted_sum_3 < weighted_sum_6 )
      saved_weighted_sum_5 = weighted_sum_6;
    saved_weighted_sum_6 = scaled_value;
    if ( scaled_value < scaled_value_2 )
      saved_weighted_sum_6 = scaled_value_2;
    if ( saved_weighted_sum > weighted_sum_8 )
      saved_weighted_sum = weighted_sum_8;
    if ( saved_weighted_sum_2 > weighted_sum_9 )
      saved_weighted_sum_2 = weighted_sum_9;
    if ( saved_weighted_sum_3 > scaled_value_3 )
      saved_weighted_sum_3 = scaled_value_3;
    if ( saved_weighted_sum_4 < weighted_sum_8 )
      saved_weighted_sum_4 = weighted_sum_8;
    if ( saved_weighted_sum_5 < weighted_sum_9 )
      saved_weighted_sum_5 = weighted_sum_9;
    if ( saved_weighted_sum_6 < scaled_value_3 )
      saved_weighted_sum_6 = scaled_value_3;
    if ( saved_weighted_sum > weighted_sum_12 )
      saved_weighted_sum = weighted_sum_12;
    if ( saved_weighted_sum_2 > weighted_sum_10 )
      saved_weighted_sum_2 = weighted_sum_10;
    if ( saved_weighted_sum_3 > weighted_sum_11 )
      saved_weighted_sum_3 = weighted_sum_11;
    if ( saved_weighted_sum_4 < weighted_sum_12 )
      saved_weighted_sum_4 = weighted_sum_12;
    if ( saved_weighted_sum_5 < weighted_sum_10 )
      saved_weighted_sum_5 = weighted_sum_10;
    if ( saved_weighted_sum_6 < weighted_sum_11 )
      saved_weighted_sum_6 = weighted_sum_11;
    if ( saved_weighted_sum > *a8 || saved_weighted_sum_4 < *a7 || saved_weighted_sum_3 > a8[2] || saved_weighted_sum_6 < a7[2] || saved_weighted_sum_2 > a8[1] || saved_weighted_sum_5 < a7[1] )
      goto LABEL_117;
    packed_word_bits = *a1;
    iteration_count_2 = 0;
    if ( (int)packed_word_bits <= 0 )
    {
LABEL_52:
      if ( (int)packed_word_bits < 2048 )
      {
        packed_word_bits *= 2;
        *(float *)&a1[2 * packed_word_bits + 2] = saved_weighted_sum_7;
        *(float *)&a1[2 * packed_word_bits + 3] = weighted_sum_3;
        *(float *)&a1[2 * packed_word_bits + 4] = scaled_value;
        LODWORD(packed_word_bits) = *a1 + 1;
        *a1 = packed_word_bits;
      }
      iteration_count_2 = packed_word_bits - 1;
      if ( (int)packed_word_bits <= 0 )
      {
LABEL_60:
        if ( (int)packed_word_bits < 2048 )
        {
          packed_word_bits = 2LL * (int)packed_word_bits;
          *(float *)&a1[2 * packed_word_bits + 2] = weighted_sum_5;
          *(float *)&a1[2 * packed_word_bits + 3] = weighted_sum_6;
          *(float *)&a1[2 * packed_word_bits + 4] = scaled_value_2;
          LODWORD(packed_word_bits) = *a1 + 1;
          *a1 = packed_word_bits;
        }
        iteration_count_3 = packed_word_bits - 1;
        goto LABEL_63;
      }
    }
    else
    {
      record_byte_offset = (float *)(a1 + 3);
      while ( fabs(saved_weighted_sum_7 - *(record_byte_offset - 1)) >= 0.000061035156
           || fabs(weighted_sum_3 - *record_byte_offset) >= 0.000061035156
           || fabs(scaled_value - record_byte_offset[1]) >= 0.000061035156 )
      {
        ++iteration_count_2;
        record_byte_offset += 4;
        if ( iteration_count_2 >= (int)packed_word_bits )
          goto LABEL_52;
      }
    }
    record_byte_offset_2 = (float *)(a1 + 3);
    iteration_count_3 = 0;
    while ( fabs(weighted_sum_5 - *(record_byte_offset_2 - 1)) >= 0.000061035156
         || fabs(weighted_sum_6 - *record_byte_offset_2) >= 0.000061035156
         || fabs(scaled_value_2 - record_byte_offset_2[1]) >= 0.000061035156 )
    {
      LODWORD(packed_word_bits) = *a1;
      ++iteration_count_3;
      record_byte_offset_2 += 4;
      if ( iteration_count_3 >= *a1 )
        goto LABEL_60;
    }
LABEL_63:
    iteration_count_4 = 0;
    if ( (int)packed_word_bits <= 0 )
    {
LABEL_69:
      if ( (int)packed_word_bits < 2048 )
      {
        packed_word_bits = 2LL * (int)packed_word_bits;
        *(float *)&a1[2 * packed_word_bits + 2] = weighted_sum_8;
        *(float *)&a1[2 * packed_word_bits + 3] = weighted_sum_9;
        *(float *)&a1[2 * packed_word_bits + 4] = scaled_value_3;
        LODWORD(packed_word_bits) = *a1 + 1;
        *a1 = packed_word_bits;
      }
      iteration_count_4 = packed_word_bits - 1;
    }
    else
    {
      record_byte_offset_3 = (float *)(a1 + 3);
      while ( fabs(weighted_sum_8 - *(record_byte_offset_3 - 1)) >= 0.000061035156
           || fabs(weighted_sum_9 - *record_byte_offset_3) >= 0.000061035156
           || fabs(scaled_value_3 - record_byte_offset_3[1]) >= 0.000061035156 )
      {
        LODWORD(packed_word_bits) = *a1;
        ++iteration_count_4;
        record_byte_offset_3 += 4;
        if ( iteration_count_4 >= *a1 )
          goto LABEL_69;
      }
    }
    iteration_count_5 = 0;
    if ( (int)packed_word_bits <= 0 )
    {
LABEL_78:
      if ( (int)packed_word_bits < 2048 )
      {
        packed_word_bits = 2LL * (int)packed_word_bits;
        *(float *)&a1[2 * packed_word_bits + 3] = weighted_sum_10;
        *(float *)&a1[2 * packed_word_bits + 4] = weighted_sum_11;
        *(float *)&a1[2 * packed_word_bits + 2] = weighted_sum_12;
        LODWORD(packed_word_bits) = *a1 + 1;
        *a1 = packed_word_bits;
      }
      iteration_count_5 = packed_word_bits - 1;
    }
    else
    {
      record_byte_offset_4 = (float *)(a1 + 3);
      while ( fabs(weighted_sum_12 - *(record_byte_offset_4 - 1)) >= 0.000061035156
           || fabs(weighted_sum_10 - *record_byte_offset_4) >= 0.000061035156
           || fabs(weighted_sum_11 - record_byte_offset_4[1]) >= 0.000061035156 )
      {
        LODWORD(packed_word_bits) = *a1;
        ++iteration_count_5;
        record_byte_offset_4 += 4;
        if ( iteration_count_5 >= *a1 )
          goto LABEL_78;
      }
    }
    component_delta = weighted_sum_8 - saved_weighted_sum_7;
    component_delta_2 = weighted_sum_5 - saved_weighted_sum_7;
    component_delta_3 = weighted_sum_9 - weighted_sum_3;
    component_delta_4 = weighted_sum_6 - weighted_sum_3;
    a1[8 * a1[8193] + 8194] = 4;
    component_delta_5 = scaled_value_2 - scaled_value;
    a1[8 * a1[8193] + 8195] = iteration_count_2;
    a1[8 * a1[8193] + 8196] = iteration_count_3;
    a1[8 * a1[8193] + 8197] = iteration_count_4;
    a1[8 * a1[8193] + 8198] = iteration_count_5;
    state_address = (float *)&a1[8 * a1[8193] + 8199];
    *state_address = (float)(component_delta_3 * component_delta_5) - (float)((float)(scaled_value_3 - scaled_value) * component_delta_4);
    state_address[1] = (float)((float)(scaled_value_3 - scaled_value) * component_delta_2) - (float)(component_delta * component_delta_5);
    state_address[2] = (float)(component_delta * component_delta_4) - (float)(component_delta_3 * component_delta_2);
    sr_math_vec3_normalize((__int64)state_address, state_address);
    packed_word_bits_2 = a1[16386];
    iteration_count_6 = 0;
    ++a1[8193];
    if ( (int)packed_word_bits_2 <= 0 )
    {
LABEL_88:
      if ( (int)packed_word_bits_2 < 1024 )
      {
        a1[2 * packed_word_bits_2 + 16387] = iteration_count_2;
        a1[2 * a1[16386] + 16388] = iteration_count_3;
        LODWORD(packed_word_bits_2) = a1[16386] + 1;
        a1[16386] = packed_word_bits_2;
      }
      if ( (int)packed_word_bits_2 <= 0 )
      {
LABEL_97:
        if ( (int)packed_word_bits_2 < 1024 )
        {
          a1[2 * (int)packed_word_bits_2 + 16387] = iteration_count_3;
          a1[2 * a1[16386] + 16388] = iteration_count_4;
          LODWORD(packed_word_bits_2) = a1[16386] + 1;
          a1[16386] = packed_word_bits_2;
        }
LABEL_99:
        iteration_count_8 = 0;
        if ( (int)packed_word_bits_2 <= 0 )
        {
LABEL_106:
          if ( (int)packed_word_bits_2 < 1024 )
          {
            a1[2 * (int)packed_word_bits_2 + 16387] = iteration_count_4;
            a1[2 * a1[16386] + 16388] = iteration_count_5;
            LODWORD(packed_word_bits_2) = a1[16386] + 1;
            a1[16386] = packed_word_bits_2;
          }
        }
        else
        {
          running_total_3 = a1 + 16388;
          while ( 1 )
          {
            scaled_index_4 = *(running_total_3 - 1);
            if ( iteration_count_4 == scaled_index_4 && iteration_count_5 == *running_total_3 )
              break;
            if ( iteration_count_4 == *running_total_3 && iteration_count_5 == scaled_index_4 )
              break;
            LODWORD(packed_word_bits_2) = a1[16386];
            ++iteration_count_8;
            running_total_3 += 2;
            if ( iteration_count_8 >= (int)packed_word_bits_2 )
              goto LABEL_106;
          }
        }
        iteration_count_9 = 0;
        if ( (int)packed_word_bits_2 <= 0 )
        {
LABEL_115:
          input_value = a6;
          input_value_2 = input_value_5;
          input_value_3 = input_value_6;
          input_value_4 = input_value_7;
          record_word_offset = saved_record_word_offset;
          if ( (int)packed_word_bits_2 < 1024 )
          {
            a1[2 * (int)packed_word_bits_2 + 16387] = iteration_count_5;
            a1[2 * a1[16386]++ + 16388] = iteration_count_2;
          }
          goto LABEL_118;
        }
        running_total_4 = a1 + 16388;
        while ( 1 )
        {
          scaled_index_5 = *(running_total_4 - 1);
          if ( iteration_count_5 == scaled_index_5 && iteration_count_2 == *running_total_4 )
            break;
          if ( iteration_count_5 == *running_total_4 && iteration_count_2 == scaled_index_5 )
            break;
          LODWORD(packed_word_bits_2) = a1[16386];
          ++iteration_count_9;
          running_total_4 += 2;
          if ( iteration_count_9 >= (int)packed_word_bits_2 )
            goto LABEL_115;
        }
LABEL_117:
        record_word_offset = saved_record_word_offset;
        input_value_4 = input_value_7;
        input_value_3 = input_value_6;
        input_value_2 = input_value_5;
        input_value = a6;
LABEL_118:
        result = saved_call_status;
        goto LABEL_119;
      }
    }
    else
    {
      running_total = a1 + 16388;
      while ( 1 )
      {
        scaled_index_2 = *(running_total - 1);
        if ( iteration_count_2 == scaled_index_2 && iteration_count_3 == *running_total )
          break;
        if ( iteration_count_2 == *running_total && iteration_count_3 == scaled_index_2 )
          break;
        ++iteration_count_6;
        running_total += 2;
        if ( iteration_count_6 >= (int)packed_word_bits_2 )
          goto LABEL_88;
      }
    }
    running_total_2 = a1 + 16388;
    iteration_count_7 = 0;
    while ( 1 )
    {
      scaled_index_3 = *(running_total_2 - 1);
      if ( iteration_count_3 == scaled_index_3 && iteration_count_4 == *running_total_2 )
        goto LABEL_99;
      if ( iteration_count_3 == *running_total_2 && iteration_count_4 == scaled_index_3 )
        goto LABEL_99;
      LODWORD(packed_word_bits_2) = a1[16386];
      ++iteration_count_7;
      running_total_2 += 2;
      if ( iteration_count_7 >= (int)packed_word_bits_2 )
        goto LABEL_97;
    }
  }
  return result;
}
#undef weighted_sum_10
#undef weighted_sum_11
#undef saved_weighted_sum_7
#undef saved_call_status
#undef saved_record_word_offset
#undef input_value_5
#undef input_value_6
#undef input_value_7
#undef weighted_sum_12

//----- (0000000140012940) ----------------------------------------------------
void            sub_140012940(unsigned int a1, int a2)
{
  __int64 scaled_index;
  __int64 table_value;

  if ( a1 <= 0xFFF )
  {
    scaled_index = a2 + 6930LL * (int)a1;
    table_value = (int)dword_140404A6C[scaled_index + 83200503];
    dword_140404A6C[scaled_index + 83200503] = -1;
    if ( (unsigned int)table_value <= 0x3FF )
    {
      dword_140404A6C[8969 * table_value + 73991662] = -1;
      sub_1401941F0(0, table_value);
      sub_1401941F0(3, table_value);
      sub_1401941F0(5, table_value);
    }
  }
}

//----- (0000000140012F30) ----------------------------------------------------
__int64            sub_140012F30(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char input_value;
  char input_value_2;
  char input_value_3;
  int world_block_record_at_result;

  input_value = a4;
  input_value_2 = a3;
  input_value_3 = a2;
  world_block_record_at_result = sr_world_block_record_at(a1, a2, a3, a4);
  if ( world_block_record_at_result == -1 )
    return 0;
  else
    return dword_140404A6C[6930 * world_block_record_at_result + 83194871 + 64 * (input_value_2 & 7) + 8 * (input_value & 7) + (input_value_3 & 7)];
}

//----- (00000001400174D0) ----------------------------------------------------
char            sub_1400174D0(int *a1, int a2, int *a3, int a4, float a5)
{
  float source_component_y;
  __int64 block_record_offset;
  float scaled_value;
  float source_component_z;
  __int64 running_total;
  __int64 remaining_count;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 loaded_word;
  float state_address;
  float state_address_2;
  float state_address_3;
  float state_address_4;
  float state_address_5;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 loaded_word_2;
  float state_address_6;
  float state_address_7;
  float state_address_8;
  float state_address_9;
  float state_address_10;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 loaded_word_3;
  float state_address_11;
  float state_address_12;
  float state_address_13;
  float state_address_14;
  float state_address_15;
  __int64 scaled_index_5;
  __int64 scaled_index_6;

  source_component_y = (float)a3[1];
  block_record_offset = 263004LL * a2;
  scaled_value = (float)*a3 * a5;
  source_component_z = (float)a3[2];
  running_total = 0;
  remaining_count = 4;
  weighted_sum = scaled_value + *(float *)&dword_140404A6C[block_record_offset + 111579638];
  weighted_sum_2 = (float)(source_component_y * a5) + *(float *)&dword_140404A6C[block_record_offset + 111579639];
  weighted_sum_3 = (float)(source_component_z * a5) + *(float *)&dword_140404A6C[block_record_offset + 111579640];
  do
  {
    if ( (_bittest(&a4, *(_DWORD *)((char *)&unk_1402B37B0 + running_total * 4))
        & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37B0 + running_total * 4))) != 0)) != 0
      && (_bittest(&a4, dword_1402B37B4[running_total]) & ((a4 & (64 << dword_1402B37B4[running_total])) != 0)) != 0 )
    {
      loaded_word = *a1;
      state_address = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3750[running_total]]) + weighted_sum_2;
      state_address_2 = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3754[running_total]]) + weighted_sum;
      state_address_3 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3750[running_total]]) + weighted_sum_3;
      state_address_4 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3754[running_total]]) + weighted_sum_2;
      state_address_5 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3754[running_total]]) + weighted_sum_3;
      if ( (int)loaded_word < 256 )
      {
        scaled_index = 3 * loaded_word;
        *(float *)&a1[2 * scaled_index + 1] = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3750[running_total]]) + weighted_sum;
        *(float *)&a1[2 * scaled_index + 2] = state_address;
        *(float *)&a1[2 * scaled_index + 3] = state_address_3;
        scaled_index_2 = 3LL * *a1;
        *(float *)&a1[2 * scaled_index_2 + 4] = state_address_2;
        *(float *)&a1[2 * scaled_index_2 + 5] = state_address_4;
        *(float *)&a1[2 * scaled_index_2 + 6] = state_address_5;
        ++*a1;
      }
    }
    if ( (_bittest(&a4, *(_DWORD *)((char *)&unk_1402B37B8 + running_total * 4))
        & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37B8 + running_total * 4))) != 0)) != 0
      && (_bittest(&a4, *(_DWORD *)((char *)&unk_1402B37BC + running_total * 4))
        & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37BC + running_total * 4))) != 0)) != 0 )
    {
      loaded_word_2 = *a1;
      state_address_6 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3758[running_total]]) + weighted_sum_2;
      state_address_7 = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B375C[running_total]]) + weighted_sum;
      state_address_8 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3758[running_total]]) + weighted_sum_3;
      state_address_9 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B375C[running_total]]) + weighted_sum_2;
      state_address_10 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B375C[running_total]]) + weighted_sum_3;
      if ( (int)loaded_word_2 < 256 )
      {
        scaled_index_3 = 3 * loaded_word_2;
        *(float *)&a1[2 * scaled_index_3 + 1] = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3758[running_total]]) + weighted_sum;
        *(float *)&a1[2 * scaled_index_3 + 2] = state_address_6;
        *(float *)&a1[2 * scaled_index_3 + 3] = state_address_8;
        scaled_index_4 = 3LL * *a1;
        *(float *)&a1[2 * scaled_index_4 + 4] = state_address_7;
        *(float *)&a1[2 * scaled_index_4 + 5] = state_address_9;
        *(float *)&a1[2 * scaled_index_4 + 6] = state_address_10;
        ++*a1;
      }
    }
    LOBYTE(loaded_word_3) = _bittest(&a4, *(_DWORD *)((char *)&unk_1402B37C0 + running_total * 4))
                & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37C0 + running_total * 4))) != 0);
    if ( (_BYTE)loaded_word_3 )
    {
      LOBYTE(loaded_word_3) = _bittest(&a4, *(_DWORD *)((char *)&unk_1402B37C4 + running_total * 4))
                  & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37C4 + running_total * 4))) != 0);
      if ( (_BYTE)loaded_word_3 )
      {
        loaded_word_3 = *a1;
        state_address_11 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3760[running_total]]) + weighted_sum_2;
        state_address_12 = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3764[running_total]]) + weighted_sum;
        state_address_13 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3760[running_total]]) + weighted_sum_3;
        state_address_14 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3764[running_total]]) + weighted_sum_2;
        state_address_15 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3764[running_total]]) + weighted_sum_3;
        if ( (int)loaded_word_3 < 256 )
        {
          scaled_index_5 = 3 * loaded_word_3;
          *(float *)&a1[2 * scaled_index_5 + 1] = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3760[running_total]]) + weighted_sum;
          *(float *)&a1[2 * scaled_index_5 + 2] = state_address_11;
          *(float *)&a1[2 * scaled_index_5 + 3] = state_address_13;
          loaded_word_3 = *a1;
          scaled_index_6 = 3 * loaded_word_3;
          *(float *)&a1[2 * scaled_index_6 + 4] = state_address_12;
          *(float *)&a1[2 * scaled_index_6 + 5] = state_address_14;
          *(float *)&a1[2 * scaled_index_6 + 6] = state_address_15;
          ++*a1;
        }
      }
    }
    running_total += 6;
    --remaining_count;
  }
  while ( remaining_count );
  return loaded_word_3;
}

//----- (0000000140017890) ----------------------------------------------------
void            sub_140017890(unsigned int a1)
{
  __int64 record_word_offset;
  int i;

  if ( a1 <= 0xFFF )
  {
    record_word_offset = 6930LL * (int)a1;
    if ( dword_140404A6C[record_word_offset + 83194357] )
    {
      sub_14000C4C0(a1);
      for ( i = 0; i < 4; ++i )
        sub_140012940(a1, i);
      dword_140404A6C[record_word_offset + 83200510] = 0;
      if ( a1 == 1008 )
        ++g_18402CC00;
    }
  }
}

//----- (0000000140017C40) ----------------------------------------------------
__int64            sub_140017C40(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  char input_value;
  char input_value_2;
  char input_value_3;
  __int64 result;

  input_value = a4;
  input_value_2 = a3;
  input_value_3 = a2;
  result = sr_world_block_record_at(a1, a2, a3, a4);
  if ( (_DWORD)result != -1 )
  {
    dword_140404A6C[6930 * (int)result + 83194871 + 64 * (input_value_2 & 7) + 8 * (input_value & 7) + (input_value_3 & 7)] = a5;
    return a5;
  }
  return result;
}

//----- (0000000140019000) ----------------------------------------------------
__m128            sub_140019000(float *a1, float *a2)
{
  float component_delta;
  __int128 selection_code;

  component_delta = a2[2] - a1[2];
  if ( fsqrt(
         (float)((float)((float)(a2[1] - a1[1]) * (float)(a2[1] - a1[1]))
               + (float)((float)(*a2 - *a1) * (float)(*a2 - *a1)))
       + (float)(component_delta * component_delta)) <= 128.0 )
  {
    selection_code = 0x3F800000u;
    if ( (unsigned int)sub_1400DC050(a1, a2, 0) )
      return ((__m128)_mm_cvtsi32_si128((int)(0x3F000000u)));
    return (__m128)selection_code;
  }
  else
  {
    return ((__m128)_mm_cvtsi32_si128((int)(0x3F000000u)));
  }
}

//----- (000000014001B5C0) ----------------------------------------------------
__int64            sub_14001B5C0(__int64 a1, unsigned int a2)
{
  unsigned int *record_byte_offset;
  float product_difference;
  unsigned int table_value;
  unsigned int table_value_2;
  float combined_products;
  unsigned int table_value_3;
  float combined_products_2;
  float combined_products_3;

  if ( (int)a1 > 0 )
  {
    a1 = (unsigned int)a1;
    do
    {
      record_byte_offset = &g_14500A5C8;
      do
      {
        product_difference = 1.0 - *(float *)record_byte_offset;
        table_value = record_byte_offset[1];
        *record_byte_offset = *(record_byte_offset - 2);
        table_value_2 = record_byte_offset[4];
        *((float *)record_byte_offset - 2) = product_difference;
        combined_products = 1.0 - *((float *)record_byte_offset + 3);
        record_byte_offset[3] = table_value;
        table_value_3 = record_byte_offset[7];
        *((float *)record_byte_offset + 1) = combined_products;
        combined_products_2 = 1.0 - *((float *)record_byte_offset + 6);
        record_byte_offset[6] = table_value_2;
        *((float *)record_byte_offset + 4) = combined_products_2;
        combined_products_3 = 1.0 - *((float *)record_byte_offset + 9);
        record_byte_offset[9] = table_value_3;
        *((float *)record_byte_offset + 7) = combined_products_3;
        record_byte_offset += 12;
      }
      while ( (__int64)record_byte_offset < (__int64)&g_14500A688 );
      switch ( a2 )
      {
        case 0x60000u:
          a2 = 0x10000;
          break;
        case 0x10000u:
          a2 = 327680;
          break;
        case 0x50000u:
          a2 = 0x20000;
          break;
        case 0x20000u:
          a2 = 393216;
          break;
      }
      --a1;
    }
    while ( a1 );
  }
  return a2;
}

//----- (000000014001FD20) ----------------------------------------------------
__int64            sub_14001FD20(float *a1, float *a2)
{
  float *state_address;
  int i;
  float *input_cursor;
  float scaled_value;
  unsigned int masked_bits;
  float source_component_y;
  float source_component_z;

  /* The five view-frustum planes (three floats each) are one table at 0x1402B27D0..0x1402B280B in the
     original, walked by pointer below. Separate globals do not stay adjacent, so keep it as one array. */
  static float sr_frustum_planes[15];
  static const float sr_frustum_plane_values[15] = {
    0.0f, 0.0f, 1.0f,   1.0f, 0.0f, 1.0f,   -1.0f, 0.0f, 1.0f,   0.0f, 0.75f, 1.0f,   0.0f, -0.75f, 1.0f
  };
  for ( i = 0; i < 5; ++i )
  {
    sr_frustum_planes[3 * i] = sr_frustum_plane_values[3 * i];
    sr_frustum_planes[3 * i + 1] = sr_frustum_plane_values[3 * i + 1];
    sr_frustum_planes[3 * i + 2] = sr_frustum_plane_values[3 * i + 2];
    sr_math_vec3_normalize((__int64)&sr_frustum_planes[3 * i], &sr_frustum_planes[3 * i]);
  }
  state_address = &sr_frustum_planes[2];
  while ( 2 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 8 )
        return 0;
      input_cursor = a1;
      if ( i >= 4 )
        input_cursor = a2;
      scaled_value = *input_cursor;
      masked_bits = i & 3;
      if ( masked_bits >= 2 )
      {
        source_component_y = a2[1];
      }
      else
      {
        source_component_y = a1[1];
        if ( (i & 3) == 0 )
          goto LABEL_8;
      }
      if ( masked_bits == 3 )
      {
LABEL_8:
        source_component_z = a1[2];
        goto LABEL_9;
      }
      source_component_z = a2[2];
LABEL_9:
      if ( (float)((float)((float)((float)((float)((float)(*(state_address - 2) * g_183F7C550)
                                                 + (float)(*(state_address - 1) * g_183F7C55C))
                                         + (float)(*state_address * g_183F7C568))
                                 * (float)(scaled_value - g_183F7C544))
                         + (float)((float)((float)((float)(*(state_address - 2) * g_183F7C554)
                                                 + (float)(*(state_address - 1) * g_183F7C560))
                                         + (float)(*state_address * g_183F7C56C))
                                 * (float)(source_component_y - g_183F7C548)))
                 + (float)((float)((float)((float)(*(state_address - 2) * g_183F7C558)
                                         + (float)(*(state_address - 1) * g_183F7C564))
                                 + (float)(*state_address * g_183F7C570))
                         * (float)(source_component_z - g_183F7C54C))) < 0.0 )
        break;
    }
    state_address += 3;
    if ( state_address < &sr_frustum_planes[15] + 2 )
      continue;
    return 1;
  }
}
