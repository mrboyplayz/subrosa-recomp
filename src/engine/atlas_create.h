/* Making the first atlas texture: its size words at 0x1A7971DA0 and
 * 0x1A7971DA4 (just before the atlas records), the texture object in the
 * record's first word (0x1A7971DC0), the pixel buffer pointer at 0x1A7971DC8
 * and a counter at 0x1A7971DD0, which is cleared. */
#ifndef SR_ENGINE_ATLAS_CREATE_H
#define SR_ENGINE_ATLAS_CREATE_H
#include "memory.h"

/* Sets the size, clears the counter, frees the old pixel buffer, allocates
 * width * height * 4 bytes of 0xFF, creates a texture object and gives it
 * clamped, linear filtering and an RGBA image from the buffer. Returns 0.
 * 0x14006CA30 */
int64_t atlas_create(uint32_t width, uint32_t height);
#endif
