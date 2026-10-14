// Particles (src/engine/world_particles.c) against the original: spawning a piece (0x14005F150) and the update of
// all flying pieces (0x140158CD0), on random pieces, meshes and resting lists. Three routines the update reaches
// stay in recompiled code and are replaced in both images by stubs that log their arguments: the level sweep
// (0x1400DC050, writes a hit from a fixed sequence), the sound (0x14005ED40) and the C runtime's rand
// (0x14023B1B0).
// Mode "engine": the engine functions.
#include "peload.h"
#ifdef ENGINE
MS int world_spawn_particle(int type, const float *position, const float *velocity, const float *rotation);
MS void world_update_particles(void);
#endif
static uint32_t rs=5550123; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float rfc(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static uint32_t fb(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }

static uint32_t ss; static int hit_rate;
static uint32_t sr(void){ ss=ss*1103515245u+12345u; return ss>>8; }
static float sf(void){ return ((int)(sr()&0xFFFF)-0x8000)/32768.0f; }
static MS int s_dc050(float *from,float *to,int flag){ printf("call dc050 %d %08x %08x %08x  %08x %08x %08x\n",flag,fb(from[0]),fb(from[1]),fb(from[2]),fb(to[0]),fb(to[1]),fb(to[2]));
  int r=(int)(sr()%8)<hit_rate; if(r || sr()%4==0){ float *hit=&G(float,0x151A84880ULL); float t=(float)(sr()&0xFFFF)/65536.0f;
    for(int a=0;a<3;a++){ hit[a]=from[a]+(to[a]-from[a])*t; hit[3+a]=sf(); } if(sr()%2){ hit[3]*=0.2f; hit[5]*=0.2f; hit[4]=0.7f+sf()*0.31f; } if(sr()%40==0) hit[3+sr()%3]=__builtin_nanf(""); }
  return r; }
static MS int64_t s_5ed40(int sound,float *position,int64_t zero,float volume,float pitch){ printf("call 5ed40 %d %lld %08x %08x  %08x %08x %08x\n",sound,(long long)zero,fb(volume),fb(pitch),fb(position[0]),fb(position[1]),fb(position[2])); return 0; }
static MS int s_rand(void){ int r=(int)(sr()&0x7FFF); printf("call rand -> %d\n",r); return r; }

#define NPART 24
#define NVERT 64
typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0x1A70AE580ULL,0x68*(NPART+2),NULL,"particle"}, {0x1A724E700ULL,4,NULL,"count"}, {0x1A72FE728ULL,8+32*NVERT,NULL,"rest0"}, {0x1A72FE730ULL+32ULL*0xFDF8,32*40,NULL,"rest0_end"},
  {0x1A74FE730ULL,8+32*NVERT,NULL,"rest1"}, {0x1A74FE738ULL+32ULL*0x7DF8,32*40,NULL,"rest1_end"}, {0x1602E12C0ULL,4,NULL,"noise"}, {0x151A84880ULL,0x80,NULL,"hit"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b && canon(a)!=canon(b)) printf("  %s+%zx %08x\n",regions[r].name,k,canon(b)); else if(a!=b) printf("  %s+%zx nan\n",regions[r].name,k); } } }

// two meshes of the test's own: vertices of `stride` floats and triangles
static float mesh_vertices[2][16*12]; static int32_t mesh_triangles[2][3*8];
static void set_mesh(int slot,int which){ uint8_t *m=&G(uint8_t,0x16AD0BE04ULL+0xE30ULL*slot); int stride=8+(int)(rnd()%3), tris=(int)(rnd()%7); if(rnd()%10==0) tris=-(int)(rnd()%2);
  for(int k=0;k<16*12;k++) mesh_vertices[which][k]=rfc(1.0f);
  for(int k=0;k<3*8;k++) mesh_triangles[which][k]=(int)(rnd()%(16*12/stride-1));
  memcpy(m,&stride,4); { const float *p=mesh_vertices[which]; memcpy(m+4,&p,8); } memcpy(m+0xC,&tris,4); { const int32_t *p=mesh_triangles[which]; memcpy(m+0x14,&p,8); } }
static void random_rotation(float *m){ if(rnd()%6==0){ for(int k=0;k<9;k++) m[k]=rfc(1.0f); return; }
  float a=rfc(3.2f),c=cosf(a),s=sinf(a),b=rfc(3.2f),cb=cosf(b),sb=sinf(b); float r[9]={c,0,-s, s*sb,cb,c*sb, s*cb,-sb,c*cb}; memcpy(m,r,36); }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  hook(0x1400DC050ULL,s_dc050); hook(0x14005ED40ULL,s_5ed40); hook(0x14023B1B0ULL,s_rand);
  for(int c=0;c<cases;c++){
    // pieces: garbage records, some active, at several speeds
    int n=(int)(rnd()%NPART); if(rnd()%12==0) n=0;
    for(int i=0;i<NPART+2;i++){ uint8_t *p=&G(uint8_t,0x1A70AE580ULL+0x68ULL*i); for(int k=0;k<0x68;k+=4){ uint32_t w=rnd32(); memcpy(p+k,&w,4); }
      int32_t type=rnd()%8?(int)(rnd()%2):(int)(rnd()%4), active=rnd()%4?1:(int)(rnd()%2); memcpy(p,&type,4); memcpy(p+8,&active,4);
      float f[20]; float sp=rnd()%3?0.004f:rnd()%2?0.05f:0.5f; for(int k=0;k<3;k++){ f[k]=rfc(40.0f); f[3+k]=rfc(sp); } random_rotation(f+6);
      float spin=rnd()%4?0.3f:rnd()%2?0.00001f:0.0f; for(int k=0;k<3;k++) f[15+k]=rfc(spin); memcpy(p+0xC,f,72);
      float g=rnd()%3?0.0027222223f:rfc(0.01f), d=rnd()%3?0.9975f:1.0f+rfc(0.2f); memcpy(p+0x58,&g,4); memcpy(p+0x5C,&d,4);
      if(rnd()%60==0){ float bad=rnd()%2?__builtin_nanf(""):__builtin_inff(); memcpy(p+0x18+4*(rnd()%3),&bad,4); } }
    G(int32_t,0x1A724E700ULL)=n;
    int slot0=(int)(rnd()%6), slot1=(int)(rnd()%6); G(int32_t,0x183EBC044ULL)=slot0; G(int32_t,0x183EBC350ULL)=slot1; set_mesh(slot0,0); if(slot1!=slot0) set_mesh(slot1,1);
    G(int32_t,0x1A72FE728ULL)=rnd()%6==0?0xFE00-(int)(rnd()%4):(int)(rnd()%8); G(int32_t,0x1A74FE730ULL)=rnd()%6==0?0x7E00-(int)(rnd()%4):(int)(rnd()%8);
    G(int32_t,0x183E936CCULL)=(int)(rnd()%500); G(uint32_t,0x1602E12C0ULL)=rnd32();
    for(int k=0;k<0x80;k+=4) G(float,0x151A84880ULL+k)=rfc(3.0f);
    ss=rnd32(); hit_rate=(int)(rnd()%10);
    snapshot(); printf("== %d pieces %d\n",c,n);
    if(c%4==0){
      // spawning, also with no velocity and with the list full
      if(rnd()%8==0) G(int32_t,0x1A724E700ULL)=0x4000-(int)(rnd()%2); else if(rnd()%4==0) G(int32_t,0x1A724E700ULL)=NPART;
      snapshot();
      float pos[3]={rfc(40.0f),rfc(40.0f),rfc(40.0f)}, vel[3]={rfc(1.0f),rfc(1.0f),rfc(1.0f)}, rot[9]; random_rotation(rot); int type=(int)(rnd()%3), has=rnd()%4!=0, r;
#ifdef ENGINE
      r=world_spawn_particle(type,pos,has?vel:NULL,rot);
#else
      r=(int)((MS int64_t(*)(unsigned,float*,float*,float*))F(0x14005F150ULL))((unsigned)type,pos,has?vel:NULL,rot);
#endif
      printf("spawn -> %d\n",r);
    } else {
#ifdef ENGINE
      world_update_particles();
#else
      ((MS int64_t(*)(void))F(0x140158CD0ULL))();
#endif
    }
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
