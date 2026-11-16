/* The texture atlases: 196,664 bytes each at 0x1A7971DC0 (see renderer.h),
 * the white texture the flat-colour draws bind, and the odd packing loop the
 * original runs after every upload. */
#ifndef SR_ENGINE_TEXTURE_ATLAS_H
#define SR_ENGINE_TEXTURE_ATLAS_H

#include "memory.h"

/* Word at 0x1B0037420: the next free slot the packer scans from. A copy of
 * it is kept at 0x1B0037424, and the scanned column words begin at
 * 0x1B0037428. */
#define texture_atlas_next_free   (&SR_GLOBAL(int32_t, 0x1B0037420ULL))
#define texture_atlas_next_free_2 (&SR_GLOBAL(int32_t, 0x1B0037424ULL))

/* Word at 0x1A7971DC8: the pixel buffer of the white texture. */
#define texture_atlas_pixels      SR_GLOBAL(uint64_t, 0x1A7971DC8ULL)

/* Grows the atlas texture to a2 x a1 pixels: stores the sizes, clears the
 * used-slot count, frees the old pixels, allocates 4 * width * height bytes
 * filled with 0xFF, creates and binds a new GL texture (clamp to edge, linear
 * filtering, in that order) and uploads the blank image. Returns 0.
 * 0x14006CA30 */
int texture_atlas_init(unsigned int a1, unsigned int a2);

/* Loads the pixels of `path` and packs the image into atlas `atlas`:
 * returns the entry index (the count before this entry was added), or -1
 * when the atlas is full or the load fails. The image is skipped whenever
 * any column it would sit on is already taken, and the entry lands at the
 * next free slot that column scan leaves. 0x140068FC0 */
int texture_atlas_load(int atlas, const char *path);

#endif
