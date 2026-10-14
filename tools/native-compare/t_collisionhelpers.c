/* Four collision dependencies restored after Claude's human-collision port.
   The controlled sweep records triangle calls. HELPERS_REAL uses the actual
   triangle kernel; HELPERS_WRAPPERS enters linked client wrappers. */
#include "peload.h"
#include <xmmintrin.h>
#ifdef ENGINE
MS uintptr_t physics_add_world_contact(int16_t,const float*,const float*,float,float,float,float);
MS void world_grid_query_items(void*,const int32_t*,const int32_t*);
MS uintptr_t collision_place_mesh(float (*)[3],const void*,const float*,const float*);
MS int collision_sphere_triangle(float*,float*,float*,const float*,const float*,float,const float*,const float*,const float*);
MS int collision_capsule_placed_mesh(void*,const void*,const float (*)[3],const float*,const float*,float);
#endif
#define G(t,a) (*(t*)D(a))
#define BOND_COUNT 0x4000
static uint32_t rs=50555;
static unsigned case_id, triangle_calls;
static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs; }
static float rf(void){
    static const uint32_t special[]={0,0x80000000,0x7fc00000,0x7f800000,0xff800000,1,0x00800000,0x7f7fffff};
    uint32_t r=rnd(); float v;
    if((r>>24)<16){ r=special[(r>>16)%8]; memcpy(&v,&r,4); return v; }
    return ((int)(r>>16)-32768)/2048.0f;
}
static float finite_value(void){ return ((int)(rnd()>>16)-32768)/4096.0f; }
static void put(void*p,size_t off,uint32_t v){ memcpy((uint8_t*)p+off,&v,4); }
static uint32_t get(const void*p,size_t off){ uint32_t v; memcpy(&v,(const uint8_t*)p+off,4); return v; }
static uint64_t hash(const void*p,size_t n){
    const uint8_t*b=p; uint64_t h=14695981039346656037ULL;
    for(size_t i=0;i<n;i++) h=(h^b[i])*1099511628211ULL;
    return h;
}
static void words(const void*p,int n){
    for(int i=0;i<n;i++){
        uint32_t w=get(p,(size_t)i*4);
        if((w&0x7f800000u)==0x7f800000u && (w&0x7fffffu)) w=0x7fc00000;
        printf(" %08x",w);
    }
}
static MS void *zero(void*p,int v,size_t n){ return memset(p,v,n); }
typedef struct Face { int32_t unknown, count, index[4]; float normal[3]; } Face;
typedef struct Group { int32_t count; uint32_t unknown; Face *faces; uint8_t padding[40]; } Group;
typedef struct Mesh { int32_t count; uint32_t unknown; const float (*points)[3]; int32_t groups; uint8_t padding[28]; Group group[3]; } Mesh;
static Mesh mesh;
static Face faces[3][6], replacement_faces[6];
static float input_points[16][3], placed[18][3], output[19][3];

static MS uint64_t triangle(float *point,float *normal,float *distance,const float *from,const float *to,
                            uint64_t radius_bits,const float *a,const float *b,const float *c){
    printf("triangle %u normal",triangle_calls); words(normal,3);
    printf(" from");words(from,3);printf(" to");words(to,3);printf(" radius=%08x a",(unsigned)radius_bits);
    words(a,3);printf(" b");words(b,3);printf(" c");words(c,3);
    static const uint32_t dist[]={0xbf800000,0,0x3dcccccd,0x3e800000,0x3e800000,0x3f800000,0x7fc00000,0x7f800000};
    uint32_t w=dist[(case_id+triangle_calls)%8];memcpy(distance,&w,4);
    for(int k=0;k<3;k++){ point[k]=finite_value(); normal[k]=finite_value(); }
    uint64_t result=(case_id+triangle_calls)%5!=0;
    printf(" -> %llu distance",(unsigned long long)result);words(distance,1);printf(" point");words(point,3);printf(" normal");words(normal,3);printf("\n");
    if(triangle_calls==0){
        if(case_id%7==0 && mesh.groups>0) faces[0][0].count=3;
        if(case_id%11==0 && mesh.groups>0) mesh.group[0].count=1;
        if(case_id%13==0 && mesh.groups>0) mesh.group[0].faces=replacement_faces;
        if(case_id%17==0) mesh.groups=1;
    }
    triangle_calls++;
    return result;
}
static void contacts(int cases){
    uint8_t *bonds=&G(uint8_t,0x1B4287C80ULL),*cons=&G(uint8_t,0x1B4037C40ULL);
    memset(bonds,0xA5,BOND_COUNT*0xF4);memset(cons,0x5A,BOND_COUNT*0x90);
    hook(0x1401FCD30ULL,zero);
    for(int c=0;c<cases;c++){
        static const int slots[]={0,1,2,17,31,63,128,1023,BOND_COUNT-2,BOND_COUNT-1,BOND_COUNT};
        int slot=slots[c%11];
        for(int i=0;i<BOND_COUNT;i++) put(bonds,0xF4*(size_t)i,i<slot?((i+c)%3?1u:UINT32_MAX):0u);
        int first=slot?slot-1:0,last=slot>=BOND_COUNT-1?BOND_COUNT-1:slot+1;
        for(int i=first;i<=last;i++){
            for(int k=4;k<0xF4;k+=4) put(bonds+0xF4*i,k,rnd());
            for(int k=0;k<0x90;k+=4) put(cons+0x90*i,k,rnd());
        }
        float offset[3]={rf(),rf(),rf()},normal[3]={rf(),rf(),rf()};
        float depth=rf(),friction=rf(),scale=rf(),stiffness=rf();
        const float *o=offset,*n=normal;
        if(slot<BOND_COUNT && c%19==0) o=(float*)(cons+0x90*slot+0x20);
        if(slot<BOND_COUNT && c%23==0) n=(float*)(cons+0x90*slot+0x10);
        int16_t body=(int16_t)rnd();uintptr_t result;
        _mm_setcsr(0x1f80);
#if defined(ENGINE) && !defined(HELPERS_WRAPPERS)
        result=physics_add_world_contact(body,o,n,depth,friction,scale,stiffness);
#else
        uint32_t f,s;memcpy(&f,&friction,4);memcpy(&s,&stiffness,4);
        result=((MS uintptr_t(*)(int16_t,const float*,const float*,float,uint32_t,float,uint32_t))F(0x140005160ULL))(body,o,n,depth,f,scale,s);
#endif
        uint32_t csr=_mm_getcsr();
        printf("contact %d slot=%d return",c,slot);
        if(slot==BOND_COUNT) printf(" end=%d",result==(uintptr_t)(bonds+BOND_COUNT*0xF4));
        else printf("=%016llx",(unsigned long long)result);
        printf(" csr=%08x\n",csr);
        for(int i=first;i<=last;i++) printf("contact-state %d bond=%016llx constraint=%016llx\n",i,(unsigned long long)hash(bonds+0xF4*i,0xF4),(unsigned long long)hash(cons+0x90*i,0x90));
    }
    printf("contact-final bonds=%016llx constraints=%016llx\n",(unsigned long long)hash(bonds,BOND_COUNT*0xF4),(unsigned long long)hash(cons,BOND_COUNT*0x90));
}
static void grid_queries(int cases){
    static int32_t cells[8];
    int32_t *blocks=&G(int32_t,0x1A4BF0924ULL);
    int32_t *leaves=malloc(8*512*132);
    G(int32_t*,0x1A4BF0900ULL)=cells;G(int32_t*,0x1A4CF0928ULL)=leaves;
    for(int c=0;c<cases;c++){
        int sx=c%3==0?1:2,sy=c%5==0?1:2,sz=c%7==0?1:2;
        G(int32_t,0x15ADA9274ULL)=c%37==0?0:sx;
        G(int32_t,0x15ADA9278ULL)=c%41==0?0:sy;
        G(int32_t,0x15ADA927CULL)=c%43==0?0:sz;
        if(c%47==0) G(uint32_t,0x15ADA9274ULL)=0x40000000;
        for(int i=0;i<8;i++) cells[i]=(i+c)%7==0?-1:i;
        for(int i=0;i<8*512;i++) blocks[i]=(i+c)%11==0?-1:(i+c)%8;
        for(int u=0;u<8*512;u++){
            int32_t *unit=leaves+33*u;
            unit[0]=(u+c)%13==0?-1:(u+c)%7==0?0:c%9==0?32:1+(u+c)%4;
            for(int i=1;i<33;i++) unit[i]=(int32_t)(((u*31+i*17+c)%((c%3==0)?33:4096))|((rnd()&3u)<<14));
        }
        static const int32_t edge[]={-2,-1,0,6,7,8,62,63,64,65,126,127,128};
        int32_t lo[3],hi[3],out[520];
        for(int k=0;k<3;k++){ lo[k]=edge[(c+5*k)%13];hi[k]=lo[k]+(int32_t)((c+3*k)%5); }
        if(c%29==0){lo[0]=0;lo[1]=0;lo[2]=0;hi[0]=15;hi[1]=3;hi[2]=3;}
        if(c%31==0) hi[c%3]=lo[c%3]-1;
        for(int i=0;i<520;i++) out[i]=(int32_t)rnd();
        _mm_setcsr(0x1f80);
#if defined(ENGINE) && !defined(HELPERS_WRAPPERS)
        world_grid_query_items(out,lo,hi);
#else
        ((MS void(*)(int32_t*,const int32_t*,const int32_t*))F(0x140038230ULL))(out,lo,hi);
#endif
        uint32_t csr=_mm_getcsr();
        printf("grid %d count=%d csr=%08x out=%016llx cells=%016llx blocks=%016llx leaves=%016llx\n",c,out[0],csr,(unsigned long long)hash(out,sizeof out),(unsigned long long)hash(cells,sizeof cells),(unsigned long long)hash(blocks,8*512*4),(unsigned long long)hash(leaves,8*512*132));
    }
    free(leaves);
}
static void mesh_setup(int c){
    memset(&mesh,0,sizeof mesh);mesh.points=input_points;
    static const int32_t counts[]={-2,0,1,2,4,8,16};mesh.count=counts[c%7];mesh.groups=c%6-2;
    for(int i=0;i<16;i++) for(int k=0;k<3;k++) input_points[i][k]=finite_value();
    for(int i=0;i<18;i++) for(int k=0;k<3;k++) placed[i][k]=finite_value();
    for(int i=0;i<3;i++){
        mesh.group[i].count=(c+i)%7-2;mesh.group[i].faces=faces[i];
        for(int f=0;f<6;f++){
            Face *p=&faces[i][f];memset(p,0,sizeof *p);p->count=(c+i+f)%3==0?4:3;
            for(int k=0;k<4;k++) p->index[k]=(f*3+i+k)%16;
        }
    }
    /* Directed quad and triangle contacts, including a capsule on a face. */
    if(c%23==0){
        mesh.groups=1;mesh.group[0].count=2;
        float corners[4][3]={{-1,0,-1},{1,0,-1},{1,0,1},{-1,0,1}};
        memcpy(placed,corners,sizeof corners);
        faces[0][0].count=4;faces[0][1].count=3;
        for(int k=0;k<4;k++){faces[0][0].index[k]=k;faces[0][1].index[k]=k;}
    }
    memcpy(replacement_faces,faces[0],sizeof replacement_faces);
    for(int f=0;f<6;f++) replacement_faces[f].index[0]=(replacement_faces[f].index[0]+7)%16;
    if(c%11==0) memcpy(placed[1],placed[0],sizeof placed[0]);
    if(c%13==0){uint32_t nan=0x7fc00000;memcpy(&placed[3][1],&nan,4);}
}
static void placements(int cases){
    for(int c=0;c<cases;c++){
        mesh_setup(c);float position[3]={rf(),rf(),rf()},rotation[9];
        for(int k=0;k<9;k++) rotation[k]=rf();
        for(int i=0;i<19;i++) for(int k=0;k<3;k++) put(output[i],4*k,rnd());
        if(c%17==0){memcpy(output,input_points,sizeof input_points);mesh.points=(const float(*)[3])output;}
        uintptr_t input=(uintptr_t)mesh.points;_mm_setcsr(0x1f80);uintptr_t result;
#if defined(ENGINE) && !defined(HELPERS_WRAPPERS)
        result=collision_place_mesh(output,&mesh,position,rotation);
#else
        result=((MS uintptr_t(*)(void*,const void*,const float*,const float*))F(0x14011BF40ULL))(output,&mesh,position,rotation);
#endif
        uint32_t csr=_mm_getcsr();
        printf("place %d count=%d return=%llu csr=%08x",c,mesh.count,(unsigned long long)(mesh.count>0?result-input+(uintptr_t)output+8u:result-(uintptr_t)output),csr);
        words(output,19*3);printf("\n");
    }
}
#if defined(ENGINE) && defined(HELPERS_REAL) && !defined(HELPERS_WRAPPERS)
static MS uint64_t real_triangle(float *point,float *normal,float *distance,const float *from,const float *to,
                                  uint64_t radius_bits,const float *a,const float *b,const float *c){
    float radius; uint32_t bits=(uint32_t)radius_bits; memcpy(&radius,&bits,4);
    return (uint32_t)collision_sphere_triangle(point,normal,distance,from,to,radius,a,b,c);
}
#endif
static void capsules(int cases){
#ifndef HELPERS_REAL
    hook(0x140035690ULL,triangle);
#elif defined(ENGINE) && !defined(HELPERS_WRAPPERS)
    hook(0x140035690ULL,real_triangle);
#endif
    for(int c=0;c<cases;c++){
        case_id=(unsigned)c;triangle_calls=0;mesh_setup(c);
        float from[3]={finite_value(),finite_value(),finite_value()},to[3]={finite_value(),finite_value(),finite_value()},radius=rf(),hit[10];
        if(c%5==0) for(int k=0;k<3;k++) from[k]=to[k]=placed[k][k];
        if(c%19==0){from[0]=0;from[1]=1;from[2]=0;to[0]=0;to[1]=-1;to[2]=0;radius=0.25f;}
        if(c%23==0){from[0]=0.5f;from[1]=0.125f;from[2]=0.5f;to[0]=0.5f;to[1]=-0.125f;to[2]=0.5f;radius=0.25f;}
        for(int k=0;k<10;k++) put(hit,4*k,rnd());
        _mm_setcsr(0x1f80);int result;
#if defined(ENGINE) && !defined(HELPERS_WRAPPERS)
        result=collision_capsule_placed_mesh(hit,&mesh,(const float(*)[3])placed,from,to,radius);
#else
        uint32_t r;memcpy(&r,&radius,4);
        result=(int)((MS uint64_t(*)(void*,const void*,const void*,const float*,const float*,uint32_t))F(0x140033BE0ULL))(hit,&mesh,placed,from,to,r);
#endif
        uint32_t csr=_mm_getcsr();printf("capsule %d result=%d csr=%08x calls=%u hit",c,result,csr,triangle_calls);words(hit,10);printf("\n");
        printf("mesh-state groups=%d faces=%016llx replacement=%016llx counts",mesh.groups,(unsigned long long)hash(faces,sizeof faces),(unsigned long long)hash(replacement_faces,sizeof replacement_faces));
        for(int i=0;i<3;i++) printf(" %d/%d",mesh.group[i].count,mesh.group[i].faces==replacement_faces);printf("\n");
    }
}
int main(int argc,char **argv){
    init_image(argc,argv);setvbuf(stdout,NULL,_IOFBF,1<<20);int cases=argc>3?atoi(argv[3]):500;
    contacts(cases);grid_queries(cases);placements(cases);capsules(cases);
    fprintf(stderr,"[%s] %d cases per routine\n",img_name,cases);return 0;
}
