#include "peload.h"
#include <xmmintrin.h>
#ifdef ENGINE
MS void computer_format_drive_path(char*,int,int);
#endif
#define G(t,a) (*(t*)D(a))
static uint32_t rs=553377u,formats;static int case_number,item_index,drive_index;
static uint32_t rnd(void){rs=rs*1664525u+1013904223u;return rs;}
static void put(void*p,int off,uint32_t v){memcpy((uint8_t*)p+off,&v,4);}
static uint64_t hash(const void*p,size_t n){const uint8_t*b=p;uint64_t h=14695981039346656037ULL;for(size_t k=0;k<n;k++)h=(h^b[k])*1099511628211ULL;return h;}
static MS int format_path(char*out,const char*fmt,uint32_t letter){
    formats++;printf("format %s letter=%u\n",fmt,letter);int r=sprintf(out,fmt,letter);
    if(case_number%17==0){uint8_t*p=D(0x182BBB180ULL+0x1B80ULL*item_index);put(p,0x334,2);put(p,0x13FC+72*drive_index,2);}
    return r;
}
int main(int argc,char**argv){
    init_image(argc,argv);setvbuf(stdout,NULL,_IOFBF,1<<20);hook(0x140158AB0ULL,format_path);
    const int ids[]={0,13,257,900,1023};const int drives[]={-1,0,1,2,3,INT32_MIN,INT32_MAX};const int depths[]={INT32_MIN,-1,0,1,2,4,8,16};int cases=argc>3?atoi(argv[3]):5000;
    for(int c=0;c<cases;c++){
        case_number=c;formats=0;item_index=ids[c%5];drive_index=drives[(c/5)%7];char out[512];for(int k=0;k<512;k++)out[k]=(char)rnd();
        for(int n=0;n<5;n++){uint8_t*p=D(0x182BBB180ULL+0x1B80ULL*ids[n]);for(int k=0;k<0x1B80;k+=4)put(p,k,rnd());put(p,0x34,(c+n)%4);put(p,0x38,ids[(n+1)%5]);put(p,0x334,(c+n)%7==0?UINT32_MAX:(uint32_t)(c+n)%3);
            for(int d=0;d<=2;d++){put(p,0x13FC+72*d,depths[(c/35+n+d)%8]);for(int k=0;k<18;k++)put(p,0x1400+72*d+4*k,rnd()%256);}}
        for(int d=0;d<3;d++)for(int k=0;k<256;k++){char*name=D(0x181FEEBCCULL+0x2828ULL*d+16ULL*k);int len=(c+d+k)%12;for(int j=0;j<len;j++)name[j]='A'+(d+k+j)%26;name[len]=0;}
        printf("path %d item=%d drive=%d\n",c,item_index,drive_index);_mm_setcsr(0x1F80);
#ifdef ENGINE
        computer_format_drive_path(out,item_index,drive_index);
#else
        ((MS void(*)(char*,int,int))F(0x1400C6B30ULL))(out,item_index,drive_index);
#endif
        uint32_t csr=_mm_getcsr();printf("path-state formats=%u csr=%08x out=%016llx",formats,csr,(unsigned long long)hash(out,512));for(int n=0;n<5;n++)printf(" item=%016llx",(unsigned long long)hash(D(0x182BBB180ULL+0x1B80ULL*ids[n]),0x1B80));printf("\n");
    }
    fprintf(stderr,"[%s] %d cases\n",img_name,cases);return 0;
}
