#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"
#include "../engine/audio_voice.h"

//----- (000000014010E190) ----------------------------------------------------
_WORD *           sr_audio_voice_decode(int a1, _WORD *a2, int a3, int a4)
{
  return audio_voice_decode(a1, (int16_t *)a2, a3, a4);
}

//----- (000000014010E230) ----------------------------------------------------
__int64            sr_audio_voice_encode(int a1, __int64 a2, int a3, int a4)
{
  return audio_voice_encode(a1, (const int16_t *)a2, a3, a4);
}

//----- (000000014010E2B0) ----------------------------------------------------
int *sr_audio_voice_initialize()
{
  return audio_voice_initialize();
}

//----- (000000014010E330) ----------------------------------------------------
void sr_audio_voice_shutdown()
{
  audio_voice_shutdown();
}
