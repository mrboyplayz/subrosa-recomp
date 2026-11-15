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

/* Adaptive value reader with a no-change flag: when the flag at
   0x16B2A224C is set and the first bit reads zero the value is the base,
   otherwise a bit pair picks the full signed word of the given bits, or
   one of the two widths at 0x165D84960/0x165D84964; the word is
   sign-extended from its top bit and added to the base, and when the value
   plus 128 fits a byte the histogram dword at its byte grows and the
   address of 0x16B165F60 is returned, the rest the integer. 0x14018D5E0. */
int64_t net_read_adaptive_value(int *out, int base, int bits);

#endif
