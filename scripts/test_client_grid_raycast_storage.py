"""Compare native grid ray traversal, downward steps and stack vector storage."""
import sys,re,subprocess,unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'scripts'))
from client_sources import read_client_source
from repair_client_menu_actions import PROJECT,pinned_pe,region
import test_client_collision_query as collision_query

class GridRaycastStorage(unittest.TestCase):
    def test_native_grid_walks(self):
        s=read_client_source();b=region(s,0xd6b60)[2];pe=pinned_pe()
        code=r'''
        #include <math.h>
        #include "export_compat.h"
        static unsigned char *image,*working;static unsigned *dword_140404A6C;
        static unsigned calls,hitmode;static uint32_t trace[64][16],saved_trace[64][16];
        static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
        __attribute__((naked)) static void probe_stack(void){__asm__("jmp ___chkstk_ms");}
        static void sub_14007B2A0(int64_t a,float*b,double c){}
        static void sub_14007B4D0(float*a,float*b,double c){}
        static int64_t sub_14011BF40(int64_t a,int64_t b,float*c,float*d){return 0;}
        static int sub_1400DA960(int64_t a,int64_t b,int64_t c,float*d,float*e){return 0;}
        static int sub_1400D97A0(float*a,float*b,float*c,int d,float*e,float*f,float*g,float*h){return 0;}
        static unsigned sub_1400129D0(unsigned a,unsigned x,unsigned y,unsigned z){return 0x40000000;}
        static unsigned sub_140016450(unsigned a,unsigned x,unsigned y,unsigned z){return 0x40000000;}
        static int sub_1400DC650(float*p,int64_t n,float*d,float*a,float*b,int*cell,int id,float scale){unsigned c=calls++;if(c>=64)abort();memcpy(trace[c],a,12);memcpy(trace[c]+3,b,12);memcpy(trace[c]+6,cell,12);memcpy(trace[c]+9,&scale,4);trace[c][10]=id;if(hitmode==1||(hitmode==2&&cell[1]==0)){for(unsigned i=0;i<3;i++){p[i]=a[i]+(b[i]-a[i])*.25f;((float*)n)[i]=(i==1); }*d=.25f;return 1;}return 0;}
        static int sub_1400DE770(void*p,float*n,float*d,float*a,float*b,int64_t c,float e,float f){return sub_1400DC650((float*)p,(int64_t)n,d,a,b,(int*)c,0,e);}
        '''.encode()
        code+=re.search(rb'_Alignas\(8\) int sr_math_axes\[12\].*?\n\);',s,re.S)[0]+b'\n'
        wide=set(re.findall(rb'\bxmmword_140[0-9A-F]+\b',b))
        for n in sorted(set(re.findall(rb'\b(?:dword|xmmword)_140[0-9A-F]+\b',b))):
         if n==b'dword_140404A6C':continue
         code+=(b'static __int128 ' if n in wide else b'extern int ')+n+b';\n'
        code+=b+b'\nint main(void){\n'+collision_query.CollisionQuery.native_setup(self,pe,[(0xd6b60,0x2010)],(0x7b000,0x11b000,0xda000,0xd9000,0xdc000,0xde000,0x12000,0x16000))
        for r,n in [(0x7b2a0,'sub_14007B2A0'),(0x7b4d0,'sub_14007B4D0'),(0x11bf40,'sub_14011BF40'),(0xda960,'sub_1400DA960'),(0xd97a0,'sub_1400D97A0'),(0xdc650,'sub_1400DC650'),(0xde770,'sub_1400DE770'),(0x129d0,'sub_1400129D0'),(0x16450,'sub_140016450'),(0x1f89d0,'probe_stack')]:code+=f'jump(image+{r},{n});\n'.encode()
        for n in wide:code+=b'memcpy(&'+n+f',image+{int(n[8:],16)-0x140000000},16);\n'.encode()
        pages={(0x404a6c+int(n)*4)&~4095 for n in re.findall(rb'\b\d{8,9}\b',b) if int(n)<487416165}
        for i in (83194359,83197431):pages.update(range((0x404a6c+i*4)&~4095,((0x404a6c+i*4)&~4095)+32768,4096))
        for p in sorted(pages):code+=f'if(!VirtualAlloc(image+{p},4096,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{p},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
        unsigned saved_calls,saved_result;float saved_out[9];unsigned checked=0,totalcalls=0;
        for(unsigned sample=0;sample<192;sample++)for(hitmode=0;hitmode<3;hitmode++){
         for(unsigned nat=0;nat<2;nat++){
         dword_140404A6C=(void*)((nat?image:working)+0x404a6c);unsigned *h=dword_140404A6C;
         memset(h+111579637,0,2048);float *map=(float*)(h+111579637);map[4]=map[8]=map[12]=map[16]=map[17]=1;h[111579650]=h[111579651]=h[111579652]=1;map[20]=map[21]=map[22]=-16;map[23]=map[24]=map[25]=16;
         int occupied=0;int *ptr=&occupied;memcpy(h+111579655,&ptr,8);
         for(unsigned i=0;i<5120;i++)h[83194359+i]=0x40000000;
         float start[3]={.25f,.5f,.75f},end[3]={3.25f,2.5f,1.75f};if(sample>=96){for(unsigned i=0;i<3;i++)start[i]=end[i]=.5f;start[sample%3]=.25f;end[sample%3]=3.25f;}for(unsigned i=0;i<3;i++){if((sample>>(i+1))&1){float t=start[i];start[i]=end[i];end[i]=t;}start[i]+=(sample%3)*.125f;}
         float out[9]={123,0,0,0,0,0,0,17,456};calls=0;memset(trace,0,sizeof trace);
         unsigned hit=nat?((unsigned(*)(float*,float*,float*,int64_t,float*,float*))(image+0xd6b60))(out+1,out+4,out+7,0,start,end):sub_1400D6B60(out+1,out+4,out+7,0,start,end);
         if(!nat){if(hitmode&&!hit){puts("expected controlled grid hit");return 2;}totalcalls+=calls;saved_calls=calls;saved_result=hit;memcpy(saved_trace,trace,sizeof trace);memcpy(saved_out,out,sizeof out);}
         else if(calls!=saved_calls||hit!=saved_result||memcmp(saved_trace,trace,sizeof trace)||memcmp(saved_out,out,sizeof out)){printf("grid ray mismatch sample=%u hitmode=%u result=%u/%u calls=%u/%u\n",sample,hitmode,saved_result,hit,saved_calls,calls);for(unsigned j=0;j<calls;j++)for(unsigned i=0;i<16;i++)if(saved_trace[j][i]!=trace[j][i])printf("trace %u/%u %08x/%08x\n",j,i,saved_trace[j][i],trace[j][i]);for(unsigned i=0;i<9;i++)printf("out %u %a/%a\n",i,saved_out[i],out[i]);return 1;}
         }checked++;
        }if(!totalcalls){puts("no geometry exercised");return 3;}printf("%u geometry calls exercised\n",totalcalls);printf("%u native grid ray walks pass: forward/reverse rays, complete geometry arguments, hit coordinates, normal and distance guards; leaf intersections controlled\n",checked);return 0;}
        '''.encode()
        out=PROJECT/'reports/player-hud-recovery-20261005/tests';p=out/'grid-ray.c';p.write_bytes(code);exe=p.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(p),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);p.with_suffix('.stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
