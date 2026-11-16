/* Cubic spline evaluation: 0x140187270. */
#include "nc.h"
#include "recovery_180000.h"

#ifdef NC_NATIVE
#define spline_180000_evaluate(t, a2, a3, a4) \
    ((float (*)(float, float, float, float))NC_ADDR(0x140187270))((t), (a2), (a3), (a4))
#endif

int main(void)
{
    nc_map_image();
    int cases = nc_cases(300);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        /* Boundaries first, then ordinary and edge-value floats. */
        float t = n < 4 ? (n == 0 ? 0.0f : n == 1 ? 1.0f : n == 2 ? -1.0f : 2.0f)
                        : nc_float(-3.0f, 3.0f);
        float a2 = nc_float(-10.0f, 10.0f);
        float a3 = nc_float(-10.0f, 10.0f);
        float a4 = nc_float(-10.0f, 10.0f);
        float result = spline_180000_evaluate(t, a2, a3, a4);
        nc_line("case %d t %g a2 %g a3 %g a4 %g", n, t, a2, a3, a4);
        nc_floats("  result", &result, 1);
    }
    return 0;
}
