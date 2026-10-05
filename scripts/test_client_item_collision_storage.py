"""Compare complete item ticks and collision endpoints with native instructions."""
import unittest
from client_sources import read_client_source
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_item_collision_storage import repair
import test_client_collision_query as collision


class ItemCollisionStorage(unittest.TestCase):
    def test_native_train_track_contacts(self):
        source = read_client_source()
        body = region(source, 0x10c110)[2]
        self.assertIn(b'sr_train_track_hit[12]', body)
        import re
        tables = re.search(rb'_Alignas\(16\) int sr_geometry_tables\[212\].*?\n\);', source, re.S)
        self.assertIsNotNone(tables)
        code = r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned calls,hit,trace[64][16];
extern int dword_1402B34F8[1],dword_1402B3528;
static unsigned *event(unsigned kind){if(calls>=64)abort();unsigned *p=trace[calls++];p[0]=kind;return p;}
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void putf(unsigned at,float value){memcpy(dword_140404A6C+at,&value,4);}
static void sub_1401FC920(void *a,void *b,size_t n){memmove(a,b,n);}
static void sub_1401885C0(int *list,int segment,int group){event(1)[1]=group;list[1+12*list[0]]=segment;list[0]++;}
static int sub_1400DA300(__int64 result,int *list,float *start,float *end){
 unsigned *e=event(2);memcpy(e+1,start,12);memcpy(e+4,end,12);e[7]=list[0];
 float *p=(void*)result;for(unsigned i=0;i<3;i++){p[i]=end[i]+.125f*(i+1);p[3+i]=(i==1)?1.0f:0.0f;}p[6]=0;p[7]=.5f;return hit;
}
static __int64 sub_140005160(short body,unsigned *p,unsigned *n,float depth,unsigned friction,float damp,unsigned limit){
 unsigned *e=event(3);e[1]=(unsigned)body;memcpy(e+2,p,12);memcpy(e+5,n,12);memcpy(e+8,&depth,4);e[9]=friction;memcpy(e+10,&damp,4);e[11]=limit;return 0;
}
'''.encode()+tables[0]+b'\n'+body+b'\nint main(void){\n'
        pe = pinned_pe()
        code += collision.CollisionQuery.native_setup(self, pe, [(0x10c110, 0x8ec)],
                                                       (0x1fc000, 0x188000, 0xda000, 0x5000))
        for rva, name in ((0x1fc920, 'sub_1401FC920'), (0x1885c0, 'sub_1401885C0'),
                          (0xda300, 'sub_1400DA300'), (0x5160, 'sub_140005160')):
            code += f'jump(image+{rva},{name});\n'.encode()
        for index, size in ((129716709, 0x20000), (18215709, 0x5000),
                            (485543000, 0x5000), (254352099, 0x3000),
                            (358297501, 0x12000), (179992845, 0x1000)):
            page = (0x404a6c+index*4)&~4095
            code += f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code += r'''
 if(memcmp(sr_geometry_tables,image+0x2b34f0,sizeof sr_geometry_tables))return 7;
 unsigned saved_calls,saved_trace[64][16],saved_contacts[128],cases=0;
 for(unsigned sample=0;sample<64;sample++)for(hit=0;hit<2;hit++)for(unsigned nat=0;nat<2;nat++){
  dword_140404A6C=(void*)((nat?image:working)+0x404a6c);calls=0;memset(trace,0,sizeof trace);
  memset(dword_140404A6C+129716709,0,0x10000);memset(dword_140404A6C+18215709,0,0x4000);memset(dword_140404A6C+485543000,0,0x2000);
  memset(dword_140404A6C+358297501,0,0x10000);memset(dword_140404A6C+254352099,0,0x1000);
  dword_140404A6C[129716719]=0;dword_140404A6C[129721812]=1;dword_140404A6C[129721815]=2;
  dword_140404A6C[129721814]=0;dword_140404A6C[129721817]=1;dword_140404A6C[129721809]=~0u;
  for(unsigned b=0;b<3;b++){
   for(unsigned i=0;i<3;i++)putf(47*b+18215715+i,1.0f+sample*.125f+i*.25f+b);
   for(unsigned i=0;i<9;i++)putf(47*b+18215724+i,(i%4==0)?1:0);
   if(sample&1){putf(47*b+18215724,0);putf(47*b+18215726,1);putf(47*b+18215730,-1);putf(47*b+18215732,0);}
  }
  for(unsigned i=0;i<6;i++)putf(129716753+i,0);
  dword_140404A6C[254352099]=1;dword_140404A6C[(1021621756-0x404a6c)/4]=0;
  putf(358312926,-1);putf(358312928,-1);putf(358312929,1);putf(358312931,1);
  if(nat)((void(*)(int))(image+0x10c110))(0);else sub_14010C110(0);
  if(!nat){saved_calls=calls;memcpy(saved_trace,trace,sizeof trace);memcpy(saved_contacts,dword_140404A6C+485543000,sizeof saved_contacts);}
  else if(calls!=saved_calls||memcmp(saved_trace,trace,sizeof trace)||memcmp(saved_contacts,dword_140404A6C+485543000,sizeof saved_contacts)){
   printf("track contact mismatch sample=%u hit=%u calls=%u/%u\n",sample,hit,saved_calls,calls);
   for(unsigned c=0;c<calls;c++)for(unsigned j=0;j<16;j++)if(saved_trace[c][j]!=trace[c][j])printf("trace %u word %u %08x/%08x\n",c,j,saved_trace[c][j],trace[c][j]);return 1;
  }else cases++;
 }
 printf("%u complete native train track contact comparisons pass: four contact corners per bogie, hit positions, normals, depth, track geometry tables and joint state; triangle/contact leaves controlled\n",cases);return 0;
}
'''.encode()
        collision.CollisionQuery.run_fixture(self, 'train-track-contact', code)

    def test_native_item_tick(self):
        source = read_client_source()
        if b'sr_item_collision_endpoint' not in region(source, 0xce370)[2]:
            source, _ = repair(source)
        code = r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned trace[64][16],calls,hit;
static unsigned *event(unsigned kind){if(calls>=64)abort();unsigned *p=trace[calls++];p[0]=kind;return p;}
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void putf(unsigned at,float f){memcpy(dword_140404A6C+at,&f,4);}
static int sub_1400DC050(float *a,float *b,int mode){
 unsigned *p=event(1);memcpy(p+1,a,12);memcpy(p+4,b,12);p[7]=mode;
 for(unsigned i=0;i<3;i++){putf(73006981+i,a[i]+(b[i]-a[i])*.5f);putf(73006984+i,i==1?1.0f:0.0f);}
 dword_140404A6C[73007015]=~0u;return hit;
}
static __int64 sub_140005160(short body,unsigned *p,unsigned *n,float depth,unsigned friction,float damp,unsigned limit){
 unsigned *e=event(2);e[1]=(unsigned)body;memcpy(e+2,p,12);memcpy(e+5,n,12);memcpy(e+8,&depth,4);e[9]=friction;memcpy(e+10,&damp,4);e[11]=limit;return 0;
}
static void sub_1400CA1C0(int i){event(3)[1]=i;}
static void sub_1400CA430(int i){event(4)[1]=i;}
static int sub_140151190(float*a,float*b,float*c,int d,float*e,__int64 f){abort();}
static void sub_1400CDBD0(unsigned a,int b,unsigned c,unsigned d,unsigned e,unsigned f){abort();}
'''.encode()+region(source, 0xce370)[2]+b'\nint main(void){\n'
        code += collision.CollisionQuery.native_setup(self, pinned_pe(), [(0xce370, 0xde8)],
                                           (0xca000, 0x5000, 0xdc000, 0x151000, 0xcd000))
        for rva, name in ((0xdc050, 'sub_1400DC050'), (0x5160, 'sub_140005160'),
                          (0xca1c0, 'sub_1400CA1C0'), (0xca430, 'sub_1400CA430'),
                          (0x151190, 'sub_140151190'), (0xcdbd0, 'sub_1400CDBD0')):
            code += f'jump(image+{rva},{name});\n'.encode()
        for index, size in ((278845893, 0x6e1000), (278521288, 0x3a000),
                            (18215709, 0x5000), (456202453, 0x1000)):
            page = (0x404a6c+index*4)&~4095
            code += f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code += r'''
 unsigned saved[64][16],saved_calls,cases=0;unsigned saved_item[1760],saved_body[47];
 float mesh[][3]={{-.5f,-.25f,1},{.5f,.25f,-1},{0,1,.5f}};
 for(unsigned kind=0;kind<45;kind++)for(unsigned sample=0;sample<8;sample++)for(hit=0;hit<2;hit++){
  for(unsigned nat=0;nat<2;nat++){
   dword_140404A6C=(void*)((nat?image:working)+0x404a6c);calls=0;memset(trace,0,sizeof trace);
   memset(dword_140404A6C+278845893,0,1024*1760*4);memset(dword_140404A6C+278521288,0,45*1268*4);
   memset(dword_140404A6C+18215709,0,0x4000);dword_140404A6C[456202453]=0;
   unsigned item=sample%4,body=sample%7,at=278845893+1760*item,bi=47*body,profile=1268*kind;
   dword_140404A6C[at]=1;dword_140404A6C[at+5]=kind;dword_140404A6C[at+7]=1;
   dword_140404A6C[at+9]=dword_140404A6C[at+10]=~0u;dword_140404A6C[at+22]=body;dword_140404A6C[at+78]=10;
   float pos[]={1088+sample*.125f,25.25f+(sample%3),1072-sample*.25f};
   for(unsigned i=0;i<3;i++){putf(at+23+i,pos[i]);putf(bi+18215715+i,pos[i]);putf(at+32+i,.03125f*(i+1));putf(at+50+i,.0625f*(i+1));putf(profile+278521350+i,.125f*(i+1));}
   for(unsigned i=0;i<9;i++)putf(bi+18215724+i,(i%4==0)?1:0);
   if(sample&1){putf(bi+18215724,0);putf(bi+18215726,1);putf(bi+18215730,-1);putf(bi+18215732,0);}
   dword_140404A6C[profile+278522247]=3;void *vertices=mesh;memcpy(dword_140404A6C+profile+278522249,&vertices,8);
   if(nat)((void(*)(void))(image+0xce370))();else sub_1400CE370();
   if(!nat){saved_calls=calls;memcpy(saved,trace,sizeof trace);memcpy(saved_item,dword_140404A6C+at,sizeof saved_item);memcpy(saved_body,dword_140404A6C+bi+18215709,sizeof saved_body);}
   else if(calls!=saved_calls||memcmp(saved,trace,sizeof trace)||memcmp(saved_item,dword_140404A6C+at,sizeof saved_item)||memcmp(saved_body,dword_140404A6C+bi+18215709,sizeof saved_body)){
    printf("item tick mismatch kind=%u sample=%u hit=%u calls=%u/%u\n",kind,sample,hit,saved_calls,calls);
    for(unsigned c=0;c<calls;c++)for(unsigned j=0;j<16;j++)if(saved[c][j]!=trace[c][j])printf("trace %u word %u %08x/%08x\n",c,j,saved[c][j],trace[c][j]);return 1;
   }
  }cases++;
 }
 printf("%u complete native item tick comparisons pass: box/mesh endpoints, contact offsets, hit/miss callbacks and item/body state; raycast and contact leaves controlled\n",cases);return 0;
}
'''.encode()
        collision.CollisionQuery.run_fixture(self, 'item-endpoint', code)


if __name__ == '__main__': unittest.main()
