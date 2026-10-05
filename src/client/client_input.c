#include "shared_client.h"


//----- (000000014007CA90) ----------------------------------------------------
// Candidate keyboard snapshot wrapper: copies 323 bytes from SDL_GetKeyboardState(NULL) into caller buffer.
__int128 *           input_get_keyboard_state_candidate(__int64 a1)
{
  __int128 *result; // rax
  __int64 v3; // rcx
  __int128 v4; // xmm0

  result = (__int128 *)((const unsigned char *(*)(int *))sub_140198EF9)(NULL);
  v3 = 2;
  do
  {
    a1 += 128;
    v4 = *result;
    result += 8;
    *(_OWORD *)(a1 - 128) = v4;
    *(_OWORD *)(a1 - 112) = *(result - 7);
    *(_OWORD *)(a1 - 96) = *(result - 6);
    *(_OWORD *)(a1 - 80) = *(result - 5);
    *(_OWORD *)(a1 - 64) = *(result - 4);
    *(_OWORD *)(a1 - 48) = *(result - 3);
    *(_OWORD *)(a1 - 32) = *(result - 2);
    *(_OWORD *)(a1 - 16) = *(result - 1);
    --v3;
  }
  while ( v3 );
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
  unsigned int v2; // eax
  int v3; // ecx
  __m128i v4; // xmm0
  float v5; // xmm2_4
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h]
  int v8; // [rsp+38h] [rbp+10h]

  v2 = ((unsigned (*)(int *, int *))sub_140198EFF)(&v7, &v8);
  v3 = v2 & 1;
  *(float *)a1 = (float)((float)v7 * *(float *)&dword_140404A6C[438291414]) / (float)(int)dword_140404A6C[137297755];
  v4 = _mm_cvtsi32_si128(dword_140404A6C[137297756]);
  v5 = (float)v8 * *(float *)&dword_140404A6C[438291415];
  *(_DWORD *)(a1 + 152) = v2;
  result = (v2 >> 2) & 1;
  *(float *)(a1 + 4) = v5 / SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v4), f32)[0];
  *(_DWORD *)(a1 + 144) = v3;
  *(_DWORD *)(a1 + 148) = result;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007CBC0) ----------------------------------------------------
__int64            input_get_relative_mouse_state_candidate(float *a1)
{
  unsigned int v2; // eax
  int v3; // edx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h]
  int v6; // [rsp+38h] [rbp+10h]

  v2 = ((unsigned (*)(int *, int *))sub_140198F05)(&v5, &v6);
  v3 = v2 & 1;
  *((_DWORD *)a1 + 38) = v2;
  *a1 = 512.0;
  a1[1] = 320.0;
  result = (v2 >> 2) & 1;
  a1[2] = (float)v5;
  a1[3] = (float)v6;
  *((_DWORD *)a1 + 36) = v3;
  *((_DWORD *)a1 + 37) = result;
  return result;
}

//----- (000000014007CC30) ----------------------------------------------------
// Candidate SDL event pump: tracks wheel delta, key events, Alt+Enter fullscreen toggle, resize/viewport state.
void input_poll_events_candidate()
{
  unsigned int v0; // r8d
  unsigned int v1; // edx
  int v2; // ebx
  int v3; // r11d
  int v4; // ecx
  int v5; // r10d
  unsigned int v6; // eax
  __int64 v8; // [rsp+0h] [rbp-78h] BYREF
  int v9; // [rsp+20h] [rbp-58h]
  int v10; // [rsp+24h] [rbp-54h]
  int v11; // [rsp+28h] [rbp-50h]
  char v12; // [rsp+34h] [rbp-44h]
  unsigned int v13; // [rsp+38h] [rbp-40h]
  unsigned int v14; // [rsp+3Ch] [rbp-3Ch]
  unsigned __int16 v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+60h] [rbp-18h]

  _Alignas(8) unsigned char sr_event[56];
  void *sr_event_window;
  memcpy(&sr_event_window, &dword_140404A6C[137297751], 8);
  dword_140404A6C[468760166] = dword_140404A6C[468760165];
  dword_140404A6C[137297772] = 0;
  while ( sr_event_poll(sr_event) )
  {
    memcpy(&v11, sr_event, 4);
    v12 = (char)sr_event[12];
    memcpy(&v13, sr_event + 16, 4);
    memcpy(&v14, sr_event + 20, 4);
    memcpy(&v15, sr_event + 24, 2);
    if ( v11 == 1027 )
    {
      dword_140404A6C[137297772] += v14;
    }
    else
    {
      if ( v11 == 768 )
      {
        v0 = v13;
        v1 = v15;
        if ( v13 != 40 || (v15 & 0x300) == 0 )
        {
          dword_140404A6C[5 * dword_140404A6C[468760165] + 468760167] = 0;
          dword_140404A6C[5 * dword_140404A6C[468760165] + 468760168] = v0;
          goto LABEL_11;
        }
        dword_140404A6C[137297766] ^= 1u;
        sr_recomp_window_toggle(sr_event_window, dword_140404A6C[137297766] ? 0x1001u : 0);
      }
      if ( v11 == 769 )
      {
        v1 = v15;
        dword_140404A6C[5 * dword_140404A6C[468760165] + 468760167] = 1;
        dword_140404A6C[5 * dword_140404A6C[468760165] + 468760168] = v13;
LABEL_11:
        dword_140404A6C[5 * dword_140404A6C[468760165] + 468760169] = v14;
        dword_140404A6C[5 * dword_140404A6C[468760165] + 468760170] = v1;
        dword_140404A6C[5 * dword_140404A6C[468760165] + 468760171] = 0;
        dword_140404A6C[468760165] = (LOWORD(dword_140404A6C[468760165]) + 1) & 0x3FF;
        continue;
      }
      if ( v11 != 512 )
        goto LABEL_28;
      if ( v12 != 8 )
        goto LABEL_16;
      if ( !dword_140404A6C[137297766] )
      {
        sr_event_restore(sr_event_window);
        sr_recomp_window_toggle(sr_event_window, 0x1001u);
        dword_140404A6C[137297766] = 1;
LABEL_16:
        if ( v12 == 6 )
        {
          sr_event_size(sr_event_window, (int *)&dword_140404A6C[137297755], (int *)&dword_140404A6C[137297756]);
          v2 = 0;
          *(_QWORD *)&dword_140404A6C[137297759] = *(_QWORD *)&dword_140404A6C[137297755];
          v3 = 0;
          v4 = (signed int)(16 * dword_140404A6C[137297756]) / 9;
          if ( (int)dword_140404A6C[137297755] <= v4 )
            v4 = dword_140404A6C[137297755];
          dword_140404A6C[137297761] = v4;
          v5 = (v4 + 8 * (v4 + 1)) / 16;
          dword_140404A6C[137297762] = v5;
          if ( (int)dword_140404A6C[137297755] > v4 )
            v2 = (signed int)(dword_140404A6C[137297755] - v4) / 2;
          if ( (int)dword_140404A6C[137297756] > v5 )
            v3 = (signed int)(dword_140404A6C[137297756] - v5) / 2;
          dword_140404A6C[137297763] = v2;
          dword_140404A6C[137297764] = v3;
          dword_140404A6C[137297773] = 1;
          if ( dword_140404A6C[137297769] )
          {
            *(float *)&dword_140404A6C[438291414] = (float)(int)dword_140404A6C[137297755];
            *(float *)&dword_140404A6C[438291415] = (float)(int)dword_140404A6C[137297756];
          }
        }
        if ( v12 == 5 && !dword_140404A6C[137297766] )
        {
          sr_event_size(sr_event_window, &v9, &v10);
          v9 = (signed int)(dword_140404A6C[137297755] + (signed int)(16 * dword_140404A6C[137297756]) / 9) / 2;
          v10 = (v9 + 8 * (v9 + 1)) / 16;
          sr_event_set_size(sr_event_window, v9, v10);
        }
LABEL_28:
        v6 = dword_140404A6C[137297749];
        if ( v11 == 256 )
          v6 = 1;
        dword_140404A6C[137297749] = v6;
      }
    }
  }
  return;
}
