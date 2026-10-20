// NC_WRAPPERS: 14007D6C0
#include <string.h>
#include "nc.h"
#include "audio.h"
#ifdef NC_NATIVE
#define available(s) ((uint64_t (*)(int))NC_ADDR(0x14007D6C0))(s)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_audio_sound_available(int);
#define available sr_audio_sound_available
#else
#define available audio_sound_available
#endif
int main(void)
{
    static const int32_t lengths[]={0,1,2,3,127,128,131072,262144,-1,-3,INT32_MIN,INT32_MAX};
    nc_map_image();
    for(int n=0;n<nc_cases(6000);n++) {
        nc_seed(n);int sound=n%4==0?0:n%4==1?4095:(int)nc_rand_below(4096);
        uint64_t bits[4];for(int k=0;k<4;k++) bits[k]=nc_rand();
        memcpy(&audio_sounds[sound],bits,32);
        AudioSound *sample=&audio_sounds[sound];
        if(n%7==0) sample->loaded=0;
        sample->sample_count=lengths[n%12];
        if(n%3) {
            int32_t threshold=sample->sample_count/-2;
            sample->read_position=(uint32_t)nc_rand();
            sample->write_position=sample->read_position+(uint32_t)threshold+(n/12%3)-1u;
        }
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result=available(sound);
        nc_line("soundavailable %d %016llx %08x %016llx",n,(unsigned long long)result,nc_get_mxcsr(),
            (unsigned long long)nc_hash(sample,32));
    }
    return 0;
}
