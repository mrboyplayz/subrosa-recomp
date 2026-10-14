/* The main packet bit streams. These routines preserve the native boundary
 * checks, including checking only the initial write position. Callers must
 * provide enough storage for a multi-byte operation crossing that boundary.
 */
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

int net_read_bits(uint32_t *value, int bits); /* 0x140115AE0 */
int net_read_bits_scaled(uint32_t *value, int bits, uint32_t scale); /* 0x140115C20 */
int net_write_bits(const uint32_t *value, int bits); /* 0x140115D90 */
int net_write_bits_scaled(const uint32_t *value, int bits, uint32_t divisor); /* 0x140115E80; nonzero divisor */
/* The two original adapters always report success, even for a full buffer. */
int net_write_bits_e60(const uint32_t *value, int bits); /* 0x140115E60 */
int net_write_bits_f70(const uint32_t *value, int bits); /* 0x140115F70 */
int net_write_angle(const float *angle, int bits); /* 0x14010E610 */
/* Byte transfers align a partially consumed byte first. The native read
 * length check precedes that alignment; writes check only their start.
 * The wrapped 32-bit product of element_size and count must be a valid
 * accessible byte extent. The original copy also supports overlap. */
int net_read_bytes(void *destination, int element_size, int count); /* 0x14007ADF0 */
int net_write_bytes(const void *source, int element_size, int count); /* 0x14007B180 */
#endif
