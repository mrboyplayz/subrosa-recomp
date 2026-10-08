/* Conversion of decoded pixels between channel counts (0x14015D7E0).
 *
 * This is stb_image's stbi__convert_format as the original was built with it:
 * 1 = grey, 2 = grey + alpha, 3 = red green blue, 4 = red green blue alpha.
 */
#include <limits.h>
#include "crt.h"
#include "image.h"

static const uint16_t stb_image_file[] = u"C:\\visualc2010\\code\\csl03\\stb/stb_image.h";

static unsigned char image_luma(unsigned int red, unsigned int green, unsigned int blue)
{
    return (unsigned char)((red * 77 + green * 150 + blue * 29) >> 8);
}

/* width * channels * height as an allocation size, or 0 when it does not fit an int. */
static int image_buffer_size(int channels, int width, int height, int *size)
{
    int row;

    if (channels < 0 || width < 0)
        return 0;
    if (width != 0 && channels > INT_MAX / width)
        return 0;
    row = (int)((unsigned int)channels * (unsigned int)width);
    if (row < 0 || height < 0)
        return 0;
    if (height != 0 && row > INT_MAX / height)
        return 0;
    *size = (int)((unsigned int)row * (unsigned int)height);
    return 1;
}

unsigned char *image_convert_channels(unsigned char *pixels, int source_channels, int channels,
                                      unsigned int width, unsigned int height, const char **failure)
{
    unsigned char *converted;
    int size;

    if (channels == source_channels)
        return pixels;
    if (!(channels >= 1 && channels <= 4))
        crt_wassert(u"req_comp >= 1 && req_comp <= 4", stb_image_file, 0x6a4);

    if (!image_buffer_size(channels, (int)width, (int)height, &size)
        || (converted = crt_malloc((size_t)(int64_t)size)) == NULL) {
        crt_free(pixels);
        *failure = "outofmem";
        return NULL;
    }

    for (int row = 0; row < (int)height; row++) {
        /* Row offsets are 32-bit products, as in the original. */
        const unsigned char *in = pixels + (uint32_t)row * (uint32_t)source_channels * width;
        unsigned char *out = converted + (uint32_t)row * (uint32_t)channels * width;
        int left = (int)width - 1;

        switch (source_channels * 8 + channels) {
        case 1 * 8 + 2:
            for (; left >= 0; left--, in += 1, out += 2) {
                out[0] = in[0];
                out[1] = 255;
            }
            break;
        case 1 * 8 + 3:
            for (; left >= 0; left--, in += 1, out += 3)
                out[0] = out[1] = out[2] = in[0];
            break;
        case 1 * 8 + 4:
            for (; left >= 0; left--, in += 1, out += 4) {
                out[0] = out[1] = out[2] = in[0];
                out[3] = 255;
            }
            break;
        case 2 * 8 + 1:
            for (; left >= 0; left--, in += 2, out += 1)
                out[0] = in[0];
            break;
        case 2 * 8 + 3:
            for (; left >= 0; left--, in += 2, out += 3)
                out[0] = out[1] = out[2] = in[0];
            break;
        case 2 * 8 + 4:
            for (; left >= 0; left--, in += 2, out += 4) {
                out[0] = out[1] = out[2] = in[0];
                out[3] = in[1];
            }
            break;
        case 3 * 8 + 4:
            for (; left >= 0; left--, in += 3, out += 4) {
                out[0] = in[0];
                out[1] = in[1];
                out[2] = in[2];
                out[3] = 255;
            }
            break;
        case 3 * 8 + 1:
            for (; left >= 0; left--, in += 3, out += 1)
                out[0] = image_luma(in[0], in[1], in[2]);
            break;
        case 3 * 8 + 2:
            for (; left >= 0; left--, in += 3, out += 2) {
                out[0] = image_luma(in[0], in[1], in[2]);
                out[1] = 255;
            }
            break;
        case 4 * 8 + 1:
            for (; left >= 0; left--, in += 4, out += 1)
                out[0] = image_luma(in[0], in[1], in[2]);
            break;
        case 4 * 8 + 2:
            for (; left >= 0; left--, in += 4, out += 2) {
                out[0] = image_luma(in[0], in[1], in[2]);
                out[1] = in[3];
            }
            break;
        case 4 * 8 + 3:
            for (; left >= 0; left--, in += 4, out += 3) {
                out[0] = in[0];
                out[1] = in[1];
                out[2] = in[2];
            }
            break;
        default:
            crt_wassert(u"0", stb_image_file, 0x6c1);
            crt_free(pixels);
            crt_free(converted);
            *failure = "unsupported";
            return NULL;
        }
    }

    crt_free(pixels);
    return converted;
}
