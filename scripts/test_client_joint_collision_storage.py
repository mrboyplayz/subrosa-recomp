"""Compare human terrain-contact workspaces with the original caller instructions."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT,pinned_pe,region
import test_client_collision_query as collision


class JointCollisionStorage(unittest.TestCase):
    def test_native_terrain_contact_caller(self):
        source=read_client_source()
        body=region(source,0xb2e70)[2]
        self.assertIn(b'sr_joint_triangles[12290]',body)
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned triangle_count,leaf_calls,contact_calls,hit_mode;static uint32_t trace[17000][16],contact_trace[16][16];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static int64_t sub_140188900(int *out,float *lo,float *hi,int flags){(void)lo;(void)hi;if(flags!=4)abort();out[0]=triangle_count;for(unsigned i=0;i<triangle_count;i++)for(unsigned j=0;j<12;j++){float value=(float)(i%31)*.125f+(float)j*.25f;memcpy(out+1+i*12+j,&value,4);}return 0;}
static unsigned sub_140035690(float *point,float *normal,float *distance,float *start,float *end,int64_t radius,float *a,float *b,float *c){
 unsigned call=leaf_calls++;if(call>=17000)abort();uint32_t *row=trace[call];memcpy(row,start,12);memcpy(row+3,end,12);memcpy(row+6,a,12);memcpy(row+9,b,12);memcpy(row+12,c,12);row[15]=(unsigned)radius;
 if(hit_mode && (call%3)==1){for(unsigned i=0;i<3;i++){point[i]=.125f+i*.25f;normal[i]=-.25f+i*.125f;}*distance=.125f;return 1;}return 0;
}
static unsigned sub_140038230(int *out,int *lo,int *hi){(void)lo;(void)hi;out[0]=0;return 0;}
static void sub_140005160(int16_t body,unsigned *point,unsigned *normal,float depth,unsigned stiffness,float friction,unsigned damping){unsigned call=contact_calls++;if(call>=16)abort();unsigned *row=contact_trace[call];row[0]=body;memcpy(row+1,point,12);memcpy(row+4,normal,12);memcpy(row+7,&depth,4);row[8]=stiffness;memcpy(row+9,&friction,4);row[11]=damping;}
static void sub_14011BF40(int64_t a,int64_t b,float *c,float *d){(void)a;(void)b;(void)c;(void)d;abort();}
static unsigned sub_140033BE0(float *a,int64_t b,int64_t c,float *d,float *e,int f){(void)a;(void)b;(void)c;(void)d;(void)e;(void)f;abort();}
static unsigned sub_1400D6890(float *a,float *b,float *c,float *d,float *e,float *f,float *g,float h){(void)a;(void)b;(void)c;(void)d;(void)e;(void)f;(void)g;(void)h;abort();}
static void sub_1400052C0(int a,int b,unsigned *c,unsigned *d,unsigned *e,float f,unsigned g,double h,unsigned i){(void)a;(void)b;(void)c;(void)d;(void)e;(void)f;(void)g;(void)h;(void)i;abort();}
'''.encode()+body+b'\nint main(void){\n'
        pe=pinned_pe()
        code+=collision.CollisionQuery.native_setup(self,pe,[(0xb2e70,0xc10)],(0x188000,0x35000,0x38000,0x5000,0x11b000,0x33000,0xd6000))
        code+=b'image[0x1f89d0]=0xc3;\n'
        for rva,name in [(0x188900,'sub_140188900'),(0x35690,'sub_140035690'),(0x38230,'sub_140038230'),(0x5160,'sub_140005160'),(0x11bf40,'sub_14011BF40'),(0x33be0,'sub_140033BE0'),(0xd6890,'sub_1400D6890'),(0x52c0,'sub_1400052C0')]:code+=f'jump(image+{rva},{name});\n'.encode()
        for index,size in [(280651303,0x702000),(282486067,8192),(18215715,8192)]:
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 unsigned counts[]={0,1,4,17,1024},checked=0,saved_calls,saved_contacts;static uint32_t saved_trace[17000][16],saved_contact_trace[16][16];
 for(unsigned count=0;count<5;count++)for(unsigned hit=0;hit<2;hit++)for(unsigned sample=0;sample<8;sample++){
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);
   memset(dword_140404A6C+280651303,0,0x700000);
   for(unsigned joint=0;joint<16;joint++){
    unsigned *table=dword_140404A6C+282486067+25*joint;table[0]=0;float radius=.25f+joint*.015625f;memcpy(table+2,&radius,4);
    for(unsigned j=0;j<6;j++){float value=(float)sample*.125f+(float)joint*.25f+(float)j*.015625f;memcpy(dword_140404A6C+280651505+78*joint+j,&value,4);}
    dword_140404A6C[280651439+78*joint]=joint;
   }
   triangle_count=counts[count];hit_mode=hit;leaf_calls=contact_calls=0;memset(trace,0,sizeof trace);memset(contact_trace,0,sizeof contact_trace);
   if(native)((void(*)(int))(image+0xb2e70))(0);else sub_1400B2E70(0);
   if(!native){saved_calls=leaf_calls;saved_contacts=contact_calls;memcpy(saved_trace,trace,sizeof trace);memcpy(saved_contact_trace,contact_trace,sizeof contact_trace);}
   else if(saved_calls!=leaf_calls||saved_contacts!=contact_calls||memcmp(saved_trace,trace,sizeof trace)||memcmp(saved_contact_trace,contact_trace,sizeof contact_trace)){printf("joint terrain caller mismatch triangles %u hit %u sample %u leaf calls %u/%u contacts %u/%u\n",counts[count],hit,sample,saved_calls,leaf_calls,saved_contacts,contact_calls);for(unsigned c=0;c<leaf_calls;c++)for(unsigned i=0;i<16;i++)if(trace[c][i]!=saved_trace[c][i])printf("leaf %u/%u %x/%x\n",c,i,saved_trace[c][i],trace[c][i]);for(unsigned c=0;c<contact_calls;c++)for(unsigned i=0;i<16;i++)if(contact_trace[c][i]!=saved_contact_trace[c][i])printf("contact %u/%u %x/%x\n",c,i,saved_contact_trace[c][i],contact_trace[c][i]);return 1;}
  }checked++;
 }
 printf("%u native human terrain-contact callers pass with up to 1024 triangles; complete vertex/radius/point/normal/correction traces compared, geometry and broadphase helpers controlled\n",checked);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-joint-collision-storage-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/'collision.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
