/* The optional-index and signed-value reads over the bit reader: the
 * all-ones index meaning none, the top-bit sign extension, and the x86
 * shift-count wrap at 32 bits (widths 32, 64, -1, 255, 256). Every read
 * succeeds here: on a failed read the original observes its uninitialized
 * stack dword, which has no defined value to compare.
 */
// NC_WRAPPERS: 140115BD0 140115D20
#include <string.h>
#include "nc.h"
#include "net_bits.h"

#ifdef NC_NATIVE
#define read_optional(out,b) ((long long (*)(int *, int))NC_ADDR(0x140115BD0))(out,b)
#define read_signed(out,b)   ((long long (*)(int *, int))NC_ADDR(0x140115D20))(out,b)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_net_read_optional_index(int *, int);
long long sr_net_read_signed_bits(int *, int);
#define read_optional sr_net_read_optional_index
#define read_signed   sr_net_read_signed_bits
#else
#define read_optional net_read_optional_index
#define read_signed   net_read_signed_bits
#endif

static void run_case(int op, int n)
{
    static const int counts[] = {-3,-1,0,1,2,7,8,9,15,16,17,24,31,32,33,40,64,255,256};
    static const int positions[] = {0,1,4,32,100,1000,65528};
    static const int cursors[] = {0,1,2,3,4,5,6,7,8,9,31,32};
    nc_seed((uint64_t)op * 1000000 + n);
    int bits = counts[n % 19];
    int start = positions[(n / 19) % 7];
    int cursor = cursors[(n / 133) % 12];
    /* A failed read is excluded: keep the length ahead of the extent. */
    if (start + (bits >> 3) > NET_BUFFER_SIZE)
        start = 0;
    /* Reinitialize the buffers periodically; every case resets its cursors. */
    if (n % 97 == 0) {
        for (int i = 0; i < NET_BUFFER_SIZE + 16; i++) {
            net_write_buffer[i] = (uint8_t)nc_rand();
            net_read_buffer[i] = (uint8_t)nc_rand();
        }
    }
    net_read_position = start;
    net_read_bit = cursor;
    net_read_length = NET_BUFFER_SIZE;
    int out = (int)nc_rand();
    int *destination = &out;
    switch ((n / 1596) % 5) {
    case 1: destination = (int *)(void *)(net_read_buffer + 100); break;
    case 2: destination = &net_read_position; break;
    case 3: destination = &net_read_bit; break;
    case 4: destination = &net_read_length; break;
    }
    long long result = op == 0 ? read_optional(destination, bits)
                               : read_signed(destination, bits);
    nc_line("%d %d b%d p%d c%d out%d r%lld", op, n, bits, start, cursor, out,
            (long long)result);
    nc_line("buffers %016llx %016llx", (unsigned long long)nc_hash(net_read_buffer, NET_BUFFER_SIZE + 16),
            (unsigned long long)nc_hash(net_write_buffer, NET_BUFFER_SIZE + 16));
}

int main(void)
{
    nc_map_image();
    for (int op = 0; op < 2; op++)
        for (int n = 0; n < nc_cases(4000); n++)
            run_case(op, n);
    return 0;
}
