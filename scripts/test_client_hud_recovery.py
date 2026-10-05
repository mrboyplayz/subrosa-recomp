"""Check live HUD draw arguments and slot coordinates against native code."""
import subprocess,unittest,re
from client_sources import read_client_source
from repair_client_menu_actions import PROJECT,pinned_pe,region
import test_client_collision_query as collision_query

class HudRecovery(unittest.TestCase):
    def test_native_inventory_slots(self):
        self.compare(0x87810,0x7eb,'slots')

    def test_native_status_hud(self):
        self.compare(0x86000,0x180a,'status')

    def compare(self,rva,size,name):
        source=read_client_source();pe=pinned_pe();body=region(source,rva)[2]
        code=r'''
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned calls;static uint64_t trace[256][32];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static unsigned sr_text_float_bits(float f){unsigned u;memcpy(&u,&f,4);return u;}
static float sr_text_bits_float(unsigned u){float f;memcpy(&f,&u,4);return f;}
static void native_quad(float x,float y,float w,float h,char flags,int r,int g,int b,int a){uint64_t *e=trace[calls++];e[0]=1;e[1]=sr_text_float_bits(x);e[2]=sr_text_float_bits(y);e[3]=sr_text_float_bits(w);e[4]=sr_text_float_bits(h);e[5]=(unsigned char)flags;e[6]=r;e[7]=g;e[8]=b;e[9]=a;}
static void sub_14006CFF0(double x,double y,int64_t w,float h,char flags,int r,int g,int b,int a){native_quad(sr_text_bits_float((unsigned)*(uint64_t*)&x),sr_text_bits_float((unsigned)*(uint64_t*)&y),sr_text_bits_float((unsigned)w),h,flags,r,g,b,a);}
static void record_text(char *text,float x,float y,float size,unsigned flags,float r,float g,float b,float a,uint64_t argument){uint64_t *e=trace[calls++];e[0]=2;e[1]=sr_text_float_bits(x);e[2]=sr_text_float_bits(y);e[3]=sr_text_float_bits(size);e[4]=flags;e[5]=sr_text_float_bits(r);e[6]=sr_text_float_bits(g);e[7]=sr_text_float_bits(b);e[8]=sr_text_float_bits(a);if(strstr(text,"/i")||strstr(text,"/I"))e[9]=argument;strncpy((char*)(e+10),text,160);}
static void native_text(char *text,float x,float y,float size,unsigned flags,float r,float g,float b,float a,uint64_t argument){record_text(text,x,y,size,flags,r,g,b,a,argument);}
static void sr_text_draw_recovered(char *text,float x,float y,float size,unsigned flags,float r,float g,float b,float a,const uint64_t *args){record_text(text,x,y,size,flags,r,g,b,a,args?args[0]:0);}
static void ignore(void){}
static void (*qword_140404050)(unsigned,unsigned)=(void*)ignore;
static __int128 xmmword_140279430,xmmword_140279460,xmmword_140279410,xmmword_140279470;
static char *off_1402B2890[17];
static void sr_CSDrawAtlasEntry(int a,int b,float x,float y,float w,float h,int f,int r,int g,int c,int alpha){abort();}
static void sub_140087810(int a,int b){}
static void sub_140088130(int a){}
static void sub_1400A7C70(int a,float x,float y){uint64_t *e=trace[calls++];e[0]=3;e[1]=a;e[2]=sr_text_float_bits(x);e[3]=sr_text_float_bits(y);}
static void sub_14007D420(int64_t a,int64_t b,int64_t c){abort();}
static void sub_14006E0D0(int64_t a,int64_t b,int64_t c){abort();}
static void sub_14007D520(unsigned *a,int64_t b,int64_t c){abort();}
static __m128d sub_1401F8A50(double a,int64_t b,double c){abort();}
static void sub_140082110(int64_t a,int64_t b,double c,double d){abort();}
'''.encode()
        if rva==0x87810:code=code.replace(b'static void sub_140087810(int a,int b){}',b'')
        code+=body+b'\nint main(void){\n'
        code+=collision_query.CollisionQuery.native_setup(self,pe,[(rva,size)],(0x6c000,0x6d000,0x87000,0x88000,0xa7000))
        for at,fn in [(0x6cff0,'native_quad'),(0x6d930,'native_text'),(0xa7c70,'sub_1400A7C70')]+([(0x87810,'sub_140087810'),(0x88130,'sub_140088130')] if rva==0x86000 else []):code+=f'jump(image+{at},{fn});\n'.encode()
        code+=b'{void *fn=ignore;memcpy(image+0x404050,&fn,8);}\n'
        pages=set()
        for index,n in ((71856253,16384),(280651293,32768),(438291413,4096),(282487105,32768),(284024765,4096),(278521000,8192)):
            page=(0x404a6c+index*4)&~4095
            for p in range(page,page+n+4096,4096):pages.add(p)
        for index in re.findall(rb'\b\d{8,9}\b',body+region(source,0x86000)[2]):
            n=int(index)
            if n<487416165:pages.add((0x404a6c+n*4)&~4095)
        for page in sorted(pages):code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 unsigned checked=0,saved_calls=0;uint64_t saved[256][32];
 for(unsigned sample=0;sample<128;sample++)for(unsigned nat=0;nat<2;nat++){
  dword_140404A6C=(void*)((nat?image:working)+0x404a6c);unsigned *h=dword_140404A6C;
  memset(h+71856253,0,14388);memset(h+280651293,0,28664);memset(h+282487105,0,17000);
  h[71856292]=0;h[280651313]=-1;h[280651310]=sample;h[280651311]=127-sample;h[71856330]=sample%3;h[283785910]=sample%3;h[283831448]=0;h[284021986]=0;h[284021985]=0;h[280649838]=0;h[280649843]=0;h[71856337]=3+sample%5;
  h[280658334]=sample%2?64:0;h[71856325]=0;h[284024501]=0;h[280658139]=0;h[280658149]=0;
  calls=0;memset(trace,0,sizeof trace);
'''.encode()
        code+=(b'if(nat)((void(*)(int,int))(image+0x87810))(0,0);else sub_140087810(0,0);\n' if rva==0x87810 else b'if(nat)((void(*)(int))(image+0x86000))(0);else ui_draw_hud_menu_prompt_candidate(0);\n')
        code+=r'''
  if(!nat){saved_calls=calls;memcpy(saved,trace,sizeof trace);}else{
   if(calls!=saved_calls||memcmp(saved,trace,sizeof trace)){
    printf("HUD mismatch sample %u calls %u/%u\n",sample,saved_calls,calls);
    for(unsigned c=0;c<calls;c++)for(unsigned i=0;i<32;i++)if(saved[c][i]!=trace[c][i])printf("call %u word %u C=%llx native=%llx\n",c,i,(unsigned long long)saved[c][i],(unsigned long long)trace[c][i]);return 1;
   }checked++;
  }
 }
 printf("%u HUD cases match native draw coordinates, text, flags, colors, widths and number arguments exactly\n",checked);return 0;}
'''.encode()
        out=PROJECT/'reports/player-hud-recovery-20261005/tests';out.mkdir(parents=True,exist_ok=True);path=out/(name+'.c');path.write_bytes(code);exe=path.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/(name+'-stdout.txt')).write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
