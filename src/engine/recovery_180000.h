/* Pure float routines recovered from the 0x180000 range of subrosa.exe.
 * Each function gives the same result, bit for bit, as the routine of the
 * original executable at the address named next to it (the order of the
 * floating-point operations is part of that and must not be rearranged). */
#ifndef SR_ENGINE_RECOVERY_180000_H
#define SR_ENGINE_RECOVERY_180000_H

/* Cubic spline evaluation, the degree-3 branch of the curve point whose
 * twin entry begins at 0x140187180. The clean engine keeps the curve ABI:
 * a degree outside 3 returns a defined zero (the original leaves its
 * result register holding the low word of its homed first-parameter slot,
 * an uninitialized float no game caller observes). 0x140187270 */
float spline_180000_evaluate(int degree, float t, float point0, float point1,
                             float point2, float point3);

#endif
