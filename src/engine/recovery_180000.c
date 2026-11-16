/* Pure float spline evaluation: the cubic Bernstein-basis point of the
 * game's curve polynomial, degree 3. The original address is the folded
 * instruction tail of the curve-point routine that begins at 0x140187180
 * (the routine the executable names sr_math_curve_point_route, rewritten in
 * src/engine/math_curve.c): every call to it runs through the degree-3
 * branch of the twin entry 0x14008EC40, and 0x140187270 is reachable only
 * by fall-through. Leaf routine: the original keeps everything in XMM
 * registers and returns the point in xmm0.
 *
 * Note on the original's parameter conventions, copied as observed: the
 * address receives only four live inputs (the degree in ecx, t at xmm0,
 * then point1 at xmm1, point2 at xmm2, point3 on the stack) and leaves the
 * point2 register unread; the decompiler's a5/a6 view and its deep-stack
 * displacement are the homed xmm3 register. 0x140187270 */
float spline_180000_evaluate(int degree, float t, float point0, float point1,
                             float point2, float point3)
{
    float one = 1.0f; /* 0x1402783f4 = 1.0f */
    float three = 3.0f; /* 0x140278644 = 3.0f */

    if (degree != 3)
        return 0.0f;
    float remaining = one - t;
    float scaled = point1 * three;
    /* Order of operations is part of the contract (src/engine/README.md);
     * -ffp-contract=off keeps the port from re-associating. The machine
     * multiplies point1 by three once and reuses it in both terms. */
    return ((scaled * remaining + t * point3) * t
            + remaining * remaining * scaled) * t
           + remaining * remaining * (remaining * point0);
}
