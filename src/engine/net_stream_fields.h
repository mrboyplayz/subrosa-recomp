#ifndef NET_STREAM_FIELDS_H
#define NET_STREAM_FIELDS_H
#include <stdint.h>

/* Read/write an optional index through the client's packet stream. */
uint64_t net_stream_optional_index(int stream, uint32_t *value, char bits, int writing);
/* Read/write a signed field; the return preserves the original sign-path
 * result (zero for a nonnegative read), not necessarily the output word. */
uint64_t net_stream_signed_field(int stream, uint32_t *value, char bits, int writing);

#endif
