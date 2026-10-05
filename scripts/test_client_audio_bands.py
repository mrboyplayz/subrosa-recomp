"""Compare full CELT band analysis buffers/result with original native routine."""
import hashlib,json,subprocess,unittest
from client_sources import read_client_source
import pefile
from repair_client_audio_bands import PROJECT,PIN,repair,repair_downstream,repair_bit_scan,repair_partition

class AudioBands(unittest.TestCase):
    def test_native_partition_layout_and_masks(self):
        source=read_client_source()
        marker=b'//----- (00000001401AB510)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
        if b'return sub_1401F8B20' in source[a:b]:source,_=repair_partition(source)
        a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define _DWORD unsigned int
#define _QWORD unsigned long long
#define __int16 short
#define __int8 char
#define BOOL int
#define nullptr NULL
static unsigned char *image;
static int leaf_calls,theta_calls;
static long long sub_1401A2830(long long m,int b,int l,int bits){return ((long long(*)(long long,int,int,int))(image+0x1a2830))(m,b,l,bits);}
static long long sub_1401A2960(long long m,int b,int l,int q){return ((long long(*)(long long,int,int,int))(image+0x1a2960))(m,b,l,q);}
static long long sub_1401A27F0(int q){return ((long long(*)(int))(image+0x1a27f0))(q);}
static unsigned sub_1401A5C70(unsigned seed){return ((unsigned(*)(unsigned))(image+0x1a5c70))(seed);}
static void sub_1401A6800(float *x,int n,float gain){((void(*)(float*,int,float))(image+0x1a6800))(x,n,gain);}
static void *sub_1401FCD30(void *p,int v,size_t n){return memset(p,v,n);}
static unsigned sub_1401A65D0(float *x,unsigned n,int k,int spread,int blocks,unsigned *ec,float gain,int resynth){leaf_calls++;return 5;}
static unsigned sub_1401A6710(long long x,int n,int k,int spread,int blocks,unsigned *ec,float gain){leaf_calls++;return 3;}
static BOOL *sub_1401AA790(int *ctx,BOOL *out,long long x,long long y,int n,int *bits,char blocks,int original,int lm,int stereo,unsigned *mask){
 theta_calls++;out[0]=0;out[1]=24576;out[2]=16384;out[3]=3;out[4]=8192;out[5]=7;*bits=0;return out;}
'''.encode()+body+r'''
typedef unsigned (*partition_fn)(long long,float*,int,int,int,long long,int,float,int);
extern void sr_probe_stack(void) __asm__("___chkstk_ms");
static void thunk(unsigned char *at,void *target){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&target,8);}
int main(void){image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        for page,size in [(0x1a2000,4096),(0x1a5000,8192),(0x1a9000,4096),(0x1aa000,12288),(0x1f8000,4096),(0x1fc000,4096),(0x278000,8192),(0x283000,4096),(0x243000,8192),(0x302000,4096)]:
            c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            c+=('{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+f'}};memcpy(image+{page},data,sizeof data);}}\n').encode()
        c+=r'''
image[0x1f8b20]=0xc3;thunk(image+0x1f89d0,sr_probe_stack);thunk(image+0x1fcd30,sub_1401FCD30);thunk(image+0x244890,sqrt);
thunk(image+0x1aa790,sub_1401AA790);thunk(image+0x1a65d0,sub_1401A65D0);thunk(image+0x1a6710,sub_1401A6710);
unsigned char mode[160]={0},cache[16]={0};short indices[64]={0};void *p=indices;memcpy(mode+136,&p,8);p=cache;memcpy(mode+144,&p,8);*(int*)(mode+8)=8;
unsigned seed=539,cases=0;float fold[72],native[72],recovered[72];unsigned ctx_n[20],ctx_r[20];
for(unsigned sample=0;sample<2048;sample++){
 int n=2<<(sample%5),blocks=1<<((sample/5)%3),lm=(sample/15)%4-1,mask=(sample/60)%16,bits=(sample/960)%2?80:0,resynth=(sample/120)%2,with_fold=(sample/240)%2;
 for(int i=0;i<72;i++){seed=seed*1664525+1013904223;native[i]=((int)(seed%1025)-512)*0.002f;fold[i]=i*0.001f;}memcpy(recovered,native,sizeof native);
 memset(ctx_n,0,sizeof ctx_n);ctx_n[0]=(sample/480)%2;ctx_n[1]=resynth;p=mode;memcpy(ctx_n+2,&p,8);ctx_n[10]=10000;ctx_n[14]=seed;memcpy(ctx_r,ctx_n,sizeof ctx_n);
 theta_calls=leaf_calls=0;unsigned rn=((partition_fn)(image+0x1ab510))((long long)ctx_n,native+4,n,bits,blocks,with_fold?(long long)(fold+4):0,lm,0.8f,mask);int tn=theta_calls,ln=leaf_calls;
 theta_calls=leaf_calls=0;unsigned rr=sub_1401AB510((long long)ctx_r,recovered+4,n,bits,blocks,with_fold?(long long)(fold+4):0,lm,0.8f,mask);
 if(rn!=rr||memcmp(native,recovered,sizeof native)||memcmp(ctx_n,ctx_r,sizeof ctx_n)||tn!=theta_calls||ln!=leaf_calls){printf("partition mismatch sample=%u n=%d bits=%d lm=%d mask=%d return=%u/%u theta=%d/%d\n",sample,n,bits,lm,mask,rn,rr,tn,theta_calls);return 1;}cases++;
}
printf("%u native partition return/state/buffer/guard cases pass, including recursive theta layout; theta/PVQ controlled, original normalization shared, compiler cookies excluded\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-audio-partition-fixture-20261003';out.mkdir(parents=True,exist_ok=True);path=out/'partition.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',str(path),'-o',str(exe),'-lm'],capture_output=True,text=True)
        self.assertEqual(build.returncode,0,build.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60);(out/'stdout.txt').write_text(run.stdout+run.stderr);self.assertEqual(run.returncode,0,run.stdout+run.stderr)

    def test_native_bit_scan_and_entropy_counts(self):
        source=read_client_source()
        def function(name):
            marker=('//----- (0000000'+name+')').encode();a=source.index(marker);b=source.index(b'//----- (',a+len(marker));return source[a:b]
        if b'return v1;' in function('14019A020'):source,_=repair_bit_scan(source)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <intrin.h>
#define _DWORD unsigned int
static unsigned dword_14027E098[8];
'''.encode()+function('14019A020')+function('14019A0A0')+function('14019A0E0')+r'''
int main(void){unsigned char *image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        for page in [0x19a000,0x27e000]:
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            c+=('{unsigned char data[]={'+','.join(map(str,pe.get_data(page,4096)))+f'}};memcpy(image+{page},data,sizeof data);}}\n').encode()
        c+=r'''
memcpy(dword_14027E098,image+0x27e098,32);unsigned seed=79832,cases=0;
for(unsigned i=0;i<200000;i++){
 seed=seed*1664525+1013904223;unsigned value=i<65536?i:i%3==0?1u<<(i%32):seed;
 unsigned actual=((unsigned(*)(unsigned))(image+0x19a020))(value),want=sub_14019A020(value);
 if(actual!=want){printf("bit scan mismatch input=%u native=%u recovered=%u\n",value,actual,want);return 1;}cases++;
 unsigned state[16]={0};state[6]=32+(seed%1024);state[8]=0x800000+(seed%0x7f800000);
 unsigned na=((unsigned(*)(long long))(image+0x19a0a0))((long long)state),ra=sub_14019A0A0((long long)state);
 unsigned ne=((unsigned(*)(long long))(image+0x19a0e0))((long long)state),re=sub_14019A0E0((long long)state);
 if(na!=ra||ne!=re){printf("entropy counts mismatch range=%u counts=%u/%u and %u/%u\n",state[8],na,ra,ne,re);return 1;}cases+=2;
}
printf("%u native bit-scan/entropy-count comparisons pass, valid normalized ranges; zero BSR observed on this CPU\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-audio-bit-scan-fixture-20261003';out.mkdir(parents=True,exist_ok=True);path=out/'scan.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(build.returncode,0,build.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60);(out/'stdout.txt').write_text(run.stdout+run.stderr);self.assertEqual(run.returncode,0,run.stdout+run.stderr)

    def test_native_tf_analysis(self):
        source=read_client_source();marker=b'//----- (00000001401AF4F0)'
        a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
        if b'return sub_1401F8B20' in source[a:b]:source,_=repair_downstream(source)
        a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <emmintrin.h>
#include <malloc.h>
#define _DWORD unsigned int
#define _QWORD unsigned long long
#define __int16 short
#define BOOL int
static unsigned char *image;static signed char byte_14027BB98[32];
static void *sub_1401FC920(__m128i *p,__m128i *q,size_t n){return memmove(p,q,n);}
static float sub_1401AF440(long long p,int n,int lm,float bias){return ((float(*)(long long,int,int,float))(image+0x1af440))(p,n,lm,bias);}
static void sub_1401A3F20(long long p,int n,int stride){((void(*)(long long,int,int))(image+0x1a3f20))(p,n,stride);}
'''.encode()+body+r'''
typedef int (*tf_fn)(long long,int,int,long long,int,long long,int,int,float,int,long long);
static void thunk(unsigned char *at,void *target){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&target,8);}
int main(void){image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        for page,size in [(0x1a3000,8192),(0x1af000,8192),(0x1f8000,4096),(0x1fc000,4096),(0x243000,8192),(0x278000,4096),(0x27b000,4096),(0x283000,4096),(0x302000,4096)]:
            c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            c+=('{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+f'}};memcpy(image+{page},data,sizeof data);}}\n').encode()
        c+=r'''
image[0x1f8b20]=0xc3;thunk(image+0x1fc920,sub_1401FC920);thunk(image+0x243f84,abs);thunk(image+0x244390,fabs);memcpy(byte_14027BB98,image+0x27bb98,32);
unsigned char mode[80]={0};short widths[32];float input[16384];int weights[32],native[40],recovered[40];unsigned seed=76549,cases=0;
void *p=widths;memcpy(mode+32,&p,8);
for(unsigned sample=0;sample<1536;sample++){
 int bands=sample%3==0?16:sample%3==1?21:28,transient=(sample/3)%2,lm=(sample/6)%4,channel=(sample/24)%2,budget=(sample/48)%4*50;
 float estimate=(sample/192)%4*0.3f;
 for(unsigned i=0;i<16384;i++){seed=seed*1664525+1013904223;input[i]=((int)(seed%4097)-2048)*0.0007f;}
 for(unsigned i=0;i<32;i++){widths[i]=i*i;weights[i]=(i+3)*7;}
 memset(native,0xa5,sizeof native);memcpy(recovered,native,sizeof native);
 int rn=((tf_fn)(image+0x1af4f0))((long long)mode,bands,transient,(long long)(native+4),budget,(long long)input,8192,lm,estimate,channel,(long long)weights);
 int rr=sub_1401AF4F0((long long)mode,bands,transient,(long long)(recovered+4),budget,(long long)input,8192,lm,estimate,channel,(long long)weights);
 if(rn!=rr||memcmp(native,recovered,sizeof native)){printf("TF mismatch sample=%u bands=%d transient=%d lm=%d result=%d/%d\n",sample,bands,transient,lm,rn,rr);return 1;}cases++;
}
printf("%u native TF full result/output/guard comparisons pass; shared original measure/Haar helpers, finite/default FP\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-audio-tf-fixture-20261003';out.mkdir(parents=True,exist_ok=True);path=out/'tf.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',str(path),'-o',str(exe),'-lm'],capture_output=True,text=True)
        self.assertEqual(build.returncode,0,build.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60);(out/'stdout.txt').write_text(run.stdout+run.stderr);self.assertEqual(run.returncode,0,run.stdout+run.stderr)

    def test_native_band_analysis(self):
        source=read_client_source()
        marker=b'//----- (00000001401B1250)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
        if b'return sub_1401F8B20' in source[a:b]:source,_=repair(source)
        a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <emmintrin.h>
#include <malloc.h>
#define _DWORD unsigned int
#define _WORD unsigned short
#define __int32 int
#define __int16 short
#define __int8 char
#define LODWORD(x) (*(unsigned *)&(x))
#define SR_VEC_PTR_LANES(bits,value,type) ((int *)(value))
static unsigned char *image;static float flt_140282A10[28];
static void *sub_1401FCD30(void *p,int value,size_t n){return memset(p,value,n);}
static void *sub_1401FC920(__m128i *p,__m128i *q,size_t n){return memmove(p,q,n);}
static float sub_1401B0ED0(float *p){return ((float(*)(float*))(image+0x1b0ed0))(p);}
static float sub_1401B1160(float *p){return ((float(*)(float*))(image+0x1b1160))(p);}
'''.encode()+body+r'''
typedef float (*band_fn)(long long,long long,int,int,int,int,unsigned short*,int,long long,int,int,int,long long,int,int,int*,int,long long,unsigned*,long long,long long);
static void thunk(unsigned char *at,void *target){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&target,8);}
int main(void){image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        for page,size in [(0x1b0000,12288),(0x1f8000,4096),(0x1fc000,4096),(0x243000,8192),(0x278000,4096),(0x282000,8192),(0x302000,4096)]:
            c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            c+=('{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+f'}};memcpy(image+{page},data,sizeof data);}}\n').encode()
        c+=r'''
image[0x1f8b20]=0xc3;thunk(image+0x1fcd30,sub_1401FCD30);thunk(image+0x1fc920,sub_1401FC920);thunk(image+0x243f90,exp);thunk(image+0x244f48,floor);memcpy(flt_140282A10,image+0x282a10,sizeof flt_140282A10);
float input[64],history[64],estimate[32];short widths[32],logs[32];unsigned analysis[32],seed=0x212375,cases=0;
int output_n[40],output_r[40],caps_n[40],caps_r[40],importance_n[40],importance_r[40],totals_n[3],totals_r[3];
for(unsigned sample=0;sample<1536;sample++){
 int bands=sample%3==0?16:sample%3==1?21:28,channels=1+(sample/3)%2,start=(sample/6)%2?0:4,end=bands-(sample/12)%3;
 int transient=(sample/36)%2,vbr=(sample/72)%2,constrained=(sample/144)%2,lm=(sample/288)%4,budget=(sample/1152)%2?200:80,lfe=(sample/19)%2;
 for(unsigned i=0;i<64;i++){seed=seed*1664525+1013904223;input[i]=((int)(seed%1401)-600)*0.05f;seed=seed*1664525+1013904223;history[i]=((int)(seed%1201)-500)*0.05f;}
 for(unsigned i=0;i<32;i++){estimate[i]=(i%7)*0.4f;widths[i]=i*3;logs[i]=i*6;}memset(analysis,0,sizeof analysis);analysis[0]=(sample/23)%2;for(int i=44;i<64;i++)((unsigned char*)analysis)[i]=i+sample;
 memset(output_n,0xa5,sizeof output_n);memcpy(output_r,output_n,sizeof output_n);memset(caps_n,0xa5,sizeof caps_n);memcpy(caps_r,caps_n,sizeof caps_n);memset(importance_n,0xa5,sizeof importance_n);memcpy(importance_r,importance_n,sizeof importance_n);totals_n[0]=11;totals_n[1]=22;totals_n[2]=33;memcpy(totals_r,totals_n,sizeof totals_n);
 float rn=((band_fn)(image+0x1b1250))((long long)input,(long long)history,bands,start,end,channels,(unsigned short*)(output_n+4),24,(long long)logs,transient,vbr,constrained,(long long)widths,lm,budget,totals_n+1,lfe,(long long)estimate,analysis,(long long)(caps_n+4),(long long)(importance_n+4));
 float rr=sub_1401B1250((long long)input,(long long)history,bands,start,end,channels,(unsigned short*)(output_r+4),24,(long long)logs,transient,vbr,constrained,(long long)widths,lm,budget,totals_r+1,lfe,(long long)estimate,analysis,(long long)(caps_r+4),(long long)(importance_r+4));
 if(memcmp(&rn,&rr,4)||memcmp(output_n,output_r,sizeof output_n)||memcmp(caps_n,caps_r,sizeof caps_n)||memcmp(importance_n,importance_r,sizeof importance_n)||memcmp(totals_n,totals_r,sizeof totals_n)){printf("band mismatch sample=%u bands=%d channels=%d lm=%d result=%g/%g totals=%d/%d\n",sample,bands,channels,lm,rn,rr,totals_n[1],totals_r[1]);return 1;}cases++;
}
printf("%u native band analysis full output-buffer/guard/result comparisons pass; shared original median helpers and host exp/floor, finite/default FP, valid band bounds\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-audio-bands-fixture-20261003';out.mkdir(parents=True,exist_ok=True);path=out/'bands.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',str(path),'-o',str(exe),'-lm'],capture_output=True,text=True)
        (out/'build.txt').write_text(build.stdout+build.stderr);self.assertEqual(build.returncode,0,build.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60);(out/'stdout.txt').write_text(run.stdout+run.stderr);self.assertEqual(run.returncode,0,run.stdout+run.stderr)
        (out/'result.json').write_text(json.dumps(dict(passed=True,original_sha256=PIN,source_sha256=hashlib.sha256(source).hexdigest(),summary=run.stdout.strip(),scope='Whole band analysis outputs/guards/result, shared original median helpers and host CRT exp/floor; encoder integration excluded'),indent=2)+'\n')

if __name__=='__main__':unittest.main()
