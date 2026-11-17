#include "shared_client.h"

#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (0000000140069580) ----------------------------------------------------
__int64 sr_audio_capture_available()
{
  return audio_capture_available();
}

//----- (0000000140069FA0) ----------------------------------------------------
__int64            sr_audio_play_at(signed int a1, unsigned int *a2, float a3, float a4, unsigned int a5)
{
  return audio_play_at(a1, (const float *)a2, a3, a4, a5);
}

//----- (000000014006A380) ----------------------------------------------------
__m128i *           sr_audio_capture_write(__int64 a1,      __m128i *a2, int a3)
{
  return (__m128i *)audio_capture_write(a2, a3);
}

//----- (000000014007D610) ----------------------------------------------------
__int64            sr_audio_allocate_sound_buffer(unsigned int sound, float gain)
{
  return audio_allocate_sound_buffer(sound, gain);
}

//----- (000000014007D6C0) ----------------------------------------------------
__int64            sr_audio_sound_available(int a1)
{
  return audio_sound_available(a1);
}

//----- (00000001400EE400) ----------------------------------------------------
__int64            sub_1400EE400(int a1, __int64 a2, float a3)
{
  return audio_load_sound_from_wav(a1, (const char *)(uintptr_t)a2, a3);
}
