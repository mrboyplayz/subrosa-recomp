/* Image decoding (stb_image as built into the original). */
#ifndef SR_ENGINE_IMAGE_H
#define SR_ENGINE_IMAGE_H

/* Returns `pixels` itself when the channel counts are equal; otherwise a new
 * buffer, freeing `pixels`. On failure frees `pixels`, stores the reason in
 * `*failure` (the decoder's per-thread failure reason) and returns NULL.
 * 0x14015D7E0. */
unsigned char *image_convert_channels(unsigned char *pixels, int source_channels, int channels,
                                      unsigned int width, unsigned int height, const char **failure);

#endif
