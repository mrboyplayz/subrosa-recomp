"""Compare standing controller buffers and joint drives with native code."""
import re,subprocess,unittest
from client_sources import read_client_source
from repair_client_menu_actions import PROJECT,pinned_pe,region
import test_client_collision_query as collision_query

class LegController(unittest.TestCase):
    def test_native_leg_drives(self):
        self.compare(False)

    def test_native_leg_drives_with_support_chain(self):
        self.compare(True)

    def compare(self,actual_helpers):
        source=read_client_source();pe=pinned_pe()
        code=r'''
#include <math.h>
#include "export_compat.h"
#define sub_14023F704 atan2f
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned sample,calls;static uint32_t trace[16][80];
static unsigned qcalls;static uint32_t qtrace[12][13],savedq[12][13];static unsigned char qhead[14];
static int equal_trace(const uint32_t *a,const uint32_t *b,unsigned count){for(unsigned i=0;i<count;i++)if(a[i]!=b[i]){float x,y;memcpy(&x,a+i,4);memcpy(&y,b+i,4);if(!isfinite(x)||!isfinite(y)||fabsf(x-y)>2e-6f*fmaxf(1,fmaxf(fabsf(x),fabsf(y))))return 0;}return 1;}
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void sub_14007B2A0(int64_t matrix,float *axis,double angle){((void(*)(int64_t,float*,double))(image+0x7b2a0))(matrix,axis,angle);}
static void sub_14010E370(float *out,float *matrix){memcpy(qtrace[qcalls],matrix,36);memcpy(image+0x10e370,qhead,14);((void(*)(float*,float*))(image+0x10e370))(out,matrix);jump(image+0x10e370,sub_14010E370);memcpy(qtrace[qcalls++]+9,out,16);}
static __m128 sub_1401F8AC0(double a,int64_t b,double c){float angle;memcpy(&angle,&a,4);return _mm_setr_ps(sinf(angle),cosf(angle),0,0);}
static void sub_1400B40B0(int a){(void)a;}
static unsigned sub_1400B91E0(int a,float *p,float *q){unsigned n=calls++;trace[n][0]=1;memcpy(trace[n]+1,p,12);memcpy(trace[n]+4,q,12);if(sample&32){float dy=q[1]-p[1];if(dy<0&&p[1]>=24&&q[1]<24){float t=(24-p[1])/dy;float *hit=(float*)(dword_140404A6C+73006981);hit[0]=p[0]+(q[0]-p[0])*t;hit[1]=24;hit[2]=p[2]+(q[2]-p[2])*t;hit[3]=0;hit[4]=1;hit[5]=0;hit[6]=t;dword_140404A6C[73007011]=-1;return 1;}}return 0;}
static void sub_1400BAA40(int a,int64_t p,int64_t q){unsigned n=calls++;trace[n][0]=2;memcpy(trace[n]+1,(void*)p,24);memcpy(trace[n]+7,(void*)q,24);}
static void sub_1400BBF30(int a,int b,float *p,float *v,float *t,float *f,float *q,float *r,float w){unsigned n=calls++;trace[n][0]=3;trace[n][1]=b;memcpy(trace[n]+2,p,12);memcpy(trace[n]+5,t,12);memcpy(trace[n]+8,f,12);memcpy(trace[n]+11,q,12);memcpy(trace[n]+14,r,36);memcpy(trace[n]+23,&w,4);for(unsigned i=0;i<3;i++){v[i]=.01f*(i+1)*(b+1);p[i]+=.125f*(b+1);}}
static void sub_1400BB6B0(int a,int b,int64_t v,float *t,intptr_t q,float *r){unsigned n=calls++;trace[n][0]=4;trace[n][1]=b;memcpy(trace[n]+2,t,12);memcpy(trace[n]+5,(void*)q,12);memcpy(trace[n]+8,r,36);for(unsigned i=0;i<3;i++)((float*)v)[i]=.25f*(i+1);}
static void sub_1400B1450(int a,int b,int c,float *p,float *r,float *v,float w,int f,__m128 *q,float *cap,unsigned *lin,unsigned *ang,float limit,char flags){unsigned n=calls++;trace[n][0]=5;trace[n][1]=c;memcpy(trace[n]+2,p,12);memcpy(trace[n]+5,r,36);memcpy(trace[n]+14,v,12);memcpy(trace[n]+17,q,16);memcpy(trace[n]+21,cap,12);memcpy(trace[n]+24,lin,12);memcpy(trace[n]+27,ang,12);memcpy(trace[n]+30,&limit,4);trace[n][31]=(unsigned char)flags;}
'''.encode()
        if actual_helpers:
            for name in ('sub_1400B40B0','sub_1400BAA40','sub_1400BBF30','sub_1400BB6B0'):
                code=re.sub(rb'^static [^\n]*\b'+name.encode()+rb'\([^\n]*\n',b'',code,flags=re.M)
        code=code.replace(b'trace[16][80]',b'trace[64][80]').replace(b'qtrace[12][13]',b'qtrace[64][13]').replace(b'savedq[12][13]',b'savedq[64][13]')
        code+=re.search(rb'_Alignas\(8\) int sr_math_axes\[12\].*?\n\);',source,re.S)[0]+b'\n'
        for rva in (0x2f6188,0x2f618c,0x2f6190):code+=f'extern int dword_140{rva:06X};\n'.encode()
        for rva in (0x278d30,0x279490,0x279870):code+=f'static __int128 xmmword_140{rva:06X};\n'.encode()
        helpers=[(0xb2440,0x7b0),(0xac890,0x500),(0xb40b0,0xcf0),(0xbaa40,0xc70),(0xbb6b0,0x880),(0xbbf30,0xb00)] if actual_helpers else []
        if actual_helpers:
            for rva,size in helpers:code+=region(source,rva)[2]
        code+=region(source,0xbca30)[2]+b'\nint main(void){\n'
        code+=collision_query.CollisionQuery.native_setup(self,pe,[(0xbca30,0x15de),(0x7b2a0,0x470),(0x10e370,0x2a0)]+helpers,(0xb4000,0xb9000,0xba000,0xbb000,0xb1000,0xb2000,0x23e000,0x23f000,0x243000,0x240000))
        code+=b'memcpy(qhead,image+0x10e370,14);jump(image+0x10e370,sub_14010E370);\n'
        leaves=[(0xb91e0,'sub_1400B91E0'),(0xb1450,'sub_1400B1450'),(0x1f8ac0,'sub_1401F8AC0'),(0x23e7d4,'acos'),(0x23f704,'atan2f'),(0x2431f0,'sin')]
        leaves+= [(0x23fc70,'cos')] if actual_helpers else [(0xb40b0,'sub_1400B40B0'),(0xbaa40,'sub_1400BAA40'),(0xbbf30,'sub_1400BBF30'),(0xbb6b0,'sub_1400BB6B0')]
        for rva,name in leaves:code+=f'jump(image+{rva},{name});\n'.encode()
        for rva in (0x278d30,0x279490,0x279870):code+=f'memcpy(&xmmword_140{rva:06X},image+{rva},16);\n'.encode()
        for index,size in ((280651293,32768),(282486045,8192),(486149253,8192)):
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        if actual_helpers:
            pages={(0x404a6c+int(n)*4)&~4095 for rva,size in helpers for n in re.findall(rb'\b\d{8,9}\b',region(source,rva)[2]) if int(n)<487416165}
            for page in sorted(pages):code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 uint32_t state[7166],saved[7166],saved_trace[16][80];unsigned saved_calls=0,checked=0;
 for(sample=0;sample<512;sample++){
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);memset(dword_140404A6C+280651293,0,28664);memset(dword_140404A6C+486149253,0,4096);
   memcpy(dword_140404A6C+282486045,image+0x404a6c+282486045u*4,3000);
   unsigned *h=dword_140404A6C;h[280651325]=(sample%3)==2?5:sample%3;h[280651324]=(sample>>1)&1;h[280658310]=sample%3?100:50;h[280658312]=sample%5?100:25;
   for(unsigned bone=0;bone<16;bone++){float *r=(float*)(h+280651452+78*bone);r[0]=r[4]=r[8]=1;float *p=(float*)(h+280651440+78*bone);p[0]=bone*.02f;p[1]=25+bone*.01f;p[2]=bone*.03f;}
   for(unsigned leg=0;leg<2;leg++){unsigned at=55*leg;h[280658023+at]=-1;h[280658026+at]=(sample>>(2+leg))&1?1:3;float val=.25f;memcpy(h+280658053+at,&val,4);val=.3f;memcpy(h+280658055+at,&val,4);}
   float angle=(sample%17-8.0f)*.125f,vel=.01f*(sample%11),up=.25f+.125f*(sample%7),strength=.25f+(sample%6)*.125f;
   memcpy(h+280651341,&angle,4);memcpy(h+280651370,&vel,4);memcpy(h+280651372,&vel,4);memcpy(h+280651456,&up,4);memcpy(h+280657921,&strength,4);memcpy(h+280657930,&vel,4);memcpy(h+280657931,&vel,4);memcpy(h+280657932,&vel,4);
   calls=0;qcalls=0;memset(trace,0,sizeof trace);if(native)((void(*)(int))(image+0xbca30))(0);else sub_1400BCA30(0);
   if(!native){saved_calls=calls;memcpy(saved_trace,trace,sizeof trace);memcpy(saved,h+280651293,sizeof saved);memcpy(savedq,qtrace,sizeof savedq);}
   else if(calls!=saved_calls||!equal_trace((uint32_t*)saved_trace,(uint32_t*)trace,16*80)||memcmp(saved,h+280651293,sizeof saved)){
    printf("leg controller mismatch sample=%u calls=%u/%u\n",sample,saved_calls,calls);
    for(unsigned j=0;j<qcalls;j++)for(unsigned i=0;i<13;i++)if(savedq[j][i]!=qtrace[j][i])printf("quaternion %u word %u C=%08x native=%08x\n",j,i,savedq[j][i],qtrace[j][i]);
    for(unsigned j=0;j<calls;j++)for(unsigned i=0;i<80;i++)if(saved_trace[j][i]!=trace[j][i])printf("call %u word %u C=%08x native=%08x\n",j,i,saved_trace[j][i],trace[j][i]);
    for(unsigned i=0;i<7166;i++)if(saved[i]!=h[280651293+i])printf("human %u C=%08x native=%08x\n",i,saved[i],h[280651293+i]);return 1;
   }
  }checked++;
 }
 printf("%u native leg controller cases pass: both legs, tilt angles, targets, drive limits and health weights (2e-6 float tolerance); human state bit exact\n",checked);return 0;}
'''.encode()
        code=code.replace(b'saved_trace[16][80]',b'saved_trace[64][80]').replace(b',16*80)',b',64*80)')
        out=PROJECT/'reports/player-hud-recovery-20261005/tests';out.mkdir(parents=True,exist_ok=True)
        path=out/('support-chain.c' if actual_helpers else 'legs.c');path.write_bytes(code);exe=path.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);path.with_suffix('.stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
