#include "shared_client.h"
#include "../engine/audio.h"

//----- (0000000140069930) ----------------------------------------------------
// Convert byte_count bytes of signed 16-bit PCM into the sound float buffer.
void sr_audio_load_pcm16(unsigned int sound_id, int byte_count, __int16 * pcm_samples, float sound_gain)
{
  audio_load_pcm16(sound_id, byte_count, (const int16_t *)pcm_samples, sound_gain);
}
