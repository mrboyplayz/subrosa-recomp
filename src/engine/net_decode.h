/* Packet decoders: sign-magnitude words and adaptive deltas read through
   the bit layer of net_bits.h. */
#ifndef SR_ENGINE_NET_DECODE_H
#define SR_ENGINE_NET_DECODE_H
#include "net_bits.h"

/* Sign-magnitude angle over a full turn: the magnitude word times the 2*pi
   quantum, with the product taken in double precision and rounded to float
   once. Returns the sign word, which also negates the output when read.
   0x14018D440. */
uint32_t net_read_angle(float *out, int bits);

/* Signed fraction of a scale, entirely in single precision:
   magnitude / (half range / scale). Same sign word return and negation.
   0x140192560. */
uint32_t net_read_scaled_fraction(float *out, float scale, int bits);

/* Adaptive increment over base: flags read then 11 a raw word of the given
   width (its own success word returned), 10 a nine-bit signed delta, 0 an
   alternate four-bit one. Both flag reads reuse one word, so a follow-up
   read that fails leaves the flag bits. 0x14018D510. */
uint32_t net_read_delta(uint32_t *out, int32_t base, int bits);

#endif
