// NC_WRAPPERS: 140069580 14006A380
#include <string.h>
#include "nc.h"
#include "audio.h"

#ifdef NC_NATIVE
#define available() ((uint64_t (*)(void))NC_ADDR(0x140069580))()
#define append(p,n) ((void *(*)(uint64_t,const void *,int))NC_ADDR(0x14006A380))(0,p,n)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140069580(void);
void *sub_14006A380(long long,const void *,int);
#define available sub_140069580
#define append(p,n) sub_14006A380(0,p,n)
#else
#define available audio_capture_available
#define append audio_capture_write
#endif
int main(void)
{
    static const uint32_t cursors[]={0,1,2,131071,131072,131073,262142,262143,262144};
    static const int sizes[]={-1,0,1,2,3,4,255,256,262143,262144,524287,524288,524289};
    static unsigned char source[524288];
    nc_map_image();
    for(int op=0;op<2;op++) for(int n=0;n<nc_cases(2000);n++) {
        nc_seed(n+op*100000);
        for(int k=0;k<AUDIO_CAPTURE_SAMPLES*2+64;k+=4) {
            uint32_t bits=(uint32_t)nc_rand();memcpy(audio_capture_buffer+k,&bits,4);
            if(k<sizeof(source)) memcpy(source+k,&bits,4);
        }
        audio_capture_enabled=n%3;
        audio_capture_write_position=cursors[n%9];
        audio_capture_read_position=n%2?cursors[n/9%9]:(uint32_t)nc_rand();
        const void *input=source;
        int count=sizes[n/81%13];
        if(n%4==0) input=audio_capture_buffer;
        if(n%4==1) input=audio_capture_buffer+8;
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result=op?(uintptr_t)append(input,count):available();
        nc_line("capture %d %d %016llx %08x %08x %016llx %016llx",op,n,(unsigned long long)result,
            audio_capture_write_position,nc_get_mxcsr(),
            (unsigned long long)nc_hash(audio_capture_buffer,AUDIO_CAPTURE_SAMPLES*2+64),
            (unsigned long long)nc_hash(source,sizeof(source)));
    }
    return 0;
}
