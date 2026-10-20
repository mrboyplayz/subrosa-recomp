#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (000000014010E190) ----------------------------------------------------
_WORD *           sr_audio_voice_decode(int a1, _WORD *a2, int a3, int a4)
{
  __int64 voice_player_index;
  int encoded_byte_count;
  int *voice_decoder;

  voice_player_index = a3;
  encoded_byte_count = dword_140404A6C[96401 * a3 + 308337813 + a4];
  voice_decoder = *(int **)&dword_140404A6C[2 * a1 + 299853565];
  if ( encoded_byte_count > 0 )
    return (_WORD *)sub_1401E25C0(
                      voice_decoder,
                      (char *)&dword_140404A6C[96401 * voice_player_index + 308337941 + 512 * (__int64)a4],
                      encoded_byte_count,
                      (__int64)a2,
                      2048,
                      0);
  sub_1401E25C0(voice_decoder, nullptr, 0, (__int64)a2, 2048, 0);
  return crt_memset((void *)(uintptr_t)(a2), 0, 0x780u);
}

//----- (000000014010E230) ----------------------------------------------------
__int64            sr_audio_voice_encode(int a1, __int64 a2, int a3, int a4)
{
  __int64 voice_packet_index;
  __int64 voice_player_index;
  __int64 result;

  voice_packet_index = a4;
  voice_player_index = a3;
  result = sub_1401E0CC0(
             *(int **)&dword_140404A6C[2 * a1 + 299853437],
             a2,
             960,
             (__m128i *)&dword_140404A6C[32901 * a3 + 299853826 + 512 * (__int64)a4],
             2048);
  dword_140404A6C[32901 * voice_player_index + 299853762 + voice_packet_index] = result;
  return result;
}

//----- (000000014010E2B0) ----------------------------------------------------
int *sr_audio_voice_initialize()
{
  unsigned int *decoder_slot;
  int *result;
  int codec_error;

  g_187BDE460 = (uint64)(uintptr_t)(sub_1401E0760(0xBB80u, 1, 2048, &codec_error));
  sub_1401E0F40(*(int **)&g_187BDE460, 4002, 16000);
  decoder_slot = &g_187BDE660;
  do
  {
    result = sub_1401E22F0(48000, 1, &codec_error);
    *(_QWORD *)decoder_slot = (uint64)(uintptr_t)(result);
    decoder_slot += 2;
  }
  while ( (__int64)decoder_slot < (__int64)&g_187BDE6A0 );
  return result;
}

//----- (000000014010E330) ----------------------------------------------------
void sr_audio_voice_shutdown()
{
  void **decoder_slot;

  sub_1401E0F20(*(void **)&g_187BDE460);
  decoder_slot = (void **)&g_187BDE660;
  do
    sub_1401E2C30(*decoder_slot++);
  while ( (__int64)decoder_slot < (__int64)&g_187BDE6A0 );
}

