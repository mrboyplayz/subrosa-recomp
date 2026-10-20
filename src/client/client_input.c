#include "shared_client.h"
#include "../engine/spawn_console.h"

//----- (000000014007CA90) ----------------------------------------------------
// Candidate keyboard snapshot wrapper: copies 323 bytes from SDL_GetKeyboardState(NULL) into caller buffer.
__int128 *           input_get_keyboard_state_candidate(__int64 a1)
{
  __int128 *result;
  __int64 keyboard_chunks_remaining;
  __int128 keyboard_state_chunk;

  result = (__int128 *)((const unsigned char *(*)(int *))sub_140198EF9)(NULL);
  keyboard_chunks_remaining = 2;
  do
  {
    a1 += 128;
    keyboard_state_chunk = *result;
    result += 8;
    *(_OWORD *)(a1 - 128) = keyboard_state_chunk;
    *(_OWORD *)(a1 - 112) = *(result - 7);
    *(_OWORD *)(a1 - 96) = *(result - 6);
    *(_OWORD *)(a1 - 80) = *(result - 5);
    *(_OWORD *)(a1 - 64) = *(result - 4);
    *(_OWORD *)(a1 - 48) = *(result - 3);
    *(_OWORD *)(a1 - 32) = *(result - 2);
    *(_OWORD *)(a1 - 16) = *(result - 1);
    --keyboard_chunks_remaining;
  }
  while ( keyboard_chunks_remaining );
  *(_OWORD *)a1 = *result;
  *(_OWORD *)(a1 + 16) = result[1];
  *(_OWORD *)(a1 + 32) = result[2];
  *(_OWORD *)(a1 + 48) = result[3];
  *(_WORD *)(a1 + 64) = *((_WORD *)result + 32);
  *(_BYTE *)(a1 + 66) = *((_BYTE *)result + 66);
  return result;
}

//----- (000000014007CB30) ----------------------------------------------------
__int64            input_get_mouse_state_candidate(__int64 a1)
{
  unsigned int mouse_button_mask;
  int left_button_pressed;
  __m128i window_height_lane;
  float scaled_mouse_y;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007CB30[16];
#define mouse_x (*(int (*))(void *)(sr_frame_14007CB30 + 0)) /* [rsp+30h] */
#define mouse_y (*(int (*))(void *)(sr_frame_14007CB30 + 8)) /* [rsp+38h] */

  mouse_button_mask = ((unsigned (*)(int *, int *))sub_140198EFF)(&mouse_x, &mouse_y);
  left_button_pressed = mouse_button_mask & 1;
  *(float *)a1 = (float)((float)mouse_x * (renderer_canvas_width)) / (float)(int)g_160FC47D8;
  window_height_lane = _mm_cvtsi32_si128(g_160FC47DC);
  scaled_mouse_y = (float)mouse_y * (renderer_canvas_height);
  *(_DWORD *)(a1 + 152) = mouse_button_mask;
  result = (mouse_button_mask >> 2) & 1;
  *(float *)(a1 + 4) = scaled_mouse_y / SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(window_height_lane), f32)[0];
  *(_DWORD *)(a1 + 144) = left_button_pressed;
  *(_DWORD *)(a1 + 148) = result;
  return result;
}
#undef mouse_x
#undef mouse_y

//----- (000000014007CBC0) ----------------------------------------------------
__int64            input_get_relative_mouse_state_candidate(float *a1)
{
  unsigned int mouse_button_mask;
  int left_button_pressed;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007CBC0[16];
#define relative_mouse_x (*(int (*))(void *)(sr_frame_14007CBC0 + 0)) /* [rsp+30h] */
#define relative_mouse_y (*(int (*))(void *)(sr_frame_14007CBC0 + 8)) /* [rsp+38h] */

  mouse_button_mask = ((unsigned (*)(int *, int *))sub_140198F05)(&relative_mouse_x, &relative_mouse_y);
  left_button_pressed = mouse_button_mask & 1;
  *((_DWORD *)a1 + 38) = mouse_button_mask;
  *a1 = 512.0;
  a1[1] = 320.0;
  result = (mouse_button_mask >> 2) & 1;
  a1[2] = (float)relative_mouse_x;
  a1[3] = (float)relative_mouse_y;
  *((_DWORD *)a1 + 36) = left_button_pressed;
  *((_DWORD *)a1 + 37) = result;
  return result;
}
#undef relative_mouse_x
#undef relative_mouse_y

//----- (000000014007CC30) ----------------------------------------------------
// Candidate SDL event pump: tracks wheel delta, key events, Alt+Enter fullscreen toggle, resize/viewport state.
void input_poll_events_candidate()
{
  unsigned int keyboard_scancode;
  unsigned int keyboard_modifiers;
  int viewport_left;
  int viewport_top;
  int viewport_width;
  int viewport_height;
  unsigned int quit_requested;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007CC30[112];
#define unused_event_frame (*(__int64 (*))(void *)(sr_frame_14007CC30 + 0)) /* [rsp+0h] */
#define constrained_window_width (*(int (*))(void *)(sr_frame_14007CC30 + 32)) /* [rsp+20h] */
#define constrained_window_height (*(int (*))(void *)(sr_frame_14007CC30 + 36)) /* [rsp+24h] */
#define event_type (*(int (*))(void *)(sr_frame_14007CC30 + 40)) /* [rsp+28h] */
#define window_event_type (*(char (*))(void *)(sr_frame_14007CC30 + 52)) /* [rsp+34h] */
#define event_data_first (*(unsigned int (*))(void *)(sr_frame_14007CC30 + 56)) /* [rsp+38h] */
#define event_data_second (*(unsigned int (*))(void *)(sr_frame_14007CC30 + 60)) /* [rsp+3Ch] */
#define event_key_modifiers (*(unsigned __int16 (*))(void *)(sr_frame_14007CC30 + 64)) /* [rsp+40h] */
#define unused_frame_cookie (*(__int64 (*))(void *)(sr_frame_14007CC30 + 96)) /* [rsp+60h] */

  _Alignas(8) unsigned char sr_event[56];
  void *sr_event_window;
  memcpy(&sr_event_window, &g_160FC47C8, 8);
  g_1B0032404 = g_1B0032400;
  g_160FC481C = 0;
  while ( sr_event_poll(sr_event) )
  {
    if (spawn_console_event(sr_event)) continue;
    memcpy(&event_type, sr_event, 4);
    window_event_type = (char)sr_event[12];
    memcpy(&event_data_first, sr_event + 16, 4);
    memcpy(&event_data_second, sr_event + 20, 4);
    memcpy(&event_key_modifiers, sr_event + 24, 2);
    if ( event_type == 1027 )
    {
      g_160FC481C += event_data_second;
    }
    else
    {
      if ( event_type == 768 )
      {
        keyboard_scancode = event_data_first;
        keyboard_modifiers = event_key_modifiers;
        if ( event_data_first != 40 || (event_key_modifiers & 0x300) == 0 )
        {
          dword_140404A6C[5 * g_1B0032400 + 468760167] = 0;
          dword_140404A6C[5 * g_1B0032400 + 468760168] = keyboard_scancode;
          goto LABEL_11;
        }
        g_160FC4804 ^= 1u;
        sr_recomp_window_toggle(sr_event_window, g_160FC4804 ? 0x1001u : 0);
      }
      if ( event_type == 769 )
      {
        keyboard_modifiers = event_key_modifiers;
        dword_140404A6C[5 * g_1B0032400 + 468760167] = 1;
        dword_140404A6C[5 * g_1B0032400 + 468760168] = event_data_first;
LABEL_11:
        dword_140404A6C[5 * g_1B0032400 + 468760169] = event_data_second;
        dword_140404A6C[5 * g_1B0032400 + 468760170] = keyboard_modifiers;
        dword_140404A6C[5 * g_1B0032400 + 468760171] = 0;
        g_1B0032400 = (LOWORD(g_1B0032400) + 1) & 0x3FF;
        continue;
      }
      if ( event_type != 512 )
        goto LABEL_28;
      if ( window_event_type != 8 )
        goto LABEL_16;
      if ( !g_160FC4804 )
      {
        sr_event_restore(sr_event_window);
        sr_recomp_window_toggle(sr_event_window, 0x1001u);
        g_160FC4804 = 1;
LABEL_16:
        if ( window_event_type == 6 )
        {
          sr_event_size(sr_event_window, (int *)&g_160FC47D8, (int *)&g_160FC47DC);
          viewport_left = 0;
          *(_QWORD *)&g_160FC47E8 = *(_QWORD *)&g_160FC47D8;
          viewport_top = 0;
          viewport_width = (signed int)(16 * g_160FC47DC) / 9;
          if ( (int)g_160FC47D8 <= viewport_width )
            viewport_width = g_160FC47D8;
          g_160FC47F0 = viewport_width;
          viewport_height = (viewport_width + 8 * (viewport_width + 1)) / 16;
          g_160FC47F4 = viewport_height;
          if ( (int)g_160FC47D8 > viewport_width )
            viewport_left = (signed int)(g_160FC47D8 - viewport_width) / 2;
          if ( (int)g_160FC47DC > viewport_height )
            viewport_top = (signed int)(g_160FC47DC - viewport_height) / 2;
          g_160FC47F8 = viewport_left;
          g_160FC47FC = viewport_top;
          g_160FC4820 = 1;
          if ( g_160FC4810 )
          {
            (renderer_canvas_width) = (float)(int)g_160FC47D8;
            (renderer_canvas_height) = (float)(int)g_160FC47DC;
          }
        }
        if ( window_event_type == 5 && !g_160FC4804 )
        {
          sr_event_size(sr_event_window, &constrained_window_width, &constrained_window_height);
          constrained_window_width = (signed int)(g_160FC47D8 + (signed int)(16 * g_160FC47DC) / 9) / 2;
          constrained_window_height = (constrained_window_width + 8 * (constrained_window_width + 1)) / 16;
          sr_event_set_size(sr_event_window, constrained_window_width, constrained_window_height);
        }
LABEL_28:
        quit_requested = g_160FC47C0;
        if ( event_type == 256 )
          quit_requested = 1;
        g_160FC47C0 = quit_requested;
      }
    }
  }
  return;
}
#undef unused_event_frame
#undef constrained_window_width
#undef constrained_window_height
#undef event_type
#undef window_event_type
#undef event_data_first
#undef event_data_second
#undef event_key_modifiers
#undef unused_frame_cookie
