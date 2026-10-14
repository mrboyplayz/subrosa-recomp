#include <string.h>
#include "nc.h"
#include "net_bits.h"
#ifdef NC_NATIVE
#define CALL(address, name, signature, ...) ((uint64_t (*) signature)NC_ADDR(address))(__VA_ARGS__)
#elif defined(NC_CLIENT_WRAPPERS)
#define CALL(address, name, signature, ...) ((uint64_t (*) signature)nc_client_wrapper(address))(__VA_ARGS__)
#else
#define CALL(address, name, signature, ...) ((uint64_t)name(__VA_ARGS__))
#endif
int main(void)
{
    static const int positions[]={0,1,15,31,63,65534,65535,65536,65537,-8,-4,-1};
    static const int sizes[]={0,1,2,3,4,7,8,15,16,17,31,32,33,63,64,65,127,128,255,256,511,512};
    static const int bits[]={0,1,7,8,-1};
    nc_map_image();
    int cases=nc_cases(1000);
    for(int op=0;op<2;++op) for(int n=0;n<cases;++n) {
        nc_seed((uint64_t)op*100000+n);
        uint8_t local[2048];
        for(int k=0;k<2048;++k) local[k]=(uint8_t)nc_rand();
        /* Includes both cursor sets and trailing bytes crossed by transfers. */
        uint8_t *state=(uint8_t *)&net_write_position;
        size_t state_size=(size_t)(net_read_buffer+NET_BUFFER_SIZE+1024-state);
        for(size_t k=0;k<state_size;++k) state[k]=(uint8_t)(k*13+n*7);
        int position=positions[n%12], size=sizes[(n/12)%22], bit=bits[(n/264)%5];
        if(n%7==0) bit=bits[n%5];
        net_read_position=net_write_position=position;
        net_read_bit=net_write_bit=bit;
        net_read_length=position+size+(n%3-1);
        /* Do not let the short-buffer schedule mask the alias cases. */
        if ((n%9>=1 && n%9<=3) || n%9==6) net_read_length=position+size+1;
        void *destination=local+512;
        const void *source=local+512;
        if(n%9==1) destination=net_read_buffer+32;
        if(n%9==2) destination=net_read_buffer+position+1+(bit>0);
        if(n%9==3) destination=net_read_buffer+position-1+(bit>0);
        if(n%9==4) source=net_write_buffer+position+1+(bit>0);
        if(n%9==5) source=net_write_buffer+position-1+(bit>0);
        if(n%9==6 && size<=8) destination=&net_read_position;
        int element_size=1,count=size;
        if(n%11==1) {element_size=-1;count=-size;}
        if(n%11==2) {element_size=65536;count=65536;size=0;}
        uint64_t result;
        if(op==0) result=CALL(0x14007ADF0,net_read_bytes,(void*,int,int),destination,element_size,count);
        else result=CALL(0x14007B180,net_write_bytes,(const void*,int,int),source,element_size,count);
        nc_line("op %d case %d position %d size %d bit %d result %016llx read %d/%d write %d/%d state %016llx local %016llx",
            op,n,position,size,bit,(unsigned long long)result,net_read_position,net_read_bit,net_write_position,net_write_bit,
            (unsigned long long)nc_hash(state,state_size),(unsigned long long)nc_hash(local,sizeof(local)));
    }
    return 0;
}
