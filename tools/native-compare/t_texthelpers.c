// NC_WRAPPERS: 14004C4C0 14006C980 14006C670 14006C870 14006E4C0 14006F120
#include <string.h>
#include "nc.h"
#include "text_helpers.h"

#ifdef NC_NATIVE
#define compare1(a,b) ((uint64_t (*)(const unsigned char *, const unsigned char *))NC_ADDR(0x14004C4C0))(a,b)
#define compare2(a,b) ((uint64_t (*)(const unsigned char *, const unsigned char *))NC_ADDR(0x14006C980))(a,b)
#define label_id(a,s) ((uint64_t (*)(const unsigned char *, uint32_t))NC_ADDR(0x14006C670))(a,s)
#define matches(n) ((uint64_t (*)(const unsigned char *))NC_ADDR(0x14006C870))(n)
#define past(n) ((uint64_t (*)(const unsigned char *))NC_ADDR(0x14006E4C0))(n)
#define label_copy(o,s) ((uint64_t (*)(unsigned char *,const unsigned char *))NC_ADDR(0x14006F120))(o,s)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14004C4C0(unsigned char *,long long);
long long sub_14006C980(unsigned char *,long long);
long long sub_14006C670(unsigned char *,unsigned int);
long long sub_14006C870(unsigned char *);
long long sub_14006E4C0(unsigned char *);
long long sub_14006F120(long long,char *);
#define compare1(a,b) sub_14004C4C0(a,(long long)(uintptr_t)b)
#define compare2(a,b) sub_14006C980(a,(long long)(uintptr_t)b)
#define label_id sub_14006C670
#define matches sub_14006C870
#define past sub_14006E4C0
#define label_copy(o,s) sub_14006F120((long long)(uintptr_t)o,(char *)s)
#else
#define compare1 text_compare_bytes
#define compare2 text_compare_bytes
#define label_id text_label_id
#define matches text_scan_matches
#define past text_scan_past
#define label_copy text_copy_visible_label
#endif

static void comparisons(int n)
{
    unsigned char a[257],b[257];
    for(int i=0;i<256;i++) a[i]=b[i]=(unsigned char)(1+nc_rand_below(255));
    a[256]=b[256]=0;
    int length=(int)nc_rand_below(257);
    a[length]=b[length]=0;
    if(n%3==0) b[n%257]=(unsigned char)nc_rand();
    if(n%3==1) { a[0]=0x80; b[0]=0x7f; }
    unsigned char *second=n%7==0?a:b;
    nc_line("cmp %d %016llx %016llx %016llx %016llx",n,
        (unsigned long long)compare1(a,second),(unsigned long long)compare2(a,second),
        (unsigned long long)nc_hash(a,sizeof a),(unsigned long long)nc_hash(b,sizeof b));
}

static void crc(int n)
{
    unsigned char text[513];
    for(int i=0;i<512;i++) text[i]=(unsigned char)(1+nc_rand_below(255));
    text[(int)nc_rand_below(513)]=0; text[512]=0;
    for(int i=0;i<257;i++) text_label_crc_table[i]=(uint32_t)nc_rand();
    if(n%2==0) text_label_crc_table[0]=0; else text_label_crc_table[0]|=1;
    uint32_t seed=(uint32_t)nc_rand();
    uint64_t result=label_id(text,seed);
    nc_line("crc %d %016llx %016llx %016llx",n,(unsigned long long)result,
        (unsigned long long)nc_hash(text_label_crc_table,257*4),(unsigned long long)nc_hash(text,sizeof text));
}

static void scan(int n,int search)
{
    unsigned char needle[33];
    for(int i=0;i<512;i++) text_scan->data[i]=(unsigned char)(1+nc_rand_below(255));
    for(int i=0;i<32;i++) needle[i]=(unsigned char)(1+nc_rand_below(255));
    needle[n%33]=0; needle[32]=0;
    int length=(int)nc_rand_below(513);
    int position=(int)nc_rand_below(length+4);
    text_scan->length=length; text_scan->position=position;
    if(n%3!=0) {
        int at=n%5==0?position:(int)nc_rand_below(length+1);
        if(at+(int)strlen((char *)needle)<=length)
            memcpy(text_scan->data+at,needle,strlen((char *)needle));
    }
    if(n%16==0) {
        if(length==512) length=511;
        text_scan->length=length;
        text_scan->position=length;
        text_scan->data[length]='X';
        needle[0]='X'; needle[1]=0;
    }
    uint64_t result=search?past(needle):matches(needle);
    nc_line("scan %d %d %016llx %d %d %016llx %016llx",n,search,(unsigned long long)result,
        text_scan->position,text_scan->length,(unsigned long long)nc_hash(text_scan->data,512),
        (unsigned long long)nc_hash(needle,sizeof needle));
}

static void visible_label(int n)
{
    unsigned char arena[1536];
    for(size_t i=0;i<sizeof arena;i++) arena[i]=(unsigned char)(1+nc_rand_below(255));
    unsigned char *out=arena+(n%3==0?768:0);
    unsigned char *source=arena+(n%3==1?16:0);
    int length=n<1000?300:(int)nc_rand_below(601);
    for(int i=0;i<length;i++) source[i]=(unsigned char)('a'+nc_rand_below(26));
    source[length]=0;
    int hidden=n%260;
    if(n%4!=0 && hidden+1<length) source[hidden]=source[hidden+1]='#';
    if(n%4==0 && hidden<length) source[hidden]='#';
    uint64_t result=label_copy(out,source);
    nc_line("label %d %016llx %016llx",n,(unsigned long long)result,(unsigned long long)nc_hash(arena,sizeof arena));
}

int main(void)
{
    nc_map_image();
    for(int n=0;n<nc_cases(6000);n++) {
        nc_seed(n);
        comparisons(n); crc(n); scan(n,0); scan(n,1); visible_label(n);
    }
    return 0;
}
