/* Pure float spline evaluation (a cubic Bernstein basis over three control
 * values, degree 3). Leaf routine: the original keeps everything in XMM
 * registers and a single stack slot, uses no memory beyond the parameter
 * slot, and returns in xmm0.
 *
 * Note on the original's parameter conventions, copied as observed: the
 * address 0x140187270 receives only four parameters (t at xmm0, then a2 at
 * xmm1, a3 at xmm2, a4 at xmm3). The decompiler's a5 is the high half of
 * the homed xmm3 register — the meaningful float is a4's low word — so the
 * game's callers pass exactly three control values. The clean port takes
 * four parameters and returns a float. 0x140187270 */
float spline_180000_evaluate(float t, float a2, float a3, float a4)
{
    float one = 1.0f; /* 0x1402783f4 = 1.0f */
    float three = 3.0f; /* 0x140278644 = 3.0f */

    float remaining = one - t;
    /* Order of operations is part of the contract (src/engine/README.md);
     * -ffp-contract=off keeps the port from re-associating. */
    return ((a4 * three * remaining + t * a4) * t
            + remaining * remaining * (a3 * three)) * t
           + remaining * remaining * (remaining * a2);
}
