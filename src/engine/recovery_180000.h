/* Pure float routines recovered from the 0x180000 range of subrosa.exe.
 * Each function gives the same result, bit for bit, as the routine of the
 * original executable at the address named next to it (the order of the
 * floating-point operations is part of that and must not be rearranged). */
#ifndef SR_ENGINE_RECOVERY_180000_H
#define SR_ENGINE_RECOVERY_180000_H

/* Cubic spline evaluation. The decompiler's five-argument view (float bits
 * in the low word of the fourth, a fifth that is the homed register's high
 * half) is kept by the client wrapper; the original receives three control
 * values. 0x140187270 */
float spline_180000_evaluate(float t, float a2, float a3, float a4);

#endif
