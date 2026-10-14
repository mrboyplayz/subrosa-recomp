// Swept-sphere collision primitives in two processes on identical random inputs (NaN and infinity included):
// segment-segment 0x1400D6890, line-plane 0x1400779F0, line-triangle 0x140077FA0, sphere-triangle 0x140035690.
// Mode "engine": src/engine/collision.c.
#include "peload.h"
#ifdef ENGINE
MS int collision_segment_segment(float *on_a,float *on_b,float *distance,const float *a0,const float *a1,const float *b0,const float *b1,float radius);
MS int collision_line_plane(float *point,const float *normal,float *t,const float *from,const float *to,const float *plane_point);
MS int collision_line_triangle(float *point,const float *normal,float *t,const float *from,const float *to,const float *a,const float *b,const float *c);
MS void collision_triangle_weights(float *weights,const float *point,const float *a,const float *b,const float *c);
MS int collision_sphere_triangle_face(float *point,float *normal,float *distance,const float *from,const float *to,float radius,const float *a,const float *b,const float *c);
MS int collision_sphere_triangle(float *point,float *normal,float *distance,const float *from,const float *to,float radius,const float *a,const float *b,const float *c);
#endif
static uint32_t rs=31337; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e38f};
static float rf(float lo,float hi){ unsigned k=rnd()%150; if(k==0) return special[rnd()%11]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; }
  return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static void pv(const char *t,const float *v,int n){ printf(" %s",t); for(int i=0;i<n;i++){ uint32_t w; memcpy(&w,&v[i],4); if((w&0x7f800000)==0x7f800000&&(w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):40000;
  for(int c=0;c<cases;c++){
    float a[3],b[3],cc[3],from[3],to[3],n[3];
    for(int k=0;k<3;k++){ a[k]=rf(-5,5); b[k]=rf(-5,5); cc[k]=rf(-5,5); from[k]=rf(-6,6); to[k]=rf(-6,6); n[k]=rf(-1,1); }
    if(c%13==0) memcpy(b,a,12);                     /* degenerate triangle / edge */
    if(c%17==0) memcpy(to,from,12);                 /* zero-length sweep */
    if(c%19==0){ from[1]=a[1]+rf(0,2); to[1]=a[1]+rf(0,2); a[1]=b[1]=cc[1]=0.0f; }   /* near a flat face */
    if(c%23==0){ to[0]=from[0]+(b[0]-a[0]); to[1]=from[1]+(b[1]-a[1]); to[2]=from[2]+(b[2]-a[2]); }  /* parallel to an edge */
    float radius=c%29==0?special[rnd()%11]:rf(0,2);
    int kind=c%4, mode=(c/4)%5;
    if(mode==1){   /* a sweep through a point on an edge, along the face normal: inside/outside decided by rounding */
      float e[3],f[3],u=rf(0,1),h=rf(0.1f,3); int which=(int)(rnd()%3); const float *p0=which==0?a:which==1?b:cc, *p1=which==0?b:which==1?cc:a;
      for(int k=0;k<3;k++){ e[k]=b[k]-a[k]; f[k]=cc[k]-a[k]; }
      float nr[3]={f[1]*e[2]-f[2]*e[1], f[2]*e[0]-f[0]*e[2], f[0]*e[1]-f[1]*e[0]}; float l=sqrtf(nr[0]*nr[0]+nr[1]*nr[1]+nr[2]*nr[2]); if(l>0) for(int k=0;k<3;k++) nr[k]/=l;
      memcpy(n,nr,12);
      for(int k=0;k<3;k++){ float on=p0[k]+u*(p1[k]-p0[k]); from[k]=on+nr[k]*h; to[k]=on-nr[k]*h*rf(0.5f,2); }
    }
    if(mode==2){ a[1]=b[1]=cc[1]=0.0f; from[1]=0.0f; to[1]=rf(-2,2); }   /* sweep starting exactly on the face plane */
    if(mode==2&&rnd()%2){ from[1]=rf(-2,2); to[1]=0.0f; }
    float p[4]={1,2,3,4}, q[4]={5,6,7,8}, t[2]={9,10}, nn[3]; memcpy(nn,n,12);
    int r;
#ifdef ENGINE
    if(kind==0) r=collision_segment_segment(p,q,t,a,b,from,to,radius);
    else if(kind==1) r=collision_line_plane(p,nn,t,from,to,a);
    else if(kind==2) r=collision_line_triangle(p,nn,t,from,to,a,b,cc);
    else r=collision_sphere_triangle(p,nn,t,from,to,radius,a,b,cc);
#else
    uint64_t rb=0; memcpy(&rb,&radius,4);
    if(kind==0) r=(int)((MS uint64_t(*)(float*,float*,float*,float*,float*,float*,float*,uint64_t))F(0x1400D6890ULL))(p,q,t,a,b,from,to,rb);
    else if(kind==1) r=(int)((MS uint64_t(*)(float*,float*,float*,float*,float*,float*))F(0x1400779F0ULL))(p,nn,t,from,to,a);
    else if(kind==2) r=(int)((MS uint64_t(*)(float*,float*,float*,float*,float*,float*,float*,float*))F(0x140077FA0ULL))(p,nn,t,from,to,a,b,cc);
    else r=(int)((MS uint64_t(*)(float*,float*,float*,float*,float*,uint64_t,float*,float*,float*))F(0x140035690ULL))(p,nn,t,from,to,rb,a,b,cc);
#endif
    if(kind==0 && mode==3){   /* the radius exactly equal to the distance found */
      float r2=t[0]; float p2[4],q2[4],t2[2];
#ifdef ENGINE
      int s2=collision_segment_segment(p2,q2,t2,a,b,from,to,r2);
#else
      uint64_t rb2=0; memcpy(&rb2,&r2,4);
      int s2=(int)((MS uint64_t(*)(float*,float*,float*,float*,float*,float*,float*,uint64_t))F(0x1400D6890ULL))(p2,q2,t2,a,b,from,to,rb2);
#endif
      printf("tie %d ",s2&1);
      if(mode==3){ /* and the same tie through the sphere-triangle edges */
        float p3[4],n3[3],t3[2];
#ifdef ENGINE
        int s3=collision_sphere_triangle(p3,n3,t3,from,to,r2,a,b,cc);
#else
        int s3=(int)((MS uint64_t(*)(float*,float*,float*,float*,float*,uint64_t,float*,float*,float*))F(0x140035690ULL))(p3,n3,t3,from,to,rb2,a,b,cc);
#endif
        printf("tri %d ",s3&1); pv("p",p3,3); pv("t",t3,1);
      }
    }
    printf("%d k%d -> %d",c,kind,r&1); pv("p",p,3); pv("q",q,3); pv("n",nn,3); pv("t",t,1); printf("\n");
    if(kind==3){   /* the same sweep against the face only, 0x140035B70 */
      float p4[4]={1,2,3,4}, n4[3]={5,6,7}, t4[2]={9,10};
#ifdef ENGINE
      int r4=collision_sphere_triangle_face(p4,n4,t4,from,to,radius,a,b,cc);
#else
      int r4=(int)((MS uint64_t(*)(float*,float*,float*,float*,float*,uint64_t,float*,float*,float*))F(0x140035B70ULL))(p4,n4,t4,from,to,rb,a,b,cc);
#endif
      printf(" face -> %d",r4&1); pv("p",p4,3); pv("n",n4,3); pv("t",t4,1); printf("\n");
    }
  }
  for(int c=0;c<cases/2;c++){   /* triangle weights 0x14002D370 */
    float a[3],b[3],cc[3],pt[3],w[3]={1,2,3};
    for(int k=0;k<3;k++){ a[k]=rf(-5,5); b[k]=rf(-5,5); cc[k]=rf(-5,5); }
    float u=rf(-0.5f,1.5f), v=rf(-0.5f,1.5f); for(int k=0;k<3;k++) pt[k]=a[k]+u*(b[k]-a[k])+v*(cc[k]-a[k]);
    if(c%5==0) for(int k=0;k<3;k++) pt[k]=rf(-6,6);
    if(c%11==0) memcpy(b,a,12);
    if(c%13==0) memcpy(pt,cc,12);
#ifdef ENGINE
    collision_triangle_weights(w,pt,a,b,cc);
#else
    ((MS uint64_t(*)(float*,float*,float*,float*,float*))F(0x14002D370ULL))(w,pt,a,b,cc);
#endif
    printf("w%d",c); pv("",w,3); printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
