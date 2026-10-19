#include <string.h>
#include "net_bits.h"
#include "arith.h"

int net_read_bytes(void *destination, int element_size, int count)
{
    int32_t position = net_read_position;
    if (position >= NET_BUFFER_SIZE)
        return 0;
    int32_t size = multiply_int(count, element_size);
    if (add_int(size, position) > net_read_length)
        return 0;
    if (net_read_bit > 0) {
        position = add_int(position, 1);
        net_read_bit = 0;
        net_read_position = add_int(net_read_position, 1);
    }
    /* The original CRT copy handles overlap as memmove does. */
    memmove(destination, net_read_buffer + position, (size_t)size);
    /* Read the cursor again: destination may have overwritten it. */
    net_read_position = add_int(net_read_position, size);
    return 1;
}

int net_write_bytes(const void *source, int element_size, int count)
{
    int32_t position = net_write_position;
    if (position >= NET_BUFFER_SIZE)
        return 0;
    if (net_write_bit > 0) {
        position = add_int(position, 1);
        net_write_bit = 0;
        net_write_position = add_int(net_write_position, 1);
    }
    int32_t size = multiply_int(count, element_size);
    memmove(net_write_buffer + position, source, (size_t)size);
    net_write_position = add_int(net_write_position, size);
    return 1;
}
