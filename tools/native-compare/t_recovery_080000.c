// NC_WRAPPERS: 140081CC0 14009E7D0 14009E880
#include <string.h>
#include "nc.h"
#include "recovery_080000.h"

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(1000); ++n) {
        nc_seed(n);
        float v[3], c[3];
        for (int i = 0; i < 3; ++i) {
            v[i] = nc_float(-10.0f, 10.0f);
            c[i] = nc_float(-1.0f, 1.0f);
        }
        float a3 = nc_float(0.1f, 10.0f);
        float a4 = nc_float(0.1f, 10.0f);
        float a5 = nc_float(0.1f, 10.0f);

        float result = sr_recovery_080081CC0(v, c, a3, a4, a5);
        nc_line("res %f", result);

        // (000000014009E7D0) Euler decomposition of a rotation matrix.
        float src[9], out_a[3];
        for (int i = 0; i < 9; ++i) {
            src[i] = nc_float(-2.0f, 2.0f);
        }
        sr_recovery_08009E7D0(out_a, src);
        nc_line("euler %f %f %f", out_a[0], out_a[1], out_a[2]);

        // (000000014009E880) Same decomposition, in-place mutating variant.
        float m[9], out_b[3];
        for (int i = 0; i < 9; ++i) {
            m[i] = nc_float(-2.0f, 2.0f);
        }
        int rc = sr_recovery_08009E880(out_b, m);
        nc_line("euler2 %d %f %f %f", rc, out_b[0], out_b[1], out_b[2]);
    }
    return 0;
}
