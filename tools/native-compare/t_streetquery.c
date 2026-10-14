// Street triangles in a box: 0x140188900 (cells -> streets -> triangles) and its per-range helper 0x140188720,
// on random street records, random street cells (counts up to 12, so entries run on into the next cell) and
// random boxes and range flags. The whole output list is printed. Mode "engine": src/engine/world_street_query.c.
#include "peload.h"
#ifdef ENGINE
MS void world_street_triangles(int *list,const float *box_min,const float *box_max,int ranges);
MS void world_street_triangles_in_box(int *list,const float *box_min,const float *box_max,int street,int range);
#endif
static uint32_t rs=777; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rf(float lo,float hi){ unsigned k=rnd()%150; if(k==0) return special[rnd()%11]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; }
  return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }   /* no specials */
#define A(index) ((uint32_t*)D(0x140404A6CULL+4ULL*(index)))
#define STREET(i) A(358297501+15432*(i))
#define CELLS A(254352099)
#define STREETS 40
static uint32_t *list;   /* count + 1024 * 12 words + one spare */
static void fbits(uint32_t *w,float f){ memcpy(w,&f,4); }
static void make_streets(void){
  for(int i=0;i<STREETS;i++){ uint32_t *s=STREET(i);
    int nv=1+(int)(rnd()%64); s[5]=(uint32_t)nv;
    float cx=rfn(0,4096), cy=rfn(0,40), cz=rfn(0,4096);
    if(i<6){ cx=rnd()%2?rfn(3950,4150):rfn(-60,60); cz=rnd()%2?rfn(3950,4150):rfn(-60,60); }   /* by the map's edges */
    for(int v=0;v<nv;v++){ fbits(&s[6+3*v],cx+rf(-60,60)); fbits(&s[7+3*v],cy+rf(-5,5)); fbits(&s[8+3*v],cz+rf(-60,60)); }
    int nt=(int)(rnd()%80); s[3078]=(uint32_t)nt;
    for(int r=0;r<4;r++){ int a=(int)(rnd()%(nt+1)), b=(int)(rnd()%(nt+1)); if(rnd()%5==0) b=a+(int)(rnd()%3); s[3079+r]=(uint32_t)a; s[3083+r]=(uint32_t)b; }
    for(int t=0;t<nt+3;t++){ for(int k=0;k<3;k++) s[3087+3*t+k]=rnd()%nv;
      for(int k=0;k<3;k++){ float lo=(k==0?cx:k==1?cy:cz)+rf(-60,60), w=rf(0,20); fbits(&s[9231+6*t+k],lo); fbits(&s[9231+6*t+3+k],lo+w); } }
    for(int k=0;k<3;k++){ float lo=(k==0?cx:k==1?cy:cz)-rf(0,80); fbits(&s[15425+k],lo); fbits(&s[15428+k],lo+rf(0,160)); }
  }
  for(int c=0;c<4096;c++){ uint32_t *cell=CELLS+9*c; unsigned k=rnd()%10;
    cell[0]=k<6?0:k<9?1+rnd()%8:9+rnd()%4; if(rnd()%500==0) cell[0]=(uint32_t)-(int)(rnd()%3);
    for(int j=1;j<9;j++) cell[j]=rnd()%STREETS; }
}
static void print_list(void){ int n=(int)list[0]; printf("count %d\n",n); if(n<0) n=0; if(n>1024) n=1024;
  uint64_t h=1469598103934665603ULL; for(int i=0;i<1+12*1024+1;i++){ uint32_t x=list[i]; for(int b=0;b<4;b++){ h^=(x>>(8*b))&255; h*=1099511628211ULL; } }
  for(int i=0;i<n&&i<40;i++){ printf(" t%d",i); for(int k=0;k<12;k++) printf(" %08x",list[1+12*i+k]); printf("\n"); }
  printf(" hash %016llx\n",(unsigned long long)h); }
static void reset_list(void){ for(int i=0;i<1+12*1024+1;i++) list[i]=0xA5A50000u+(uint32_t)i;
  unsigned k=rnd()%8; list[0]=k<4?0:k<5?rnd()%1030:k<7?1020+rnd()%6:(uint32_t)-(int)(rnd()%4); }
static void make_box(float *mn,float *mx){
  unsigned how=rnd()%8; uint32_t *st=STREET(rnd()%STREETS);
  for(int k=0;k<3;k++){ float c=k==1?rfn(-10,50):rfn(-200,4300), w=rfn(0,k==1?30:300), lo;
    if(how<4){ memcpy(&lo,&st[15425+k],4); c=lo+rfn(-40,120); w=rfn(0,k==1?30:120); }   /* around a street */
    else if(how==4&&k!=1){ c=rnd()%2?rfn(3900,4200):rfn(-150,100); }                    /* map edges */
    else if(how==5&&k!=1){ c=rfn(-200,3000); w=rfn(600,1500); }                         /* many cells */
    unsigned m=rnd()%40; mn[k]=c; mx[k]=c+w;
    if(m==0) mn[k]=special[rnd()%11]; else if(m==1) mx[k]=special[rnd()%11]; else if(m==2) mx[k]=c-w; }
  if(rnd()%8==0) mx[1]=__builtin_nanf(""); if(rnd()%12==0) mn[1]=__builtin_nanf("");
  /* NaN or huge x/z extents make the original walk billions of cells: keep those to the y axis. */
  for(int k=0;k<3;k+=2){ if(!(mn[k]>-1e6f&&mn[k]<1e6f)) mn[k]=rfn(-200,4300); if(!(mx[k]>-1e6f&&mx[k]<1e6f)) mx[k]=mn[k]+rfn(0,300); }
}
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  list=(uint32_t*)malloc(4*(1+12*1024+1));
  int cases=argc>3?atoi(argv[3]):3000;
  for(int c=0;c<cases;c++){
    if(c%50==0) make_streets();
    float mn[3],mx[3]; make_box(mn,mx);
    reset_list();
    if(c%2==0){ int flags=(int)(rnd()%8)|(rnd()%9==0?0x10:0)|(rnd()%9==0?0x8:0);
      printf("== query %d flags %d box %08x %08x %08x %08x %08x %08x\n",c,flags,*(uint32_t*)&mn[0],*(uint32_t*)&mn[1],*(uint32_t*)&mn[2],*(uint32_t*)&mx[0],*(uint32_t*)&mx[1],*(uint32_t*)&mx[2]);
#ifdef ENGINE
      world_street_triangles((int*)list,mn,mx,flags);
#else
      ((MS uint64_t(*)(uint32_t*,float*,float*,int))F(0x140188900ULL))(list,mn,mx,flags);
#endif
    } else { int street=(int)(rnd()%STREETS), range=(int)(rnd()%4);
      printf("== range %d street %d range %d\n",c,street,range);
#ifdef ENGINE
      world_street_triangles_in_box((int*)list,mn,mx,street,range);
#else
      ((MS uint64_t(*)(uint32_t*,float*,float*,int,int))F(0x140188720ULL))(list,mn,mx,street,range);
#endif
    }
    print_list();
  }
  /* Directed cases. Street 39 has no triangles in reach; streets 5 and 6 have five that meet any box. */
  make_streets();
  { uint32_t *e=STREET(39); for(int r=0;r<4;r++){ e[3079+r]=0; e[3083+r]=0; }
    for(int i=5;i<7;i++){ uint32_t *s=STREET(i); if((int)s[3078]<5) s[3078]=5;
      for(int r=0;r<4;r++){ s[3079+r]=0; s[3083+r]=5; }
      for(int t=0;t<5;t++) for(int k=0;k<3;k++){ fbits(&s[9231+6*t+k],-1e30f); fbits(&s[9231+6*t+3+k],1e30f); } }
    for(int i=0;i<STREETS;i++) for(int k=0;k<3;k++){ fbits(&STREET(i)[15425+k],-1e30f); fbits(&STREET(i)[15428+k],1e30f); } }
  for(int edge=0;edge<3;edge++){   /* the street is filed only in the last row and/or column */
    int row=edge==1?62:63, column=edge==0?62:63;
    for(int c=0;c<4096;c++) CELLS[9*c]=0;
    CELLS[9*(row*64+column)]=1; CELLS[9*(row*64+column)+1]=5;
    float mn[3]={62*64+1.0f,0.0f,62*64+1.0f}, mx[3]={4200.0f,1.0f,4200.0f};
    list[0]=0; printf("== edge %d\n",edge);
#ifdef ENGINE
    world_street_triangles((int*)list,mn,mx,7);
#else
    ((MS uint64_t(*)(uint32_t*,float*,float*,int))F(0x140188900ULL))(list,mn,mx,7);
#endif
    print_list();
  }
  for(int at=60;at<68;at++){       /* the at-th street entry of a 3 x 3 cell walk is the first with triangles */
    int n=0;
    for(int c=0;c<4096;c++) CELLS[9*c]=0;
    for(int row=10;row<13;row++) for(int column=20;column<23;column++){ uint32_t *cell=CELLS+9*(row*64+column); cell[0]=8;
      for(int j=0;j<8;j++,n++) cell[1+j]=n==at?5:n==at+1?6:39; }
    float mn[3]={20*64+1.0f,0.0f,10*64+1.0f}, mx[3]={22*64+1.0f,1.0f,12*64+1.0f};
    list[0]=0; printf("== entry %d\n",at);
#ifdef ENGINE
    world_street_triangles((int*)list,mn,mx,1);
#else
    ((MS uint64_t(*)(uint32_t*,float*,float*,int))F(0x140188900ULL))(list,mn,mx,1);
#endif
    print_list();
  }
  fprintf(stderr,"[%s] done\n",img_name); return 0; }
