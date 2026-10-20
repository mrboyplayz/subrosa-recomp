/* Low-bit-first packet streams. The native routines check their starting
   position, so callers must allow a write to cross the 64 KiB boundary. */
#ifndef SR_ENGINE_NET_BITS_H
#define SR_ENGINE_NET_BITS_H
#include "memory.h"

#define NET_BUFFER_SIZE 65536
#define net_write_position SR_GLOBAL(int32_t, 0x18539D3FCULL)
#define net_write_bit SR_GLOBAL(int32_t, 0x18539D400ULL)
#define net_write_buffer (&SR_GLOBAL(uint8_t, 0x18539D404ULL))
#define net_read_length SR_GLOBAL(int32_t, 0x1853AD418ULL)
#define net_read_position SR_GLOBAL(int32_t, 0x1853AD41CULL)
#define net_read_bit SR_GLOBAL(int32_t, 0x1853AD420ULL)
#define net_read_buffer (&SR_GLOBAL(uint8_t, 0x1853AD424ULL))

/* Retain the x86 shift-count wrap at 32 bits, and the original preliminary
   length check. Failure leaves value and stream state untouched. */
int net_read_bits(uint32_t *value, int bits); /* 0x140115AE0 */
int net_read_bits_scaled(uint32_t *value, int bits, uint32_t scale); /* 0x140115C20 */
int net_write_bits(const uint32_t *value, int bits); /* 0x140115D90 */
/* Divisor must be nonzero unless the initial buffer-full check fails. */
int net_write_bits_scaled(const uint32_t *value, int bits, uint32_t divisor); /* 0x140115E80 */
/* Original adapters always report success, including for a full buffer. */
int net_write_bits_always_success(const uint32_t *value, int bits); /* 0x140115E60 */
int net_write_bits_always_success_alt(const uint32_t *value, int bits); /* 0x140115F70 */

/* Byte transfers align a positive bit cursor before copying. The read
   length check precedes alignment. The wrapped product size*count must be
   a nonnegative accessible byte extent. Overlapping storage is allowed. */
int net_read_bytes(void *destination, int element_size, int count); /* 0x14007ADF0 */
int net_write_bytes(const void *source, int element_size, int count); /* 0x14007B180 */

/* Signed magnitude angle quantization, using the native 64-bit truncating
   conversion and x86 bit-width shifts, followed by the basic bit writer. */
int net_write_angle(const float *angle, int bits); /* 0x14010E610 */

/* Clamped signed-magnitude values. The float-to-integer conversion uses
   a 64-bit destination before retaining its low word. 0x1401151C0/0x1401150E0. */
double net_write_magnitude(const float *value, float range, int bits);
void net_write_vector_delta(const float value[3], const float reference[3], float range, int bits);
/* Major axis plus two signed ratios. Preserves scalar store order for
   overlapping arrays and the final conversion in RAX. 0x140115230 */
uint64_t net_encode_direction(uint32_t out[3], const float value[3], int bits);

#endif
