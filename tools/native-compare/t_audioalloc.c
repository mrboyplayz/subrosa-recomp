// NC_WRAPPERS: 140069FA0
#include <string.h>
#include "nc.h"
#include "audio.h"

#ifdef NC_NATIVE
#define play(s,p,g,r,f) ((uint64_t (*)(int,const float *,float,float,uint32_t))NC_ADDR(0x140069FA0))(s,p,g,r,f)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_audio_play_at(int,const float *,float,float,uint32_t);
#define play sr_audio_play_at
#else
#define play audio_play_at
#endif
int main(void)
{
    static const int holes[]={0,1,2,17,55,56};
    nc_map_image();
    memset(audio_channels,0xa5,sizeof(AudioChannel)*AUDIO_CHANNEL_CAPACITY);
    for(int n=0;n<nc_cases(600);n++) {
        nc_seed(n);
        int first=holes[n%6],slot=first==56?55:first;
        memset(&audio_channels[slot],0xa5,sizeof(AudioChannel));
        for(int k=0;k<AUDIO_CHANNEL_CAPACITY;k++) audio_channels[k].active=k<first?(uint32_t)nc_rand()|1:0;
        audio_output_enabled=n%7?((uint32_t)nc_rand()|1):0;
        int sound=(int)nc_rand_below(AUDIO_SOUND_CAPACITY);
        uint64_t words[4];for(int k=0;k<4;k++) words[k]=nc_rand();
        memcpy(audio_sounds+sound,words,32);
        audio_sounds[sound].loaded=n%5?((uint32_t)nc_rand()|1):0;
        float position[3],gain,pitch;
        uint32_t bits[5];for(int k=0;k<5;k++) bits[k]=(uint32_t)nc_rand();
        memcpy(position,bits,12);memcpy(&gain,bits+3,4);memcpy(&pitch,bits+4,4);
        const float *input=position;
        if(n%11==0) input=&audio_channels[slot].gain;
        if(n%11==1) input=audio_channels[slot].position+1;
        if(n%11==2) input=(float *)&audio_sounds[sound].unknown_10;
        if(first==56 || !audio_output_enabled || !audio_sounds[sound].loaded) input=NULL;
        uint32_t flags=(uint32_t)nc_rand();
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result=play(sound,input,gain,pitch,flags);
        nc_line("audioalloc %d %016llx %08x %016llx %016llx",n,(unsigned long long)result,nc_get_mxcsr(),
            (unsigned long long)nc_hash(&audio_channels[slot],sizeof(AudioChannel)),
            (unsigned long long)nc_hash(audio_sounds+sound,sizeof(AudioSound)));
        for(int k=0;k<56;k++) nc_line("channel %d %08x",k,audio_channels[k].active);
    }
    nc_line("complete channels %016llx",(unsigned long long)nc_hash(audio_channels,sizeof(AudioChannel)*AUDIO_CHANNEL_CAPACITY));
    return 0;
}
