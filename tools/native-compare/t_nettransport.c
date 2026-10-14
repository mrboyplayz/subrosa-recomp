/* Real packet builders/reassembly composed with identical recorded UDP and
   Steam boundaries. No sockets or remote services are contacted. */
#include "peload.h"
#include <xmmintrin.h>
#ifdef ENGINE
MS uint64_t net_open_udp(int);
MS uint64_t net_bind_udp(int);
MS uint64_t net_close_udp(int);
MS uint32_t net_packet_transfer(int,void*,int,int);
MS void net_send_packet(uint32_t,uint16_t,uint64_t);
MS uint32_t net_accept_fragment(int);
MS uint32_t net_receive_packet(void);
#endif
#define G(t,a) (*(t *)D(a))
#define CTRL 0x18539D3A0ULL
#define WPOS 0x18539D3FCULL
#define WBIT 0x18539D400ULL
#define WBUF 0x18539D404ULL
#define RLEN 0x1853AD418ULL
#define RPOS 0x1853AD41CULL
#define RBIT 0x1853AD420ULL
#define RBUF 0x1853AD424ULL
#define HEAD 0x1853BD428ULL
#define TAIL 0x1853BD42CULL
#define SLOTS 0x1853BD430ULL
#define STREAM 0x185A2D7E0ULL
typedef struct Address { uint16_t family,port; uint32_t ip; uint8_t pad[8]; } Address;
typedef struct Frame { int channel,length; uint8_t data[2048]; } Frame;
static Frame input[128], sent[128];
static int input_count,input_next,sent_count,active_case,active_stage,mutation_callbacks,io_calls;
static uint64_t bind_result,ioctl_result,close_result,create_result;
static int udp_empty,steam_empty_length;
static uint32_t rs=192837u;
static uint32_t rnd(void){rs=rs*1664525u+1013904223u;return rs;}
static uint64_t hash(const void*p,size_t n){const uint8_t*b=p;uint64_t h=14695981039346656037ULL;for(size_t k=0;k<n;k++)h=(h^b[k])*1099511628211ULL;return h;}
static uint32_t swap32(uint32_t v){return __builtin_bswap32(v);}
static uint16_t swap16(uint16_t v){return (uint16_t)((v>>8)|(v<<8));}
static MS uint64_t socket_open(int64_t a,int64_t b,int64_t c){
    printf("socket %lld %lld %lld result=%016llx\n",(long long)a,(long long)b,(long long)c,(unsigned long long)create_result);io_calls++;
    if(active_case%13==0)G(uint16_t,CTRL+0x58)^=0x1234;
    return create_result;
}
static MS uint64_t socket_bind(int64_t socket,Address*a,uint64_t n){
    printf("bind %lld %llu address=%016llx result=%016llx\n",(long long)socket,(unsigned long long)n,(unsigned long long)hash(a,16),(unsigned long long)bind_result);io_calls++;
    if(active_case%17==0)G(int32_t,CTRL+0x24+4ULL*(active_case%8))=-123;
    return bind_result;
}
static MS uint64_t socket_ioctl(int64_t socket,uint64_t command,uint32_t*arg){
    printf("ioctl %lld %016llx argument=%u result=%016llx\n",(long long)socket,(unsigned long long)command,*arg,(unsigned long long)ioctl_result);io_calls++;*arg=7;return ioctl_result;
}
static MS uint64_t socket_close(int64_t socket){
    printf("close %lld result=%016llx\n",(long long)socket,(unsigned long long)close_result);io_calls++;return close_result;
}
static MS uint64_t host_address(uint64_t v){
    printf("htonl %016llx\n",(unsigned long long)v);io_calls++;
    if(active_stage==4&&mutation_callbacks&&active_case%11==0){G(int32_t,CTRL)=(G(int32_t,CTRL)+1)&7;G(int32_t,WPOS)++;G(int32_t,STREAM)++;}
    return swap32((uint32_t)v);
}
static MS uint64_t host_port(uint64_t v){
    printf("htons %016llx\n",(unsigned long long)v);io_calls++;
    if(active_stage==4&&mutation_callbacks&&active_case%11==0){G(int32_t,WPOS)++;G(int32_t,STREAM)++;}
    return swap16((uint16_t)v);
}
static MS uint64_t peer_address(uint64_t v){printf("ntohl %016llx\n",(unsigned long long)v);io_calls++;return swap32((uint32_t)v);}
static MS uint64_t peer_port(uint64_t v){printf("ntohs %016llx\n",(unsigned long long)v);io_calls++;return swap16((uint16_t)v);}
static void record_send(int channel,const void*data,uint64_t length){
    if(length<=2048 && sent_count<128){Frame*f=&sent[sent_count++];f->channel=channel;f->length=(int)length;memcpy(f->data,data,(size_t)length);}
    printf("wire channel=%d length=%llu hash=%016llx\n",channel,(unsigned long long)length,(unsigned long long)hash(data,length<=65536?(size_t)length:32));
    if(mutation_callbacks&&active_case%17==0&&sent_count==1)G(int32_t,STREAM+12)=1;
}
static MS uint64_t udp_send(int64_t socket,const void*data,uint64_t length,uint64_t flags,Address*to,uint32_t size){
    printf("sendto socket=%lld flags=%llu address=%016llx size=%u\n",(long long)socket,(unsigned long long)flags,(unsigned long long)hash(to,16),size);io_calls++;record_send(0,data,length);return 0xF00DBABEFFFFFFFFULL;
}
static MS uint64_t steam_send(uint64_t peer,const void*data,uint32_t length){
    printf("steam-send peer=%016llx\n",(unsigned long long)peer);io_calls++;record_send(1,data,length);return 0;
}
static MS uint64_t udp_receive(int64_t socket,void*data,uint64_t capacity,uint64_t flags,Address*from,int32_t*size){
    printf("recvfrom socket=%lld capacity=%llu flags=%llu from-size=%d\n",(long long)socket,(unsigned long long)capacity,(unsigned long long)flags,*size);io_calls++;
    if(input_next>=input_count||input[input_next].channel!=0)return (uint32_t)udp_empty;
    Frame*f=&input[input_next++];memcpy(data,f->data,(size_t)f->length);
    from->family=2;from->port=swap16((uint16_t)(23000+input_next));from->ip=swap32(0x01020300u+(uint32_t)input_next);memset(from->pad,0xA5,8);*size=16;
    return (uint32_t)f->length;
}
static MS uint64_t steam_receive(uint64_t*peer,void*data,int32_t*length,uint32_t capacity){
    printf("steam-receive capacity=%u peer-in=%016llx\n",capacity,(unsigned long long)*peer);io_calls++;
    if(input_next>=input_count){if(steam_empty_length!=INT32_MIN){*length=steam_empty_length;*peer=0xAABBCCDDEEFF0011ULL;return 1;}return 0;}
    if(input[input_next].channel!=1)return 0;
    Frame*f=&input[input_next++];memcpy(data,f->data,(size_t)f->length);*length=f->length;*peer=0x1234567800000000ULL+(uint32_t)input_next;return 0xAB000001;
}
static void setup(int c,int stage){
    active_case=c;active_stage=stage;io_calls=0;sent_count=0;input_count=0;input_next=0;mutation_callbacks=0;udp_empty=c%2?-1:0;steam_empty_length=INT32_MIN;
    static const uint64_t returns[]={0,1,0xFFFFFFFFULL,0xFFFFFFFF00000000ULL,0x1234567880000000ULL};
    create_result=returns[c%5];bind_result=returns[(c/5)%5];ioctl_result=returns[(c/25)%5];close_result=returns[(c/125)%5];
    for(int k=0;k<0x64;k+=4)G(uint32_t,CTRL+k)=rnd();
    G(int32_t,CTRL)=c%8;for(int k=0;k<8;k++){G(int32_t,CTRL+4+4*k)=(c+k)%3!=0;G(int32_t,CTRL+0x24+4*k)=(int32_t)(rnd()|0x80000000u);}
    G(uint32_t,0x151E45940ULL)=rnd();G(int32_t,CTRL+0x54)=16;G(uint64_t,0x1853AD410ULL)=((uint64_t)rnd()<<32)|rnd();
    for(int k=0;k<65536;k+=4){G(uint32_t,WBUF+k)=rnd();G(uint32_t,RBUF+k)=rnd();}
    for(int s=0;s<3;s++){uint8_t*p=D(STREAM+0x10010ULL*s);for(int k=0;k<0x10010;k+=4)memcpy(p+k,&rs,4),rnd();}
    G(uint32_t,0x1402B2658ULL)=0x50464437u;G(uint32_t,0x1402B26C0ULL)=0x46464437u;
    G(uint32_t,HEAD)=c%64;G(uint32_t,TAIL)=(c%64+(c/64)%64)&63;
    for(int k=0;k<64;k++){uint64_t p=SLOTS+0x1000CULL*k;G(uint32_t,p)=(uint32_t)(c+3*k)&65535;G(uint32_t,p+4)=rnd()&65535;G(int32_t,p+8)=(int32_t)(rnd()%16385);}
    G(uint32_t,RLEN)=rnd();G(uint32_t,RPOS)=rnd();G(uint32_t,RBIT)=rnd();
}
static void state(const char*name,int c,uint32_t csr,int ring){
    printf("%s %d io=%d queue=%d/%d sends=%d csr=%08x ctrl=%016llx recv-meta=%016llx w=%016llx r=%016llx",name,c,io_calls,input_next,input_count,sent_count,csr,
        (unsigned long long)hash(D(CTRL),0x64),(unsigned long long)hash(D(0x1853AD404ULL),32),(unsigned long long)hash(D(WBUF),65536),(unsigned long long)hash(D(RBUF),65536));
    for(int s=0;s<3;s++)printf(" stream%d=%016llx",s,(unsigned long long)hash(D(STREAM+0x10010ULL*s),0x10010));
    uint64_t h=14695981039346656037ULL;for(int k=0;k<64;k++){uint64_t v=hash(D(SLOTS+0x1000CULL*k),ring?16396:12);h=(h^v)*1099511628211ULL;}
    printf(" ring=%016llx head=%d tail=%d id=%04x magic=%08x\n",(unsigned long long)h,G(int32_t,HEAD),G(int32_t,TAIL),G(uint16_t,0x1853BD424ULL),G(uint32_t,0x1402B26C0ULL));
}
static uint64_t call_socket(int which,int s){
#ifdef ENGINE
    if(which==0)return net_open_udp(s);if(which==1)return net_bind_udp(s);return net_close_udp(s);
#else
    const uint64_t a[]={0x14008EAD0ULL,0x14008EB80ULL,0x1400805E0ULL};return ((MS uint64_t(*)(int))F(a[which]))(s);
#endif
}
static uint64_t transfer(int stream,void*data,int count,int size){
#ifdef ENGINE
    return net_packet_transfer(stream,data,count,size);
#else
    return ((MS uint64_t(*)(int,void*,int,int))F(0x14015AFD0ULL))(stream,data,count,size);
#endif
}
static void send_packet(uint32_t address,uint16_t port,uint64_t peer){
#ifdef ENGINE
    net_send_packet(address,port,peer);
#else
    ((MS void(*)(uint64_t,uint16_t,uint64_t))F(0x140130350ULL))(address,port,peer);
#endif
}
static uint64_t accept_fragment(int length){
#ifdef ENGINE
    return net_accept_fragment(length);
#else
    return ((MS uint64_t(*)(int))F(0x14011BD70ULL))(length);
#endif
}
static uint64_t receive_packet(void){
#ifdef ENGINE
    return net_receive_packet();
#else
    return ((MS uint64_t(*)(void))F(0x14011C760ULL))();
#endif
}
static void make_fragment(uint8_t*p,uint16_t id,uint8_t index,uint8_t total,int length,int salt){
    uint32_t magic=0x46464437u;memcpy(p,&magic,4);memcpy(p+4,&id,2);p[6]=index;p[7]=total;
    for(int k=8;k<length;k++)p[k]=(uint8_t)(salt+k*19);
}
static void queue_frame(int channel,int kind,int payload){
    Frame*f=&input[input_count++];f->channel=channel;f->length=payload;
    for(int k=0;k<payload;k++)f->data[k]=(uint8_t)(active_case+k*7);
    uint32_t magic=kind==0?0x50464437u:kind==1?0x00464437u:0x50464438u;memcpy(f->data,&magic,4);
}
static void socket_cases(int cases){
    for(int which=0;which<3;which++)for(int c=0;c<cases;c++){
        setup(c,which);printf("socket-case %d kind=%d\n",c,which);_mm_setcsr(0x1F80);uint64_t r=call_socket(which,c%8);uint32_t csr=_mm_getcsr();printf("return=%016llx\n",(unsigned long long)r);state("socket-state",c,csr,0);
    }
}
static void transfer_cases(int cases){
    static const int positions[]={0,1,8,65520,65534,65535,65536,INT32_MAX};
    static const int counts[]={0,1,2,7,16,128};
    uint8_t external[4096];
    for(int c=0;c<cases;c++){
        setup(c,3);int s=c%3,p=positions[(c/3)%8],count=counts[(c/24)%6],size=(c/144)%4;uint8_t*stream=D(STREAM+0x10010ULL*s);
        if(p==INT32_MAX){count=0;size=0;}if(c%101==0){p=8;count=INT32_MIN;size=2;}if(c%103==0){p=INT32_MAX;count=INT32_MAX;size=2;}if(c%31==0){p=8;count=1;size=4;}G(int32_t,STREAM+0x10010ULL*s)=p;G(int32_t,STREAM+0x10010ULL*s+4)=p==INT32_MAX?0:(c%4)-1;G(int32_t,STREAM+0x10010ULL*s+12)=c%31==0?1:c%2;
        for(int k=0;k<4096;k++)external[k]=(uint8_t)rnd();void*data=external;
        if((c%13==0||c%31==0)&&p<65000&&count*size==4){uint32_t v=17;memcpy(stream+16+p+(G(int32_t,STREAM+0x10010ULL*s+4)>0),&v,4);data=stream;}
        printf("transfer-case %d stream=%d count=%d size=%d\n",c,s,count,size);_mm_setcsr(0x1F80);uint64_t r=transfer(s,data,count,size);uint32_t csr=_mm_getcsr();printf("return=%016llx external=%016llx\n",(unsigned long long)r,(unsigned long long)hash(external,4096));state("transfer-state",c,csr,0);
    }
}
static void send_cases(int cases){
    static const int lengths[]={-1,0,1,4,1199,1200,1201,2047,2048,2049,4096,16383,16384,65535,65536};
    for(int c=0;c<cases;c++){
        setup(c,4);mutation_callbacks=1;G(int32_t,WPOS)=lengths[(c/2)%15];G(int32_t,WBIT)=(c/30)%5-1;G(uint16_t,0x1853BD424ULL)=c%3?c:65535;
        printf("send-case %d\n",c);_mm_setcsr(0x1F80);send_packet(c%2?0:0x0A0B0C0D,23456,0xAABBCCDDEEFF0011ULL);uint32_t csr=_mm_getcsr();state("send-state",c,csr,0);
    }
}
static void fragment_cases(int cases){
    static const uint8_t indices[]={0,1,7,15,16,255};static const uint8_t totals[]={0,1,2,8,16,17,255};
    for(int c=0;c<cases;c++){
        setup(c,5);uint16_t id=(uint16_t)(c+1234);uint8_t index=indices[(c/7)%6],total=totals[c%7];int len=8+c%1025;
        if(c%5==0){int head=G(int32_t,HEAD);G(int32_t,TAIL)=(head+3)&63;id=(uint16_t)G(uint32_t,SLOTS+0x1000CULL*((head+1)&63));}
        if(c%11==0){int head=(c*7)&63;G(int32_t,HEAD)=head;G(int32_t,TAIL)=(head+63)&63;id=(uint16_t)(0xC000+c%8192);}
        make_fragment(D(RBUF),id,index,total,len,c);printf("fragment-case %d index=%u total=%u len=%d\n",c,index,total,len);_mm_setcsr(0x1F80);uint64_t r=accept_fragment(len);uint32_t csr=_mm_getcsr();printf("return=%016llx\n",(unsigned long long)r);state("fragment-state",c,csr,1);
        if(c%19==0){make_fragment(D(RBUF),id,0,1,12,c+1);_mm_setcsr(0x1F80);r=accept_fragment(12);csr=_mm_getcsr();printf("repeat-return=%016llx\n",(unsigned long long)r);state("fragment-repeat",c,csr,1);}
    }
}
static void receive_cases(int cases){
    for(int c=0;c<cases;c++){
        setup(c,6);G(int32_t,CTRL+4+4ULL*(c%8))=1;int kind=c%10;
        if(kind==0)queue_frame(0,0,32);
        if(kind==1){queue_frame(0,2,16);queue_frame(0,0,32);}
        if(kind==2){queue_frame(0,1,16);queue_frame(1,0,32);}
        if(kind==3){queue_frame(1,0,16);G(int32_t,CTRL+4+4ULL*(c%8))=0;}
        if(kind==5){udp_empty=-1;steam_empty_length=0;}
        if(kind==6){for(int k=1;k>=0;k--){Frame*f=&input[input_count++];f->channel=k;f->length=k?40:1032;make_fragment(f->data,(uint16_t)(c+4000),(uint8_t)k,2,f->length,c);}}
        if(kind==7){Frame*f=&input[input_count++];f->channel=0;f->length=8;make_fragment(f->data,123,16,17,8,c);queue_frame(0,0,32);}
        if(kind==8){Frame*f=&input[input_count++];f->channel=1;f->length=8;make_fragment(f->data,123,0,0,8,c);}
        if(kind==9){queue_frame(0,0,32);input[0].data[1]=0x80;G(uint32_t,0x1402B2658ULL)=0x50468037u;}
        printf("receive-case %d kind=%d\n",c,kind);_mm_setcsr(0x1F80);uint64_t r=receive_packet();uint32_t csr=_mm_getcsr();printf("return=%016llx\n",(unsigned long long)r);state("receive-state",c,csr,1);
    }
}
static void roundtrip_cases(int cases){
    static const int lengths[]={4,5,1199,1200,1201,2047,2048,4096,8191,15360,16383};
    for(int c=0;c<cases;c++){
        setup(c,7);int len=lengths[(c/2)%11];G(int32_t,CTRL+4+4ULL*(c%8))=1;G(int32_t,WPOS)=len;G(int32_t,WBIT)=0;G(uint32_t,WBUF)=0x50464437u;G(uint16_t,0x1853BD424ULL)=(uint16_t)(0xF000+(c%4096));
        printf("roundtrip-case %d length=%d\n",c,len);_mm_setcsr(0x1F80);send_packet(c%2?0:0x01020304,4000,0x8899AABBCCDDEEFFULL);
        for(int k=sent_count-1;k>=0;k--)input[input_count++]=sent[k];
        if(c%5==0&&input_count>1){input[input_count]=input[0];input_count++;}
        uint64_t r=receive_packet();uint32_t csr=_mm_getcsr();printf("roundtrip-return=%016llx payload=%016llx\n",(unsigned long long)r,(unsigned long long)hash(D(RBUF),len));state("roundtrip-state",c,csr,1);
        int valid=r==(uint32_t)len&&!memcmp(D(WBUF),D(RBUF),(size_t)len);printf("roundtrip-valid=%d\n",valid);
#ifndef ENGINE
        if(!valid){fprintf(stderr,"roundtrip failed: case %d length %d result %llu\n",c,len,(unsigned long long)r);exit(89);}
#endif
    }
}
/* Winsock entry points in the original are adjacent six-byte import jumps.
   Replace their IAT slots; a twelve-byte code hook would overwrite a neighbor. */
static void transport_hook(uint64_t address,void*callback){
    uint8_t*p=F(address);
    if(p[0]==0xFF&&p[1]==0x25){int32_t offset;memcpy(&offset,p+2,4);void**iat=(void**)(p+6+offset);*iat=callback;}
    else hook(address,callback);
}
int main(int argc,char**argv){
    init_image(argc,argv);setvbuf(stdout,NULL,_IOFBF,1<<20);memset(D(SLOTS),0x5A,64*0x1000C);
    transport_hook(0x14019902BULL,socket_open);transport_hook(0x140198FD1ULL,socket_bind);transport_hook(0x140198FE3ULL,socket_ioctl);transport_hook(0x140198FD7ULL,socket_close);
    transport_hook(0x140198FEFULL,host_address);transport_hook(0x140198FF5ULL,host_port);transport_hook(0x140199001ULL,peer_address);transport_hook(0x140199007ULL,peer_port);
    transport_hook(0x140199025ULL,udp_send);transport_hook(0x140199013ULL,udp_receive);transport_hook(0x140198DC0ULL,steam_send);transport_hook(0x140198C60ULL,steam_receive);
    int cases=argc>3?atoi(argv[3]):500;socket_cases(cases);transfer_cases(cases);send_cases(cases);fragment_cases(cases);receive_cases(cases);roundtrip_cases(cases/5+1);
    printf("whole-ring=%016llx\n",(unsigned long long)hash(D(SLOTS),64*0x1000C));fprintf(stderr,"[%s] %d cases per routine\n",img_name,cases);return 0;
}
