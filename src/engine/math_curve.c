/* Curve point and derivative of the game's Bezier-style polynomials
 * (Bernstein basis, degrees 1..3). Each function gives the same result, bit
 * for bit, as the routine of the original executable named next to it; the
 * order of the floating-point operations is part of that and must not be
 * rearranged (src/engine/README.md, verified by the curve native suite).
 */

/* The point at fraction t on the curve of a degree 1..3 through the four
   control points. A degree outside 1..3 leaves the original's result
   register holding the low word of its homed first-parameter stack slot: an
   uninitialized float that no game caller observes (degrees come from curve
   records). The clean engine returns a defined zero instead, and the native
   comparison never drives such a degree. 0x14008EC40 */
float math_curve_point(int degree, float t, float point0, float point1, float point2, float point3)
{
    float remaining = 1.0f - t;
    if (degree == 1)
        return remaining * point0 + t * point3;
    float last = t * point3;
    float first = remaining * point0;
    if (degree == 2)
        return ((point1 + point1) * remaining + last) * t + first * remaining;
    if (degree == 3)
        return (remaining * remaining * (point1 * 3.0f)
                + ((point2 * 3.0f) * remaining + last) * t) * t
               + first * remaining * remaining;
    return 0.0f;
}

/* The derivative of the same curve at t. The out-of-range degree contract is
   the same as math_curve_point's. 0x1401872F0 */
float math_curve_derivative(int degree, float t, float point0, float point1, float point2, float point3)
{
    if (degree == 1)
        return point3 - point0;
    float doubled = t + t;
    if (degree == 2)
        return ((point0 - (point1 + point1)) + point3) * doubled
               - (point0 + point0) + (point1 + point1);
    if (degree == 3)
        return ((((point1 * 3.0f) - point0) - (point2 * 3.0f)) + point3) * t * (t * 3.0f)
             + (((point0 * 3.0f) - (point1 * 6.0f)) + (point2 * 3.0f)) * doubled
             - (point0 * 3.0f)
             + (point1 * 3.0f);
    return 0.0f;
}
