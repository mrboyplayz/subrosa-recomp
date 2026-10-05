"""Compare recovered world GL arguments with original bounded call blocks."""
import re
from client_sources import read_client_source
import json
import subprocess
import unittest
import capstone
from repair_client_menu_actions import PROJECT,pinned_pe,region


class WorldGLCalls(unittest.TestCase):
    def test_visibility_matrices_and_clip_plane(self):
        pe=pinned_pe();body=region(read_client_source(),0x94a90)[2]
        cs=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);cs.detail=True
        ins=list(cs.disasm(pe.get_data(0x94a90,0x95810-0x94a90),0x140094a90))
        pages={0x94000,0x95000,0x404000,0x1fc000,0x7a000,0x11e000,0x1f8000}
        for x in ins:
            for op in x.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:
                    rv=x.address+x.size+op.mem.disp-0x140000000
                    if 0<=rv<0x74794000:pages.add(rv&~4095)
        indices=[40714349,40714349+255,284024893,297756277,71737685,71737724,71737745,71737784,284024502,284024505,284024513,284545216,284545218,431564485,431564517,431564565,431564577,431564485+95,283790155,283791478,283791765,283793813,283829871,283829872,284024944]
        pages|={(0x404a6c+4*i)&~4095 for i in indices}
        code=r'''#include "export_compat.h"
static unsigned *dword_140404A6C;static float *flt_140384000;
static uint32_t captured[2][6];static unsigned calls;
static uint64_t ignored(){return 0;}
static void *clear(void *p,int c,size_t n){return memset(p,c,n);}
static void clip(unsigned location,unsigned count,const void *data){if(calls>=2||count!=1)abort();captured[calls][0]=location;captured[calls][1]=count;memcpy(captured[calls]+2,data,16);calls++;}
'''.encode()
        constants=sorted(set(re.findall(rb'\bxmmword_140[0-9A-Fa-f]+\b',body)))
        for name in constants:code+=b'static __int128 '+name+b';\n'
        names=sorted(set(re.findall(rb'\b((?:sub|qword|unk)_140[0-9A-Fa-f]+)\b',body))-{b'sub_140094A90'})
        for name in names:code+=b'static uint64_t (*'+name+b')();\n'
        code+=body+b'\nint main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 8;\n'
        for page in sorted(pages):
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;\n'.encode()
            data=pe.get_data(page,4096)
            if data:code+=('{unsigned char bytes[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},bytes,sizeof bytes);}}\n').encode()
        for name in names:code+=name+b'=(void *)'+(b'clear' if name==b'sub_1401FCD30' else b'clip' if name==b'unk_140404340' else b'ignored')+b';\n'
        for x in ins:
            if x.mnemonic=='call' and x.operands[0].type==capstone.CS_OP_MEM:
                op=x.operands[0];slot=x.address+x.size+op.mem.disp-0x140000000
                code+=f'*(void **)(image+{slot})=(void *)'.encode()+(b'clip' if slot==0x404340 else b'ignored')+b';\n'
        for rv,callback in [(0x1fcd30,'clear'),(0x7a8c0,'ignored'),(0x11e210,'ignored'),(0x1f8b20,'ignored')]:
            code+=f'{{unsigned char jump[]={{0xff,0x25,0,0,0,0}};memcpy(image+{rv},jump,6);*(void **)(image+{rv+6})=(void *){callback};}}\n'.encode()
        for name in constants:
            rv=int(name.decode().split('_')[1],16)-0x140000000
            code+=b'memcpy(&'+name+f',image+{rv},16);\n'.encode()
        code+=r'''
 dword_140404A6C=(void *)(image+0x404a6c);flt_140384000=(void *)(image+0x384000);dword_140404A6C[284024893]=1;
 dword_140404A6C[283790155]=dword_140404A6C[283791478]=dword_140404A6C[283829871]=dword_140404A6C[283829872]=0;
 dword_140404A6C[71737724]=53;dword_140404A6C[71737784]=97;
 unsigned total=0;uint32_t seed=0x492a17;
 for(unsigned sample=0;sample<256;sample++){
  uint32_t initial[96];for(unsigned i=0;i<96;i++){seed=1664525u*seed+1013904223u;float f=(int32_t)(seed%4097)-2048;f/=256.0f;memcpy(initial+i,&f,4);}
  memcpy(dword_140404A6C+284024502,initial,12*4);memcpy(dword_140404A6C+284545216,initial+12,3*4);
  dword_140404A6C[297756277]=initial[15];
  uint32_t saved[2][6],matrices[96];
  for(unsigned native=0;native<2;native++){
   memcpy(dword_140404A6C+431564485,initial,96*4);memset(captured,0xcc,sizeof captured);calls=0;
   if(native)((void(*)(void))(image+0x94a90))();else sub_140094A90();
   if(!native){memcpy(saved,captured,sizeof saved);memcpy(matrices,dword_140404A6C+431564485,sizeof matrices);}
   else if(calls!=2||memcmp(saved,captured,sizeof saved)||memcmp(matrices,dword_140404A6C+431564485,sizeof matrices)){printf("Visibility matrices/clip mismatch at %u; calls %u\n",sample,calls);return 1;}
  }total++;
 }
 printf("%u complete native visibility pass cases match matrices and both clip-plane uploads; geometry disabled and GL/projection/world boundaries controlled\n",total);return 0;}
'''.encode()
        out=PROJECT/'reports/client-render-workspaces-20261004';out.mkdir(parents=True,exist_ok=True)
        f=out/'visibility.c';f.write_bytes(code);exe=f.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_indexed_buffer_offsets(self):
        from repair_client_indexed_gl_calls import MANIFEST,replacement
        pe=pinned_pe();rows=json.loads(MANIFEST.read_text())['calls']
        code=r'''#include "export_compat.h"
static unsigned *dword_140404A6C;static float *flt_140384000;
static void (*qword_1404044A8)(unsigned,int,unsigned,unsigned char,int,const void *);
static uint64_t trace[6];static unsigned calls;
static void attr(unsigned a,int b,unsigned c,unsigned char d,int e,const void *f){uint64_t t[]={a,(unsigned)b,c,d,(unsigned)e,(uintptr_t)f};memcpy(trace,t,sizeof t);calls++;}
static void draw(unsigned a,int b,unsigned c,const void *d){uint64_t t[]={a,(unsigned)b,c,(uintptr_t)d,0,0};memcpy(trace,t,sizeof t);calls++;}
static void put(unsigned char *image,int64_t rva,uint32_t value){if(rva<0||rva>=0x74793000)abort();if(!VirtualAlloc(image+(rva&~4095LL),4096,MEM_COMMIT,PAGE_READWRITE))abort();memcpy(image+rva,&value,4);}
extern void indexed_block(void *image,void *code,uint64_t entity,unsigned mode);
extern void indexed_return(void);
__asm__(".text\n.global indexed_block\nindexed_block:\npush %rbp\npush %rbx\npush %rsi\npush %rdi\npush %r12\npush %r13\npush %r14\npush %r15\nsub $0x38,%rsp\nmov %rdx,%r11\nmov %rcx,%r13\nmov %rcx,%r14\nmov %r8,%rdi\nimul $24,%r8,%rbx\nmov %rbx,%rsi\ntest %r9d,%r9d\njnz 1f\nlea (%r8,%r8,2),%rsi\n1:\ncmp $2,%r9d\njne 2f\nmov %rcx,%rsi\nimul $0x6c48,%r8,%rdi\nlea 0x14161244(%rcx,%rdi),%rdi\n2:\njmp *%r11\n.global indexed_return\nindexed_return:\nadd $0x38,%rsp\npop %r15\npop %r14\npop %r13\npop %r12\npop %rdi\npop %rsi\npop %rbx\npop %rbp\nret\n");
'''.encode()
        for k,row in enumerate(rows):
            code+=(f'static void recovered_{k}(int64_t entity){{int64_t v8=entity,v3=entity,v4=entity,v10=entity,v9=3*entity,v5=6*entity,i=24*entity;unsigned *v2=dword_140404A6C+83194358+6930*entity;'+replacement(row)+'}\n').encode()
        code+=b'int main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 8;\n'
        for page in (0x94000,0x11c000,0x11e000,0x404000):
            # Only the actual original code pages and GL slots are executable.
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;\n'.encode()
        code+=b'dword_140404A6C=(void *)(image+0x404a6c);flt_140384000=(void *)(image+0x384000);qword_1404044A8=attr;*(void **)(image+0x4044a8)=attr;*(void **)(image+0x404010)=draw;unsigned cases=0;uint32_t seed=0x91462573;\n'
        for k,row in enumerate(rows):
            start=int(row['native_start'],16);end=int(row['native_end'],16)
            slot=row['slot_expression']
            base=row['offset_table_index'];stride=row['block_size_index'];mode=k//2
            code+=('{unsigned char original[]={'+','.join(map(str,pe.get_data(start,end-start)))+f'}};memcpy(image+{start},original,sizeof original);unsigned char jump[]={{0xff,0x25,0,0,0,0}};memcpy(image+{end},jump,6);*(void **)(image+{end+6})=indexed_return;\n').encode()
            code+=r'''for(unsigned s=0;s<512;s++){
 seed=seed*1664525u+1013904223u;int64_t entity=s%64,v8=entity,v3=entity,v4=entity,v10=entity,v9=3*entity,v5=6*entity,i=24*entity;
 int32_t block_index=(s%11==0)?-3:(int32_t)(s%8),item=(s%13==0)?-4:(int32_t)((s/8)%16);
 uint32_t size_values[]={0,1,4,64,128,0x10000,0x20000000,0x7fffffff,0x80000000,0xffffffff};
'''.encode()
            code+=(f'put(image,0x404a6c+4LL*({slot}),(uint32_t)block_index);put(image,0x404a6c+4LL*(({slot})+1),(uint32_t)item);\n'
                   f'put(image,0x404a6c+4LL*{stride},size_values[s%10]);put(image,0x404a6c+4LL*({base}+3074LL*block_index+3LL*item),seed);\n'
                   'put(image,0x404a6c+4LL*(73991665+8969*entity),seed);put(image,0x404a6c+4LL*(83194358+6930*entity+6154),seed);\n'
                   'uint64_t saved[6];memset(trace,0,sizeof trace);calls=0;'
                   f'recovered_{k}(entity);memcpy(saved,trace,sizeof saved);if(calls!=1)return 2;memset(trace,0,sizeof trace);calls=0;indexed_block(image,image+{start},entity,{mode});\n'
                   f'if(calls!=1||memcmp(saved,trace,sizeof trace)){{printf("Indexed GL block {k} sample %u\\n",s);for(unsigned n=0;n<6;n++)printf("%u C=%llx N=%llx\\n",n,(unsigned long long)saved[n],(unsigned long long)trace[n]);return 1;}}cases++;}}}}\n').encode()
        code+=b'printf("%u native indexed GL argument block cases pass; signed table addressing, 32-bit overflow and sign extension, three vertex and three element offsets; driver callbacks controlled\\n",cases);return 0;}\n'
        out=PROJECT/'reports/client-indexed-gl-calls-20261004';out.mkdir(parents=True,exist_ok=True)
        f=out/'indexed.c';f.write_bytes(code);exe=f.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_world_batch_setup_and_empty_material_loop(self):
        pe=pinned_pe();body=region(read_client_source(),0x11e210)[2]
        cs=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);cs.detail=True
        indices=[315570516,318816604,283791463,283791464,283793813,283793813+32,40714349,40714349+255]
        pages={0x11e000,0x404000}|{(0x404a6c+4*i)&~4095 for i in indices}
        for ins in cs.disasm(pe.get_data(0x11e210,0x520),0x14011e210):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:
                    target=ins.address+ins.size+op.mem.disp-0x140000000
                    if 0<=target<0x74794000:pages.add(target&~4095)
        code=r'''#include "export_compat.h"
static unsigned *dword_140404A6C;
static uint64_t trace[64][7];static unsigned count;
static void add(unsigned kind,uint64_t a,uint64_t b,uint64_t c,uint64_t d,uint64_t e,uint64_t f){uint64_t row[]={kind,a,b,c,d,e,f};if(count>=64)abort();memcpy(trace[count++],row,sizeof row);}
static uint64_t gl_bind(unsigned target,unsigned handle){add(1,target,handle,0,0,0,0);return 0;}
static uint64_t enable(unsigned x){add(2,x,0,0,0,0,0);return 0;}
static uint64_t disable(unsigned x){add(3,x,0,0,0,0,0);return 0;}
static uint64_t program(unsigned x){add(4,x,0,0,0,0,0);return 0;}
static void attr(unsigned a,int b,unsigned c,unsigned char d,int e,const void *f){add(5,a,(unsigned)b,c,d,(unsigned)e,(uintptr_t)f);}
static void color(unsigned a,float b,float c,float d,float e){uint32_t u[4];float f[]={b,c,d,e};memcpy(u,f,sizeof u);add(6,a,u[0],u[1],u[2],u[3],0);}
static uint64_t excluded(void){puts("Excluded nonempty material path reached");abort();}
'''.encode()
        names=sorted(set(re.findall(rb'\b((?:qword|unk)_140[0-9A-Fa-f]+)\(',body))|{b'qword_1404044A8',b'unk_140404468'})
        for name in names:code+=b'static uint64_t (*'+name+b')();\n'
        code+=body+b'\nint main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 8;\n'
        for page in sorted(pages):
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;\n'.encode()
            data=pe.get_data(page,4096)
            if data:code+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        callbacks={b'qword_140404170':'gl_bind',b'qword_140404238':'enable',b'qword_140404230':'disable',b'qword_1404042E0':'program',b'qword_1404044A8':'attr',b'unk_140404468':'color'}
        for name in names:
            code+=name+b'=(void *)'+callbacks.get(name,'excluded').encode()+b';\n'
            slot=int(name.decode().split('_')[1],16)-0x140000000
            if slot>>12 in {p>>12 for p in pages}:code+=f'*(void **)(image+{slot})=(void *){callbacks.get(name,"excluded")};\n'.encode()
        code+=r'''
 dword_140404A6C=(void *)(image+0x404a6c);unsigned cases=0;
 for(unsigned pattern=0;pattern<64;pattern++)for(unsigned flags=0;flags<4;flags++)for(unsigned mode=0;mode<3;mode++){
  dword_140404A6C[315570516]=flags&1;dword_140404A6C[318816604]=flags>>1;
  dword_140404A6C[283791463]=pattern%16;dword_140404A6C[283791464]=(pattern+7)%16;
  for(unsigned i=0;i<16;i++)dword_140404A6C[283793813+2*i]=0x83672519u+pattern*987u+i;
  uint64_t saved[64][7];unsigned saved_count;
  for(unsigned native=0;native<2;native++){
   memset(trace,0xcc,sizeof trace);count=0;
   if(native)((void(*)(int,int64_t,int64_t))(image+0x11e210))(mode,0,0);
   else sub_14011E210(mode,0,0);
   if(!native){memcpy(saved,trace,sizeof trace);saved_count=count;}
   else if(saved_count!=count||memcmp(saved,trace,sizeof trace)){printf("Batch setup mode %u flags %u pattern %u calls %u/%u\n",mode,flags,pattern,saved_count,count);return 1;}
  }cases++;
 }
 printf("%u complete native batch setup and empty-material loop cases pass; modes 0/1/2, early exits, buffer handles and ordered GL calls; nonempty material rendering excluded\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-world-gl-calls-20261004';out.mkdir(parents=True,exist_ok=True)
        f=out/'batch.c';f.write_bytes(code);exe=f.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'batch-stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_original_call_arguments(self):
        pe=pinned_pe();source=read_client_source()
        body=region(source,0x123190)[2]
        rows=[]
        # Each original block ends immediately after its GL call. The driver
        # boundary is a capture callback; this is not a renderer parity test.
        specs=[('18215089',0x123208,0x123222,'clear',0),
               ('18215089',0x1239d2,0x1239e4,'clear',1),
               ('18215093',0x12323e,0x123247,'depth',0),
               ('18215093',0x12325b,0x123269,'depth',1),
               ('attrib',0x123312,0x123334,'attrib',0),
               ('attrib',0x123582,0x1235b6,'attrib',1),
               ('attrib',0x1236c4,0x1236f8,'attrib',2),
               ('18215097',0x1239fa,0x123a0a,'mask',0),
               ('18215097',0x123ae8,0x123af9,'mask',1),
               ('18215097',0x123ed1,0x123ee4,'mask',2),
               ('18215099',0x123f36,0x123f3e,'depthmask',0)]
        for key,start,end,kind,index in specs:
            if key=='attrib':pattern=rb'\(\(void \(\*\)\(unsigned,int,unsigned,unsigned char,int,const void \*\)\)qword_1404044A8\)\([^;]+;'
            else:pattern=rb'\(\*\(void \(\*\*\)\([^\n]+?&dword_140404A6C\['+key.encode()+rb'\]\)\([^;]+;'
            calls=re.findall(pattern,body)
            rows.append((start,end,kind,calls[index].decode(),key))
        from repair_client_render_float_calls import MANIFEST as FLOAT_MANIFEST
        extra=json.loads(FLOAT_MANIFEST.read_text())['functions']
        for fn in extra:
            native_body=region(source,int(fn['function'],16)-0x140000000)[2]
            for call in fn['calls']:
                self.assertIn(call['new'].encode(),native_body)
                rows.append((int(call['start'],16),int(call['end'],16),call['kind'],call['new'],fn['function']))
        code=r'''#include "export_compat.h"
static unsigned *dword_140404A6C;
static void (*qword_1404044A8)(unsigned,int,unsigned,unsigned char,int,const void *);
static float *flt_140384000;
static uint64_t trace[7];static unsigned calls;
static void clear(float r,float g,float b,float a){float f[]={r,g,b,a};for(unsigned i=0;i<4;i++){uint32_t u;memcpy(&u,f+i,4);trace[i]=u;}calls++;}
static void depth(double x){memcpy(trace,&x,8);calls++;}
static void attrib(unsigned a,int b,unsigned c,unsigned char d,int e,const void *f){trace[0]=a;trace[1]=(unsigned)b;trace[2]=c;trace[3]=d;trace[4]=(unsigned)e;trace[5]=(uintptr_t)f;calls++;}
static void mask(unsigned char a,unsigned char b,unsigned char c,unsigned char d){trace[0]=a;trace[1]=b;trace[2]=c;trace[3]=d;calls++;}
static void depthmask(unsigned char x){trace[0]=x;calls++;}
static void draw(unsigned a,int b,unsigned c,const void *d){trace[0]=a;trace[1]=(unsigned)b;trace[2]=c;trace[3]=(uintptr_t)d;calls++;}
static void attrib4f(unsigned a,float b,float c,float d,float e){float values[]={b,c,d,e};trace[0]=a;for(unsigned i=0;i<4;i++){uint32_t u;memcpy(&u,values+i,4);trace[i+1]=u;}calls++;}
static void (*unk_140404468)(unsigned,float,float,float,float);
extern void block(void *image,void *code,uint64_t index,const uint32_t *register_values);
extern void block_return(void);
__asm__(".text\n.global block\nblock:\npush %rbp\npush %rbx\npush %rsi\npush %rdi\npush %r12\npush %r13\npush %r14\npush %r15\nsub $0xc8,%rsp\nmovaps %xmm6,0x60(%rsp)\nmovaps %xmm7,0x70(%rsp)\nmovaps %xmm8,0x80(%rsp)\nmovaps %xmm9,0x90(%rsp)\nmovaps %xmm10,0xa0(%rsp)\nmovaps %xmm11,0xb0(%rsp)\nmovss 0(%r9),%xmm6\nmovss 4(%r9),%xmm7\nmovss 8(%r9),%xmm8\nmovss 12(%r9),%xmm9\nmovss 16(%r9),%xmm10\nmovss 20(%r9),%xmm11\nmov %rcx,%r15\nmov %rcx,%rsi\nmov %r8,%rbx\nxor %r12d,%r12d\nmov 24(%r9),%rdi\njmp *%rdx\n.global block_return\nblock_return:\nmovaps 0x60(%rsp),%xmm6\nmovaps 0x70(%rsp),%xmm7\nmovaps 0x80(%rsp),%xmm8\nmovaps 0x90(%rsp),%xmm9\nmovaps 0xa0(%rsp),%xmm10\nmovaps 0xb0(%rsp),%xmm11\nadd $0xc8,%rsp\npop %r15\npop %r14\npop %r13\npop %r12\npop %rdi\npop %rsi\npop %rbx\npop %rbp\nret\n");
'''.encode()
        for k,(_,_,_,call,_) in enumerate(rows):code+=('static void recovered_'+str(k)+'(uint32_t stride){uint64_t v101=stride;int64_t v4=0;'+call+'}\n').encode()
        code+=b'int main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 8;\n'
        pages={0x278000,0x279000,0x404000,0x4980000}|{(0x404a6c+4*idx)&~4095 for idx in (456217207,271911768,178527475,159842283)}|{start&~4095 for start,_,_,_,_ in rows}|{end&~4095 for _,end,_,_,_ in rows}
        for page in sorted(pages):
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;\n'.encode()
            data=pe.get_data(page,4096)
            if data:code+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        slots={'clear':0x4980d30,'depth':0x4980d40,'attrib':0x4044a8,'mask':0x4980d50,'depthmask':0x4980d58,'attrib4f':0x404468,'draw':0x404010}
        for kind,slot in slots.items():code+=f'*(void **)(image+{slot})={kind};\n'.encode()
        code+=r'''
 uint32_t strides[]={0,1,3,4,12,16,64,128,1024,65536,0x1fffffff,0x7fffffff,0x80000000,0xffffffff};
 unsigned total=0;
'''.encode()+f' for(unsigned s=0;s<sizeof strides/sizeof *strides;s++)for(unsigned k=0;k<{len(rows)};k++){{\n'.encode()+r'''
  uint64_t saved[7];unsigned saved_calls;
  for(unsigned native=0;native<2;native++){
   memset(trace,0xcc,sizeof trace);calls=0;
   /* Model stride load uses R15 + model * 3632 + 0x2ad0be04. Choose
      a negative base index so the same original addressing reaches an
      allocated fixture page while preserving its byte arithmetic. */
   int64_t model=-(int64_t)(0x2ad0be04/3632);
   uintptr_t offset=model*3632+0x2ad0be04;
   if(!VirtualAlloc(image+(offset&~4095),4096,MEM_COMMIT,PAGE_READWRITE))return 10;
   *(uint32_t *)(image+offset)=strides[s];
   dword_140404A6C=(void*)(image+0x404a6c);flt_140384000=(void *)(image+0x384000);qword_1404044A8=attrib;unk_140404468=attrib4f;
   dword_140404A6C[456217207]=strides[s];
   dword_140404A6C[271911768]=dword_140404A6C[178527475]=dword_140404A6C[159842283]=strides[s];
   /* Nonvolatile scalar words come from the original constant loads,
      pinned in the render scalar manifest. Callback arguments are compared. */
   uint32_t regs[]={0x3f800000,0x3f000000,0x3f000000,0x3f400000,0,0x3f800000,2,0};
   if(native){switch(k){
'''.encode()
        for k,(start,end,_,_,key) in enumerate(rows):
            code+=f'case {k}:{{unsigned char original[]={{'.encode()+','.join(map(str,pe.get_data(start,end-start))).encode()+f'}};memcpy(image+{start},original,sizeof original);unsigned char jump[]={{0xff,0x25,0,0,0,0}};memcpy(image+{end},jump,6);*(void **)(image+{end+6})=block_return;'.encode()
            if key=='0x14008d800':code+=b'regs[3]=0x3fc00000;regs[5]=0;'
            if key=='0x140124320':code+=b'regs[1]=0x3f800000;'
            if key=='0x140124fe0':code+=b'regs[6]=regs[7]=0;'
            if key in ('0x140125670','0x140125860'):code+=b'{uintptr_t base=(uintptr_t)(dword_140404A6C+159842277);memcpy(regs+6,&base,8);}'
            entity='0' if key in ('0x140124fe0','0x140125670','0x140125860') else 'model'
            code+=f'block(image,image+{start},{entity},regs);break;}}\n'.encode()
        code+=b'}}else{switch(k){\n'
        for k in range(len(rows)):code+=f'case {k}:recovered_{k}(strides[s]*4u);break;\n'.encode()
        code+=r'''
   }}
   if(!native){memcpy(saved,trace,sizeof saved);saved_calls=calls;}
   else if(calls!=1||saved_calls!=calls||memcmp(saved,trace,sizeof trace)){printf("GL block %u stride %x\n",k,strides[s]);for(unsigned i=0;i<7;i++)printf("%u C=%llx N=%llx\n",i,(unsigned long long)saved[i],(unsigned long long)trace[i]);return 1;}
  }total++;
 }
 printf("%u native GL call block comparisons pass; world and shadow clears/masks, vertex layouts and eight constant vertex colors; driver callbacks controlled\n",total);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-world-gl-calls-20261004';out.mkdir(parents=True,exist_ok=True)
        f=out/'gl-calls.c';f.write_bytes(code);exe=f.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
