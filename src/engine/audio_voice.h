/* The voice chat codecs: the encoder and decoder handles, the per-player
 * packet slots, and the encode/decode adapters. Typed interface for the
 * routines of src/engine/audio_voice.c, one header for the shared state.
 */
#ifndef SR_ENGINE_AUDIO_VOICE_H
#define SR_ENGINE_AUDIO_VOICE_H

#include <stdint.h>
#include "memory.h"

/* The single encoder slot and the eight decoder slots, each holding a
 * pointer into the embedded codec. 0x187BDE460, 0x187BDE660..0x187BDE6A0. */
enum { AUDIO_VOICE_DECODERS = 8 };
#define audio_voice_encoder(slot) SR_GLOBAL(int *, 0x187BDE460ULL + 8 * (slot))
#define audio_voice_decoder(slot) SR_GLOBAL(int *, 0x187BDE660ULL + 8 * (slot))

/* The per-player packet records. The received side keeps, per player
 * (0x5E244 stride), the byte counts at 0x189C3BCC0 and the 2 KiB packet
 * bytes at 0x189C3BEC0; the sent side (0x20214 stride) the counts at
 * 0x187BDE974 and the packet bytes at 0x187BDEA74. */
#define audio_voice_received_count(player, packet) \
    SR_GLOBAL(uint32_t, 0x189C3BCC0ULL + 0x5E244ULL * (unsigned int)(player) + 4 * (unsigned int)(packet))
#define audio_voice_received_bytes(player, packet) \
    ((unsigned char *)(uintptr_t)(0x189C3BEC0ULL + 0x5E244ULL * (unsigned int)(player) + 2048ULL * (unsigned int)(packet)))
#define audio_voice_sent_count(player, packet) \
    SR_GLOBAL(uint32_t, 0x187BDE974ULL + 0x20214ULL * (unsigned int)(player) + 4 * (unsigned int)(packet))
#define audio_voice_sent_bytes(player, packet) \
    ((unsigned char *)(uintptr_t)(0x187BDEA74ULL + 0x20214ULL * (unsigned int)(player) + 2048ULL * (unsigned int)(packet)))

/* Decodes the packet (player, packet) of codec slot into output, 2048 bytes
 * at most. An empty or missing packet decodes silence and zeroes the first
 * 0x780 bytes of output. Returns the codec's result, or output. 0x14010E190 */
int16_t *audio_voice_decode(int slot, int16_t *output, int player, int packet);

/* Encodes 960 samples from input into the (player, packet) slot and stores
 * the byte count there. Returns the byte count. 0x14010E230 */
long long audio_voice_encode(int slot, const int16_t *input, int player, int packet);

/* Creates the encoder (48000 Hz, one channel, 2048-byte frames) with
 * option 4002/16000 and the eight decoders, storing every handle. Returns
 * the last decoder created. 0x14010E2B0 */
int *audio_voice_initialize(void);

/* Destroys the encoder and the eight decoders. 0x14010E330 */
void audio_voice_shutdown(void);

#endif
