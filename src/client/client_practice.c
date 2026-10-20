#include "shared_client.h"

//----- (0000000140127910) ----------------------------------------------------
__int64            sr_ResetGame(__int64 a1, __int64 a2, __int64 a3)
{
  int iteration_count;
  __int64 i;
  __int64 file_handle;
  __int64 file_handle_2;
  __int64 cached_game_type;
  __int16 float_word;
  int player;
  __int64 iteration_count_2;
  __int64 masked_bits;
  bool comparison_result;
  unsigned int *record_byte_offset;
  __int64 remaining_count;
  unsigned int *state_address;
  unsigned int cached_game_type_2;
  unsigned int selection_flag;
  unsigned int *state_address_2;
  unsigned int cached_game_connected;
  int integer_sum;
  unsigned int state_word;
  unsigned int *state_address_3;
  unsigned int state_word_2;
  unsigned int *state_address_4;
  unsigned int state_word_3;
  unsigned int state_word_4;
  unsigned int *state_address_5;
  signed int iteration_count_3;
  _DWORD *running_total;
  unsigned int cached_game_unknown_183ebfcc8;
  unsigned int *state_address_6;
  int j;
  int loaded_word;
  int shifted_bits;
  float saved_loaded_word;
  int running_total_2;
  unsigned int *state_address_7;
  unsigned int cached_game_unknown_1a4d2dce4;
  unsigned __int8 rand_result;
  unsigned int masked_bits_2;
  unsigned int *state_address_8;
  unsigned int *state_address_9;
  int cached_game_type_3;
  unsigned int *state_address_10;
  __int64 record_byte_offset_2;
  __int64 scaled_index;
  unsigned int selection_code;
  __int64 scaled_index_2;
  unsigned int selection_code_2;
  unsigned int selection_code_3;
  unsigned int selection_code_4;
  unsigned int selection_code_5;
  unsigned int selection_code_6;
  unsigned int selection_code_7;
  unsigned int selection_code_8;
  unsigned int *state_address_11;
  unsigned int *state_address_12;
  unsigned int *state_address_13;
  unsigned int *state_address_14;
  unsigned int *state_address_15;
  unsigned int *state_address_16;
  unsigned int *state_address_17;
  unsigned int *state_address_18;
  unsigned int *state_address_19;
  unsigned int *state_address_20;
  unsigned int *state_address_21;
  unsigned int *state_address_22;
  __int64 remaining_count_2;
  unsigned int *state_address_23;
  _DWORD *record_byte_offset_3;
  __int64 remaining_count_3;
  _DWORD *running_total_3;
  __int64 remaining_count_4;
  _DWORD *running_total_4;
  __int64 remaining_count_5;
  _QWORD *record_pointer;
  __int64 remaining_count_6;
  unsigned int *running_total_5;
  __int64 remaining_count_7;
  unsigned int *saved_state_address;
  __int64 remaining_count_8;
  unsigned int *record_byte_offset_4;
  float comparison_operand;
  double sine_value;
  unsigned int cosine_value;
  double sine_value_2;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  __int64 iteration_count_4;
  char masked_bits_3;
  __int64 running_total_6;
  unsigned int *state_address_24;
  unsigned __int64 running_total_7;
  unsigned int *buffer_cursor;
  __int64 remaining_count_9;
  __int64 k;
  __int64 table_value;
  __int64 unused_local_5;
  __int64 unused_local_6;
  __int64 unused_local_7;
  __int64 unused_local_8;
  unsigned int call_result;
  unsigned int cached_game_connected_2;
  unsigned int cached_game_type_4;
  signed int createitem_result;
  signed int createitem_result_2;
  signed int createitem_result_3;
  signed int createitem_result_4;
  int element_index;
  unsigned int *record_byte_offset_5;
  int iteration_count_5;
  unsigned int *state_address_25;
  int scaled_index_3;
  double angle;
  unsigned int loaded_word_2;
  signed int masked_bits_4;
  __int64 scaled_index_4;
  unsigned int table_value_2;
  unsigned int *record_byte_offset_6;
  __int64 remaining_count_10;
  __int64 scaled_index_5;
  signed int iteration_count_6;
  unsigned int *state_address_26;
  __int64 scaled_index_6;
  unsigned int cached_game_connected_3;
  unsigned int cached_game_tick;
  __int64 shifted_bits_2;
  __int64 shifted_bits_3;
  __int64 shifted_bits_4;
  __int64 shifted_bits_5;
  __int64 shifted_bits_6;
  __int64 shifted_bits_7;
       char *literal_text;
  __int64 void_2;
  unsigned int *state_address_27;
  char masked_bits_5;
  unsigned int cached_game_connected_4;
  int iteration_count_7;
  __int64 running_total_8;
  unsigned int *state_address_28;
  float selected_scalar;
  int *state_address_29;
  float component_sum;
  float shifted_bits_8;
  __int64 element_index_2;
  char masked_bits_6;
  __int64 element_index_3;
  char masked_bits_7;
  __int64 iteration_count_8;
  char masked_bits_8;
  __int64 element_index_4;
  char masked_bits_9;
  float component_delta;
  int masked_bits_10;
  __int64 saved_masked_bits;
  int comparison_result_2;
  int table_value_3;
  __int64 integer_difference;
  unsigned int table_value_4;
  __int64 scaled_index_7;
  signed int createitem_result_5;
  signed int createitem_result_6;
  signed int createitem_result_7;
  signed int createitem_result_8;
  signed int createitem_result_9;
  signed int createitem_result_10;
  signed int createitem_result_11;
  signed int createitem_result_12;
  float component_delta_2;
  float component_sum_2;
  __int64 createitem_result_13;
  unsigned int *state_address_30;
  unsigned int element_index_5;
  __int64 element_index_6;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
       char *literal_text_2;
  unsigned int *state_address_31;
  char input_byte;
  int createitem_result_14;
  int createitem_result_15;
  int createitem_result_16;
  int createitem_result_17;
  int createitem_result_18;
  int createitem_result_19;
  __int64 createitem_result_20;
  int createitem_result_21;
  __int64 createitem_result_22;
  __int64 createitem_result_23;
  __int64 createitem_result_24;
  __int64 createitem_result_25;
  __int64 createitem_result_26;
  unsigned int state_word_5;
  unsigned int state_word_6;
  __int64 scaled_index_11;
  signed int iteration_count_9;
  unsigned int *state_address_32;
  unsigned int cached_game_tick_2;
  __int64 shifted_bits_9;
  __int64 shifted_bits_10;
  __int64 shifted_bits_11;
  _Alignas(8) unsigned sr_reset_spawn_position[4];
  _Alignas(8) unsigned sr_reset_player_position[3];
  _Alignas(16) unsigned sr_reset_spawn_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140127910[1232];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140127910 + 0)) /* [rsp+8h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140127910 + 32)) /* [rsp+28h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140127910 + 40)) /* [rsp+30h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140127910 + 48)) /* [rsp+38h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140127910 + 56)) /* [rsp+40h] */
#define unused_written_slot_5 (*(int (*))(void *)(sr_frame_140127910 + 64)) /* [rsp+48h] */
#define destination_buffer (*(int (*))(void *)(sr_frame_140127910 + 112)) /* [rsp+78h] */
#define destination_buffer_2 (*(int (*)[3])(void *)(sr_frame_140127910 + 116)) /* [rsp+7Ch] */
#define destination_text (*(char (*)[1024])(void *)(sr_frame_140127910 + 128)) /* [rsp+88h] */
#define unused_frame_slot_1216 (*(__int64 (*))(void *)(sr_frame_140127910 + 1216)) /* [rsp+4C8h] */

  SR_DEBUG_STAGE("ResetGame: clear previous game state and prepare generation");
  SR_DEBUG_LOG("Game mode=%u, local simulation=%u, map=%.31s",
      game_type, game_connected,
      (char *)(unsigned int *)&g_183EBFAB0);
  if ( !replay_active && (int)g_144CBFAA8 > 0 && (int)replay_length > 0 )
  {
    iteration_count = 1;
    crt_sprintf(&(*(__int128 *)(void *)sr_reset_spawn_rotation), "replay%03d.srp", 1);
    for ( i = crt_fopen((char *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), "rb"); i; i = crt_fopen((char *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), "rb") )
    {
      if ( iteration_count >= 1000 )
        break;
      crt_fclose(i);
      crt_sprintf(&(*(__int128 *)(void *)sr_reset_spawn_rotation), "replay%03d.srp", ++iteration_count);
    }
    file_handle = crt_fopen((char *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), "wb");
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
    --g_144CBFAA8;
  }
  cached_game_type = game_type;
  g_1AD04B21C = game_type;
  if ( !game_connected )
    goto LABEL_19;
  if ( game_type == 7 )
  {
    strcpy(
      (char *)(unsigned int *)&g_183EBFAB0,
      (     char *)&dword_140404A6C[16 * (__int64)(int)g_183F7A610 + 284022506]);
    cached_game_type = game_type;
  }
  else
  {
    if ( ((game_type - 4) & 0xFFFFFFFB) != 0 )
    {
      if ( ((game_type - 3) & 0xFFFFFFFC) != 0 || game_type == 4 )
        goto LABEL_19;
      *(unsigned int *)&g_183EBFAB0 = 1853190002;
      float_word = 100;
    }
    else
    {
      *(unsigned int *)&g_183EBFAB0 = *(_DWORD *)"test2";
      float_word = *(_WORD *)"2";
    }
    LOWORD(g_183EBFAB4) = float_word;
  }
LABEL_19:
  player = 0;
  iteration_count_2 = 0;
  while ( 1 )
  {
    masked_bits = *((unsigned __int8 *)(unsigned int *)&g_183EBFAB0 + iteration_count_2++);
    comparison_result = (_BYTE)masked_bits == *((_BYTE *)&dword_140274DA8 + iteration_count_2 - 1);
    if ( (_BYTE)masked_bits != *((_BYTE *)&dword_140274DA8 + iteration_count_2 - 1) )
      break;
    if ( iteration_count_2 == 6 )
    {
      comparison_result = (_BYTE)masked_bits == 0;
      break;
    }
  }
  g_183F7CB60 = comparison_result;
  if ( (_DWORD)cached_game_type == 3 )
    g_183EBFCB0 = g_183F7A5B4 != 0;
  g_183F7CBC0 = xmmword_140279820;
  g_1AD04B214 = -1;
  g_183F7CBD0 = 1113325568;
  g_183F7CBD4 = 1152958464;
  ((void (*)(float,float,float,float))(uintptr_t)*(uint64 *)&glClearColor)(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f);
  glClear(16640);
  sr_camera_begin_2d();
  unused_written_slot_5 = 1065353216;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = 1065353216;
  unused_written_slot_2 = 1065353216;
  unused_written_slot = 1;
  sr_text_draw_recovered("Generating...",512.0f,32.0f,16.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  record_byte_offset = &g_1A6F9E144;
  remaining_count = 16;
  do
  {
    *(_QWORD *)record_byte_offset = 0x100000001LL;
    *((_QWORD *)record_byte_offset + 1) = 0x100000001LL;
    *((_QWORD *)record_byte_offset + 2) = 0x100000001LL;
    record_byte_offset += 16;
    *((_QWORD *)record_byte_offset - 5) = 0x100000001LL;
    *((_QWORD *)record_byte_offset - 4) = 0x100000001LL;
    *((_QWORD *)record_byte_offset - 3) = 0x100000001LL;
    *((_QWORD *)record_byte_offset - 2) = 0x100000001LL;
    *((_QWORD *)record_byte_offset - 1) = 0x100000001LL;
    --remaining_count;
  }
  while ( remaining_count );
  g_15104AE60 = 0;
  state_address = &g_140544AB4;
  do
  {
    if ( *(state_address - 1) && !*state_address )
      *state_address = 1;
    if ( state_address[278719] && !state_address[278720] )
      state_address[278720] = 1;
    if ( state_address[557439] && !state_address[557440] )
      state_address[557440] = 1;
    if ( state_address[836159] && !state_address[836160] )
      state_address[836160] = 1;
    if ( state_address[1114879] && !state_address[1114880] )
      state_address[1114880] = 1;
    if ( state_address[1393599] && !state_address[1393600] )
      state_address[1393600] = 1;
    if ( state_address[1672319] && !state_address[1672320] )
      state_address[1672320] = 1;
    if ( state_address[1951039] && !state_address[1951040] )
      state_address[1951040] = 1;
    if ( state_address[2229759] && !state_address[2229760] )
      state_address[2229760] = 1;
    if ( state_address[2508479] && !state_address[2508480] )
      state_address[2508480] = 1;
    if ( state_address[2787199] && !state_address[2787200] )
      state_address[2787200] = 1;
    if ( state_address[3065919] && !state_address[3065920] )
      state_address[3065920] = 1;
    if ( state_address[3344639] && !state_address[3344640] )
      state_address[3344640] = 1;
    if ( state_address[3623359] && !state_address[3623360] )
      state_address[3623360] = 1;
    if ( state_address[3902079] && !state_address[3902080] )
      state_address[3902080] = 1;
    if ( state_address[4180799] && !state_address[4180800] )
      state_address[4180800] = 1;
    if ( state_address[4459519] && !state_address[4459520] )
      state_address[4459520] = 1;
    if ( state_address[4738239] && !state_address[4738240] )
      state_address[4738240] = 1;
    if ( state_address[5016959] && !state_address[5016960] )
      state_address[5016960] = 1;
    if ( state_address[5295679] && !state_address[5295680] )
      state_address[5295680] = 1;
    if ( state_address[5574399] && !state_address[5574400] )
      state_address[5574400] = 1;
    if ( state_address[5853119] && !state_address[5853120] )
      state_address[5853120] = 1;
    if ( state_address[6131839] && !state_address[6131840] )
      state_address[6131840] = 1;
    if ( state_address[6410559] && !state_address[6410560] )
      state_address[6410560] = 1;
    if ( state_address[6689279] && !state_address[6689280] )
      state_address[6689280] = 1;
    if ( state_address[6967999] && !state_address[6968000] )
      state_address[6968000] = 1;
    if ( state_address[7246719] && !state_address[7246720] )
      state_address[7246720] = 1;
    if ( state_address[7525439] && !state_address[7525440] )
      state_address[7525440] = 1;
    if ( state_address[7804159] && !state_address[7804160] )
      state_address[7804160] = 1;
    if ( state_address[8082879] && !state_address[8082880] )
      state_address[8082880] = 1;
    if ( state_address[8361599] && !state_address[8361600] )
      state_address[8361600] = 1;
    if ( state_address[8640319] && !state_address[8640320] )
      state_address[8640320] = 1;
    state_address += 8919040;
  }
  while ( (__int64)state_address < (__int64)&g_144950AB4 );
  cached_game_type_2 = game_type;
  if ( game_type == 4
    || (int)game_type <= 1
    || (selection_flag = 1, (int)game_type >= 8) )
  {
    selection_flag = 0;
  }
  if ( replay_active )
    selection_flag = 0;
  g_18329CC24 = selection_flag;
  state_address_2 = &g_192E8F66C;
  do
  {
    if ( *(state_address_2 - 3) )
      *(_QWORD *)(state_address_2 - 1) = 0;
    if ( state_address_2[35] )
      *(_QWORD *)(state_address_2 + 37) = 0;
    if ( state_address_2[73] )
      *(_QWORD *)(state_address_2 + 75) = 0;
    if ( state_address_2[111] )
      *(_QWORD *)(state_address_2 + 113) = 0;
    state_address_2 += 152;
  }
  while ( (__int64)state_address_2 < (__int64)&g_192E98E6C );
  cached_game_connected = game_connected;
  g_183E93544 = 1;
  if ( game_connected )
  {
    if ( ((cached_game_type_2 - 2) & 0xFFFFFFFA) == 0 && cached_game_type_2 != 6 )
    {
      sub_14012C480();
      sub_140132B00();
      cached_game_connected = game_connected;
      cached_game_type_2 = game_type;
    }
    if ( cached_game_connected )
    {
      integer_sum = ++g_183EBFCC4;
      if ( cached_game_type_2 == 7 )
      {
        if ( integer_sum <= 5 )
          goto LABEL_157;
        state_word = g_183F7A5FC;
        state_address_3 = &g_151622454;
        *(_QWORD *)&g_183F7AE14 = 0;
        do
        {
          *(state_address_3 - 1514) = state_word;
          *state_address_3 = 0;
          state_address_3[25] = 0;
          state_address_3[50] = 0;
          state_address_3[75] = 0;
          state_address_3[100] = 0;
          state_address_3[125] = 0;
          state_address_3[150] = 0;
          state_address_3 += 3597;
        }
        while ( (__int64)state_address_3 < (__int64)&g_1519A5854 );
        goto LABEL_156;
      }
      if ( cached_game_type_2 == 3 && g_183EBFCB0 == 1 && integer_sum > 5 )
      {
        state_word_2 = g_183F7A5B0;
        state_address_4 = &g_151620CEC;
        g_19021F0C4 = 1120403456;
        g_19021F0CC = 1000;
        g_19021F0C0 = 100;
        g_19021F0DC = 1120403456;
        g_19021F0E4 = 1000;
        g_19021F0D8 = 100;
        g_19021F0F4 = 1120403456;
        g_19021F0FC = 1000;
        g_19021F0F0 = 100;
        do
        {
          *(state_address_4 - 16) = state_word_2;
          *state_address_4 = 0;
          state_address_4[1498] = 0;
          state_address_4[1523] = 0;
          state_address_4[1548] = 0;
          state_address_4[1573] = 0;
          state_address_4[1598] = 0;
          state_address_4[1623] = 0;
          state_address_4[1648] = 0;
          state_address_4 += 3597;
        }
        while ( (__int64)state_address_4 < (__int64)&g_1519A40EC );
LABEL_156:
        g_183EBFCC4 = 1;
      }
    }
  }
LABEL_157:
  game_state = 1;
  *(_QWORD *)&g_183EBFCD4 = 0;
  if ( cached_game_type_2 == 3 )
  {
    g_183EBFCDC = 7200;
    g_183EBFCD4 = 7200;
  }
  else
  {
    if ( cached_game_type_2 == 2 || cached_game_type_2 - 5 <= 2 )
      g_183EBFCD4 = 1800;
    if ( cached_game_type_2 <= 1 )
    {
      g_183EBFCD4 = g_183EBFCE0;
      game_state = 2;
    }
  }
  if ( cached_game_type_2 == 7 )
  {
    state_word_3 = g_183F7A60C;
  }
  else
  {
    state_word_3 = 0;
    if ( cached_game_type_2 == 3 )
      state_word_3 = g_183F7A5BC;
  }
  g_183EBFCE8 = state_word_3;
  state_word_4 = g_183F79DE4;
  if ( !replay_active )
    state_word_4 = -1;
  g_183F7A320 = 0;
  g_183F79DE4 = state_word_4;
  state_address_5 = &g_183EBFDBC;
  *(unsigned int *)&g_183F7A570 = 0;
  *(_QWORD *)&effect_previous_3c = 0;
  g_183F7C588 = -1;
  g_183F79DE8 = 0;
  g_1B4657C80 = 0;
  do
  {
    *(_QWORD *)(state_address_5 - 3) = 0;
    *state_address_5 = 0;
    if ( !game_unknown_183ebfcc8 )
      state_address_5[2] = -1;
    state_address_5[80] = 0;
    iteration_count_3 = 0;
    *((_BYTE *)state_address_5 + 412) = 0;
    state_address_5[359] = 0;
    *((_BYTE *)state_address_5 + 1528) = 0;
    state_address_5[638] = 0;
    *((_BYTE *)state_address_5 + 2644) = 0;
    state_address_5[917] = 0;
    *((_BYTE *)state_address_5 + 3760) = 0;
    state_address_5[1196] = 0;
    *((_BYTE *)state_address_5 + 4876) = 0;
    state_address_5[1475] = 0;
    *((_BYTE *)state_address_5 + 5992) = 0;
    state_address_5[1754] = 0;
    *((_BYTE *)state_address_5 + 7108) = 0;
    state_address_5[2033] = 0;
    *((_BYTE *)state_address_5 + 8224) = 0;
    state_address_5[2312] = 0;
    *((_BYTE *)state_address_5 + 9340) = 0;
    state_address_5[2591] = 0;
    *((_BYTE *)state_address_5 + 10456) = 0;
    state_address_5[2870] = 0;
    *((_BYTE *)state_address_5 + 11572) = 0;
    state_address_5[3149] = 0;
    *((_BYTE *)state_address_5 + 12688) = 0;
    state_address_5[3428] = 0;
    *((_BYTE *)state_address_5 + 13804) = 0;
    state_address_5[3707] = 0;
    *((_BYTE *)state_address_5 + 14920) = 0;
    state_address_5[3986] = 0;
    *((_BYTE *)state_address_5 + 16036) = 0;
    state_address_5[4265] = 0;
    *((_BYTE *)state_address_5 + 17152) = 0;
    if ( (int)state_address_5[4823] > 0 )
    {
      running_total = state_address_5 + 4824;
      do
      {
        *running_total = 0;
        running_total += 13;
        ++iteration_count_3;
      }
      while ( iteration_count_3 < (int)state_address_5[4823] );
    }
    state_address_5[3] = 0;
    state_address_5 += 5873;
  }
  while ( (__int64)state_address_5 < (__int64)&g_183EE2454 );
  cached_game_unknown_183ebfcc8 = game_unknown_183ebfcc8;
  if ( !game_unknown_183ebfcc8 )
  {
    strcpy((char *)&g_183EBFCF0, "Buy Stuff");
    g_183EBFCEC = 10000;
  }
  state_address_6 = &g_19021F0CC;
  for ( j = 0; j < 6; ++j )
  {
    if ( cached_game_unknown_183ebfcc8 )
    {
      loaded_word = *state_address_6;
    }
    else
    {
      *(state_address_6 - 2) = 1120403456;
      loaded_word = 1000;
      *state_address_6 = 1000;
    }
    shifted_bits = (unsigned __int64)(1717986919LL * loaded_word) >> 32;
    saved_loaded_word = (float)loaded_word;
    running_total_2 = 100;
    *(state_address_6 - 3) = 100;
    state_address_6[1] = ((unsigned int)shifted_bits >> 31) + (shifted_bits >> 2);
    state_address_7 = &g_151620CEC;
    *((float *)state_address_6 - 1) = saved_loaded_word * 0.1;
    do
    {
      if ( *(state_address_7 - 2) == j )
      {
        running_total_2 += *state_address_7;
        *(state_address_6 - 3) = running_total_2;
      }
      state_address_7 += 3597;
    }
    while ( (__int64)state_address_7 < (__int64)&g_1519A40EC );
    state_address_6 += 6;
  }
  *(_QWORD *)&g_183F79F84 = 0;
  world_item_29_count = 0;
  g_183F775E0 = 0;
  if ( cached_game_connected )
    cached_game_unknown_1a4d2dce4 = cached_game_unknown_183ebfcc8 + 1;
  else
    cached_game_unknown_1a4d2dce4 = game_unknown_1a4d2dce4;
  game_unknown_183ebfcc8 = cached_game_unknown_1a4d2dce4;
  game_tick = 0;
  game_unknown_1a4d2dce0 = 0;
  g_183E93524 = 0;
  if ( cached_game_connected )
  {
    sub_1401063E0();
    if ( game_connected )
    {
      (game_sun_angle) = (float)(unsigned __int8)rand() * 0.003067961575771484;
      (game_sun_angle) = (float)((unsigned __int8)rand() + 64) * 0.003067961575771484;
      rand_result = rand();
      cached_game_unknown_1a4d2dce4 = game_unknown_183ebfcc8;
      game_day_time = 2376000;
      *(float *)&masked_bits_2 = (float)rand_result * 0.01227184630308594;
      *(unsigned int *)&game_unknown_183ebfd58 = masked_bits_2;
      goto LABEL_197;
    }
    cached_game_unknown_1a4d2dce4 = game_unknown_183ebfcc8;
  }
  else
  {
    g_183E53120 = 0;
  }
  masked_bits_2 = *(unsigned int *)&game_unknown_183ebfd58;
LABEL_197:
  physics_point_count = 0;
  state_address_8 = &g_1B4287C80;
  do
  {
    *state_address_8 = 0;
    state_address_8 += 61;
  }
  while ( (__int64)state_address_8 < (__int64)&g_1B4657C80 );
  state_address_9 = &g_1601172A0;
  do
  {
    *state_address_9 = 0;
    state_address_9 += 202;
  }
  while ( (__int64)state_address_9 < (__int64)&g_1601E12A0 );
  cached_game_type_3 = game_type;
  state_address_10 = &g_151620C60;
  record_byte_offset_2 = 0;
  do
  {
    scaled_index = 3597 * record_byte_offset_2;
    if ( dword_140404A6C[3597 * record_byte_offset_2 + 71859139] )
      dword_140404A6C[scaled_index + 71856253] = 0;
    dword_140404A6C[scaled_index + 71856329] = 0;
    dword_140404A6C[scaled_index + 71856279] = 0;
    dword_140404A6C[scaled_index + 71856290] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71856362] = 0;
    dword_140404A6C[scaled_index + 71856330] = 1;
    dword_140404A6C[scaled_index + 71856292] = -1;
    if ( cached_game_type_3 == 4 )
    {
      if ( !cached_game_unknown_1a4d2dce4 )
        dword_140404A6C[scaled_index + 71856288] = 0;
    }
    else if ( !cached_game_type_3 )
    {
      dword_140404A6C[scaled_index + 71856286] = 0;
    }
    dword_140404A6C[scaled_index + 71856271] = 0;
    if ( cached_game_type_3 == 4 || cached_game_type_3 <= 1 || (selection_code = 2, cached_game_type_3 >= 8) )
      selection_code = 0;
    dword_140404A6C[scaled_index + 71856342] = selection_code;
    scaled_index_2 = 32901 * record_byte_offset_2;
    dword_140404A6C[scaled_index + 71856345] = -1;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71856339] = 0;
    dword_140404A6C[scaled_index + 71856301] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71856282] = 0;
    dword_140404A6C[32901 * record_byte_offset_2 + 299853693] = 1;
    dword_140404A6C[scaled_index + 71856284] = 0;
    dword_140404A6C[scaled_index + 71859663] = -1;
    if ( dword_140404A6C[scaled_index + 71862736] )
      dword_140404A6C[scaled_index + 71859850] = 0;
    dword_140404A6C[scaled_index + 71859926] = 0;
    dword_140404A6C[scaled_index + 71859876] = 0;
    dword_140404A6C[scaled_index + 71859887] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71859959] = 0;
    dword_140404A6C[scaled_index + 71859927] = 1;
    dword_140404A6C[scaled_index + 71859889] = -1;
    if ( cached_game_type_3 == 4 )
    {
      if ( !cached_game_unknown_1a4d2dce4 )
        dword_140404A6C[scaled_index + 71859885] = 0;
    }
    else if ( !cached_game_type_3 )
    {
      dword_140404A6C[scaled_index + 71859883] = 0;
    }
    dword_140404A6C[scaled_index + 71859868] = 0;
    if ( cached_game_type_3 == 4 || cached_game_type_3 <= 1 || (selection_code_2 = 2, cached_game_type_3 >= 8) )
      selection_code_2 = 0;
    dword_140404A6C[scaled_index + 71859939] = selection_code_2;
    dword_140404A6C[scaled_index + 71859942] = -1;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71859936] = 0;
    dword_140404A6C[scaled_index + 71859898] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71859879] = 0;
    dword_140404A6C[scaled_index + 71859881] = 0;
    dword_140404A6C[scaled_index + 71863260] = -1;
    dword_140404A6C[scaled_index_2 + 299886594] = 1;
    if ( dword_140404A6C[scaled_index + 71866333] )
      dword_140404A6C[scaled_index + 71863447] = 0;
    dword_140404A6C[scaled_index + 71863523] = 0;
    dword_140404A6C[scaled_index + 71863473] = 0;
    dword_140404A6C[scaled_index + 71863484] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71863556] = 0;
    dword_140404A6C[scaled_index + 71863524] = 1;
    dword_140404A6C[scaled_index + 71863486] = -1;
    if ( cached_game_type_3 == 4 )
    {
      if ( !cached_game_unknown_1a4d2dce4 )
        dword_140404A6C[scaled_index + 71863482] = 0;
    }
    else if ( !cached_game_type_3 )
    {
      dword_140404A6C[scaled_index + 71863480] = 0;
    }
    dword_140404A6C[scaled_index + 71863465] = 0;
    if ( cached_game_type_3 == 4 || cached_game_type_3 <= 1 || (selection_code_3 = 2, cached_game_type_3 >= 8) )
      selection_code_3 = 0;
    dword_140404A6C[scaled_index + 71863536] = selection_code_3;
    dword_140404A6C[scaled_index + 71863539] = -1;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71863533] = 0;
    dword_140404A6C[scaled_index + 71863495] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71863476] = 0;
    dword_140404A6C[scaled_index + 71863478] = 0;
    dword_140404A6C[scaled_index + 71866857] = -1;
    dword_140404A6C[scaled_index_2 + 299919495] = 1;
    if ( dword_140404A6C[scaled_index + 71869930] )
      dword_140404A6C[scaled_index + 71867044] = 0;
    dword_140404A6C[scaled_index + 71867120] = 0;
    dword_140404A6C[scaled_index + 71867070] = 0;
    dword_140404A6C[scaled_index + 71867081] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71867153] = 0;
    dword_140404A6C[scaled_index + 71867121] = 1;
    dword_140404A6C[scaled_index + 71867083] = -1;
    if ( cached_game_type_3 == 4 )
    {
      if ( !cached_game_unknown_1a4d2dce4 )
        dword_140404A6C[scaled_index + 71867079] = 0;
    }
    else if ( !cached_game_type_3 )
    {
      dword_140404A6C[scaled_index + 71867077] = 0;
    }
    dword_140404A6C[scaled_index + 71867062] = 0;
    if ( cached_game_type_3 == 4 || cached_game_type_3 <= 1 || (selection_code_4 = 2, cached_game_type_3 >= 8) )
      selection_code_4 = 0;
    dword_140404A6C[scaled_index + 71867133] = selection_code_4;
    dword_140404A6C[scaled_index + 71867136] = -1;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71867130] = 0;
    dword_140404A6C[scaled_index + 71867092] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71867073] = 0;
    dword_140404A6C[scaled_index + 71867075] = 0;
    dword_140404A6C[scaled_index + 71870454] = -1;
    dword_140404A6C[scaled_index_2 + 299952396] = 1;
    if ( dword_140404A6C[scaled_index + 71873527] )
      dword_140404A6C[scaled_index + 71870641] = 0;
    dword_140404A6C[scaled_index + 71870717] = 0;
    dword_140404A6C[scaled_index + 71870667] = 0;
    dword_140404A6C[scaled_index + 71870678] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71870750] = 0;
    dword_140404A6C[scaled_index + 71870718] = 1;
    dword_140404A6C[scaled_index + 71870680] = -1;
    if ( cached_game_type_3 == 4 )
    {
      if ( !cached_game_unknown_1a4d2dce4 )
        dword_140404A6C[scaled_index + 71870676] = 0;
    }
    else if ( !cached_game_type_3 )
    {
      dword_140404A6C[scaled_index + 71870674] = 0;
    }
    dword_140404A6C[scaled_index + 71870659] = 0;
    if ( cached_game_type_3 == 4 || cached_game_type_3 <= 1 || (selection_code_5 = 2, cached_game_type_3 >= 8) )
      selection_code_5 = 0;
    dword_140404A6C[scaled_index + 71870730] = selection_code_5;
    dword_140404A6C[scaled_index + 71870733] = -1;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71870727] = 0;
    dword_140404A6C[scaled_index + 71870689] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71870670] = 0;
    dword_140404A6C[scaled_index + 71870672] = 0;
    dword_140404A6C[scaled_index + 71874051] = -1;
    dword_140404A6C[scaled_index_2 + 299985297] = 1;
    if ( dword_140404A6C[scaled_index + 71877124] )
      dword_140404A6C[scaled_index + 71874238] = 0;
    dword_140404A6C[scaled_index + 71874314] = 0;
    dword_140404A6C[scaled_index + 71874264] = 0;
    dword_140404A6C[scaled_index + 71874275] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71874347] = 0;
    dword_140404A6C[scaled_index + 71874315] = 1;
    dword_140404A6C[scaled_index + 71874277] = -1;
    if ( cached_game_type_3 == 4 )
    {
      if ( !cached_game_unknown_1a4d2dce4 )
        dword_140404A6C[scaled_index + 71874273] = 0;
    }
    else if ( !cached_game_type_3 )
    {
      dword_140404A6C[scaled_index + 71874271] = 0;
    }
    dword_140404A6C[scaled_index + 71874256] = 0;
    if ( cached_game_type_3 == 4 || cached_game_type_3 <= 1 || (selection_code_6 = 2, cached_game_type_3 >= 8) )
      selection_code_6 = 0;
    dword_140404A6C[scaled_index + 71874327] = selection_code_6;
    dword_140404A6C[scaled_index + 71874330] = -1;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71874324] = 0;
    dword_140404A6C[scaled_index + 71874286] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71874267] = 0;
    dword_140404A6C[scaled_index + 71874269] = 0;
    dword_140404A6C[scaled_index + 71877648] = -1;
    dword_140404A6C[scaled_index_2 + 300018198] = 1;
    if ( dword_140404A6C[scaled_index + 71880721] )
      dword_140404A6C[scaled_index + 71877835] = 0;
    dword_140404A6C[scaled_index + 71877911] = 0;
    dword_140404A6C[scaled_index + 71877861] = 0;
    dword_140404A6C[scaled_index + 71877872] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71877944] = 0;
    dword_140404A6C[scaled_index + 71877912] = 1;
    dword_140404A6C[scaled_index + 71877874] = -1;
    if ( cached_game_type_3 == 4 )
    {
      if ( !cached_game_unknown_1a4d2dce4 )
        dword_140404A6C[scaled_index + 71877870] = 0;
    }
    else if ( !cached_game_type_3 )
    {
      dword_140404A6C[scaled_index + 71877868] = 0;
    }
    dword_140404A6C[scaled_index + 71877853] = 0;
    if ( cached_game_type_3 == 4 || cached_game_type_3 <= 1 || (selection_code_7 = 2, cached_game_type_3 >= 8) )
      selection_code_7 = 0;
    dword_140404A6C[scaled_index + 71877924] = selection_code_7;
    dword_140404A6C[scaled_index + 71877927] = -1;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71877921] = 0;
    dword_140404A6C[scaled_index + 71877883] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71877864] = 0;
    dword_140404A6C[scaled_index + 71877866] = 0;
    dword_140404A6C[scaled_index + 71881245] = -1;
    dword_140404A6C[scaled_index_2 + 300051099] = 1;
    if ( dword_140404A6C[scaled_index + 71884318] )
      dword_140404A6C[scaled_index + 71881432] = 0;
    dword_140404A6C[scaled_index + 71881508] = 0;
    dword_140404A6C[scaled_index + 71881458] = 0;
    dword_140404A6C[scaled_index + 71881469] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71881541] = 0;
    dword_140404A6C[scaled_index + 71881509] = 1;
    dword_140404A6C[scaled_index + 71881471] = -1;
    if ( cached_game_type_3 == 4 )
    {
      if ( !cached_game_unknown_1a4d2dce4 )
        dword_140404A6C[scaled_index + 71881467] = 0;
    }
    else if ( !cached_game_type_3 )
    {
      dword_140404A6C[scaled_index + 71881465] = 0;
    }
    dword_140404A6C[scaled_index + 71881450] = 0;
    if ( cached_game_type_3 == 4 || cached_game_type_3 <= 1 || (selection_code_8 = 2, cached_game_type_3 >= 8) )
      selection_code_8 = 0;
    dword_140404A6C[scaled_index + 71881521] = selection_code_8;
    record_byte_offset_2 += 8;
    dword_140404A6C[scaled_index + 71881524] = -1;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71881518] = 0;
    dword_140404A6C[scaled_index + 71881480] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 71881461] = 0;
    dword_140404A6C[scaled_index + 71881463] = 0;
    dword_140404A6C[scaled_index + 71884842] = -1;
    dword_140404A6C[scaled_index_2 + 300084000] = 1;
  }
  while ( record_byte_offset_2 < 256 );
  state_address_11 = &g_1449816E0;
  do
  {
    *state_address_11 = 0;
    state_address_11 += 47;
  }
  while ( (__int64)state_address_11 < (__int64)&g_144AF96E0 );
  state_address_12 = &g_18329E308;
  do
  {
    *state_address_12 = 0;
    state_address_12 += 7166;
  }
  while ( (__int64)state_address_12 < (__int64)&g_18399DB08 );
  state_address_13 = &g_15F2DE364;
  do
  {
    *(state_address_13 - 5209) = 0;
    *state_address_13 = -1;
    state_address_13 += 5210;
  }
  while ( (__int64)state_address_13 < (__int64)&g_15FD0B364 );
  state_address_14 = &g_182BBB180;
  do
  {
    *state_address_14 = 0;
    state_address_14 += 1760;
  }
  while ( (__int64)state_address_14 < (__int64)&g_18329B180 );
  state_address_15 = &g_182A7D580;
  do
  {
    *state_address_15 = 0;
    state_address_15 += 3;
  }
  while ( (__int64)state_address_15 < (__int64)&g_182A7E180 );
  g_1A796F380 = 0;
  g_1A796F3D4 = 0;
  g_1A796F428 = 0;
  g_1A796F47C = 0;
  g_1A796F4D0 = 0;
  g_1A796F524 = 0;
  g_1A796F578 = 0;
  g_1A796F5CC = 0;
  g_1A796F620 = 0;
  g_1A796F674 = 0;
  g_1A796F6C8 = 0;
  g_1A796F71C = 0;
  g_1A796F770 = 0;
  g_1A796F7C4 = 0;
  g_1A796F818 = 0;
  g_1A796F86C = 0;
  g_1A796F8C0 = 0;
  g_1A796F914 = 0;
  g_1A796F968 = 0;
  g_1A796F9BC = 0;
  g_1A796FA10 = 0;
  g_1A796FA64 = 0;
  g_1A796FAB8 = 0;
  g_1A796FB0C = 0;
  g_1A796FB60 = 0;
  g_1A796FBB4 = 0;
  g_1A796FC08 = 0;
  g_1A796FC5C = 0;
  g_1A796FCB0 = 0;
  g_1A796FD04 = 0;
  g_1A796FD58 = 0;
  g_1A796FDAC = 0;
  g_1A796FE00 = 0;
  g_1A796FE54 = 0;
  g_1A796FEA8 = 0;
  g_1A796FEFC = 0;
  g_1A796FF50 = 0;
  g_1A796FFA4 = 0;
  g_1A796FFF8 = 0;
  g_1A797004C = 0;
  g_1A79700A0 = 0;
  g_1A79700F4 = 0;
  g_1A7970148 = 0;
  g_1A797019C = 0;
  g_1A79701F0 = 0;
  g_1A7970244 = 0;
  g_1A7970298 = 0;
  g_1A79702EC = 0;
  g_1A7970340 = 0;
  g_1A7970394 = 0;
  g_1A79703E8 = 0;
  g_1A797043C = 0;
  g_1A7970490 = 0;
  g_1A79704E4 = 0;
  g_1A7970538 = 0;
  g_1A797058C = 0;
  g_1A79705E0 = 0;
  g_1A7970634 = 0;
  g_1A7970688 = 0;
  g_1A79706DC = 0;
  g_1A7970730 = 0;
  g_1A7970784 = 0;
  g_1A79707D8 = 0;
  g_1A797082C = 0;
  g_1A7970880 = 0;
  g_1A79708D4 = 0;
  g_1A7970928 = 0;
  g_1A797097C = 0;
  g_1A79709D0 = 0;
  g_1A7970A24 = 0;
  g_1A7970A78 = 0;
  g_1A7970ACC = 0;
  g_1A7970B20 = 0;
  g_1A7970B74 = 0;
  g_1A7970BC8 = 0;
  g_1A7970C1C = 0;
  g_1A7970C70 = 0;
  g_1A7970CC4 = 0;
  g_1A7970D18 = 0;
  g_1A7970D6C = 0;
  g_1A7970DC0 = 0;
  g_1A7970E14 = 0;
  state_address_16 = &g_181FEEBC0;
  g_1A7970E68 = 0;
  state_address_17 = &g_15FD16268;
  g_1A7970EBC = 0;
  g_1A7970F10 = 0;
  g_1A7970F64 = 0;
  g_1A7970FB8 = 0;
  g_1A797100C = 0;
  g_1A7971060 = 0;
  g_1A79710B4 = 0;
  g_1A7971108 = 0;
  g_1A797115C = 0;
  g_1A79711B0 = 0;
  g_1A7971204 = 0;
  g_1A7971258 = 0;
  g_1A79712AC = 0;
  g_1A7971300 = 0;
  g_1A7971354 = 0;
  g_1A79713A8 = 0;
  g_1A79713FC = 0;
  g_1A7971450 = 0;
  g_1A79714A4 = 0;
  g_1A79714F8 = 0;
  g_1A797154C = 0;
  g_1A79715A0 = 0;
  g_1A79715F4 = 0;
  g_1A7971648 = 0;
  g_1A797169C = 0;
  g_1A79716F0 = 0;
  g_1A7971744 = 0;
  g_1A7971798 = 0;
  g_1A79717EC = 0;
  g_1A7971840 = 0;
  g_1A7971894 = 0;
  g_1A79718E8 = 0;
  g_1A797193C = 0;
  g_1A7971990 = 0;
  g_1A79719E4 = 0;
  g_1A7971A38 = 0;
  g_1A7971A8C = 0;
  g_1A7971AE0 = 0;
  g_1A7971B34 = 0;
  g_1A7971B88 = 0;
  g_1A7971BDC = 0;
  g_1A7971C30 = 0;
  g_1A7971C84 = 0;
  g_1A7971CD8 = 0;
  g_1A7971D2C = 0;
  do
  {
    *state_address_17 = -1;
    state_address_17 += 383;
    *state_address_16 = 0;
    state_address_16 += 2570;
  }
  while ( (__int64)state_address_17 < (__int64)&g_15FE95268 );
  state_address_18 = &g_1816DEB80;
  do
  {
    *state_address_18 = 0;
    state_address_18 += 290;
  }
  while ( (__int64)state_address_18 < (__int64)&g_181FEEB80 );
  g_1816DEB80 = 1;
  state_address_19 = &g_17CE4B61C;
  world_street_count = 0;
  do
  {
    *(state_address_19 - 9) = 0;
    *state_address_19 = 0;
    state_address_19[9] = 0;
    state_address_19[18] = 0;
    state_address_19[27] = 0;
    state_address_19[36] = 0;
    state_address_19[45] = 0;
    state_address_19[54] = 0;
    state_address_19[63] = 0;
    state_address_19[72] = 0;
    state_address_19[81] = 0;
    state_address_19[90] = 0;
    state_address_19[99] = 0;
    state_address_19[108] = 0;
    state_address_19[117] = 0;
    state_address_19[126] = 0;
    state_address_19[135] = 0;
    state_address_19[144] = 0;
    state_address_19[153] = 0;
    state_address_19[162] = 0;
    state_address_19[171] = 0;
    state_address_19[180] = 0;
    state_address_19[189] = 0;
    state_address_19[198] = 0;
    state_address_19[207] = 0;
    state_address_19[216] = 0;
    state_address_19[225] = 0;
    state_address_19[234] = 0;
    state_address_19[243] = 0;
    state_address_19[252] = 0;
    state_address_19[261] = 0;
    state_address_19[270] = 0;
    state_address_19[279] = 0;
    state_address_19[288] = 0;
    state_address_19[297] = 0;
    state_address_19[306] = 0;
    state_address_19[315] = 0;
    state_address_19[324] = 0;
    state_address_19[333] = 0;
    state_address_19[342] = 0;
    state_address_19[351] = 0;
    state_address_19[360] = 0;
    state_address_19[369] = 0;
    state_address_19[378] = 0;
    state_address_19[387] = 0;
    state_address_19[396] = 0;
    state_address_19[405] = 0;
    state_address_19[414] = 0;
    state_address_19[423] = 0;
    state_address_19[432] = 0;
    state_address_19[441] = 0;
    state_address_19[450] = 0;
    state_address_19[459] = 0;
    state_address_19[468] = 0;
    state_address_19[477] = 0;
    state_address_19[486] = 0;
    state_address_19[495] = 0;
    state_address_19[504] = 0;
    state_address_19[513] = 0;
    state_address_19[522] = 0;
    state_address_19[531] = 0;
    state_address_19[540] = 0;
    state_address_19[549] = 0;
    state_address_19[558] = 0;
    state_address_19 += 576;
  }
  while ( (__int64)state_address_19 < (__int64)&g_17CE6F61C );
  world_unknown_15fd16260_count = 0;
  crt_memset((void *)(uintptr_t)(&g_15FE95280), 0, 0x1000u);
  crt_memset((void *)(uintptr_t)(&g_18399DAE0), 0, 0x400u);
  crt_memset((void *)(uintptr_t)(&g_18329B1E0), 0, 0x1000u);
  state_address_20 = &g_16B2AAF20;
  do
  {
    *state_address_20 = 0;
    state_address_20 += 34653;
  }
  while ( (__int64)state_address_20 < (__int64)(unsigned int *)&g_16D482320 );
  g_16B2AAF1C = 0;
  state_address_21 = &g_1857BD744;
  world_bullet_count = 0;
  world_effect_count = 0;
  world_particle_count = 0;
  blood_stain_count = 0;
  effect_mark_count = 0;
  *(_QWORD *)&world_particle_resting_0_count = 0;
  *(_QWORD *)&world_particle_resting_1_count = 0;
  g_1A70AE564 = 0;
  g_1A70AE560 = 0;
  world_event_count = 0;
  g_189C1DC60 = 0;
  do
  {
    *(_QWORD *)(state_address_21 - 1) = 0;
    state_address_21 += 39;
  }
  while ( (__int64)state_address_21 < (__int64)&g_185A2D744 );
  state_address_22 = &g_1A8E3DA7C;
  remaining_count_2 = 257;
  state_address_23 = &g_1A8E477E0;
  do
  {
    *(state_address_22 - 4) = 0;
    record_byte_offset_3 = state_address_22 + 32599;
    *state_address_22 = 0;
    remaining_count_3 = 1024;
    state_address_22[10] = 0;
    state_address_22[20] = 0;
    state_address_22[30] = 0;
    state_address_22[40] = 0;
    state_address_22[50] = 0;
    state_address_22[60] = 0;
    state_address_22[70] = 0;
    *(state_address_22 - 2) = -1;
    do
    {
      *record_byte_offset_3 = 0;
      record_byte_offset_3 += 4;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
    *(_QWORD *)(state_address_22 + 36695) = 0;
    running_total_3 = state_address_22 + 1105;
    state_address_22[36697] = 0;
    remaining_count_4 = 256;
    state_address_22[46938] = 0;
    state_address_22[46940] = 0;
    do
    {
      running_total_3[2] = 0;
      *running_total_3 = 0;
      running_total_3 += 3;
      --remaining_count_4;
    }
    while ( remaining_count_4 );
    running_total_4 = state_address_22 + 82;
    remaining_count_5 = 512;
    do
    {
      *running_total_4 = 0;
      running_total_4 += 2;
      --remaining_count_5;
    }
    while ( remaining_count_5 );
    record_pointer = state_address_22 + 1874;
    remaining_count_6 = 1024;
    do
    {
      *record_pointer = 0;
      *((_DWORD *)record_pointer - 1) = 0;
      record_pointer[1] = 0;
      record_pointer = (_QWORD *)((char *)record_pointer + 20);
      --remaining_count_6;
    }
    while ( remaining_count_6 );
    running_total_5 = state_address_22 + 6995;
    remaining_count_7 = 1024;
    do
    {
      *(_QWORD *)(running_total_5 - 1) = 0;
      *(running_total_5 - 2) = 0;
      running_total_5 += 3;
      --remaining_count_7;
    }
    while ( remaining_count_7 );
    saved_state_address = state_address_23;
    remaining_count_8 = 256;
    do
    {
      saved_state_address += 88;
      *((_OWORD *)saved_state_address - 24) = 0;
      *((_OWORD *)saved_state_address - 23) = 0;
      *((_OWORD *)saved_state_address - 22) = 0;
      *((_OWORD *)saved_state_address - 21) = 0;
      *((_OWORD *)saved_state_address - 20) = 0;
      *((_OWORD *)saved_state_address - 19) = 0;
      *((_OWORD *)saved_state_address - 18) = 0;
      *((_OWORD *)saved_state_address - 17) = 0;
      *((_OWORD *)saved_state_address - 16) = 0;
      *((_OWORD *)saved_state_address - 15) = 0;
      *((_OWORD *)saved_state_address - 14) = 0;
      *((_OWORD *)saved_state_address - 13) = 0;
      *((_OWORD *)saved_state_address - 12) = 0;
      *((_OWORD *)saved_state_address - 11) = 0;
      *((_OWORD *)saved_state_address - 10) = 0;
      *((_OWORD *)saved_state_address - 9) = 0;
      *((_OWORD *)saved_state_address - 8) = 0;
      *((_OWORD *)saved_state_address - 7) = 0;
      *((_OWORD *)saved_state_address - 6) = 0;
      *((_OWORD *)saved_state_address - 5) = 0;
      *((_OWORD *)saved_state_address - 4) = 0;
      *((_OWORD *)saved_state_address - 3) = 0;
      --remaining_count_8;
    }
    while ( remaining_count_8 );
    state_address_23 += 47224;
    state_address_22 += 47224;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  crt_memset((void *)(uintptr_t)(&g_160FC4960), 0, 0x4DC0000u);
  crt_memset((void *)(uintptr_t)(&g_1ABC2D840), 0, 0x2E1E0u);
  record_byte_offset_4 = &g_1A4D2DD14;
  g_1ABC2D894 = -1;
  do
  {
    *record_byte_offset_4 = 0;
    record_byte_offset_4 += 4;
  }
  while ( (__int64)record_byte_offset_4 < (__int64)&g_1A4D31D14 );
  *(_QWORD *)&g_1A4D31D14 = 0;
  g_1A4D3BD1C = 0;
  g_144CBFAAC = 0;
  if ( !replay_active )
    *(_QWORD *)&replay_position = 0;
  comparison_operand = (game_sun_angle);
  g_189C1DC80 = 0;
  g_189C7BEC4 = 0;
  g_189CDA108 = 0;
  g_189D3834C = 0;
  g_189D96590 = 0;
  g_189DF47D4 = 0;
  g_189E52A18 = 0;
  g_189EB0C5C = 0;
  sine_value = sin((game_sun_angle));
  *(float *)&cosine_value = cos(*(float *)&masked_bits_2) * sine_value;
  *(unsigned int *)&g_18417DE78 = cosine_value;
  *(unsigned int *)&g_18417DE7C = cosf(comparison_operand);
  sine_value_2 = sin(*(float *)&masked_bits_2);
  g_18417DE84 = 0;
  *(float *)&sine_value_2 = sine_value_2 * sine_value;
  *(unsigned int *)&g_18417DE80 = LODWORD(sine_value_2);
  ((void (*)(float,float,float,float))(uintptr_t)*(uint64 *)&glClearColor)(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f);
  glClear(16640);
  sr_camera_begin_2d();
  unused_written_slot_5 = 1065353216;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = 1065353216;
  unused_written_slot_2 = 1065353216;
  unused_written_slot = 1;
  SR_DEBUG_STAGE("Generating level: prepare map geometry");
  sr_text_draw_recovered("Generating level...",512.0f,32.0f,16.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  if ( !strcmp_sr((     char *)&g_175FD1404, (     char *)(unsigned int *)&g_183EBFAB0) )
  {
    if ( g_175FD1400 )
    {
      running_total_6 = 0;
      state_address_24 = &g_154164248;
      running_total_7 = 0;
      do
      {
        if ( *(state_address_24 - 3074) )
        {
          buffer_cursor = state_address_24;
          remaining_count_9 = 512;
          do
          {
            if ( (*buffer_cursor & 0xE0000000) == 0x80000000 )
              *buffer_cursor &= 0xFF00FFFF;
            buffer_cursor[2560] = 0;
            ++buffer_cursor;
            --remaining_count_9;
          }
          while ( remaining_count_9 );
          for ( k = 0; k < 4; ++k )
          {
            if ( running_total_7 <= 0x6C413B8 )
            {
              table_value = (int)dword_140404A6C[k + 83200503 + running_total_6];
              dword_140404A6C[k + 83200503 + running_total_6] = -1;
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
        running_total_7 += 27720LL;
        state_address_24 += 6930;
        running_total_6 += 6930;
      }
      while ( (__int64)state_address_24 < (__int64)&g_15ADAC248 );
      state_address_10 = &g_151620C60;
      goto LABEL_348;
    }
  }
  else
  {
    g_175FD1400 = 0;
  }
  SR_DEBUG_STAGE("Generating level: load/build world data (0x056980)");
  sub_140056980();
  SR_DEBUG_LOG("World data generation returned");
  iteration_count_4 = 0;
  do
  {
    masked_bits_3 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + iteration_count_4);
    *((_BYTE *)&g_175FD1404 + iteration_count_4++) = masked_bits_3;
  }
  while ( masked_bits_3 );
  SR_DEBUG_STAGE("Generating level: prepare world render resources (0x124320)");
  sub_140124320();
  SR_DEBUG_LOG("World render resource setup returned");
LABEL_348:
  SR_DEBUG_STAGE("Generating level: finalize render state (0x14C390)");
  sub_14014C390();
  ((void (*)(float,float,float,float))(uintptr_t)*(uint64 *)&glClearColor)(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f);
  glClear(16640);
  sr_camera_begin_2d();
  unused_written_slot_5 = 1065353216;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = 1065353216;
  unused_written_slot_2 = 1065353216;
  unused_written_slot = 1;
  SR_DEBUG_STAGE("Generating game: spawn humans, vehicles, items and joints");
  sr_text_draw_recovered("Generating game...",512.0f,32.0f,16.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  call_result = sub_140237448(nullptr);
  srand(call_result);
  if ( game_unknown_183ebfcc8 == 1 )
  {
    *(float *)&g_183F7C360 = (float)(int)g_16B2A222C;
    *(float *)&g_183F7C364 = (float)(int)g_16B2A2230;
    *(float *)&g_183F7C368 = (float)(int)g_16B2A2234;
  }
  if ( !replay_active )
  {
    g_183F7C38C = 0;
    *(float *)&g_183F7C37C = g_16B2A2EC8 + 32.0;
    *(float *)&g_183F7C380 = g_16B2A2ECC + 16.0;
    g_183F7C384 = g_16B2A2ED0;
    g_183F7C388 = -1077342245;
  }
  cached_game_connected_2 = game_connected;
  /* Debugging extension: a single local human on the shared test arena.
     Native city Practice spawners below populate distant items and trains. */
  if (cached_game_connected_2 && !game_type &&
      !strcmp((char *)(unsigned int *)&g_183EBFAB0, "debugtest"))
  {
    float sr_test_position[3] = {1024.0f, 25.25f, 1024.0f};
    float sr_test_rotation[9] = {1,0,0, 0,1,0, 0,0,1};
    g_151620C60 = 1;
    g_151620CE4 = 0;
    int sr_test_human = sub_140053840(sr_test_position, sr_test_rotation, 0);
    { extern void practice_remember_spawn(const float *position);
      practice_remember_spawn(sr_test_position); }
    if (sr_test_human < 0 || sr_test_human >= 256)
    {
      g_151620C60 = 0;
      SR_DEBUG_LOG("Test arena: player creation failed (%d)", sr_test_human);
      return 0;
    }
    g_151620CFC = sr_test_human;
    g_151624420 = 1;
    g_151624424 = 1;
    g_151624428 = 1;
    dword_140404A6C[7166 * sr_test_human + 280658445] = 1;
    dword_140404A6C[7166 * sr_test_human + 280658446] = 1;
    dword_140404A6C[7166 * sr_test_human + 280658447] = 1;
    dword_140404A6C[7166 * sr_test_human + 280658449] = g_151624434;
    memcpy((unsigned int *)&g_16B2A2EC8, sr_test_position, sizeof(sr_test_position));
    /* Use the native Practice camera formula (spawn + 32 X, + 16 Y, spawn Z,
       yaw -pi/2) instead of the earlier hardcoded eye height. The old 27.0 put
       the eye 3 m above a 24 m floor and let physics drop it to 24.7, i.e. on
       the floor plane, which is not a view the original ever produced. */
    *(float *)&g_183F7C37C = sr_test_position[0] + 32.0f;
    *(float *)&g_183F7C380 = sr_test_position[1] + 16.0f;
    *(float *)&g_183F7C384 = sr_test_position[2];
    *(float *)&g_183F7C388 = -1.5707964f;
    *(float *)&g_183F7C38C = 0.0f;
    g_183F7C574 = 1.0f;
    cached_game_connected_4 = cached_game_connected_2;
    SR_DEBUG_LOG("Test arena: one player at (1024, 25.25, 1024), solid floor y=24, camera (1056, 41.25, 1024)");
    goto SR_TEST_ARENA_FINALIZE;
  }
  if ( game_connected )
  {
    cached_game_type_4 = game_type;
    if ( game_type == 1 )
    {
      (*(int64_t *)(void *)sr_reset_spawn_position) = 0x41D00000430A0000LL;
      LODWORD((*(int64_t *)(void *)(sr_reset_spawn_position+2))) = 1124728832;
      g_151620C60 = 1;
      g_151620CE4 = 0;
      (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
      sr_reset_spawn_rotation[8] = 1065353216;
      (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
      sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_reset_spawn_rotation), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation) + 3, sr_export_float_lane_container(1078530011));
      g_151620CFC = sub_140053840((float *)&(*(int64_t *)(void *)sr_reset_spawn_position), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), 0);
      (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
      g_151620DB8 = 0;
      sr_reset_spawn_rotation[8] = 1065353216;
      dword_140404A6C[7166 * g_151620CFC + 280651341] = 1078530011;
      createitem_result = sr_CreateItem(3, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sr_item_transfer(createitem_result, -1, g_151620CFC, 0);
      createitem_result_2 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sr_item_transfer(createitem_result_2, -1, g_151620CFC, 1);
      createitem_result_3 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sr_item_transfer(createitem_result_3, -1, g_151620CFC, 3);
      createitem_result_4 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sr_item_transfer(createitem_result_4, -1, g_151620CFC, 3);
      LODWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1124859904;
      sr_reset_spawn_rotation[8] = 1065353216;
      (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
      sr_CreateVehicle(0, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (unsigned int *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), 1u);
      cached_game_connected_2 = game_connected;
      cached_game_type_4 = game_type;
    }
    if ( cached_game_connected_2 && cached_game_type_4 == 4 )
    {
      element_index = 0;
      if ( (int)g_16B2A2EE0 > 0 )
      {
        record_byte_offset_5 = &g_16B2A2EE4;
        do
        {
          record_byte_offset_5[2] = sr_CreateVehicle(
                      *record_byte_offset_5,
                      (float *)&dword_140404A6C[16 * (__int64)element_index + 179992866],
                      nullptr,
                      &dword_140404A6C[16 * (__int64)element_index + 179992869],
                      record_byte_offset_5[1]);
          record_byte_offset_5 += 16;
          ++element_index;
        }
        while ( element_index < (int)g_16B2A2EE0 );
      }
      iteration_count_5 = 0;
      state_address_25 = &g_151624484;
      do
      {
        if ( *(state_address_25 - 3593) )
        {
          if ( *(state_address_25 - 3) )
          {
            scaled_index_3 = *(state_address_25 - 1);
            *(_QWORD *)&angle = state_address_25[1];
            LODWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = *(state_address_25 - 2);
            loaded_word_2 = *state_address_25;
            HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = scaled_index_3;
            LODWORD((*(int64_t *)(void *)(sr_reset_spawn_position+2))) = loaded_word_2;
            (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
            sr_reset_spawn_rotation[8] = 1065353216;
            (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
            sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_reset_spawn_rotation), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation) + 3, angle);
            masked_bits_4 = sub_140053840((float *)&(*(int64_t *)(void *)sr_reset_spawn_position), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), iteration_count_5);
            *(state_address_25 - 3554) = masked_bits_4;
            if ( masked_bits_4 != -1 )
            {
              scaled_index_4 = 7166LL * masked_bits_4;
              dword_140404A6C[scaled_index_4 + 280651306] = *(state_address_25 - 3578);
              dword_140404A6C[scaled_index_4 + 280651341] = state_address_25[1];
              sub_140117020(iteration_count_5);
              table_value_2 = state_address_25[2];
              if ( table_value_2 != -1 && (int)g_16B2A2EE0 > 0 )
              {
                record_byte_offset_6 = &g_16B2A2EEC;
                remaining_count_10 = g_16B2A2EE0;
                do
                {
                  if ( table_value_2 == record_byte_offset_6[1] )
                  {
                    scaled_index_5 = 7166LL * (int)*(state_address_25 - 3554);
                    dword_140404A6C[scaled_index_5 + 280651313] = *record_byte_offset_6;
                    dword_140404A6C[scaled_index_5 + 280651314] = state_address_25[3];
                  }
                  record_byte_offset_6 += 16;
                  --remaining_count_10;
                }
                while ( remaining_count_10 );
              }
            }
          }
        }
        ++iteration_count_5;
        state_address_25 += 3597;
      }
      while ( iteration_count_5 < 256 );
      iteration_count_6 = 0;
      state_address_26 = &g_183EBFDC4;
      do
      {
        scaled_index_6 = (int)*state_address_26;
        if ( (_DWORD)scaled_index_6 != -1 )
        {
          *state_address_26 = -1;
          if ( dword_140404A6C[3597 * scaled_index_6 + 71856253] )
            sub_1400F45A0(iteration_count_6, scaled_index_6);
        }
        ++iteration_count_6;
        state_address_26 += 5873;
      }
      while ( iteration_count_6 < 6 );
      cached_game_connected_3 = game_connected;
      cached_game_tick = game_tick;
      if ( game_connected )
      {
        shifted_bits_2 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_2) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_2) = cached_game_tick;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_2) = 0;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_2) = 1;
      }
      g_183EBFDC0 = 1;
      if ( cached_game_connected_3 )
      {
        shifted_bits_3 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_3) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_3) = cached_game_tick;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_3) = 1;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_3) = 1;
      }
      g_183EC5984 = 1;
      if ( cached_game_connected_3 )
      {
        shifted_bits_4 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_4) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_4) = cached_game_tick;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_4) = 2;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_4) = 1;
      }
      g_183ECB548 = 1;
      if ( cached_game_connected_3 )
      {
        shifted_bits_5 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_5) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_5) = cached_game_tick;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_5) = 3;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_5) = 1;
      }
      g_183ED110C = 1;
      if ( cached_game_connected_3 )
      {
        shifted_bits_6 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_6) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_6) = cached_game_tick;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_6) = 4;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_6) = 1;
      }
      g_183ED6CD0 = 1;
      if ( cached_game_connected_3 )
      {
        shifted_bits_7 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_7) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_7) = cached_game_tick;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_7) = 5;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_7) = 1;
      }
      g_183EDC894 = 1;
    }
  }
  LODWORD((*(int64_t *)(void *)(sr_reset_spawn_position+2))) = 0;
  literal_text = "test2";
  void_2 = 0;
  state_address_27 = (unsigned int *)&g_183EBFAB0;
  while ( 1 )
  {
    masked_bits_5 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + void_2++);
    if ( masked_bits_5 != sr_mem_140274da0[void_2 - 1] )
      break;
    if ( void_2 == 6 )
    {
      sr_world_build_train_route();
      g_16B2A2ED0 = g_15B1AC860;
      g_16B2A2EC8 = g_15B1AC858 + 16.0;
      g_16B2A2ECC = g_15B1AC85C + 1.0;
      break;
    }
  }
  sr_world_build_street_meshes(void_2, (__int64)state_address_27, (__int64)literal_text);
  cached_game_connected_4 = game_connected;
  if ( game_connected )
  {
    if ( !game_type )
    {
      iteration_count_7 = 0;
      running_total_8 = 0;
      do
      {
        HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1104150528;
        state_address_28 = &g_15162440C;
        *(float *)&(*(int64_t *)(void *)sr_reset_spawn_position) = (float)((float)iteration_count_7 + (float)iteration_count_7) + 280.0;
        if ( iteration_count_7 )
        {
          HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1115160576;
          selected_scalar = 62.0;
          state_address_29 = (int *)&state_address_28[running_total_8];
          *(state_address_29 - 3563) = 1;
          component_sum = (float)((float)(iteration_count_7 & 3) + (float)(iteration_count_7 & 3)) + 1520.0;
          shifted_bits_8 = (float)((float)((unsigned int)iteration_count_7 >> 2) + (float)((unsigned int)iteration_count_7 >> 2)) + 1508.0;
          *(float *)&(*(int64_t *)(void *)sr_reset_spawn_position) = shifted_bits_8;
          *(state_address_29 - 669) = 0;
          state_address_29[5] = 2;
          *state_address_29 = iteration_count_7 & 1;
          strcpy((char *)state_address_29 - 14248, "test");
          state_address_29[6] = 1;
        }
        else
        {
          component_sum = 1528.0;
          state_address_29 = (int *)&state_address_28[running_total_8];
          selected_scalar = 62.0;
          (*(int64_t *)(void *)sr_reset_spawn_position) = 0x4278000044BC8000LL;
          shifted_bits_8 = 1508.0;
          *(state_address_29 - 3563) = 1;
        }
        element_index_2 = 0;
        *(state_address_29 - 3530) = iteration_count_7 != 0;
        while ( 1 )
        {
          masked_bits_6 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + element_index_2++);
          if ( masked_bits_6 != sr_mem_140274da0[element_index_2 - 1] )
            break;
          if ( element_index_2 == 6 )
          {
            selected_scalar = 25.25;
            HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1103757312;
            component_sum = (float)((float)(iteration_count_7 & 3) + (float)(iteration_count_7 & 3)) + 1120.0;
            shifted_bits_8 = (float)((float)((unsigned int)iteration_count_7 >> 2) + (float)((unsigned int)iteration_count_7 >> 2)) + 1088.0;
            *(float *)&(*(int64_t *)(void *)sr_reset_spawn_position) = shifted_bits_8;
            break;
          }
        }
        element_index_3 = 0;
        while ( 1 )
        {
          masked_bits_7 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + element_index_3++);
          if ( masked_bits_7 != sr_mem_140274dfc[element_index_3 - 1] )
            break;
          if ( element_index_3 == 5 )
          {
            HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1104150528;
            selected_scalar = 26.0;
            break;
          }
        }
        iteration_count_8 = 0;
        while ( 1 )
        {
          masked_bits_8 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + iteration_count_8++);
          if ( masked_bits_8 != *((_BYTE *)&dword_140274E04 + iteration_count_8 - 1) )
            break;
          if ( iteration_count_8 == 7 )
          {
            HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1104150528;
            selected_scalar = 26.0;
            break;
          }
        }
        element_index_4 = 0;
        while ( 1 )
        {
          masked_bits_9 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + element_index_4++);
          if ( masked_bits_9 != sr_mem_140274950[element_index_4 - 1] )
            break;
          if ( element_index_4 == 5 )
          {
            HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1104150528;
            selected_scalar = 26.0;
            break;
          }
        }
        (*(int64_t *)(void *)sr_reset_player_position) = (*(int64_t *)(void *)sr_reset_spawn_position);
        component_delta = component_sum - 48.0;
        *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta;
        (*(float *)(void *)(sr_reset_player_position+2)) = component_delta;
        if ( iteration_count_7 )
          *(float *)&(*(int64_t *)(void *)sr_reset_player_position) = shifted_bits_8 + 32.0;
        sr_reset_spawn_rotation[8] = 1065353216;
        (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
        (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
        masked_bits_10 = sub_140053840((float *)&(*(int64_t *)(void *)sr_reset_player_position), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), iteration_count_7);
        if (iteration_count_7 == 0) {
          extern void practice_remember_spawn(const float *position);
          practice_remember_spawn((const float *)sr_reset_player_position);
        }
        saved_masked_bits = masked_bits_10;
        *(state_address_29 - 3524) = masked_bits_10;
        state_address_29[5] = 1;
        if ( iteration_count_7 )
          state_address_29[5] = 1;
        state_address_29[6] = 1;
        comparison_result_2 = 0;
        table_value_3 = 1;
        if ( iteration_count_7 != 1 )
          comparison_result_2 = (iteration_count_7 != 0) + 1;
        state_address_29[7] = comparison_result_2;
        if ( iteration_count_7 )
        {
          integer_difference = (iteration_count_7 - 1) % 6;
          table_value_3 = dword_1402B2980[integer_difference];
          comparison_result_2 = dword_1402B29A0[integer_difference];
          state_address_29[6] = table_value_3;
          state_address_29[7] = comparison_result_2;
        }
        table_value_4 = state_address_29[10];
        scaled_index_7 = 7166 * saved_masked_bits;
        dword_140404A6C[scaled_index_7 + 280658445] = 1;
        dword_140404A6C[scaled_index_7 + 280658446] = table_value_3;
        dword_140404A6C[scaled_index_7 + 280658447] = comparison_result_2;
        dword_140404A6C[scaled_index_7 + 280658449] = table_value_4;
        if ( iteration_count_7 )
        {
          state_word_5 = g_18329E52C;
          state_word_6 = g_18329E530;
          *((_QWORD *)state_address_29 - 335) = 0;
          *(state_address_29 - 668) = 1133281280;
          dword_140404A6C[running_total_8 + 71859149] = 1104150528;
          dword_140404A6C[8 * *(state_address_29 - 669) + 71859150 + running_total_8] = 1124073472;
          scaled_index_11 = running_total_8 * 4 + 32LL * *(state_address_29 - 669);
          *(unsigned int *)((char *)&g_15162399C + scaled_index_11) = state_word_5;
          *(unsigned int *)((char *)&g_1516239A4 + scaled_index_11) = g_18329E534;
          *(unsigned int *)((char *)&g_1516239A0 + scaled_index_11) = state_word_6;
          ++*(state_address_29 - 669);
        }
        else
        {
          sr_reset_spawn_rotation[8] = 1065353216;
          (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
          (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
          createitem_result_5 = sr_CreateItem(3, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sr_item_transfer(createitem_result_5, -1, *(state_address_29 - 3524), 0);
          createitem_result_6 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sr_item_transfer(createitem_result_6, -1, *(state_address_29 - 3524), 1);
          createitem_result_7 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sr_item_transfer(createitem_result_7, -1, *(state_address_29 - 3524), 3);
          createitem_result_8 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sr_item_transfer(createitem_result_8, -1, *(state_address_29 - 3524), 3);
          createitem_result_9 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sr_item_transfer(createitem_result_9, -1, *(state_address_29 - 3524), 4);
          createitem_result_10 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sr_item_transfer(createitem_result_10, -1, *(state_address_29 - 3524), 4);
          createitem_result_11 = sr_CreateItem(13, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sr_item_transfer(createitem_result_11, -1, *(state_address_29 - 3524), 5);
          createitem_result_12 = sr_CreateItem(13, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sr_item_transfer(createitem_result_12, -1, *(state_address_29 - 3524), 5);
          sr_reset_spawn_rotation[8] = 1065353216;
          component_delta_2 = component_delta - 2.0;
          (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
          *(float *)&(*(int64_t *)(void *)sr_reset_spawn_position) = shifted_bits_8 + 10.0;
          (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta - 2.0;
          sub_140061950();
          component_sum_2 = shifted_bits_8 + 2.0;
          g_16A7DBD90 = sr_CreateVehicle(6, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (unsigned int *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), 3u);
          *(float *)&(*(int64_t *)(void *)sr_reset_spawn_position) = component_sum_2;
          sr_CreateItem(41, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)sr_reset_player_position) = component_sum_2;
          (*(float *)(void *)(sr_reset_player_position+2)) = component_delta - 2.0;
          *((float *)&(*(int64_t *)(void *)sr_reset_player_position) + 1) = selected_scalar + 0.25;
          createitem_result_13 = (int)sr_CreateItem(39, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          state_address_30 = &g_181FEEBC0;
          element_index_5 = 0;
          element_index_6 = 0;
          while ( *state_address_30 )
          {
            ++element_index_5;
            ++element_index_6;
            state_address_30 += 2570;
            if ( (__int64)state_address_30 >= (__int64)&g_1829F8BC0 )
            {
              element_index_5 = -1;
              element_index_6 = -1;
              goto LABEL_430;
            }
          }
          if ( element_index_5 != -1 )
          {
            crt_memset((void *)(uintptr_t)(&dword_140404A6C[2570 * element_index_5 + 275753045]), 0, 0x2828u);
            scaled_index_8 = 2570 * element_index_6;
            dword_140404A6C[scaled_index_8 + 275753045] = 1;
            dword_140404A6C[scaled_index_8 + 275753046] = 20000;
          }
LABEL_430:
          scaled_index_9 = 2570 * element_index_6;
          dword_140404A6C[1760 * createitem_result_13 + 278846098] = element_index_5;
          scaled_index_10 = (int)dword_140404A6C[2570 * element_index_6 + 275754072];
          if ( (int)scaled_index_10 < 256 )
          {
            dword_140404A6C[6 * scaled_index_10 + 275754073 + scaled_index_9] = 0;
            literal_text_2 = "SNAKE.EXE";
            state_address_31 = &dword_140404A6C[2570 * element_index_5 + 275754074 + 6 * dword_140404A6C[scaled_index_9 + 275754072]];
            do
            {
              input_byte = *literal_text_2++;
              *(_BYTE *)state_address_31 = input_byte;
              state_address_31 = (unsigned int *)((char *)state_address_31 + 1);
            }
            while ( input_byte );
            dword_140404A6C[6 * (int)dword_140404A6C[scaled_index_9 + 275754072]++ + 275754078 + scaled_index_9] = 0;
          }
          createitem_result_14 = sr_CreateItem(34, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          strcpy(
            destination_text,
            "TEST TEST TEST\n"
            "NEXT LINE\n"
            "LOTS OF STUFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF!\n"
            "LOTS OF STUFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF!\n"
            "\n"
            "END\n"
            "\n"
            "Not the end\n"
            "More stuffffff!");
          sub_1400584B0(createitem_result_14, (     __m128i *)destination_text);
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 1.0;
          createitem_result_15 = sr_CreateItem(29, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sub_1400584B0(createitem_result_15, (     __m128i *)&g_183E93124);
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta;
          sr_CreateItem(26, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 3.0;
          sr_CreateItem(26, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 4.0;
          createitem_result_16 = sr_CreateItem(26, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 5.0;
          dword_140404A6C[1760 * createitem_result_16 + 278846111] = 1;
          createitem_result_17 = sr_CreateItem(26, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 6.0;
          dword_140404A6C[1760 * createitem_result_17 + 278846111] = 1;
          createitem_result_18 = sr_CreateItem(26, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 7.0;
          dword_140404A6C[1760 * createitem_result_18 + 278846111] = 1;
          createitem_result_19 = sr_CreateItem(25, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 8.0;
          dword_140404A6C[1760 * createitem_result_19 + 278845981] = 1111;
          createitem_result_20 = 1760LL * (int)sr_CreateItem(25, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 9.0;
          dword_140404A6C[createitem_result_20 + 278845981] = 2222;
          dword_140404A6C[createitem_result_20 + 278846051] = 1;
          createitem_result_21 = sr_CreateItem(25, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 10.0;
          dword_140404A6C[1760 * createitem_result_21 + 278845981] = 3333;
          createitem_result_22 = 1760LL * (int)sr_CreateItem(18, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 11.0;
          dword_140404A6C[createitem_result_22 + 278846063] = 100671489;
          dword_140404A6C[createitem_result_22 + 278846062] = 9;
          createitem_result_23 = 1760LL * (int)sr_CreateItem(18, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 12.0;
          dword_140404A6C[createitem_result_23 + 278846063] = 100671489;
          dword_140404A6C[createitem_result_23 + 278846062] = 9;
          createitem_result_24 = 1760LL * (int)sr_CreateItem(18, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 13.0;
          dword_140404A6C[createitem_result_24 + 278846063] = 100671489;
          dword_140404A6C[createitem_result_24 + 278846062] = 9;
          createitem_result_25 = 1760LL * (int)sr_CreateItem(18, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 14.0;
          dword_140404A6C[createitem_result_25 + 278846063] = 100671489;
          dword_140404A6C[createitem_result_25 + 278846062] = 9;
          createitem_result_26 = 1760LL * (int)sr_CreateItem(18, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 15.0;
          dword_140404A6C[createitem_result_26 + 278846063] = 100671489;
          dword_140404A6C[createitem_result_26 + 278846062] = 9;
          sr_CreateItem(13, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 16.0;
          sr_CreateItem(13, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 17.0;
          sr_CreateItem(13, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 19.0;
          sr_CreateItem(15, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)sr_reset_player_position) = (float)(int)g_16B2A222C + 6.0;
          (*(float *)(void *)(sr_reset_player_position+2)) = (float)(int)g_16B2A2234 - 8.0;
          *((float *)&(*(int64_t *)(void *)sr_reset_player_position) + 1) = (float)(int)g_16B2A2230 + 8.0;
          sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_reset_spawn_rotation), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation) + 3, sr_export_float_lane_container(3205942244LL));
          sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_reset_spawn_rotation), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), sr_export_float_lane_container(1041681380));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 21.0;
          sr_reset_spawn_rotation[8] = 1065353216;
          (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
          (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
          sr_CreateItem(35, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 22.0;
          sr_CreateItem(17, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 23.0;
          sr_CreateItem(17, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 24.0;
          sr_CreateItem(17, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 25.0;
          sr_CreateItem(17, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 26.0;
          sr_CreateItem(17, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 28.0;
          sr_CreateItem(21, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 29.0;
          sr_CreateItem(9, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 30.0;
          sr_CreateItem(10, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 31.0;
          sr_CreateItem(10, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 32.0;
          sr_CreateItem(10, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 33.0;
          sr_CreateItem(14, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = component_delta_2 + 35.0;
        }
        ++iteration_count_7;
        running_total_8 += 3597;
      }
      while ( iteration_count_7 < 2 );
      if ( (int)item_block_region_count > 0 )
      {
        iteration_count_9 = 0;
        state_address_32 = &g_1760C5638;
        do
        {
          if ( *state_address_32 == 4 )
            break;
          ++iteration_count_9;
          state_address_32 += 14019;
        }
        while ( iteration_count_9 < (int)item_block_region_count );
        if ( game_type == 2 )
          sub_14012E620(iteration_count_9, 24);
      }
      sub_14012E960(128);
      cached_game_connected_4 = game_connected;
      cached_game_tick_2 = game_tick;
      if ( game_connected )
      {
        shifted_bits_9 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_9) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_9) = cached_game_tick_2;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_9) = 0;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_9) = 1;
      }
      g_183EBFDC0 = 1;
      if ( cached_game_connected_4 )
      {
        shifted_bits_10 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_10) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_10) = cached_game_tick_2;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_10) = 1;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_10) = 1;
      }
      g_183EC5984 = 1;
      if ( cached_game_connected_4 )
      {
        shifted_bits_11 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_11) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_11) = cached_game_tick_2;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_11) = 2;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_11) = 1;
      }
      g_183ECB548 = 1;
    }
SR_TEST_ARENA_FINALIZE:
    if ( cached_game_connected_4 )
    {
      sub_14008C030();
      sub_14008C310();
      sr_event_stock_prices();
      do
      {
        if ( *state_address_10 )
        {
          sr_event_player_update(player);
          sr_event_player_finance(player);
        }
        ++player;
        state_address_10 += 3597;
      }
      while ( player < 256 );
    }
  }
  SR_DEBUG_CHECK_BODIES(&g_1449816E0, 8192, "after game spawning");
  SR_DEBUG_STAGE("Generating game finished: returning to the client loop");
  return 0; /* legacy result ignored; native returns void */
}
#undef unused_frame_slot_0
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef destination_buffer
#undef destination_buffer_2
#undef destination_text
#undef unused_frame_slot_1216

//----- (000000014012CEB0) ----------------------------------------------------
__int64            sub_14012CEB0(int a1, unsigned int a2, signed int a3, int a4, int a5, float a6)
{
  __int64 input_value;
  __int64 record_word_offset;
  int shifted_bits;
  int table_value;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 table_value_2;
  int saved_shifted_bits;
  __int64 scaled_index;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  __int64 scaled_index_2;
  float component_delta;
  float square_root;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float saved_component_sum;
  __int64 scaled_index_3;
  unsigned int masked_bits;
  unsigned int comparison_operand;
  unsigned int table_value_3;
  int integer_difference;
  int rand_result;
  __int64 scaled_index_4;
  char rand_result_2;
  unsigned int *state_address;
  unsigned int cached_world_unknown_15fd16260_count;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012CEB0[96];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14012CEB0 + 0)) /* [rsp+0h] */
#define float_word (*(unsigned int (*))(void *)(sr_frame_14012CEB0 + 48)) /* [rsp+30h] */
#define component_sum (*(float (*))(void *)(sr_frame_14012CEB0 + 52)) /* [rsp+34h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_14012CEB0 + 56)) /* [rsp+38h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_14012CEB0 + 64)) /* [rsp+40h] */
#define unused_frame_slot_80 (*(__int64 (*))(void *)(sr_frame_14012CEB0 + 80)) /* [rsp+50h] */

  input_value = a1;
  record_word_offset = 396LL * a3;
  shifted_bits = 0;
  table_value = dword_140404A6C[record_word_offset + 225426061];
  weighted_sum = *(float *)&dword_140404A6C[record_word_offset + 225426175];
  weighted_sum_2 = *(float *)&dword_140404A6C[record_word_offset + 225426176];
  weighted_sum_3 = *(float *)&dword_140404A6C[record_word_offset + 225426174];
  table_value_2 = (int)dword_140404A6C[record_word_offset + 225426057];
  if ( (table_value >> 1) - a5 - 1 >= 0 )
    shifted_bits = ((int)dword_140404A6C[record_word_offset + 225426061] >> 1) - a5 - 1;
  saved_shifted_bits = table_value - 1;
  if ( shifted_bits <= table_value - 1 )
    saved_shifted_bits = shifted_bits;
  if ( a4 )
  {
    weighted_sum_3 = -weighted_sum_3;
    weighted_sum = -weighted_sum;
    weighted_sum_2 = -weighted_sum_2;
    scaled_index_2 = record_word_offset * 4 + 28LL * saved_shifted_bits;
    weighted_sum_7 = *(float *)((char *)&g_175FF34A8 + scaled_index_2);
    weighted_sum_8 = *(float *)((char *)&g_175FF34B0 + scaled_index_2);
    weighted_sum_4 = *(float *)((char *)&g_175FF34B4 + scaled_index_2);
    weighted_sum_5 = *(float *)((char *)&g_175FF34B8 + scaled_index_2);
    weighted_sum_6 = *(float *)((char *)&g_175FF34BC + scaled_index_2);
  }
  else
  {
    scaled_index = record_word_offset * 4 + 28LL * (table_value - saved_shifted_bits);
    weighted_sum_4 = *(float *)((char *)&g_175FF348C + scaled_index);
    weighted_sum_5 = *(float *)((char *)&g_175FF3490 + scaled_index);
    weighted_sum_6 = *(float *)((char *)&g_175FF3494 + scaled_index);
    weighted_sum_7 = *(float *)((char *)&g_175FF3498 + scaled_index);
    weighted_sum_8 = *(float *)((char *)&g_175FF34A0 + scaled_index);
  }
  component_delta = -1.5707964;
  square_root = a6 * fsqrt((float)((float)(weighted_sum_8 - weighted_sum_6) * (float)(weighted_sum_8 - weighted_sum_6)) + (float)((float)(weighted_sum_7 - weighted_sum_4) * (float)(weighted_sum_7 - weighted_sum_4)));
  if ( !dword_140404A6C[record_word_offset + 225426058] )
    component_delta = -3.1415927;
  if ( !a4 )
    component_delta = component_delta + 3.14159265359;
  weighted_sum_9 = (float)(weighted_sum * square_root) + weighted_sum_5;
  weighted_sum_10 = (float)(weighted_sum_3 * square_root) + weighted_sum_4;
  weighted_sum_11 = *(float *)&dword_140404A6C[34 * dword_140404A6C[record_word_offset + 225426056] + 225391234];
  weighted_sum_12 = (float)(weighted_sum_2 * square_root) + weighted_sum_6;
  float_word = LODWORD(weighted_sum_10);
  saved_weighted_sum = weighted_sum_12;
  if ( weighted_sum_9 < weighted_sum_11 )
    weighted_sum_9 = weighted_sum_11;
  if ( weighted_sum_9 < *(float *)&dword_140404A6C[34 * table_value_2 + 225391234] )
    weighted_sum_9 = *(float *)&dword_140404A6C[34 * table_value_2 + 225391234];
  component_sum = weighted_sum_9 + 2.0;
  float_buffer[0] = weighted_sum_10 - (float)(*(float *)&dword_1402F6188 * 128.0);
  float_buffer[1] = (float)(weighted_sum_9 + 2.0) - (float)(*(float *)&dword_1402F618C * 128.0);
  float_buffer[2] = weighted_sum_12 - (float)(*(float *)&dword_1402F6190 * 128.0);
  if ( (unsigned int)sub_1400DC050((float *)&float_word, float_buffer, 0) )
    saved_component_sum = (ragdoll_unknown_height);
  else
    saved_component_sum = component_sum;
  scaled_index_3 = 383LL * (int)world_unknown_15fd16260_count;
  *(float *)&masked_bits = saved_component_sum + (float)(0.375 - *(float *)&dword_140404A6C[24944 * input_value + 346731821]);
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index_3 + 132400638]), 0, 0x5F8u);
  comparison_operand = LODWORD(saved_weighted_sum);
  table_value_3 = dword_140404A6C[record_word_offset + 225426059];
  dword_140404A6C[scaled_index_3 + 132400641] = float_word;
  dword_140404A6C[scaled_index_3 + 132400643] = comparison_operand;
  dword_140404A6C[scaled_index_3 + 132400642] = masked_bits;
  dword_140404A6C[scaled_index_3 + 132400637] = input_value;
  *(_QWORD *)&dword_140404A6C[scaled_index_3 + 132400638] = -1;
  *(float *)&dword_140404A6C[scaled_index_3 + 132400647] = component_delta;
  dword_140404A6C[scaled_index_3 + 132401011] = a2;
  dword_140404A6C[scaled_index_3 + 132400659] = 1080033280;
  dword_140404A6C[scaled_index_3 + 132400660] = -1090519040;
  dword_140404A6C[scaled_index_3 + 132400661] = 1077936128;
  dword_140404A6C[scaled_index_3 + 132400668] = 1;
  if ( a4 )
    integer_difference = table_value_3 - a5 - 1;
  else
    integer_difference = a5 + table_value_3;
  dword_140404A6C[scaled_index_3 + 132400996] = integer_difference;
  dword_140404A6C[scaled_index_3 + 132400997] = integer_difference;
  dword_140404A6C[scaled_index_3 + 132400993] = a3;
  dword_140404A6C[scaled_index_3 + 132400994] = a4;
  dword_140404A6C[scaled_index_3 + 132400995] = -1;
  dword_140404A6C[scaled_index_3 + 132400999] = 0;
  rand_result = rand() % (signed int)g_175FF3464;
  scaled_index_4 = 383LL * (int)world_unknown_15fd16260_count;
  rand_result_2 = rand();
  sub_140008E40(world_unknown_15fd16260_count, dword_140404A6C[scaled_index_4 + 132400993], a4, rand_result, rand_result_2 & 1);
  state_address = &dword_140404A6C[scaled_index_4 + 132400648];
  *(_QWORD *)state_address = 1065353216;
  *((_QWORD *)state_address + 1) = 0;
  *((_QWORD *)state_address + 2) = 1065353216;
  *((_QWORD *)state_address + 3) = 0;
  state_address[8] = 1065353216;
  sr_math_mat3_rotate_rows(
    (__int64)&dword_140404A6C[scaled_index_4 + 132400648],
    (float *)&dword_140404A6C[scaled_index_4 + 132400651], sr_export_float_lane_container(sr_text_float_bits((float)(component_delta + 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
  cached_world_unknown_15fd16260_count = world_unknown_15fd16260_count;
  ++dword_140404A6C[world_unknown_15fd16260_count + 132792837];
  world_unknown_15fd16260_count = cached_world_unknown_15fd16260_count + 1;
  return (unsigned int)cached_world_unknown_15fd16260_count; /* native pre-increment spawn index */
}
#undef unused_frame_slot_0
#undef float_word
#undef component_sum
#undef saved_weighted_sum
#undef float_buffer
#undef unused_frame_slot_80
