/* DRAFT, NOT COMPILED, NOT VERIFIED.
 * Recovered routines from client_audio_mixer.c and client_stb_image.c.
 * 
 * To finish: move into src/engine/audio_mixer.c, audio_output.c, and stb_image.c.
 * Rewire wrappers in src/client/client_audio_mixer.c and client_stb_image.c.
 * Add t_audiocallback.c + .mutations, prove identical.
 */

#include <string.h>
#include <stdint.h>
#include "audio.h"
#include "memory.h"

/* External SDL-like functions */
extern void SDL_SemPost(void *sem);           /* 0x14026e350 */
extern void SDL_SemWait(void *sem);          /* 0x14026e358 */
extern void* sr_audio_name(int index, int type); /* 0x140198e81 */
extern int sr_audio_count(int type);         /* 0x140198e7b */
extern int64_t sub_140198E9F(void);          /* 0x140198E9F */

/* 0x140069400 */
void sr_audio_output_callback(void *userdata, void *output, int byte_count)
{
    (void)userdata;
    
    /* Use the ring buffers from audio.h.
       The assembly shows a shift of 18 bits (2^18 = 262144 bytes).
       Each ring is 0x10000 floats = 65536 * 4 = 262144 bytes. */
    uint32_t ring_index = audio_output_read_ring;
    float *mixed = audio_output_ring[ring_index];
    
    memcpy(output, mixed, byte_count);
    
    audio_output_read_ring ^= 1u;
    
    /* g_140404A70 is the audio semaphore */
    SDL_SemPost((void *)SR_GLOBAL(uint32_t, 0x140404A70ULL));
}

/* 0x140069440 */
int64_t sr_audio_enumerate_devices(void)
{
    int output_count = sr_audio_count(0);
    int capture_count = sr_audio_count(1);
    
    /* Default device names: 0x746c7561666544 ("Default") */
    SR_GLOBAL(uint64_t, 0x144970CA4ULL) = 0x746c7561666544ULL;
    SR_GLOBAL(uint64_t, 0x144978CB0ULL) = 0x746c7561666544ULL;
    
    if (output_count < 0) output_count = 0;
    SR_GLOBAL(uint32_t, 0x144970CA0ULL) = output_count;
    
    for (int i = 0; i < output_count; ++i) {
        char *name = (char *)sr_audio_name(i, 0);
        /* Names are stored in a block starting at 0x140404A70.
           Stride is 512 bytes (i << 9). */
        char *dst = (char *)SR_GLOBAL(uint32_t, 0x140404A70ULL) + (i << 9);
        while (*name) {
            *dst++ = *name++;
        }
        *dst = 0;
    }
    SR_GLOBAL(uint32_t, 0x144970CA0ULL) = output_count + 1;
    
    if (capture_count < 0) capture_count = 0;
    SR_GLOBAL(uint32_t, 0x144978CACULL) = capture_count;
    
    for (int i = 0; i < capture_count; ++i) {
        char *name = (char *)sr_audio_name(i, 1);
        /* Capture names are shifted by 0x40000 relative to output names */
        char *dst = (char *)SR_GLOBAL(uint32_t, 0x140404A70ULL) + (i << 9) + 0x40000;
        while (*name) {
            *dst++ = *name++;
        }
        *dst = 0;
    }
    
    int result = capture_count + 1;
    SR_GLOBAL(uint32_t, 0x144978CACULL) = result;
    return result;
}

/* 0x14006A5C0 */
int64_t sr_audio_check_enabled(void)
{
    if (audio_capture_enabled > 0) {
        return sub_140198E9F();
    }
    if (audio_output_enabled > 0) {
        return sub_140198E9F();
    }
    return 0;
}

/* 0x14006BB10 */
void sr_audio_mixer_thread(void)
{
    while (1) {
        /* Wait for semaphore at 0x140404A70 */
        SDL_SemWait((void *)SR_GLOBAL(uint32_t, 0x140404A70ULL));
        
        /* Spin until output is enabled and rings are different */
        while (!audio_output_enabled || 
               (audio_output_read_ring == audio_output_write_ring)) {
            // Assembly just loops here.
        }
        
        uint32_t frames = audio_output_frames;
        uint32_t ring = audio_output_write_ring;
        float *output = audio_output_ring[ring];
        
        /* 1. Clear the ring */
        for (int i = 0; i < frames; ++i) {
            output[2 * i] = 0.0f;
            output[2 * i + 1] = 0.0f;
        }
        
        audio_mixed_channels = 0;
        
        /* 2. Mix Emitters */
        for (int ch = 0; ch < 64; ++ch) {
            AudioChannel *record = &audio_channels[ch];
            if (!record->active) continue;
            
            /* Clear the spatializer buffer (mix_ring) for this channel */
            int32_t cursor = record->mix_cursor;
            for (int i = 0; i < frames; ++i) {
                record->mix_ring[cursor] = 0.0f;
                cursor = (cursor + 1) & 0x3FFFF;
            }
            
            /* Mix voices into the channel's mono ring */
            int has_active = 0;
            for (int v = 0; v < 8; ++v) {
                AudioVoice *voice = (AudioVoice *)((unsigned char *)record + 0xC);
                if (voice[v].active && audio_mix_channel(ch, v, record->mix_cursor, frames)) {
                    has_active = 1;
                }
            }
            
            record->mix_cursor = (frames + record->mix_cursor) & 0x3FFFF;
            
            /* Spatializer - not ported, use original */
            extern int64_t sub_14006A5F0(int channel, int count);
            sub_14006A5F0(ch, frames);
            
            record->stereo_cursor = (frames + record->stereo_cursor) & 0x3FFFF;
            
            /* Deactivate channel if no voices and not spatializing */
            if (!has_active && !(*(float *)&record->unknown_18 >= *(float *)&record->unknown_110150)) {
                record->active = 0;
            }
            if (record->unknown_04 == 1) {
                record->active = 0;
            }
            
            /* Accumulate spatialized stereo into output ring */
            float *stereo = (float *)record->unknown_100134;
            for (int i = 0; i < frames; ++i) {
                output[2 * i] += stereo[2 * i];
                output[2 * i + 1] += stereo[2 * i + 1];
            }
            ++audio_mixed_channels;
        }
        
        /* 3. Apply master gain */
        for (int i = 0; i < frames; ++i) {
            output[2 * i] *= audio_master_gain;
            output[2 * i + 1] *= audio_master_gain;
        }
        
        audio_output_write_ring ^= 1u;
    }
}

/* 0x14016D910 */
typedef struct STBI_Context {
    uint8_t unknown_00[0x28];
    void *read_func;               /* 0x28 */
    uint8_t unknown_30[4];         /* 0x30 */
    uint32_t total_requested;      /* 0x34 */
    uint8_t *buffer;               /* 0x38 */
    uint8_t unknown_40[0x80];
    uint32_t read_count;           /* 0xb8 */
    uint8_t *current_pos;          /* 0xc0 */
    uint32_t total_read;           /* 0xd0 */ 
    uint8_t unknown_d4[0x24];
    uint32_t status;               /* 0x120? Disassembly 0x30 relative to rdi? No. */
    uint8_t *end;                  /* 0xc8 */
} STBI_Context;

int64_t stbi_refill_buffer(STBI_Context *ctx)
{
    uint8_t *buffer = ctx->buffer;
    uint32_t requested = ctx->total_requested;
    
    typedef int (*stbi_read_fn)(void*, uint8_t*, uint32_t);
    stbi_read_fn read_f = (stbi_read_fn)ctx->read_func;
    
    int read_bytes = read_f(ctx, buffer, requested);
    
    /* Update read counts */
    uint32_t diff = ctx->total_read - ctx->total_requested;
    ctx->read_count += diff;
    
    /* Reset current position to buffer start */
    ctx->current_pos = buffer;
    
    if (read_bytes != 0) {
        ctx->end = buffer + read_bytes;
        return read_bytes;
    } else {
        /* Special case for empty read: mark end at buffer + 1 and null-terminate */
        ctx->status = 0;
        ctx->end = buffer + 1;
        *buffer = 0;
        return (int64_t)(uintptr_t)(buffer + 1);
    }
}
