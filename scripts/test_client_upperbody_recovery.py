"""Compare upper-body targets and complete quaternion storage with native instructions."""
import sys,re,subprocess,unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'scripts'))
from client_sources import read_client_source
from repair_client_menu_actions import PROJECT,pinned_pe,region
import test_client_collision_query as collision_query

class UpperBodyRecovery(unittest.TestCase):
    def test_native_targets_and_relative_quaternions(self):
        source=read_client_source();pe=pinned_pe();body=region(source,0xad2b0)[2]
        code=r'''
        #include <math.h>
        #include "export_compat.h"
        #define sub_14023F704 atan2f
        static double sub_14023EB20(double a){float x;memcpy(&x,&a,4);return sr_export_float_lane_container(COERCE_UNSIGNED_INT(asinf(x)));}
        static unsigned char *image,*working;static unsigned *dword_140404A6C;
        static unsigned calls;static uint32_t trace[64][80],saved_trace[64][80];
        static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
        static int equal(const uint32_t *a,const uint32_t *b,unsigned n){for(unsigned i=0;i<n;i++)if(a[i]!=b[i]){float x,y;memcpy(&x,a+i,4);memcpy(&y,b+i,4);if(!isfinite(x)||!isfinite(y)||fabsf(x-y)>4e-6f*fmaxf(1,fmaxf(fabsf(x),fabsf(y)))){printf("word %u %08x/%08x (%g/%g)\n",i,a[i],b[i],x,y);return 0;}}return 1;}
        static __m128 sub_1401F8AC0(double a,int64_t b,double c){float angle;memcpy(&angle,&a,4);return _mm_setr_ps(sinf(angle),cosf(angle),0,0);}
        static __m128d sub_1401F8A50(double a,int64_t b,double c){return _mm_setr_pd(sin(a),cos(a));}
        static int64_t sub_1400A56B0(float *p,float a,float b){return 0;}
        static int64_t sub_1400AA510(int a,int b){return 0;}
        static int64_t sub_1400AC530(float *p,int a,int b){memset(p,0,12);return 0;}
        static void sub_1400AD030(int a,float b){}
        static int64_t sub_1400B29B0(int64_t p,int a,int b,int c,int d,float *q){memset((void*)p,0,12);return 0;}
        static int64_t sub_1400B4DA0(int a,int b,int c,unsigned *p,unsigned *q,float *r){return 0;}
        static int sub_1400DC050(float *a,float *b,int c){return 0;}
        '''.encode()
        math=[(0x7a240,0xe0,'void','int64_t p,float *q','p,q'),(0x7ae70,0x400,'void','float *p,float *q,float *r','p,q,r'),(0x7b2a0,0x470,'void','int64_t p,float *q,double r','p,q,r'),(0x7b4d0,0x230,'void','float *p,float *q,double r','p,q,r'),(0x105930,0x180,'void','float *p,float *q,float *r','p,q,r'),(0x10e370,0x2a0,'void','float *p,float *q','p,q'),(0x11c080,0x2c0,'void','float *p,float *q,float *r','p,q,r'),(0x11c340,0x160,'void','float *p,float *q','p,q')]
        for rva,size,*_ in math:code+=region(source,rva)[2]
        code+=re.search(rb'_Alignas\(8\) int sr_math_axes\[12\].*?\n\);',source,re.S)[0]+b'\n'
        constant_source=body+region(source,0xb1450)[2]
        for name in sorted(set(re.findall(rb'\b(?:dword|xmmword)_140[0-9A-F]+\b',constant_source))):
         if name==b'dword_140404A6C':continue
         if name.startswith(b'dword'):code+=b'extern int '+name+b';\n'
         else:code+=b'static __int128 '+name+b';\n'
        code+=region(source,0xa9940)[2]+region(source,0xb2bf0)[2]+region(source,0xb1450)[2]+region(source,0xa9ef0)[2]+region(source,0xacd90)[2]+body+b'\nint main(void){\n'
        functions=[(0xad2b0,0x41a0),(0xacd90,0x2a0),(0xa9ef0,0x620),(0xa9940,0x5b0),(0xb2bf0,0x130),(0xb1450,0xff0)]+[(r,s) for r,s,*_ in math]
        leaves=[(0xa56b0,'sub_1400A56B0'),(0xaa510,'sub_1400AA510'),(0xac530,'sub_1400AC530'),(0xad030,'sub_1400AD030'),(0xb29b0,'sub_1400B29B0'),(0xb4da0,'sub_1400B4DA0'),(0xdc050,'sub_1400DC050'),(0x1f8ac0,'sub_1401F8AC0'),(0x1f8a50,'sub_1401F8A50'),(0x23e7d4,'acos'),(0x23eb20,'sub_14023EB20'),(0x2431f0,'sin'),(0x23fc70,'cos'),(0x23f704,'atan2f')]
        code+=collision_query.CollisionQuery.native_setup(self,pe,functions,tuple({r&~4095 for r,n in leaves}))
        for r,n in leaves:code+=f'jump(image+{r},{n});\n'.encode()
        for name in sorted(set(re.findall(rb'\bxmmword_140[0-9A-F]+\b',constant_source))):code+=b'memcpy(&'+name+f',image+{int(name[8:],16)-0x140000000},16);\n'.encode()
        pages={(0x404a6c+int(n)*4)&~4095 for n in re.findall(rb'\b\d{8,9}\b',body) if int(n)<487416165}
        for i in (18215709,280651293,282486045,485543019,486149253):pages.update(range((0x404a6c+i*4)&~4095,((0x404a6c+i*4)&~4095)+32768,4096))
        for page in sorted(pages):code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
        uint32_t state[7166],motion[4096],joints[4096];unsigned checked=0,saved_calls;
        for(unsigned sample=0;sample<256;sample++){
         for(unsigned native=0;native<2;native++){
         dword_140404A6C=(void*)((native?image:working)+0x404a6c);unsigned *h=dword_140404A6C;
         memset(h+280651293,0,28664);memset(h+485543019,0,16384);memset(h+486149253,0,16384);
         h[280651313]=-1;h[280651325]=sample%4==3?5:sample%4;h[280651327]=(sample>>2)%3;
         h[280651436]=(sample>>4)%4==0?3:(sample>>4)%4==1?0x20:0;
         h[280658139]=(sample>>7)&1;h[280658149]=(sample>>7)&1;h[278521289]=1;h[278521290]=0;h[278521316]=2;h[280658306]=100;h[280658308]=100;h[284024765]=(sample>>6)&1;
         for(unsigned bone=0;bone<16;bone++){float *r=(float*)(h+280651452+78*bone);float a=((int)(sample%17)-8)*.03125f+bone*.0125f;r[0]=1;r[4]=r[8]=cosf(a);r[5]=sinf(a);r[7]=-sinf(a);h[280651439+78*bone]=bone;h[280651511+78*bone]=bone;float *q=(float*)(h+280651440+78*bone);q[0]=1024;q[1]=25+bone*.03f;q[2]=1024;}
         for(unsigned i=0;i<4;i++){float *q=(float*)(h+280658116+4*i);q[0]=0.125f;q[1]=.25f;q[2]=-.375f;q[3]=sqrtf(1-q[0]*q[0]-q[1]*q[1]-q[2]*q[2]);}
         for(unsigned i=0;i<4;i++){float angle=(float)((int)((sample+i*3)%17)-8)*.0625f;unsigned at[]={280651341,280651342,280651383,280651384};memcpy(h+at[i],&angle,4);}
         calls=0;memset(trace,0,sizeof trace);
         if(native)((void(*)(int))(image+0xad2b0))(0);else sub_1400AD2B0(0,0,0);
         if(!native){saved_calls=calls;memcpy(saved_trace,trace,sizeof trace);memcpy(state,h+280651293,sizeof state);memcpy(motion,h+485543019,sizeof motion);memcpy(joints,h+486149253,sizeof joints);}
         else if(calls!=saved_calls||!equal((void*)saved_trace,(void*)trace,64*80)||!equal(state,h+280651293,7166)||!equal(motion,h+485543019,4096)||!equal(joints,h+486149253,4096)){printf("upperbody mismatch sample %u calls %u/%u\n",sample,saved_calls,calls);return 1;}
         }checked++;
        }
        for(unsigned i=0;i<512;i++){
         float a[9]={1,0,0,0,cosf(i*.003f),sinf(i*.003f),0,-sinf(i*.003f),cosf(i*.003f)};
         float b[9]={cosf(i*.005f),0,-sinf(i*.005f),0,1,0,sinf(i*.005f),0,cosf(i*.005f)};
         float c[5]={123,0,0,0,456},n[5]={123,0,0,0,456};
         sub_1400ACD90(c+1,a,b);((void(*)(float*,float*,float*))(image+0xacd90))(n+1,a,b);
         if(!equal((void*)c,(void*)n,5)){printf("relative quaternion mismatch %u\n",i);return 1;}
        }
        printf("512 relative quaternion cases pass with surrounding guards\n");
        printf("%u native upperbody cases pass: head, torso, both arms, ragdoll and float angles; collision/IK boundaries controlled\n",checked);return 0;}
        '''.encode()
        out=PROJECT/'reports/player-hud-recovery-20261005/tests';path=out/'upperbody.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);path.with_suffix('.stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
        

if __name__=='__main__':unittest.main()
