/* Disk lookup/append and the computer's disk/program state machines.
   Input and document decoding are identical recording callbacks. Restored
   drive/file/new-line and mission screens run together in both images. */
#include "peload.h"
#include <xmmintrin.h>
#include "mission_fixture.h"
#ifdef ENGINE
MS uint32_t computer_resolve_drive(int,int);
MS uint32_t disk_append_file(int,uint32_t,const char*,uint32_t);
MS void computer_update_disk_job(int);
MS void computer_update_program(int);
#endif
#define G(t,a) (*(t*)D(a))
static const int item_ids[]={0,13,257,900,1023};
static uint8_t *items,*disks,*texts,*changes;
static uint32_t rs=775533,calls,case_number;
static int active_item;
static uint32_t rnd(void){rs=rs*1664525u+1013904223u;return rs;}
static void put(void*p,int off,uint32_t v){memcpy((uint8_t*)p+off,&v,4);}
static uint32_t get(const void*p,int off){uint32_t v;memcpy(&v,(const uint8_t*)p+off,4);return v;}
static uint8_t *it(int i){return items+(size_t)i*0x1B80;}
static uint8_t *disk(int d){return disks+(size_t)d*0x2828;}
static uint64_t hash(const void*p,size_t n){const uint8_t*b=p;uint64_t h=14695981039346656037ULL;for(size_t k=0;k<n;k++)h=(h^b[k])*1099511628211ULL;return h;}
static MS int format_text(char *out,const char *fmt,uint64_t first,const char *second){
    if(strstr(fmt,"%d")&&strstr(fmt,"%s")){printf("format %s number=%d arg=%s\n",fmt,(int)first,second);return sprintf(out,fmt,(int)first,second);}
    if(strstr(fmt,"%d")){printf("format %s number=%d\n",fmt,(int)first);return sprintf(out,fmt,(int)first);}
    if(strstr(fmt,"%s")){const char *text=(const char *)(uintptr_t)first;printf("format %s arg=%s\n",fmt,text);return sprintf(out,fmt,text);}
    printf("format %s\n",fmt);return sprintf(out,"%s",fmt);
}
static MS int key(int item,int k){
    printf("key %d %d\n",item,k);calls++;
    uint8_t *p=it(item);
    if(case_number%11==0 && calls==1){put(p,0x1518,1);put(p,0x1528,0);put(p,0x152C,0);}
    if(case_number%13==0)put(p,0x1554,1);
    if(case_number%17==0 && k!=8)put(p,0x1554,3);
    if(case_number%19==0)put(p,0x165C,1);
    return (int)(0xAB000000u|calls);
}
static MS void decode(int which,int team){
    printf("decode %d team=%d\n",which,team);calls++;
    uint8_t *p=it(active_item);put(p,0x1658,(uint32_t)team+1);
    if(case_number%17==0){put(p,0x334,1);put(p,0x1674,1);}
    if(case_number%19==0)put(disk(1),0x1008,get(disk(1),0x1008)+1);
}
static void setup(int c){
    case_number=(uint32_t)c;calls=0;active_item=item_ids[c%5];
    for(int n=0;n<5;n++){
        uint8_t*p=it(item_ids[n]);for(int k=0;k<0x1B80;k+=4)put(p,k,rnd());
        put(p,0x34,(uint32_t)(c+n)%4);put(p,0x38,item_ids[(n+1)%5]);put(p,0x3C,item_ids[(n+2)%5]);
        put(p,0x334,(uint32_t)(c+n)%4==0?UINT32_MAX:(uint32_t)(c+n)%3);
        for(int k=0;k<64;k++)put(p,0x178+4*k,rnd()%64);
        put(p,0x368,(uint32_t)(c+n)%32);put(p,0x36C,(uint32_t)(c+n+10)%32);put(p,0x370,0);
        static const int delays[]={INT32_MIN,-1,0,1,1,1,2,4,INT32_MAX};
        put(p,0x1518,(uint32_t)(c+n)%4);put(p,0x151C,(uint32_t)delays[(c/5+n)%9]);
        static const int drives[]={0,1,2,-1,3};put(p,0x1520,(uint32_t)drives[(c+n)%5]);
        put(p,0x1524,(uint32_t)(c+n)%3);put(p,0x1528,(uint32_t)(c+n)%7);put(p,0x152C,(uint32_t)(c+2*n)%8);
        snprintf((char*)p+0x1530,32,"COPY_%03d.TXT",c%1000);put(p,0x1550,rnd());
        put(p,0x1554,(uint32_t)(c+n)%5-1);for(int k=0;k<8;k++)put(p,0x1558+4*k,40+k);
        put(p,0x1658,(uint32_t)(c+n)%7==0?UINT32_MAX:(uint32_t)(c+n)%6);
        put(p,0x165C,2);put(p,0x1660,(uint32_t)(c+n)%4);
        static const int timers[]={INT32_MIN,-1,0,1,1,2,16,17,32,9,INT32_MAX};
        put(p,0x1664,(uint32_t)timers[(c/5+n)%11]);put(p,0x1668,(uint32_t)(c+n)%5);
        put(p,0x166C,(uint32_t)(c+n)%7);put(p,0x1670,(uint32_t)(c+n)%3);put(p,0x167C,8);
        put(p,0x1674,(uint32_t)(c+n)%4);for(int k=0;k<32;k++)put(p,0x1680+4*k,(uint32_t)(c+k)%8);
    }
    for(int d=0;d<3;d++){
        uint8_t*p=disk(d);for(int k=0;k<0x2828;k+=4)put(p,k,rnd());
        put(p,0,(uint32_t)(c+d)%7);put(p,0x1004,(uint32_t)(c+d)%8);
        for(int k=0;k<256;k++){
            snprintf((char*)p+4+16*k,12,"DIR_%03d",k);put(p,4+16*k+12,(uint32_t)(c+d+k)%3);
            put(p,0x1008+24*k,rnd());snprintf((char*)p+0x100C+24*k,16,"FILE_%03d.TXT",k);
            put(p,0x101C+24*k,(uint32_t)(c+d+k)%3);
        }
    }
    setup_mission_records(c);
    for(int k=0;k<7;k++)G(uint32_t,0x16B2CCA30ULL+0x21D74ULL*k)=k<2?0x12345678u:(uint32_t)(0x12345678+k);
    if(c%3==0)for(int d=0;d<3;d++)for(int k=0;k<8;k++)put(disk(d),0x1008+24*k,0x12345678u+(uint32_t)(c+k)%7);
    for(int k=0;k<80*0x9C;k+=4)put(texts,k,rnd());
    for(int k=0;k<4096;k+=4)put(changes,k,rnd());
    G(uint32_t,0x183EBFD34ULL)=c%2?(uint32_t)active_item:((uint32_t)active_item^1u);
}
static void state(const char*name,int c,uint32_t csr){
    printf("%s %d csr=%08x calls=%u items",name,c,csr,calls);
    for(int k=0;k<5;k++)printf(" %016llx",(unsigned long long)hash(it(item_ids[k]),0x1B80));
    printf(" disks");for(int d=0;d<3;d++)printf(" %016llx",(unsigned long long)hash(disk(d),0x2828));
    printf(" texts=%016llx changes=%016llx\n",(unsigned long long)hash(texts,80*0x9C),(unsigned long long)hash(changes,4096));
}
static void drive_cases(int cases){
    for(int c=0;c<cases;c++){
        setup(c);static const int drives[]={-1,0,1,2,3,INT32_MIN,INT32_MAX};int drive=drives[(c/5)%7];uint64_t result;
        _mm_setcsr(0x1f80);
#if defined(ENGINE) && !defined(COMPUTER_WRAPPERS)
        result=computer_resolve_drive(active_item,drive);
#else
        result=((MS uint64_t(*)(int,int))F(0x14004C960ULL))(active_item,drive);
#endif
        uint32_t csr=_mm_getcsr();printf("drive %d result=%016llx\n",c,(unsigned long long)result);state("drive-state",c,csr);
    }
}
static void append_cases(int cases){
    static const int counts[]={-1,0,1,254,255,256,257,INT32_MAX};
    for(int c=0;c<cases;c++){
        setup(c);int d=c%3,count=counts[(c/3)%8];put(disk(d),0x1004,(uint32_t)count);
        char name[40];int length=count==-1?11:c%32;for(int k=0;k<length;k++)name[k]=(char)('A'+(c+k)%26);name[length]=0;
        const char *source=name;
        if(count>=0&&count<256&&c%17==0)source=(const char*)disk(d)+0x100C+24*count+1;
        uint32_t dir=rnd(),content=rnd();uint64_t result;_mm_setcsr(0x1f80);
#if defined(ENGINE) && !defined(COMPUTER_WRAPPERS)
        result=disk_append_file(d,dir,source,content);
#else
        result=((MS uint64_t(*)(int,uint32_t,const char*,uint32_t))F(0x140080690ULL))(d,dir,source,content);
#endif
        uint32_t csr=_mm_getcsr();printf("file %d count=%d result=%016llx\n",c,count,(unsigned long long)result);state("file-state",c,csr);
    }
}
static void job_cases(int cases){
    for(int c=0;c<cases;c++){
        setup(c);
        uint8_t *p=it(active_item);
        if(c%10<=5){
            put(p,0x151C,1);put(p,0x1520,2);put(p,0x334,0);put(p,0x1528,0);put(p,0x152C,0);
            put(p,0x1518,c%10==0||c%10==5?0:1);
            if(c%10==0)put(disk(0),0x1004,256);
            if(c%10==1){put(disk(0),0,1);put(disk(0),16,get(p,0x1524));put(p,0x368,31);}
            if(c%10==2){put(disk(0),0,0);put(disk(0),0x1004,2);put(disk(0),0x101C,get(p,0x1524)^1u);put(disk(0),0x1034,get(p,0x1524));}
            if(c%10==3){put(disk(0),0,0);put(disk(0),0x1004,0);put(p,0x1554,UINT32_MAX);}
            if(c%10==4)put(p,0x334,UINT32_MAX);
            if(c%10==5){put(disk(0),0x1004,255);put(p,0x1554,2);}
        }
        printf("job %d item=%d\n",c,active_item);_mm_setcsr(0x1f80);
#if defined(ENGINE) && !defined(COMPUTER_WRAPPERS)
        computer_update_disk_job(active_item);
#else
        ((MS void(*)(int))F(0x1400C3ED0ULL))(active_item);
#endif
        uint32_t csr=_mm_getcsr();state("job-state",c,csr);
    }
}
static void program_cases(int cases){
    for(int c=0;c<cases;c++){
        setup(c);
        uint8_t *p=it(active_item);
        if(c%10<=3||c%10==6){
            put(p,0x1658,1);put(p,0x334,0);put(p,0x1660,1);put(p,0x1664,c%10==2?17:1);put(p,0x1674,0);put(p,0x1680,0);
            put(disk(0),0x1008,c%10==1?0xCAFEBABEu:c%10==6?0x12345678u:0x12345678u+(uint32_t)(c/10)%7);
            put(disk(1),0x1008+24*((c+1)%8),0x1234567Eu);
            if(c%10==3){put(p,0x1664,0);put(p,0x1668,0);G(uint32_t,0x183EBFD34ULL)=(uint32_t)active_item+16u;}
        }
        if(c%10==7||c%10==8){
            put(p,0x1658,1);put(p,0x334,0);put(p,0x1660,1);put(p,0x1664,c%10==8?9:0);put(p,0x1668,0);
            G(uint32_t,0x183EBFD34ULL)=(uint32_t)active_item+8u;
        }
        printf("program %d item=%d\n",c,active_item);_mm_setcsr(0x1f80);
#if defined(ENGINE) && !defined(COMPUTER_WRAPPERS)
        computer_update_program(active_item);
#else
        ((MS void(*)(int))F(0x1400C8500ULL))(active_item);
#endif
        uint32_t csr=_mm_getcsr();state("program-state",c,csr);
    }
}
int main(int argc,char**argv){
    init_image(argc,argv);setvbuf(stdout,NULL,_IOFBF,1<<20);
    items=&G(uint8_t,0x182BBB180ULL);disks=&G(uint8_t,0x181FEEBC8ULL);texts=&G(uint8_t,0x1857BD740ULL);changes=&G(uint8_t,0x18329B1E0ULL);
    memset(items,0,1024*0x1B80);
    hook(0x140158AB0ULL,format_text);hook(0x1400C6D90ULL,key);hook(0x140195FB0ULL,decode);
    int cases=argc>3?atoi(argv[3]):500;
    drive_cases(cases);append_cases(cases);job_cases(cases);program_cases(cases);
    printf("whole-items=%016llx\n",(unsigned long long)hash(items,1024*0x1B80));
    fprintf(stderr,"[%s] %d cases per routine\n",img_name,cases);return 0;
}
