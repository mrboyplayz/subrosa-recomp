/* Routines recovered from the 0x0C0000 region of subrosa.exe.
 * Each function gives the same result, bit for bit, as the routine of the
 * original executable at the address named next to it. */
#ifndef SR_ENGINE_RECOVERY_0C0000_H
#define SR_ENGINE_RECOVERY_0C0000_H

#include <stdint.h>

/* Token scanner: skips characters that are not alnum (a NUL stops the
 * skip) until the cursor reaches 62, then copies alnum characters into
 * out (NUL-terminated) until a NUL or the cursor reaches 62, advancing
 * the cursor past everything consumed. '.' is part of a token. Returns 1
 * when a token was read, 0 otherwise. 0x1400C8AD0 */
int recovery_scan_token(uint8_t *out, const uint8_t *src, int *cursor);

/* The same scanner, its copy loop accepting alnum only (no '.' case in the
 * original). 0x1400C8BA0 */
int recovery_scan_token_no_dot(uint8_t *out, const uint8_t *src, int *cursor);

#endif
