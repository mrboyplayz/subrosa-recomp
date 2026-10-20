#include "shared_client.h"
#include "../engine/menu.h"

//----- (000000014006F380) ----------------------------------------------------
__int64            sub_14006F380(unsigned __int8 *a1)
{
  unsigned int text_label_id_result;
  signed int menu_allocate_widget_result;
  signed int saved_menu_allocate_widget_result;
  __int64 scaled_index;
  unsigned int unused_written_slot;
  int call_result;
  int unrecovered_register_value;

  text_label_id_result = sr_text_label_id(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  menu_allocate_widget_result = sr_menu_allocate_widget(
         text_label_id_result,
         menu_x,
         menu_y,
         *(float *)&menu_item_width,
         menu_item_height,
         g_150F610E8);
  saved_menu_allocate_widget_result = menu_allocate_widget_result;
  if ( menu_allocate_widget_result == -1 )
    return 0;
  if ( menu_vertical )
  {
    menu_y = menu_y
                                         + (float)(*(float *)&menu_item_height + 4.0);
  }
  else
  {
    menu_x = menu_x
                                         + (float)(*(float *)&menu_item_width + 4.0);
    menu_row_height = *(float *)&menu_item_height + 4.0;
  }
  scaled_index = 122LL * menu_allocate_widget_result;
  menu_last_widget = menu_allocate_widget_result;
  dword_140404A6C[scaled_index + 70087115] = 0;
  sr_text_copy_visible_label((__int64)&dword_140404A6C[scaled_index + 70087151], (char *)a1);
  unused_written_slot = 0;
  if ( !g_151042650 && g_1510426EC && saved_menu_allocate_widget_result == g_150F61180 )
    dword_140404A6C[scaled_index + 70087215] = 1;
  if ( dword_140404A6C[scaled_index + 70087215] )
  {
    call_result = sub_140071C20("Test4", 64.0, 64.0, 320.0, 0x43A00000u, 1095761920, 768);
    if ( (unsigned int)sr_DrawMenuButton("ADD 10") )
    {
      unused_written_slot = 10;
      dword_140404A6C[scaled_index + 70087215] = 0;
    }
    menu_y = menu_y + 512.0;
    if ( (unsigned int)sr_DrawMenuButton("ADD 11") )
    {
      unused_written_slot = 11;
      dword_140404A6C[scaled_index + 70087215] = 0;
    }
    sub_140077230();
  }
  else
  {
    call_result = unrecovered_register_value;
  }
  if ( call_result == -1 || g_150F61168 != call_result )
    dword_140404A6C[scaled_index + 70087215] = 0;
  return unused_written_slot;
}

//----- (000000014006FEB0) ----------------------------------------------------
__int64            sub_14006FEB0(unsigned __int8 *a1, __int64 a2, float a3, float a4)
{
  unsigned int text_label_id_result;
  signed int menu_allocate_widget_result;
  int saved_menu_allocate_widget_result;
  __int64 scaled_index;
  __int64 result;
  double float_word;

  text_label_id_result = sr_text_label_id(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  menu_allocate_widget_result = sr_menu_allocate_widget(
         text_label_id_result,
         menu_x,
         menu_y,
         *(float *)&menu_item_width,
         menu_item_height,
         g_150F610E8);
  saved_menu_allocate_widget_result = menu_allocate_widget_result;
  if ( menu_vertical )
  {
    menu_y = menu_y
                                         + (float)(*(float *)&menu_item_height + 4.0);
  }
  else
  {
    menu_x = menu_x
                                         + (float)(*(float *)&menu_item_width + 4.0);
    menu_row_height = *(float *)&menu_item_height + 4.0;
  }
  scaled_index = 122LL * menu_allocate_widget_result;
  menu_last_widget = menu_allocate_widget_result;
  *(float *)&dword_140404A6C[scaled_index + 70087219] = a3;
  *(float *)&dword_140404A6C[scaled_index + 70087220] = a4;
  dword_140404A6C[scaled_index + 70087115] = 4;
  *(_QWORD *)&dword_140404A6C[scaled_index + 70087217] = a2;
  g_151042A3C = 24;
  result = sr_text_copy_visible_label((__int64)&dword_140404A6C[scaled_index + 70087151], (char *)a1);
  if ( saved_menu_allocate_widget_result == g_150F61174 )
  {
    *(_QWORD *)&float_word = g_1B0032364;
    *(float *)&float_word = *(float *)&g_1B0032364 - *(float *)&dword_140404A6C[scaled_index + 70087135];
    return sub_140075A40(saved_menu_allocate_widget_result, g_1B0032360 - *(float *)&dword_140404A6C[scaled_index + 70087134], float_word);
  }
  return result;
}

//----- (0000000140070200) ----------------------------------------------------
__int64            sub_140070200(unsigned __int8 *a1, __int64 a2, unsigned int a3)
{
  unsigned int text_label_id_result;
  signed int menu_allocate_widget_result;
  int saved_menu_allocate_widget_result;
  __int64 scaled_index;
  double float_word;

  text_label_id_result = sr_text_label_id(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  menu_allocate_widget_result = sr_menu_allocate_widget(
         text_label_id_result,
         menu_x,
         menu_y,
         *(float *)&menu_item_width,
         menu_item_height,
         g_150F610E8);
  saved_menu_allocate_widget_result = menu_allocate_widget_result;
  if ( menu_vertical )
  {
    menu_y = menu_y
                                         + (float)(*(float *)&menu_item_height + 4.0);
  }
  else
  {
    menu_x = menu_x
                                         + (float)(*(float *)&menu_item_width + 4.0);
    menu_row_height = *(float *)&menu_item_height + 4.0;
  }
  scaled_index = 122LL * menu_allocate_widget_result;
  menu_last_widget = menu_allocate_widget_result;
  dword_140404A6C[scaled_index + 70087115] = 3;
  *(_QWORD *)&dword_140404A6C[scaled_index + 70087215] = a2;
  g_151042A3C = a3;
  sr_text_copy_visible_label((__int64)&dword_140404A6C[scaled_index + 70087151], (char *)a1);
  if ( saved_menu_allocate_widget_result != g_150F61174 )
    return 0;
  *(_QWORD *)&float_word = g_1B0032364;
  *(float *)&float_word = *(float *)&g_1B0032364 - *(float *)&dword_140404A6C[scaled_index + 70087135];
  return sub_140075A40(saved_menu_allocate_widget_result, g_1B0032360 - *(float *)&dword_140404A6C[scaled_index + 70087134], float_word);
}

//----- (00000001400707C0) ----------------------------------------------------
__int64            sub_1400707C0(
        unsigned __int8 *a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int text_label_id_result;
  signed int menu_allocate_widget_result;
  float component_sum;
  signed int saved_menu_allocate_widget_result;
  __int64 scaled_index;
  int integer_quotient;
  unsigned int *state_address;
  float combined_products;
  float component_delta;
  float squared_component;
  float weighted_sum;
  float scaled_value;
  float combined_products_2;
  float combined_products_3;
  float state_scalar;
  float product_difference;
  float weighted_sum_2;
  int state_address_2;
  unsigned int table_value;
  int saved_state_address;
  int masked_bits;
  signed int scaled_index_2;
  signed int *loaded_record_pointer;

  text_label_id_result = sr_text_label_id(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  menu_allocate_widget_result = sr_menu_allocate_widget(
          text_label_id_result,
          menu_x,
          menu_y,
          a2,
          LODWORD(a3),
          g_150F610E8);
  component_sum = a3 + 4.0;
  saved_menu_allocate_widget_result = menu_allocate_widget_result;
  if ( menu_vertical )
  {
    menu_y = menu_y + component_sum;
  }
  else
  {
    menu_row_height = a3 + 4.0;
    menu_x = menu_x + (float)(a2 + 4.0);
  }
  scaled_index = 122LL * menu_allocate_widget_result;
  menu_last_widget = menu_allocate_widget_result;
  dword_140404A6C[scaled_index + 70087215] = a6;
  *(_QWORD *)&dword_140404A6C[scaled_index + 70087225] = (uint64)(uintptr_t)(a7);
  dword_140404A6C[scaled_index + 70087115] = 8;
  dword_140404A6C[scaled_index + 70087222] = *a7;
  *(_QWORD *)&dword_140404A6C[scaled_index + 70087217] = a8;
  dword_140404A6C[scaled_index + 70087219] = a9;
  dword_140404A6C[scaled_index + 70087220] = a10;
  dword_140404A6C[scaled_index + 70087230] = 0;
  *(float *)&dword_140404A6C[scaled_index + 70087228] = a4;
  integer_quotient = (int)(float)(a2 / a4);
  dword_140404A6C[scaled_index + 70087229] = a5;
  if ( integer_quotient < 1 )
    integer_quotient = 1;
  dword_140404A6C[scaled_index + 70087227] = integer_quotient;
  sr_text_copy_visible_label((__int64)&dword_140404A6C[scaled_index + 70087151], (char *)a1);
  state_address = &dword_140404A6C[scaled_index + 70087232];
  combined_products = (float)((int)(dword_140404A6C[scaled_index + 70087227] + a10 - 1) / (int)dword_140404A6C[scaled_index + 70087227])
      * (float)(*(float *)&dword_140404A6C[scaled_index + 70087230] + *(float *)&dword_140404A6C[scaled_index + 70087229]);
  if ( combined_products <= a3 )
  {
    *state_address = 0;
    dword_140404A6C[scaled_index + 70087234] = 0;
  }
  else
  {
    component_delta = combined_products - a3;
    squared_component = (float)(a3 * a3) / combined_products;
    weighted_sum = *(float *)&dword_140404A6C[scaled_index + 70087125] + *(float *)&dword_140404A6C[scaled_index + 70087127];
    *(float *)&dword_140404A6C[scaled_index + 70087234] = component_delta;
    sub_140070FF0(
      text_label_id_result,
      weighted_sum - 16.0,
      *(float *)&dword_140404A6C[scaled_index + 70087126],
      16.0,
      LODWORD(a3),
      COERCE_UNSIGNED_INT(fmaxf(squared_component, 16.0)),
      (float *)&dword_140404A6C[scaled_index + 70087232],
      0.0,
      component_delta);
  }
  if ( saved_menu_allocate_widget_result != g_150F61180 )
    goto LABEL_28;
  scaled_value = *(float *)state_address;
  combined_products_2 = *(float *)&g_1B0032364 - *(float *)&dword_140404A6C[scaled_index + 70087135];
  combined_products_3 = g_1B0032360 - *(float *)&dword_140404A6C[scaled_index + 70087134];
  state_scalar = (float)(int)g_160FC481C;
  g_160FC481C = 0;
  product_difference = scaled_value - (float)(state_scalar * 16.0);
  if ( product_difference < 0.0 )
    product_difference = 0.0;
  weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index + 70087234];
  *(float *)state_address = product_difference;
  if ( product_difference > weighted_sum_2 )
  {
    *(float *)state_address = weighted_sum_2;
    product_difference = weighted_sum_2;
  }
  state_address_2 = 0;
  if ( (int)(float)(combined_products_3
                  / (float)(*(float *)&dword_140404A6C[scaled_index + 70087230] + *(float *)&dword_140404A6C[scaled_index + 70087228])) >= 0 )
    state_address_2 = (int)(float)(combined_products_3
                     / (float)(*(float *)&dword_140404A6C[scaled_index + 70087230] + *(float *)&dword_140404A6C[scaled_index + 70087228]));
  table_value = dword_140404A6C[scaled_index + 70087227];
  saved_state_address = table_value - 1;
  if ( state_address_2 <= (int)(table_value - 1) )
    saved_state_address = state_address_2;
  masked_bits = 0;
  if ( (int)(float)((float)(product_difference + combined_products_2)
                  / (float)(*(float *)&dword_140404A6C[scaled_index + 70087230] + *(float *)&dword_140404A6C[scaled_index + 70087229])) >= 0 )
    masked_bits = (int)(float)((float)(product_difference + combined_products_2)
                     / (float)(*(float *)&dword_140404A6C[scaled_index + 70087230] + *(float *)&dword_140404A6C[scaled_index + 70087229]));
  scaled_index_2 = table_value * masked_bits + saved_state_address;
  if ( scaled_index_2 > (int)(dword_140404A6C[scaled_index + 70087220] - 1) )
  {
LABEL_28:
    dword_140404A6C[scaled_index + 70087223] = -1;
    return 0;
  }
  dword_140404A6C[scaled_index + 70087223] = scaled_index_2;
  if ( scaled_index_2 == -1 || g_151042650 || !g_1510426EC || saved_menu_allocate_widget_result != g_150F61174 )
    return 0;
  loaded_record_pointer = *(signed int **)&dword_140404A6C[scaled_index + 70087225];
  dword_140404A6C[scaled_index + 70087222] = scaled_index_2;
  if ( loaded_record_pointer )
    *loaded_record_pointer = scaled_index_2;
  return 1;
}

//----- (00000001400711D0) ----------------------------------------------------
__int64            sub_1400711D0(unsigned __int8 *a1, float *a2, float a3, float a4, float a5)
{
  unsigned int text_label_id_result;
  signed int menu_allocate_widget_result;
  unsigned int saved_menu_allocate_widget_result;
  __int64 scaled_index;
  __m128 vector_result;
  __m128d converted_vector;
  int table_value;
  float limited_value;

  text_label_id_result = sr_text_label_id(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  menu_allocate_widget_result = sr_menu_allocate_widget(
         text_label_id_result,
         menu_x,
         menu_y,
         *(float *)&menu_item_width,
         menu_item_height,
         g_150F610E8);
  saved_menu_allocate_widget_result = menu_allocate_widget_result;
  if ( menu_vertical )
  {
    menu_y = menu_y
                                         + (float)(*(float *)&menu_item_height + 4.0);
  }
  else
  {
    menu_x = menu_x
                                         + (float)(*(float *)&menu_item_width + 4.0);
    menu_row_height = *(float *)&menu_item_height + 4.0;
  }
  scaled_index = 122LL * menu_allocate_widget_result;
  menu_last_widget = menu_allocate_widget_result;
  dword_140404A6C[scaled_index + 70087115] = 12;
  sr_text_copy_visible_label((__int64)&dword_140404A6C[scaled_index + 70087151], (char *)a1);
  *(float *)&dword_140404A6C[scaled_index + 70087219] = a5;
  *(float *)&dword_140404A6C[scaled_index + 70087217] = a3;
  *(float *)&dword_140404A6C[scaled_index + 70087218] = a4;
  *(_QWORD *)&dword_140404A6C[scaled_index + 70087215] = (uint64)(uintptr_t)(a2);
  dword_140404A6C[scaled_index + 70087220] = 1098907648;
  if ( saved_menu_allocate_widget_result == g_150F61174 )
  {
    if ( g_151042650 )
    {
      vector_result = _mm_castsi128_ps(_mm_cvtsi32_si128((int)*(unsigned int *)&g_1B0032360))  /* lane 0 = that word (was the array address, indexed as a vector) */;
      SR_VEC_LANES(128, vector_result, f32)[0] = (float)((float)((float)(g_1B0032360
                                              - *(float *)&dword_140404A6C[scaled_index + 70087134])
                                      - 8.0)
                              / (float)(*(float *)&dword_140404A6C[scaled_index + 70087127] - 16.0))
                      * fmaxf(a4 - a3, 0.0);
      if ( LOBYTE(g_151041AA0) && a5 != 0.0 )
      {
        SR_VEC_LANES(128, vector_result, f32)[0] = (float)(SR_VEC_LANES(128, vector_result, f32)[0] / a5) + 0.5;
        converted_vector = _mm_cvtps_pd(vector_result);
        table_value = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
        if ( (double)table_value != SR_VEC_LANES(128, converted_vector, f64)[0] )
          SR_VEC_LANES(128, converted_vector, f64)[0] = (double)(table_value - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector, converted_vector)) & 1));
        SR_VEC_LANES(128, vector_result, f32)[0] = SR_VEC_LANES(128, converted_vector, f64)[0] * a5;
      }
      limited_value = fmaxf(SR_VEC_LANES(128, vector_result, f32)[0] + a3, a3);
      if ( limited_value > a4 )
        limited_value = a4;
      *a2 = limited_value;
    }
    else
    {
      dword_140404A6C[scaled_index + 70087116] = 0;
    }
  }
  return saved_menu_allocate_widget_result;
}

//----- (00000001400745F0) ----------------------------------------------------
__int64            sub_1400745F0(unsigned int a1)
{
  __int64 record_word_offset;
  int iteration_count;
  __int64 width = 0; // native width set below
  __int64 width_2 = 0; // native width set below
  double y;
  float height;
  __int64 width_3 = 0; // native width set below
  __int64 width_4 = 0; // native width set below
  double x;
  __int64 width_5 = 0; // native width set below
  __int64 width_6 = 0; // native width set below
  int red;
  float weighted_sum;
  __m128i converted_vector;
  unsigned int *state_address;
  int i;
  double source_float_13;
  double source_float_12;
  signed int state_word;
  signed int element_index;
  unsigned int *state_address_2;
  int scaled_index;
  float text_size;
  __m128i converted_vector_2;
  int scaled_index_2;
  int scaled_index_3;
  float text_x;
  unsigned int *state_address_3;
  int j;
  __int64 k;
  __int64 table_value;
  signed int integer_difference;
  __int64 scaled_index_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400745F0[1120];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400745F0 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_1400745F0 + 32)) /* [rsp+20h] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_1400745F0 + 40)) /* [rsp+28h] */
#define cached_scaled_index_2 (*(int (*))(void *)(sr_frame_1400745F0 + 48)) /* [rsp+30h] */
#define cached_scaled_index_3 (*(int (*))(void *)(sr_frame_1400745F0 + 56)) /* [rsp+38h] */
#define loaded_word (*(int (*))(void *)(sr_frame_1400745F0 + 64)) /* [rsp+40h] */
#define scratch_buffer (*(_DWORD (*)[256])(void *)(sr_frame_1400745F0 + 80)) /* [rsp+50h] */
#define unused_frame_slot_1104 (*(__int64 (*))(void *)(sr_frame_1400745F0 + 1104)) /* [rsp+450h] */

  if ( a1 <= 0xFF )
  {
    record_word_offset = 98LL * (int)a1;
    width=dword_140404A6C[record_word_offset+70290975];
    width_2=dword_140404A6C[record_word_offset+70290975];
    width_3=dword_140404A6C[record_word_offset+70290975];
    width_4=dword_140404A6C[record_word_offset+70290900];
    width_5=dword_140404A6C[record_word_offset+70290900];
    width_6=dword_140404A6C[record_word_offset+70290979];
    if ( (unsigned int)sr_menu_push_clip(
                         *(float *)&dword_140404A6C[record_word_offset + 70290973],
                         *(float *)&dword_140404A6C[record_word_offset + 70290974],
                         *(float *)&dword_140404A6C[record_word_offset + 70290975],
                         *(float *)&dword_140404A6C[record_word_offset + 70290976]) )
    {
      glBindTexture(3553, dword_140404A6C[3592 * renderer_current_font + 72777086]);
      iteration_count = 0;
      sr_renderer_draw_flat_rect(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[record_word_offset + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[record_word_offset + 70290974]),
        width,
        *(float *)&dword_140404A6C[record_word_offset + 70290976],
        0,
        g_150F61138,
        g_150F6113C,
        g_150F61140,
        g_150F61144);
      sr_renderer_draw_flat_rect(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[record_word_offset + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[record_word_offset + 70290974]),
        width_2,
        *(float *)&dword_140404A6C[record_word_offset + 70290900],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      *(_QWORD *)&y = dword_140404A6C[record_word_offset + 70290976];
      height = *(float *)&dword_140404A6C[record_word_offset + 70290900];
      *(float *)&y = (float)(*(float *)&y + *(float *)&dword_140404A6C[record_word_offset + 70290974]) - height;
      sr_renderer_draw_flat_rect(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[record_word_offset + 70290973]),
        y,
        width_3,
        height,
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      sr_renderer_draw_flat_rect(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[record_word_offset + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[record_word_offset + 70290974]),
        width_4,
        *(float *)&dword_140404A6C[record_word_offset + 70290976],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      *(_QWORD *)&x = dword_140404A6C[record_word_offset + 70290973];
      *(float *)&x = (float)(*(float *)&x + *(float *)&dword_140404A6C[record_word_offset + 70290975])
                     - *(float *)&dword_140404A6C[record_word_offset + 70290900];
      sr_renderer_draw_flat_rect(
        x,
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[record_word_offset + 70290974]),
        width_5,
        *(float *)&dword_140404A6C[record_word_offset + 70290976],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      if ( !dword_140404A6C[record_word_offset + 70290972] )
      {
        red = 1056964608;
        if ( a1 == g_150F6116C )
          red = 1059061760;
        sr_renderer_draw_flat_rect(
          COERCE_DOUBLE((unsigned __int64)dword_140404A6C[record_word_offset + 70290977]),
          COERCE_DOUBLE((unsigned __int64)dword_140404A6C[record_word_offset + 70290978]),
          width_6,
          *(float *)&dword_140404A6C[record_word_offset + 70290980],
          0,
          red,
          red,
          red,
          1065353216);
        weighted_sum = *(float *)&dword_140404A6C[record_word_offset + 70290977] + *(float *)&dword_140404A6C[record_word_offset + 70290900];
        converted_vector = _mm_cvtsi32_si128((int)dword_140404A6C[record_word_offset+70290978]);
        *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 4.0;
        loaded_word = 1065353216;
        cached_scaled_index_3 = 1065353216;
        cached_scaled_index_2 = 1065353216;
        cached_scaled_index = 1065353216;
        unused_written_slot = 64;
        sr_text_draw_recovered((char *)&dword_140404A6C[record_word_offset + 70290908], weighted_sum + 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), *(float *)&g_150F610E8, 64, sr_text_bits_float(cached_scaled_index), sr_text_bits_float(cached_scaled_index_2), sr_text_bits_float(cached_scaled_index_3), sr_text_bits_float(loaded_word), NULL);
      }
      sr_menu_pop_clip();
      if ( (unsigned int)sr_menu_push_clip(
                           *(float *)&dword_140404A6C[record_word_offset + 70290981],
                           *(float *)&dword_140404A6C[record_word_offset + 70290982],
                           *(float *)&dword_140404A6C[record_word_offset + 70290983],
                           *(float *)&dword_140404A6C[record_word_offset + 70290984]) )
      {
        state_address = &g_150F611B4;
        for ( i = 0; i < 1024; ++i )
        {
          if ( *(state_address - 9) == 3 && *state_address == a1 && *(state_address - 4) )
          {
            *(_QWORD *)&source_float_13 = state_address[13];
            *(_QWORD *)&source_float_12 = state_address[12];
            renderer_current_font = state_address[1];
            sub_140073430(i, source_float_12, source_float_13);
          }
          state_address += 122;
        }
        state_word = g_150FDB190;
        element_index = 0;
        if ( (int)g_150FDB190 > 0 )
        {
          state_address_2 = &g_150FDB1B0;
          do
          {
            if ( *(state_address_2 - 6) == a1 )
            {
              scaled_index = *(state_address_2 - 1);
              text_size = *((float *)state_address_2 + 1);
              converted_vector_2 = _mm_cvtsi32_si128((int)(state_address_2[3]));
              loaded_word = *state_address_2;
              scaled_index_2 = *(state_address_2 - 2);
              cached_scaled_index_3 = scaled_index;
              scaled_index_3 = *(state_address_2 - 3);
              cached_scaled_index_2 = scaled_index_2;
              cached_scaled_index = scaled_index_3;
              text_x = *((float *)state_address_2 + 2);
              unused_written_slot = 64;
              sr_text_draw_recovered((char *)&dword_140404A6C[77 * element_index + 70212055], text_x, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2))), text_size, 64, sr_text_bits_float(cached_scaled_index), sr_text_bits_float(cached_scaled_index_2), sr_text_bits_float(cached_scaled_index_3), sr_text_bits_float(loaded_word), NULL);
              state_word = g_150FDB190;
            }
            ++element_index;
            state_address_2 += 77;
          }
          while ( element_index < state_word );
        }
        state_address_3 = &g_1510281A0;
        for ( j = 0; j < 256; ++j )
        {
          if ( *(state_address_3 - 2) == 3 && *state_address_3 == a1 )
          {
            ++iteration_count;
            scratch_buffer[state_address_3[2]] = j;
          }
          state_address_3 += 98;
        }
        for ( k = iteration_count - 1; k >= 0; --k )
        {
          table_value = (int)scratch_buffer[k];
          if ( dword_140404A6C[98 * table_value + 70290891] == 3 )
            sub_1400745F0(table_value);
        }
        if ( (int)g_15104270C <= 0
          || (integer_difference = g_15104270C - 1, g_15104270C = integer_difference, integer_difference <= 0) )
        {
          glDisable(3089);
        }
        else
        {
          scaled_index_4 = 2LL * integer_difference;
          *(unsigned int *)&g_151042A1C = dword_140404A6C[2 * scaled_index_4 + 70317861];
          g_151042A24 = dword_140404A6C[2 * scaled_index_4 + 70317863];
          *(unsigned int *)&g_151042A20 = dword_140404A6C[2 * scaled_index_4 + 70317862];
          g_151042A28 = dword_140404A6C[2 * scaled_index_4 + 70317864];
          sr_camera_set_scissor(
            g_151042A1C,
            g_151042A20,
            *(float *)&g_151042A24,
            *(float *)&g_151042A28);
        }
      }
    }
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef unused_frame_slot_0
#undef unused_written_slot
#undef cached_scaled_index
#undef cached_scaled_index_2
#undef cached_scaled_index_3
#undef loaded_word
#undef scratch_buffer
#undef unused_frame_slot_1104

//----- (0000000140074E50) ----------------------------------------------------
void sub_140074E50()
{
  int iteration_count;
  __int64 record_byte_offset;
  unsigned int *record_byte_offset_2;
  unsigned int *record_byte_offset_3;
  int running_total;
  int *saved_record_byte_offset;
  __int64 running_total_2;
  __int64 table_value;
  unsigned int table_value_2;
  __int64 scaled_index;
  __int64 remaining_count;
  __int64 remaining_count_2;
  _DWORD *buffer_cursor;
  unsigned int *state_address;
  unsigned int table_value_3;
  __int64 scaled_index_2;
  __int64 table_value_4;
  __int64 remaining_count_3;
  __int64 table_value_5;
  int *buffer_cursor_2;
  __int64 table_value_6;
  unsigned int table_value_7;
  __int64 scaled_index_3;
  __int64 remaining_count_4;
  __int64 remaining_count_5;
  _DWORD *buffer_cursor_3;
  unsigned int *state_address_2;
  unsigned int table_value_8;
  __int64 scaled_index_4;
  __int64 table_value_9;
  __int64 remaining_count_6;
  __int64 table_value_10;
  int *buffer_cursor_4;
  __int64 table_value_11;
  unsigned int table_value_12;
  __int64 scaled_index_5;
  __int64 remaining_count_7;
  _DWORD *buffer_cursor_5;
  unsigned int *state_address_3;
  unsigned int table_value_13;
  __int64 scaled_index_6;
  __int64 table_value_14;
  __int64 i;
  unsigned int *state_address_4;
  __int64 table_value_15;
  __int64 remaining_count_8;
  _DWORD *buffer_cursor_6;

  iteration_count = 0;
  g_15104AA48 = 0;
  record_byte_offset = 0;
  record_byte_offset_2 = &g_15104AA4C;
  record_byte_offset_3 = &g_15104AA10;
  do
  {
    running_total = 0;
    saved_record_byte_offset = (int *)record_byte_offset_3;
    running_total_2 = 2;
    do
    {
      table_value = saved_record_byte_offset[15];
      if ( (_DWORD)table_value == -1 )
        goto LABEL_30;
      table_value_2 = saved_record_byte_offset[16];
      if ( table_value_2 == -1 )
      {
        if ( running_total <= 0 )
          goto LABEL_9;
        dword_140404A6C[122 * table_value + 70087141] = *record_byte_offset_2;
        scaled_index = (int)*record_byte_offset_2;
      }
      else
      {
        dword_140404A6C[122 * table_value + 70087141] = table_value_2;
        scaled_index = saved_record_byte_offset[16];
      }
      dword_140404A6C[122 * scaled_index + 70087140] = table_value;
LABEL_9:
      remaining_count = running_total_2 - 2;
      remaining_count_2 = running_total_2 - 2;
      if ( running_total_2 - 2 > 0 )
      {
        buffer_cursor = saved_record_byte_offset + 31;
        do
        {
          if ( *buffer_cursor != -1 )
            break;
          --remaining_count_2;
          --buffer_cursor;
        }
        while ( remaining_count_2 > 0 );
      }
      state_address = &dword_140404A6C[record_byte_offset + 70087029 + remaining_count_2];
      table_value_3 = state_address[239251];
      if ( table_value_3 == -1 )
      {
        if ( !iteration_count )
          goto LABEL_30;
        remaining_count_3 = running_total_2 - 2;
        if ( remaining_count > 0 )
        {
          do
          {
            if ( dword_140404A6C[remaining_count_3 + 70326264] != -1 )
              break;
            --remaining_count_3;
          }
          while ( remaining_count_3 > 0 );
        }
        scaled_index_2 = 122 * table_value;
        dword_140404A6C[122 * table_value + 70087139] = dword_140404A6C[remaining_count_3 + 70326264];
        table_value_5 = (int)dword_140404A6C[remaining_count_3 + 70326264];
        if ( dword_140404A6C[122 * table_value_5 + 70087138] == -1 )
          dword_140404A6C[122 * table_value_5 + 70087138] = table_value;
LABEL_24:
        if ( dword_140404A6C[scaled_index_2 + 70087138] == -1 )
        {
          if ( remaining_count > 0 )
          {
            buffer_cursor_2 = saved_record_byte_offset - 1;
            do
            {
              if ( *buffer_cursor_2 != -1 )
                break;
              --remaining_count;
              --buffer_cursor_2;
            }
            while ( remaining_count > 0 );
          }
          dword_140404A6C[scaled_index_2 + 70087138] = dword_140404A6C[remaining_count + 70326248 + record_byte_offset];
        }
        goto LABEL_30;
      }
      scaled_index_2 = 122 * table_value;
      dword_140404A6C[122 * table_value + 70087139] = table_value_3;
      table_value_4 = (int)state_address[239251];
      if ( dword_140404A6C[122 * table_value_4 + 70087138] == -1 )
        dword_140404A6C[122 * table_value_4 + 70087138] = table_value;
      if ( iteration_count )
        goto LABEL_24;
LABEL_30:
      table_value_6 = saved_record_byte_offset[16];
      if ( (_DWORD)table_value_6 == -1 )
        goto LABEL_57;
      table_value_7 = saved_record_byte_offset[17];
      if ( table_value_7 == -1 )
      {
        if ( running_total + 1 <= 0 )
          goto LABEL_36;
        dword_140404A6C[122 * table_value_6 + 70087141] = *record_byte_offset_2;
        scaled_index_3 = (int)*record_byte_offset_2;
      }
      else
      {
        dword_140404A6C[122 * table_value_6 + 70087141] = table_value_7;
        scaled_index_3 = saved_record_byte_offset[17];
      }
      dword_140404A6C[122 * scaled_index_3 + 70087140] = table_value_6;
LABEL_36:
      remaining_count_4 = running_total_2 - 1;
      remaining_count_5 = running_total_2 - 1;
      if ( running_total_2 - 1 > 0 )
      {
        buffer_cursor_3 = saved_record_byte_offset + 32;
        do
        {
          if ( *buffer_cursor_3 != -1 )
            break;
          --remaining_count_5;
          --buffer_cursor_3;
        }
        while ( remaining_count_5 > 0 );
      }
      state_address_2 = &dword_140404A6C[record_byte_offset + 70087029 + remaining_count_5];
      table_value_8 = state_address_2[239251];
      if ( table_value_8 == -1 )
      {
        if ( !iteration_count )
          goto LABEL_57;
        remaining_count_6 = running_total_2 - 1;
        if ( remaining_count_4 > 0 )
        {
          do
          {
            if ( dword_140404A6C[remaining_count_6 + 70326264] != -1 )
              break;
            --remaining_count_6;
          }
          while ( remaining_count_6 > 0 );
        }
        scaled_index_4 = 122 * table_value_6;
        dword_140404A6C[122 * table_value_6 + 70087139] = dword_140404A6C[remaining_count_6 + 70326264];
        table_value_10 = (int)dword_140404A6C[remaining_count_6 + 70326264];
        if ( dword_140404A6C[122 * table_value_10 + 70087138] == -1 )
          dword_140404A6C[122 * table_value_10 + 70087138] = table_value_6;
LABEL_51:
        if ( dword_140404A6C[scaled_index_4 + 70087138] == -1 )
        {
          if ( remaining_count_4 > 0 )
          {
            buffer_cursor_4 = saved_record_byte_offset;
            do
            {
              if ( *buffer_cursor_4 != -1 )
                break;
              --remaining_count_4;
              --buffer_cursor_4;
            }
            while ( remaining_count_4 > 0 );
          }
          dword_140404A6C[scaled_index_4 + 70087138] = dword_140404A6C[remaining_count_4 + 70326248 + record_byte_offset];
        }
        goto LABEL_57;
      }
      scaled_index_4 = 122 * table_value_6;
      dword_140404A6C[122 * table_value_6 + 70087139] = table_value_8;
      table_value_9 = (int)state_address_2[239251];
      if ( dword_140404A6C[122 * table_value_9 + 70087138] == -1 )
        dword_140404A6C[122 * table_value_9 + 70087138] = table_value_6;
      if ( iteration_count )
        goto LABEL_51;
LABEL_57:
      table_value_11 = saved_record_byte_offset[17];
      if ( (_DWORD)table_value_11 == -1 )
        goto LABEL_84;
      table_value_12 = saved_record_byte_offset[18];
      if ( table_value_12 == -1 )
      {
        if ( running_total + 2 <= 0 )
          goto LABEL_63;
        dword_140404A6C[122 * table_value_11 + 70087141] = *record_byte_offset_2;
        scaled_index_5 = (int)*record_byte_offset_2;
      }
      else
      {
        dword_140404A6C[122 * table_value_11 + 70087141] = table_value_12;
        scaled_index_5 = saved_record_byte_offset[18];
      }
      dword_140404A6C[122 * scaled_index_5 + 70087140] = table_value_11;
LABEL_63:
      remaining_count_7 = running_total_2;
      if ( running_total_2 > 0 )
      {
        buffer_cursor_5 = saved_record_byte_offset + 33;
        do
        {
          if ( *buffer_cursor_5 != -1 )
            break;
          --remaining_count_7;
          --buffer_cursor_5;
        }
        while ( remaining_count_7 > 0 );
      }
      state_address_3 = &dword_140404A6C[record_byte_offset + 70087029 + remaining_count_7];
      table_value_13 = state_address_3[239251];
      if ( table_value_13 == -1 )
      {
        if ( !iteration_count )
          goto LABEL_84;
        for ( i = running_total_2; i > 0; --i )
        {
          if ( dword_140404A6C[i + 70326264] != -1 )
            break;
        }
        state_address_4 = &dword_140404A6C[i + 70087029];
        scaled_index_6 = 122 * table_value_11;
        dword_140404A6C[122 * table_value_11 + 70087139] = state_address_4[239235];
        table_value_15 = (int)state_address_4[239235];
        if ( dword_140404A6C[122 * table_value_15 + 70087138] == -1 )
          dword_140404A6C[122 * table_value_15 + 70087138] = table_value_11;
LABEL_78:
        if ( dword_140404A6C[scaled_index_6 + 70087138] == -1 )
        {
          remaining_count_8 = running_total_2;
          if ( running_total_2 > 0 )
          {
            buffer_cursor_6 = saved_record_byte_offset + 1;
            do
            {
              if ( *buffer_cursor_6 != -1 )
                break;
              --remaining_count_8;
              --buffer_cursor_6;
            }
            while ( remaining_count_8 > 0 );
          }
          dword_140404A6C[scaled_index_6 + 70087138] = dword_140404A6C[record_byte_offset + 70326248 + remaining_count_8];
        }
        goto LABEL_84;
      }
      scaled_index_6 = 122 * table_value_11;
      dword_140404A6C[122 * table_value_11 + 70087139] = table_value_13;
      table_value_14 = (int)state_address_3[239251];
      if ( dword_140404A6C[122 * table_value_14 + 70087138] == -1 )
        dword_140404A6C[122 * table_value_14 + 70087138] = table_value_11;
      if ( iteration_count )
        goto LABEL_78;
LABEL_84:
      running_total += 3;
      saved_record_byte_offset += 3;
      running_total_2 += 3;
    }
    while ( running_total < 15 );
    ++iteration_count;
    record_byte_offset += 16;
    record_byte_offset_3 += 16;
    record_byte_offset_2 += 16;
  }
  while ( iteration_count < 15 );
}

//----- (0000000140076770) ----------------------------------------------------
__int64            sub_140076770(char a1)
{
  unsigned int *record_byte_offset;
  unsigned int *record_byte_offset_2;
  __int64 remaining_count;
  __int64 remaining_count_2;
  __int128 loaded_word;
  unsigned int state_word;
  int j;
  unsigned int scaled_index;
  __int64 scaled_index_2;
  int i;
  __int64 scaled_index_3;
  unsigned int ui_mouse_state_result;
  int masked_bits;
  int shifted_bits;
  unsigned int masked_bits_2;
  unsigned int float_word;
  signed int saved_loaded_word;
  __int64 scaled_index_4;
  unsigned int loaded_word_2;
  int selection_flag;
  __int64 iteration_count;
  int iteration_count_2;
  unsigned int *state_address;
  __int64 remaining_count_3;
  unsigned __int64 remaining_count_4;
  unsigned int *state_address_2;
  __int64 scaled_index_5;
  float weighted_sum;
  float weighted_sum_2;
  __int64 scaled_index_6;
  float weighted_sum_3;
  float weighted_sum_4;
  __int64 scaled_index_7;
  float weighted_sum_5;
  float weighted_sum_6;
  __int64 scaled_index_8;
  float weighted_sum_7;
  float weighted_sum_8;
  __int64 scaled_index_9;
  float weighted_sum_9;
  float weighted_sum_10;
  unsigned int saved_iteration_count;
  unsigned int *state_address_3;
  int iteration_count_3;
  signed int saved_loaded_word_2;
  int iteration_count_4;
  __int64 scaled_index_10;
  unsigned int *state_address_4;
  signed int table_value;
  unsigned int table_value_2;
  __int64 scaled_index_11;
  unsigned int *buffer_cursor;
  int iteration_count_5;
  __int64 remaining_count_5;
  __int64 scaled_index_12;
  float *state_address_5;
  int iteration_count_6;
  unsigned int saved_iteration_count_2;
  signed int saved_iteration_count_3;
  float product_difference;
  __int64 scaled_index_13;
  unsigned int state_word_2;
  __int64 element_index;
  int rol4_result;
  __int64 remaining_count_6;
  unsigned int *state_address_6;
  int scaled_index_14;
  unsigned int *state_address_7;
  int scaled_index_15;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140076770[16];
#define callee_output_word (*(int (*))(void *)(sr_frame_140076770 + 0)) /* [rsp+60h] */
#define callee_output_word_2 (*(int (*))(void *)(sr_frame_140076770 + 8)) /* [rsp+68h] */

  record_byte_offset = &g_151041BC0;
  g_150F6117C = g_150F61174;
  record_byte_offset_2 = &g_1510419C0;
  remaining_count = 2;
  remaining_count_2 = 128;
  do
  {
    *(_OWORD *)record_byte_offset = *(_OWORD *)record_byte_offset_2;
    *((_OWORD *)record_byte_offset + 1) = *((_OWORD *)record_byte_offset_2 + 1);
    *((_OWORD *)record_byte_offset + 2) = *((_OWORD *)record_byte_offset_2 + 2);
    *((_OWORD *)record_byte_offset + 3) = *((_OWORD *)record_byte_offset_2 + 3);
    *((_OWORD *)record_byte_offset + 4) = *((_OWORD *)record_byte_offset_2 + 4);
    *((_OWORD *)record_byte_offset + 5) = *((_OWORD *)record_byte_offset_2 + 5);
    *((_OWORD *)record_byte_offset + 6) = *((_OWORD *)record_byte_offset_2 + 6);
    record_byte_offset += 32;
    loaded_word = *((_OWORD *)record_byte_offset_2 + 7);
    record_byte_offset_2 += 32;
    *((_OWORD *)record_byte_offset - 1) = loaded_word;
    --remaining_count;
  }
  while ( remaining_count );
  state_word = g_1B0032400;
  *(_OWORD *)record_byte_offset = *(_OWORD *)record_byte_offset_2;
  *((_OWORD *)record_byte_offset + 1) = *((_OWORD *)record_byte_offset_2 + 1);
  *((_OWORD *)record_byte_offset + 2) = *((_OWORD *)record_byte_offset_2 + 2);
  *((_OWORD *)record_byte_offset + 3) = *((_OWORD *)record_byte_offset_2 + 3);
  *((_WORD *)record_byte_offset + 32) = *((_WORD *)record_byte_offset_2 + 32);
  *((_BYTE *)record_byte_offset + 66) = *((_BYTE *)record_byte_offset_2 + 66);
  if ( (a1 & 2) != 0 )
  {
    if ( !g_151042A2C )
    {
      for ( i = g_150F61184; i != state_word; g_150F61184 = i )
      {
        if ( !dword_140404A6C[5 * i + 468760167] )
        {
          scaled_index_3 = (int)dword_140404A6C[dword_140404A6C[5 * i + 468760168] + 70317269];
          if ( (_DWORD)scaled_index_3 != -1 )
          {
            dword_140404A6C[122 * scaled_index_3 + 70087121] = 1;
            LOWORD(i) = g_150F61184;
          }
        }
        i = ((_WORD)i + 1) & 0x3FF;
      }
    }
  }
  else if ( !g_151042A2C )
  {
    for ( j = g_1B0032404; j != state_word; g_1B0032404 = j )
    {
      scaled_index = dword_140404A6C[5 * j + 468760167];
      if ( scaled_index == 1 )
      {
        scaled_index_2 = (int)dword_140404A6C[dword_140404A6C[5 * j + 468760168] + 70317269];
        if ( (_DWORD)scaled_index_2 != -1 )
          dword_140404A6C[122 * scaled_index_2 + 70087121] = 1;
        *((_BYTE *)&g_1510419C0 + (int)dword_140404A6C[5 * j + 468760168]) = 0;
      }
      if ( !scaled_index )
        *((_BYTE *)&g_1510419C0 + (int)dword_140404A6C[5 * j + 468760168]) = 1;
      j = ((_WORD)j + 1) & 0x3FF;
    }
  }
  g_150F61184 = state_word;
  g_1510426F4 = g_151042658;
  g_15104265C = *(_OWORD *)&g_1510425C0;
  g_15104266C = g_1510425D0;
  g_15104267C = g_1510425E0;
  g_15104268C = g_1510425F0;
  g_15104269C = g_151042600;
  g_1510426AC = g_151042610;
  g_1510426BC = g_151042620;
  g_1510426CC = g_151042630;
  *(_QWORD *)&g_1510426EC = *(_QWORD *)&g_151042650;
  g_1510426DC = g_151042640;
  if ( (a1 & 1) != 0 )
  {
    ui_mouse_state_result = g_1B00323F8;
    shifted_bits = g_1B00323F4;
    masked_bits = g_1B00323F0;
    float_word = g_1B0032364;
    masked_bits_2 = *(unsigned int *)&g_1B0032360;
  }
  else
  {
    ui_mouse_state_result = sr_ui_mouse_state(&callee_output_word, &callee_output_word_2);
    masked_bits = ui_mouse_state_result & 1;
    shifted_bits = ((unsigned __int8)ui_mouse_state_result >> 2) & 1;
    g_1B00323F8 = ui_mouse_state_result;
    g_1B00323F0 = masked_bits;
    g_1B00323F4 = shifted_bits;
    *(float *)&masked_bits_2 = (float)((float)callee_output_word * (renderer_canvas_width))
                   / (float)(int)g_160FC47D8;
    *(unsigned int *)&g_1B0032360 = masked_bits_2;
    *(float *)&float_word = (float)((float)callee_output_word_2 * (renderer_canvas_height))
                   / (float)(int)g_160FC47DC;
    g_1B0032364 = float_word;
  }
  saved_loaded_word = g_150F61168;
  g_151042658 = ui_mouse_state_result;
  g_150F61084 = -1;
  g_150F61040 = 0;
  g_150F610CC = -1;
  g_150F61088 = 0;
  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1082130432;
  menu_vertical = 1;
  *(_OWORD *)&g_1510425C0 = *(_OWORD *)&g_1B0032360;
  g_1510425D0 = g_1B0032370;
  g_1510425E0 = g_1B0032380;
  g_1510425F0 = g_1B0032390;
  g_151042600 = g_1B00323A0;
  g_151042610 = g_1B00323B0;
  g_151042620 = g_1B00323C0;
  g_151042630 = g_1B00323D0;
  *(_QWORD *)&g_151042650 = *(_QWORD *)&g_1B00323F0;
  g_151042640 = g_1B00323E0;
  if ( g_150F61168 != -1 )
  {
    scaled_index_4 = 98LL * (int)g_150F61168;
    if ( (int)dword_140404A6C[scaled_index_4 + 70290891] < 3 )
    {
      saved_loaded_word = dword_140404A6C[scaled_index_4 + 70290894];
      g_150F61168 = saved_loaded_word;
    }
  }
  loaded_word_2 = -1;
  do
  {
    selection_flag = 0;
    iteration_count = 0;
    iteration_count_2 = 0;
    state_address = &g_1510281A0;
    do
    {
      if ( *(state_address - 2) == 3 && *state_address == loaded_word_2 )
      {
        ++iteration_count;
        dword_140404A6C[state_address[2] + 18215381] = iteration_count_2;
      }
      ++iteration_count_2;
      state_address += 98;
    }
    while ( iteration_count_2 < 256 );
    remaining_count_3 = iteration_count - 1;
    if ( iteration_count - 1 < 0 )
      break;
    if ( iteration_count < 4 )
      goto LABEL_163;
    remaining_count_4 = (unsigned __int64)iteration_count >> 2;
    state_address_2 = &dword_140404A6C[remaining_count_3 + 18215379];
    remaining_count_3 -= 4 * remaining_count_4;
    do
    {
      scaled_index_5 = 98LL * (int)state_address_2[2];
      if ( dword_140404A6C[scaled_index_5 + 70290891] == 3 )
      {
        weighted_sum = *(float *)&dword_140404A6C[scaled_index_5 + 70290973];
        if ( *(float *)&masked_bits_2 >= weighted_sum && *(float *)&masked_bits_2 < (float)(weighted_sum + *(float *)&dword_140404A6C[scaled_index_5 + 70290975]) )
        {
          weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index_5 + 70290974];
          if ( *(float *)&float_word >= weighted_sum_2 && *(float *)&float_word < (float)(weighted_sum_2 + *(float *)&dword_140404A6C[scaled_index_5 + 70290976]) )
          {
            loaded_word_2 = state_address_2[2];
            selection_flag = 1;
          }
        }
      }
      scaled_index_6 = 98LL * (int)state_address_2[1];
      if ( dword_140404A6C[scaled_index_6 + 70290891] == 3 )
      {
        weighted_sum_3 = *(float *)&dword_140404A6C[scaled_index_6 + 70290973];
        if ( *(float *)&masked_bits_2 >= weighted_sum_3 && *(float *)&masked_bits_2 < (float)(weighted_sum_3 + *(float *)&dword_140404A6C[scaled_index_6 + 70290975]) )
        {
          weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index_6 + 70290974];
          if ( *(float *)&float_word >= weighted_sum_4 && *(float *)&float_word < (float)(weighted_sum_4 + *(float *)&dword_140404A6C[scaled_index_6 + 70290976]) )
          {
            loaded_word_2 = state_address_2[1];
            selection_flag = 1;
          }
        }
      }
      scaled_index_7 = 98LL * (int)*state_address_2;
      if ( dword_140404A6C[scaled_index_7 + 70290891] == 3 )
      {
        weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index_7 + 70290973];
        if ( *(float *)&masked_bits_2 >= weighted_sum_5 && *(float *)&masked_bits_2 < (float)(weighted_sum_5 + *(float *)&dword_140404A6C[scaled_index_7 + 70290975]) )
        {
          weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index_7 + 70290974];
          if ( *(float *)&float_word >= weighted_sum_6 && *(float *)&float_word < (float)(weighted_sum_6 + *(float *)&dword_140404A6C[scaled_index_7 + 70290976]) )
          {
            loaded_word_2 = *state_address_2;
            selection_flag = 1;
          }
        }
      }
      scaled_index_8 = 98LL * (int)*(state_address_2 - 1);
      if ( dword_140404A6C[scaled_index_8 + 70290891] == 3 )
      {
        weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index_8 + 70290973];
        if ( *(float *)&masked_bits_2 >= weighted_sum_7 && *(float *)&masked_bits_2 < (float)(weighted_sum_7 + *(float *)&dword_140404A6C[scaled_index_8 + 70290975]) )
        {
          weighted_sum_8 = *(float *)&dword_140404A6C[scaled_index_8 + 70290974];
          if ( *(float *)&float_word >= weighted_sum_8 && *(float *)&float_word < (float)(weighted_sum_8 + *(float *)&dword_140404A6C[scaled_index_8 + 70290976]) )
          {
            loaded_word_2 = *(state_address_2 - 1);
            selection_flag = 1;
          }
        }
      }
      state_address_2 -= 4;
      --remaining_count_4;
    }
    while ( remaining_count_4 );
    if ( remaining_count_3 >= 0 )
    {
LABEL_163:
      do
      {
        scaled_index_9 = 98LL * (int)dword_140404A6C[remaining_count_3 + 18215381];
        if ( dword_140404A6C[scaled_index_9 + 70290891] == 3 )
        {
          weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index_9 + 70290973];
          if ( *(float *)&masked_bits_2 >= weighted_sum_9 && *(float *)&masked_bits_2 < (float)(weighted_sum_9 + *(float *)&dword_140404A6C[scaled_index_9 + 70290975]) )
          {
            weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index_9 + 70290974];
            if ( *(float *)&float_word >= weighted_sum_10 && *(float *)&float_word < (float)(weighted_sum_10 + *(float *)&dword_140404A6C[scaled_index_9 + 70290976]) )
            {
              loaded_word_2 = dword_140404A6C[remaining_count_3 + 18215381];
              selection_flag = 1;
            }
          }
        }
        --remaining_count_3;
      }
      while ( remaining_count_3 >= 0 );
    }
  }
  while ( selection_flag );
  saved_iteration_count = g_150F61178;
  if ( g_151040998 == 3 )
    loaded_word_2 = g_1510409A0;
  g_150F61170 = loaded_word_2;
  if ( g_150F61178 != -1 )
  {
    if ( dword_140404A6C[122 * g_150F61178 + 70087113] != 3 )
      saved_iteration_count = -1;
    g_150F61178 = saved_iteration_count;
  }
  if ( masked_bits && !g_1510426EC || shifted_bits && !g_1510426F0 )
  {
    saved_loaded_word = loaded_word_2;
    state_address_3 = &g_150F61198;
    g_150F61168 = loaded_word_2;
    iteration_count_3 = 0;
    saved_loaded_word_2 = loaded_word_2;
    do
    {
      if ( *(state_address_3 - 2) == 3 && *state_address_3 == 6 )
      {
        if ( state_address_3[7] == loaded_word_2 )
          saved_iteration_count = iteration_count_3;
        g_150F61178 = saved_iteration_count;
      }
      ++iteration_count_3;
      state_address_3 += 122;
    }
    while ( iteration_count_3 < 1024 );
    if ( loaded_word_2 != -1 )
    {
      do
      {
        iteration_count_4 = 0;
        scaled_index_10 = 98LL * saved_loaded_word_2;
        state_address_4 = &g_1510281A8;
        table_value = dword_140404A6C[scaled_index_10 + 70290895];
        table_value_2 = dword_140404A6C[scaled_index_10 + 70290893];
        do
        {
          if ( (int)*(state_address_4 - 4) >= 2 && iteration_count_4 != saved_loaded_word_2 && *(state_address_4 - 2) == table_value_2 && (int)*state_address_4 < table_value )
            ++*state_address_4;
          ++iteration_count_4;
          state_address_4 += 98;
        }
        while ( iteration_count_4 < 256 );
        saved_loaded_word_2 = dword_140404A6C[scaled_index_10 + 70290893];
        dword_140404A6C[scaled_index_10 + 70290895] = 0;
      }
      while ( saved_loaded_word_2 != -1 );
      saved_loaded_word = g_150F61168;
    }
  }
  g_150F6116C = saved_loaded_word;
  if ( saved_loaded_word != -1 )
  {
    scaled_index_11 = 98LL * saved_loaded_word;
    if ( dword_140404A6C[scaled_index_11 + 70290972] )
      g_150F6116C = dword_140404A6C[scaled_index_11 + 70290894];
  }
  g_150F61180 = -1;
  buffer_cursor = &g_151041DC0;
  iteration_count_5 = 0;
  remaining_count_5 = 512;
  do
  {
    scaled_index_12 = (int)*buffer_cursor;
    if ( (_DWORD)scaled_index_12 != -1
      && ((int)dword_140404A6C[122 * scaled_index_12 + 70087113] < 3 || dword_140404A6C[122 * scaled_index_12 + 70087120] != iteration_count_5) )
    {
      *buffer_cursor = -1;
    }
    ++iteration_count_5;
    ++buffer_cursor;
  }
  while ( iteration_count_5 < 512 );
  state_address_5 = (float *)&g_150F611E8;
  iteration_count_6 = 0;
  saved_iteration_count_2 = g_150F61180;
  saved_iteration_count_3 = g_150F61174;
  do
  {
    if ( *((_DWORD *)state_address_5 - 22) == 3 && *((_DWORD *)state_address_5 - 13) == loaded_word_2 )
    {
      if ( *((_DWORD *)state_address_5 - 17) )
      {
        product_difference = *(state_address_5 - 1);
        if ( g_1510425C0 >= product_difference
          && g_1510425C0 < (float)(product_difference + state_address_5[1])
          && g_1510425C4 >= *state_address_5
          && g_1510425C4 < (float)(*state_address_5 + state_address_5[2])
          && (!g_151042650 || !g_1510426EC || saved_iteration_count_3 == iteration_count_6) )
        {
          g_150F61180 = iteration_count_6;
          saved_iteration_count_2 = iteration_count_6;
          if ( g_151042650 )
          {
            if ( !g_1510426EC )
              saved_iteration_count_3 = iteration_count_6;
            g_150F61174 = saved_iteration_count_3;
          }
        }
      }
    }
    ++iteration_count_6;
    state_address_5 += 122;
  }
  while ( iteration_count_6 < 1024 );
  if ( saved_iteration_count_2 != -1 )
  {
LABEL_126:
    if ( g_151042650 )
      goto LABEL_132;
    goto LABEL_127;
  }
  if ( g_151042650 )
  {
    if ( !g_1510426EC )
      saved_iteration_count_3 = -1;
    g_150F61174 = saved_iteration_count_3;
    goto LABEL_126;
  }
LABEL_127:
  *(_QWORD *)&g_1510426FC = -1;
  if ( saved_iteration_count_3 != -1 && !g_1510426EC )
  {
    scaled_index_13 = 122LL * saved_iteration_count_3;
    if ( (int)dword_140404A6C[scaled_index_13 + 70087113] < 3 || dword_140404A6C[scaled_index_13 + 70087115] - 3 > 2 )
      g_150F61174 = -1;
  }
LABEL_132:
  state_word_2 = g_150F61188;
  if ( g_150F61188 != -1 )
  {
    element_index = 0;
    rol4_result = 1;
    remaining_count_6 = 4;
    do
    {
      if ( (g_15104AA40 & rol4_result) == rol4_result && (g_15104AA44 & rol4_result) != rol4_result )
      {
        if ( dword_140404A6C[122 * (int)state_word_2 + 70087138 + element_index] != -1 )
          state_word_2 = dword_140404A6C[122 * (int)state_word_2 + 70087138 + element_index];
        g_150F61188 = state_word_2;
      }
      rol4_result = __ROL4__(rol4_result, 1);
      ++element_index;
      --remaining_count_6;
    }
    while ( remaining_count_6 );
    if ( (int)dword_140404A6C[122 * state_word_2 + 70087113] < 3 )
      state_word_2 = -1;
    g_150F61188 = state_word_2;
  }
  g_150F6118C = 0;
  if ( (g_15104AA40 & 0x10) != 0 )
    g_150F6118C = (g_15104AA44 & 0x10) == 0;
  g_15104AA44 = g_15104AA40;
  state_address_6 = &g_151028320;
  do
  {
    scaled_index_14 = *(state_address_6 - 98);
    if ( scaled_index_14 > 1 )
      *(state_address_6 - 98) = scaled_index_14 - 1;
    if ( (int)*state_address_6 > 1 )
      --*state_address_6;
    state_address_6 += 196;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  state_address_7 = &g_150F61378;
  do
  {
    scaled_index_15 = *(state_address_7 - 122);
    if ( scaled_index_15 > 1 )
      *(state_address_7 - 122) = scaled_index_15 - 1;
    if ( (int)*state_address_7 > 1 )
      --*state_address_7;
    state_address_7 += 244;
    --remaining_count_5;
  }
  while ( remaining_count_5 );
  if ( (int)g_151040998 > 0 )
    --g_151040998;
  result = g_1510411AC;
  g_151042A2C = 0;
  if ( (int)g_1510411AC > 0 )
    return --g_1510411AC;
  return result;
}
#undef callee_output_word
#undef callee_output_word_2

//----- (0000000140077230) ----------------------------------------------------
__int64 sub_140077230()
{
  __int64 state_word;
  unsigned int unused_written_slot;
  __int64 scaled_index;
  float state_scalar;
  float combined_products;
  unsigned int float_word;
  __int64 scaled_index_2;
  float limited_value;
  float weighted_sum;
  unsigned int *state_address;
  __int64 remaining_count;
  float weighted_sum_2;
  float weighted_sum_3;
  unsigned int *state_address_2;
  float component_delta;
  float component_delta_2;
  float product_difference;
  bool drawmenubutton_result;
  unsigned int state_word_2;
  unsigned int state_word_3;
  signed int integer_difference;

  if ( !g_150F61040 )
  {
    g_150F61084 = -1;
    return 1;
  }
  state_word = (int)g_150F61084;
  if ( g_150F61084 == -1 )
    return 1;
  unused_written_slot = 0;
  if ( g_150F61170 == g_150F61084 )
  {
    scaled_index = 98LL * (int)g_150F61084;
    state_scalar = (float)(int)g_160FC481C;
    g_160FC481C = 0;
    combined_products = *(float *)&dword_140404A6C[scaled_index + 70290905] - (float)(state_scalar * 16.0);
    if ( combined_products < 0.0 )
      combined_products = 0.0;
    float_word = dword_140404A6C[scaled_index + 70290907];
    *(float *)&dword_140404A6C[scaled_index + 70290905] = combined_products;
    if ( combined_products > *(float *)&float_word )
      dword_140404A6C[scaled_index + 70290905] = float_word;
  }
  scaled_index_2 = 98 * state_word;
  limited_value = 0.0;
  weighted_sum = 0.0;
  state_address = &g_150F611B4;
  remaining_count = 256;
  weighted_sum_2 = *(float *)&dword_140404A6C[98 * state_word + 70290983];
  weighted_sum_3 = *(float *)&dword_140404A6C[98 * state_word + 70290984];
  do
  {
    if ( *(state_address - 9) == 3 && *state_address == (_DWORD)state_word )
    {
      if ( *(state_address - 4) )
      {
        limited_value = fmaxf(*((float *)state_address + 5) + *((float *)state_address + 3), limited_value);
        if ( weighted_sum < (float)(*((float *)state_address + 6) + *((float *)state_address + 4)) )
          weighted_sum = *((float *)state_address + 6) + *((float *)state_address + 4);
      }
    }
    if ( state_address[113] == 3 && state_address[122] == (_DWORD)state_word )
    {
      if ( state_address[118] )
      {
        limited_value = fmaxf(*((float *)state_address + 127) + *((float *)state_address + 125), limited_value);
        if ( weighted_sum < (float)(*((float *)state_address + 128) + *((float *)state_address + 126)) )
          weighted_sum = *((float *)state_address + 128) + *((float *)state_address + 126);
      }
    }
    if ( state_address[235] == 3 && state_address[244] == (_DWORD)state_word )
    {
      if ( state_address[240] )
      {
        limited_value = fmaxf(*((float *)state_address + 249) + *((float *)state_address + 247), limited_value);
        if ( weighted_sum < (float)(*((float *)state_address + 250) + *((float *)state_address + 248)) )
          weighted_sum = *((float *)state_address + 250) + *((float *)state_address + 248);
      }
    }
    if ( state_address[357] == 3 && state_address[366] == (_DWORD)state_word )
    {
      if ( state_address[362] )
      {
        limited_value = fmaxf(*((float *)state_address + 371) + *((float *)state_address + 369), limited_value);
        if ( weighted_sum < (float)(*((float *)state_address + 372) + *((float *)state_address + 370)) )
          weighted_sum = *((float *)state_address + 372) + *((float *)state_address + 370);
      }
    }
    state_address += 488;
    --remaining_count;
  }
  while ( remaining_count );
  state_address_2 = &dword_140404A6C[scaled_index_2 + 70290905];
  if ( weighted_sum <= weighted_sum_3 )
  {
    *state_address_2 = 0;
    component_delta = 0.0;
  }
  else
  {
    component_delta = weighted_sum - weighted_sum_3;
    sub_140070FF0(
      dword_140404A6C[scaled_index_2 + 70290892],
      weighted_sum_2 - 16.0,
      *(float *)&dword_140404A6C[scaled_index_2 + 70290905],
      16.0,
      COERCE_UNSIGNED_INT(weighted_sum_3 - 16.0f),
      COERCE_UNSIGNED_INT(fmaxf((float)(weighted_sum_3 * (float)(weighted_sum_3 - 16.0)) / weighted_sum, 16.0)),
      (float *)&dword_140404A6C[scaled_index_2 + 70290905],
      0.0,
      weighted_sum - weighted_sum_3);
  }
  *(float *)&dword_140404A6C[scaled_index_2 + 70290907] = component_delta;
  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  component_delta_2 = weighted_sum_2 - 16.0;
  menu_item_width = 1098907648;
  menu_item_height = 1098907648;
  product_difference = *(float *)state_address_2 - 16.0;
  if ( (int)g_151042810 < 16 )
  {
    dword_140404A6C[2 * g_151042810 + 70317930] = *(unsigned int *)&menu_x;
    dword_140404A6C[2 * g_151042810++ + 70317931] = *(unsigned int *)&menu_y;
  }
  menu_x = component_delta_2;
  menu_y = product_difference;
  drawmenubutton_result = (unsigned int)sr_DrawMenuButton("X") == 0;
  state_word_2 = g_151042810;
  if ( !drawmenubutton_result )
    unused_written_slot = 1;
  if ( (int)g_151042810 > 0 )
  {
    --g_151042810;
    *(unsigned int *)&menu_x = dword_140404A6C[2 * (state_word_2 - 1) + 70317930];
    *(unsigned int *)&menu_y = dword_140404A6C[2 * (state_word_2 - 1) + 70317931];
  }
  state_word_3 = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    menu_item_width = dword_140404A6C[2 * (state_word_3 - 1) + 70317963];
    menu_item_height = dword_140404A6C[2 * (state_word_3 - 1) + 70317964];
  }
  integer_difference = g_150F61040 - 1;
  g_150F61040 = integer_difference;
  if ( integer_difference <= 0 )
    g_150F61084 = -1;
  else
    g_150F61084 = dword_140404A6C[integer_difference + 70087029];
  return unused_written_slot;
}

//----- (000000014009FE00) ----------------------------------------------------
// Candidate gameplay/menu mouse-camera state handler: uses SDL relative mouse mode/state and menu actions.
__int64            gameplay_mouse_camera_state_candidate(int a1, __int64 a2, double a3)
{
  __int64 input_value;
  unsigned int state_word;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  int state_word_2;
  signed int i;
  int iteration_count;
  unsigned int *buffer_cursor;
  unsigned int *state_address;
  unsigned int integer_sum;
  unsigned int *state_address_2;
  int iteration_count_2;
  __int64 iteration_count_3;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  int drawmenubutton_result;
  unsigned int state_word_3;
  int iteration_count_4;
  float component_sum;
  int element_index;
  float component_sum_2;
  unsigned int *buffer_cursor_2;
  int *state_address_3;
       char *state_address_4;
  int drawmenubutton_result_2;
  unsigned int state_word_4;
  unsigned int *state_address_5;
       char *state_address_6;
  int iteration_count_5;
  int drawmenubutton_result_3;
  unsigned int state_word_5;
  __int64 cached_local_player;
  __int64 state_word_6;
  int masked_bits;
  int state_word_7;
  unsigned int state_word_8;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 table_value;
  __int64 remaining_count;
  unsigned int *record_byte_offset;
  __int64 state_address_7;
  __int128 loaded_word;
  __int128 loaded_word_2;
  __int128 loaded_word_3;
  __int128 loaded_word_4;
  __int128 loaded_word_5;
  __int128 loaded_word_6;
  __int128 loaded_word_7;
  __int128 loaded_word_8;
  __int64 loaded_word_9;
  __int64 integer_sum_2;
  __int128 loaded_word_10;
  __int128 loaded_word_11;
  __int128 loaded_word_12;
  int scaled_index_3;
  unsigned int integer_sum_3;
  __int64 scaled_index_4;
  int scaled_index_5;
  unsigned int table_value_2;
  char table_value_3;
  unsigned int state_word_9;
  char masked_bits_2;
  __int64 table_value_4;
  __int64 scaled_index_6;
  __int64 table_value_5;
  __int64 cached_game_type;
  __int64 scaled_index_7;
  unsigned int table_value_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009FE00[624];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14009FE00 + 0)) /* [rsp+0h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_14009FE00 + 80)) /* [rsp+50h] */
#define callee_output_word_2 (*(int (*))(void *)(sr_frame_14009FE00 + 84)) /* [rsp+54h] */
#define selection_flag (*(int (*))(void *)(sr_frame_14009FE00 + 88)) /* [rsp+58h] */
#define selection_flag_2 (*(int (*))(void *)(sr_frame_14009FE00 + 92)) /* [rsp+5Ch] */
#define scratch_buffer (*(unsigned __int8 (*)[512])(void *)(sr_frame_14009FE00 + 96)) /* [rsp+60h] */
#define unused_frame_slot_608 (*(__int64 (*))(void *)(sr_frame_14009FE00 + 608)) /* [rsp+260h] */

  input_value = a1;
  sub_14003A0F0();
  if ( g_183EBFAA4 == 3 )
    return 0; /* compatibility result discarded by all reviewed callers */
  state_word = g_183EBFAA8;
  if ( !g_183EBFAA8 && (_DWORD)input_value != -1 )
  {
    sub_140118B70(input_value);
    state_word = g_183EBFAA8;
  }
  selection_flag = 0;
  selection_flag_2 = 0;
  if ( state_word != 1 )
    goto LABEL_73;
  g_18329CC24 = 1;
  switch ( g_183EBFCBC )
  {
    case 0u:
      *(_OWORD *)&menu_x = xmmword_140279800;
      g_150F610F4 = 41;
      if ( (unsigned int)sr_DrawMenuButton("Return to Game") )
      {
        g_183EBFAA8 = 0;
        g_18329CC24 = 0;
        sub_140198F0B(1, unrecovered_register_value, unrecovered_register_value_2);
        g_183EBFD5C = 1;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
      if ( game_connected )
      {
        if ( g_151E4614C )
        {
          if ( g_1829F8BC0 )
          {
            g_150F610F4 = 12;
            if ( (unsigned int)sr_DrawMenuButton("Invite") )
            {
              state_word_2 = sub_1401988C0(4u);
              g_1829F8FDC = state_word_2;
              for ( i = 0; i < (int)g_1829F8FDC; ++i )
              {
                sub_140198820(
                  (__int64 *)&dword_140404A6C[132LL * i + 278384989],
                  (__int64)&dword_140404A6C[132 * i + 278384992],
                  i,
                  4u);
                state_word_2 = g_1829F8FDC;
              }
              iteration_count = 0;
              if ( state_word_2 > 0 )
              {
                buffer_cursor = &g_18329CED0;
                state_address = &g_1829F8FE8;
                do
                {
                  *state_address = sub_140198A10(*((_QWORD *)state_address - 1));
                  state_address += 132;
                  ++iteration_count;
                  *buffer_cursor++ = 0;
                }
                while ( iteration_count < (int)g_1829F8FDC );
              }
              g_183EBFCBC = 1;
            }
          }
        }
      }
      g_150F610F4 = 16;
      if ( (_DWORD)input_value != -1 && (unsigned int)sr_DrawMenuButton("Mute Player") )
      {
        integer_sum = 0;
        state_address_2 = &g_151623978;
        g_18329C404 = 0;
        iteration_count_2 = 0;
        iteration_count_3 = 0;
        do
        {
          if ( *(state_address_2 - 2886) && !*state_address_2 && iteration_count_3 != input_value )
          {
            dword_140404A6C[integer_sum + 280649319] = iteration_count_2;
            integer_sum = ++g_18329C404;
          }
          ++iteration_count_2;
          ++iteration_count_3;
          state_address_2 += 3597;
        }
        while ( iteration_count_2 < 256 );
        g_183EBFCBC = 3;
      }
      if ( local_player != -1 )
      {
        if ( dword_140404A6C[3597 * local_player + 71856266] )
        {
          g_150F610F4 = 4;
          if ( (unsigned int)sr_DrawMenuButton("Admin") )
          {
            g_1A8E3C9E0 = -1;
            g_183EBFCBC = 2;
          }
        }
      }
      g_150F610F4 = 18;
      if ( (unsigned int)sr_DrawMenuButton("Options") )
      {
        g_183EBFAA4 = 3;
        g_18329CC24 = 1;
      }
      g_150F610F4 = 8;
      if ( (unsigned int)sr_DrawMenuButton("Exit Game") )
      {
        sub_140095FC0(unrecovered_register_value_4, unrecovered_register_value_3, unrecovered_register_value_5);
        g_183EBFAA4 = 0;
      }
      goto LABEL_67;
    case 1u:
      *(_OWORD *)&menu_x = xmmword_1402797F0;
      g_150F610F4 = 41;
      drawmenubutton_result = sr_DrawMenuButton("Back");
      state_word_3 = g_183EBFCBC;
      iteration_count_4 = 0;
      if ( drawmenubutton_result )
        state_word_3 = 0;
      component_sum = 128.0;
      element_index = 0;
      component_sum_2 = 64.0;
      g_183EBFCBC = state_word_3;
      menu_item_width = 1128267776;
      menu_item_height = 1105199104;
      if ( (int)g_1829F8FDC > 0 )
      {
        buffer_cursor_2 = &g_18329CED0;
        state_address_3 = (int *)&g_1829F8FE8;
        do
        {
          menu_x = component_sum;
          menu_y = component_sum_2;
          if ( *state_address_3 > 0 )
          {
            state_address_4 = (     char *)&dword_140404A6C[132 * element_index + 278384992];
            if ( *buffer_cursor_2 )
            {
              crt_sprintf(scratch_buffer, "Invited %s", state_address_4);
              g_150F610FC = 1;
            }
            else
            {
              crt_sprintf(scratch_buffer, "%s", state_address_4);
            }
            sr_DrawMenuButtonSelectable(scratch_buffer, (int *)&g_18329CC34, element_index);
            ++iteration_count_4;
            component_sum = component_sum + 192.0;
            if ( (iteration_count_4 & 3) == 0 )
            {
              component_sum = 128.0;
              component_sum_2 = component_sum_2 + 28.0;
            }
          }
          ++element_index;
          state_address_3 += 132;
          ++buffer_cursor_2;
        }
        while ( element_index < (int)g_1829F8FDC );
      }
      if ( g_18329CC34 != -1 )
      {
        sub_140198C10(*(_QWORD *)&dword_140404A6C[132 * g_18329CC34 + 278384989]);
        dword_140404A6C[g_18329CC34 + 280650009] = 1;
        g_18329CC34 = -1;
      }
LABEL_67:
      cached_local_player = (int)local_player;
      state_word_6 = (int)g_1A8E3C9E0;
      if ( selection_flag && g_1A8E3C9E0 != -1 )
      {
        g_183EBFCBC = 0;
        dword_140404A6C[3597 * local_player
                      + 71856367
                      + 21 * dword_140404A6C[3597 * local_player + 71856362]] = 4;
        dword_140404A6C[3597 * cached_local_player + 71856368 + 21 * (int)dword_140404A6C[3597 * cached_local_player + 71856362]] = dword_140404A6C[20 * state_word_6 + 438881247];
        dword_140404A6C[3597 * cached_local_player + 71856369 + 21 * (int)dword_140404A6C[3597 * cached_local_player + 71856362]] = g_1A8E3C9E4;
        dword_140404A6C[3597 * cached_local_player + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * cached_local_player + 71856362] + 1) & 0x3F;
      }
      if ( selection_flag_2 && (_DWORD)state_word_6 != -1 )
      {
        g_183EBFCBC = 0;
        dword_140404A6C[3597 * cached_local_player + 71856367 + 21 * (int)dword_140404A6C[3597 * cached_local_player + 71856362]] = 5;
        dword_140404A6C[3597 * cached_local_player + 71856368 + 21 * (int)dword_140404A6C[3597 * cached_local_player + 71856362]] = dword_140404A6C[20 * state_word_6 + 438881247];
        dword_140404A6C[3597 * cached_local_player + 71856369 + 21 * (int)dword_140404A6C[3597 * cached_local_player + 71856362]] = g_1A8E3C9E8;
        dword_140404A6C[3597 * cached_local_player + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * cached_local_player + 71856362] + 1) & 0x3F;
      }
LABEL_73:
      if ( !g_18329CC24 )
      {
        g_183F7C6B8 = g_183F7C758;
        g_183F7C620 = *(_OWORD *)&g_183F7C6C0;
        g_183F7C630 = g_183F7C6D0;
        g_183F7C640 = g_183F7C6E0;
        g_183F7C650 = g_183F7C6F0;
        g_183F7C660 = g_183F7C700;
        g_183F7C670 = g_183F7C710;
        g_183F7C680 = g_183F7C720;
        g_183F7C690 = g_183F7C730;
        g_183F7C6A0 = g_183F7C740;
        *(_QWORD *)&g_183F7C6B0 = *(_QWORD *)&g_183F7C750;
        g_183F7C758 = sr_menu_relative_mouse(&callee_output_word, &callee_output_word_2);
        *(unsigned int *)&g_183F7C6C0 = 1140850688;
        *(unsigned int *)&g_183F7C6C4 = 1134559232;
        g_183F7C750 = g_183F7C758 & 1;
        g_183F7C754 = (LOBYTE(g_183F7C758) >> 2) & 1;
        g_183F7C6C8 = (float)callee_output_word;
        g_183F7C6CC = (float)callee_output_word_2;
        if ( g_18329CC28 )
        {
          g_183F7C758 = sr_menu_relative_mouse(&callee_output_word_2, &callee_output_word);
          *(unsigned int *)&g_183F7C6C0 = 1140850688;
          *(unsigned int *)&g_183F7C6C4 = 1134559232;
          g_183F7C750 = g_183F7C758 & 1;
          g_183F7C754 = (LOBYTE(g_183F7C758) >> 2) & 1;
          g_183F7C6C8 = (float)callee_output_word_2;
          g_183F7C6CC = (float)callee_output_word;
        }
      }
      break;
    case 2u:
      *(_OWORD *)&menu_x = xmmword_1402797F0;
      g_150F610F4 = 41;
      drawmenubutton_result_2 = sr_DrawMenuButton("Back");
      state_word_4 = g_183EBFCBC;
      if ( drawmenubutton_result_2 )
        state_word_4 = 0;
      g_183EBFCBC = state_word_4;
      menu_item_width = 1128267776;
      menu_item_height = 1105199104;
      if ( g_1A8E3C9E0 == -1 )
      {
        state_address_5 = &g_1A8E37A2C;
        state_address_6 = (     char *)&g_1A8E379EC;
        *(unsigned int *)&menu_x = 1124073472;
        iteration_count_5 = 0;
        *(unsigned int *)&menu_y = 1115684864;
        do
        {
          if ( *(state_address_5 - 19) )
          {
            crt_sprintf(scratch_buffer, "%s %03d-%04d", state_address_6, *state_address_5 / 0x2710, *state_address_5 % 0x2710);
            sr_DrawMenuButtonSelectable(scratch_buffer, (int *)&g_1A8E3C9E0, iteration_count_5);
          }
          ++iteration_count_5;
          state_address_6 += 80;
          state_address_5 += 20;
        }
        while ( iteration_count_5 < 256 );
      }
      else
      {
        *(unsigned int *)&menu_x = 1107296256;
        *(unsigned int *)&menu_y = 1124073472;
        sr_DrawMenuTextBox("Time", (__int64)&g_1A8E3C9E4, 0, 0x5F5E100u);
        *(unsigned int *)&menu_x = 1134559232;
        *(unsigned int *)&menu_y = 1124073472;
        crt_sprintf(scratch_buffer, "Ban %s", (     char *)&dword_140404A6C[20 * g_1A8E3C9E0 + 438881248]);
        sr_DrawMenuButtonSelectable(scratch_buffer, &selection_flag, 1);
        *(unsigned int *)&menu_x = 1107296256;
        *(unsigned int *)&menu_y = 1127219200;
        sr_DrawMenuTextBox("Rating", (__int64)&g_1A8E3C9E8, 0, 0x2710u);
        *(unsigned int *)&menu_x = 1134559232;
        *(unsigned int *)&menu_y = 1127219200;
        crt_sprintf(scratch_buffer, "Set Rating %s", (     char *)&dword_140404A6C[20 * g_1A8E3C9E0 + 438881248]);
        sr_DrawMenuButtonSelectable(scratch_buffer, &selection_flag_2, 1);
      }
      goto LABEL_67;
    case 3u:
      *(_OWORD *)&menu_x = xmmword_1402797E0;
      g_150F610F4 = 41;
      drawmenubutton_result_3 = sr_DrawMenuButton("Back");
      state_word_5 = g_183EBFCBC;
      if ( drawmenubutton_result_3 )
        state_word_5 = 0;
      *(_QWORD *)&a3 = 1136656384;
      g_150F61110 = (uintptr_t)sub_1400FE870;
      *(unsigned int *)&menu_y = 1115684864;
      menu_item_height = 1105199104;
      g_183EBFCBC = state_word_5;
      menu_item_width = 1128267776;
      *(unsigned int *)&menu_x = 1128267776;
      *(_QWORD *)&g_150F61108 = 0;
      if ( (unsigned int)sub_1400707C0(
                           "mutelist",
                           640.0,
                           384.0,
                           160.0,
                           0x42400000u,
                           0,
                           &g_18329C400,
                           0,
                           0,
                           g_18329C404)
        && (g_18329C400 & 0x80000000) == 0
        && (int)g_18329C400 < (int)g_18329C404 )
      {
        sub_140117820(dword_140404A6C[g_18329C400 + 280649319]);
      }
      goto LABEL_67;
  }
  masked_bits = g_1B0032404;
  state_word_7 = 0;
  state_word_8 = g_1B0032400;
  g_18329CC28 = g_18329CC24;
  for ( g_18329CC4C = 0; masked_bits != state_word_8; g_1B0032404 = masked_bits )
  {
    if ( state_word_7 < 32 )
    {
      dword_140404A6C[5 * state_word_7 + 280649849] = dword_140404A6C[5 * masked_bits + 468760167];
      dword_140404A6C[5 * g_18329CC4C + 280649852] = dword_140404A6C[5 * masked_bits + 468760169];
      dword_140404A6C[5 * g_18329CC4C + 280649851] = dword_140404A6C[5 * masked_bits + 468760168];
      dword_140404A6C[5 * g_18329CC4C + 280649853] = dword_140404A6C[5 * masked_bits + 468760170];
      dword_140404A6C[5 * g_18329CC4C + 280649850] = dword_140404A6C[5 * masked_bits + 468760171];
      state_word_7 = ++g_18329CC4C;
    }
    masked_bits = ((_WORD)masked_bits + 1) & 0x3FF;
  }
  if ( (_DWORD)input_value != -1 )
  {
    scaled_index = (int)dword_140404A6C[3597 * input_value + 71856292];
    if ( (_DWORD)scaled_index != -1 )
    {
      scaled_index_2 = 7166 * scaled_index;
      if ( (int)dword_140404A6C[scaled_index_2 + 280651318] > 0 && (int)dword_140404A6C[scaled_index_2 + 280658139] > 0 )
      {
        table_value = (int)dword_140404A6C[scaled_index_2 + 280658140];
        if ( (_DWORD)table_value != -1 && dword_140404A6C[1760 * table_value + 278845898] == 39 )
        {
          sub_1400A1640(input_value, table_value);
          state_word_7 = g_18329CC4C;
        }
      }
    }
  }
  remaining_count = 2;
  record_byte_offset = &g_183F7C760;
  state_address_7 = (__int64)&g_183F7C960;
  do
  {
    record_byte_offset += 32;
    loaded_word = *(_OWORD *)state_address_7;
    loaded_word_2 = *(_OWORD *)(state_address_7 + 16);
    state_address_7 += 128;
    *((_OWORD *)record_byte_offset - 8) = loaded_word;
    loaded_word_3 = *(_OWORD *)(state_address_7 - 96);
    *((_OWORD *)record_byte_offset - 7) = loaded_word_2;
    loaded_word_4 = *(_OWORD *)(state_address_7 - 80);
    *((_OWORD *)record_byte_offset - 6) = loaded_word_3;
    loaded_word_5 = *(_OWORD *)(state_address_7 - 64);
    *((_OWORD *)record_byte_offset - 5) = loaded_word_4;
    loaded_word_6 = *(_OWORD *)(state_address_7 - 48);
    *((_OWORD *)record_byte_offset - 4) = loaded_word_5;
    loaded_word_7 = *(_OWORD *)(state_address_7 - 32);
    *((_OWORD *)record_byte_offset - 3) = loaded_word_6;
    loaded_word_8 = *(_OWORD *)(state_address_7 - 16);
    *((_OWORD *)record_byte_offset - 2) = loaded_word_7;
    *((_OWORD *)record_byte_offset - 1) = loaded_word_8;
    --remaining_count;
  }
  while ( remaining_count );
  loaded_word_9 = *(unsigned __int16 *)(state_address_7 + 64);
  integer_sum_2 = 0;
  loaded_word_10 = *(_OWORD *)(state_address_7 + 16);
  *(_OWORD *)record_byte_offset = *(_OWORD *)state_address_7;
  loaded_word_11 = *(_OWORD *)(state_address_7 + 32);
  *((_OWORD *)record_byte_offset + 1) = loaded_word_10;
  loaded_word_12 = *(_OWORD *)(state_address_7 + 48);
  *((_OWORD *)record_byte_offset + 2) = loaded_word_11;
  *((_OWORD *)record_byte_offset + 3) = loaded_word_12;
  *((_WORD *)record_byte_offset + 32) = loaded_word_9;
  *((_BYTE *)record_byte_offset + 66) = *(_BYTE *)(state_address_7 + 66);
  if ( state_word_7 > 0 )
  {
    record_byte_offset = &g_18329CC58;
    do
    {
      if ( !*(record_byte_offset - 1) )
      {
        state_address_7 = (int)*record_byte_offset;
        if ( (unsigned int)(state_address_7 - 1) <= 0xFE )
        {
          scaled_index_3 = *(record_byte_offset - 2);
          if ( scaled_index_3 )
          {
            if ( scaled_index_3 == 1 )
              *((_BYTE *)&g_183F7C960 + state_address_7) = 0;
          }
          else
          {
            *((_BYTE *)&g_183F7C960 + state_address_7) = 1;
          }
        }
      }
      integer_sum_2 = (unsigned int)(integer_sum_2 + 1);
      record_byte_offset += 5;
    }
    while ( (int)integer_sum_2 < state_word_7 );
  }
  if ( BYTE1(g_183F7C988) )
  {
    BYTE1(g_183F7C988) = 0;
    g_183EBFAA8 = 1;
    g_18329CC24 = 1;
    g_183EBFD5C = 0;
    sub_140198F0B(0, state_address_7, integer_sum_2);
  }
  if ( replay_active )
    sub_1400A3970((__int64)record_byte_offset, state_address_7, a3);
  if ( (_DWORD)input_value != -1 )
  {
    sub_1400A3770(input_value);
    if ( !g_183E93540 )
    {
      if ( LOBYTE(g_183F7C988) && !LOBYTE(g_183F7C788) )
      {
        LOBYTE(g_183E93550) = 0;
        g_183E93540 = 1;
      }
      if ( HIBYTE(g_183F7C974) && !HIBYTE(g_183F7C774) )
      {
        integer_sum_3 = g_183E93544 + 1;
        if ( (signed int)(g_183E93544 + 1) > 2 )
          integer_sum_3 = 0;
        g_183E93544 = integer_sum_3;
      }
    }
    scaled_index_4 = 3597 * input_value;
    scaled_index_5 = dword_140404A6C[3597 * input_value + 71856345];
    if ( scaled_index_5 >= 0 )
    {
      table_value_2 = dword_140404A6C[scaled_index_4 + 71856342];
      dword_140404A6C[21 * (int)dword_140404A6C[scaled_index_4 + 71856362] + 71856367 + scaled_index_4] = 0;
      dword_140404A6C[21 * (int)dword_140404A6C[scaled_index_4 + 71856362] + 71856368 + scaled_index_4] = table_value_2;
      dword_140404A6C[21 * (int)dword_140404A6C[scaled_index_4 + 71856362] + 71856369 + scaled_index_4] = scaled_index_5;
      *(_OWORD *)&dword_140404A6C[21 * (int)dword_140404A6C[scaled_index_4 + 71856362] + 71856372 + scaled_index_4] = *(_OWORD *)&dword_140404A6C[scaled_index_4 + 71856346];
      table_value_3 = dword_140404A6C[scaled_index_4 + 71856362] + 1;
      dword_140404A6C[scaled_index_4 + 71856345] = -1;
      dword_140404A6C[scaled_index_4 + 71856362] = table_value_3 & 0x3F;
      LOBYTE(dword_140404A6C[scaled_index_4 + 71856346]) = 0;
      if ( dword_140404A6C[scaled_index_4 + 71856342] - 14 <= 5 && SLOBYTE(dword_140404A6C[scaled_index_4 + 71856345]) < 0 )
        dword_140404A6C[scaled_index_4 + 71857986] = 0;
      if ( (dword_140404A6C[scaled_index_4 + 71856345] & 0x1000000) != 0 )
        dword_140404A6C[scaled_index_4 + 71857986] = 0;
    }
    if ( HIBYTE(g_183F7C988) )
    {
      if ( !HIBYTE(g_183F7C788) )
      {
        if ( g_18329CC24 || (g_18329CC24 = 1, !dword_140404A6C[scaled_index_4 + 71856342]) )
          g_18329CC24 = 0;
      }
    }
    if ( BYTE2(g_183F7C964) && !BYTE2(g_183F7C764) )
      g_183F79DF0 ^= 1u;
    if ( LOBYTE(g_183F7C970) && !LOBYTE(g_183F7C770) )
      g_183F79DF4 ^= 1u;
    state_word_9 = g_18329CC38;
    g_18329CC3C = g_18329CC38;
    *(_QWORD *)&g_18329CC40 = 0;
    masked_bits_2 = *((_BYTE *)&g_183F7C960 + (int)g_18329DEE0);
    if ( !masked_bits_2 )
      state_word_9 = 0;
    g_18329CC38 = state_word_9;
    if ( !g_18329B180 )
    {
      g_18329CC44 = *((_BYTE *)&g_183F7C960 + (int)g_18329DEE8) != 0;
      if ( !masked_bits_2 || *((_BYTE *)&g_183F7C760 + (int)g_18329DEE0) )
      {
        if ( !state_word_9 )
          g_18329CC40 = g_183F7C754 != 0;
      }
      else
      {
        g_18329CC38 = 1;
      }
    }
    table_value_4 = (int)dword_140404A6C[scaled_index_4 + 71856292];
    dword_140404A6C[scaled_index_4 + 71856339] = 0;
    if ( (_DWORD)table_value_4 == -1 || (scaled_index_6 = 7166 * table_value_4, (int)dword_140404A6C[7166 * table_value_4 + 280651318] <= 0) )
    {
      cached_game_type = game_type;
      scaled_index_7 = 3597 * input_value;
      *(_QWORD *)&dword_140404A6C[scaled_index_7 + 71856293] = 0;
      *(_QWORD *)&dword_140404A6C[scaled_index_7 + 71856295] = 0;
      dword_140404A6C[scaled_index_4 + 71856325] = 0;
      *(_QWORD *)&dword_140404A6C[scaled_index_4 + 71856331] = 0;
      if ( ((_DWORD)cached_game_type == 0 && game_connected || (_DWORD)cached_game_type == 3 || (unsigned int)(cached_game_type - 5) <= 2 || (_DWORD)cached_game_type == 4 && dword_140404A6C[scaled_index_4 + 71856266])
        && !g_18329CC24 )
      {
        sub_140105180(1, cached_game_type, a3);
      }
    }
    else
    {
      table_value_5 = (int)dword_140404A6C[scaled_index_6 + 280651313];
      dword_140404A6C[scaled_index_4 + 71856339] = 1;
      if ( (_DWORD)table_value_5 != -1 )
      {
        if ( dword_140404A6C[24944 * dword_140404A6C[5210 * table_value_5 + 129716710] + 346707719] == 1
          || dword_140404A6C[scaled_index_6 + 280651314] )
        {
          dword_140404A6C[scaled_index_4 + 71856339] = 2;
        }
        else
        {
          dword_140404A6C[scaled_index_4 + 71856339] = 3;
        }
      }
    }
    table_value_6 = dword_140404A6C[scaled_index_4 + 71856339];
    switch ( table_value_6 )
    {
      case 1u:
        sub_1400A21B0(input_value);
        break;
      case 2u:
        sub_1400A0EB0(input_value);
        break;
      case 3u:
        sub_1400A1D20(input_value);
        break;
    }
    dword_140404A6C[scaled_index_4 + 71856340] = dword_140404A6C[scaled_index_4 + 71856339];
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

#undef unused_frame_slot_0
#undef callee_output_word
#undef callee_output_word_2
#undef selection_flag
#undef selection_flag_2
#undef scratch_buffer
#undef unused_frame_slot_608
//----- (00000001400FCFF0) ----------------------------------------------------
__int64 sub_1400FCFF0()
{
  int drawmenubutton_result;
  unsigned int state_word;
  float component_sum;
  float cached_menu_y;
  unsigned int *state_address;
  __int64 result;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 iteration_count;
  char masked_bits;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FCFF0[16];
#define callee_output_word (*(int (*))(void *)(sr_frame_1400FCFF0 + 0)) /* [rsp+30h] */
#define callee_output_word_2 (*(int (*))(void *)(sr_frame_1400FCFF0 + 8)) /* [rsp+38h] */

  menu_item_width = 1126170624;
  menu_item_height = 1101004800;
  g_150F610F4 = 41;
  drawmenubutton_result = sr_DrawMenuButton("Back");
  state_word = g_183EBFAA4;
  component_sum = menu_y + 32.0;
  if ( drawmenubutton_result )
    state_word = 0;
  menu_item_width = 1128267776;
  menu_item_height = 1103101952;
  g_183EBFAA4 = state_word;
  menu_y = menu_y + 32.0;
  *(float *)&g_150F61120 = component_sum;
  g_150F6111C = *(unsigned int *)&menu_x;
  *(unsigned int *)&menu_row_height = 0;
  menu_vertical = 0;
  sr_DrawMenuButtonSelectable("World Mode", (int *)&g_151E461AC, 4);
  sr_DrawMenuButtonSelectable("Round Mode", (int *)&g_151E461AC, 3);
  sr_DrawMenuButtonSelectable("Eliminator Mode", (int *)&g_151E461AC, 5);
  if ( menu_vertical )
  {
    cached_menu_y = menu_y;
  }
  else
  {
    cached_menu_y = menu_row_height + *(float *)&g_150F61120;
    *(unsigned int *)&menu_x = g_150F6111C;
    if ( g_15104AA48 )
    {
      ++g_15104AE50;
      g_15104AE4C = 0;
    }
  }
  menu_vertical = 1;
  menu_y = cached_menu_y + 16.0;
  sr_DrawMenuTextBox("Max Players", (__int64)&g_151E461A8, 1u, 0x20u);
  if ( g_151E461AC == 3 )
  {
    state_address = &g_183F7A5AC;
  }
  else
  {
    state_address = &g_183F7A600;
    if ( g_151E461AC != 7 )
      state_address = &g_151E461B0;
  }
  sr_DrawMenuTextBox("Round Length", (__int64)state_address, 1u, 0x1Eu);
  sub_140070200("Server Name", (__int64)&g_151E45B4C, 0x18u);
  g_150F610F4 = 22;
  menu_y = menu_y + 32.0;
  result = sr_DrawMenuButton("Start");
  if ( SR_DEBUG_AUTOSTART_MODE() && SR_DEBUG_AUTOSTART(SR_DEBUG_AUTOSTART_MODE() == 3 ? "round" : "world") )
  {
    g_151E461AC = SR_DEBUG_AUTOSTART_MODE();
    result = 1;
  }
  if ( (_DWORD)result )
  {
    sub_140198F0B(1, unrecovered_register_value, unrecovered_register_value_2);
    g_183F7C758 = sr_menu_relative_mouse(&callee_output_word, &callee_output_word_2);
    g_183F7C750 = g_183F7C758 & 1;
    g_183F7C754 = (LOBYTE(g_183F7C758) >> 2) & 1;
    iteration_count = 0;
    game_type = g_151E461AC;
    g_183F7C6C8 = (float)callee_output_word;
    g_183F7C6CC = (float)callee_output_word_2;
    *(unsigned int *)&g_183F7C6C0 = 1140850688;
    *(unsigned int *)&g_183F7C6C4 = 1134559232;
    do
    {
      masked_bits = *((_BYTE *)&g_151E45B4C + iteration_count);
      *((_BYTE *)(unsigned int *)&g_1AD04ADD4 + iteration_count++) = masked_bits;
    }
    while ( masked_bits );
    g_1AD04B1F4 = g_151E461A8;
    g_183EBFCDC = 3600;
    g_183EBFD30 = 1260;
    game_unknown_183ebfcc8 = 0;
    game_connected = 1;
    g_183EBFCE0 = 3600 * g_151E461B0;
    *(_QWORD *)&g_151E4614C = 1;
    return sub_140095B00();
  }
  return result;
}
#undef callee_output_word
#undef callee_output_word_2

//----- (00000001400FD300) ----------------------------------------------------
void sub_1400FD300()
{
  int drawmenubutton_result;
  unsigned int state_word;
  int state_word_2;
  int element_index;
  int scaled_index;
  unsigned int state_word_3;
  int call_result;
  __int64 scaled_index_2;
  unsigned int table_value;
  unsigned int table_value_2;
  int drawmenubutton_result_2;
  unsigned int call_result_2;
  unsigned int state_word_4;
  __int64 packed_word_bits;
  char masked_bits;
  signed int cached_packet_out_byte;
  signed int integer_sum;
  int masked_bits_2;
  int masked_bits_3;
  int cached_packet_in_byte;
  signed int cached_packet_in_length;
  int cached_packet_in_bit;
  __int64 integer_sum_2;
  int iteration_count;
  __int64 element_index_2;
  unsigned int *state_address;
  unsigned int ntohl_sr_result;
  __int64 hiword_result;
  __int64 scaled_index_3;
  signed int cached_packet_in_byte_2;
  __int64 scaled_index_4;
  signed int cached_packet_in_byte_3;
  signed int cached_packet_in_length_2;
  int cached_packet_in_bit_2;
  __int64 saved_cached_packet_in_byte;
  __int128 masked_bits_4;
  __int128 masked_bits_5;
  __int64 scaled_index_5;
  signed int cached_packet_in_byte_4;
  __int64 saved_cached_packet_in_byte_2;
  __int64 saved_cached_packet_in_byte_3;
  int table_value_3;
  unsigned int *decoded_value;
  _DWORD *decoded_value_2;
  __int64 saved_cached_packet_in_byte_4;
  __int64 saved_cached_packet_in_byte_5;
  unsigned int integer_sum_3;
  int iteration_count_2;
  unsigned int *state_address_2;
  __int64 saved_cached_packet_in_byte_6;
  __int64 saved_cached_packet_in_byte_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FD300[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400FD300 + 0)) /* [rsp+0h] */
#define frame_word_at_32 (*(char (*))(void *)(sr_frame_1400FD300 + 32)) /* [rsp+20h] */
#define frame_word_at_36 (*(int (*))(void *)(sr_frame_1400FD300 + 36)) /* [rsp+24h] */
#define scratch_buffer (*(unsigned __int8 (*)[512])(void *)(sr_frame_1400FD300 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_1400FD300 + 560)) /* [rsp+230h] */

  menu_item_width = 1126170624;
  menu_item_height = 1101004800;
  g_150F610F4 = 41;
  drawmenubutton_result = sr_DrawMenuButton("Back");
  state_word = g_183EBFAA4;
  state_word_2 = g_16B15FF28;
  element_index = 0;
  menu_item_width = 1146880000;
  if ( drawmenubutton_result )
    state_word = 0;
  g_183EBFAA4 = state_word;
  menu_item_height = 1105199104;
  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1113587712;
  do
  {
    scaled_index = element_index + 16 * state_word_2;
    if ( scaled_index < (int)g_16B15FF00 )
    {
      crt_sprintf(scratch_buffer, "Server %d", scaled_index);
      state_word_3 = g_150F610FC;
      g_150F6110C = 0;
      g_150F61108 = element_index + 16 * g_16B15FF28;
      g_150F61110 = (uintptr_t)sub_1400CFC80;
      if ( dword_140404A6C[368 * g_16B15FF28 + 179473701 + 23 * element_index] != dword_1402B231C )
        state_word_3 = 1;
      g_150F610FC = state_word_3;
      if ( (unsigned int)sr_DrawMenuButton(scratch_buffer) )
      {
        call_result = sub_140198F9B();
        state_word_2 = g_16B15FF28;
        g_16B15FF24 = call_result + 200;
        g_16B15FF30 = element_index + 16 * g_16B15FF28;
        scaled_index_2 = 23LL * (element_index + 16 * g_16B15FF28);
        table_value = dword_140404A6C[scaled_index_2 + 179473723];
        table_value_2 = dword_140404A6C[scaled_index_2 + 179473712];
        g_1AD04B1D4 = dword_140404A6C[scaled_index_2 + 179473713];
        LOWORD(g_1AD04B1D8) = dword_140404A6C[scaled_index_2 + 179473714];
        g_1AD04B1E8 = dword_140404A6C[scaled_index_2 + 179473715];
        LOWORD(g_1AD04B1EC) = dword_140404A6C[scaled_index_2 + 179473716];
        g_16B15FF34 = table_value;
        g_183F7AED4 = table_value_2;
        sub_140050C80(&g_183F7C520, &g_183F7C524, table_value_2);
        g_183EBFAA4 = 2;
        g_16B15FF40 = 0;
        g_16B15FF3C = table_value == 0;
        g_16B15FF50 = 0;
        g_16B15FF60 = 0;
        g_16B15FF70 = 0;
      }
      else
      {
        state_word_2 = g_16B15FF28;
      }
      menu_y = menu_y + -2.0;
    }
    ++element_index;
  }
  while ( element_index < 16 );
  menu_item_width = 1124073472;
  *(unsigned int *)&menu_x = 1146945536;
  menu_item_height = 1103101952;
  *(unsigned int *)&menu_y = 1113587712;
  if ( state_word_2 > 0 )
  {
    g_150F610F4 = 75;
    drawmenubutton_result_2 = sr_DrawMenuButton("Page Up");
    state_word_2 = g_16B15FF28;
    if ( drawmenubutton_result_2 )
      state_word_2 = --g_16B15FF28;
  }
  *(unsigned int *)&menu_y = 1140850688;
  if ( 16 * (state_word_2 + 1) < (int)g_16B15FF00 )
  {
    g_150F610F4 = 78;
    if ( (unsigned int)sr_DrawMenuButton("Page Down") )
      ++g_16B15FF28;
  }
  if ( g_183EBFAA4 == 1 )
  {
    if ( !g_16B15FF38 )
      g_16B15FF38 = g_16B165F40 == 2;
    if ( (unsigned int)sub_140198F9B() - g_16B15FF24 <= 0xA )
    {
      masked_bits = frame_word_at_32;
    }
    else
    {
      call_result_2 = sub_140198F9B();
      g_16B15FF24 = call_result_2;
      state_word_4 = g_16B0A7EE4;
      if ( (int)g_16B0A7EE4 <= 0 )
      {
        masked_bits = frame_word_at_32;
      }
      else
      {
        packed_word_bits = (int)g_16B15FF2C;
        if ( (int)g_16B15FF2C >= (int)g_16B0A7EE4 )
        {
          masked_bits = frame_word_at_32;
        }
        else
        {
          strcpy((char *)&packet_out_data, "7DFP");
          masked_bits = 0;
          *(_QWORD *)&packet_out_byte = 5;
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
            *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = call_result_2;
            packet_out_byte += 4;
          }
          sub_140130350(dword_140404A6C[2 * packed_word_bits + 179457309], dword_140404A6C[2 * packed_word_bits + 179457310], 0);
          state_word_4 = g_16B0A7EE4;
          LODWORD(packed_word_bits) = g_16B15FF2C;
        }
        integer_sum = packed_word_bits + 1;
        if ( integer_sum >= (int)(state_word_4 + 10) )
          integer_sum = 0;
        g_16B15FF2C = integer_sum;
      }
      if ( g_16B15FF38 == 1 && g_18329C1E0 )
      {
        packet_out_data = dword_1402B2658;
        *(_QWORD *)&packet_out_byte = 5;
        LOBYTE(g_18539D408) = 74;
        sub_140130350(g_18329C1E0, g_18329C1E4, 0);
      }
    }
    if ( g_16B165F40 == 2 && (int)sub_14011C760() > 0 )
    {
      masked_bits_2 = frame_word_at_36;
      masked_bits_3 = frame_word_at_36;
      do
      {
        cached_packet_in_byte = packet_in_byte;
        cached_packet_in_length = packet_in_length;
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
          integer_sum_2 = cached_packet_in_byte++;
          masked_bits = *((_BYTE *)&packet_in_data + integer_sum_2);
          packet_in_byte = cached_packet_in_byte;
        }
        if ( masked_bits == 1 )
        {
          iteration_count = 0;
          element_index_2 = 0;
          if ( (int)g_16B15FF00 <= 0 )
          {
LABEL_53:
            ntohl_sr_result = ntohl_sr(g_18539D3E8);
            hiword_result = HIWORD(g_18539D3E4);
            scaled_index_3 = 23LL * (int)g_16B15FF00;
            dword_140404A6C[scaled_index_3 + 179473713] = ntohl_sr_result;
            LOWORD(dword_140404A6C[scaled_index_3 + 179473714]) = ntohs_sr(hiword_result);
            sr_net_read_bits(&dword_140404A6C[scaled_index_3 + 179473701], 8);
            cached_packet_in_byte_2 = packet_in_byte;
            if ( (int)packet_in_byte < 0x10000
              && (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
            {
              if ( (int)packet_in_bit > 0 )
              {
                cached_packet_in_byte_2 = packet_in_byte + 1;
                packet_in_bit = 0;
                ++packet_in_byte;
              }
              dword_140404A6C[scaled_index_3 + 179473720] = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte_2);
              packet_in_byte = cached_packet_in_byte_2 + 4;
            }
            scaled_index_4 = 23LL * (int)g_16B15FF00;
            dword_140404A6C[scaled_index_4 + 179473720] = sub_140198F9B() - dword_140404A6C[scaled_index_4 + 179473720];
            sr_net_read_bits(&dword_140404A6C[scaled_index_4 + 179473721], 4);
            sr_net_read_bits(&dword_140404A6C[scaled_index_4 + 179473717], 8);
            sr_net_read_bits(&dword_140404A6C[scaled_index_4 + 179473719], 8);
            cached_packet_in_byte_3 = packet_in_byte;
            cached_packet_in_length_2 = packet_in_length;
            if ( (int)packet_in_byte >= 0x10000
              || (signed int)(packet_in_byte + 32) > (int)packet_in_length )
            {
              cached_packet_in_bit_2 = packet_in_bit;
            }
            else
            {
              cached_packet_in_bit_2 = packet_in_bit;
              if ( (int)packet_in_bit > 0 )
              {
                cached_packet_in_byte_3 = packet_in_byte + 1;
                cached_packet_in_bit_2 = 0;
                ++packet_in_byte;
                packet_in_bit = 0;
              }
              saved_cached_packet_in_byte = cached_packet_in_byte_3;
              cached_packet_in_byte_3 += 32;
              masked_bits_4 = *(_OWORD *)((char *)&packet_in_data + saved_cached_packet_in_byte);
              masked_bits_5 = *(_OWORD *)((char *)&g_1853AD434 + saved_cached_packet_in_byte);
              packet_in_byte = cached_packet_in_byte_3;
              *(_OWORD *)&dword_140404A6C[scaled_index_4 + 179473704] = masked_bits_4;
              *(_OWORD *)&dword_140404A6C[scaled_index_4 + 179473708] = masked_bits_5;
            }
            if ( cached_packet_in_byte_3 < 0x10000 && cached_packet_in_byte_3 + 4 <= cached_packet_in_length_2 )
            {
              if ( cached_packet_in_bit_2 > 0 )
              {
                ++cached_packet_in_byte_3;
                cached_packet_in_bit_2 = 0;
                packet_in_byte = cached_packet_in_byte_3;
                packet_in_bit = 0;
              }
              saved_cached_packet_in_byte_2 = cached_packet_in_byte_3;
              cached_packet_in_byte_3 += 4;
              dword_140404A6C[scaled_index_4 + 179473712] = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_2);
              packet_in_byte = cached_packet_in_byte_3;
            }
            if ( (int)dword_140404A6C[scaled_index_4 + 179473701] >= 27 && cached_packet_in_byte_3 < 0x10000 )
            {
              if ( cached_packet_in_byte_3 + 4 <= cached_packet_in_length_2 )
              {
                if ( cached_packet_in_bit_2 > 0 )
                {
                  ++cached_packet_in_byte_3;
                  cached_packet_in_bit_2 = 0;
                  packet_in_byte = cached_packet_in_byte_3;
                  packet_in_bit = 0;
                }
                saved_cached_packet_in_byte_3 = cached_packet_in_byte_3;
                cached_packet_in_byte_3 += 4;
                dword_140404A6C[scaled_index_4 + 179473715] = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_3);
                packet_in_byte = cached_packet_in_byte_3;
              }
              if ( cached_packet_in_byte_3 < 0x10000 && cached_packet_in_byte_3 + 2 <= cached_packet_in_length_2 )
              {
                if ( cached_packet_in_bit_2 > 0 )
                {
                  ++cached_packet_in_byte_3;
                  packet_in_bit = 0;
                  packet_in_byte = cached_packet_in_byte_3;
                }
                LOWORD(dword_140404A6C[scaled_index_4 + 179473716]) = *(_WORD *)((char *)&packet_in_data + cached_packet_in_byte_3);
                packet_in_byte = cached_packet_in_byte_3 + 2;
              }
            }
            table_value_3 = dword_140404A6C[scaled_index_4 + 179473701];
            if ( table_value_3 >= 30 )
            {
              sr_net_read_bits(&dword_140404A6C[scaled_index_4 + 179473723], 1);
              table_value_3 = dword_140404A6C[scaled_index_4 + 179473701];
            }
            decoded_value = &dword_140404A6C[scaled_index_4 + 179473702];
            decoded_value_2 = &dword_140404A6C[scaled_index_4 + 179473703];
            if ( table_value_3 < 34 )
            {
              ++g_16B15FF00;
              *decoded_value = 0;
              *decoded_value_2 = 0;
            }
            else
            {
              sr_net_read_bits(decoded_value, 8);
              sr_net_read_bits(decoded_value_2, 8);
              ++g_16B15FF00;
            }
          }
          else
          {
            state_address = &g_16B0A7F34;
            while ( *(state_address - 1) != (unsigned int)ntohl_sr(g_18539D3E8)
                 || *(_WORD *)state_address != (unsigned __int16)ntohs_sr(HIWORD(g_18539D3E4)) )
            {
              ++iteration_count;
              ++element_index_2;
              state_address += 23;
              if ( iteration_count >= (int)g_16B15FF00 )
                goto LABEL_53;
            }
            scaled_index_5 = 23LL * iteration_count;
            sr_net_read_bits(&dword_140404A6C[scaled_index_5 + 179473701], 8);
            cached_packet_in_byte_4 = packet_in_byte;
            if ( (int)packet_in_byte < 0x10000
              && (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
            {
              if ( (int)packet_in_bit > 0 )
              {
                cached_packet_in_byte_4 = packet_in_byte + 1;
                packet_in_bit = 0;
                ++packet_in_byte;
              }
              dword_140404A6C[scaled_index_5 + 179473720] = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte_4);
              packet_in_byte = cached_packet_in_byte_4 + 4;
            }
            dword_140404A6C[23 * element_index_2 + 179473720] = sub_140198F9B() - dword_140404A6C[23 * element_index_2 + 179473720];
            sr_net_read_bits(&dword_140404A6C[scaled_index_5 + 179473721], 4);
            sr_net_read_bits(&dword_140404A6C[scaled_index_5 + 179473717], 8);
            sr_net_read_bits(&dword_140404A6C[scaled_index_5 + 179473719], 8);
          }
        }
        else if ( masked_bits == 74 )
        {
          g_16B15FF38 = 2;
          if ( cached_packet_in_byte < 0x10000 )
          {
            if ( cached_packet_in_byte + 4 <= (int)packet_in_length )
            {
              if ( cached_packet_in_bit > 0 )
              {
                ++cached_packet_in_byte;
                packet_in_bit = 0;
                packet_in_byte = cached_packet_in_byte;
                cached_packet_in_bit = 0;
              }
              saved_cached_packet_in_byte_4 = cached_packet_in_byte;
              cached_packet_in_byte += 4;
              masked_bits_2 = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_4);
              packet_in_byte = cached_packet_in_byte;
            }
            if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= (int)packet_in_length )
            {
              if ( cached_packet_in_bit > 0 )
              {
                ++cached_packet_in_byte;
                packet_in_bit = 0;
                packet_in_byte = cached_packet_in_byte;
                cached_packet_in_bit = 0;
              }
              saved_cached_packet_in_byte_5 = cached_packet_in_byte;
              cached_packet_in_byte += 4;
              masked_bits_3 = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_5);
              packet_in_byte = cached_packet_in_byte;
            }
          }
          integer_sum_3 = masked_bits_2 + g_16B0A7EE0;
          if ( (signed int)(masked_bits_2 + g_16B0A7EE0) > 0x2000 )
            integer_sum_3 = 0x2000;
          g_16B0A7EE4 = integer_sum_3;
          iteration_count_2 = masked_bits_3;
          if ( masked_bits_3 < masked_bits_3 + 128 )
          {
            state_address_2 = &dword_140404A6C[2 * masked_bits_3 + 179457310];
            do
            {
              if ( iteration_count_2 < masked_bits_2 && iteration_count_2 < 0x2000 && cached_packet_in_byte < 0x10000 )
              {
                if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
                {
                  if ( cached_packet_in_bit > 0 )
                  {
                    ++cached_packet_in_byte;
                    packet_in_bit = 0;
                    packet_in_byte = cached_packet_in_byte;
                    cached_packet_in_bit = 0;
                  }
                  saved_cached_packet_in_byte_6 = cached_packet_in_byte;
                  cached_packet_in_byte += 4;
                  *(state_address_2 - 1) = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_6);
                  packet_in_byte = cached_packet_in_byte;
                }
                if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 2 <= cached_packet_in_length )
                {
                  if ( cached_packet_in_bit > 0 )
                  {
                    ++cached_packet_in_byte;
                    packet_in_bit = 0;
                    packet_in_byte = cached_packet_in_byte;
                    cached_packet_in_bit = 0;
                  }
                  saved_cached_packet_in_byte_7 = cached_packet_in_byte;
                  cached_packet_in_byte += 2;
                  *(_WORD *)state_address_2 = *(_WORD *)((char *)&packet_in_data + saved_cached_packet_in_byte_7);
                  packet_in_byte = cached_packet_in_byte;
                }
              }
              ++iteration_count_2;
              state_address_2 += 2;
            }
            while ( iteration_count_2 < masked_bits_3 + 128 );
          }
        }
      }
      while ( (int)sub_14011C760() > 0 );
    }
  }
  return;
}
#undef unused_frame_slot_0
#undef frame_word_at_32
#undef frame_word_at_36
#undef scratch_buffer
#undef unused_frame_slot_560

//----- (00000001400FE760) ----------------------------------------------------
void sub_1400FE760()
{
  int drawmenubutton_result;
  unsigned int state_word;

  *(_OWORD *)&menu_x = xmmword_1402797E0;
  g_150F610F4 = 41;
  drawmenubutton_result = sr_DrawMenuButton("Back");
  state_word = g_183EBFCBC;
  if ( drawmenubutton_result )
    state_word = 0;
  g_150F61110 = (uintptr_t)sub_1400FE870;
  *(unsigned int *)&menu_y = 1115684864;
  menu_item_height = 1105199104;
  g_183EBFCBC = state_word;
  menu_item_width = 1128267776;
  *(unsigned int *)&menu_x = 1128267776;
  *(_QWORD *)&g_150F61108 = 0;
  if ( (unsigned int)sub_1400707C0(
                       "mutelist",
                       640.0,
                       384.0,
                       160.0,
                       0x42400000u,
                       0,
                       &g_18329C400,
                       0,
                       0,
                       g_18329C404)
    && (g_18329C400 & 0x80000000) == 0
    && (int)g_18329C400 < (int)g_18329C404 )
  {
    sub_140117820(dword_140404A6C[g_18329C400 + 280649319]);
  }
}

//----- (0000000140118B70) ----------------------------------------------------
void            sub_140118B70(int a1)
{
  extern int practice_death_menu(void);
  if (practice_death_menu()) return;
  __int64 input_value;
  unsigned int state_word;
  __int64 scaled_index;
  unsigned int scaled_index_2;
  bool comparison_result;
  unsigned int state_word_2;
  unsigned int state_word_3;
  int selection_code;
  int *state_address;
  char *literal_text;
  __int64 table_value;
  __int64 scaled_index_3;
  int *state_address_2;
  unsigned int table_value_2;
  unsigned int *state_address_3;
  unsigned int table_value_3;
  unsigned int *state_address_4;
  unsigned int state_word_4;
  unsigned int integer_difference;

  input_value = a1;
  state_word = g_18329CC24;
  scaled_index = 3597 * input_value;
  scaled_index_2 = dword_140404A6C[3597 * input_value + 71856342];
  if ( scaled_index_2 - 1 <= 1 )
    state_word = 1;
  g_18329CC24 = state_word;
  if ( !scaled_index_2 )
  {
    g_18329CC24 = 0;
    return;
  }
  if ( state_word )
  {
    if ( scaled_index_2 == 1 )
    {
      sr_menu_push_size(240.0, 32.0);
      comparison_result = dword_140404A6C[scaled_index + 71856286] <= 5;
      *(unsigned int *)&menu_x = 1136918528;
      *(unsigned int *)&menu_y = 1134034944;
      if ( comparison_result )
      {
        state_word_2 = g_150F610FC;
        if ( (int)dword_140404A6C[scaled_index + 71856291] > 0 )
          state_word_2 = 1;
        g_150F610FC = state_word_2;
        if ( (unsigned int)sr_DrawMenuButton("Respawn at Base") )
          dword_140404A6C[scaled_index + 71856345] = 2;
      }
      state_word_3 = g_150F610FC;
      comparison_result = (int)dword_140404A6C[scaled_index + 71856291] <= 0;
      g_150F610F4 = 30;
      if ( !comparison_result )
        state_word_3 = 1;
      g_150F610FC = state_word_3;
      if ( (unsigned int)sr_DrawMenuButton("Enter City") )
        dword_140404A6C[scaled_index + 71856345] = 1;
      sr_menu_pop_size();
      scaled_index_2 = dword_140404A6C[scaled_index + 71856342];
    }
    if ( scaled_index_2 >= 0xE )
    {
      if ( scaled_index_2 <= 0x1A )
      {
        if ( game_type == 4 )
          sub_140119F70(input_value);
        else
          sub_140119220(input_value);
      }
      return;
    }
    switch ( scaled_index_2 )
    {
      case 2u:
        sub_14011ACC0(input_value);
        return;
      case 9u:
        *(unsigned int *)&menu_x = 1082130432;
        *(unsigned int *)&menu_y = 1124073472;
        if ( (int)g_151042894 < 16 )
        {
          dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
          dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
        }
        menu_item_width = 1132199936;
        menu_item_height = 1107296256;
        sr_DrawMenuButtonSelectable("Buy", (int *)&dword_140404A6C[scaled_index + 71856345], 1);
        sr_DrawMenuButtonSelectable("Sell", (int *)&dword_140404A6C[scaled_index + 71856345], 2);
        selection_code = 0;
        state_address = (int *)&g_18329CC24;
        literal_text = "Done";
LABEL_53:
        menu_y = menu_y + 32.0;
LABEL_54:
        sr_DrawMenuButtonSelectable((unsigned __int8 *)literal_text, state_address, selection_code);
        state_word_4 = g_151042894;
        if ( (int)g_151042894 > 0 )
        {
          --g_151042894;
          integer_difference = state_word_4 - 1;
          menu_item_width = dword_140404A6C[2 * integer_difference + 70317963];
          menu_item_height = dword_140404A6C[2 * integer_difference + 70317964];
        }
        return;
      case 0xAu:
        sub_14011A330(input_value);
        return;
    }
    if ( scaled_index_2 != 11 )
    {
      if ( scaled_index_2 - 12 > 1 )
        return;
      *(unsigned int *)&menu_x = 1082130432;
      *(unsigned int *)&menu_y = 1124073472;
      if ( (int)g_151042894 < 16 )
      {
        dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
        dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
      }
      state_address_3 = &dword_140404A6C[scaled_index + 71856345];
      menu_item_width = 1132199936;
      menu_item_height = 1107296256;
      sr_DrawMenuButtonSelectable("Deposit", (int *)&dword_140404A6C[scaled_index + 71856345], 7);
      sr_DrawMenuButtonSelectable("Withdrawl $5", (int *)&dword_140404A6C[scaled_index + 71856345], 1);
      sr_DrawMenuButtonSelectable("Withdrawl $10", (int *)&dword_140404A6C[scaled_index + 71856345], 2);
      sr_DrawMenuButtonSelectable("Withdrawl $20", (int *)&dword_140404A6C[scaled_index + 71856345], 3);
      sr_DrawMenuButtonSelectable("Withdrawl $50", (int *)&dword_140404A6C[scaled_index + 71856345], 4);
      sr_DrawMenuButtonSelectable("Withdrawl $100", (int *)&dword_140404A6C[scaled_index + 71856345], 5);
      sr_DrawMenuButtonSelectable("Withdrawl $1000", (int *)&dword_140404A6C[scaled_index + 71856345], 6);
      table_value_3 = dword_140404A6C[scaled_index + 71856342];
      state_address_4 = &g_18329CC24;
      if ( table_value_3 == 12 )
        state_address_4 = state_address_3;
      selection_code = 0;
      if ( table_value_3 == 12 )
        selection_code = 16;
      literal_text = "Done";
      if ( table_value_3 == 12 )
        literal_text = "Back";
      state_address = (int *)state_address_4;
      goto LABEL_53;
    }
    if ( (_DWORD)input_value == -1 )
      return;
    table_value = (int)dword_140404A6C[scaled_index + 71856343];
    if ( (_DWORD)table_value == -1 )
      return;
    *(unsigned int *)&menu_x = 1082130432;
    *(unsigned int *)&menu_y = 1124073472;
    sr_menu_push_size(252.0, 32.0);
    scaled_index_3 = 14019 * table_value;
    state_address_2 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 291638736);
    table_value_2 = dword_140404A6C[scaled_index_3 + 225641203];
    if ( table_value_2 == 3 )
    {
      sr_DrawMenuButtonSelectable("Sell Car", state_address_2, 1);
      table_value_2 = dword_140404A6C[scaled_index_3 + 225641203];
      menu_y = menu_y + 32.0;
      if ( table_value_2 == 3 )
        goto LABEL_38;
    }
    else
    {
      menu_y = menu_y + 32.0;
    }
    state_address_2 = (int *)&g_18329CC24;
LABEL_38:
    selection_code = 0;
    if ( table_value_2 == 3 )
      selection_code = 16;
    literal_text = "Done";
    if ( table_value_2 == 3 )
      literal_text = "Back";
    state_address = state_address_2;
    goto LABEL_54;
  }
}

//----- (0000000140119050) ----------------------------------------------------
__int64            sub_140119050(int a1)
{
  __int64 player_record_offset;
  unsigned int table_value;
  unsigned int *state_address;
  int selection_code;
  char *literal_text;
  __int64 result;

  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1124073472;
  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  player_record_offset = 3597LL * a1;
  menu_item_width = 1132199936;
  menu_item_height = 1107296256;
  sr_DrawMenuButtonSelectable("Deposit", (int *)&dword_140404A6C[player_record_offset + 71856345], 7);
  sr_DrawMenuButtonSelectable("Withdrawl $5", (int *)&dword_140404A6C[player_record_offset + 71856345], 1);
  sr_DrawMenuButtonSelectable("Withdrawl $10", (int *)&dword_140404A6C[player_record_offset + 71856345], 2);
  sr_DrawMenuButtonSelectable("Withdrawl $20", (int *)&dword_140404A6C[player_record_offset + 71856345], 3);
  sr_DrawMenuButtonSelectable("Withdrawl $50", (int *)&dword_140404A6C[player_record_offset + 71856345], 4);
  sr_DrawMenuButtonSelectable("Withdrawl $100", (int *)&dword_140404A6C[player_record_offset + 71856345], 5);
  sr_DrawMenuButtonSelectable("Withdrawl $1000", (int *)&dword_140404A6C[player_record_offset + 71856345], 6);
  table_value = dword_140404A6C[player_record_offset + 71856342];
  state_address = &g_18329CC24;
  if ( table_value == 12 )
    state_address = &dword_140404A6C[player_record_offset + 71856345];
  selection_code = 0;
  menu_y = menu_y + 32.0;
  if ( table_value == 12 )
    selection_code = 16;
  literal_text = "Done";
  if ( table_value == 12 )
    literal_text = "Back";
  sr_DrawMenuButtonSelectable((unsigned __int8 *)literal_text, (int *)state_address, selection_code);
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

//----- (0000000140119220) ----------------------------------------------------
__int64            sub_140119220(int a1)
{
  unsigned int masked_bits;
  unsigned int masked_bits_2;
  signed int element_index;
  __int64 player_record_offset;
  signed int remaining_count;
  unsigned int cached_menu_item_width;
  unsigned int selection_code;
  float component_sum;
  unsigned int table_value;
  signed int element_index_2;
  unsigned int *state_address;
  unsigned int *state_address_2;
  unsigned __int8 *record_pointer;
  char input_byte;
  unsigned int state_word;
  int scaled_index;
  int *state_address_3;
  unsigned int *state_address_4;
  unsigned __int8 *record_pointer_2;
  char input_byte_2;
  unsigned int state_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140119220[1088];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140119220 + 0)) /* [rsp+8h] */
#define label (*(char (*)[512])(void *)(sr_frame_140119220 + 48)) /* [rsp+38h] */
#define scratch_buffer (*(unsigned __int8 (*)[512])(void *)(sr_frame_140119220 + 560)) /* [rsp+238h] */
#define unused_frame_slot_1072 (*(__int64 (*))(void *)(sr_frame_140119220 + 1072)) /* [rsp+438h] */

  masked_bits = 1082130432;
  masked_bits_2 = 1115684864;
  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1115684864;
  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
    masked_bits_2 = *(unsigned int *)&menu_y;
    masked_bits = *(unsigned int *)&menu_x;
  }
  element_index = 0;
  player_record_offset = 3597LL * a1;
  menu_item_width = 1126170624;
  menu_item_height = 1103101952;
  g_150F6111C = masked_bits;
  g_150F61120 = masked_bits_2;
  *(unsigned int *)&menu_row_height = 0;
  menu_vertical = 0;
  sr_DrawMenuButtonSelectable("Weapons", (int *)&dword_140404A6C[player_record_offset + 71856345], 128);
  sr_DrawMenuButtonSelectable("Ammo", (int *)&dword_140404A6C[player_record_offset + 71856345], 129);
  sr_DrawMenuButtonSelectable("Equipment", (int *)&dword_140404A6C[player_record_offset + 71856345], 130);
  if ( game_type != 7 )
  {
    sr_DrawMenuButtonSelectable("Vehicles", (int *)&dword_140404A6C[player_record_offset + 71856345], 131);
    sr_DrawMenuButtonSelectable("Stocks", (int *)&dword_140404A6C[player_record_offset + 71856345], 132);
  }
  if ( dword_140404A6C[player_record_offset + 71856289] )
    sr_DrawMenuButtonSelectable("Manager", (int *)&dword_140404A6C[player_record_offset + 71856345], 133);
  if ( !menu_vertical )
  {
    *(unsigned int *)&menu_x = g_150F6111C;
    menu_y = menu_row_height + *(float *)&g_150F61120;
    if ( g_15104AA48 )
    {
      ++g_15104AE50;
      g_15104AE4C = 0;
    }
  }
  remaining_count = g_151042894;
  menu_vertical = 1;
  if ( (int)g_151042894 <= 0 )
  {
    cached_menu_item_width = menu_item_width;
  }
  else
  {
    remaining_count = g_151042894 - 1;
    g_151042894 = remaining_count;
    cached_menu_item_width = dword_140404A6C[2 * remaining_count + 70317963];
    menu_item_width = cached_menu_item_width;
    menu_item_height = dword_140404A6C[2 * remaining_count + 70317964];
  }
  selection_code = 1107296256;
  component_sum = 128.0;
  *(unsigned int *)&menu_x = 1107296256;
  *(unsigned int *)&menu_y = 1124073472;
  if ( remaining_count < 16 )
  {
    dword_140404A6C[2 * remaining_count + 70317963] = cached_menu_item_width;
    dword_140404A6C[2 * g_151042894 + 70317964] = menu_item_height;
    remaining_count = ++g_151042894;
  }
  table_value = dword_140404A6C[player_record_offset + 71856342];
  menu_item_width = 1132199936;
  menu_item_height = 1109393408;
  if ( table_value == 14 )
  {
    crt_sprintf(label, "$%d", g_182A8BB74);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("9mm", (int *)&dword_140404A6C[player_record_offset + 71856345], 0);
    crt_sprintf(label, "$%d", g_182A86C34);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("MP5", (int *)&dword_140404A6C[player_record_offset + 71856345], 1);
    crt_sprintf(label, "$%d", g_182A7F554);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("AK-47", (int *)&dword_140404A6C[player_record_offset + 71856345], 2);
    crt_sprintf(label, "$%d", g_182A81CF4);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("M-16", (int *)&dword_140404A6C[player_record_offset + 71856345], 3);
    crt_sprintf(label, "$%d", g_182A893D4);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Uzi", (int *)&dword_140404A6C[player_record_offset + 71856345], 4);
    table_value = dword_140404A6C[player_record_offset + 71856342];
    remaining_count = g_151042894;
  }
  if ( table_value == 15 )
  {
    crt_sprintf(label, "$%d", g_182A8CF44);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("9mm Magazine", (int *)&dword_140404A6C[player_record_offset + 71856345], 0);
    crt_sprintf(label, "$%d", g_182A88004);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("MP5 Magazine", (int *)&dword_140404A6C[player_record_offset + 71856345], 1);
    crt_sprintf(label, "$%d", g_182A80924);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("AK-47 Magazine", (int *)&dword_140404A6C[player_record_offset + 71856345], 2);
    crt_sprintf(label, "$%d", g_182A830C4);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("M-16 Magazine", (int *)&dword_140404A6C[player_record_offset + 71856345], 3);
    crt_sprintf(label, "$%d", g_182A8A7A4);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Uzi Magazine", (int *)&dword_140404A6C[player_record_offset + 71856345], 4);
    table_value = dword_140404A6C[player_record_offset + 71856342];
    remaining_count = g_151042894;
  }
  if ( table_value == 16 )
  {
    crt_sprintf(label, "$%d", g_182A8F6E4);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Bandage", (int *)&dword_140404A6C[player_record_offset + 71856345], 0);
    crt_sprintf(label, "$%d", g_182A90AB4);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Briefcase", (int *)&dword_140404A6C[player_record_offset + 71856345], 7);
    crt_sprintf(label, "$%d", g_182A8E314);
    sr_menu_label_at(
      label,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Grenade", (int *)&dword_140404A6C[player_record_offset + 71856345], 6);
    table_value = dword_140404A6C[player_record_offset + 71856342];
    remaining_count = g_151042894;
  }
  if ( table_value == 17 )
  {
    element_index_2 = 0;
    if ( (int)dword_140404A6C[player_record_offset + 71857986] > 0 )
    {
      state_address = &dword_140404A6C[player_record_offset + 71858004];
      do
      {
        if ( element_index_2 == 4 )
        {
          selection_code = 1140850688;
          component_sum = 128.0;
        }
        *(unsigned int *)&menu_x = selection_code;
        menu_y = component_sum;
        state_address_2 = &dword_140404A6C[18 * element_index_2 + 71857988 + player_record_offset];
        record_pointer = (unsigned __int8 *)(scratch_buffer - (unsigned __int8 *)state_address_2);
        do
        {
          input_byte = *(_BYTE *)state_address_2;
          *((_BYTE *)state_address_2 + (_QWORD)record_pointer) = *(_BYTE *)state_address_2;
          state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
        }
        while ( input_byte );
        crt_sprintf(label, "$%d", *state_address);
        sr_menu_label_at(
          label,
          (float)(*(float *)&menu_item_width + menu_x) - 2.0,
          (float)(*(float *)&menu_item_height + menu_y) - 2.0,
          12.0,
          10);
        state_word = g_150F610FC;
        scaled_index = *(state_address - 17);
        if ( (int)*state_address > (int)dword_140404A6C[player_record_offset + 71856272] )
          state_word = 1;
        g_150F610FC = state_word;
        sr_DrawMenuButtonSelectable(scratch_buffer, (int *)&dword_140404A6C[player_record_offset + 71856345], scaled_index);
        ++element_index_2;
        component_sum = component_sum + 44.0;
        state_address += 18;
      }
      while ( element_index_2 < (int)dword_140404A6C[player_record_offset + 71857986] );
      table_value = dword_140404A6C[player_record_offset + 71856342];
      remaining_count = g_151042894;
    }
  }
  if ( table_value == 18 )
  {
    *(unsigned int *)&menu_x = selection_code;
    menu_y = component_sum;
    sr_DrawMenuButtonSelectable("Buy 1 Share", (int *)&dword_140404A6C[player_record_offset + 71856345], 0);
    sr_DrawMenuButtonSelectable("Buy 10 Shares", (int *)&dword_140404A6C[player_record_offset + 71856345], 1);
    sr_DrawMenuButtonSelectable("Buy 100 Shares", (int *)&dword_140404A6C[player_record_offset + 71856345], 2);
    sr_DrawMenuButtonSelectable("Buy 1000 Shares", (int *)&dword_140404A6C[player_record_offset + 71856345], 3);
    *(unsigned int *)&menu_x = 1140850688;
    *(unsigned int *)&menu_y = 1124073472;
    selection_code = 1140850688;
    component_sum = 128.0;
    sr_DrawMenuButtonSelectable("Sell 1 Share", (int *)&dword_140404A6C[player_record_offset + 71856345], 4);
    sr_DrawMenuButtonSelectable("Sell 10 Shares", (int *)&dword_140404A6C[player_record_offset + 71856345], 5);
    sr_DrawMenuButtonSelectable("Sell 100 Shares", (int *)&dword_140404A6C[player_record_offset + 71856345], 6);
    sr_DrawMenuButtonSelectable("Sell 1000 Shares", (int *)&dword_140404A6C[player_record_offset + 71856345], 7);
    table_value = dword_140404A6C[player_record_offset + 71856342];
    remaining_count = g_151042894;
  }
  if ( table_value != 19 )
    goto LABEL_47;
  *(unsigned int *)&menu_x = selection_code;
  menu_y = component_sum;
  if ( remaining_count < 16 )
  {
    dword_140404A6C[2 * remaining_count + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894 + 70317964] = menu_item_height;
    remaining_count = ++g_151042894;
  }
  menu_item_height = 1102053376;
  menu_item_width = 1132199936;
  if ( (int)dword_140404A6C[player_record_offset + 71857986] > 0 )
  {
    state_address_3 = (int *)&dword_140404A6C[player_record_offset + 71857987];
    do
    {
      if ( element_index == 10 )
      {
        *(unsigned int *)&menu_x = 1140850688;
        *(unsigned int *)&menu_y = 1124073472;
      }
      state_address_4 = &dword_140404A6C[18 * element_index + 71857988 + player_record_offset];
      record_pointer_2 = (unsigned __int8 *)(scratch_buffer - (unsigned __int8 *)state_address_4);
      do
      {
        input_byte_2 = *(_BYTE *)state_address_4;
        *((_BYTE *)state_address_4 + (_QWORD)record_pointer_2) = *(_BYTE *)state_address_4;
        state_address_4 = (unsigned int *)((char *)state_address_4 + 1);
      }
      while ( input_byte_2 );
      sr_DrawMenuButtonSelectable(scratch_buffer, (int *)&dword_140404A6C[player_record_offset + 71856345], *state_address_3);
      ++element_index;
      state_address_3 += 18;
    }
    while ( element_index < (int)dword_140404A6C[player_record_offset + 71857986] );
    remaining_count = g_151042894;
  }
  if ( remaining_count > 0 )
  {
    g_151042894 = --remaining_count;
    menu_item_width = dword_140404A6C[2 * remaining_count + 70317963];
    menu_item_height = dword_140404A6C[2 * remaining_count + 70317964];
LABEL_47:
    if ( remaining_count > 0 )
    {
      g_151042894 = --remaining_count;
      menu_item_width = dword_140404A6C[2 * remaining_count + 70317963];
      menu_item_height = dword_140404A6C[2 * remaining_count + 70317964];
    }
  }
  *(unsigned int *)&menu_y = 1138491392;
  *(unsigned int *)&menu_x = 1107296256;
  if ( remaining_count < 16 )
  {
    dword_140404A6C[2 * remaining_count + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  menu_item_width = 1132199936;
  menu_item_height = 1109393408;
  sr_DrawMenuButtonSelectable("Done", (int *)&g_18329CC24, 0);
  state_word_2 = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    menu_item_width = dword_140404A6C[2 * (state_word_2 - 1) + 70317963];
    menu_item_height = dword_140404A6C[2 * (state_word_2 - 1) + 70317964];
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef label
#undef scratch_buffer
#undef unused_frame_slot_1072

//----- (0000000140119F70) ----------------------------------------------------
__int64            sub_140119F70(int a1)
{
  char iteration_count;
  __int64 input_value;
  int remaining_count;
  unsigned int cached_menu_item_width;
  int element_index;
  __int64 scaled_index;
  int scaled_index_2;
  int *state_address;
  int loaded_word;
  unsigned int *state_address_2;
  unsigned __int8 *record_pointer;
  char input_byte;
  signed int element_index_2;
  int *state_address_3;
  int loaded_word_2;
  unsigned int *state_address_4;
  unsigned __int8 *record_pointer_2;
  char input_byte_2;
  unsigned int state_word;
  unsigned int state_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140119F70[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140119F70 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(unsigned __int8 (*)[512])(void *)(sr_frame_140119F70 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_140119F70 + 544)) /* [rsp+220h] */

  iteration_count = 0;
  input_value = a1;
  remaining_count = g_151042894;
  *(unsigned int *)&menu_row_height = 0;
  *(unsigned int *)&menu_x = 1098907648;
  *(unsigned int *)&menu_y = 1115684864;
  g_150F6111C = 1098907648;
  g_150F61120 = 1115684864;
  menu_vertical = 0;
  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894 + 70317964] = menu_item_height;
    remaining_count = ++g_151042894;
  }
  cached_menu_item_width = 1126170624;
  element_index = 0;
  scaled_index = 3597 * input_value;
  menu_item_width = 1126170624;
  menu_item_height = 1103101952;
  scaled_index_2 = dword_140404A6C[3597 * input_value + 71857986];
  if ( scaled_index_2 > 0 )
  {
    state_address = (int *)&dword_140404A6C[scaled_index + 71857987];
    do
    {
      loaded_word = *state_address;
      if ( (*state_address & 0x1000000) != 0 )
      {
        state_address_2 = &dword_140404A6C[18 * element_index + 71857988 + scaled_index];
        record_pointer = (unsigned __int8 *)(scratch_buffer - (unsigned __int8 *)state_address_2);
        do
        {
          input_byte = *(_BYTE *)state_address_2;
          *((_BYTE *)state_address_2 + (_QWORD)record_pointer) = *(_BYTE *)state_address_2;
          state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
        }
        while ( input_byte );
        sr_DrawMenuButtonSelectable(scratch_buffer, (int *)&dword_140404A6C[scaled_index + 71856345], loaded_word);
      }
      scaled_index_2 = dword_140404A6C[scaled_index + 71857986];
      ++element_index;
      state_address += 18;
    }
    while ( element_index < scaled_index_2 );
    remaining_count = g_151042894;
    cached_menu_item_width = menu_item_width;
  }
  if ( remaining_count > 0 )
  {
    g_151042894 = --remaining_count;
    cached_menu_item_width = dword_140404A6C[2 * remaining_count + 70317963];
    menu_item_width = cached_menu_item_width;
    menu_item_height = dword_140404A6C[2 * remaining_count + 70317964];
  }
  if ( !menu_vertical && g_15104AA48 )
  {
    ++g_15104AE50;
    g_15104AE4C = 0;
  }
  *(unsigned int *)&menu_x = 1098907648;
  menu_vertical = 1;
  *(unsigned int *)&menu_y = 1124073472;
  if ( remaining_count < 16 )
  {
    dword_140404A6C[2 * remaining_count + 70317963] = cached_menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  element_index_2 = 0;
  menu_item_width = 1132199936;
  menu_item_height = 1108344832;
  if ( scaled_index_2 > 0 )
  {
    state_address_3 = (int *)&dword_140404A6C[scaled_index + 71857987];
    do
    {
      loaded_word_2 = *state_address_3;
      if ( (*state_address_3 & 0x1000000) == 0 )
      {
        state_address_4 = &dword_140404A6C[18 * element_index_2 + 71857988 + scaled_index];
        record_pointer_2 = (unsigned __int8 *)(scratch_buffer - (unsigned __int8 *)state_address_4);
        do
        {
          input_byte_2 = *(_BYTE *)state_address_4;
          *((_BYTE *)state_address_4 + (_QWORD)record_pointer_2) = *(_BYTE *)state_address_4;
          state_address_4 = (unsigned int *)((char *)state_address_4 + 1);
        }
        while ( input_byte_2 );
        state_word = g_150F610FC;
        if ( (loaded_word_2 & 0x100) != 0 )
          state_word = 1;
        g_150F610FC = state_word;
        sr_DrawMenuButtonSelectable(scratch_buffer, (int *)&dword_140404A6C[scaled_index + 71856345], loaded_word_2);
        if ( (iteration_count & 7) == 7 )
        {
          *(unsigned int *)&menu_y = 1124073472;
          menu_x = menu_x + 284.0;
        }
        ++iteration_count;
      }
      ++element_index_2;
      state_address_3 += 18;
    }
    while ( element_index_2 < (int)dword_140404A6C[scaled_index + 71857986] );
  }
  *(unsigned int *)&menu_y = 1139802112;
  *(unsigned int *)&menu_x = 1098907648;
  sr_DrawMenuButtonSelectable("Done", (int *)&g_18329CC24, 0);
  state_word_2 = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    menu_item_width = dword_140404A6C[2 * (state_word_2 - 1) + 70317963];
    menu_item_height = dword_140404A6C[2 * (state_word_2 - 1) + 70317964];
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_frame_slot_544

//----- (000000014011A330) ----------------------------------------------------
void            sub_14011A330(int a1)
{
  __int64 player_record_offset;
  __int64 table_value;
  int selection_code;
  __int64 lookup_index;
  __int64 scaled_index;
  signed int iteration_count;
  __int64 element_index;
  __int64 scaled_index_2;
  char *text_cursor;
  char *state_address;
  char input_byte;
  _WORD *state_address_2;
  char *destination_text;
  unsigned int state_word;
  int *state_address_3;
  unsigned int table_value_2;
  __int64 selection_code_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  unsigned int state_word_2;
  bool comparison_result;
  unsigned int *state_address_4;
  char *destination_text_2;
  unsigned int state_word_3;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  unsigned int state_word_4;
  int *state_address_5;
  char *literal_text;
  unsigned int state_word_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011A330[1088];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14011A330 + 0)) /* [rsp+8h] */
#define callee_output_word (*(__int64 (*))(void *)(sr_frame_14011A330 + 40)) /* [rsp+30h] */
#define callee_output_word_2 (*(__int64 (*))(void *)(sr_frame_14011A330 + 48)) /* [rsp+38h] */
#define destination_text_3 (*(char (*)[504])(void *)(sr_frame_14011A330 + 56)) /* [rsp+40h] */
#define label (*(char (*)[512])(void *)(sr_frame_14011A330 + 560)) /* [rsp+238h] */
#define unused_frame_slot_1072 (*(__int64 (*))(void *)(sr_frame_14011A330 + 1072)) /* [rsp+438h] */

  if ( a1 != -1 )
  {
    player_record_offset = 3597LL * a1;
    table_value = (int)dword_140404A6C[player_record_offset + 71856343];
    if ( (_DWORD)table_value != -1 )
    {
      *(unsigned int *)&menu_x = 1082130432;
      *(unsigned int *)&menu_y = 1115684864;
      sr_menu_push_size(252.0, 28.0);
      selection_code = 0;
      lookup_index = table_value;
      scaled_index = 14019 * table_value;
      iteration_count = 0;
      if ( (int)dword_140404A6C[14019 * table_value + 225654128] > 0 )
      {
        element_index = 0;
        while ( 1 )
        {
          if ( dword_140404A6C[scaled_index + 225641203] == 3 )
          {
            LOBYTE(callee_output_word_2) = 0;
            scaled_index_2 = (int)dword_140404A6C[14019 * lookup_index + 225654131 + 3 * element_index];
            if ( (int)scaled_index_2 < 6 )
            {
              text_cursor = off_1402B23E0[scaled_index_2];
              state_address = (char *)((char *)&callee_output_word_2 - text_cursor);
              do
              {
                input_byte = *text_cursor;
                state_address[(_QWORD)text_cursor] = *text_cursor;
                ++text_cursor;
              }
              while ( input_byte );
            }
            state_address_2 = (_WORD *)((char *)&callee_output_word + 7);
            do
            {
              comparison_result = *((_BYTE *)state_address_2 + 1) == 0;
              state_address_2 = (_WORD *)((char *)state_address_2 + 1);
            }
            while ( !comparison_result );
            *state_address_2 = 32;
            destination_text = (char *)&callee_output_word + 7;
            do
              comparison_result = *++destination_text == 0;
            while ( !comparison_result );
            strcpy(
              destination_text,
              (     char *)&dword_140404A6C[24944 * dword_140404A6C[14019 * lookup_index + 225654129 + 3 * element_index] + 346707722]);
            crt_sprintf(label, "$%d", dword_140404A6C[14019 * lookup_index + 225654130 + 3 * element_index]);
            sr_menu_label_at(
              label,
              (float)(*(float *)&menu_item_width + menu_x) - 2.0,
              (float)(*(float *)&menu_item_height + menu_y) - 2.0,
              12.0,
              10);
            state_word = g_150F610FC;
            if ( (int)dword_140404A6C[player_record_offset + 71856272] < (int)dword_140404A6C[14019 * lookup_index + 225654130 + 3 * element_index] )
              state_word = 1;
            state_address_3 = (int *)&dword_140404A6C[player_record_offset + 71856345];
            g_150F610FC = state_word;
            sr_DrawMenuButtonSelectable((unsigned __int8 *)&callee_output_word_2, (int *)&dword_140404A6C[player_record_offset + 71856345], iteration_count + 1);
          }
          else
          {
            state_address_3 = (int *)&dword_140404A6C[player_record_offset + 71856345];
          }
          table_value_2 = dword_140404A6C[scaled_index + 225641203];
          if ( table_value_2 != 5 )
            goto LABEL_44;
          if ( iteration_count )
          {
            switch ( iteration_count )
            {
              case 1:
                selection_code_2 = 0x7469755320646552LL;
                destination_text_3[0] = 0;
                break;
              case 2:
                selection_code_2 = 0x7553206574696857LL;
                strcpy(destination_text_3, "it");
                break;
              case 3:
                selection_code_2 = 0x6563616C6B63654ELL;
                destination_text_3[0] = 0;
                break;
              case 4:
                selection_code_2 = 0x63654E2068736143LL;
                strcpy(destination_text_3, "klace");
                break;
              default:
                goto LABEL_29;
            }
          }
          else
          {
            selection_code_2 = 0x6975532065756C42LL;
            strcpy(destination_text_3, "t");
          }
          callee_output_word_2 = selection_code_2;
LABEL_29:
          scaled_index_3 = element_index + 4673 * lookup_index;
          scaled_index_4 = 3 * scaled_index_3;
          crt_sprintf(label, "$%d", dword_140404A6C[3 * scaled_index_3 + 225654130]);
          sr_menu_label_at(
            label,
            (float)(*(float *)&menu_item_width + menu_x) - 2.0,
            (float)(*(float *)&menu_item_height + menu_y) - 2.0,
            12.0,
            10);
          state_word_2 = g_150F610FC;
          if ( (int)dword_140404A6C[player_record_offset + 71856272] < (int)dword_140404A6C[scaled_index_4 + 225654130] )
            state_word_2 = 1;
          g_150F610FC = state_word_2;
          switch ( iteration_count )
          {
            case 0:
              comparison_result = dword_140404A6C[player_record_offset + 71859822] == 3;
              goto LABEL_41;
            case 1:
              comparison_result = dword_140404A6C[player_record_offset + 71859822] == 8;
              goto LABEL_41;
            case 2:
              comparison_result = dword_140404A6C[player_record_offset + 71859822] == 7;
              goto LABEL_41;
            case 3:
              comparison_result = dword_140404A6C[player_record_offset + 71859826] == 1;
              goto LABEL_41;
            case 4:
              comparison_result = dword_140404A6C[player_record_offset + 71859826] == 2;
LABEL_41:
              if ( comparison_result )
                g_150F610FC = 1;
              break;
          }
          state_address_3 = (int *)&dword_140404A6C[player_record_offset + 71856345];
          sr_DrawMenuButtonSelectable((unsigned __int8 *)&callee_output_word_2, (int *)&dword_140404A6C[player_record_offset + 71856345], iteration_count + 1);
          table_value_2 = dword_140404A6C[scaled_index + 225641203];
LABEL_44:
          state_address_4 = (unsigned int *)state_address_3;
          if ( table_value_2 == 8 )
          {
            LOBYTE(callee_output_word_2) = 0;
            destination_text_2 = (char *)&callee_output_word + 7;
            do
              comparison_result = *++destination_text_2 == 0;
            while ( !comparison_result );
            strcpy(
              destination_text_2,
              (     char *)&dword_140404A6C[1268 * dword_140404A6C[14019 * lookup_index + 225654129 + 3 * element_index] + 278521297]);
            crt_sprintf(label, "$%d", dword_140404A6C[14019 * lookup_index + 225654130 + 3 * element_index]);
            sr_menu_label_at(
              label,
              (float)(*(float *)&menu_item_width + menu_x) - 2.0,
              (float)(*(float *)&menu_item_height + menu_y) - 2.0,
              12.0,
              10);
            state_word_3 = g_150F610FC;
            if ( (int)dword_140404A6C[player_record_offset + 71856272] < (int)dword_140404A6C[14019 * lookup_index + 225654130 + 3 * element_index] )
              state_word_3 = 1;
            state_address_4 = &dword_140404A6C[player_record_offset + 71856345];
            g_150F610FC = state_word_3;
            sr_DrawMenuButtonSelectable((unsigned __int8 *)&callee_output_word_2, (int *)&dword_140404A6C[player_record_offset + 71856345], iteration_count + 1);
            table_value_2 = dword_140404A6C[scaled_index + 225641203];
          }
          if ( table_value_2 == 9 )
          {
            scaled_index_5 = element_index + 4673 * lookup_index;
            scaled_index_6 = 3 * scaled_index_5;
            crt_sprintf(label, "$%d", dword_140404A6C[3 * scaled_index_5 + 225654130]);
            sr_menu_label_at(
              label,
              (float)(*(float *)&menu_item_width + menu_x) - 2.0,
              (float)(*(float *)&menu_item_height + menu_y) - 2.0,
              12.0,
              10);
            state_word_4 = g_150F610FC;
            if ( (int)dword_140404A6C[player_record_offset + 71856272] < (int)dword_140404A6C[scaled_index_6 + 225654130] )
              state_word_4 = 1;
            g_150F610FC = state_word_4;
            sr_DrawMenuButtonSelectable("Burger", state_address_3, iteration_count + 1);
            state_address_4 = (unsigned int *)state_address_3;
          }
          ++iteration_count;
          ++element_index;
          if ( iteration_count >= (int)dword_140404A6C[scaled_index + 225654128] )
          {
            selection_code = 0;
            goto LABEL_57;
          }
        }
      }
      state_address_4 = &dword_140404A6C[player_record_offset + 71856345];
LABEL_57:
      state_address_5 = (int *)&g_18329CC24;
      if ( dword_140404A6C[scaled_index + 225641203] == 3 )
      {
        state_address_5 = (int *)state_address_4;
        selection_code = 16;
      }
      literal_text = "Done";
      if ( dword_140404A6C[scaled_index + 225641203] == 3 )
        literal_text = "Back";
      menu_y = menu_y + 28.0;
      sr_DrawMenuButtonSelectable((unsigned __int8 *)literal_text, state_address_5, selection_code);
      state_word_5 = g_151042894;
      if ( (int)g_151042894 > 0 )
      {
        --g_151042894;
        menu_item_width = dword_140404A6C[2 * (state_word_5 - 1) + 70317963];
        menu_item_height = dword_140404A6C[2 * (state_word_5 - 1) + 70317964];
      }
    }
  }
}
#undef unused_frame_slot_0
#undef callee_output_word
#undef callee_output_word_2
#undef destination_text_3
#undef label
#undef unused_frame_slot_1072

//----- (000000014011AA20) ----------------------------------------------------
__int64            sub_14011AA20(int a1)
{
  int *state_address;
  __int64 result;

  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1124073472;
  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  menu_item_width = 1132199936;
  menu_item_height = 1107296256;
  state_address = (int *)&dword_140404A6C[3597 * a1 + 71856345];
  sr_DrawMenuButtonSelectable("Buy", state_address, 1);
  sr_DrawMenuButtonSelectable("Sell", state_address, 2);
  menu_y = menu_y + 32.0;
  sr_DrawMenuButtonSelectable("Done", (int *)&g_18329CC24, 0);
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

//----- (000000014011AB60) ----------------------------------------------------
void            sub_14011AB60(int a1)
{
  __int64 player_record_offset;
  __int64 table_value;
  __int64 scaled_index;
  int *state_address;
  unsigned int table_value_2;
  int selection_code;
  char *literal_text;
  unsigned int state_word;
  unsigned int integer_difference;

  if ( a1 == -1 )
    return;
  player_record_offset = 3597LL * a1;
  table_value = (int)dword_140404A6C[player_record_offset + 71856343];
  if ( (_DWORD)table_value == -1 )
    return;
  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1124073472;
  sr_menu_push_size(252.0, 32.0);
  scaled_index = 14019 * table_value;
  state_address = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + player_record_offset * 4 + 291638736);
  table_value_2 = dword_140404A6C[scaled_index + 225641203];
  if ( table_value_2 == 3 )
  {
    sr_DrawMenuButtonSelectable("Sell Car", state_address, 1);
    table_value_2 = dword_140404A6C[scaled_index + 225641203];
    menu_y = menu_y + 32.0;
    if ( table_value_2 == 3 )
      goto LABEL_8;
  }
  else
  {
    menu_y = menu_y + 32.0;
  }
  state_address = (int *)&g_18329CC24;
LABEL_8:
  selection_code = 0;
  if ( table_value_2 == 3 )
    selection_code = 16;
  literal_text = "Done";
  if ( table_value_2 == 3 )
    literal_text = "Back";
  sr_DrawMenuButtonSelectable((unsigned __int8 *)literal_text, state_address, selection_code);
  state_word = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    integer_difference = state_word - 1;
    menu_item_width = dword_140404A6C[2 * integer_difference + 70317963];
    menu_item_height = dword_140404A6C[2 * integer_difference + 70317964];
  }
}

//----- (000000014011ACC0) ----------------------------------------------------
__int64            sub_14011ACC0(int a1)
{
  __int64 input_value;
  int iteration_count;
  __int64 scaled_index;
  int integer_sum;
  char *literal_text;
  signed int state_word;
  __int64 result;

  input_value = a1;
  if ( game_type == 2 || game_type == 5 )
  {
    state_word = g_151042894;
    goto LABEL_22;
  }
  g_150F6111C = *(unsigned int *)&menu_x;
  *(unsigned int *)&menu_row_height = 0;
  g_150F61120 = *(unsigned int *)&menu_y;
  menu_vertical = 0;
  sr_menu_push_size(248.0, 32.0);
  iteration_count = 0;
  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1119879168;
  scaled_index = 3597 * input_value;
  do
  {
    if ( dword_140404A6C[scaled_index + 71856286] != 17 )
      goto LABEL_12;
    if ( iteration_count )
    {
      if ( iteration_count == 1 )
      {
        g_150F610F4 = 31;
        integer_sum = 2;
        literal_text = "Join Monsota";
      }
      else
      {
        if ( game_type == 7 )
          goto LABEL_12;
        g_150F610F4 = iteration_count + 30;
        integer_sum = iteration_count + 1;
        literal_text = "Join OXS";
      }
    }
    else
    {
      g_150F610F4 = 30;
      integer_sum = 1;
      literal_text = "Join Goldmen";
    }
    sr_DrawMenuButtonSelectable((unsigned __int8 *)literal_text, (int *)&dword_140404A6C[scaled_index + 71856345], integer_sum);
LABEL_12:
    ++iteration_count;
  }
  while ( iteration_count < 3 );
  if ( dword_140404A6C[scaled_index + 71856286] != 17 )
  {
    *(unsigned int *)&menu_x = 1144717312;
    g_150F610F4 = 33;
    sr_DrawMenuButtonSelectable("Observer", (int *)&dword_140404A6C[scaled_index + 71856345], 4);
  }
  state_word = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    state_word = g_151042894 - 1;
    g_151042894 = state_word;
    menu_item_width = dword_140404A6C[2 * state_word + 70317963];
    menu_item_height = dword_140404A6C[2 * state_word + 70317964];
  }
  if ( !menu_vertical && g_15104AA48 )
  {
    ++g_15104AE50;
    g_15104AE4C = 0;
  }
  menu_vertical = 1;
LABEL_22:
  *(unsigned int *)&menu_x = 1146028032;
  *(unsigned int *)&menu_y = 1107296256;
  if ( state_word < 16 )
  {
    dword_140404A6C[2 * state_word + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  menu_item_width = 1128267776;
  menu_item_height = 1107296256;
  g_150F610F4 = 21;
  sr_DrawMenuButtonSelectable("Ready", (int *)&dword_140404A6C[3597 * input_value + 71856345], 5);
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

