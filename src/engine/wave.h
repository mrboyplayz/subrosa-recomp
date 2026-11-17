/* The original's WAV loading API: thin renames onto the SDL2 imports the
 * original binary called through its import address table. Kept in sync
 * with the client record in src/client/shared_client.h.
 */
#ifndef SR_ENGINE_WAVE_H
#define SR_ENGINE_WAVE_H

typedef struct {
 int freq; unsigned short format; unsigned char channels, silence;
 unsigned short samples, padding; unsigned size; void *callback, *userdata;
} sr_wave_spec;

extern void *sr_wave_file(const char *, const char *) __asm__("SDL_RWFromFile");
extern void *sr_wave_load(void *, int, sr_wave_spec *, unsigned char **, unsigned *) __asm__("SDL_LoadWAV_RW");
extern void sr_wave_free(unsigned char *) __asm__("SDL_FreeWAV");

#endif
