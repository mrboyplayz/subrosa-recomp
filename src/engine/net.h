/* Network packets. */
#ifndef SR_ENGINE_NET_H
#define SR_ENGINE_NET_H

#include <stdint.h>

/* ---- bit streams (net_bits.c) --------------------------------------------- */

/* Appends the low `bits` bits of *value to the packet being written; 0 when
   the packet is full (64 KB). 0x140115D90; also 0x140115E60 and 0x140115F70,
   which return 1 whatever happens. */
int net_write_bits(const uint32_t *value, int bits);

/* Appends the low `bits` bits of *value / divisor (unsigned), ORing into
   bytes already written instead of clearing them first. 0x140115E80 */
int net_write_bits_scaled(const uint32_t *value, int bits, uint32_t divisor);

/* Appends an angle in radians as bits - 1 bits of turns (its size, wrapped)
   and a sign bit on top, set for negative and NaN angles. 0x14010E610 */
int net_write_angle(const float *angle, int bits);

/* Reads the next `bits` bits of the packet being read; 0 (and *value left
   alone) when they would pass its end or the buffer's. 0x140115AE0 */
int net_read_bits(uint32_t *value, int bits);

/* net_read_bits() times `scale`. 0x140115C20 */
int net_read_bits_scaled(uint32_t *value, int bits, int32_t scale);

/* net_read_bits() with all ones read as -1. Always returns 1; when the read
   fails the original stores an unset local, 0 here. 0x140115BD0 */
int net_read_bits_or_none(int32_t *value, int bits);

/* net_read_bits() sign-extended from `bits` bits. Always returns 1; when
   the read fails the original stores an unset local, 0 here. 0x140115D20 */
int net_read_bits_signed(int32_t *value, int bits);

#endif
