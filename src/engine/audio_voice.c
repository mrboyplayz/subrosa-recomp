/* The voice chat codecs the network voice path keeps: one encoder and eight
 * decoders created at startup, the per-player packet slots, and the
 * encode/decode adapters the send and receive paths call. See
 * audio_voice.h. The embedded codec is still decompiled output in
 * src/client/client_runtime_1e0000.c, so the calls keep its exact original
 * prototypes and resolve to its machine code.
 * 0x14010E190, 0x14010E230, 0x14010E2B0, 0x14010E330. */
#include "audio_voice.h"
#include <string.h>

/* The codec API, still in src/client/. */
extern int *sub_1401E0760(unsigned int rate, int channels, int frame, uint32_t *error);  /* 0x1401E0760 create an encoder */
extern long long sub_1401E0F40(int *codec, int option, ...);                             /* 0x1401E0F40 set a codec option */
extern int *sub_1401E22F0(int rate, int channels, uint32_t *error);                      /* 0x1401E22F0 create a decoder */
extern int sub_1401E0CC0(int *codec, long long input, int input_count, unsigned char *output, int output_size);  /* 0x1401E0CC0 encode a frame */
extern long long sub_1401E25C0(int *codec, char *input, int input_count, long long output, int output_size, unsigned int flags); /* 0x1401E25C0 decode a frame */
extern void sub_1401E0F20(void *codec);                                                  /* 0x1401E0F20 destroy an encoder */
extern void sub_1401E2C30(void *codec);                                                  /* 0x1401E2C30 destroy a decoder */

int16_t *audio_voice_decode(int slot, int16_t *output, int player, int packet)
{
    int32_t byte_count = (int32_t)audio_voice_received_count(player, packet);
    int *decoder = audio_voice_decoder(slot);

    if (byte_count > 0)
        return (int16_t *)(uintptr_t)sub_1401E25C0(decoder, (char *)audio_voice_received_bytes(player, packet),
                                                   byte_count, (long long)(uintptr_t)output, 2048, 0);
    sub_1401E25C0(decoder, 0, 0, (long long)(uintptr_t)output, 2048, 0);
    memset(output, 0, 0x780);
    return output;
}

long long audio_voice_encode(int slot, const int16_t *input, int player, int packet)
{
    int written = sub_1401E0CC0(audio_voice_encoder(slot), (long long)(uintptr_t)input, 960,
                                audio_voice_sent_bytes(player, packet), 2048);
    audio_voice_sent_count(player, packet) = (uint32_t)written;
    return written;
}

int *audio_voice_initialize(void)
{
    uint32_t codec_error = 0;
    int *last = 0;

    audio_voice_encoder(0) = sub_1401E0760(0xBB80u, 1, 2048, &codec_error);
    sub_1401E0F40(audio_voice_encoder(0), 4002, 16000);
    for (int slot = 0; slot < AUDIO_VOICE_DECODERS; ++slot) {
        last = sub_1401E22F0(48000, 1, &codec_error);
        audio_voice_decoder(slot) = last;
    }
    return last;
}

void audio_voice_shutdown(void)
{
    sub_1401E0F20(audio_voice_encoder(0));
    for (int slot = 0; slot < AUDIO_VOICE_DECODERS; ++slot)
        sub_1401E2C30(audio_voice_decoder(slot));
}
