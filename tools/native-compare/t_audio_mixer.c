// NC_WRAPPERS: 14006A5C0
/* The audio devices' pause (0x14006A5C0): each device word is read as signed
   and the device is resumed only when its word is positive, capture first,
   then output; the second call is the original's tail call through its SDL
   import (0x14006A5E1 falls to 0x140198E9F, SDL_PauseAudioDevice). The
   native build binds the exe's SDL_PauseAudioDevice import to a recording
   stub; the port build defines the same stub so the C port's direct calls
   land on it too, and both prints the observed call log. */
#include <stdio.h>
#include "nc.h"
#include "audio.h"

#define MAX_CALLS 4

static uint64_t pause_calls;
static uint32_t last_devices[MAX_CALLS];
static int last_flags[MAX_CALLS];

static void recording_pause(int device, int pause_on)
{
    int slot = (int)(pause_calls & (MAX_CALLS - 1));
    last_devices[slot] = (uint32_t)device;
    last_flags[slot] = pause_on;
    pause_calls++;
}

#ifdef NC_NATIVE
#define pause_devices() ((void (*)(void))NC_ADDR(0x14006A5C0))()
#elif defined(NC_CLIENT_WRAPPERS)
void sr_audio_pause_devices(void);
static void pause_devices(void) { sr_audio_pause_devices(); }
#else
/* the C port calls SDL's pause directly; the fixture's definition of the
   same routine records it in the port build as well */
#define pause_devices audio_pause_devices
void SDL_PauseAudioDevice(int device, int pause_on) { recording_pause(device, pause_on); }
#endif

int main(void)
{
#ifdef NC_NATIVE
    nc_bind_import("SDL2.dll", "SDL_PauseAudioDevice", recording_pause);
#endif
    nc_map_image();
    /* every flavor of the two device words: zero, one, the negative words,
       both signed extremes, and random garbage */
    static const uint32_t specials[] = {0x00000000, 0x00000001, 0x80000000, 0x7FFFFFFF,
                                        0xFFFFFFFF, 0x00000003, 0xFFFFFFFE, 0x00001000};
    int cases = nc_cases(2000);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        pause_calls = 0;
        for (int k = 0; k < MAX_CALLS; k++) { last_devices[k] = 0; last_flags[k] = 0; }
        audio_output_enabled = (n % 3 == 0) ? specials[n % 8] : (uint32_t)nc_rand();
        audio_capture_enabled = (n % 3 == 1) ? specials[(n / 3) % 8] : (uint32_t)nc_rand();
        uint32_t out_bits = audio_output_enabled;
        uint32_t cap_bits = audio_capture_enabled;
        pause_devices();
        nc_line("case %d out %08x cap %08x calls %llu", n, out_bits, cap_bits,
                (unsigned long long)pause_calls);
        for (int k = 0; k < MAX_CALLS; k++)
            nc_line("  call %d device %08x flag %d", k, last_devices[k], last_flags[k]);
    }
    return 0;
}
