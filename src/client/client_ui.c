#include "shared_client.h"
#include "../engine/menu.h"

// 14006D660: inconsistent variable size for 'xmm0_8.8'
// 14006D660: inconsistent variable size for 'xmm1_8.8'

unsigned sr_text_float_bits(float value){unsigned bits;memcpy(&bits,&value,4);return bits;}

float sr_text_bits_float(unsigned bits){float value;memcpy(&value,&bits,4);return value;}

void sr_text_draw_recovered(char *text,float x,float y,float size,unsigned flags,
 float red,float green,float blue,float alpha,const uint64 *arguments)
{
 /* sr_CSDrawText (0x14006D930) with its variadic arguments as 8-byte slots:
    src/engine/text.c. */
 extern void text_draw(const char *format, float x, float y, float size, int flags,
                       float red, float green, float blue, float alpha, const unsigned long long *arguments);
 static const unsigned long long no_arguments[8];
 text_draw(text, x, y, size, (int)flags, red, green, blue, alpha,
           arguments ? (const unsigned long long *)arguments : no_arguments);
}

//----- (000000014006F8D0) ----------------------------------------------------
// Immediate-mode combo-box helper. Widget type code 10; stores current index pointer, item table, and item count; mouse wheel changes selection.
__int64            sr_DrawMenuList(
        unsigned __int8 *a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        int a6,
        unsigned int *a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int text_label_id_result;
  signed int menu_allocate_widget_result;
  signed int saved_menu_allocate_widget_result;
  __int64 scaled_index;
  unsigned int loaded_word;
  bool comparison_result;
  int *loaded_record_pointer;
  bool comparison_result_2;
  signed int integer_sum;
  _DWORD *loaded_record_pointer_2;
  unsigned int masked_bits;
  unsigned int masked_bits_2;
  unsigned int masked_bits_3;
  int masked_bits_4;
  int saved_masked_bits;
  __int64 masked_bits_5;
  unsigned int table_value;
  unsigned int state_word;

  text_label_id_result = sr_text_label_id(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  menu_allocate_widget_result = sr_menu_allocate_widget(
          text_label_id_result,
          menu_x,
          menu_y,
          a4,
          a5,
          g_150F610E8);
  saved_menu_allocate_widget_result = menu_allocate_widget_result;
  if ( menu_vertical )
  {
    menu_y = menu_y + (float)(*(float *)&a5 + 4.0);
  }
  else
  {
    menu_row_height = *(float *)&a5 + 4.0;
    menu_x = menu_x + (float)(a4 + 4.0);
  }
  menu_last_widget = menu_allocate_widget_result;
  scaled_index = 122LL * menu_allocate_widget_result;
  dword_140404A6C[scaled_index + 70087115] = 10;
  *(_QWORD *)&dword_140404A6C[scaled_index + 70087223] = (uint64)(uintptr_t)(a7);
  loaded_word = *a7;
  *(float *)&dword_140404A6C[scaled_index + 70087225] = a4;
  dword_140404A6C[scaled_index + 70087226] = a5;
  dword_140404A6C[scaled_index + 70087222] = loaded_word;
  *(_QWORD *)&dword_140404A6C[scaled_index + 70087217] = a8;
  dword_140404A6C[scaled_index + 70087219] = a9;
  dword_140404A6C[scaled_index + 70087220] = a10;
  sr_text_copy_visible_label((__int64)&dword_140404A6C[scaled_index + 70087151], (char *)a1);
  if ( saved_menu_allocate_widget_result == g_150F61180 )
  {
    if ( (int)dword_140404A6C[scaled_index + 70087220] <= 0 )
    {
      **(_DWORD **)&dword_140404A6C[scaled_index + 70087223] = 0;
    }
    else
    {
      comparison_result = (signed int)g_160FC481C <= 0;
      if ( (g_160FC481C & 0x80000000) != 0 )
      {
        do
        {
          --**(_DWORD **)&dword_140404A6C[scaled_index + 70087223];
          loaded_record_pointer = *(int **)&dword_140404A6C[scaled_index + 70087223];
          if ( *loaded_record_pointer < 0 )
            *loaded_record_pointer = dword_140404A6C[scaled_index + 70087220] - 1;
          comparison_result_2 = (signed int)(g_160FC481C + 1) < 0;
          integer_sum = ++g_160FC481C;
        }
        while ( comparison_result_2 );
        comparison_result = integer_sum <= 0;
      }
      if ( !comparison_result )
      {
        do
        {
          ++**(_DWORD **)&dword_140404A6C[scaled_index + 70087223];
          loaded_record_pointer_2 = *(_DWORD **)&dword_140404A6C[scaled_index + 70087223];
          if ( *loaded_record_pointer_2 >= (signed int)dword_140404A6C[scaled_index + 70087220] )
            *loaded_record_pointer_2 = 0;
          --g_160FC481C;
        }
        while ( (int)g_160FC481C > 0 );
      }
    }
  }
  if ( !g_151042650
    && g_1510426EC
    && saved_menu_allocate_widget_result == g_150F61180
    && saved_menu_allocate_widget_result == g_150F61174 )
  {
    dword_140404A6C[scaled_index + 70087215] = 1;
  }
  if ( !dword_140404A6C[scaled_index + 70087215] )
    return dword_140404A6C[scaled_index + 70087215];
  masked_bits = *(unsigned int *)&menu_y;
  masked_bits_2 = *(unsigned int *)&menu_x;
  if ( (int)g_151042810 < 16 )
  {
    dword_140404A6C[2 * g_151042810 + 70317930] = *(unsigned int *)&menu_x;
    dword_140404A6C[2 * g_151042810++ + 70317931] = *(unsigned int *)&menu_y;
  }
  masked_bits_3 = *(unsigned int *)&menu_row_height;
  *(unsigned int *)&menu_y = masked_bits;
  *(unsigned int *)&menu_x = masked_bits_2;
  masked_bits_4 = sub_140071C20(
          "cs_combobox",
          *(float *)&masked_bits_2,
          (float)(*(float *)&masked_bits - *(float *)&a5) - g_150F610EC,
          (float)(g_150F610EC + a2) + 16.0,
          COERCE_UNSIGNED_INT(g_150F610EC + a3),
          1095761920,
          1792);
  *(_QWORD *)&menu_x = 0;
  saved_masked_bits = masked_bits_4;
  masked_bits_5 = *(_QWORD *)&dword_140404A6C[scaled_index + 70087149];
  if ( masked_bits_5 )
  {
    table_value = dword_140404A6C[scaled_index + 70087147];
    g_150F61108 = dword_140404A6C[scaled_index + 70087146];
    g_150F6110C = table_value;
    g_150F61110 = masked_bits_5;
  }
  if ( (unsigned int)sub_1400707C0(a1, a2 + 16.0, a3, a4, a5, 0, a7, a8, a9, a10) )
    dword_140404A6C[scaled_index + 70087215] = 0;
  sub_140077230();
  state_word = g_151042810;
  if ( (int)g_151042810 > 0 )
  {
    --g_151042810;
    *(unsigned int *)&menu_x = dword_140404A6C[2 * (state_word - 1) + 70317930];
    *(unsigned int *)&menu_y = dword_140404A6C[2 * (state_word - 1) + 70317931];
  }
  *(unsigned int *)&menu_row_height = masked_bits_3;
  if ( saved_masked_bits != -1 && g_150F61168 == saved_masked_bits )
    return dword_140404A6C[scaled_index + 70087215];
  dword_140404A6C[scaled_index + 70087215] = 0;
  return 0;
}

//----- (0000000140070060) ----------------------------------------------------
// Immediate-mode text entry helper. Widget type code 5; stores text buffer pointer and length bounds.
__int64            sr_DrawMenuTextBox(unsigned __int8 *a1, __int64 a2, unsigned int a3, unsigned int a4)
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
  dword_140404A6C[scaled_index + 70087115] = 5;
  *(_QWORD *)&dword_140404A6C[scaled_index + 70087217] = a2;
  dword_140404A6C[scaled_index + 70087219] = a3;
  dword_140404A6C[scaled_index + 70087220] = a4;
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

// 1400713C6: conditional instruction was optimized away because rcx.8<100000000u

//----- (0000000140072450) ----------------------------------------------------
void               sr_DrawMenu(char a1)
{
  __int64 iteration_count;
  unsigned int *state_address;
  unsigned int *state_address_2;
  __int64 iteration_count_2;
  unsigned int *state_address_3;
  __int64 remaining_count;
  unsigned int *state_address_4;
  int iteration_count_3;
  double source_float_17;
  double source_float_16;
  signed int state_word;
  signed int element_index;
  unsigned int *state_address_5;
  unsigned int loaded_word;
  unsigned int table_value;
  float text_size;
  __m128i converted_vector;
  unsigned int table_value_2;
  unsigned int table_value_3;
  float text_x;
  int iteration_count_4;
  int i;
  __int64 j;
  __int64 table_value_4;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140072450[1120];
#define scratch_buffer (*(_DWORD (*)[276])(void *)(sr_frame_140072450 + 0)) /* [rsp+0h] */
#define unused_frame_slot_1104 (*(__int64 (*))(void *)(sr_frame_140072450 + 1104)) /* [rsp+450h] */

  iteration_count = 0;
  state_address = &g_1510281A0;
  state_address_2 = &g_1510281A0;
  do
  {
    if ( *(state_address_2 - 2) == 2 )
    {
      iteration_count_2 = 0;
      state_address_3 = &g_1510281A8;
      remaining_count = 256;
      do
      {
        if ( (int)*(state_address_3 - 4) >= 2 && iteration_count_2 != iteration_count && *(state_address_3 - 2) == *state_address_2 && (int)*state_address_3 > (int)state_address_2[2] )
          --*state_address_3;
        ++iteration_count_2;
        state_address_3 += 98;
        --remaining_count;
      }
      while ( remaining_count );
    }
    ++iteration_count;
    state_address_2 += 98;
  }
  while ( (__int64)state_address_2 < (__int64)&g_1510409A0 );
  g_15104270C = 0;
  glBindTexture(3553, dword_140404A6C[3592 * renderer_current_font + 72777086]);
  state_address_4 = &g_150F611A4;
  iteration_count_3 = 0;
  g_151042A24 = *(unsigned int *)&renderer_canvas_width;
  g_151042A28 = *(unsigned int *)&renderer_canvas_height;
  *(_QWORD *)&g_151042A1C = 0;
  do
  {
    if ( *(state_address_4 - 5) == 3 && *state_address_4 && state_address_4[4] == -1 )
    {
      *(_QWORD *)&source_float_17 = state_address_4[17];
      *(_QWORD *)&source_float_16 = state_address_4[16];
      renderer_current_font = state_address_4[5];
      sub_140073430(iteration_count_3, source_float_16, source_float_17);
    }
    ++iteration_count_3;
    state_address_4 += 122;
  }
  while ( iteration_count_3 < 1024 );
  state_word = g_150FDB190;
  element_index = 0;
  if ( (int)g_150FDB190 > 0 )
  {
    state_address_5 = &g_150FDB194;
    do
    {
      if ( state_address_5[1] == -1 )
      {
        loaded_word = *state_address_5;
        table_value = state_address_5[6];
        text_size = *((float *)state_address_5 + 8);
        converted_vector = _mm_cvtsi32_si128((int)(state_address_5[3]));
        scratch_buffer[16] = state_address_5[7];
        table_value_2 = state_address_5[5];
        scratch_buffer[14] = table_value;
        table_value_3 = state_address_5[4];
        scratch_buffer[12] = table_value_2;
        scratch_buffer[10] = table_value_3;
        text_x = *((float *)state_address_5 + 2);
        renderer_current_font = loaded_word;
        scratch_buffer[8] = 64;
        sr_text_draw_recovered((char *)&dword_140404A6C[77 * element_index + 70212055], text_x, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), text_size, 64, sr_text_bits_float(scratch_buffer[10]), sr_text_bits_float(scratch_buffer[12]), sr_text_bits_float(scratch_buffer[14]), sr_text_bits_float(scratch_buffer[16]), NULL);
        state_word = g_150FDB190;
      }
      ++element_index;
      state_address_5 += 77;
    }
    while ( element_index < state_word );
  }
  iteration_count_4 = 0;
  for ( i = 0; i < 256; ++i )
  {
    if ( *(state_address - 2) == 3 && *state_address == -1 )
    {
      ++iteration_count_4;
      scratch_buffer[state_address[2] + 20] = i;
    }
    state_address += 98;
  }
  for ( j = iteration_count_4 - 1; j >= 0; --j )
  {
    table_value_4 = (int)scratch_buffer[j + 20];
    if ( dword_140404A6C[98 * table_value_4 + 70290891] == 3 )
      sub_1400745F0(table_value_4);
  }
  if ( (a1 & 1) == 0 )
  {
    glBindTexture(3553, dword_140404A6C[3592 * renderer_current_font + 72777087]);
    sr_renderer_draw_textured_rect(
      sr_export_float_lane_container((unsigned __int64)*(unsigned int *)&g_1B0032360),
      sr_export_float_lane_container((unsigned __int64)g_1B0032364),
      0x42000000 /* native cursor width 32.0f */,
      32.0,
      5,
      1065353216,
      1065353216,
      1065353216,
      1065353216);
  }
  g_150FDB190 = 0;
  return; /* original void menu presentation */
}
#undef scratch_buffer
#undef unused_frame_slot_1104

//----- (0000000140078610) ----------------------------------------------------
__int64            ui_load_base_assets_candidate(unsigned int a1,      char *a2, int a3)
{
  __int64 input_value;
  char input_value_2;
  __int64 lookup_index;
  __int64 scaled_index;
  void *allocation_buffer;
  int element_index;
  int table_value;
  int i;
  int masked_bits;
  __int64 element_index_2;
  __int64 file_handle;
  int record_byte_offset;
  FILE *file_handle_2;
  signed int element_size;
  float call_result;
  signed int iteration_count;
  signed int j;
  __int64 element_index_3;
  int k;
  signed int iteration_count_2;
  signed int m;
  __int64 element_index_4;
  float component_delta;
  unsigned __int64 cached_scaled_index;
  float *record_byte_offset_2;
  unsigned int *record_byte_offset_3;
  float *record_byte_offset_4;
  float shifted_bits;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float product_difference_4;
  float shifted_bits_2;
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float shifted_bits_3;
  float source_component_y;
  float source_component_y_2;
  float weighted_sum;
  float shifted_bits_4;
  float source_component_z;
  float source_component_z_2;
  float weighted_sum_2;
  float shifted_bits_5;
  float source_component_w;
  float source_component_w_2;
  float weighted_sum_3;
  float shifted_bits_6;
  float source_float_4;
  float source_float_4_2;
  float weighted_sum_4;
  float shifted_bits_7;
  float source_float_5;
  float source_float_5_2;
  float weighted_sum_5;
  float shifted_bits_8;
  float weighted_sum_6;
  float source_float_6;
  unsigned int loaded_word;
  __int64 remaining_count;
  _DWORD *record_byte_offset_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140078610[1136];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140078610 + 0)) /* [rsp+0h] */
#define input_value_3 (*(int (*))(void *)(sr_frame_140078610 + 80)) /* [rsp+50h] */
#define scaled_index_2 (*(unsigned __int64 (*))(void *)(sr_frame_140078610 + 88)) /* [rsp+58h] */
#define needle (*(_BYTE (*)[512])(void *)(sr_frame_140078610 + 96)) /* [rsp+60h] */
#define scratch_buffer (*(char (*)[512])(void *)(sr_frame_140078610 + 608)) /* [rsp+260h] */
#define unused_frame_slot_1120 (*(__int64 (*))(void *)(sr_frame_140078610 + 1120)) /* [rsp+460h] */

  unsigned int sr_loaded = 0;
  input_value = (int)a1;
  input_value_2 = a3;
  input_value_3 = a3;
  if ( a1 <= 0x3F )
  {
    crt_sprintf(scratch_buffer, "font/%s.png", a2);
    if ( (unsigned int)sr_texture_load_pixels(scratch_buffer) )
    {
      lookup_index = input_value;
      scaled_index = 3592 * input_value;
      allocation_buffer = *(void **)&dword_140404A6C[3592 * input_value + 72777091];
      dword_140404A6C[scaled_index + 72777088] = g_1B0037420;
      dword_140404A6C[scaled_index + 72777089] = g_1B0037424;
      scaled_index_2 = 14368 * input_value;
      free(allocation_buffer);
      element_index = 0;
      *(_QWORD *)&dword_140404A6C[scaled_index + 72777091] = sr_path_malloc((int)(4
                                                                      * dword_140404A6C[scaled_index + 72777088]
                                                                      * dword_140404A6C[scaled_index + 72777089]));
      if ( (int)dword_140404A6C[3592 * input_value + 72777089] > 0 )
      {
        do
        {
          table_value = dword_140404A6C[scaled_index + 72777088];
          for ( i = 0; i < table_value; ++i )
          {
            if ( element_index >= (int)dword_140404A6C[scaled_index + 72777089] >> 4 || i >= table_value >> 4 )
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index + 72777091] + 4LL * (i + element_index * table_value)) = dword_140404A6C[i + 468765295 + element_index * table_value];
            else
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index + 72777091] + 4LL * (i + element_index * table_value)) = -1;
            table_value = dword_140404A6C[scaled_index + 72777088];
          }
          ++element_index;
        }
        while ( element_index < (int)dword_140404A6C[scaled_index + 72777089] );
      }
      glGenTextures(1, &dword_140404A6C[scaled_index + 72777086]);
      glBindTexture(3553, dword_140404A6C[scaled_index + 72777086]);
      glTexParameteri(3553, 10242, 33071);
      glTexParameteri(3553, 10243, 33071);
      glTexParameteri(3553, 10240, 9729);
      glTexParameteri(3553, 10241, 9729);
      masked_bits = input_value_2 & 1;
      if ( (input_value_2 & 1) != 0 )
      {
        glTexParameteri(3553, 10240, 9728);
        glTexParameteri(3553, 10241, 9728);
      }
      element_index_2 = 0;
      glTexImage2D(3553,
        0,
        6408,
        dword_140404A6C[scaled_index + 72777088],
        dword_140404A6C[scaled_index + 72777089],
        0,
        6408,
        5121,
        *(_QWORD *)&dword_140404A6C[scaled_index + 72777091]);
      crt_sprintf(scratch_buffer, "font/%s.csv", a2);
      g_15F1D91E4 = 0;
      file_handle = crt_fopen(scratch_buffer, "rb");
      record_byte_offset = 2;
      file_handle_2 = (FILE *)file_handle;
      if ( file_handle )
      {
        sub_14020C4A8(file_handle, 0, 2u);
        g_15F1D91E4 = ftell_sr(file_handle_2);
        sub_14020C4A8((__int64)file_handle_2, 0, 0);
        element_size = g_15F1D91E4;
        if ( (int)g_15F1D91E4 > 1048574 )
          element_size = 1048574;
        g_15F1D91E4 = element_size;
        fread_sr((void *)(uintptr_t)(&g_15F1D91E8), element_size, 1, (FILE *)(uintptr_t)(file_handle_2));
        *((_BYTE *)&g_15F1D91E8 + (int)g_15F1D91E4) = 0;
        crt_fclose((__int64)file_handle_2);
      }
      call_result = 64.0;
      g_15F1D91E0 = 0;
      crt_sprintf(needle, "Cell Height,", (unsigned int)element_index);
      iteration_count = g_15F1D91E0;
      for ( j = g_15F1D91E4; iteration_count < j; g_15F1D91E0 = ++iteration_count )
      {
        if ( (unsigned int)sr_text_scan_matches(needle) )
          break;
      }
      element_index_3 = -1;
      do
        ++element_index_3;
      while ( needle[element_index_3] );
      g_15F1D91E0 = element_index_3 + iteration_count;
      if ( (int)element_index_3 + iteration_count < j )
        call_result = (float)(int)sub_14006EDD0();
      for ( k = 0; k < 256; ++k )
      {
        crt_sprintf(needle, "Char %d Base Width,", k);
        iteration_count_2 = g_15F1D91E0;
        for ( m = g_15F1D91E4; iteration_count_2 < m; g_15F1D91E0 = ++iteration_count_2 )
        {
          if ( (unsigned int)sr_text_scan_matches(needle) )
            break;
        }
        element_index_4 = -1;
        do
          ++element_index_4;
        while ( needle[element_index_4] );
        g_15F1D91E0 = element_index_4 + iteration_count_2;
        if ( (int)element_index_4 + iteration_count_2 < m )
        {
          component_delta = (float)(int)sub_14006EDD0();
          if ( !masked_bits )
            component_delta = component_delta - 0.5;
          *(float *)&dword_140404A6C[3592 * lookup_index + 72777093 + element_index_2] = component_delta / call_result;
        }
        ++element_index_2;
      }
      cached_scaled_index = scaled_index_2;
      record_byte_offset_2 = (float *)&dword_140404A6C[scaled_index_2 / 4 + 72777094];
      record_byte_offset_3 = &dword_140404A6C[scaled_index_2 / 4 + 72779654];
      record_byte_offset_4 = (float *)&dword_140404A6C[scaled_index_2 / 4 + 72777350];
      do
      {
        shifted_bits = (float)(15.0 - (float)((record_byte_offset - 2) >> 4)) * 0.0625;
        product_difference = (float)(((_BYTE)record_byte_offset - 2) & 0xF) * 0.0625;
        *(record_byte_offset_4 - 1) = product_difference;
        *record_byte_offset_4 = shifted_bits + 0.0625;
        product_difference_2 = *(record_byte_offset_2 - 1);
        record_byte_offset_4[2] = shifted_bits + 0.0625;
        record_byte_offset_4[1] = (float)(product_difference_2 * 0.0625) + product_difference;
        product_difference_3 = *(record_byte_offset_2 - 1);
        record_byte_offset_4[4] = shifted_bits;
        record_byte_offset_4[5] = product_difference;
        record_byte_offset_4[6] = shifted_bits;
        record_byte_offset_4[3] = (float)(product_difference_3 * 0.0625) + product_difference;
        *(record_byte_offset_3 - 1) = *((_DWORD *)record_byte_offset_2 - 1);
        *(_QWORD *)record_byte_offset_3 = 1065353216;
        record_byte_offset_3[2] = 0;
        product_difference_4 = (float)(((_BYTE)record_byte_offset - 1) & 0xF) * 0.0625;
        record_byte_offset_4[7] = product_difference_4;
        shifted_bits_2 = (float)(15.0 - (float)((record_byte_offset - 1) >> 4)) * 0.0625;
        record_byte_offset_4[8] = shifted_bits_2 + 0.0625;
        scaled_value = *record_byte_offset_2;
        record_byte_offset_4[10] = shifted_bits_2 + 0.0625;
        record_byte_offset_4[9] = (float)(scaled_value * 0.0625) + product_difference_4;
        scaled_value_2 = *record_byte_offset_2;
        record_byte_offset_4[12] = shifted_bits_2;
        record_byte_offset_4[13] = product_difference_4;
        record_byte_offset_4[14] = shifted_bits_2;
        record_byte_offset_4[11] = (float)(scaled_value_2 * 0.0625) + product_difference_4;
        record_byte_offset_3[3] = *(_DWORD *)record_byte_offset_2;
        *((_QWORD *)record_byte_offset_3 + 2) = 1065353216;
        record_byte_offset_3[6] = 0;
        scaled_value_3 = (float)(record_byte_offset & 0xF) * 0.0625;
        record_byte_offset_4[15] = scaled_value_3;
        shifted_bits_3 = (float)(15.0 - (float)(record_byte_offset >> 4)) * 0.0625;
        record_byte_offset_4[16] = shifted_bits_3 + 0.0625;
        source_component_y = record_byte_offset_2[1];
        record_byte_offset_4[18] = shifted_bits_3 + 0.0625;
        record_byte_offset_4[17] = (float)(source_component_y * 0.0625) + scaled_value_3;
        source_component_y_2 = record_byte_offset_2[1];
        record_byte_offset_4[20] = shifted_bits_3;
        record_byte_offset_4[21] = scaled_value_3;
        record_byte_offset_4[22] = shifted_bits_3;
        record_byte_offset_4[19] = (float)(source_component_y_2 * 0.0625) + scaled_value_3;
        record_byte_offset_3[7] = *((_DWORD *)record_byte_offset_2 + 1);
        *((_QWORD *)record_byte_offset_3 + 4) = 1065353216;
        record_byte_offset_3[10] = 0;
        weighted_sum = (float)(((_BYTE)record_byte_offset + 1) & 0xF) * 0.0625;
        record_byte_offset_4[23] = weighted_sum;
        shifted_bits_4 = (float)(15.0 - (float)((record_byte_offset + 1) >> 4)) * 0.0625;
        record_byte_offset_4[24] = shifted_bits_4 + 0.0625;
        source_component_z = record_byte_offset_2[2];
        record_byte_offset_4[26] = shifted_bits_4 + 0.0625;
        record_byte_offset_4[25] = (float)(source_component_z * 0.0625) + weighted_sum;
        source_component_z_2 = record_byte_offset_2[2];
        record_byte_offset_4[28] = shifted_bits_4;
        record_byte_offset_4[29] = weighted_sum;
        record_byte_offset_4[30] = shifted_bits_4;
        record_byte_offset_4[27] = (float)(source_component_z_2 * 0.0625) + weighted_sum;
        record_byte_offset_3[11] = *((_DWORD *)record_byte_offset_2 + 2);
        *((_QWORD *)record_byte_offset_3 + 6) = 1065353216;
        record_byte_offset_3[14] = 0;
        weighted_sum_2 = (float)(((_BYTE)record_byte_offset + 2) & 0xF) * 0.0625;
        record_byte_offset_4[31] = weighted_sum_2;
        shifted_bits_5 = (float)(15.0 - (float)((record_byte_offset + 2) >> 4)) * 0.0625;
        record_byte_offset_4[32] = shifted_bits_5 + 0.0625;
        source_component_w = record_byte_offset_2[3];
        record_byte_offset_4[34] = shifted_bits_5 + 0.0625;
        record_byte_offset_4[33] = (float)(source_component_w * 0.0625) + weighted_sum_2;
        source_component_w_2 = record_byte_offset_2[3];
        record_byte_offset_4[36] = shifted_bits_5;
        record_byte_offset_4[37] = weighted_sum_2;
        record_byte_offset_4[38] = shifted_bits_5;
        record_byte_offset_4[35] = (float)(source_component_w_2 * 0.0625) + weighted_sum_2;
        record_byte_offset_3[15] = *((_DWORD *)record_byte_offset_2 + 3);
        *((_QWORD *)record_byte_offset_3 + 8) = 1065353216;
        record_byte_offset_3[18] = 0;
        weighted_sum_3 = (float)(((_BYTE)record_byte_offset + 3) & 0xF) * 0.0625;
        record_byte_offset_4[39] = weighted_sum_3;
        shifted_bits_6 = (float)(15.0 - (float)((record_byte_offset + 3) >> 4)) * 0.0625;
        record_byte_offset_4[40] = shifted_bits_6 + 0.0625;
        source_float_4 = record_byte_offset_2[4];
        record_byte_offset_4[42] = shifted_bits_6 + 0.0625;
        record_byte_offset_4[41] = (float)(source_float_4 * 0.0625) + weighted_sum_3;
        source_float_4_2 = record_byte_offset_2[4];
        record_byte_offset_4[44] = shifted_bits_6;
        record_byte_offset_4[45] = weighted_sum_3;
        record_byte_offset_4[46] = shifted_bits_6;
        record_byte_offset_4[43] = (float)(source_float_4_2 * 0.0625) + weighted_sum_3;
        record_byte_offset_3[19] = *((_DWORD *)record_byte_offset_2 + 4);
        *((_QWORD *)record_byte_offset_3 + 10) = 1065353216;
        record_byte_offset_3[22] = 0;
        weighted_sum_4 = (float)(((_BYTE)record_byte_offset + 4) & 0xF) * 0.0625;
        record_byte_offset_4[47] = weighted_sum_4;
        shifted_bits_7 = (float)(15.0 - (float)((record_byte_offset + 4) >> 4)) * 0.0625;
        record_byte_offset_4[48] = shifted_bits_7 + 0.0625;
        source_float_5 = record_byte_offset_2[5];
        record_byte_offset_4[50] = shifted_bits_7 + 0.0625;
        record_byte_offset_4[49] = (float)(source_float_5 * 0.0625) + weighted_sum_4;
        source_float_5_2 = record_byte_offset_2[5];
        record_byte_offset_4[52] = shifted_bits_7;
        record_byte_offset_4[53] = weighted_sum_4;
        record_byte_offset_4[54] = shifted_bits_7;
        record_byte_offset_4[51] = (float)(source_float_5_2 * 0.0625) + weighted_sum_4;
        record_byte_offset_3[23] = *((_DWORD *)record_byte_offset_2 + 5);
        *((_QWORD *)record_byte_offset_3 + 12) = 1065353216;
        record_byte_offset_3[26] = 0;
        weighted_sum_5 = (float)(((_BYTE)record_byte_offset + 5) & 0xF) * 0.0625;
        record_byte_offset_4[55] = weighted_sum_5;
        shifted_bits_8 = (float)(15.0 - (float)((record_byte_offset + 5) >> 4)) * 0.0625;
        record_byte_offset_4[56] = shifted_bits_8 + 0.0625;
        weighted_sum_6 = (float)(record_byte_offset_2[6] * 0.0625) + weighted_sum_5;
        record_byte_offset_4[58] = shifted_bits_8 + 0.0625;
        record_byte_offset += 8;
        record_byte_offset_4[57] = weighted_sum_6;
        source_float_6 = record_byte_offset_2[6];
        record_byte_offset_4[60] = shifted_bits_8;
        record_byte_offset_4[61] = weighted_sum_5;
        record_byte_offset_4[62] = shifted_bits_8;
        record_byte_offset_4[59] = (float)(source_float_6 * 0.0625) + weighted_sum_5;
        record_byte_offset_4 += 64;
        loaded_word = *((_DWORD *)record_byte_offset_2 + 6);
        record_byte_offset_2 += 8;
        record_byte_offset_3[27] = loaded_word;
        *((_QWORD *)record_byte_offset_3 + 14) = 1065353216;
        record_byte_offset_3[30] = 0;
        record_byte_offset_3 += 32;
      }
      while ( record_byte_offset - 2 < 256 );
      if ( (input_value_3 & 2) != 0 )
      {
        remaining_count = 13;
        record_byte_offset_5 = (unsigned int *)((char *)&g_1519A50A0 + cached_scaled_index);
        do
        {
          *record_byte_offset_5 = *(record_byte_offset_5 - 256);
          record_byte_offset_5[1] = *(record_byte_offset_5 - 255);
          record_byte_offset_5[2] = *(record_byte_offset_5 - 254);
          record_byte_offset_5[3] = *(record_byte_offset_5 - 253);
          record_byte_offset_5[4] = *(record_byte_offset_5 - 252);
          record_byte_offset_5[5] = *(record_byte_offset_5 - 251);
          record_byte_offset_5[6] = *(record_byte_offset_5 - 250);
          record_byte_offset_5[7] = *(record_byte_offset_5 - 249);
          record_byte_offset_5[8] = *(record_byte_offset_5 - 248);
          record_byte_offset_5[9] = *(record_byte_offset_5 - 247);
          record_byte_offset_5[10] = *(record_byte_offset_5 - 246);
          record_byte_offset_5[11] = *(record_byte_offset_5 - 245);
          record_byte_offset_5[12] = *(record_byte_offset_5 - 244);
          record_byte_offset_5[13] = *(record_byte_offset_5 - 243);
          record_byte_offset_5[14] = *(record_byte_offset_5 - 242);
          record_byte_offset_5[15] = *(record_byte_offset_5 - 241);
          record_byte_offset_5 += 16;
          --remaining_count;
        }
        while ( remaining_count );
      }
      glGenTextures(1, (char *)&g_1519A4068 + cached_scaled_index);
      if ( (unsigned int)sr_texture_load_pixels("texture/mouse01.png") )
      {
        glBindTexture(3553, *(unsigned int *)((char *)&g_1519A4068 + cached_scaled_index));
        glTexParameteri(3553, 10242, 33071);
        glTexParameteri(3553, 10243, 33071);
        glTexParameteri(3553, 10240, 9729);
        glTexParameteri(3553, 10241, 9729);
        glTexImage2D(3553,
          0,
          6408,
          g_1B0037420,
          g_1B0037424,
          0,
          6408,
          5121,
          &g_1B0037428);
      }
      *(unsigned int *)((char *)&g_1519A4060 + cached_scaled_index) = 1;
      sr_loaded = 1;
    }
  }
  return sr_loaded;
}
#undef unused_frame_slot_0
#undef input_value_3
#undef scaled_index_2
#undef needle
#undef scratch_buffer
#undef unused_frame_slot_1120

//----- (0000000140079140) ----------------------------------------------------
__int64            ui_reload_mouse_texture_candidate(unsigned int a1,      char *a2)
{
  __int64 input_value;
  __int64 file_handle;
  __int64 file_handle_2;
  int state_word;
  __int64 remaining_count;
  signed int state_word_2;
  signed int iteration_count;
  int iteration_count_2;
  int masked_bits;
  int scaled_index;
  __int64 scaled_index_2;
  void *allocation_buffer;
  __int64 allocated_buffer;
  int element_index;
  int table_value;
  int i;
  char *state_address;
  float *converted_vector;
  unsigned int *state_address_2;
  unsigned int *record_byte_offset;
  int loaded_word;
  unsigned int loaded_word_2;
  float product_difference;
  unsigned int loaded_word_3;
  int loaded_word_4;
  float product_difference_2;
  float weighted_sum;
  __m128i converted_vector_2;
  unsigned int integer_difference;
  int loaded_word_5;
  float converted_vector_3;
  float scaled_value;
  __m128i converted_vector_4;
  int loaded_word_6;
  __m128i converted_vector_5;
  int loaded_word_7;
  float product_difference_3;
  float product_difference_4;
  __m128i converted_vector_6;
  unsigned int integer_difference_2;
  int loaded_word_8;
  int loaded_word_9;
  int loaded_word_10;
  __m128i converted_vector_7;
  int loaded_word_11;
  float scaled_value_2;
  float product_difference_5;
  float weighted_sum_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140079140[2528];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140079140 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[2])(void *)(sr_frame_140079140 + 80)) /* [rsp+50h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140079140 + 82)) /* [rsp+52h] */
#define scratch_buffer_2 (*(char (*)[512])(void *)(sr_frame_140079140 + 2000)) /* [rsp+7D0h] */
#define unused_frame_slot_2512 (*(__int64 (*))(void *)(sr_frame_140079140 + 2512)) /* [rsp+9D0h] */

  input_value = (int)a1;
  if ( a1 <= 0x3F )
  {
    crt_sprintf(scratch_buffer_2, "font/%s.ttf", a2);
    file_handle = crt_fopen(scratch_buffer_2, "rb");
    file_handle_2 = file_handle;
    if ( file_handle )
    {
      fread_sr((void *)(uintptr_t)(&g_18406CD00), 1, 0x100000, (FILE *)(uintptr_t)(file_handle));
      crt_fclose(file_handle_2);
      state_word = 512;
      remaining_count = 32;
      sub_140177E50(
        (__int64)&g_18406CD00,
        0,
        13.0,
        &g_18402CCC0,
        512,
        512,
        32,
        96,
        (__int64)scratch_buffer);
      state_word_2 = 512;
      g_1B0037420 = 512;
      iteration_count = 0;
      g_1B0037424 = 512;
      do
      {
        iteration_count_2 = 0;
        if ( state_word > 0 )
        {
          do
          {
            masked_bits = *((unsigned __int8 *)&g_18402CCC0 + iteration_count_2 + state_word * (state_word_2 - iteration_count - 1));
            scaled_index = iteration_count_2 + iteration_count * state_word;
            ++iteration_count_2;
            dword_140404A6C[scaled_index + 468765295] = (masked_bits << 24) + 0xFFFFFF;
            state_word = g_1B0037420;
            state_word_2 = g_1B0037424;
          }
          while ( iteration_count_2 < (int)g_1B0037420 );
        }
        ++iteration_count;
      }
      while ( iteration_count < state_word_2 );
      scaled_index_2 = 3592 * input_value;
      dword_140404A6C[scaled_index_2 + 72777089] = state_word_2;
      allocation_buffer = *(void **)&dword_140404A6C[scaled_index_2 + 72777091];
      dword_140404A6C[scaled_index_2 + 72777088] = state_word;
      free(allocation_buffer);
      allocated_buffer = sr_path_malloc((int)(4 * dword_140404A6C[scaled_index_2 + 72777088] * dword_140404A6C[scaled_index_2 + 72777089]));
      element_index = 0;
      for ( *(_QWORD *)&dword_140404A6C[scaled_index_2 + 72777091] = allocated_buffer; element_index < (int)dword_140404A6C[scaled_index_2 + 72777089]; ++element_index )
      {
        table_value = dword_140404A6C[scaled_index_2 + 72777088];
        for ( i = 0; i < table_value; ++i )
        {
          if ( element_index >= (int)dword_140404A6C[scaled_index_2 + 72777089] >> 4 || i >= table_value >> 4 )
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index_2 + 72777091] + 4LL * (i + element_index * table_value)) = dword_140404A6C[i + 468765295 + element_index * table_value];
          else
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index_2 + 72777091] + 4LL * (i + element_index * table_value)) = -1;
          table_value = dword_140404A6C[scaled_index_2 + 72777088];
        }
      }
      glGenTextures(1, &dword_140404A6C[scaled_index_2 + 72777086]);
      glBindTexture(3553, dword_140404A6C[scaled_index_2 + 72777086]);
      glTexParameteri(3553, 10242, 33071);
      glTexParameteri(3553, 10243, 33071);
      glTexParameteri(3553, 10240, 9729);
      glTexParameteri(3553, 10241, 9729);
      glTexImage2D(3553,
        0,
        6408,
        dword_140404A6C[scaled_index_2 + 72777088],
        dword_140404A6C[scaled_index_2 + 72777089],
        0,
        6408,
        5121,
        *(_QWORD *)&dword_140404A6C[scaled_index_2 + 72777091]);
      state_address = &callee_output_word;
      converted_vector = (float *)&dword_140404A6C[scaled_index_2 + 72779786];
      state_address_2 = &dword_140404A6C[scaled_index_2 + 72777127];
      record_byte_offset = &dword_140404A6C[scaled_index_2 + 72777614];
      do
      {
        loaded_word = *(unsigned __int16 *)state_address;
        loaded_word_2 = *((unsigned __int16 *)state_address + 2);
        product_difference = 1.0 - (float)((float)loaded_word * 0.001953125);
        loaded_word_3 = *((unsigned __int16 *)state_address + 1) - *((unsigned __int16 *)state_address - 1);
        loaded_word_4 = *((unsigned __int16 *)state_address + 9);
        product_difference_2 = (float)*((unsigned __int16 *)state_address - 1) * 0.001953125;
        weighted_sum = (float)*((unsigned __int16 *)state_address + 1) * 0.001953125;
        *((float *)record_byte_offset - 8) = product_difference;
        *((float *)record_byte_offset - 6) = product_difference;
        *((float *)record_byte_offset - 7) = weighted_sum;
        *((float *)record_byte_offset - 5) = weighted_sum;
        *((float *)record_byte_offset - 9) = product_difference_2;
        *((float *)record_byte_offset - 3) = product_difference_2;
        converted_vector_2 = _mm_cvtsi32_si128(loaded_word_2);
        integer_difference = loaded_word_2 - loaded_word;
        loaded_word_5 = *((unsigned __int16 *)state_address + 10);
        converted_vector_3 = 1.0 - (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_2), f32)[0] * 0.001953125);
        *(float *)SR_VEC_LANES(128, converted_vector_2, i32) = *(float *)(state_address + 14) * 0.07692308;
        scaled_value = (float)loaded_word_4 * 0.001953125;
        *((float *)record_byte_offset - 4) = converted_vector_3;
        *((float *)record_byte_offset - 2) = converted_vector_3;
        *(state_address_2 - 2) = SR_VEC_LANES(128, converted_vector_2, i32)[0];
        converted_vector_4 = _mm_cvtsi32_si128(loaded_word_3);
        loaded_word_6 = *((unsigned __int16 *)state_address + 11);
        *(converted_vector - 3) = *(float *)(state_address + 6) * 0.07692308;
        *(converted_vector - 5) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_4), f32)[0] * 0.07692308;
        converted_vector_5 = _mm_cvtsi32_si128(integer_difference);
        loaded_word_7 = *((unsigned __int16 *)state_address + 12);
        *(converted_vector - 4) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_5), f32)[0] * 0.07692308;
        *(converted_vector - 2) = (float)(*(float *)(state_address + 10) * 0.07692308) + 0.75;
        *((float *)record_byte_offset - 1) = scaled_value;
        *((float *)record_byte_offset + 5) = scaled_value;
        product_difference_3 = 1.0 - (float)((float)loaded_word_5 * 0.001953125);
        *(float *)record_byte_offset = product_difference_3;
        *(float *)SR_VEC_LANES(128, converted_vector_5, i32) = (float)loaded_word_6 * 0.001953125;
        *((float *)record_byte_offset + 2) = product_difference_3;
        record_byte_offset[1] = SR_VEC_LANES(128, converted_vector_5, i32)[0];
        record_byte_offset[3] = SR_VEC_LANES(128, converted_vector_5, i32)[0];
        product_difference_4 = 1.0 - (float)((float)loaded_word_7 * 0.001953125);
        *(float *)SR_VEC_LANES(128, converted_vector_5, i32) = *(float *)(state_address + 34) * 0.07692308;
        *((float *)record_byte_offset + 4) = product_difference_4;
        *((float *)record_byte_offset + 6) = product_difference_4;
        *(state_address_2 - 1) = SR_VEC_LANES(128, converted_vector_5, i32)[0];
        converted_vector_6 = _mm_cvtsi32_si128(loaded_word_6 - loaded_word_4);
        integer_difference_2 = loaded_word_7 - loaded_word_5;
        loaded_word_8 = *((unsigned __int16 *)state_address + 20);
        loaded_word_9 = *((unsigned __int16 *)state_address + 21);
        loaded_word_10 = *((unsigned __int16 *)state_address + 19);
        converted_vector[1] = *(float *)(state_address + 26) * 0.07692308;
        *(converted_vector - 1) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_6), f32)[0] * 0.07692308;
        converted_vector_7 = _mm_cvtsi32_si128(integer_difference_2);
        loaded_word_11 = *((unsigned __int16 *)state_address + 22);
        scaled_value_2 = (float)loaded_word_10 * 0.001953125;
        *converted_vector = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_7), f32)[0] * 0.07692308;
        converted_vector[2] = (float)(*(float *)(state_address + 30) * 0.07692308) + 0.75;
        *((float *)record_byte_offset + 7) = scaled_value_2;
        *((float *)record_byte_offset + 13) = scaled_value_2;
        product_difference_5 = 1.0 - (float)((float)loaded_word_8 * 0.001953125);
        *((float *)record_byte_offset + 8) = product_difference_5;
        *(float *)SR_VEC_LANES(128, converted_vector_7, i32) = (float)loaded_word_9 * 0.001953125;
        *((float *)record_byte_offset + 10) = product_difference_5;
        record_byte_offset[9] = SR_VEC_LANES(128, converted_vector_7, i32)[0];
        record_byte_offset[11] = SR_VEC_LANES(128, converted_vector_7, i32)[0];
        *(float *)SR_VEC_LANES(128, converted_vector_7, i32) = *(float *)(state_address + 54) * 0.07692308;
        *((float *)record_byte_offset + 12) = 1.0 - (float)((float)loaded_word_11 * 0.001953125);
        *((float *)record_byte_offset + 14) = 1.0 - (float)((float)loaded_word_11 * 0.001953125);
        record_byte_offset += 24;
        weighted_sum_2 = *(float *)(state_address + 46);
        *state_address_2 = SR_VEC_LANES(128, converted_vector_7, i32)[0];
        state_address_2 += 3;
        converted_vector[5] = weighted_sum_2 * 0.07692308;
        converted_vector[3] = (float)(loaded_word_9 - loaded_word_10) * 0.07692308;
        converted_vector[4] = (float)(loaded_word_11 - loaded_word_8) * 0.07692308;
        SR_VEC_LANES(128, converted_vector_7, i32)[0] = *(_DWORD *)(state_address + 50);
        state_address += 60;
        converted_vector[6] = (float)(*(float *)SR_VEC_LANES(128, converted_vector_7, i32) * 0.07692308) + 0.75;
        converted_vector += 12;
        --remaining_count;
      }
      while ( remaining_count );
      glGenTextures(1, &dword_140404A6C[scaled_index_2 + 72777087]);
      if ( (unsigned int)sr_texture_load_pixels("texture/mouse01.png") )
      {
        glBindTexture(3553, dword_140404A6C[scaled_index_2 + 72777087]);
        glTexParameteri(3553, 10242, 33071);
        glTexParameteri(3553, 10243, 33071);
        glTexParameteri(3553, 10240, 9729);
        glTexParameteri(3553, 10241, 9729);
        glTexImage2D(3553,
          0,
          6408,
          g_1B0037420,
          g_1B0037424,
          0,
          6408,
          5121,
          &g_1B0037428);
      }
      dword_140404A6C[scaled_index_2 + 72777085] = 1;
    }
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef callee_output_word
#undef scratch_buffer_2
#undef unused_frame_slot_2512

//----- (00000001400FE1B0) ----------------------------------------------------
void sub_1400FE1B0()
{
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 iteration_count;
  char masked_bits;
  int drawmenubutton_result;
  unsigned int state_word;
  struct hostent *returned_pointer;
  struct hostent *record_pointer;
  _QWORD *loaded_record_pointer;
  unsigned int state_word_2;
  __int64 element_index;
  int ntohl_sr_result;
  __int64 state_word_3;
  int drawmenubutton_result_2;
  unsigned int state_word_4;
  int drawmenubutton_result_3;
  unsigned int state_word_5;
  int drawmenubutton_result_4;
  unsigned int state_word_6;
  int drawmenubutton_result_5;
  unsigned int state_word_7;
  bool comparison_result;
  unsigned int state_word_8;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FE1B0[576];
#define callee_output_word (*(_DWORD (*)[12])(void *)(sr_frame_1400FE1B0 + 0)) /* [rsp+0h] */
#define name (*(char (*)[512])(void *)(sr_frame_1400FE1B0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_1400FE1B0 + 560)) /* [rsp+230h] */

  menu_item_height = 1107296256;
  *(unsigned int *)&menu_y = 1135083520;
  *(unsigned int *)&menu_x = 1135607808;
  menu_item_width = 1134559232;
  g_150F610F4 = 7;
  if ( (unsigned int)sr_DrawMenuButton("Practice") || SR_DEBUG_AUTOSTART("practice") )
  {
    SR_DEBUG_STAGE("Practice selected: start local game setup");
    sr_menu_relative_mode(1);
    g_183F7C758 = sr_menu_relative_mouse((int *)&callee_output_word[8], (int *)&callee_output_word[9]);
    g_183F7C750 = g_183F7C758 & 1;
    *(unsigned int *)&g_183F7C6C4 = 1134559232;
    iteration_count = 0;
    g_183F7C754 = (LOBYTE(g_183F7C758) >> 2) & 1;
    game_type = 0;
    g_183EBFCE0 = 25200;
    g_183F7C6C8 = (float)(int)callee_output_word[8];
    *(unsigned int *)&g_183F7C6C0 = 1140850688;
    g_183F7C6CC = (float)(int)callee_output_word[9];
    do
    {
      masked_bits = *((_BYTE *)&g_151E45B4C + iteration_count);
      *((_BYTE *)(unsigned int *)&g_1AD04ADD4 + iteration_count++) = masked_bits;
    }
    while ( masked_bits );
    g_1AD04B1F4 = 1;
    game_connected = 1;
    *(_QWORD *)&g_151E4614C = 0;
    /* Native Practice leaves the map name alone: it is "test2", the World-mode city,
       set at startup by 0x14013DCD0. Set SUBROSA_PRACTICE_MAP to a data folder name
       (for example debugtest, the single-player test arena) to pick another map. */
    {
      const char *sr_practice_map = getenv("SUBROSA_PRACTICE_MAP");
      if (sr_practice_map && *sr_practice_map)
        snprintf((char *)(unsigned int *)&g_183EBFAB0, 64, "%s", sr_practice_map);
    }
    sub_140095B00();
  }
  g_150F610F4 = 22;
  drawmenubutton_result = sr_DrawMenuButton("Start Game") || SR_DEBUG_AUTOSTART_MODE();
  state_word = g_183EBFAA4;
  g_150F610F4 = 13;
  if ( drawmenubutton_result )
    state_word = 4;
  g_183EBFAA4 = state_word;
  if ( (unsigned int)sr_DrawMenuButton("Join Game") )
  {
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
        state_word_2 = g_16B0A7EE4;
        if ( *loaded_record_pointer )
        {
          element_index = 0;
          do
          {
            if ( element_index >= 16 )
              break;
            ntohl_sr_result = ntohl_sr(*(unsigned int *)loaded_record_pointer[element_index]);
            state_word_3 = (int)g_16B0A7EE4;
            ++element_index;
            dword_140404A6C[2 * g_16B0A7EE4 + 179457309] = ntohl_sr_result | 0xFF;
            LOWORD(dword_140404A6C[2 * state_word_3 + 179457310]) = g_18539D3F8;
            state_word_2 = state_word_3 + 1;
            g_16B0A7EE4 = state_word_2;
            loaded_record_pointer = *((_QWORD **)record_pointer + 3);
          }
          while ( loaded_record_pointer[element_index] );
        }
        g_16B0A7EE0 = state_word_2;
      }
    }
    g_16B15FF2C = 0;
    g_16B15FF30 = -1;
    g_16B15FF38 = 0;
    g_16B15FF28 = 0;
    g_183EBFAA4 = 1;
  }
  g_150F610F4 = 18;
  drawmenubutton_result_2 = sr_DrawMenuButton("Options");
  state_word_4 = g_183EBFAA4;
  if ( drawmenubutton_result_2 )
    state_word_4 = 3;
  g_183EBFAA4 = state_word_4;
  drawmenubutton_result_3 = sr_DrawMenuButton("Credits");
  state_word_5 = g_183EBFAA4;
  g_150F610F4 = 41;
  if ( drawmenubutton_result_3 )
    state_word_5 = 6;
  g_183EBFAA4 = state_word_5;
  drawmenubutton_result_4 = sr_DrawMenuButton("Exit");
  state_word_6 = g_183EBFAA8;
  if ( drawmenubutton_result_4 )
    state_word_6 = 2;
  g_183EBFAA8 = state_word_6;
  *(unsigned int *)&menu_x = 1098907648;
  *(unsigned int *)&menu_y = 1139277824;
  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  menu_item_width = 1128267776;
  menu_item_height = 1103101952;
  g_150F610F4 = 6;
  drawmenubutton_result_5 = sr_DrawMenuButton("Character");
  state_word_7 = g_183EBFAA4;
  comparison_result = drawmenubutton_result_5 == 0;
  state_word_8 = g_151042894;
  if ( !comparison_result )
    state_word_7 = 5;
  g_183EBFAA4 = state_word_7;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    menu_item_width = dword_140404A6C[2 * (state_word_8 - 1) + 70317963];
    menu_item_height = dword_140404A6C[2 * (state_word_8 - 1) + 70317964];
  }
  return;
}
#undef callee_output_word
#undef name
#undef unused_frame_slot_560

//----- (00000001400FEB50) ----------------------------------------------------
// Candidate options menu builder: Back, Fullscreen, V-Sync, Frame Smoothing, Sprite Models, Invert Mouse, advanced inventory, audio selectors.
void ui_build_options_menu_candidate()
{
  unsigned int state_word;
  int drawmenubutton_result;
  unsigned int state_word_2;
  unsigned int *state_address;
  char *byte_cursor;
  char input_byte;
  int selection_code;
  int masked_bits;
  unsigned int state_word_3;
  __int64 scaled_index;
  int iteration_count;
  unsigned int rol4_result;
       char *source_text;
  char *destination_text;
  bool comparison_result;
  _QWORD *state_address_2;
  char *destination_text_2;
       char *graphics_query_result;
       char *graphics_query_result_2;
       char *graphics_query_result_3;
  char *destination_text_3;
  _WORD *state_address_3;
  int call_result;
  char *destination_text_4;
  char *destination_text_5;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FEB50[10560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400FEB50 + 0)) /* [rsp+0h] */
#define unused_frame_slot_48 (*(int (*))(void *)(sr_frame_1400FEB50 + 48)) /* [rsp+30h] */
#define unused_frame_slot_52 (*(__int16 (*))(void *)(sr_frame_1400FEB50 + 52)) /* [rsp+34h] */
#define unused_frame_slot_54 (*(char (*))(void *)(sr_frame_1400FEB50 + 54)) /* [rsp+36h] */
#define unused_frame_slot_56 (*(__int16 (*))(void *)(sr_frame_1400FEB50 + 56)) /* [rsp+38h] */
#define unused_frame_slot_64 (*(void * (*))(void *)(sr_frame_1400FEB50 + 64)) /* [rsp+40h] */
#define destination_text_6 (*(char (*)[1024])(void *)(sr_frame_1400FEB50 + 5424)) /* [rsp+1530h] */
#define source_text_2 (*(char (*)[4096])(void *)(sr_frame_1400FEB50 + 6448)) /* [rsp+1930h] */
#define unused_frame_slot_10544 (*(__int64 (*))(void *)(sr_frame_1400FEB50 + 10544)) /* [rsp+2930h] */

  state_word = g_150F610F4;
  if ( !g_1449815C4 )
    state_word = 41;
  g_150F610F4 = state_word;
  menu_item_width = 1126170624;
  menu_item_height = 1101004800;
  drawmenubutton_result = sr_DrawMenuButton("Back");
  state_word_2 = g_183EBFAA4;
  if ( drawmenubutton_result )
    state_word_2 = 0;
  *(unsigned int *)&menu_x = 1082130432;
  g_183EBFAA4 = state_word_2;
  menu_item_width = 1131413504;
  menu_item_height = 1107296256;
  *(unsigned int *)&menu_y = 1115684864;
  sr_borderless_selected = sr_recomp_window_mode == 1;
  sr_fullscreen_selected = sr_recomp_window_mode == 2;
  if ((unsigned int)sr_DrawMenuToggle("Borderless", &sr_borderless_selected)) {
    sr_recomp_window_set(*(void **)&g_160FC47C8, sr_borderless_selected ? 1 : 0, 1);
    g_160FC4804 = sr_recomp_window_mode != 0;
    sr_fullscreen_selected = sr_recomp_window_mode == 2;
  }
  if ((unsigned int)sr_DrawMenuToggle("Fullscreen", &sr_fullscreen_selected)) {
    sr_recomp_window_set(*(void **)&g_160FC47C8, sr_fullscreen_selected ? 2 : 0, 1);
    g_160FC4804 = sr_recomp_window_mode != 0;
  }
  if ( (unsigned int)sr_DrawMenuToggle("V-Sync", &g_151E461D8) )
    sr_window_swap((int)g_151E461D8);
  sr_DrawMenuToggle("Frame Smoothing", &g_151E46204);
  sr_DrawMenuToggle("Sprite Models", &draw_unknown_151e46208);
  sr_menu_label(Parameters);
  sr_menu_label(Parameters);
  sr_DrawMenuToggle("Invert Mouse", &g_151E46198);
  sr_DrawMenuToggle("Use advanced inventory", &g_151E46200);
  *(unsigned int *)&menu_x = 1140850688;
  *(unsigned int *)&menu_y = 1115684864;
  sr_DrawMenuSlider("Sound Volume", (int *)&g_151E4615C, 0, 100, 10);
  sr_DrawMenuList(
    "Audio Output",
    240.0,
    256.0,
    240.0,
    0x42000000u,
    0,
    &g_144970C9C,
    (__int64)(unsigned int *)&g_144970CA4,
    0x200u,
    g_144970CA0);
  sr_menu_label(Parameters);
  sr_DrawMenuList(
    "Audio Input",
    240.0,
    256.0,
    240.0,
    0x42000000u,
    0,
    &g_144978CA8,
    (__int64)(unsigned int *)&g_144978CB0,
    0x200u,
    g_144978CAC);
  sr_menu_label(Parameters);
  sr_DrawMenuToggle("Use Push to Talk", &g_151E461C4);
  if ( !g_151E461C4 )
    sr_DrawMenuTextBox("Voice Min", (__int64)&g_151E461BC, 0x10u, 0x4000u);
  destination_text_6[0] = 0;
  if ( g_1449815C4 )
  {
    strcpy(destination_text_6, "Press a key or mouse button");
  }
  else if ( g_151E461C8 )
  {
    state_address = &dword_140404A6C[4 * g_151E461C8 + 83175925];
    byte_cursor = (char *)(destination_text_6 - (char *)state_address);
    do
    {
      input_byte = *(_BYTE *)state_address;
      *((_BYTE *)state_address + (_QWORD)byte_cursor) = *(_BYTE *)state_address;
      state_address = (unsigned int *)((char *)state_address + 1);
    }
    while ( input_byte );
  }
  else if ( g_151E461CC )
  {
    switch ( g_151E461CC )
    {
      case 1u:
        selection_code = 1;
        break;
      case 2u:
        selection_code = 2;
        break;
      case 4u:
        selection_code = 3;
        break;
      case 8u:
        selection_code = 4;
        break;
      case 0x10u:
        selection_code = 5;
        break;
      case 0x20u:
        selection_code = 6;
        break;
      case 0x40u:
        selection_code = 7;
        break;
      default:
        selection_code = 0;
        if ( g_151E461CC == 128 )
          selection_code = 8;
        break;
    }
    crt_sprintf(destination_text_6, "Mouse %d", selection_code);
  }
  sr_DrawMenuButtonSelectable((unsigned __int8 *)destination_text_6, (int *)&g_1449815C4, 1);
  if ( g_1449815C4 )
  {
    masked_bits = g_1B0032404;
    if ( g_1B0032404 != g_1B0032400 )
    {
      state_word_3 = g_151E461C8;
      while ( !dword_140404A6C[5 * masked_bits + 468760167] )
      {
        if ( dword_140404A6C[5 * masked_bits + 468760168] == 41 )
          goto LABEL_45;
LABEL_46:
        masked_bits = ((_WORD)masked_bits + 1) & 0x3FF;
        g_1B0032404 = masked_bits;
        if ( masked_bits == g_1B0032400 )
          goto LABEL_47;
      }
      scaled_index = (int)dword_140404A6C[5 * masked_bits + 468760168];
      if ( (int)scaled_index < 323 )
      {
        if ( LOBYTE(dword_140404A6C[4 * scaled_index + 83175925]) )
          state_word_3 = dword_140404A6C[5 * masked_bits + 468760168];
        g_151E461C8 = state_word_3;
      }
LABEL_45:
      g_1449815C4 = 0;
      goto LABEL_46;
    }
LABEL_47:
    iteration_count = 0;
    rol4_result = 1;
    do
    {
      if ( (g_1B00323F8 & rol4_result) == rol4_result )
      {
        if ( (unsigned int)iteration_count >= 3 )
        {
          g_151E461C8 = 0;
          g_151E461CC = rol4_result;
        }
        g_1449815C4 = 0;
      }
      ++iteration_count;
      rol4_result = __ROL4__(rol4_result, 1);
    }
    while ( iteration_count < 16 );
  }
  sr_menu_label(Parameters);
  sr_menu_label(Parameters);
  sr_DrawMenuTextBox("Port", (__int64)&g_151E45940, 0, 0xFFFFu);
  sr_DrawMenuTextBox("Bandwidth", (__int64)&g_151E45944, 0x2710u, 0x3B9ACA00u);
  sr_menu_label(Parameters);
  if ( (unsigned int)sr_DrawMenuButton("Copy System Info") )
  {
    LOBYTE(g_154151240) = 0;
    source_text = (     char *)sub_140198E51();
    destination_text = (char *)&g_15415123C + 3;
    do
      comparison_result = *++destination_text == 0;
    while ( !comparison_result );
    strcpy(destination_text, source_text);
    state_address_2 = (_QWORD *)((char *)&g_15415123C + 3);
    do
    {
      comparison_result = *((_BYTE *)state_address_2 + 1) == 0;
      state_address_2 = (_QWORD *)((char *)state_address_2 + 1);
    }
    while ( !comparison_result );
    destination_text_2 = (char *)&g_15415123C + 3;
    *state_address_2 = 0x7469622D343620LL;
    do
      comparison_result = *++destination_text_2 == 0;
    while ( !comparison_result );
    strcpy(destination_text_2, "\n\n");
    graphics_query_result = (     char *)glGetString(7936);
    graphics_query_result_2 = (     char *)glGetString(7937);
    graphics_query_result_3 = (     char *)glGetString(7938);
    crt_sprintf(source_text_2, "GL_VENDOR: %s\nGL_RENDERER: %s\nGL_VERSION: %s\n", graphics_query_result, graphics_query_result_2, graphics_query_result_3);
    destination_text_3 = (char *)&g_15415123C + 3;
    do
      comparison_result = *++destination_text_3 == 0;
    while ( !comparison_result );
    strcpy(destination_text_3, source_text_2);
    state_address_3 = (_WORD *)((char *)&g_15415123C + 3);
    do
    {
      comparison_result = *((_BYTE *)state_address_3 + 1) == 0;
      state_address_3 = (_WORD *)((char *)state_address_3 + 1);
    }
    while ( !comparison_result );
    *state_address_3 = 10;
    call_result = sub_140198EB1();
    crt_sprintf(source_text_2, "RAM: %d MB\n", call_result);
    destination_text_4 = (char *)&g_15415123C + 3;
    do
      comparison_result = *++destination_text_4 == 0;
    while ( !comparison_result );
    strcpy(destination_text_4, source_text_2);
    if ( (unsigned int)sub_140198EAB() )
    {
      destination_text_5 = (char *)&g_15415123C + 3;
      do
        comparison_result = *++destination_text_5 == 0;
      while ( !comparison_result );
      strcpy(destination_text_5, "SSE2\n");
    }
    sr_options_clipboard((const char *)&g_154151240);
  }
  if ( g_144970C98 != g_144970C9C )
  {
    if (g_140404A88) {
      sr_audio_pause(g_140404A88,1);
      sr_options_audio_close(g_140404A88);
    }
    sr_startup_audio_spec desired={0},obtained;
    desired.freq=48000;desired.format=0x8120;desired.channels=2;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sr_audio_output_callback;
    int selected=(int)g_144970C9C;
    const char *name=selected?(const char *)&dword_140404A6C[128LL*selected+18198670]:NULL;
    g_140404A88=sr_audio_open(name,0,&desired,&obtained,0);
    if(g_140404A88)sr_audio_pause(g_140404A88,0);
    g_144970C98=g_144970C9C;
  }
  if ( g_144978CA4 != g_144978CA8 )
  {
    if (g_1404C4A98) {
      sr_audio_pause(g_1404C4A98,1);
      sr_options_audio_close(g_1404C4A98);
    }
    sr_startup_audio_spec desired={0},obtained;
    desired.freq=48000;desired.format=0x8010;desired.channels=1;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sr_audio_capture_write;
    int selected=(int)g_144978CA8;
    const char *name=selected?(const char *)&dword_140404A6C[128LL*selected+18206865]:NULL;
    g_1404C4A98=sr_audio_open(name,1,&desired,&obtained,0);
    if(g_1404C4A98)sr_audio_pause(g_1404C4A98,0);
    g_144978CA4=g_144978CA8;
  }
  return;
}
#undef unused_frame_slot_0
#undef unused_frame_slot_48
#undef unused_frame_slot_52
#undef unused_frame_slot_54
#undef unused_frame_slot_56
#undef unused_frame_slot_64
#undef destination_text_6
#undef source_text_2
#undef unused_frame_slot_10544
