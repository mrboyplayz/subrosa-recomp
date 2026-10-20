#include "shared_client.h"
#include "../engine/spawn_console.h"

//----- (0000000140096440) ----------------------------------------------------
// Main frame/update hub candidate: polls input, handles connection/game state, invokes UI/menu draw, render uniform cache, and gameplay mouse/camera state.
void sr_ClientMain()
{
  unsigned int call_result;
  __int64 unused_frame_slot_0;
  __int64 unused_frame_slot_112;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 float_word;
  __int64 float_word_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  __int64 unused_local_5;
  __int64 unused_local_6;
  __int64 selection_code;
  unsigned int inet_addr_sr_result;
  __int64 element_index;
  char table_value;
  signed int i;
  int call_result_2;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  __m128i converted_vector;
  __int64 selection_code_2;
  __m128i si128;
  char selection_code_3;
  int call_result_3;
  __int64 unrecovered_register_value_4;
  int state_word;
  int drawmenubutton_result;
  unsigned int state_word_2;
  unsigned int state_word_3;
  int masked_bits;
  __int64 iteration_count;
  __int64 iteration_count_2;
  unsigned __int64 byte_count;
  __int64 scaled_index;
  int iteration_count_3;
  unsigned int *state_address;
  unsigned __int64 scaled_index_2;
  signed int call_result_4;
  __int64 scaled_index_3;
  int iteration_count_4;
  unsigned int *state_address_2;
  int *buffer_cursor;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  unsigned int table_value_2;
  int iteration_count_5;
  __int64 running_total;
  unsigned __int64 running_total_2;
  __int64 j;
  __int64 table_value_3;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  bool comparison_result;
  double angle;
  unsigned int scaled_index_8;
  double angle_2;
  double angle_3;
  __int64 scaled_index_9;
  __int64 table_value_4;
  unsigned int scaled_index_10;
  unsigned int float_word_3;
  unsigned int masked_bits_2;
  unsigned int masked_bits_3;
  unsigned int scaled_index_11;
  unsigned int scaled_index_12;
  unsigned int state_word_4;
  __int64 selection_code_4;
  __int64 scaled_index_13;
  unsigned int scaled_index_14;
  double angle_4;
  unsigned int scaled_index_15;
  unsigned int state_word_5;
  unsigned int cached_replay_active;
  unsigned int state_word_6;
  unsigned int scaled_index_16;
  double angle_5;
  unsigned int scaled_index_17;
  unsigned int scaled_index_18;
  unsigned int scaled_index_19;
  __int64 scaled_index_20;
  unsigned int table_value_5;
  __int64 running_total_3;
  __int64 remaining_count;
  unsigned int *state_address_3;
  unsigned int *state_address_4;
  __int64 running_total_4;
  unsigned int scaled_index_21;
  __int64 scaled_index_22;
  __m128i *destination_buffer;
  _DWORD *record_byte_offset;
  __int64 masked_bits_4;
  char *state_address_5;
  char *state_address_6;
  __int64 integer_difference;
  __int64 masked_bits_5;
  char *state_address_7;
  char *state_address_8;
  char *saved_state_address;
  char *saved_state_address_2;
  char *saved_state_address_3;
  __int64 remaining_count_2;
  unsigned __int64 byte_count_2;
  int loaded_word;
  char *saved_state_address_4;
  unsigned __int64 byte_count_3;
  char *saved_state_address_5;
  unsigned __int64 byte_count_4;
  char *saved_state_address_6;
  unsigned __int64 byte_count_5;
  char *saved_state_address_7;
  unsigned __int64 byte_count_6;
  char *saved_state_address_8;
  unsigned __int64 byte_count_7;
       __m128i *source_buffer;
  char *saved_state_address_9;
  unsigned __int64 byte_count_8;
       __m128i *source_buffer_2;
  __int64 cached_integer_difference;
  unsigned __int64 byte_count_9;
  __int64 scaled_index_23;
  __int64 scaled_index_24;
  __int64 unused_local_7;
  __int64 unused_local_8;
  __int64 unused_local_9;
  __int64 unused_local_10;
  unsigned int state_word_7;
  unsigned int state_word_8;
  unsigned int state_word_9;
  char *literal_text;
  unsigned int state_word_10;
  unsigned int state_word_11;
  __int64 unused_local_11;
  __m128i loaded_vector;
       __m128i *state_address_9;
  __m128i vector_result;
  __m128i vector_result_2;
  __m128i vector_result_3;
  __m128i vector_result_4;
  __m128i vector_result_5;
  __m128i saved_vector_result;
  __m128i loaded_vector_2;
  __m128i vector_result_6;
  __m128i vector_result_7;
  __m128i vector_result_8;
  signed int cached_local_player;
  __int64 scaled_index_25;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int128 cached_xmmword_140279700;
  int iteration_count_6;
  unsigned int *record_byte_offset_2;
  __int64 unused_local_12;
  __int64 unused_local_13;
  __int64 unused_local_14;
  __int64 void_2;
  unsigned int state_word_12;
  char *literal_text_2;
  char selection_flag;
  __m128 vector_result_9;
  __m128 vector_result_10;
  unsigned int state_word_13;
  int table_value_6;
       __m128i *state_address_10;
  __m128 loaded_vector_3;
  __m128i loaded_vector_4;
  __m128 vector_result_11;
  __m128 vector_result_12;
  int iteration_count_7;
  int game_frame_result;
  int game_frame_result_2;
  __int64 remaining_count_3;
  int game_frame_result_3;
  int game_frame_result_4;
  __int64 remaining_count_4;
  int game_frame_result_5;
  int game_frame_result_6;
  __int64 remaining_count_5;
  int k;
  int game_frame_result_7;
  int game_frame_result_8;
  __int64 remaining_count_6;
  __int64 unused_local_15;
  __int64 unused_local_16;
  __int64 unused_local_17;
  __int64 unused_local_18;
  int integer_quotient;
  int integer_quotient_2;
  void **buffer_cursor_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140096440[1424];
#define unused_frame_slot_0_2 (*(__int64 (*))(void *)(sr_frame_140096440 + 0)) /* [rsp+0h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_140096440 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140096440 + 40)) /* [rsp+28h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140096440 + 48)) /* [rsp+30h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140096440 + 56)) /* [rsp+38h] */
#define masked_bits_6 (*(unsigned int (*))(void *)(sr_frame_140096440 + 64)) /* [rsp+40h] */
#define vector_result_13 (*(int (*))(void *)(sr_frame_140096440 + 72)) /* [rsp+48h] */
#define integer_sum (*(int (*))(void *)(sr_frame_140096440 + 80)) /* [rsp+50h] */
#define saved_running_total (*(__int64 (*))(void *)(sr_frame_140096440 + 96)) /* [rsp+60h] */
#define state_address_11 (*(unsigned int * (*))(void *)(sr_frame_140096440 + 104)) /* [rsp+68h] */
#define saved_running_total_2 (*(__int64 (*))(void *)(sr_frame_140096440 + 112)) /* [rsp+70h] */
#define state_address_12 (*(unsigned int * (*))(void *)(sr_frame_140096440 + 120)) /* [rsp+78h] */
#define saved_remaining_count (*(__int64 (*))(void *)(sr_frame_140096440 + 128)) /* [rsp+80h] */
#define state_address_13 (*(char * (*))(void *)(sr_frame_140096440 + 136)) /* [rsp+88h] */
#define state_address_14 (*(char * (*))(void *)(sr_frame_140096440 + 144)) /* [rsp+90h] */
#define state_address_15 (*(char * (*))(void *)(sr_frame_140096440 + 152)) /* [rsp+98h] */
#define state_address_16 (*(char * (*))(void *)(sr_frame_140096440 + 160)) /* [rsp+A0h] */
#define state_address_17 (*(char * (*))(void *)(sr_frame_140096440 + 168)) /* [rsp+A8h] */
#define state_address_18 (*(char * (*))(void *)(sr_frame_140096440 + 176)) /* [rsp+B0h] */
#define state_address_19 (*(char * (*))(void *)(sr_frame_140096440 + 184)) /* [rsp+B8h] */
#define state_address_20 (*(char * (*))(void *)(sr_frame_140096440 + 192)) /* [rsp+C0h] */
#define state_address_21 (*(char * (*))(void *)(sr_frame_140096440 + 200)) /* [rsp+C8h] */
#define state_address_22 (*(char * (*))(void *)(sr_frame_140096440 + 208)) /* [rsp+D0h] */
#define state_address_23 (*(char * (*))(void *)(sr_frame_140096440 + 216)) /* [rsp+D8h] */
#define state_address_24 (*(char * (*))(void *)(sr_frame_140096440 + 224)) /* [rsp+E0h] */
#define state_address_25 (*(char * (*))(void *)(sr_frame_140096440 + 232)) /* [rsp+E8h] */
#define state_address_26 (*(char * (*))(void *)(sr_frame_140096440 + 240)) /* [rsp+F0h] */
#define state_address_27 (*(char * (*))(void *)(sr_frame_140096440 + 248)) /* [rsp+F8h] */
#define state_address_28 (*(char * (*))(void *)(sr_frame_140096440 + 256)) /* [rsp+100h] */
#define state_address_29 (*(char * (*))(void *)(sr_frame_140096440 + 264)) /* [rsp+108h] */
#define integer_difference_2 (*(__int64 (*))(void *)(sr_frame_140096440 + 272)) /* [rsp+110h] */
#define state_address_30 (*(char * (*))(void *)(sr_frame_140096440 + 280)) /* [rsp+118h] */
#define cached_integer_difference_2 (*(__int64 (*))(void *)(sr_frame_140096440 + 288)) /* [rsp+120h] */
#define state_address_31 (*(char * (*))(void *)(sr_frame_140096440 + 296)) /* [rsp+128h] */
#define state_address_32 (*(char * (*))(void *)(sr_frame_140096440 + 304)) /* [rsp+130h] */
#define scratch_buffer (*(char (*)[64])(void *)(sr_frame_140096440 + 320)) /* [rsp+140h] */
#define scratch_buffer_2 (*(_BYTE (*)[512])(void *)(sr_frame_140096440 + 384)) /* [rsp+180h] */
#define scratch_buffer_3 (*(_BYTE (*)[512])(void *)(sr_frame_140096440 + 896)) /* [rsp+380h] */
#define unused_frame_slot_1408 (*(__int64 (*))(void *)(sr_frame_140096440 + 1408)) /* [rsp+580h] */

  *(_QWORD *)&g_183F7C544 = 0;
  *(unsigned int *)&g_183F7C54C = 0;
  g_183F7C578 = 0;
  g_183F7C580 = 0;
  *(_OWORD *)&g_183F7C550 = xmmword_140278D30;
  *(unsigned int *)&g_183F7C570 = 1065353216;
  *(_OWORD *)&g_183F7C560 = xmmword_140278D30;
  call_result = sub_140237448(nullptr);
  srand(call_result);
  sr_menu_reset();
  glClearColor(0x1.2121220000000p-5f,0x1.0101020000000p-4f,0x1.5151520000000p-4f,0.0f);
  glClear(16640);
  sr_camera_begin_2d();
  sr_text_draw_recovered("generating",512.0f,160.0f,20.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  SR_DEBUG_STAGE("Startup: load world assets, entity types and audio (0x139E90)");
  sub_140139E90(float_word_2, float_word, 0.0 /* unused native input */);
  SR_DEBUG_LOG("Initial asset loading returned");
  g_175FD13A0 = xmmword_140279810;
  g_175FD13E0 = 1115684864;
  g_175FD13E4 = 1061158912;
  g_175FD13B0 = xmmword_140279710;
  g_175FD13C0 = xmmword_140279490;
  g_175FD13D0 = xmmword_140279490;
  sr_math_mat3_rotate_rows((__int64)&g_175FD13BC, (float *)&g_175FD13BC, sr_export_float_lane_container(1070141403));
  g_16E486868 = 3;
  g_16E486848 = -1;
  g_16E486864 = -1;
  g_16E48686C = 3;
  SR_DEBUG_STAGE("Startup: prepare client world (0x13CDF0)");
  sub_14013CDF0();
  glClearColor(0x1.2121220000000p-5f,0x1.0101020000000p-4f,0x1.5151520000000p-4f,0.0f);
  glClear(16640);
  sr_camera_begin_2d();
  masked_bits_6 = 1065353216;
  unused_written_slot_3 = 1065353216;
  selection_code = 1126170624;
  unused_written_slot_2 = 1065353216;
  unused_written_slot = 1065353216;
  LODWORD(packed_word_bits) = 1;
  sr_text_draw_recovered("connecting",512.0f,160.0f,20.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  SR_DEBUG_STAGE("Startup: connect to master server");
  if ( !(unsigned int)sr_ConnectMasterServer() )
  {
    inet_addr_sr_result = inet_addr_sr("66.226.72.227");
    g_18329C1E0 = ntohl_sr(inet_addr_sr_result);
    LOWORD(g_18329C1E4) = 27592;
  }
  sub_1400E5F10();
  g_1829F8BC0 = sub_140198A50((unsigned int *)&g_1829F8BC8);
  if ( g_1829F8BC0 )
  {
    if ( (unsigned int)sub_140198AF0((__int64)scratch_buffer_2) )
    {
      scratch_buffer_2[63] = 0;
      element_index = 0;
      do
      {
        table_value = scratch_buffer_2[element_index];
        *((_BYTE *)(unsigned int *)&g_151E4594C + element_index++) = table_value;
      }
      while ( table_value );
      HIBYTE(g_151E45968) = 0;
    }
    g_1829F8FDC = sub_1401988C0(4u);
    for ( i = 0; i < (int)g_1829F8FDC; ++i )
      sub_140198820(
        (__int64 *)&dword_140404A6C[132LL * i + 278384989],
        (__int64)&dword_140404A6C[132 * i + 278384992],
        i,
        4u);
  }
  g_1602E12E0 = 0;
  crt_chdir(&g_182A7D340);
  crt_sprintf(scratch_buffer, "client2.csk");
  crt_chdir(&g_182A7D140);
  sub_14008EAD0(1);
  g_18539D3A0 = 1;
  call_result_2 = sub_140198F9B();
  g_183EBFAA0 = 0;
  g_16B165F44 = call_result_2 - 1000;
  g_150F610D4 = 2;
  g_183EBFAA8 = 0;
  sub_140198F9B();
  if ( (int)g_183EBFAA8 <= 1 )
  {
    SR_DEBUG_STAGE("Startup complete: menu ready");
    converted_vector = _mm_cvtsi32_si128((int)(0x43A00000u));
    selection_code_2 = 0x18420000000LL;
    si128 = _mm_load_si128((     __m128i *)&xmmword_1402799B0);
    do
    {
      if ( g_160FC47C0 )
        break;
      g_16B27DF80 = sub_140198F9B();
      input_poll_events_candidate();
      if ( !g_183EBFAA0 || (selection_code_3 = 3, g_18329CC24) )
        selection_code_3 = 2;
      if (!spawn_console_open()) sub_140076770(selection_code_3);
      sub_140198E40();
      if ( !g_183EBFAA0 && g_183F7CB80 )
      {
        g_1AD04B1E0 = g_183F7CB80;
        g_183F7CB80 = 0;
        g_1AD04B1D4 = 0;
        game_connected = 0;
        crt_memset((void *)(uintptr_t)(&game_unknown_1a4d2dce0), 0, 0x2270864u);
        g_16B15FF3C = 1;
        call_result_3 = sub_140198F9B();
        game_unknown_183ebfcc8 = -1;
        g_16B15FF24 = call_result_3 + 200;
        g_183EBFAA4 = 2;
      }
      sub_14006BED0();
      if ( g_160FC4820 )
      {
        state_word = (signed int)(16 * g_160FC47DC) / 9;
        if ( (int)g_160FC47D8 <= state_word )
          state_word = g_160FC47D8;
        g_182A7D55C = state_word;
        g_160FC47E8 = state_word;
        g_182A7D560 = (state_word + 8 * (state_word + 1)) / 16;
        g_160FC47EC = g_182A7D560;
        sub_14013D1B0();
        render_cache_camera_uniforms_candidate();
        g_160FC4820 = 0;
      }
      if ( g_183EBFAA0 )
      {
        if ( g_183EBFAA4 == 3 )
        {
LABEL_31:
          ui_build_options_menu_candidate();
          goto LABEL_55;
        }
        if ( g_183E93540 )
        {
          *(unsigned int *)&menu_x = 1114636288;
          *(unsigned int *)&menu_y = 1134559232;
          g_150F610F0 = 1;
          masked_bits = sub_140070200("chat", (__int64)&g_183E93550, 0x3Cu);
          if ( masked_bits )
          {
            if ( masked_bits == 1 )
            {
              iteration_count = -1;
              do
                ++iteration_count;
              while ( *((_BYTE *)&g_183E93550 + iteration_count) );
              g_183E9354C = iteration_count;
              iteration_count_2 = -1;
              do
                ++iteration_count_2;
              while ( *((_BYTE *)&g_183E93550 + iteration_count_2) );
              byte_count = iteration_count_2 & 0x3F;
              scaled_index = 3597LL * (int)local_player;
              dword_140404A6C[21 * (int)dword_140404A6C[scaled_index + 71856362] + 71856367 + scaled_index] = 1;
              dword_140404A6C[21 * (int)dword_140404A6C[scaled_index + 71856362] + 71856368 + scaled_index] = byte_count;
              crt_memcpy(
                (__m128i *)&dword_140404A6C[21 * (int)dword_140404A6C[scaled_index + 71856362] + 71856372 + scaled_index],
                (     __m128i *)&g_183E93550,
                byte_count);
              dword_140404A6C[21 * (int)dword_140404A6C[scaled_index + 71856362] + 71856369 + scaled_index] = g_183E93544;
              dword_140404A6C[scaled_index + 71856362] = ((unsigned __int8)dword_140404A6C[scaled_index + 71856362] + 1) & 0x3F;
              g_183E93548 = (LOBYTE(g_183E93548) + 1) & 7;
            }
            g_183E93540 = 0;
          }
        }
      }
      else if ( g_183EBFAA4 )
      {
        switch ( g_183EBFAA4 )
        {
          case 1u:
            sub_1400FD300();
            break;
          case 2u:
            sub_1400FC480();
            break;
          case 3u:
            goto LABEL_31;
          case 4u:
            sub_1400FCFF0();
            break;
          case 5u:
            if ( (int)g_151042894 < 16 )
            {
              dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
              dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
            }
            menu_item_width = 1128267776;
            menu_item_height = 1103101952;
            g_150F610F4 = 41;
            drawmenubutton_result = sr_DrawMenuButton("Back");
            state_word_2 = g_183EBFAA4;
            if ( drawmenubutton_result )
              state_word_2 = 0;
            *(unsigned int *)&menu_x = 1107296256;
            g_183EBFAA4 = state_word_2;
            menu_y = menu_y + 64.0;
            sr_DrawMenuButtonSelectable("Female", (int *)&g_151E461E8, 0);
            sr_DrawMenuButtonSelectable("Male", (int *)&g_151E461E8, 1);
            sr_DrawMenuSlider("Head", (int *)&g_151E461EC, 0, 4, 1);
            sr_DrawMenuSlider("Eyes", (int *)&g_151E461FC, 0, 7, 1);
            sr_DrawMenuSlider("Hair", (int *)&g_151E461F8, 0, 8, 1);
            sr_DrawMenuSlider("Hair Color", (int *)&g_151E461F4, 0, 11, 1);
            sr_DrawMenuSlider("Skin", (int *)&g_151E461F0, 0, 5, 1);
            state_word_3 = g_151042894;
            if ( (int)g_151042894 > 0 )
            {
              --g_151042894;
              menu_item_width = dword_140404A6C[2 * (state_word_3 - 1) + 70317963];
              menu_item_height = dword_140404A6C[2 * (state_word_3 - 1) + 70317964];
            }
            break;
          case 6u:
            menu_item_width = 1126170624;
            menu_item_height = 1101004800;
            g_150F610F4 = 41;
            if ( (unsigned int)sr_DrawMenuButton("Back") )
              g_183EBFAA4 = 0;
            break;
          default:
            g_183EBFAA4 = 0;
            goto LABEL_142;
        }
      }
      else
      {
        sub_1400FE1B0();
      }
LABEL_55:
      if ( !g_183EBFAA0 )
        goto LABEL_142;
      gameplay_mouse_camera_state_candidate(local_player, unrecovered_register_value_4, *(double *)&selection_code);
      if ( !g_183EBFAA0 || g_183EBFAA4 == 3 )
        goto LABEL_142;
      iteration_count_3 = 0;
      state_address = &g_182BBB4BC;
      do
      {
        if ( *(state_address - 207) )
        {
          scaled_index_2 = (int)*(state_address - 202);
          if ( (unsigned int)scaled_index_2 <= 0x28 )
          {
            if ( _bittest64(&selection_code_2, scaled_index_2) )
            {
              if ( *state_address == -1 )
              {
                call_result_4 = sub_1400A4560();
                *state_address = call_result_4;
                if ( call_result_4 != -1 )
                {
                  state_address[1] = 0;
                  scaled_index_3 = 3LL * call_result_4;
                  dword_140404A6C[scaled_index_3 + 278520517] = 1;
                  dword_140404A6C[3 * call_result_4 + 278520518] = iteration_count_3;
                  dword_140404A6C[scaled_index_3 + 278520519] = scaled_index_2;
                }
              }
            }
          }
        }
        ++iteration_count_3;
        state_address += 1760;
      }
      while ( iteration_count_3 < 1024 );
      iteration_count_4 = 0;
      state_address_2 = &g_182A7D584;
      buffer_cursor = (int *)&g_183EBF180;
      do
      {
        if ( *(state_address_2 - 1) )
        {
          scaled_index_4 = (int)*state_address_2;
          scaled_index_5 = 1760 * scaled_index_4;
          if ( dword_140404A6C[1760 * scaled_index_4 + 278845893] && (table_value_2 = dword_140404A6C[scaled_index_5 + 278845898], table_value_2 == state_address_2[1]) )
          {
            if ( !dword_140404A6C[scaled_index_5 + 278846101] || table_value_2 == 40 )
            {
              switch ( table_value_2 )
              {
                case 0x27u:
                  sub_14009C680(scaled_index_4, *buffer_cursor);
                  break;
                case 0x28u:
                  sub_14009C040(scaled_index_4, *buffer_cursor);
                  break;
                case 0x22u:
                  sub_14009CD10(scaled_index_4, *buffer_cursor);
                  break;
                case 0x1Du:
                  sub_14009D210(scaled_index_4, *buffer_cursor);
                  break;
              }
              dword_140404A6C[1760 * *state_address_2 + 278846101] = 1;
            }
          }
          else
          {
            if ( dword_140404A6C[scaled_index_5 + 278846100] == iteration_count_4 )
              dword_140404A6C[scaled_index_5 + 278846100] = -1;
            *(state_address_2 - 1) = 0;
          }
        }
        ++iteration_count_4;
        ++buffer_cursor;
        state_address_2 += 3;
      }
      while ( iteration_count_4 < 256 );
      iteration_count_5 = 0;
      running_total = 0;
      running_total_2 = 0;
      do
      {
        if ( dword_140404A6C[running_total_2 + 83194357] )
        {
          if ( dword_140404A6C[running_total_2 + 83200510] && (unsigned int)iteration_count_5 <= 0xFFF )
          {
            sub_14000C4C0(iteration_count_5);
            for ( j = 0; j < 4; ++j )
            {
              if ( running_total_2 <= 28378350 )
              {
                table_value_3 = (int)dword_140404A6C[j + 83200503 + running_total];
                dword_140404A6C[j + 83200503 + running_total] = -1;
                if ( (unsigned int)table_value_3 <= 0x3FF )
                {
                  dword_140404A6C[8969 * table_value_3 + 73991662] = -1;
                  sub_1401941F0(0, table_value_3);
                  sub_1401941F0(3, table_value_3);
                  sub_1401941F0(5, table_value_3);
                }
              }
            }
            dword_140404A6C[running_total_2 + 83200510] = 0;
            if ( iteration_count_5 == 1008 )
              ++g_18402CC00;
          }
          if ( dword_140404A6C[running_total_2 + 83200511] )
            sub_140017910(iteration_count_5);
        }
        ++iteration_count_5;
        running_total_2 += 6930LL;
        running_total += 6930;
      }
      while ( iteration_count_5 < 4096 );
      sub_1400932D0();
      if ( game_unknown_189f0eea0 )
      {
        state_word_4 = g_183F79DE8;
        goto LABEL_112;
      }
      if ( local_player == -1
        || (scaled_index_6 = (int)dword_140404A6C[3597 * local_player + 71856292], (_DWORD)scaled_index_6 == -1) )
      {
        comparison_result = g_183F79DE8 == 0;
        if ( (int)g_183F79DE8 > 0 )
        {
          state_word_4 = --g_183F79DE8;
LABEL_112:
          comparison_result = state_word_4 == 0;
        }
      }
      else
      {
        scaled_index_7 = (int)dword_140404A6C[3597 * local_player + 71856292];
        if ( (int)dword_140404A6C[7166 * scaled_index_6 + 280651318] > 0 )
        {
          g_183F79DE8 = 180;
          goto LABEL_106;
        }
        comparison_result = g_183F79DE8 == 0;
        if ( (int)g_183F79DE8 > 0 )
        {
          g_183F79DE4 = dword_140404A6C[3597 * local_player + 71856292];
          --g_183F79DE8;
LABEL_106:
          *(_QWORD *)&angle = dword_140404A6C[7166 * scaled_index_6 + 280651341];
          *(_OWORD *)&g_183F7C550 = xmmword_140278D30;
          *(_OWORD *)&g_183F7C560 = xmmword_140278D30;
          *(unsigned int *)&g_183F7C570 = 1065353216;
          scaled_index_8 = dword_140404A6C[344 * scaled_index_7 + 284956408];
          *(unsigned int *)&g_183F7C544 = dword_140404A6C[344 * scaled_index_7 + 284956407];
          *(unsigned int *)&g_183F7C54C = dword_140404A6C[344 * scaled_index_7 + 284956409];
          *(unsigned int *)&g_183F7C548 = scaled_index_8;
          sr_math_mat3_rotate_rows((__int64)(unsigned int *)&g_183F7C550, (float *)(unsigned int *)&g_183F7C55C, angle);
          *(_QWORD *)&angle_2 = dword_140404A6C[7166 * dword_140404A6C[3597 * local_player + 71856292]
                                          + 280651342];
          *(float *)&angle_2 = *(float *)&angle_2 * 0.5;
          sr_math_mat3_rotate_rows((__int64)(unsigned int *)&g_183F7C550, (float *)(unsigned int *)&g_183F7C550, angle_2);
          *(_QWORD *)&angle_3 = dword_140404A6C[7166 * dword_140404A6C[3597 * local_player + 71856292]
                                          + 280651342];
          *(float *)&angle_3 = *(float *)&angle_3 * 0.5;
          sr_math_mat3_rotate_rows((__int64)(unsigned int *)&g_183F7C550, (float *)(unsigned int *)&g_183F7C550, angle_3);
          scaled_index_9 = 3597LL * (int)local_player;
          table_value_4 = (int)dword_140404A6C[scaled_index_9 + 71856292];
          g_183F7C574 = 1.0 - *(float *)&dword_140404A6C[scaled_index_9 + 71856332];
          scaled_index_10 = dword_140404A6C[344 * table_value_4 + 284956411];
          float_word_3 = dword_140404A6C[344 * table_value_4 + 284956413];
          masked_bits_2 = dword_140404A6C[344 * table_value_4 + 284956414];
          masked_bits_3 = dword_140404A6C[344 * table_value_4 + 284956415];
          *(unsigned int *)&g_183F7C550 = dword_140404A6C[344 * table_value_4 + 284956410];
          *(unsigned int *)&g_183F7C558 = dword_140404A6C[344 * table_value_4 + 284956412];
          *(unsigned int *)&g_183F7C568 = dword_140404A6C[344 * table_value_4 + 284956416];
          scaled_index_11 = dword_140404A6C[344 * table_value_4 + 284956418];
          *(unsigned int *)&g_183F7C554 = scaled_index_10;
          scaled_index_12 = dword_140404A6C[344 * table_value_4 + 284956417];
          *(unsigned int *)&g_183F7C570 = scaled_index_11;
          *(unsigned int *)&g_183F7C55C = float_word_3;
          *(unsigned int *)&g_183F7C560 = masked_bits_2;
          *(unsigned int *)&g_183F7C564 = masked_bits_3;
          *(unsigned int *)&g_183F7C56C = scaled_index_12;
          if ( g_183EBFD44 )
          {
            float_word_3 = g_183F7C5B0;
            masked_bits_2 = *(unsigned int *)&g_183F7C5B4;
            masked_bits_3 = *(unsigned int *)&g_183F7C5B8;
            *(unsigned int *)&g_183F7C550 = *(unsigned int *)&g_183F7C5A4;
            *(unsigned int *)&g_183F7C558 = *(unsigned int *)&g_183F7C5AC;
            *(unsigned int *)&g_183F7C554 = *(unsigned int *)&g_183F7C5A8;
            *(unsigned int *)&g_183F7C55C = g_183F7C5B0;
            *(unsigned int *)&g_183F7C560 = *(unsigned int *)&g_183F7C5B4;
            *(_QWORD *)&g_183F7C564 = *(_QWORD *)&g_183F7C5B8;
            *(_QWORD *)&g_183F7C56C = *(_QWORD *)&g_183F7C5C0;
          }
          g_183F7C544 = (float)(g_183F7C544
                                                        - (float)(*(float *)&float_word_3 * 0.0625))
                                                + (float)(*(float *)&float_word_3 * 0.0625);
          g_183F7C548 = (float)(g_183F7C548
                                                        - (float)(*(float *)&masked_bits_2 * 0.0625))
                                                + (float)(*(float *)&masked_bits_2 * 0.0625);
          g_183F7C57C = dword_140404A6C[7166 * table_value_4 + 280651681];
          g_183F7C54C = (float)(g_183F7C54C
                                                        - (float)(*(float *)&masked_bits_3 * 0.0625))
                                                + (float)(*(float *)&masked_bits_3 * 0.0625);
          *(unsigned int *)&g_183F7C578 = dword_140404A6C[7166 * table_value_4 + 280651680];
          g_183F7C580 = dword_140404A6C[7166 * table_value_4 + 280651682];
          goto LABEL_139;
        }
      }
      if ( comparison_result || game_unknown_189f0eea0 )
      {
        if ( local_player == -1 && !replay_active || game_unknown_189f0eea0 )
        {
          *(unsigned int *)&g_183F7C570 = 1065353216;
          selection_code_4 = 0;
          if ( game_unknown_189f0eea0 )
            selection_code_4 = 2;
          scaled_index_13 = 7 * selection_code_4;
          scaled_index_14 = dword_140404A6C[7 * selection_code_4 + 284024382];
          *(_QWORD *)&angle_4 = dword_140404A6C[7 * selection_code_4 + 284024384];
          *(unsigned int *)&g_183F7C544 = dword_140404A6C[7 * selection_code_4 + 284024381];
          scaled_index_15 = dword_140404A6C[7 * selection_code_4 + 284024383];
          *(unsigned int *)&g_183F7C548 = scaled_index_14;
          *(unsigned int *)&g_183F7C54C = scaled_index_15;
          *(_OWORD *)&g_183F7C550 = xmmword_140278D30;
          *(_OWORD *)&g_183F7C560 = xmmword_140278D30;
          sr_math_mat3_rotate_rows((__int64)(unsigned int *)&g_183F7C550, (float *)(unsigned int *)&g_183F7C55C, angle_4);
          sr_math_mat3_rotate_rows(
            (__int64)(unsigned int *)&g_183F7C550,
            (float *)(unsigned int *)&g_183F7C550,
            sr_export_float_lane_container((unsigned __int64)dword_140404A6C[scaled_index_13 + 284024385]));
          *(_OWORD *)&g_183F7C574 = xmmword_140278D30;
        }
        else
        {
          *(unsigned int *)&g_183F7C544 = g_183F7C37C;
          *(unsigned int *)&g_183F7C548 = g_183F7C380;
          *(unsigned int *)&g_183F7C54C = g_183F7C384;
          *(unsigned int *)&g_183F7C574 = 1065353216;
          *(_OWORD *)&g_183F7C550 = xmmword_140278D30;
          *(unsigned int *)&g_183F7C570 = 1065353216;
          *(_OWORD *)&g_183F7C560 = xmmword_140278D30;
          sr_math_mat3_rotate_rows(
            (__int64)(unsigned int *)&g_183F7C550,
            (float *)(unsigned int *)&g_183F7C55C,
            sr_export_float_lane_container((unsigned __int64)g_183F7C388));
          sr_math_mat3_rotate_rows(
            (__int64)(unsigned int *)&g_183F7C550,
            (float *)(unsigned int *)&g_183F7C550,
            sr_export_float_lane_container((unsigned __int64)g_183F7C38C));
          state_word_5 = g_183F79DE4;
          g_183F7C578 = 0;
          g_183F7C580 = 0;
          g_183F7C544 = g_183F7C544
                                                + (float)(g_183F7C390
                                                        * g_183F7C568);
          g_183F7C548 = g_183F7C548
                                                + (float)(g_183F7C390
                                                        * g_183F7C56C);
          g_183F7C54C = g_183F7C54C
                                                + (float)(g_183F7C390
                                                        * g_183F7C570);
          if ( g_183F79DE4 != -1 )
          {
            if ( !dword_140404A6C[7166 * g_183F79DE4 + 280651303] )
              state_word_5 = -1;
            g_183F79DE4 = state_word_5;
          }
          cached_replay_active = replay_active;
          if ( !replay_active )
            goto LABEL_303;
          state_word_6 = g_144CBFAC4;
          if ( g_144CBFAC4 != 1 )
          {
            *(unsigned int *)&g_183F7C570 = 1065353216;
            scaled_index_16 = dword_140404A6C[7 * g_144CBFAC4 + 284024382];
            *(_QWORD *)&angle_5 = dword_140404A6C[7 * g_144CBFAC4 + 284024384];
            *(unsigned int *)&g_183F7C544 = dword_140404A6C[7 * g_144CBFAC4 + 284024381];
            scaled_index_17 = dword_140404A6C[7 * g_144CBFAC4 + 284024383];
            *(unsigned int *)&g_183F7C548 = scaled_index_16;
            *(unsigned int *)&g_183F7C54C = scaled_index_17;
            *(_OWORD *)&g_183F7C550 = xmmword_140278D30;
            *(_OWORD *)&g_183F7C560 = xmmword_140278D30;
            sr_math_mat3_rotate_rows((__int64)(unsigned int *)&g_183F7C550, (float *)(unsigned int *)&g_183F7C55C, angle_5);
            sr_math_mat3_rotate_rows(
              (__int64)(unsigned int *)&g_183F7C550,
              (float *)(unsigned int *)&g_183F7C550,
              sr_export_float_lane_container((unsigned __int64)dword_140404A6C[7 * g_144CBFAC4 + 284024385]));
            state_word_6 = g_144CBFAC4;
            state_word_5 = g_183F79DE4;
            cached_replay_active = replay_active;
            g_183F7C574 = 1.0
                                                  - *(float *)&dword_140404A6C[7 * g_144CBFAC4 + 284024386];
          }
          if ( cached_replay_active )
          {
            if ( state_word_6 == 1 )
              goto LABEL_135;
          }
          else
          {
LABEL_303:
            if ( game_type == 3
              || game_type - 5 <= 2
              || game_type == 4 && dword_140404A6C[3597 * local_player + 71856266] )
            {
LABEL_135:
              if ( state_word_5 != -1 )
              {
                *(unsigned int *)&g_183F7C574 = 1065353216;
                *(unsigned int *)&g_183F7C570 = 1065353216;
                scaled_index_18 = dword_140404A6C[344 * state_word_5 + 284956344];
                scaled_index_19 = dword_140404A6C[344 * state_word_5 + 284956345];
                g_183F7C384 = dword_140404A6C[344 * state_word_5 + 284956346];
                *(unsigned int *)&g_183F7C54C = g_183F7C384;
                g_183F7C37C = scaled_index_18;
                g_183F7C380 = scaled_index_19;
                *(unsigned int *)&g_183F7C544 = scaled_index_18;
                *(unsigned int *)&g_183F7C548 = scaled_index_19;
                *(_OWORD *)&g_183F7C550 = xmmword_140278D30;
                *(_OWORD *)&g_183F7C560 = xmmword_140278D30;
                sr_math_mat3_rotate_rows(
                  (__int64)(unsigned int *)&g_183F7C550,
                  (float *)(unsigned int *)&g_183F7C55C,
                  sr_export_float_lane_container((unsigned __int64)g_183F7C388));
                sr_math_mat3_rotate_rows(
                  (__int64)(unsigned int *)&g_183F7C550,
                  (float *)(unsigned int *)&g_183F7C550,
                  sr_export_float_lane_container((unsigned __int64)g_183F7C38C));
                g_183F7C544 = g_183F7C544
                                                      + (float)(g_183F7C390
                                                              * g_183F7C568);
                g_183F7C548 = g_183F7C548
                                                      + (float)(g_183F7C390
                                                              * g_183F7C56C);
                g_183F7C54C = g_183F7C54C
                                                      + (float)(g_183F7C390
                                                              * g_183F7C570);
                if ( g_183F79DE4 == -1 )
                {
                  g_183F7C578 = 0;
                  g_183F7C580 = 0;
                }
                else
                {
                  scaled_index_20 = 7166LL * (int)g_183F79DE4;
                  table_value_5 = dword_140404A6C[scaled_index_20 + 280651339];
                  *(unsigned int *)&g_183F7C578 = dword_140404A6C[scaled_index_20 + 280651338];
                  g_183F7C580 = dword_140404A6C[scaled_index_20 + 280651340];
                  g_183F7C57C = table_value_5;
                }
              }
            }
          }
        }
      }
LABEL_139:
      if ( g_16B165F6C )
      {
        *(_QWORD *)&g_183F7C544 = g_183F7C360;
        *(unsigned int *)&g_183F7C54C = g_183F7C368;
        *(_OWORD *)&g_183F7C550 = xmmword_140278D30;
        *(unsigned int *)&g_183F7C570 = 1065353216;
        *(_OWORD *)&g_183F7C560 = xmmword_140278D30;
        sr_math_mat3_rotate_rows(
          (__int64)(unsigned int *)&g_183F7C550,
          (float *)(unsigned int *)&g_183F7C55C,
          sr_export_float_lane_container((unsigned __int64)g_183F7C36C));
        sr_math_mat3_rotate_rows(
          (__int64)(unsigned int *)&g_183F7C550,
          (float *)(unsigned int *)&g_183F7C550,
          sr_export_float_lane_container((unsigned __int64)g_183F7C370));
        *(_OWORD *)&g_183F7C574 = xmmword_140278D30;
      }
      sub_14011FD00();
LABEL_142:
      g_1A4D2DD04 = 0;
      if ( g_183EBFAA0 && game_connected )
      {
        g_1ABC2D9DC = g_183F79DE4;
        sub_14002DB60(255, local_player);
        running_total_3 = 0;
        saved_running_total_2 = 0;
        remaining_count = 8;
        saved_running_total = 0;
        state_address_3 = &g_1ABC2D8A0;
        saved_remaining_count = 8;
        state_address_4 = &g_189C3BCC4;
        state_address_11 = &g_1ABC2D8A0;
        running_total_4 = 0;
        state_address_12 = &g_189C3BCC4;
        do
        {
          scaled_index_21 = *(state_address_3 - 1);
          *(unsigned int *)((char *)&g_189C1DC80 + running_total_4) = scaled_index_21;
          if ( scaled_index_21 )
          {
            scaled_index_22 = (int)*state_address_3;
            destination_buffer = (__m128i *)((char *)&g_189C3C6C0 + running_total_3);
            *(unsigned int *)((char *)&g_189C1DC90 + running_total_4) = state_address_3[1];
            *(unsigned int *)((char *)&g_189C1DC94 + running_total_4) = state_address_3[2];
            *(unsigned int *)((char *)&g_189C1DC88 + running_total_4) = scaled_index_22;
            scaled_index_22 *= 131604;
            record_byte_offset = (unsigned int *)((char *)&g_189C3BCC0 + running_total_4);
            *(unsigned int *)((char *)&g_189C3BCB8 + running_total_4) = *(unsigned int *)((char *)&g_187BDE86C
                                                                                           + scaled_index_22);
            masked_bits_4 = scaled_index_22 - running_total_3 - (_QWORD)&g_189C3C6C0;
            state_address_5 = (char *)&g_187BDF274 + masked_bits_4;
            state_address_13 = (char *)&g_187BE0274 + masked_bits_4;
            state_address_6 = (char *)&g_187BDFA74 + masked_bits_4;
            state_address_14 = (char *)&g_187BE0A74 + masked_bits_4;
            state_address_15 = (char *)&g_187BE1274 + masked_bits_4;
            state_address_28 = (char *)&g_187BE1A74 + masked_bits_4;
            state_address_30 = (char *)&g_187BE2274 + masked_bits_4;
            integer_difference = ((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_4 + 1203628660;
            masked_bits_5 = scaled_index_22 - running_total_4 - (_QWORD)&g_189C3BCC0;
            cached_integer_difference_2 = integer_difference;
            state_address_16 = (char *)&g_187BDE978 + masked_bits_5;
            state_address_7 = (char *)&g_187BDE974 + masked_bits_5;
            state_address_31 = (char *)&g_187BDE974 + masked_bits_5;
            state_address_8 = (char *)&g_187BDE874 + masked_bits_5;
            state_address_17 = (char *)&g_187BDE878 + masked_bits_5;
            state_address_32 = (char *)&g_187BDE874 + masked_bits_5;
            state_address_18 = (char *)&g_187BDE97C + masked_bits_5;
            state_address_19 = (char *)&g_187BDE87C + masked_bits_5;
            state_address_20 = (char *)&g_187BDE980 + masked_bits_5;
            state_address_21 = (char *)&g_187BDE880 + masked_bits_5;
            state_address_22 = (char *)&g_187BDE984 + masked_bits_5;
            state_address_23 = (char *)&g_187BDE884 + masked_bits_5;
            state_address_24 = (char *)&g_187BDE988 + masked_bits_5;
            state_address_25 = (char *)&g_187BDE888 + masked_bits_5;
            state_address_26 = (char *)&g_187BDE98C + masked_bits_5;
            saved_state_address = state_address_13;
            saved_state_address_2 = state_address_14;
            saved_state_address_3 = state_address_15;
            state_address_27 = (char *)&g_187BDE88C + masked_bits_5;
            state_address_29 = (char *)&g_187BDE990 + masked_bits_5;
            integer_difference_2 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_5 + 1203628176;
            remaining_count_2 = 8;
            do
            {
              byte_count_2 = *(int *)((char *)record_byte_offset + (_QWORD)state_address_7);
              loaded_word = *(_DWORD *)((char *)record_byte_offset + (_QWORD)state_address_8);
              *record_byte_offset = byte_count_2;
              record_byte_offset[64] = loaded_word;
              crt_memcpy(destination_buffer - 128, (__m128i *)((char *)destination_buffer + integer_difference), byte_count_2);
              saved_state_address_4 = state_address_17;
              byte_count_3 = *(int *)((char *)record_byte_offset + (_QWORD)state_address_16);
              record_byte_offset[1] = byte_count_3;
              record_byte_offset[65] = *(_DWORD *)((char *)record_byte_offset + (_QWORD)saved_state_address_4);
              crt_memcpy(destination_buffer, (     __m128i *)((char *)destination_buffer + (_QWORD)state_address_5), byte_count_3);
              saved_state_address_5 = state_address_19;
              byte_count_4 = *(int *)((char *)record_byte_offset + (_QWORD)state_address_18);
              record_byte_offset[2] = byte_count_4;
              record_byte_offset[66] = *(_DWORD *)((char *)record_byte_offset + (_QWORD)saved_state_address_5);
              crt_memcpy(destination_buffer + 128, (     __m128i *)&state_address_6[(_QWORD)destination_buffer], byte_count_4);
              saved_state_address_6 = state_address_21;
              byte_count_5 = *(int *)((char *)record_byte_offset + (_QWORD)state_address_20);
              record_byte_offset[3] = byte_count_5;
              record_byte_offset[67] = *(_DWORD *)((char *)record_byte_offset + (_QWORD)saved_state_address_6);
              crt_memcpy(destination_buffer + 256, (     __m128i *)((char *)destination_buffer + (_QWORD)saved_state_address), byte_count_5);
              saved_state_address_7 = state_address_23;
              byte_count_6 = *(int *)((char *)record_byte_offset + (_QWORD)state_address_22);
              record_byte_offset[4] = byte_count_6;
              record_byte_offset[68] = *(_DWORD *)((char *)record_byte_offset + (_QWORD)saved_state_address_7);
              crt_memcpy(destination_buffer + 384, (     __m128i *)((char *)destination_buffer + (_QWORD)saved_state_address_2), byte_count_6);
              saved_state_address_8 = state_address_25;
              byte_count_7 = *(int *)((char *)record_byte_offset + (_QWORD)state_address_24);
              record_byte_offset[5] = byte_count_7;
              record_byte_offset[69] = *(_DWORD *)((char *)record_byte_offset + (_QWORD)saved_state_address_8);
              crt_memcpy(destination_buffer + 512, (     __m128i *)((char *)destination_buffer + (_QWORD)saved_state_address_3), byte_count_7);
              source_buffer = (     __m128i *)&state_address_28[(_QWORD)destination_buffer];
              saved_state_address_9 = state_address_27;
              byte_count_8 = *(int *)((char *)record_byte_offset + (_QWORD)state_address_26);
              record_byte_offset[6] = byte_count_8;
              record_byte_offset[70] = *(_DWORD *)((char *)record_byte_offset + (_QWORD)saved_state_address_9);
              crt_memcpy(destination_buffer + 640, source_buffer, byte_count_8);
              source_buffer_2 = (     __m128i *)&state_address_30[(_QWORD)destination_buffer];
              cached_integer_difference = integer_difference_2;
              byte_count_9 = *(int *)((char *)record_byte_offset + (_QWORD)state_address_29);
              record_byte_offset[7] = byte_count_9;
              record_byte_offset[71] = *(_DWORD *)((char *)record_byte_offset + cached_integer_difference);
              crt_memcpy(destination_buffer + 768, source_buffer_2, byte_count_9);
              destination_buffer += 1024;
              integer_difference = cached_integer_difference_2;
              record_byte_offset += 8;
              state_address_7 = state_address_31;
              state_address_8 = state_address_32;
              --remaining_count_2;
            }
            while ( remaining_count_2 );
            state_address_4 = state_address_12;
            running_total_4 = saved_running_total_2;
            state_address_3 = state_address_11;
            running_total_3 = saved_running_total;
            remaining_count = saved_remaining_count;
          }
          else
          {
            *(_QWORD *)(state_address_4 - 1) = 0;
            *(_QWORD *)(state_address_4 + 1) = 0;
            *(_QWORD *)(state_address_4 + 3) = 0;
            *(_QWORD *)(state_address_4 + 5) = 0;
            *(_QWORD *)(state_address_4 + 7) = 0;
            *(_QWORD *)(state_address_4 + 9) = 0;
            *(_QWORD *)(state_address_4 + 11) = 0;
            *(_QWORD *)(state_address_4 + 13) = 0;
            *(_QWORD *)(state_address_4 + 15) = 0;
            *(_QWORD *)(state_address_4 + 17) = 0;
            *(_QWORD *)(state_address_4 + 19) = 0;
            *(_QWORD *)(state_address_4 + 21) = 0;
            *(_QWORD *)(state_address_4 + 23) = 0;
            *(_QWORD *)(state_address_4 + 25) = 0;
            *(_QWORD *)(state_address_4 + 27) = 0;
            *(_QWORD *)(state_address_4 + 29) = 0;
            *(_QWORD *)(state_address_4 + 31) = 0;
            *(_QWORD *)(state_address_4 + 33) = 0;
            *(_QWORD *)(state_address_4 + 35) = 0;
            *(_QWORD *)(state_address_4 + 37) = 0;
            *(_QWORD *)(state_address_4 + 39) = 0;
            *(_QWORD *)(state_address_4 + 41) = 0;
            *(_QWORD *)(state_address_4 + 43) = 0;
            *(_QWORD *)(state_address_4 + 45) = 0;
            *(_QWORD *)(state_address_4 + 47) = 0;
            *(_QWORD *)(state_address_4 + 49) = 0;
            *(_QWORD *)(state_address_4 + 51) = 0;
            *(_QWORD *)(state_address_4 + 53) = 0;
            *(_QWORD *)(state_address_4 + 55) = 0;
            *(_QWORD *)(state_address_4 + 57) = 0;
            *(_QWORD *)(state_address_4 + 59) = 0;
            *(_QWORD *)(state_address_4 + 61) = 0;
          }
          running_total_3 += 385604;
          state_address_3 += 10;
          running_total_4 += 385604;
          saved_running_total = running_total_3;
          state_address_4 += 96401;
          state_address_11 = state_address_3;
          --remaining_count;
          saved_running_total_2 = running_total_4;
          saved_remaining_count = remaining_count;
          state_address_12 = state_address_4;
        }
        while ( remaining_count );
      }
      sub_14014FCF0((float *)(unsigned int *)&g_183F7C544, (unsigned int *)&g_183F7C550, (unsigned int *)&g_183F7C578);
      if ( local_player == -1 )
      {
        sub_14009E210(0);
      }
      else
      {
        sub_14009E210(local_player);
        scaled_index_23 = 3597LL * (int)local_player;
        scaled_index_24 = 32901LL * (int)local_player;
        dword_140404A6C[scaled_index_23 + 71856270] = 0;
        if ( !dword_140404A6C[scaled_index_24 + 299853693] )
          dword_140404A6C[scaled_index_23 + 71856270] = 1;
      }
      glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97744 + 283791765]);
      glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[42 * g_183EBE430 + 436582486], 0);
      if ( !g_183EBFAA0 || g_183EBFAA4 == 3 )
      {
        glClearColor(0x1.2121220000000p-5f,0x1.0101020000000p-4f,0x1.5151520000000p-4f,0.0f);
        glClear(0x4000);
      }
      sr_camera_begin_2d();
      state_word_7 = g_183EBFAA0;
      if ( g_183EBFAA0 )
      {
        state_word_8 = g_183EBFAA4;
        if ( g_183EBFAA4 != 3
          && !toggle_183f7aee0
          && game_state
          && local_player != -1 )
        {
          ui_draw_hud_menu_prompt_candidate(local_player);
          state_word_8 = g_183EBFAA4;
          state_word_7 = g_183EBFAA0;
        }
        if ( state_word_7 )
        {
          if ( state_word_8 != 3 && !toggle_183f7aee0 )
          {
            sub_140092D70();
            state_word_8 = g_183EBFAA4;
            state_word_7 = g_183EBFAA0;
          }
          if ( state_word_7 && state_word_8 != 3 && !g_183F7AEE4 )
            sub_140092370();
        }
      }
      sr_camera_begin_2d();
      if ( g_183EBFAA0 && g_183EBFAA4 != 3 && !toggle_183f7aee0 )
        sub_140082420();
      renderer_current_font = 2;
      if ( g_183E93540 )
      {
        if ( local_player == -1 )
        {
          literal_text = "Chat:";
          goto LABEL_185;
        }
        state_word_9 = g_183E93544;
        if ( !g_183E93544 )
        {
          masked_bits_6 = 1065353216;
          unused_written_slot_3 = 1065353216;
          unused_written_slot_2 = 1065353216;
          unused_written_slot = 1065353216;
          packed_word_bits = 0;
          sr_text_draw_recovered("Whisper:", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 16.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          state_word_9 = g_183E93544;
        }
        if ( state_word_9 == 1 )
        {
          masked_bits_6 = 1065353216;
          unused_written_slot_3 = 1065353216;
          unused_written_slot_2 = 1065353216;
          unused_written_slot = 1065353216;
          packed_word_bits = 0;
          sr_text_draw_recovered("Say:", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 16.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          state_word_9 = g_183E93544;
        }
        if ( state_word_9 == 2 )
        {
          literal_text = "Yell:";
LABEL_185:
          masked_bits_6 = 1065353216;
          unused_written_slot_3 = 1065353216;
          unused_written_slot_2 = 1065353216;
          unused_written_slot = 1065353216;
          packed_word_bits = 0;
          sr_text_draw_recovered(literal_text, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 16.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        }
      }
      sr_camera_begin_2d();
      state_word_10 = g_183EBFAA0;
      if ( g_183EBFAA0 )
      {
        state_word_11 = g_183EBFAA4;
        if ( g_183EBFAA4 != 3
          && game_state == 2
          && (effect_183f7aed8) > 0.0 )
        {
          glBindTexture(3553, renderer_white_texture);
          sr_renderer_draw_textured_rect(0.0, 0.0, 0x44800000 /* native XMM2 width 1024.0f */, 576.0, 0, 0, 0, 0, *(unsigned int *)&effect_183f7aed8);
          state_word_11 = g_183EBFAA4;
          state_word_10 = g_183EBFAA0;
        }
        if ( state_word_10 && state_word_11 != 3 && replay_active && game_state == 3 )
        {
          masked_bits_6 = 1065353216;
          unused_written_slot_3 = 1065353216;
          unused_written_slot_2 = 1065353216;
          unused_written_slot = 1065353216;
          LODWORD(packed_word_bits) = 1;
          sr_text_draw_recovered("Replay End", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43700000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        }
      }
      sr_camera_begin_2d();
      if ( g_183EBFAA0
        && g_183EBFAA4 != 3
        && local_player != -1
        && (game_type == 3 || game_type - 5 <= 2)
        && game_state == 2
        && dword_140404A6C[3597 * local_player + 71856292] == -1
        && !toggle_183f7aee0 )
      {
        sub_140088C00();
      }
      if ( toggle_151e461d4 )
      {
        sr_text_draw_recovered("Ping:", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))))), 16.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        vector_result_13 = g_1A6F9E138;
        masked_bits_6 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        packed_word_bits = 2;
        sr_text_draw_recovered("/i", 112.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))))), 16.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)vector_result_13});
        loaded_vector = _mm_load_si128((     __m128i *)&xmmword_140279150);
        state_address_9 = (     __m128i *)&g_1A6F9E154;
        vector_result = _mm_cvtsi64_si128((long long)(0));
        vector_result_2 = _mm_cvtsi64_si128((long long)(0));
        do
        {
          vector_result_3 = _mm_andnot_si128(_mm_cmpeq_epi32(_mm_loadu_si128(state_address_9 - 1), _mm_cvtsi32_si128((int)(0LL))), si128);
          vector_result_4 = _mm_and_si128(_mm_add_epi32(loaded_vector, vector_result), vector_result_3);
          vector_result_5 = _mm_andnot_si128(vector_result_3, vector_result);
          saved_vector_result = vector_result_4;
          loaded_vector_2 = _mm_loadu_si128(state_address_9);
          state_address_9 += 2;
          vector_result = _mm_or_si128(saved_vector_result, vector_result_5);
          vector_result_6 = _mm_andnot_si128(_mm_cmpeq_epi32(_mm_cvtsi32_si128((int)(0LL)), loaded_vector_2), si128);
          vector_result_2 = _mm_or_si128(_mm_and_si128(_mm_add_epi32(loaded_vector, vector_result_2), vector_result_6), _mm_andnot_si128(vector_result_6, vector_result_2));
        }
        while ( (__int64)state_address_9 < (__int64)&g_1A6F9E554 );
        vector_result_7 = _mm_add_epi32(vector_result, vector_result_2);
        vector_result_8 = _mm_add_epi32(vector_result_7, _mm_srli_si128(vector_result_7, 8));
        sr_text_draw_recovered("Packetloss:", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))))), 16.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        vector_result_13 = 100 - (_mm_cvtsi128_si32(_mm_add_epi32(vector_result_8, _mm_srli_si128(vector_result_8, 4))) >> 8);
        masked_bits_6 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        packed_word_bits = 2;
        sr_text_draw_recovered("/i%", 112.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))))), 16.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)vector_result_13});
      }
      vector_result_13 = g_151E461DC;
      masked_bits_6 = *(unsigned int *)&effect_183f7aedc;
      unused_written_slot_3 = 1065353216;
      unused_written_slot_2 = 1065353216;
      unused_written_slot = 1065353216;
      LODWORD(packed_word_bits) = 32;
      sr_text_draw_recovered("Mic:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))))), 12.0, 32, 1.0f, 1.0f, 1.0f, sr_text_bits_float(masked_bits_6), (const uint64[]){(unsigned)vector_result_13});
      cached_local_player = 0;
      if ( (local_player & 0x80000000) == 0 )
        cached_local_player = local_player;
      if ( g_183EBFAA0 || g_183EBFAA4 == 3 )
      {
        scaled_index_25 = 32901LL * cached_local_player;
        if ( !dword_140404A6C[scaled_index_25 + 299853693] || g_183EBFAA4 == 3 )
        {
          glBindTexture(3553, renderer_white_texture);
          comparison_result = dword_140404A6C[scaled_index_25 + 299853693] == 0;
          g_1AD059440 = 2;
          g_1AD059448 = 0;
          g_1AD05944C = 9;
          if ( comparison_result )
            cached_xmmword_140279700 = xmmword_140279700;
          else
            cached_xmmword_140279700 = xmmword_140279690;
          g_1AD299450 = cached_xmmword_140279700;
          iteration_count_6 = 0;
          record_byte_offset_2 = &g_189BFFC70;
          {
            /* 0x1400985BD..0x14009864A (the graph of 0x140081B60, inlined): x = i + 16 (xmm10, from 0x140096866;
               768 when g_183EBFAA4 == 3), y = sample * (1/256) (xmm11, 0x140096878) + 64 (288),
               z = 0 (xmm9, 0x140096492); 0x140098605 reads the short 16 bytes before rdi, 0x140098626 the one at rdi. */
            float sr_x0 = 16.0f, sr_y0 = 64.0f;
            if ( g_183EBFAA4 == 3 )
            {
              sr_x0 = 768.0f;
              sr_y0 = 288.0f;
            }
            do
            {
              sr_renderer_batch_vertex3f((float)iteration_count_6 + sr_x0, (float)*((__int16 *)record_byte_offset_2 - 8) * 0.00390625f + sr_y0, 0.0f);
              ++iteration_count_6;
              sr_renderer_batch_vertex3f((float)iteration_count_6 + sr_x0, (float)*(__int16 *)record_byte_offset_2 * 0.00390625f + sr_y0, 0.0f);
              record_byte_offset_2 += 4;
            }
            while ( iteration_count_6 < 239 );
          }
          sr_renderer_batch_flush(void_2, unrecovered_register_value_5, unrecovered_register_value_6);
          converted_vector = _mm_cvtsi32_si128((int)(0x43A00000u));
        }
        if ( g_183EBFAA0 )
          goto LABEL_248;
      }
      if ( !g_183EBFAA4 )
      {
        sr_text_draw_recovered("Sub Rosa", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        integer_sum = dword_1402B23DC + 97;
        vector_result_13 = dword_1402B231C;
        sr_text_draw_recovered("ALPHA /i/c", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43300000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)vector_result_13,(unsigned)integer_sum});
        masked_bits_6 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        LODWORD(packed_word_bits) = 65;
        sr_text_draw_recovered((char *)off_1402B2810, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43400000u))))), 14.0, 65, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        if ( g_1829F8BC0 )
        {
          masked_bits_6 = 1065353216;
          unused_written_slot_3 = 1065353216;
          unused_written_slot_2 = 1065353216;
          unused_written_slot = 1065353216;
          packed_word_bits = 0;
          sr_text_draw_recovered("Steam", 16.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))))), 12.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        }
      }
      if ( g_183EBFAA4 == 1 )
      {
        sr_text_draw_recovered("Name", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("Ping", 480.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("Players", 560.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("Game Type", 672.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("Version", 784.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("Password", 878.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 12.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){g_16B0A7EE4});
        vector_result_13 = g_16B15FF2C;
        masked_bits_6 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        packed_word_bits = 0;
        sr_text_draw_recovered("/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43CE0000u))))), 12.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)vector_result_13});
      }
      if ( g_183EBFAA4 == 2 )
      {
        state_word_12 = g_16B15FF3C;
        if ( g_16B15FF3C - 1 <= 1 )
        {
          masked_bits_6 = 1065353216;
          unused_written_slot_3 = 1065353216;
          unused_written_slot_2 = 1065353216;
          unused_written_slot = 1065353216;
          LODWORD(packed_word_bits) = 1;
          sr_text_draw_recovered("Connecting", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          state_word_12 = g_16B15FF3C;
        }
        if ( state_word_12 == 4 )
        {
          masked_bits_6 = 1065353216;
          unused_written_slot_3 = 1065353216;
          unused_written_slot_2 = 1065353216;
          unused_written_slot = 1065353216;
          LODWORD(packed_word_bits) = 1;
          sr_text_draw_recovered((char *)&g_16B160340, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        }
      }
      if ( g_183EBFAA4 == 5 )
        sub_1400FBA50();
      if ( g_183EBFAA4 == 6 )
        sub_1400FCC90();
      if ( g_183EBFAA0 )
      {
LABEL_248:
        if ( g_183EBFAA4 != 3 && toggle_151e461d0 )
          sub_140085AA0();
        if ( g_183EBFAA0 )
        {
          selection_flag = 1;
          if ( !g_18329CC24 )
            goto LABEL_254;
        }
        goto LABEL_253;
      }
      if ( g_16B165F40 )
      {
        if ( g_16B165F40 == 1 )
        {
          literal_text_2 = "CS Auth...";
        }
        else
        {
          if ( g_16B165F40 != 2 )
            goto LABEL_253;
          crt_sprintf(scratch_buffer_3, "%03d-%04d", g_1603612F0 / 0x2710, g_1603612F0 % 0x2710);
          literal_text_2 = scratch_buffer_3;
        }
      }
      else if ( g_1829F8BC0 )
      {
        literal_text_2 = "Steam Auth...";
        if ( !g_1829F8FD8 )
          literal_text_2 = "Steam Ticket...";
      }
      else
      {
        literal_text_2 = "Steam Init Failed";
      }
      masked_bits_6 = 1065353216;
      unused_written_slot_3 = 1065353216;
      unused_written_slot_2 = 1065353216;
      unused_written_slot = 1065353216;
      packed_word_bits = 0;
      sr_text_draw_recovered(literal_text_2, 16.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x440C0000u))))), 12.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      if ( g_183EBFAA0 )
        goto LABEL_248;
LABEL_253:
      selection_flag = 0;
LABEL_254:
      sr_DrawMenu(selection_flag);
      spawn_console_draw();
      vector_result_9 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
      vector_result_10 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
      dword_140404A6C[g_16B27DF88 + 179955016] = sub_140198F9B() - g_16B27DF80;
      state_word_13 = g_16B27E08C;
      table_value_6 = dword_140404A6C[g_16B27DF88 + 179955016];
      g_16B27E090 = 0;
      if ( (int)g_16B27E08C < table_value_6 )
        state_word_13 = table_value_6;
      g_16B27E08C = state_word_13;
      g_16B27DF88 = (LOBYTE(g_16B27DF88) + 1) & 0x1F;
      state_address_10 = (     __m128i *)&g_16B27DF9C;
      do
      {
        loaded_vector_3 = _mm_cvtepi32_ps(_mm_loadu_si128(state_address_10 - 1));
        loaded_vector_4 = _mm_loadu_si128(state_address_10);
        state_address_10 += 2;
        vector_result_9 = _mm_add_ps(vector_result_9, loaded_vector_3);
        vector_result_10 = _mm_add_ps(vector_result_10, _mm_cvtepi32_ps(loaded_vector_4));
      }
      while ( (__int64)state_address_10 < (__int64)&g_16B27E01C );
      vector_result_11 = _mm_add_ps(vector_result_9, vector_result_10);
      g_1A4D2DD04 = 0;
      vector_result_12 = _mm_add_ps(_mm_movehl_ps(vector_result_11, vector_result_11), vector_result_11);
      *(float *)&g_16B27E090 = (float)(SR_VEC_LANES(128, vector_result_12, f32)[0] + SR_VEC_READ_LANES(128, _mm_shuffle_ps(vector_result_12, vector_result_12, 245), f32)[0])
                                            * 0.03125;
      if ( g_183EBFAA0 )
      {
        iteration_count_7 = 0;
        if ( game_connected )
        {
          game_frame_result = sr_game_frame(1);
          if ( !game_frame_result )
          {
            do
            {
              if ( iteration_count_7 >= 20 )
                break;
              ++iteration_count_7;
              game_frame_result_2 = sr_game_frame(1);
            }
            while ( !game_frame_result_2 );
          }
          remaining_count_3 = 4;
          do
          {
            sr_game_frame(1);
            --remaining_count_3;
          }
          while ( remaining_count_3 );
        }
        else if ( replay_active )
        {
          game_frame_result_3 = sr_game_frame(1);
          if ( !game_frame_result_3 )
          {
            do
            {
              if ( iteration_count_7 >= 20 )
                break;
              sub_140198FA1(1);
              ++iteration_count_7;
              game_frame_result_4 = sr_game_frame(1);
            }
            while ( !game_frame_result_4 );
          }
          remaining_count_4 = 4;
          if ( BYTE1(g_183F7C968) )
            remaining_count_4 = 16;
          if ( BYTE2(g_183F7C968) )
            remaining_count_4 = 64;
          do
          {
            sr_game_frame(1);
            --remaining_count_4;
          }
          while ( remaining_count_4 );
        }
        else if ( g_151E46204 )
        {
          game_frame_result_7 = sr_game_frame(1);
          if ( !game_frame_result_7 )
          {
            do
            {
              if ( iteration_count_7 >= 20 )
                break;
              ++iteration_count_7;
              game_frame_result_8 = sr_game_frame(1);
            }
            while ( !game_frame_result_8 );
          }
          remaining_count_6 = 4;
          do
          {
            sr_game_frame(1);
            --remaining_count_6;
          }
          while ( remaining_count_6 );
        }
        else
        {
          game_frame_result_5 = sr_game_frame(1);
          if ( !game_frame_result_5 )
          {
            do
            {
              if ( iteration_count_7 >= 20 )
                break;
              sub_140198FA1(1);
              ++iteration_count_7;
              game_frame_result_6 = sr_game_frame(1);
            }
            while ( !game_frame_result_6 );
          }
          remaining_count_5 = 4;
          do
          {
            sr_game_frame(1);
            --remaining_count_5;
          }
          while ( remaining_count_5 );
          for ( k = 0; !g_1A4D2DD04; ++k )
          {
            if ( k >= 50 )
              break;
            sr_game_frame(1);
            sub_140198FA1(1);
          }
        }
      }
      glBindFramebuffer(36160, 0);
      selection_code = 0;
      glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
      glClear(0x4000);
      integer_quotient = 0;
      integer_quotient_2 = 0;
      if ( (int)g_160FC47D8 > (int)g_182A7D55C )
        integer_quotient = (signed int)(g_160FC47D8 - g_182A7D55C) / 2;
      if ( (int)g_160FC47DC > (int)g_182A7D560 )
        integer_quotient_2 = (signed int)(g_160FC47DC - g_182A7D560) / 2;
      glBindFramebuffer(36008, dword_140404A6C[2 * g_183E97744 + 283791765]);
      glBindFramebuffer(36009, 0);
      vector_result_13 = 9728;
      masked_bits_6 = 0x4000;
      unused_written_slot_3 = g_182A7D560 + integer_quotient_2;
      unused_written_slot_2 = g_182A7D55C + integer_quotient;
      unused_written_slot = integer_quotient_2;
      LODWORD(packed_word_bits) = integer_quotient;
      glBlitFramebuffer(0, 0, (int)g_182A7D55C, (int)g_182A7D560,
        integer_quotient, integer_quotient_2, (int)g_182A7D55C + integer_quotient,
        (int)g_182A7D560 + integer_quotient_2, 0x4000u, 9728u);
      glBindFramebuffer(36008, 0);
      sub_140198EF3();
      selection_code_2 = 0x18420000000LL;
    }
    while ( (int)g_183EBFAA8 <= 1 );
  }
  if ( g_183EBFAA0 )
    sub_140095FC0(unrecovered_register_value_2, unrecovered_register_value, unrecovered_register_value_3);
  closesocket_sr((int)g_18539D3C8);
  g_18539D3A8 = 0;
  sub_1401E0F20(*(void **)&g_187BDE460);
  buffer_cursor_2 = (void **)&g_187BDE660;
  do
    sub_1401E2C30(*buffer_cursor_2++);
  while ( (__int64)buffer_cursor_2 < (__int64)&g_187BDE6A0 );
  return; /* native void epilogue; cookie is compiler instrumentation */
}
#undef unused_frame_slot_0_2
#undef packed_word_bits
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef masked_bits_6
#undef vector_result_13
#undef integer_sum
#undef saved_running_total
#undef state_address_11
#undef saved_running_total_2
#undef state_address_12
#undef saved_remaining_count
#undef state_address_13
#undef state_address_14
#undef state_address_15
#undef state_address_16
#undef state_address_17
#undef state_address_18
#undef state_address_19
#undef state_address_20
#undef state_address_21
#undef state_address_22
#undef state_address_23
#undef state_address_24
#undef state_address_25
#undef state_address_26
#undef state_address_27
#undef state_address_28
#undef state_address_29
#undef integer_difference_2
#undef state_address_30
#undef cached_integer_difference_2
#undef state_address_31
#undef state_address_32
#undef scratch_buffer
#undef scratch_buffer_2
#undef scratch_buffer_3
#undef unused_frame_slot_1408
