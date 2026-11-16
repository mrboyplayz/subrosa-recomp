// NC_WRAPPERS: 14007B990 14007B6F0
/* The camera's model: set from a position and orientation (both optional)
 * starting from the original's constant rows, scaled on three axes, with the
 * model, model * view and model * view * projection recomputed; the scale
 * leaves the first three products alone. Every matrix is compared bit for
 * bit, with inputs that include NaN, infinities and zeros. */
#include <string.h>
#include "nc.h"
#include "camera.h"

#ifdef NC_NATIVE
#define set_model(p, r) ((void (*)(const float *, const float *))NC_ADDR(0x14007B990))(p, r)
#define scale_model(x, y, z) ((void (*)(float, float, float))NC_ADDR(0x14007B6F0))(x, y, z)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_camera_set_model(unsigned *, unsigned *);
long long sr_camera_scale_model(float, float, float);
#define set_model(p, r) sr_camera_set_model((unsigned *)(p), (unsigned *)(r))
#define scale_model(x, y, z) sr_camera_scale_model(x, y, z)
#else
#define set_model camera_set_model
#define scale_model camera_scale_model
#endif

int main(void)
{
    nc_map_image();
    nc_save(renderer_camera, sizeof(RendererCamera));
    for (int n = 0; n < nc_cases(3000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        for (size_t k = 0; k < sizeof(RendererCamera); k++)
            ((uint8_t *)renderer_camera)[k] = (uint8_t)nc_rand();
        float position[3], rotation[9];
        for (int k = 0; k < 3; k++)
            position[k] = nc_float(-20, 20);
        for (int k = 0; k < 9; k++)
            rotation[k] = nc_float(-1, 1);
        int have_position = nc_chance(75), have_rotation = nc_chance(75);
        nc_set_mxcsr(0x1F80);
        set_model(have_position ? position : NULL, have_rotation ? rotation : NULL);
        int scaled = nc_chance(40);
        if (scaled)
            scale_model(nc_float(-3, 3), nc_float(-3, 3), nc_float(-3, 3));
        uint32_t words[6 * 16];
        const float *m = &renderer_camera->projection[0];
        for (int k = 0; k < 96; k++)
            memcpy(&words[k], m + k, 4);
        for (int k = 0; k < 96; k++)
            if ((words[k] & 0x7FFFFFFF) > 0x7F800000) words[k] = 0x7FC00000;
        nc_line("n%d pos %d rot %d scale %d camera %016llx", n, have_position, have_rotation, scaled,
                (unsigned long long)nc_hash(words, sizeof words));
        if (n == 1) {
            nc_line("m0 %08x %08x %08x %08x", words[0], words[1], words[2], words[3]);
            nc_line("m32 %08x %08x %08x %08x", words[32], words[33], words[34], words[35]);
            nc_line("m64 %08x %08x %08x %08x", words[64], words[65], words[66], words[67]);
        }
    }
    return 0;
}
