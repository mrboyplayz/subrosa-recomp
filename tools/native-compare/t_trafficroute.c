// Traffic routes: the search step (0x14012C1F0), planning a car's route (0x140008E40) and the speed allowed behind
// other cars (0x140008BB0), with an identical road network, traffic cars and streets in two processes; nothing is
// stubbed except rand (0x14023B1B0, replaced in both by the same generator). Also listing a street's cars
// (0x14018C250) and drawing a random street (0x140130000). Mode "engine": src/engine/traffic_route.c.
#include "peload.h"
#ifdef ENGINE
MS void traffic_search_step(void);
MS void traffic_plan_route(int car, int from_street, int from_end, int to_street, int to_end);
MS float traffic_speed_limit_behind(int car, int street, uint32_t lanes, float along, int toward_start);
MS void traffic_list_street_cars(int street);
MS int traffic_random_street(void);
#endif
static uint32_t rs=1885; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static uint32_t hash(const void *p,size_t n){ uint32_t h=2166136261u; const uint8_t *b=p; for(size_t i=0;i+4<=n;i+=4){ float f; memcpy(&f,b+i,4); h=(h^canon(f))*16777619u; } return h; }
static void prw(const char *t,const void *p,size_t n){ printf(" %s",t); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ float f; memcpy(&f,b+k,4); printf(" %08x",canon(f)); } }
#define NSTREET 24
static uint32_t stub_rs; static MS int stub_rand(void){ stub_rs=stub_rs*214013u+2531011u; return (int)((stub_rs>>16)&0x7FFF); }
#define NCROSS 12
static int nnode;
// A random road network: streets joining crossings, a node for each street end, links between the ends that meet.
static void make_network(void){
  int32_t *nodes=&G(int32_t,0x15FE96284ULL), *ends=&G(int32_t,0x1600D7290ULL);
  nnode=2*NSTREET; G(int32_t,0x15FE96280ULL)=nnode;
  for(int c=0;c<NCROSS;c++){ int32_t *cs=&G(int32_t,0x175FD147CULL+0x88ULL*(uint64_t)c); for(int k=0;k<34;k++) cs[k]=(int32_t)rnd32(); for(int k=0;k<4;k++) cs[k]=(int32_t)(rnd()%NSTREET); }
  for(int s=0;s<NSTREET;s++){ uint8_t *sp=&G(uint8_t,0x175FF3480ULL+0x630ULL*(uint64_t)s); for(int k=0;k<0x630;k+=4){ uint32_t w=rnd32(); memcpy(sp+k,&w,4); }
    int32_t a=(int32_t)(rnd()%NCROSS), b=(int32_t)(rnd()%NCROSS), lanes=(int32_t)(rnd()%5), ncars=(int32_t)(rnd()%7); memcpy(sp+0xC,&a,4); memcpy(sp+0x10,&b,4); memcpy(sp+0x20,&lanes,4); memcpy(sp+0x214,&ncars,4);
    for(int k=0;k<8;k++){ int32_t car=(int32_t)(rnd()%10); memcpy(sp+0x218+4*k,&car,4); }
    // make the street one of its crossings' four most of the time
    if(rnd()%4){ G(int32_t,0x175FD147CULL+0x88ULL*(uint64_t)a+4*(rnd()%4))=s; G(int32_t,0x175FD147CULL+0x88ULL*(uint64_t)b+4*(rnd()%4))=s; }
    for(int e=0;e<2;e++){ int n=2*s+e; int32_t *np=nodes+18*n; float pos[3]={frand(0,2000),frand(-600,600),frand(0,2000)}; memcpy(np,pos,12);
      np[15]=s; np[16]=e; np[17]=rnd()%6==0; ends[n]=rnd()%20==0?(int32_t)(rnd()%(unsigned)nnode):n; } }
  for(int n=0;n<nnode;n++){ int32_t *np=nodes+18*n; int k=(int)(rnd()%5); np[3]=k; for(int i=0;i<8;i++) np[4+i]=(int32_t)(rnd()%(unsigned)nnode); np[4]=n^1; if(k==0&&rnd()%2) np[3]=1; } }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):12000;
  hook(0x14023B1B0ULL,stub_rand);
  int32_t *nodes=&G(int32_t,0x15FE96284ULL);
  for(int c=0;c<cases;c++){
    if(c%60==0) make_network();
    for(int car=0;car<10;car++){ uint8_t *cp=&G(uint8_t,0x15FD16260ULL+0x5FCULL*(uint64_t)car); if(c%60==0||rnd()%5==0) for(int k=0;k<0x5FC;k+=4){ uint32_t w=rnd32(); memcpy(cp+k,&w,4); }
      float v[3]={frand(-1,1),frand(-1,1),frand(-1,1)}, along=frand(0,200), end=along+frand(0,8); int32_t lane=(int32_t)(rnd()%4); uint32_t lanes=rnd()&15;
      if(rnd()%30==0) along=NAN; memcpy(cp+0x1C,v,12); memcpy(cp+0x59C,&lane,4); memcpy(cp+0x5BC,&along,4); memcpy(cp+0x5C0,&end,4); memcpy(cp+0x5D4,&lanes,4); }
    printf("== case %d",c);
    stub_rs=rnd32();
    switch(c%4){
      case 0: { // a search in progress: random states and costs, sometimes already found
        for(int n=0;n<nnode;n++){ int32_t *np=nodes+18*n; np[12]=(int32_t)(rnd()%3); float cost=rnd()%20==0?NAN:rnd()%2?(float)(rnd()%3):frand(0,40);   /* often equal, so that the distance decides */ memcpy(&np[13],&cost,4); np[14]=(int32_t)(rnd()%(unsigned)nnode); }
        int from=(int)(rnd()%(unsigned)nnode); G(int32_t,0x1600D6284ULL)=from; G(int32_t,0x1600D6288ULL)=(int32_t)(rnd()%(unsigned)nnode); G(int32_t,0x1600D628CULL)=rnd()%10==0?3:0;
        // every parent is the start: the path writer follows parents until it gets there, and would never with a loop
        for(int n=0;n<nnode;n++) nodes[18*n+14]=from;
        for(int k=0;k<200;k++) G(int32_t,0x1600D6290ULL+4ULL*(uint64_t)k)=-7;
#ifdef ENGINE
        traffic_search_step();
#else
        ((MS void(*)(void))F(0x14012C1F0ULL))();
#endif
        printf(" step: length %d path %08x nodes %08x\n",G(int32_t,0x1600D628CULL),hash(&G(int32_t,0x1600D6290ULL),800),hash(nodes,72*(size_t)nnode)); } break;
      case 1: { int car=(int)(rnd()%10), s1=(int)(rnd()%NSTREET), e1=(int)(rnd()%2), s2=(int)(rnd()%NSTREET), e2=(int)(rnd()%2);
        for(int k=0;k<200;k++) G(int32_t,0x1600D6290ULL+4ULL*(uint64_t)k)=-7;
#ifdef ENGINE
        traffic_plan_route(car,s1,e1,s2,e2);
#else
        ((MS void(*)(int,int,int,int,int))F(0x140008E40ULL))(car,s1,e1,s2,e2);
#endif
        const uint8_t *cp=&G(uint8_t,0x15FD16260ULL+0x5FCULL*(uint64_t)car);
        printf(" plan: length %d search %d %d path %08x nodes %08x car %08x",G(int32_t,0x1600D628CULL),G(int32_t,0x1600D6284ULL),G(int32_t,0x1600D6288ULL),hash(&G(int32_t,0x1600D6290ULL),800),hash(nodes,72*(size_t)nnode),hash(cp,0x5FC));
        prw("route",cp+0x84,0x60); printf("\n"); } break;
      case 3: { int street=rnd()%8==0?-1:(int)(rnd()%NSTREET), before=(int)(rnd()%5); G(int32_t,0x15FD06200ULL)=before; for(int k=0;k<16;k++) G(int32_t,0x15FD06204ULL+4ULL*(uint64_t)k)=-3;
        G(int32_t,0x175FF3464ULL)=rnd()%10==0?0:(int32_t)(1+rnd()%NSTREET);
        for(int s=0;s<NSTREET;s++){ G(int32_t,0x175FF3498ULL+0x630ULL*(uint64_t)s)=(int32_t)(rnd()%(rnd()%6==0?3:7)); G(int32_t,0x175FF349CULL+0x630ULL*(uint64_t)s)=(int32_t)(rnd()%7); }
        int r;
#ifdef ENGINE
        traffic_list_street_cars(street); r=traffic_random_street();
#else
        ((MS void(*)(int))F(0x14018C250ULL))(street); r=((MS int(*)(void))F(0x140130000ULL))();
#endif
        printf(" list %d: scratch %d %08x; random street %d rand %08x\n",street,G(int32_t,0x15FD06200ULL),hash(&G(int32_t,0x15FD06204ULL),64),r,stub_rs); } break;
      default: { int car=(int)(rnd()%10), street=rnd()%12==0?-1:(int)(rnd()%NSTREET), toward=(int)(rnd()%2); uint32_t lanes=rnd()%4==0?rnd32():(rnd()&15); float along=rnd()%25==0?NAN:frand(0,200), r;
#ifdef ENGINE
        r=traffic_speed_limit_behind(car,street,lanes,along,toward);
#else
        r=((MS float(*)(int,int,uint32_t,float,int))F(0x140008BB0ULL))(car,street,lanes,along,toward);
#endif
        printf(" behind: %08x scratch %d %08x\n",canon(r),G(int32_t,0x15FD06200ULL),hash(&G(int32_t,0x15FD06204ULL),40)); } break; }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
