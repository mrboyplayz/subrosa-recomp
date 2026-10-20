// NC_WRAPPERS: 1401150E0 1401151C0 140115230
#include <string.h>
#include "nc.h"
#include "net_bits.h"

#ifdef NC_NATIVE
#define magnitude_write(v,r,b) ((double (*)(const float *,float,int))NC_ADDR(0x1401151C0))(v,r,b)
#define delta_write(v,p,r,b) ((void (*)(const float *,const float *,float,int))NC_ADDR(0x1401150E0))(v,p,r,b)
#define direction_encode(o,v,b) ((uint64_t (*)(uint32_t *,const float *,int))NC_ADDR(0x140115230))(o,v,b)
#elif defined(NC_CLIENT_WRAPPERS)
void sr_net_write_vector_delta(long long,float *,float,int);
double sr_net_write_magnitude(float *,float,int);
long long sr_net_encode_direction(uint32_t *,float *,int);
#define magnitude_write sr_net_write_magnitude
#define delta_write(v,p,r,b) sr_net_write_vector_delta((long long)(uintptr_t)(v),p,r,b)
#define direction_encode sr_net_encode_direction
#else
#define magnitude_write net_write_magnitude
#define delta_write net_write_vector_delta
#define direction_encode net_encode_direction
#endif
int main(void)
{
    static const uint32_t edges[]={0,0x80000000,1,0x80000001,0x3f800000,0xbf800000,
        0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,0x7fc12345,0x7fa12345,0x4f800001};
    static const int widths[]={-129,-3,-1,0,1,2,7,8,16,24,31,32,33,40,64,127,128,129,255,256,257};
    nc_map_image();
    for(int op=0;op<3;op++) for(int n=0;n<nc_cases(6000);n++) {
        nc_set_mxcsr(0x1f80);nc_seed(n+op*100000);
        float arena[20];
        for(int k=0;k<20;k++) arena[k]=n%2?nc_float(-1000,1000):0.0f;
        if(n%2==0) for(int k=0;k<20;k++) memcpy(arena+k,edges+(n/2+k)%13,4);
        int bits=widths[n/13%21];
        float range=arena[19];
        float *value=arena+6,*reference=arena+12;
        uint32_t *out=(uint32_t *)(arena+1);
        if(op==2) {
            if(n%5==0) out=(uint32_t *)value;
            if(n%5==1) out=(uint32_t *)(value+1);
            if(n%5==2) out=(uint32_t *)(value-1);
            if(n%11==0) value[0]=value[1]=value[2]=arena[5];
        }
        if(n%89==0) for(int k=0;k<NET_BUFFER_SIZE+128;k++) net_write_buffer[k]=(uint8_t)nc_rand();
        net_write_position=n/273%5==0?65535+n%3:(int)nc_rand_below(100)*4;
        net_write_bit=n/1365%2?(int)nc_rand_below(14):(int)nc_rand_below(8);
        if(op<2 && n%5==1) { value=(float *)(net_write_buffer+net_write_position); memcpy(value,arena+6,12); }
        if(op==1 && n%5==2) { reference=(float *)(net_write_buffer+net_write_position); memcpy(reference,arena+12,12); }
        if(op==1 && n%5==3) reference=value;
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result=0;
        if(op==0) {double d=magnitude_write(value,range,bits);memcpy(&result,&d,8);}
        else if(op==1) delta_write(value,reference,range,bits);
        else result=direction_encode(out,value,bits);
        uint32_t status=nc_get_mxcsr();
        nc_line("packetvector %d %d %016llx %d/%d %08x %016llx %016llx",op,n,
            (unsigned long long)result,net_write_position,net_write_bit,status,
            (unsigned long long)nc_hash(net_write_buffer,NET_BUFFER_SIZE+128),
            (unsigned long long)nc_hash(arena,sizeof(arena)));
    }
    return 0;
}
