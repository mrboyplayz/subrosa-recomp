/* Routines recovered from the 0x0C0000 region of subrosa.exe.
 * Each function gives the same result, bit for bit, as the routine of the
 * original executable at the address named next to it. */
#ifndef SR_ENGINE_RECOVERY_0C0000_H
#define SR_ENGINE_RECOVERY_0C0000_H

#include <stdint.h>
#include <xmmintrin.h>

/* Token scanner: skips characters that are not alnum (a NUL stops the
 * skip) until the cursor reaches 62, then copies alnum characters into
 * out (NUL-terminated) until a NUL or the cursor reaches 62, advancing
 * the cursor past everything consumed. '.' is part of a token. Returns 1
 * when a token was read, 0 otherwise. 0x1400C8AD0 */
int recovery_scan_token(uint8_t *out, const uint8_t *src, int *cursor);

/* The same scanner, its copy loop accepting alnum only (no '.' case in the
 * original). 0x1400C8BA0 */
int recovery_scan_token_no_dot(uint8_t *out, const uint8_t *src, int *cursor);

/* Bilinear value noise: the four corners of the lattice cell under (x, y)
 * each carry a hashed value (lattice rows 57 wide, x and y wrapped by the
 * mask after their +1), blended by the fractional parts of x and y. The
 * result is in lane 0 of the returned vector. 0x1400D47A0 */
__m128 recovery_noise_bilinear(float x, float y, int mask);

#endif
