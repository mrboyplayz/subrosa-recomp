// NC_WRAPPERS: 14010E610
#include <string.h>
#include "nc.h"
#include "net_bits.h"

#ifdef NC_NATIVE
#define angle_write(a,b) ((uint64_t (*)(const float *, int))NC_ADDR(0x14010E610))(a,b)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_net_write_angle(float *, int);
#define angle_write sr_net_write_angle
#else
#define angle_write net_write_angle
#endif

int main(void)
{
    static const uint32_t angles[] = {0,0x80000000,1,0x80000001,0x3F800000,0xBF800000,
        0x40C90FDB,0xC0C90FDB,0x7F7FFFFF,0xFF7FFFFF,0x7F800000,0xFF800000,0x7FC12345,0x7FA12345};
    static const int widths[] = {-129,-3,-1,0,1,2,7,8,16,24,31,32,33,40,64,127,128,129,255,256,257};
    nc_map_image();
    for (int n=0;n<nc_cases(8000);n++) {
        nc_set_mxcsr(0x1F80);
        nc_seed(n);
        int bits=widths[(n/14)%21];
        float angle;
        memcpy(&angle,&angles[n%14],4);
        if ((n/294)%2) angle=nc_float(-1000.0f,1000.0f);
        if (n%97==0) for (int i=0;i<NET_BUFFER_SIZE+80;i++) net_write_buffer[i]=(uint8_t)nc_rand();
        net_write_position=(n/392)%5==0 ? 65535+(int)(n%3) : (int)nc_rand_below(100);
        net_write_bit=(n/1960)%2 ? (int)nc_rand_below(14) : (int)nc_rand_below(8);
        nc_set_mxcsr(0x1F80u|((n&3u)<<13)|((n&4u)?0x40u:0)|((n&8u)?0x8000u:0));
        uint64_t result=angle_write(&angle,bits);
        uint32_t status=nc_get_mxcsr();
        nc_set_mxcsr(0x1F80);
        nc_line("angle %d %016llx %d/%d %08x %016llx",n,(unsigned long long)result,
                net_write_position,net_write_bit,status,
                (unsigned long long)nc_hash(net_write_buffer,NET_BUFFER_SIZE+80));
    }
    return 0;
}
