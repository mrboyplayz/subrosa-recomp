"""Compare collision queries with controlled geometry and broadphase boundaries."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_collision_query import repair


class CollisionQuery(unittest.TestCase):
    def run_fixture(self, name, code):
        out = PROJECT/'reports/client-collision-query-20261004'
        out.mkdir(parents=True, exist_ok=True)
        path = out/(name+'.c');path.write_bytes(code)
        exe = path.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result = subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/(name+'-stdout.txt')).write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def source(self):
        source = read_client_source()
        if b'sr_collision_result[8]' not in region(source,0x3de80)[2]:source,_=repair(source)
        return source

    def native_setup(self, pe, functions, extra=()):
        md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
        pages={0x1f8000,0x310000}|set(extra)
        for rva,size in functions:
            pages.update(range(rva&~4095,(rva+size+4095)&~4095,4096))
            for ins in md.disasm(pe.get_data(rva,size),0x140000000+rva):
                for op in ins.operands:
                    if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:
                        pages.add((ins.address+ins.size+op.mem.disp-0x140000000)&~4095)
        code=b' image=VirtualAlloc(0,0x74800000,MEM_RESERVE,PAGE_NOACCESS);working=VirtualAlloc(0,0x74800000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!working)return 8;\n'
        for page in sorted(pages):
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;\n'.encode()
            data=pe.get_data(page,4096)
            if data:code+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        for index in range(4):
            page=(0x404a6c+111579637*4+1052016*index)&~4095
            code+=f'if(!VirtualAlloc(image+{page},8192,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},8192,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        page=(0x404a6c+73006981*4)&~4095
        code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        return code+b'image[0x1f8b20]=0xc3;\n'

    def test_native_block_query(self):
        source=self.source();pe=pinned_pe();body=region(source,0x3c760)[2]
        prefix=r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned geom_result,geom_calls;static float geom_distance;
static uint32_t call_trace[16][16];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static uint64_t geometry(unsigned *pos,unsigned *normal,float *distance,float *p,float *v,uint64_t radius,int *cell,uint64_t material,uint64_t scale){
 unsigned n=geom_calls++;if(n>=16)abort();memcpy(call_trace[n],p,12);memcpy(call_trace[n]+3,v,12);memcpy(call_trace[n]+6,cell,12);call_trace[n][9]=(unsigned)radius;call_trace[n][10]=(unsigned)material;call_trace[n][11]=(unsigned)scale;
 for(unsigned i=0;i<3;i++){float a=.125f+i*.25f,b=-.5f+i*.125f;memcpy(pos+i,&a,4);memcpy(normal+i,&b,4);}*distance=geom_distance;return geom_result;
}
static uint64_t sub_14003E100(unsigned *p,unsigned *n,float *d,float *a,float *b,int64_t radius,int *cell,int64_t mat,int64_t scale){return geometry(p,n,d,a,b,radius,cell,mat,scale);}
static uint64_t sub_14003E4B0(float *p,int64_t n,float *d,float *a,float *b,float radius,int *cell,unsigned mat,float scale){unsigned r,s;memcpy(&r,&radius,4);memcpy(&s,&scale,4);return geometry((unsigned*)p,(unsigned*)n,d,a,b,r,cell,mat,s);}
static unsigned sub_140012DE0(unsigned map,int x,int y,int z,unsigned old){return 7u+map*128u+x*32u+y*8u+z;}
static unsigned sub_140016720(unsigned map,int x,int y,int z,unsigned old){return sub_140012DE0(map,x,y,z,old)+64;}
static unsigned sub_140016450(unsigned map,unsigned x,unsigned y,unsigned z){return 0x80008123;}
static unsigned sub_1400129D0(unsigned map,unsigned x,unsigned y,unsigned z){return 0x80008123;}
'''.encode()
        code=prefix+body+b'\nint main(void){\n'+self.native_setup(pe,[(0x3c760,0x10c7)],(0x12000,0x16000,0x3e000))
        for rva,name in [(0x3e100,'sub_14003E100'),(0x3e4b0,'sub_14003E4B0'),(0x12de0,'sub_140012DE0'),(0x16720,'sub_140016720'),(0x16450,'sub_140016450'),(0x129d0,'sub_1400129D0')]:code+=f'jump(image+{rva},{name});\n'.encode()
        for index in (111579985,83194359,83197431):
            page=(0x404a6c+index*4)&~4095
            # Metadata block zero's occupancy leaf and the tile cell words.
            if index==111579985:continue
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 unsigned cases=0;unsigned kinds[]={0,0x40000000,0x80000000,0xa0000000,0xc0000000};float distances[]={.125f,1,65536};
 uint32_t saved_state[36],saved_trace[16][16];float saved_out[11];unsigned saved_result=0,saved_calls=0;
 for(unsigned map=0;map<4;map++)for(unsigned sample=0;sample<32;sample++)for(unsigned kind=0;kind<5;kind++)for(unsigned secondary=0;secondary<3;secondary++)for(unsigned hit=0;hit<2;hit++)for(unsigned di=0;di<3;di++){
  for(unsigned native=0;native<2;native++){
   unsigned char *base=native?image:working;dword_140404A6C=(void*)(base+0x404a6c);unsigned at=111579637+263004*map;
   memset(dword_140404A6C+at,0,160);memset(dword_140404A6C+73006981,0xa5,sizeof saved_state);
   for(unsigned axis=0;axis<3;axis++){float one=1,lo=0,hi=4;memcpy(dword_140404A6C+at+4+4*axis,&one,4);memcpy(dword_140404A6C+at+20+axis,&lo,4);memcpy(dword_140404A6C+at+23+axis,&hi,4);dword_140404A6C[at+13+axis]=sample<24?0:1;}
   float one=1;memcpy(dword_140404A6C+at+16,&one,4);memcpy(dword_140404A6C+at+17,&one,4);
   int occupancy=0;int *pointer=&occupancy;memcpy(dword_140404A6C+at+18,&pointer,8);dword_140404A6C[at+348]=0;
   dword_140404A6C[83194359]=kinds[kind];dword_140404A6C[83197431]=secondary==0?0:secondary==1?0x80000000:0xc0000000;
   float center[3]={.25f,.25f,.25f},direction[3]={.2f,-.1f,.3f};if(sample<24)center[sample%3]=(sample&1)?-8:8;
   float out[11]={17,-2,-3,-4,19,23,-5,-6,-7,29,-.75f};geom_calls=0;geom_result=hit;geom_distance=distances[di];memset(call_trace,0,sizeof call_trace);double radius=0;float rad=.03125f;memcpy(&radius,&rad,4);
   unsigned result=native?((unsigned(*)(float*,float*,float*,int,float*,float*,double))(image+0x3c760))(out+1,out+6,out+10,map,center,direction,radius):sub_14003C760(out+1,out+6,out+10,map,center,direction,*(int64_t*)&radius);
   if(!native){saved_result=result;saved_calls=geom_calls;memcpy(saved_state,dword_140404A6C+73006981,sizeof saved_state);memcpy(saved_out,out,sizeof out);memcpy(saved_trace,call_trace,sizeof call_trace);}
   else if(result!=saved_result||saved_calls!=geom_calls||memcmp(saved_out,out,sizeof out)||memcmp(saved_state,dword_140404A6C+73006981,sizeof saved_state)||memcmp(saved_trace,call_trace,sizeof call_trace)){
    printf("block query mismatch map %u sample %u kind %u secondary %u hit %u distance %u result %u/%u calls %u/%u\n",map,sample,kind,secondary,hit,di,saved_result,result,saved_calls,geom_calls);
    for(unsigned i=0;i<36;i++)if(saved_state[i]!=dword_140404A6C[73006981+i])printf("state %u %x/%x\n",i,saved_state[i],dword_140404A6C[73006981+i]);
    for(unsigned c=0;c<geom_calls;c++)for(unsigned i=0;i<16;i++)if(saved_trace[c][i]!=call_trace[c][i])printf("trace %u/%u %x/%x\n",c,i,saved_trace[c][i],call_trace[c][i]);return 1;
   }
  }cases++;
 }
 printf("%u complete block collision query cases pass; rejection/empty grids and both material layers, result/output/state/cell arguments compared; geometry and identifier helpers controlled\n",cases);return 0;
}
'''.encode()
        self.run_fixture('block',code)

    def test_native_combined_query(self):
        source=self.source();pe=pinned_pe();body=region(source,0x3de80)[2]
        code=r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned sample,calls;static uint32_t trace[8][16];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void sub_1400D05B0(int *lists,float *lower,float *upper){if(lists[0]||lists[8193]||lists[16386])abort();memcpy(trace[0],lower,12);memcpy(trace[0]+3,upper,12);lists[0]=11;lists[8193]=22;lists[16386]=33;}
static int64_t sub_14003DAE0(float *out,int64_t lists,float *p,float *v,float radius){if(((int*)lists)[0]!=11||((int*)lists)[8193]!=22||((int*)lists)[16386]!=33)abort();memcpy(trace[1],p,12);memcpy(trace[1]+3,v,12);memcpy(trace[1]+6,&radius,4);for(unsigned i=0;i<8;i++)out[i]=.125f+i*.0625f;out[7]=(sample%5)*.5f;return sample&1;}
static int64_t sub_14003C760(float *pos,float *normal,float *distance,int map,float *p,float *v,int64_t radius){unsigned n=2+calls++;memcpy(trace[n],p,12);memcpy(trace[n]+3,v,12);memcpy(trace[n]+6,&radius,4);trace[n][7]=map;for(unsigned i=0;i<3;i++){pos[i]=.25f+map+i*.125f;normal[i]=-.5f+map+i*.25f;}*distance=(sample%7)*.125f+(3-map)*.125f;dword_140404A6C[73007007]=101+map;return (sample>>map)&1;}
'''.encode()+body+b'\nint main(void){\n'+self.native_setup(pe,[(0x3de80,0x276)],(0xd0000,0x3c000,0x3d000))
        for rva,name in [(0xd05b0,'sub_1400D05B0'),(0x3dae0,'sub_14003DAE0'),(0x3c760,'sub_14003C760')]:code+=f'jump(image+{rva},{name});\n'.encode()
        code+=r'''
 unsigned cases=0,saved_result=0,saved_calls=0;uint32_t saved_state[36],saved_trace[8][16];float saved_inputs[2][5];
 for(sample=0;sample<256;sample++)for(unsigned active=0;active<16;active++){
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);memset(dword_140404A6C+73006981,0xa5,sizeof saved_state);
   for(unsigned map=0;map<4;map++)dword_140404A6C[111579637+263004*map]=(active>>map)&1;
   float inputs[2][5]={{123,.125f+sample*.01f,-.25f,.5f,456},{123,.25f,-.5f,.75f,456}};float radius=.125f+(sample%4)*.0625f;calls=0;memset(trace,0,sizeof trace);
   unsigned result=native?((unsigned(*)(float*,float*,float))(image+0x3de80))(inputs[0]+1,inputs[1]+1,radius):sub_14003DE80(inputs[0]+1,inputs[1]+1,radius);
   if(!native){saved_result=result;saved_calls=calls;memcpy(saved_state,dword_140404A6C+73006981,sizeof saved_state);memcpy(saved_inputs,inputs,sizeof inputs);memcpy(saved_trace,trace,sizeof trace);}
   else if(result!=saved_result||calls!=saved_calls||memcmp(saved_state,dword_140404A6C+73006981,sizeof saved_state)||memcmp(saved_inputs,inputs,sizeof inputs)||memcmp(saved_trace,trace,sizeof trace)){printf("combined collision mismatch sample %u active %u result %u/%u calls %u/%u\n",sample,active,saved_result,result,saved_calls,calls);return 1;}
  }cases++;
 }
 printf("%u complete combined collision query cases pass; 32-byte result, bounds, list initialization, active maps, nearest hit, output globals and input guards compared; broadphase and geometry controlled\n",cases);return 0;
}
'''.encode()
        self.run_fixture('combined',code)

    def test_native_actor_consumer(self):
        source=self.source();pe=pinned_pe();body=region(source,0x10d0d0)[2]
        code=r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned sample,queries,contacts;static uint32_t trace[12][16];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void sub_140188720(int *a,float *b,float *c,int64_t d,int e){abort();}
static int64_t sub_14003DE80(float *point,float *direction,float radius){unsigned n=queries++;memcpy(trace[n],point,12);memcpy(trace[n]+3,direction,12);memcpy(trace[n]+6,&radius,4);for(unsigned i=0;i<6;i++){float value=.125f+i*.125f;memcpy(dword_140404A6C+73006981+i,&value,4);}float distance=.03125f;memcpy(dword_140404A6C+73006988,&distance,4);return sample&1;}
static int64_t sub_14003D830(float *out,int *lists,float *point,float *direction,float radius){if(lists[0]||lists[12289])abort();unsigned n=queries++;memcpy(trace[n],point,12);memcpy(trace[n]+3,direction,12);memcpy(trace[n]+6,&radius,4);for(unsigned i=0;i<8;i++)out[i]=.25f+i*.0625f;return sample&2;}
static int64_t sub_140005160(short body,unsigned *offset,unsigned *normal,float depth,unsigned material,float fraction,unsigned bounce){unsigned n=4+contacts++;trace[n][0]=(uint16_t)body;memcpy(trace[n]+1,offset,12);memcpy(trace[n]+4,normal,12);memcpy(trace[n]+7,&depth,4);trace[n][8]=material;memcpy(trace[n]+9,&fraction,4);trace[n][10]=bounce;return 0;}
'''.encode()+body+b'\nint main(void){\n'+self.native_setup(pe,[(0x10d0d0,0x53f)],(0x5000,0x3d000,0x3e000,0x188000))
        for rva,name in [(0x5160,'sub_140005160'),(0x3de80,'sub_14003DE80'),(0x3d830,'sub_14003D830'),(0x188720,'sub_140188720')]:code+=f'jump(image+{rva},{name});\n'.encode()
        for index,size in [(18215700,4096),(129720374,0x16000),(254352099,4096),(179992845,4096)]:
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 unsigned cases=0,saved_queries=0,saved_contacts=0;uint32_t saved_trace[12][16],saved_state[36];
 for(unsigned actor=0;actor<4;actor++)for(unsigned part=0;part<2;part++)for(sample=0;sample<128;sample++){
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);memset(dword_140404A6C+73006981,0xa5,sizeof saved_state);dword_140404A6C[254352099]=0;dword_140404A6C[179992845]=37;
   unsigned body=sample%3;int offset=20840*actor+172*part;unsigned *fields=(unsigned*)((char*)(dword_140404A6C+129720374)+offset);memset(fields,0,80);fields[0]=body;
   float length=.125f+(sample%4)*.0625f,radius=.0625f;memcpy(fields+1,&length,4);memcpy(fields+13,&radius,4);
   float *state=(float*)(dword_140404A6C+18215715+47*body);for(unsigned i=0;i<12;i++)state[i]=.125f+i*.03125f;state[0]=.25f;state[1]=.5f;state[2]=.75f;
   queries=contacts=0;memset(trace,0,sizeof trace);
   if(native)((void(*)(int,int))(image+0x10d0d0))(actor,part);else sub_14010D0D0(actor,part);
   if(dword_140404A6C[179992845]){printf("actor final clear mismatch\n");return 1;}
   if(!native){saved_queries=queries;saved_contacts=contacts;memcpy(saved_trace,trace,sizeof trace);memcpy(saved_state,dword_140404A6C+73006981,sizeof saved_state);}
   else if(queries!=saved_queries||contacts!=saved_contacts||memcmp(saved_trace,trace,sizeof trace)||memcmp(saved_state,dword_140404A6C+73006981,sizeof saved_state)){
    printf("actor collision consumer mismatch actor %u part %u sample %u queries %u/%u contacts %u/%u\n",actor,part,sample,saved_queries,queries,saved_contacts,contacts);
    for(unsigned c=0;c<12;c++)for(unsigned i=0;i<16;i++)if(saved_trace[c][i]!=trace[c][i])printf("trace %u/%u %x/%x\n",c,i,saved_trace[c][i],trace[c][i]);return 1;
   }
  }cases++;
 }
 printf("%u complete actor collision consumer cases pass; two points, contact offset/normal/depth/coefficients, 32-byte result and final clear compared; grid candidates empty and queries/contact creation controlled\n",cases);return 0;
}
'''.encode()
        self.run_fixture('actor',code)


if __name__=='__main__':unittest.main()
