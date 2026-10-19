// NC_WRAPPERS: 14007ADF0 14007B180
#include <string.h>
#include "nc.h"
#include "net_bits.h"

#ifdef NC_NATIVE
#define read_bytes(p,s,n) ((uint64_t (*)(void *, int, int))NC_ADDR(0x14007ADF0))(p,s,n)
#define write_bytes(p,s,n) ((uint64_t (*)(const void *, int, int))NC_ADDR(0x14007B180))(p,s,n)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14007ADF0(void *, int, int);
long long sub_14007B180(void *, int, int);
#define read_bytes sub_14007ADF0
#define write_bytes sub_14007B180
#else
#define read_bytes net_read_bytes
#define write_bytes net_write_bytes
#endif

static void transfer(int op, int n)
{
    static const int sizes[][2] = {{0,1},{1,0},{1,1},{1,7},{2,9},{4,16},{16,8},
        {0x40000000,4},{-1,-7},{0x40000001,4},{0x20000001,8}};
    static const int positions[] = {0,1,12,65520,65534,65535,65536,65537};
    static const int bits[] = {0,1,7,8,32,-1};
    uint8_t arena[512];
    nc_seed((uint64_t)op * 100000 + n);
    if (n % 97 == 0)
        for (int i = 0; i < NET_BUFFER_SIZE + 256; i++) {
            net_read_buffer[i] = (uint8_t)nc_rand();
            net_write_buffer[i] = (uint8_t)nc_rand();
        }
    /* Write-buffer guard data extends over read headers; restore headers
       after initialization and every transfer. */
    int start = positions[(n / 11) % 8];
    int size = sizes[n % 11][0], count = sizes[n % 11][1];
    int extent = (int)((uint32_t)size * (uint32_t)count);
    net_read_position = net_write_position = start;
    net_read_bit = net_write_bit = bits[(n / 88) % 6];
    net_read_length = n % 3 == 0 ? start + extent : n % 3 == 1 ? start + extent - 1 : 65536;
    for (size_t i = 0; i < sizeof arena; i++) arena[i] = (uint8_t)nc_rand();
    uint8_t *buffer = op ? net_write_buffer : net_read_buffer;
    uint8_t *argument = arena + 128;
    int aligned = start + (net_read_bit > 0);
    switch ((n / 528) % 6) {
    case 1: argument = buffer + (aligned < 65536 ? aligned : 0); break;
    case 2: argument = buffer + (aligned < 65536 ? aligned + 1 : 1); break;
    case 3: argument = buffer + (aligned > 0 && aligned < 65536 ? aligned - 1 : 0); break;
    case 4: argument = buffer + 32; break;
    case 5: argument = op ? (uint8_t *)(void *)&net_write_position : (uint8_t *)(void *)&net_read_position; break;
    }
    nc_set_mxcsr(0x1F80);
    uint64_t result = op ? write_bytes(argument, size, count) : read_bytes(argument, size, count);
    nc_line("bytes %d %d %016llx r%d/%d/%d w%d/%d csr%08x", op,n,(unsigned long long)result,
            net_read_position,net_read_bit,net_read_length,net_write_position,net_write_bit,nc_get_mxcsr());
    nc_line("state %016llx %016llx %016llx", (unsigned long long)nc_hash(arena,sizeof arena),
            (unsigned long long)nc_hash(net_read_buffer,NET_BUFFER_SIZE+256),
            (unsigned long long)nc_hash(net_write_buffer,NET_BUFFER_SIZE+256));
}

int main(void)
{
    nc_map_image();
    for (int op=0;op<2;op++) for (int n=0;n<nc_cases(4000);n++) transfer(op,n);
    return 0;
}
