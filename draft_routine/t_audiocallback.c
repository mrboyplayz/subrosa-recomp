/* 
 * Comparison suite for audio mixer and output routines.
 *
 * Routines:
 *   0x140069400 - sr_audio_output_callback
 *   0x140069440 - sr_audio_enumerate_devices
 *   0x14006A5C0 - sr_audio_check_enabled
 *   0x14006BB10 - sr_audio_mixer_thread (DRAFT, NOT VERIFIED - relies on SDL/Threads)
 *   0x14016D910 - stbi_refill_buffer
 */

#include <string.h>
#include <stdint.h>
#include "nc.h"
#include "audio.h"

/* Prototypes for the draft routines */
void sr_audio_output_callback(void *userdata, void *output, int byte_count);
int64_t sr_audio_enumerate_devices(void);
int64_t sr_audio_check_enabled(void);
void sr_audio_mixer_thread(void);

typedef struct STBI_Context {
    uint8_t unknown_00[0x28];
    void *read_func;
    uint8_t unknown_30[4];
    uint32_t total_requested;
    uint8_t *buffer;
    uint8_t unknown_40[0x80];
    uint32_t read_count;
    uint8_t *current_pos;
    uint32_t total_read;
    uint8_t unknown_d4[0x24];
    uint32_t status;
    uint8_t *end;
} STBI_Context;
int64_t stbi_refill_buffer(STBI_Context *ctx);

/* Mock read function for stbi_refill_buffer */
int mock_stbi_read(void *ctx, uint8_t *buf, uint32_t len) {
    if (len == 0) return 0;
    memset(buf, 0xAB, len);
    return len;
}

static void test_stbi_refill(int n) {
    nc_seed(n);
    STBI_Context ctx;
    memset(&ctx, 0, sizeof(ctx));
    uint8_t buffer[1024];
    
    ctx.read_func = mock_stbi_read;
    ctx.buffer = buffer;
    ctx.total_requested = nc_rand_below(1024);
    ctx.total_read = nc_rand_below(2000);
    ctx.read_count = nc_rand_below(1000);
    
    int64_t res = stbi_refill_buffer(&ctx);
    
    nc_line("res %lld read_count %u end %p", res, ctx.read_count, (void *)ctx.end);
}

static void test_audio_enabled(int n) {
    nc_seed(n);
    nc_restore();
    audio_capture_enabled = nc_rand() ? 1 : 0;
    audio_output_enabled = nc_rand() ? 1 : 0;
    
    int64_t res = sr_audio_check_enabled();
    nc_line("res %lld", res);
}

int main(void) {
    nc_map_image();
    
    /* Save state for routines that modify globals */
    nc_save(&audio_output_read_ring, sizeof(uint32_t));
    nc_save(&audio_output_write_ring, sizeof(uint32_t));
    nc_save(&audio_capture_enabled, sizeof(uint32_t));
    nc_save(&audio_output_enabled, sizeof(uint32_t));
    nc_save((void *)0x144970CA0, 0x1000);
    nc_save((void *)0x144978CAC, 0x1000);
    nc_save((void *)0x140404A70, 0x100000);
    
    for (int n = 0; n < nc_cases(1000); n++) {
        test_stbi_refill(n);
        test_audio_enabled(n);
    }
    
    return 0;
}
