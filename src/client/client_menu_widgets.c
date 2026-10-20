#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014006F750) ----------------------------------------------------
__int64            sub_14006F750(
        unsigned __int8 *a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int text_label_id_result;
  __int64 menu_allocate_widget_result;
  __int64 scaled_index;
  unsigned int saved_menu_allocate_widget_result;

  text_label_id_result = sr_text_label_id(a1, (g_150F61084 << 8) + 6 + (g_150F610CC << 16));
  menu_allocate_widget_result = (int)sr_menu_allocate_widget(text_label_id_result, a2, a3, a4, a5, g_150F610E8);
  scaled_index = 122 * menu_allocate_widget_result;
  dword_140404A6C[scaled_index + 70087215] = a7;
  dword_140404A6C[scaled_index + 70087146] = a7;
  *(_QWORD *)&dword_140404A6C[scaled_index + 70087217] = a8;
  dword_140404A6C[scaled_index + 70087115] = 6;
  *(_QWORD *)&dword_140404A6C[scaled_index + 70087149] = a9;
  sr_text_copy_visible_label((__int64)&dword_140404A6C[122 * menu_allocate_widget_result + 70087151], (char *)a1);
  saved_menu_allocate_widget_result = g_150F61178;
  if ( g_150F61178 == -1 )
    saved_menu_allocate_widget_result = menu_allocate_widget_result;
  g_150F61178 = saved_menu_allocate_widget_result;
  (*(void (           **)(_QWORD, __int64))&dword_140404A6C[scaled_index + 70087217])(dword_140404A6C[scaled_index + 70087215], 1);
  return 0;
}

//----- (0000000140070B90) ----------------------------------------------------
__int64 sr_menu_begin_grid()
{
  return menu_begin_grid();
}

//----- (0000000140070BD0) ----------------------------------------------------
__int64            sub_140070BD0(int a1, unsigned int a2,      char *a3,      char *a4)
{
  __int64 record_word_offset;
  __int64 call_result;
  int state_word;
  __int64 cached_call_result;
  char *text_cursor;
  unsigned int *state_address;
  char input_byte;
  int call_result_2;
  char *literal_text;
  __int64 table_value;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  char input_byte_2;
  unsigned int state_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140070BD0[1424];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140070BD0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[36])(void *)(sr_frame_140070BD0 + 80)) /* [rsp+50h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140070BD0 + 116)) /* [rsp+74h] */
#define selection_code (*(int (*))(void *)(sr_frame_140070BD0 + 384)) /* [rsp+180h] */
#define unused_written_slot (*(char (*))(void *)(sr_frame_140070BD0 + 388)) /* [rsp+184h] */
#define unused_frame_slot_1408 (*(__int64 (*))(void *)(sr_frame_140070BD0 + 1408)) /* [rsp+580h] */

  record_word_offset = 517LL * a1;
  if ( (int)dword_140404A6C[record_word_offset + 70315979] <= 1 && a2 <= 1 )
  {
    crt_sprintf(&selection_code, "%s/%s", a3, a4);
    call_result = sub_14023A198(&selection_code, (__int64)scratch_buffer);
    state_word = 0;
    cached_call_result = call_result;
    g_1601E12A0 = 0;
    if ( (_DWORD)call_result != -1 )
    {
      do
      {
        if ( state_word >= 1024 )
          break;
        if ( (scratch_buffer[0] & 0x10) == 0 )
        {
          text_cursor = &callee_output_word;
          state_address = &dword_140404A6C[32 * (__int64)state_word + 133657102];
          do
          {
            input_byte = *text_cursor++;
            *(_BYTE *)state_address = input_byte;
            state_address = (unsigned int *)((char *)state_address + 1);
          }
          while ( input_byte );
          ++g_1601E12A0;
        }
        call_result_2 = sub_14023A5C4(cached_call_result, (__int64)scratch_buffer);
        state_word = g_1601E12A0;
      }
      while ( call_result_2 != -1 );
    }
    LOBYTE(dword_140404A6C[32 * (__int64)state_word + 133657102]) = 0;
    sub_140239CCC(cached_call_result);
    sub_14023AE00(
      (unsigned __int64)&g_1601E12A4,
      (int)g_1601E12A0,
      0x80u,
      (int (           *)(unsigned __int64, _BYTE *))sr_text_compare_bytes_alt);
    LOBYTE(dword_140404A6C[record_word_offset + 70315984]) = 0;
    LOBYTE(dword_140404A6C[record_word_offset + 70316240]) = 0;
    *(_QWORD *)&dword_140404A6C[record_word_offset + 70315982] = -1;
  }
  dword_140404A6C[record_word_offset + 70315979] = 3;
  dword_140404A6C[record_word_offset + 70315980] = a2;
  if ( a2 <= 1 )
  {
    literal_text = "Open File";
    if ( a2 )
      literal_text = "Save File";
    dword_140404A6C[record_word_offset + 70315981] = sub_140071C20(
                                       (unsigned __int8 *)literal_text,
                                       (float)((renderer_canvas_width) * 0.5) - 256.0,
                                       (float)((renderer_canvas_height) * 0.5) - 160.0,
                                       512.0,
                                       0x43A00000u,
                                       1095761920,
                                       256);
    sub_1400707C0(
      "Files",
      256.0,
      128.0,
      256.0,
      0x41A00000u,
      1u,
      &dword_140404A6C[record_word_offset + 70315982],
      (__int64)&g_1601E12A4,
      0x80u,
      g_1601E12A0);
    table_value = (int)dword_140404A6C[record_word_offset + 70315982];
    if ( (_DWORD)table_value != dword_140404A6C[record_word_offset + 70315983] && (int)table_value >= 0 && (int)table_value < (int)g_1601E12A0 )
    {
      state_address_2 = &dword_140404A6C[32 * table_value + 133657102];
      state_address_3 = &dword_140404A6C[record_word_offset + 70315984];
      do
      {
        input_byte_2 = *(_BYTE *)state_address_2;
        state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
        *(_BYTE *)state_address_3 = input_byte_2;
        state_address_3 = (unsigned int *)((char *)state_address_3 + 1);
      }
      while ( input_byte_2 );
    }
    sub_140070200("Filename", (__int64)&dword_140404A6C[record_word_offset + 70315984], 0x100u);
    *(unsigned int *)&menu_x = 1134690304;
    *(unsigned int *)&menu_y = 1082130432;
    if ( (int)g_151042894 < 16 )
    {
      dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
      dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
    }
    menu_item_height = 1103101952;
    menu_item_width = 1124073472;
    if ( a2 )
      selection_code = 1702256979;
    else
      selection_code = 1852141647;
    unused_written_slot = 0;
    if ( (unsigned int)sr_DrawMenuButton((unsigned __int8 *)&selection_code) )
      crt_sprintf(&dword_140404A6C[record_word_offset + 70316240], "%s", (     char *)&dword_140404A6C[record_word_offset + 70315984]);
    g_150F610F4 = 41;
    sr_DrawMenuButton("Cancel");
    state_word_2 = g_151042894;
    if ( (int)g_151042894 > 0 )
    {
      --g_151042894;
      menu_item_width = dword_140404A6C[2 * (state_word_2 - 1) + 70317963];
      menu_item_height = dword_140404A6C[2 * (state_word_2 - 1) + 70317964];
    }
  }
  dword_140404A6C[record_word_offset + 70315983] = dword_140404A6C[record_word_offset + 70315982];
  sub_140077230();
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef callee_output_word
#undef selection_code
#undef unused_written_slot
#undef unused_frame_slot_1408

//----- (0000000140070FF0) ----------------------------------------------------
__int64            sub_140070FF0(
        int a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        float *a7,
        float a8,
        float a9)
{
  unsigned int text_label_id_result;
  unsigned int menu_allocate_widget_result;
  __int64 scaled_index;
  float product_difference;

  text_label_id_result = sr_text_label_id("Scrollbar", a1 + (g_150F610CC << 16) + (g_150F61084 << 8));
  menu_allocate_widget_result = sr_menu_allocate_widget(text_label_id_result, a2, a3, a4, a5, 0);
  scaled_index = 122LL * (int)menu_allocate_widget_result;
  *(float *)&dword_140404A6C[scaled_index + 70087220] = a8;
  *(float *)&dword_140404A6C[scaled_index + 70087221] = a9;
  dword_140404A6C[scaled_index + 70087219] = a6;
  dword_140404A6C[scaled_index + 70087115] = 7;
  *(_QWORD *)&dword_140404A6C[scaled_index + 70087217] = (uint64)(uintptr_t)(a7);
  if ( g_151042650 || (dword_140404A6C[scaled_index + 70087215] = 0, g_151042650) )
  {
    if ( !g_1510426EC )
    {
      if ( menu_allocate_widget_result != g_150F61180 )
        goto LABEL_12;
      dword_140404A6C[scaled_index + 70087215] = 1;
    }
  }
  if ( menu_allocate_widget_result == g_150F61180 )
  {
    product_difference = *a7 - (float)((float)(int)g_160FC481C * 16.0);
    if ( product_difference < a8 )
      product_difference = a8;
    if ( product_difference > a9 )
      product_difference = a9;
    *a7 = product_difference;
  }
LABEL_12:
  if ( dword_140404A6C[scaled_index + 70087215] )
    **(float **)&dword_140404A6C[scaled_index + 70087217] = fminf(
                                                     fmaxf(
                                                       (float)((float)((float)(*(float *)&g_1B0032364
                                                                             - *(float *)&dword_140404A6C[scaled_index + 70087135])
                                                                     - (float)(*(float *)&dword_140404A6C[scaled_index + 70087219]
                                                                             * 0.5))
                                                             / (float)(*(float *)&dword_140404A6C[scaled_index + 70087128]
                                                                     - *(float *)&dword_140404A6C[scaled_index + 70087219]))
                                                     * (float)(*(float *)&dword_140404A6C[scaled_index + 70087221]
                                                             - *(float *)&dword_140404A6C[scaled_index + 70087220]),
                                                       *(float *)&dword_140404A6C[scaled_index + 70087220]),
                                                     *(float *)&dword_140404A6C[scaled_index + 70087221]);
  return menu_allocate_widget_result;
}

//----- (0000000140071C20) ----------------------------------------------------
__int64            sub_140071C20(unsigned __int8 *a1, float a2, float a3, float a4, float a5, int a6, __int16 a7)
{
  __int64 state_word;
  float combined_products;
  float combined_products_2;
  unsigned __int8 *buffer_cursor;
  unsigned int text_label_id_result;
  unsigned int *state_address;
  int iteration_count;
  signed int element_index;
  BOOL comparison_result;
  __int64 saved_element_index;
  __int64 saved_element_index_2;
  unsigned int *state_address_2;
  __int64 scaled_index;
  char *state_address_3;
  unsigned __int8 loaded_word;
  int iteration_count_2;
  _BYTE *buffer_cursor_2;
  char scaled_index_2;
  __int64 scaled_index_3;
  __int64 iteration_count_3;
  unsigned int *state_address_4;
  __int64 remaining_count;
  float component_delta;
  float component_delta_2;
  float combined_products_3;
  float component_delta_3;
  unsigned int masked_bits;
  unsigned int state_address_5;
  float weighted_sum;
  unsigned int float_word;
  float weighted_sum_2;
  unsigned int table_value;
  unsigned int table_value_2;
  unsigned int masked_bits_2;
  unsigned int masked_bits_3;
  float state_address_6;
  float component_delta_4;
  float weighted_sum_3;
  float component_delta_5;
  float weighted_sum_4;
  float combined_products_4;

  state_word = (int)g_150F61084;
  combined_products = a2;
  combined_products_2 = a3;
  buffer_cursor = a1;
  text_label_id_result = sr_text_label_id(a1, 1u);
  state_address = &g_15102819C;
  iteration_count = 0;
  element_index = -1;
  do
  {
    if ( *(state_address - 1) - 1 <= 1 && *state_address == text_label_id_result )
      element_index = iteration_count;
    ++iteration_count;
    state_address += 98;
  }
  while ( iteration_count < 256 );
  comparison_result = 0;
  if ( element_index == -1 )
  {
    element_index = 0;
    state_address_2 = &g_151028198;
    while ( *state_address_2 )
    {
      ++element_index;
      state_address_2 += 98;
      if ( (__int64)state_address_2 >= (__int64)&g_151040998 )
        return 0xFFFFFFFFLL;
    }
    if ( element_index == -1 )
      return 0xFFFFFFFFLL;
    saved_element_index = element_index;
    saved_element_index_2 = element_index;
    goto LABEL_18;
  }
  if ( (a7 & 0x100) != 0 )
    comparison_result = dword_140404A6C[98 * element_index + 70290891] == 1;
  saved_element_index = element_index;
  saved_element_index_2 = element_index;
  if ( comparison_result )
  {
LABEL_18:
    if ( (a7 & 1) != 0 )
    {
      combined_products = a2 + (float)(a4 * -0.5);
    }
    else if ( (a7 & 2) != 0 )
    {
      combined_products = a2 - a4;
    }
    if ( (a7 & 4) != 0 )
    {
      combined_products_2 = a3 + (float)(a5 * -0.5);
    }
    else if ( (a7 & 8) != 0 )
    {
      combined_products_2 = a3 - a5;
    }
    scaled_index = 98 * saved_element_index_2;
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[98 * saved_element_index_2 + 70290891]), 0, 0x188u);
    *(float *)&dword_140404A6C[scaled_index + 70290899] = a5;
    *(float *)&dword_140404A6C[scaled_index + 70290896] = combined_products;
    *(float *)&dword_140404A6C[scaled_index + 70290897] = combined_products_2;
    *(float *)&dword_140404A6C[scaled_index + 70290898] = a4;
    dword_140404A6C[scaled_index + 70290901] = 1101004800;
    if ( (a7 & 0x200) != 0 )
    {
      dword_140404A6C[scaled_index + 70290901] = 0;
      dword_140404A6C[scaled_index + 70290972] = 1;
    }
    dword_140404A6C[scaled_index + 70290900] = 0x40000000;
    state_address_3 = (char *)&g_150F61040 + scaled_index * 4 - (_QWORD)buffer_cursor;
    do
    {
      loaded_word = *buffer_cursor;
      buffer_cursor[(_QWORD)state_address_3 + 815516] = *buffer_cursor;
      ++buffer_cursor;
    }
    while ( loaded_word );
    iteration_count_2 = 0;
    buffer_cursor_2 = (char *)&dword_140404A6C[scaled_index + 70290908] + 1;
    do
    {
      scaled_index_2 = *(buffer_cursor_2 - 1);
      if ( !scaled_index_2 || scaled_index_2 == 35 && *buffer_cursor_2 == 35 )
        break;
      ++buffer_cursor_2;
      ++iteration_count_2;
    }
    while ( (intptr_t)((uintptr_t)(buffer_cursor_2) - (uintptr_t)(((char *)&dword_140404A6C[scaled_index + 70290908] + 1))) < 255 );
    *((_BYTE *)&dword_140404A6C[scaled_index + 70290908] + iteration_count_2) = 0;
  }
  scaled_index_3 = 98 * saved_element_index_2;
  if ( (int)dword_140404A6C[98 * saved_element_index_2 + 70290891] <= 1 )
  {
    iteration_count_3 = 0;
    state_address_4 = &g_1510281A8;
    remaining_count = 256;
    do
    {
      if ( (int)*(state_address_4 - 4) >= 2 && iteration_count_3 != saved_element_index && *(state_address_4 - 2) == (_DWORD)state_word && (int)*state_address_4 < 256 )
        ++*state_address_4;
      ++iteration_count_3;
      state_address_4 += 98;
      --remaining_count;
    }
    while ( remaining_count );
    dword_140404A6C[scaled_index_3 + 70290895] = 0;
    dword_140404A6C[scaled_index_3 + 70290894] = g_150F61168;
    g_150F61168 = element_index;
  }
  dword_140404A6C[scaled_index_3 + 70290891] = 3;
  dword_140404A6C[scaled_index_3 + 70290892] = text_label_id_result;
  dword_140404A6C[scaled_index_3 + 70290893] = state_word;
  if ( g_1510426FC == element_index )
  {
    if ( g_1510426F8 )
    {
      if ( g_1510426F8 == 1 )
      {
        combined_products_3 = (float)(g_1510425C0 - g_151042704)
            - *(float *)&dword_140404A6C[scaled_index_3 + 70290973];
        *(float *)&dword_140404A6C[scaled_index_3 + 70290898] = combined_products_3;
        component_delta_3 = g_1510425C4 - g_151042708;
        *(float *)&dword_140404A6C[scaled_index_3 + 70290898] = fmaxf(combined_products_3, 64.0);
        *(float *)&dword_140404A6C[scaled_index_3 + 70290899] = fmaxf(component_delta_3 - *(float *)&dword_140404A6C[scaled_index_3 + 70290974], 64.0);
      }
    }
    else
    {
      component_delta = g_1510425C0 - g_151042704;
      *(float *)&dword_140404A6C[scaled_index_3 + 70290896] = g_1510425C0
                                                 - g_151042704;
      component_delta_2 = g_1510425C4 - g_151042708;
      *(float *)&dword_140404A6C[scaled_index_3 + 70290896] = fmaxf(component_delta, 4.0);
      *(float *)&dword_140404A6C[scaled_index_3 + 70290897] = fmaxf(component_delta_2, 4.0);
    }
  }
  masked_bits = dword_140404A6C[scaled_index_3 + 70290896];
  state_address_5 = dword_140404A6C[scaled_index_3 + 70290897];
  if ( (_DWORD)state_word != -1 )
  {
    *(float *)&masked_bits = *(float *)&masked_bits + *(float *)&dword_140404A6C[98 * state_word + 70290981];
    *(float *)&state_address_5 = (float)(*(float *)&dword_140404A6C[98 * state_word + 70290982]
                           - *(float *)&dword_140404A6C[98 * state_word + 70290905])
                   + *(float *)&state_address_5;
  }
  weighted_sum = *(float *)&dword_140404A6C[scaled_index_3 + 70290900];
  float_word = dword_140404A6C[scaled_index_3 + 70290901];
  weighted_sum_2 = *(float *)&masked_bits + weighted_sum;
  dword_140404A6C[scaled_index_3 + 70290973] = masked_bits;
  table_value = dword_140404A6C[scaled_index_3 + 70290898];
  dword_140404A6C[scaled_index_3 + 70290974] = state_address_5;
  dword_140404A6C[scaled_index_3 + 70290975] = table_value;
  table_value_2 = dword_140404A6C[scaled_index_3 + 70290899];
  *(float *)&dword_140404A6C[scaled_index_3 + 70290977] = *(float *)&masked_bits + weighted_sum;
  dword_140404A6C[scaled_index_3 + 70290976] = table_value_2;
  *(float *)&masked_bits_2 = *(float *)&dword_140404A6C[scaled_index_3 + 70290898] - (float)(weighted_sum + weighted_sum);
  *(float *)&dword_140404A6C[scaled_index_3 + 70290978] = *(float *)&state_address_5 + weighted_sum;
  dword_140404A6C[scaled_index_3 + 70290980] = float_word;
  *(float *)&dword_140404A6C[scaled_index_3 + 70290981] = *(float *)&masked_bits + weighted_sum;
  dword_140404A6C[scaled_index_3 + 70290979] = masked_bits_2;
  *(float *)&masked_bits_3 = *(float *)&dword_140404A6C[scaled_index_3 + 70290898] - (float)(weighted_sum + weighted_sum);
  *(float *)&dword_140404A6C[scaled_index_3 + 70290982] = (float)(*(float *)&state_address_5 + weighted_sum) + *(float *)&float_word;
  dword_140404A6C[scaled_index_3 + 70290983] = masked_bits_3;
  *(float *)&dword_140404A6C[scaled_index_3 + 70290984] = (float)(*(float *)&dword_140404A6C[scaled_index_3 + 70290899] - (float)(weighted_sum + weighted_sum))
                                             - *(float *)&float_word;
  state_address_6 = (float)(*(float *)&masked_bits + *(float *)&dword_140404A6C[scaled_index_3 + 70290898]) - 16.0;
  *(float *)&dword_140404A6C[scaled_index_3 + 70290987] = weighted_sum + 16.0;
  component_delta_4 = state_address_6 - weighted_sum;
  *(float *)&dword_140404A6C[scaled_index_3 + 70290985] = component_delta_4;
  weighted_sum_3 = *(float *)&state_address_5 + *(float *)&dword_140404A6C[scaled_index_3 + 70290899];
  *(float *)&dword_140404A6C[scaled_index_3 + 70290988] = weighted_sum + 16.0;
  component_delta_5 = (float)(weighted_sum_3 - 16.0) - weighted_sum;
  *(float *)&dword_140404A6C[scaled_index_3 + 70290986] = component_delta_5;
  if ( g_150F61170 != element_index || !g_151042650 || g_1510426EC )
    goto LABEL_66;
  if ( g_1510425C0 >= weighted_sum_2
    && g_1510425C0 < (float)(weighted_sum_2 + *(float *)&dword_140404A6C[scaled_index_3 + 70290979]) )
  {
    weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index_3 + 70290978];
    if ( g_1510425C4 >= weighted_sum_4
      && g_1510425C4 < (float)(weighted_sum_4 + *(float *)&dword_140404A6C[scaled_index_3 + 70290980]) )
    {
      g_1510426F8 = 0;
      g_1510426FC = element_index;
      g_151042704 = g_1510425C0
                                           - *(float *)&dword_140404A6C[scaled_index_3 + 70290896];
      combined_products_4 = g_1510425C4 - *(float *)&dword_140404A6C[scaled_index_3 + 70290897];
LABEL_65:
      g_151042708 = combined_products_4;
      goto LABEL_66;
    }
  }
  if ( g_1510425C0 >= component_delta_4
    && g_1510425C0 < (float)(component_delta_4 + *(float *)&dword_140404A6C[scaled_index_3 + 70290987])
    && g_1510425C4 >= component_delta_5
    && g_1510425C4 < (float)(component_delta_5 + *(float *)&dword_140404A6C[scaled_index_3 + 70290988]) )
  {
    g_1510426F8 = 1;
    g_1510426FC = element_index;
    g_151042704 = g_1510425C0
                                         - (float)(*(float *)&dword_140404A6C[scaled_index_3 + 70290985]
                                                 + *(float *)&dword_140404A6C[scaled_index_3 + 70290987]);
    combined_products_4 = g_1510425C4
        - (float)(*(float *)&dword_140404A6C[scaled_index_3 + 70290988] + *(float *)&dword_140404A6C[scaled_index_3 + 70290986]);
    goto LABEL_65;
  }
LABEL_66:
  g_150F61084 = element_index;
  if ( (int)g_150F61040 < 16 )
  {
    dword_140404A6C[g_150F61040 + 70087030] = element_index;
    ++g_150F61040;
  }
  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1082130432;
  return (unsigned int)element_index;
}

//----- (00000001400722C0) ----------------------------------------------------
__int64 sub_1400722C0()
{
  signed int state_word;
  unsigned __int64 iteration_count;
  int iteration_count_2;
  signed int saved_iteration_count;
  unsigned int selection_flag;
  signed int iteration_count_3;
  __int64 iteration_count_4;
  unsigned int *state_address;
  signed int state_word_2;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  signed int saved_iteration_count_2;
  unsigned __int64 iteration_count_5;
  char input_byte;
  __int64 result;

  state_word = g_151042A34;
  iteration_count = -1;
  iteration_count_2 = 0;
  saved_iteration_count = g_151042A34;
  selection_flag = 0;
  iteration_count_3 = 0;
  iteration_count_4 = -1;
  do
    ++iteration_count_4;
  while ( *((_BYTE *)&g_151042A40 + iteration_count_4) );
  state_address = &g_151046A40;
  if ( iteration_count_4 )
  {
    state_word_2 = g_151042A30;
    state_address_2 = &g_151042A40;
    state_address_3 = &g_151046A40;
    do
    {
      if ( iteration_count_3 < state_word_2 )
      {
        if ( iteration_count_3 < state_word )
          goto LABEL_13;
      }
      else if ( iteration_count_3 < state_word )
      {
        goto LABEL_10;
      }
      if ( iteration_count_3 < state_word_2 )
      {
LABEL_10:
        saved_iteration_count_2 = iteration_count_3;
        selection_flag = 1;
        if ( saved_iteration_count <= iteration_count_3 )
          saved_iteration_count_2 = saved_iteration_count;
        saved_iteration_count = saved_iteration_count_2;
        goto LABEL_14;
      }
LABEL_13:
      ++iteration_count_2;
      *(_BYTE *)state_address_3 = *(_BYTE *)state_address_2;
      state_address_3 = (unsigned int *)((char *)state_address_3 + 1);
      state_word = g_151042A34;
      state_word_2 = g_151042A30;
LABEL_14:
      ++iteration_count_3;
      iteration_count_5 = -1;
      state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
      do
        ++iteration_count_5;
      while ( *((_BYTE *)&g_151042A40 + iteration_count_5) );
    }
    while ( iteration_count_3 < iteration_count_5 );
  }
  *((_BYTE *)&g_151046A40 + iteration_count_2) = 0;
  do
  {
    input_byte = *(_BYTE *)state_address;
    *((_BYTE *)state_address - 0x4000) = *(_BYTE *)state_address;
    state_address = (unsigned int *)((char *)state_address + 1);
  }
  while ( input_byte );
  g_151042A34 = saved_iteration_count;
  do
    ++iteration_count;
  while ( *((_BYTE *)&g_151042A40 + iteration_count) );
  result = selection_flag;
  if ( saved_iteration_count > iteration_count )
    saved_iteration_count = iteration_count;
  g_151042A34 = saved_iteration_count;
  g_151042A30 = saved_iteration_count;
  return result;
}

//----- (0000000140072760) ----------------------------------------------------
double sub_140072760(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned background=1059061760,inner=0;
  unsigned flags=a1==g_150F61180;
  if(flags)inner=1056964608;
  if(a1==g_150F61188){background=1063256064;inner=1056964608;}
  if(dword_140404A6C[index+70087119]){background=1048576000;inner=0;flags|=8;}
  if(dword_140404A6C[index+70087115]==2 && **(_DWORD **)&dword_140404A6C[index+70087215]==dword_140404A6C[index+70087217]){inner=1052770304;flags|=4;}
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,flags);
    ((void (*)(unsigned,unsigned))(uintptr_t)glBindTexture)(3553,dword_140404A6C[3592*renderer_current_font+72777086]);
  }else{
    sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,background,background,background,1065353216);
    sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,inner,inner,inner,1065353216);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width*0.5f,y+height*0.5f,*(float *)&g_150F610E8,69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* callers ignore the legacy export result; native returns void */
}

//----- (00000001400729D0) ----------------------------------------------------
double            sub_1400729D0(int a1, double a2, float a3)
{
  __int64 record_word_offset;
  double result;
  void (           *callback_function)(_QWORD, _QWORD);

  record_word_offset = 122LL * a1;
  result = a2;
  if ( (unsigned int)sr_menu_push_clip(
                       *(float *)&a2,
                       a3,
                       *(float *)&dword_140404A6C[record_word_offset + 70087127],
                       *(float *)&dword_140404A6C[record_word_offset + 70087128]) )
  {
    callback_function = *(void (           **)(_QWORD, _QWORD))&dword_140404A6C[record_word_offset + 70087149];
    if ( callback_function )
      callback_function(dword_140404A6C[record_word_offset + 70087146], dword_140404A6C[record_word_offset + 70087147]);
    sr_menu_pop_clip();
    return sr_camera_begin_2d();
  }
  return result;
}

//----- (0000000140072A90) ----------------------------------------------------
double            sub_140072A90(int a1, double a2, double a3)
{
  double y_2 = a3; // xmm2_8: y arrives in xmm2 (0x140072ACD movaps xmm9, xmm2); Hex-Rays had lost it
  int selection_code;
  float scaled_value;
  __int64 record_word_offset;
  unsigned int masked_bits;
  void (           *callback_function)(_QWORD, _QWORD);
  double result;
  __m128i converted_vector;
  __m128i converted_vector_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140072A90[32];
#define red (*(int (*))(void *)(sr_frame_140072A90 + 0)) /* [rsp+28h] */
#define green (*(int (*))(void *)(sr_frame_140072A90 + 8)) /* [rsp+30h] */
#define blue (*(int (*))(void *)(sr_frame_140072A90 + 16)) /* [rsp+38h] */

  selection_code = 1056964608;
  scaled_value = *(float *)&y_2;
  record_word_offset = 122LL * a1;
  masked_bits = **(_DWORD **)&dword_140404A6C[record_word_offset + 70087223];
  if ( a1 == g_150F61180 )
    selection_code = 1061158912;
  callback_function = *(void (           **)(_QWORD, _QWORD))&dword_140404A6C[record_word_offset + 70087149];
  if ( callback_function )
  {
    /* 0x140072B0D..0x140072B36: the row callback also takes x (xmm2), y (xmm3), the width and height
       ([rsp+20h], [rsp+28h]) and whether this widget has the focus ([rsp+30h], edx from 0x140072AF2);
       the C had passed only the first two. */
    ((void (*)(int, unsigned int, float, float, float, float, unsigned int))callback_function)(
      dword_140404A6C[record_word_offset + 70087146],
      masked_bits,
      *(float *)&a2,
      *(float *)&y_2,
      *(float *)&dword_140404A6C[record_word_offset + 70087127],
      *(float *)&dword_140404A6C[record_word_offset + 70087128],
      a1 == g_150F61180);
    return sr_camera_begin_2d();
  }
  else
  {
    blue = selection_code;
    green = selection_code;
    red = selection_code;
    result = a2;
    /* 0x140072B78: width from [rbx+rsi+188h] (0x140072B42), not the third argument */
    sr_renderer_draw_flat_rect(a2, y_2, dword_140404A6C[record_word_offset + 70087127], *(float *)&dword_140404A6C[record_word_offset + 70087128], 0, red, green, blue, 1056964608);
    if ( masked_bits != -1 )
    {
      converted_vector = _mm_cvtsi32_si128(dword_140404A6C[record_word_offset + 70087128]); /* 0x140072B8A: the height */
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = (float)(*(float *)SR_VEC_LANES(128, converted_vector, i32) * 0.5) + scaled_value;
      sr_text_draw_recovered((char *)(*(_QWORD *)&dword_140404A6C[record_word_offset + 70087217] + (int)(masked_bits * dword_140404A6C[record_word_offset + 70087219])), (float)(*(float *)&dword_140404A6C[record_word_offset + 70087127] * 0.5) + *(float *)&a2, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 13.0, 69u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140072BFA */;
    }
    converted_vector_2 = _mm_cvtsi32_si128(dword_140404A6C[record_word_offset + 70087128]); /* 0x140072C08: the height */
    *(float *)SR_VEC_LANES(128, converted_vector_2, i32) = (float)(*(float *)SR_VEC_LANES(128, converted_vector_2, i32) * 0.5) + scaled_value;
    sr_text_draw_recovered((char *)&dword_140404A6C[record_word_offset + 70087151], (float)(*(float *)&a2 + *(float *)&dword_140404A6C[record_word_offset + 70087127]) + 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2))), *(float *)&dword_140404A6C[record_word_offset + 70087133], 4u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140072C67 */;
  }
  return result;
}
#undef red
#undef green
#undef blue

//----- (0000000140072CA0) ----------------------------------------------------
double sub_140072CA0(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned selected=a1==g_150F61180;
  float inner=selected?0.25f:0.0f;
  if(dword_140404A6C[index+70087215])
    inner=selected?1.0f:0.875f;
  float width=*(float *)&dword_140404A6C[index+70087127];
  float height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,selected);
    ((void (*)(unsigned,unsigned))(uintptr_t)glBindTexture)(3553,dword_140404A6C[3592*renderer_current_font+72777086]);
  }else{
    sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,0x3f600000,0x3f600000,0x3f600000,0x3f800000);
    sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,0,0,0,0x3f800000);
    float side=fmaxf(height-8.0f,4.0f);
    sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x+4.0f)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(side),side,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
    unsigned color=sr_text_float_bits(inner);
    sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x+6.0f)),sr_export_float_lane_container(sr_text_float_bits(y+6.0f)),sr_text_float_bits(side-4.0f),side-4.0f,0,color,color,color,0x3f800000);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],(side+width)*0.5f+x,height*0.5f+y,*(float *)&g_150F610E8,69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* legacy result ignored; native routine returns void */
}

//----- (0000000140072F90) ----------------------------------------------------
__int64 sub_140072F90(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;
  float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128],size=*(float *)&dword_140404A6C[index+70087133];
  unsigned background=dword_140404A6C[index+70087116]?0x3ee00000:a1==g_150F61180?0x3ea00000:0x3e400000;
  sr_renderer_draw_flat_rect(a2,a3,sr_text_float_bits(width),height,0,background,background,background,0x3f000000);
  float middle=height*0.5f+y;
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  unsigned focused=a1==g_150F61174;
  char *value=focused?(char *)&g_151042A40:*(char **)&dword_140404A6C[index+70087215];
  if(dword_140404A6C[index+70087124]){
    char masked[512];size_t n=strlen(value);if(n>31)n=31;memset(masked,'*',n);masked[n]=0;
    sr_text_draw_recovered(masked,x,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  }else if(!focused&&dword_140404A6C[index+70087115]==4){
    double formatted=(double)**(float **)&dword_140404A6C[index+70087217];uint64 arguments[1];memcpy(arguments,&formatted,8);
    sr_text_draw_recovered("/f",x,middle,size,4,1.0f,1.0f,1.0f,1.0f,arguments);
  }else if(!focused&&dword_140404A6C[index+70087115]==5){
    uint64 arguments[1]={**(unsigned **)&dword_140404A6C[index+70087217]};
    sr_text_draw_recovered("/i",x,middle,size,4,1.0f,1.0f,1.0f,1.0f,arguments);
  }else sr_text_draw_recovered(value,x,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  if(focused){
    float cursor=sr_menu_text_prefix_width(a1,(int)g_151042A34)+x;
    sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(cursor)),sr_export_float_lane_container(sr_text_float_bits(middle+size*0.25f)),sr_text_float_bits(size*0.5f),4.0f,0,0x3f800000,0x3f800000,0x3f800000,0x3f000000);
    int first=(int)g_151042A34,last=(int)g_151042A30;
    if(first!=last){
      if(first>last){int temporary=first;first=last;last=temporary;}
      float start=sr_menu_text_prefix_width(a1,first),span=sr_menu_text_prefix_width(a1,last)-start;
      sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x+start)),a3,sr_text_float_bits(span),height,0,0x3f800000,0x3f800000,0x3f800000,0x3e800000);
    }
  }
  return 0; /* legacy result ignored; native routine returns void */
}

//----- (0000000140073430) ----------------------------------------------------
double sub_140073430(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;
  unsigned kind=dword_140404A6C[index+70087115],selected=a1==g_150F61180;
  float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if((kind&0xfffffffdu)==0)return sub_140072760(a1,a2,a3);
  if(kind==1)return sub_1400742F0(a1,a2,a3);
  if(kind-3u<=2u){sub_140072F90(a1,a2,a3);return 0.0;}
  switch(kind){
    case 6:
      if(sr_menu_push_clip(x,y,width,height)){
        if(callback)((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,0);
        sr_menu_pop_clip();sr_camera_begin_2d();
      }break;
    case 7:{
      unsigned color=selected||dword_140404A6C[index+70087116]?0x3ec00000:0x3e800000;
      sr_renderer_draw_flat_rect(a2,a3,sr_text_float_bits(width),height,0,color,color,color,0x3f800000);
      float low=*(float *)&dword_140404A6C[index+70087220],high=*(float *)&dword_140404A6C[index+70087221];
      float knob=*(float *)&dword_140404A6C[index+70087219],value=**(float **)&dword_140404A6C[index+70087217];
      float at=((value-low)*(height-knob))/(high-low)+y;
      sr_renderer_draw_flat_rect(a2,sr_export_float_lane_container(sr_text_float_bits(at)),sr_text_float_bits(width),knob,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
      break;}
    case 8:return sub_140073860(a1,a2,a3);
    case 10:{
      int value=**(int **)&dword_140404A6C[index+70087223];
      if(callback){
        ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],(unsigned)value,x,y,width,height,selected);
        sr_camera_begin_2d();
      }else{
        unsigned color=selected?0x3f400000:0x3f000000;
        sr_renderer_draw_flat_rect(a2,a3,sr_text_float_bits(width),height,0,color,color,color,0x3f000000);
        if(value!=-1)sr_text_draw_recovered((char *)(*(uintptr_t *)&dword_140404A6C[index+70087217]+(int)((unsigned)value*dword_140404A6C[index+70087219])),width*0.5f+x,height*0.5f+y,13.0f,69,1.0f,1.0f,1.0f,1.0f,NULL);
        sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
      }break;}
    case 11:return sub_140074040(a1,a2,a3);
    case 12:return sub_140073D90(a1,a2,a3);
    case 13:return sub_140072CA0(a1,a2,a3);
  }
  return 0.0; /* legacy result ignored; native dispatch returns void */
}

//----- (0000000140073860) ----------------------------------------------------
double sub_140073860(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  if(sr_menu_push_clip(x,y,width,height)){
    sr_renderer_draw_flat_rect(a2,a3,sr_text_float_bits(width),height,0,0x3e000000,0x3e000000,0x3e000000,0x3f000000);
    float gap=*(float *)&dword_140404A6C[index+70087230];
    float cell_width=*(float *)&dword_140404A6C[index+70087228],cell_height=*(float *)&dword_140404A6C[index+70087229];
    float cx=gap*0.5f+x,cy=(gap*0.5f+y)-*(float *)&dword_140404A6C[index+70087232];int column=0;
    for(int item=0;item<(int)dword_140404A6C[index+70087220];item++){
      void *callback=*(void **)&dword_140404A6C[index+70087149];
      if(callback){
        unsigned flags=(dword_140404A6C[index+70087223]==item?1:0)|(dword_140404A6C[index+70087222]==item?4:0);
        ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],item,cx,cy,cell_width,cell_height,flags);
      }else{
        if(dword_140404A6C[index+70087222]==item || dword_140404A6C[index+70087223]==item){
          unsigned color=dword_140404A6C[index+70087222]==item?0x3f400000:0x3f200000;
          sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(cx)),sr_export_float_lane_container(sr_text_float_bits(cy)),sr_text_float_bits(cell_width),cell_height,0,color,color,color,0x3f000000);
        }
        sr_text_draw_recovered((char *)(*(uintptr_t *)&dword_140404A6C[index+70087217]+(int)((unsigned)item*dword_140404A6C[index+70087219])),cx+4.0f,cy+3.5f,13.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
      }
      if(++column<(int)dword_140404A6C[index+70087227])cx+=cell_width+gap;
      else{column=0;cx=gap*0.5f+x;cy+=gap+cell_height;}
    }
    int depth=(int)g_15104270C;
    if(depth<=0 || --depth<=0){if(g_15104270C>0)g_15104270C=depth;((void (*)(unsigned))(uintptr_t)*(uint64 *)&glDisable)(3089);}
    else{
      g_15104270C=depth;__int64 i=4LL*depth;
      *(unsigned int *)&g_151042A1C=dword_140404A6C[i+70317861];*(unsigned int *)&g_151042A20=dword_140404A6C[i+70317862];
      g_151042A24=dword_140404A6C[i+70317863];g_151042A28=dword_140404A6C[i+70317864];
      sr_camera_set_scissor(g_151042A1C,g_151042A20,*(float *)&g_151042A24,*(float *)&g_151042A28);
    }
    sr_camera_begin_2d();
  }
  return 0.0; /* legacy result ignored; native returns void */
}

//----- (0000000140073C40) ----------------------------------------------------
__int64            sub_140073C40(int a1, double a2, double a3)
{
  double y_2 = a3; // xmm2_8: y arrives in xmm2 (0x140073C6C movaps xmm7, xmm2); Hex-Rays had lost it
  int red;
  __int64 record_word_offset;
  float height_2;
  double y_3;
  __int64 unused_local;

  red = 1048576000;
  if ( a1 == g_150F61180 || dword_140404A6C[122 * a1 + 70087116] )
    red = 1052770304;
  record_word_offset = 122LL * a1;
  /* 0x140073CDF: width from [rbx+rsi+188h] (0x140073CD6), not the third argument */
  sr_renderer_draw_flat_rect(a2, y_2, dword_140404A6C[record_word_offset + 70087127], *(float *)&dword_140404A6C[record_word_offset + 70087128], 0, red, red, red, 1065353216);
  height_2 = *(float *)&dword_140404A6C[record_word_offset + 70087219];
  *(_QWORD *)&y_3 = **(unsigned int **)&dword_140404A6C[record_word_offset + 70087217];
  *(float *)&y_3 = (float)((float)((float)(*(float *)&y_3 - *(float *)&dword_140404A6C[record_word_offset + 70087220])
                                * (float)(*(float *)&dword_140404A6C[record_word_offset + 70087128] - height_2))
                        / (float)(*(float *)&dword_140404A6C[record_word_offset + 70087221] - *(float *)&dword_140404A6C[record_word_offset + 70087220]))
                + *(float *)&y_2;
  return sr_renderer_draw_flat_rect(a2, y_3, 0x41800000 /* native XMM2 width 16.0f */, height_2, 0, 1056964608, 1056964608, 1056964608, 1065353216);
}

//----- (0000000140073D90) ----------------------------------------------------
double sub_140073D90(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  unsigned color=a1==g_150F61180||dword_140404A6C[index+70087116]?70087099:70087095;
  sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,dword_140404A6C[color],dword_140404A6C[color+1],dword_140404A6C[color+2],dword_140404A6C[color+3]);
  float knob=*(float *)&dword_140404A6C[index+70087220];
  float low=*(float *)&dword_140404A6C[index+70087217],high=*(float *)&dword_140404A6C[index+70087218];
  float value=**(float **)&dword_140404A6C[index+70087215];
  /* MAXSS/MINSS return their second operand for unordered inputs. */
  float clamped=value>low?value:low;clamped=clamped<high?clamped:high;
  float at=((clamped-low)*(width-knob))/(high-low)+x;
  double formatted=(double)value;uint64 arguments[1];memcpy(arguments,&formatted,8);
  sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(at)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(knob),height-8.0f,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
  sr_text_draw_recovered("/f",width*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],5,1.0f,1.0f,1.0f,1.0f,arguments);
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
  return 0.0; /* legacy result ignored; native draw returns void */
}

//----- (0000000140074040) ----------------------------------------------------
double sub_140074040(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  unsigned color=a1==g_150F61180||dword_140404A6C[index+70087116]?70087099:70087095;
  sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,dword_140404A6C[color],dword_140404A6C[color+1],dword_140404A6C[color+2],dword_140404A6C[color+3]);
  float knob=*(float *)&dword_140404A6C[index+70087220];
  int low=(int)dword_140404A6C[index+70087217],high=(int)dword_140404A6C[index+70087218];
  int value=**(int **)&dword_140404A6C[index+70087215];
  int clamped=value<low?low:value;clamped=clamped>high?high:clamped;
  float at=((float)(int)((unsigned)clamped-(unsigned)low)*(width-knob))/(float)(int)((unsigned)high-(unsigned)low)+x;
  uint64 arguments[1]={(unsigned)value};
  sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(at)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(knob),height-8.0f,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
  sr_text_draw_recovered("/i",width*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],5,1.0f,1.0f,1.0f,1.0f,arguments);
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
  return 0.0; /* legacy result ignored; native draw returns void */
}

//----- (00000001400742F0) ----------------------------------------------------
double sub_1400742F0(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned selected=a1==g_150F61180;
  float inner=selected?0.25f:0.0f;
  unsigned bits=dword_140404A6C[index+70087217];
  if((bits & **(unsigned **)&dword_140404A6C[index+70087215])==bits)
    inner=selected?1.0f:0.875f;
  float width=*(float *)&dword_140404A6C[index+70087127];
  float height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,selected);
    ((void (*)(unsigned,unsigned))(uintptr_t)glBindTexture)(3553,dword_140404A6C[3592*renderer_current_font+72777086]);
  }else{
    sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,0x3f600000,0x3f600000,0x3f600000,0x3f800000);
    sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,0,0,0,0x3f800000);
    float side=fmaxf(height-8.0f,4.0f);
    sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x+4.0f)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(side),side,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
    unsigned color=sr_text_float_bits(inner);
    sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x+6.0f)),sr_export_float_lane_container(sr_text_float_bits(y+6.0f)),sr_text_float_bits(side-4.0f),side-4.0f,0,color,color,color,0x3f800000);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],(side+width)*0.5f+x,height*0.5f+y,*(float *)&g_150F610E8,69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* legacy result ignored; native routine returns void */
}

//----- (0000000140075A40) ----------------------------------------------------
__int64            sub_140075A40(int a1, float a2, double a3)
{
  unsigned int integer_difference;
  double input_value;
  __int64 widget;
  __int64 record_word_offset;
  unsigned int *state_address;
  unsigned int scaled_index;
  char *text_cursor;
  unsigned int *state_address_2;
  char input_byte;
  unsigned __int64 iteration_count;
  signed int saved_iteration_count;
  __int64 iteration_count_2;
  unsigned __int64 iteration_count_3;
  int menu_text_hit_index_result;
  int menu_text_hit_index_result_2;
  unsigned __int64 iteration_count_4;
  unsigned __int64 iteration_count_5;
  int call_result;
  unsigned __int64 iteration_count_6;
  signed int state_word;
  int remaining_count;
  _BYTE *buffer_cursor;
  char *text_cursor_2;
  char table_value;
  unsigned int state_word_2;
  char *text_cursor_3;
  char table_value_2;
  __int64 scaled_index_2;
  unsigned int scaled_index_3;
  float *weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 result;
  signed int *loaded_record_pointer;
  signed int table_value_3;
  signed int table_value_4;
  _BYTE *buffer_cursor_2;
  char input_byte_2;

  integer_difference = 0;
  input_value = a3;
  widget = a1;
  g_151042A2C = 1;
  if ( g_150F6117C == a1 )
  {
    if ( g_151042650 )
    {
      if ( g_1510426EC )
      {
        menu_text_hit_index_result = g_151042A30;
      }
      else
      {
        menu_text_hit_index_result = sr_menu_text_hit_index(a1, a2);
        g_151042A30 = menu_text_hit_index_result;
      }
      menu_text_hit_index_result_2 = sr_menu_text_hit_index(widget, a2);
      g_151042A34 = menu_text_hit_index_result_2;
    }
    else
    {
      menu_text_hit_index_result_2 = g_151042A34;
      menu_text_hit_index_result = g_151042A30;
    }
    state_address = &g_151042A40;
    if ( menu_text_hit_index_result < 0 )
      menu_text_hit_index_result = 0;
    iteration_count_4 = -1;
    g_151042A30 = menu_text_hit_index_result;
    do
      ++iteration_count_4;
    while ( *((_BYTE *)&g_151042A40 + iteration_count_4) );
    if ( menu_text_hit_index_result > iteration_count_4 )
      menu_text_hit_index_result = iteration_count_4;
    g_151042A30 = menu_text_hit_index_result;
    iteration_count_5 = -1;
    if ( menu_text_hit_index_result_2 < 0 )
      menu_text_hit_index_result_2 = 0;
    g_151042A34 = menu_text_hit_index_result_2;
    do
      ++iteration_count_5;
    while ( *((_BYTE *)&g_151042A40 + iteration_count_5) );
    if ( menu_text_hit_index_result_2 > iteration_count_5 )
      menu_text_hit_index_result_2 = iteration_count_5;
    g_151042A34 = menu_text_hit_index_result_2;
    call_result = sub_140075FE0();
    if ( call_result != -1 )
    {
      while ( call_result != 11 && call_result != 1 )
      {
        if ( call_result < 32 )
        {
          if ( call_result == 9 )
          {
            if ( !(unsigned int)sub_1400722C0() )
            {
              text_cursor_2 = (char *)&g_151042A40 + (int)g_151042A34;
              if ( *text_cursor_2 )
              {
                do
                {
                  table_value = text_cursor_2[1];
                  *text_cursor_2++ = table_value;
                }
                while ( table_value );
              }
            }
          }
          else if ( call_result == 10 && !(unsigned int)sub_1400722C0() )
          {
            state_word_2 = g_151042A34;
            if ( (int)g_151042A34 > 0 )
            {
              text_cursor_3 = (char *)&g_151042A3C + g_151042A34 + 3;
              if ( *text_cursor_3 )
              {
                do
                {
                  table_value_2 = text_cursor_3[1];
                  *text_cursor_3++ = table_value_2;
                }
                while ( table_value_2 );
                state_word_2 = g_151042A34;
              }
              g_151042A34 = state_word_2 - 1;
              g_151042A30 = state_word_2 - 1;
            }
          }
        }
        else
        {
          sub_1400722C0();
          iteration_count_6 = -1;
          do
            ++iteration_count_6;
          while ( *((_BYTE *)&g_151042A40 + iteration_count_6) );
          if ( iteration_count_6 < (int)g_151042A3C )
          {
            state_word = g_151042A34;
            if ( (int)g_151042A34 < 0x2000 )
            {
              if ( g_151042A38 )
              {
                if ( !*((_BYTE *)&g_151042A40 + (int)g_151042A34) )
                {
                  *((_BYTE *)&g_151042A40 + g_151042A34 + 1) = 0;
                  state_word = g_151042A34;
                }
              }
              else
              {
                remaining_count = iteration_count_6 + 1;
                if ( (int)iteration_count_6 + 1 > (int)g_151042A34 )
                {
                  buffer_cursor = (char *)&g_151042A40 + remaining_count;
                  do
                  {
                    --remaining_count;
                    *buffer_cursor = *(buffer_cursor - 1);
                    --buffer_cursor;
                    state_word = g_151042A34;
                  }
                  while ( remaining_count > (int)g_151042A34 );
                }
              }
              *((_BYTE *)&g_151042A40 + state_word) = call_result;
              g_151042A30 = ++g_151042A34;
            }
          }
        }
        call_result = sub_140075FE0();
        if ( call_result == -1 )
          goto LABEL_75;
      }
      g_150F61174 = -1;
      integer_difference = 1;
      if ( call_result != 11 )
        integer_difference = -1;
    }
  }
  else
  {
    record_word_offset = 122LL * a1;
    state_address = &g_151042A40;
    scaled_index = dword_140404A6C[122 * widget + 70087115];
    if ( scaled_index == 4 )
    {
      a3 = **(float **)&dword_140404A6C[record_word_offset + 70087217];
      crt_sprintf(&g_151042A40, "%.3f", a3);
    }
    else if ( scaled_index == 5 )
    {
      crt_sprintf(&g_151042A40, "%d", **(_DWORD **)&dword_140404A6C[record_word_offset + 70087217]);
    }
    else
    {
      text_cursor = *(char **)&dword_140404A6C[record_word_offset + 70087215];
      state_address_2 = &g_151042A40;
      do
      {
        input_byte = *text_cursor++;
        *(_BYTE *)state_address_2 = input_byte;
        state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
      }
      while ( input_byte );
    }
    iteration_count = -1;
    if ( !g_151042650 || g_1510426EC )
    {
      saved_iteration_count = 0;
      g_151042A30 = 0;
      iteration_count_2 = -1;
      do
        ++iteration_count_2;
      while ( *((_BYTE *)&g_151042A40 + iteration_count_2) );
      g_151042A34 = iteration_count_2;
    }
    else
    {
      a3 = input_value;
      g_151042A30 = sr_menu_text_hit_index(widget, a2);
      saved_iteration_count = g_151042A30;
      g_151042A34 = g_151042A30;
      LODWORD(iteration_count_2) = g_151042A30;
      if ( (g_151042A30 & 0x80000000) != 0 )
      {
        saved_iteration_count = 0;
        g_151042A30 = 0;
      }
    }
    iteration_count_3 = -1;
    do
      ++iteration_count_3;
    while ( *((_BYTE *)&g_151042A40 + iteration_count_3) );
    if ( saved_iteration_count > iteration_count_3 )
      saved_iteration_count = iteration_count_3;
    g_151042A30 = saved_iteration_count;
    if ( (int)iteration_count_2 < 0 )
      LODWORD(iteration_count_2) = 0;
    g_151042A34 = iteration_count_2;
    do
      ++iteration_count;
    while ( *((_BYTE *)&g_151042A40 + iteration_count) );
    if ( (int)iteration_count_2 > iteration_count )
      g_151042A34 = iteration_count;
  }
LABEL_75:
  scaled_index_2 = 122 * widget;
  scaled_index_3 = dword_140404A6C[122 * widget + 70087115];
  if ( scaled_index_3 == 4 )
  {
    crt_sscanf((__int64)&g_151042A40, "%f", a3);
    weighted_sum = *(float **)&dword_140404A6C[scaled_index_2 + 70087217];
    weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index_2 + 70087219];
    if ( weighted_sum_2 > *weighted_sum )
    {
      *weighted_sum = weighted_sum_2;
      weighted_sum = *(float **)&dword_140404A6C[scaled_index_2 + 70087217];
    }
    weighted_sum_3 = *(float *)&dword_140404A6C[scaled_index_2 + 70087220];
    result = integer_difference;
    if ( weighted_sum_3 < *weighted_sum )
      *weighted_sum = weighted_sum_3;
  }
  else
  {
    if ( scaled_index_3 == 5 )
    {
      crt_sscanf((__int64)&g_151042A40, "%d", *(_QWORD *)&dword_140404A6C[scaled_index_2 + 70087217]);
      loaded_record_pointer = *(signed int **)&dword_140404A6C[scaled_index_2 + 70087217];
      table_value_3 = dword_140404A6C[scaled_index_2 + 70087219];
      if ( *loaded_record_pointer < table_value_3 )
      {
        *loaded_record_pointer = table_value_3;
        loaded_record_pointer = *(signed int **)&dword_140404A6C[scaled_index_2 + 70087217];
      }
      table_value_4 = dword_140404A6C[scaled_index_2 + 70087220];
      if ( *loaded_record_pointer > table_value_4 )
      {
        *loaded_record_pointer = table_value_4;
        return integer_difference;
      }
    }
    else
    {
      buffer_cursor_2 = *(_BYTE **)&dword_140404A6C[scaled_index_2 + 70087215];
      do
      {
        input_byte_2 = *(_BYTE *)state_address;
        state_address = (unsigned int *)((char *)state_address + 1);
        *buffer_cursor_2++ = input_byte_2;
      }
      while ( input_byte_2 );
    }
    return integer_difference;
  }
  return result;
}

//----- (0000000140075FE0) ----------------------------------------------------
int sub_140075FE0()
{
  unsigned int state_word;
  __int64 iteration_count;
  int selection_flag;
  int saved_iteration_count;
  int masked_bits;
  unsigned __int64 iteration_count_2;
  unsigned __int64 iteration_count_3;
  __int64 saved_masked_bits;
  __int64 scaled_index;
  unsigned int table_value;
  unsigned int table_value_2;
  unsigned __int64 iteration_count_4;
  int table_value_3;

  state_word = g_151042A38;
  LODWORD(iteration_count) = g_151042A34;
  selection_flag = 0;
  saved_iteration_count = g_151042A30;
  masked_bits = g_1B0032404;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            iteration_count_2 = -1;
            if ( saved_iteration_count < 0 )
              saved_iteration_count = 0;
            g_151042A30 = saved_iteration_count;
            do
              ++iteration_count_2;
            while ( *((_BYTE *)&g_151042A40 + iteration_count_2) );
            if ( saved_iteration_count > iteration_count_2 )
              saved_iteration_count = iteration_count_2;
            g_151042A30 = saved_iteration_count;
            iteration_count_3 = -1;
            if ( (int)iteration_count < 0 )
              LODWORD(iteration_count) = 0;
            g_151042A34 = iteration_count;
            do
              ++iteration_count_3;
            while ( *((_BYTE *)&g_151042A40 + iteration_count_3) );
            if ( (int)iteration_count > iteration_count_3 )
              LODWORD(iteration_count) = iteration_count_3;
            g_151042A34 = iteration_count;
            if ( masked_bits == g_1B0032400 )
              return -1;
            saved_masked_bits = masked_bits;
            masked_bits = ((_WORD)masked_bits + 1) & 0x3FF;
            scaled_index = 5 * saved_masked_bits;
            g_1B0032404 = masked_bits;
            if ( !dword_140404A6C[5 * saved_masked_bits + 468760167] )
            {
              table_value = dword_140404A6C[scaled_index + 468760168];
              table_value_2 = dword_140404A6C[scaled_index + 468760170] & 3;
              if ( table_value == 76 )
                return 9;
              if ( table_value == 42 )
                return 10;
              if ( table_value != 225 )
                break;
            }
          }
          switch ( table_value )
          {
            case '(':
              return 11;
            case ')':
              return 1;
            case '+':
              LOBYTE(selection_flag) = table_value_2 != 0;
              return selection_flag + 12;
          }
          if ( table_value != 73 )
            break;
          state_word ^= 1u;
          g_151042A38 = state_word;
        }
        if ( table_value != 74 )
          break;
        LODWORD(iteration_count) = 0;
        g_151042A34 = 0;
        if ( !table_value_2 )
          saved_iteration_count = 0;
      }
      if ( table_value == 77 )
      {
        iteration_count = -1;
        do
          ++iteration_count;
        while ( *((_BYTE *)&g_151042A40 + iteration_count) );
        goto LABEL_39;
      }
      if ( table_value != 80 )
        break;
      if ( (int)iteration_count > 0 )
      {
        LODWORD(iteration_count) = iteration_count - 1;
LABEL_39:
        g_151042A34 = iteration_count;
      }
LABEL_40:
      if ( !table_value_2 )
        saved_iteration_count = iteration_count;
    }
    if ( table_value == 79 )
    {
      iteration_count_4 = -1;
      do
        ++iteration_count_4;
      while ( *((_BYTE *)&g_151042A40 + iteration_count_4) );
      if ( (int)iteration_count >= iteration_count_4 )
        goto LABEL_40;
      LODWORD(iteration_count) = iteration_count + 1;
      goto LABEL_39;
    }
    table_value_3 = dword_140404A6C[scaled_index + 468760169];
  }
  while ( table_value_3 < 32 || table_value_3 > 122 );
  if ( table_value_2 )
  {
    if ( (unsigned int)(table_value_3 - 97) <= 0x19 )
      return toupper(table_value_3);
    switch ( table_value_3 )
    {
      case '0':
        return 41;
      case '1':
        return 33;
      case '2':
        return 64;
      case '3':
        return 35;
      case '4':
        return 36;
      case '5':
        return 37;
      case '6':
        return 94;
      case '7':
        return 38;
      case '8':
        return 42;
      case '9':
        return 40;
      case '-':
        return 95;
      case '=':
        return 43;
      case '/':
        return 63;
      case ',':
        return 60;
      case '.':
        return 62;
      case ';':
        return 58;
      case '\'':
        return 34;
    }
  }
  return table_value_3;
}

//----- (0000000140076320) ----------------------------------------------------
void            sub_140076320(__int64 a1, int a2)
{
  char input_value;
  unsigned __int64 iteration_count;
  signed int state_word;
  int remaining_count;
  _BYTE *buffer_cursor;
  char *text_cursor;
  char table_value;
  unsigned int state_word_2;
  char *text_cursor_2;
  char table_value_2;

  input_value = a2;
  if ( a2 < 32 )
  {
    if ( a2 == 9 )
    {
      if ( !(unsigned int)sub_1400722C0() )
      {
        text_cursor = (char *)&g_151042A40 + (int)g_151042A34;
        if ( *text_cursor )
        {
          do
          {
            table_value = text_cursor[1];
            *text_cursor++ = table_value;
          }
          while ( table_value );
        }
      }
    }
    else if ( a2 == 10 && !(unsigned int)sub_1400722C0() )
    {
      state_word_2 = g_151042A34;
      if ( (int)g_151042A34 > 0 )
      {
        text_cursor_2 = (char *)&g_151042A3C + g_151042A34 + 3;
        if ( *text_cursor_2 )
        {
          do
          {
            table_value_2 = text_cursor_2[1];
            *text_cursor_2++ = table_value_2;
          }
          while ( table_value_2 );
          state_word_2 = g_151042A34;
        }
        g_151042A34 = state_word_2 - 1;
        g_151042A30 = state_word_2 - 1;
      }
    }
  }
  else
  {
    sub_1400722C0();
    iteration_count = -1;
    do
      ++iteration_count;
    while ( *((_BYTE *)&g_151042A40 + iteration_count) );
    if ( iteration_count < (int)g_151042A3C )
    {
      state_word = g_151042A34;
      if ( (int)g_151042A34 < 0x2000 )
      {
        if ( g_151042A38 )
        {
          if ( !*((_BYTE *)&g_151042A40 + (int)g_151042A34) )
          {
            *((_BYTE *)&g_151042A40 + g_151042A34 + 1) = 0;
            state_word = g_151042A34;
          }
        }
        else
        {
          remaining_count = iteration_count + 1;
          if ( (int)iteration_count + 1 > (int)g_151042A34 )
          {
            buffer_cursor = (char *)&g_151042A40 + remaining_count;
            do
            {
              --remaining_count;
              *buffer_cursor = *(buffer_cursor - 1);
              --buffer_cursor;
              state_word = g_151042A34;
            }
            while ( remaining_count > (int)g_151042A34 );
          }
        }
        *((_BYTE *)&g_151042A40 + state_word) = input_value;
        g_151042A30 = ++g_151042A34;
      }
    }
  }
}

