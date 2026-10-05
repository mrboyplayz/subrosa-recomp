"""Native correlation and autocorrelation comparisons, controlled dot helpers."""
import hashlib
from client_sources import read_client_source
import json
import subprocess
import unittest
import pefile
from repair_client_audio_correlation import PROJECT,PIN,repair,repair_downsample,repair_pitch,repair_pitch_doubling,repair_transient,repair_fft,repair_mdct

class AudioCorrelation(unittest.TestCase):
    def test_native_fft_stages(self):
        source=read_client_source()
        def function(name):
            marker=('//----- (0000000'+name+')').encode();a=source.index(marker);b=source.index(b'//----- (',a+len(marker));return source[a:b]
        if b'return sub_1401F8B20' in function('1401A15A0'):source,_=repair_fft(source)
        if b'return sub_1401F8B20' in function('1401A1860'):source,_=repair_mdct(source)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define _DWORD unsigned int
#define _QWORD unsigned long long
#define __int16 short
typedef void CGlobalUtils;
struct CObList;struct CWnd;
static unsigned char *image;
static long long sub_1401B61A0(long long a,long long b,unsigned n){return ((long long(*)(long long,long long,unsigned))(image+0x1b61a0))(a,b,n);}
'''.encode()+function('1401B6640')+function('1401B6FA0')+function('1401B7510')+function('1401A15A0')+function('1401A1860')+r'''
int main(void){image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        for page,size in [(0x1a1000,4096),(0x1b6000,8192),(0x1f8000,4096),(0x278000,8192),(0x302000,4096)]:
            c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            c+=('{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+f'}};memcpy(image+{page},data,sizeof data);}}\n').encode()
        c+=r'''
image[0x1f8b20]=0xc3;float native[1024],recovered[1024],twiddle[2048];unsigned char config[80];unsigned seed=999,cases=0;int radices[]={3,4,5},ms[]={1,3,8,16};
for(int i=0;i<1024;i++){twiddle[2*i]=cos(i*0.012);twiddle[2*i+1]=sin(i*0.012);}
memset(config,0,sizeof config);void *t=twiddle;memcpy(config+56,&t,8);
for(unsigned sample=0;sample<12;sample++)for(unsigned r=0;r<3;r++)for(unsigned m=0;m<4;m++)for(long long stride=1;stride<=4;stride*=2)for(int groups=1;groups<=3;groups++){
 for(unsigned i=0;i<1024;i++){seed=seed*1664525+1013904223;native[i]=((int)(seed%8193)-4096)*0.00017f;}memcpy(recovered,native,sizeof native);
 int radix=radices[r],width=ms[m],step=radix*width;
 ((void(*)(long long,long long,long long,int,int,int))(image+(radix==3?0x1b6fa0:radix==4?0x1b6640:0x1b7510)))((long long)(native+8),stride,(long long)config,width,groups,step);
 if(radix==3)sub_1401B6FA0((long long)(recovered+8),stride,(long long)config,width,groups,step);
 else if(radix==4)CGlobalUtils__SetNewParent(recovered+8,(struct CObList*)stride,(struct CWnd*)config,width,groups,step);
 else sub_1401B7510((long long)(recovered+8),stride,(long long)config,width,groups,step);
 if(memcmp(native,recovered,sizeof native)){printf("FFT mismatch sample=%u radix=%d m=%d stride=%lld groups=%d\n",sample,radix,width,stride,groups);return 1;}cases++;
}
int factors[][8]={{3,1,0},{4,1,0},{5,1,0},{4,3,3,1,0},{4,5,5,1,0},{4,15,3,5,5,1,0}};
for(unsigned sample=0;sample<16;sample++)for(unsigned f=0;f<6;f++)for(int shift=0;shift<2;shift++){
 memset(config,0,sizeof config);memcpy(config+8,&shift,4);memcpy(config+56,&t,8);for(unsigned i=0;i<8;i++)*(short*)(config+12+2*i)=factors[f][i];
 for(unsigned i=0;i<1024;i++){seed=seed*1664525+1013904223;native[i]=((int)(seed%8193)-4096)*0.00017f;}memcpy(recovered,native,sizeof native);
 ((void(*)(long long,void*))(image+0x1a15a0))((long long)config,native+8);sub_1401A15A0((long long)config,recovered+8);
 if(memcmp(native,recovered,sizeof native)){printf("FFT dispatcher mismatch sample=%u factors=%u shift=%d\n",sample,f,shift);return 1;}cases++;
}
unsigned mdct_cases=0;float samples[1024],rotation[1024],window[128];short permutation[256];unsigned char lookup[48];
for(unsigned sample=0;sample<16;sample++)for(unsigned f=0;f<6;f++)for(int overlap=0;overlap<=8;overlap+=4)for(int stride=1;stride<=4;stride*=2){
 memset(config,0,sizeof config);memcpy(config+56,&t,8);for(unsigned i=0;i<8;i++)*(short*)(config+12+2*i)=factors[f][i];
 int size=1;for(unsigned i=0;i<8&&factors[f][i];i+=2)size*=factors[f][i];*(float*)(config+4)=1.0f/size;
 for(int i=0;i<size;i++)permutation[i]=i;void *p=permutation;memcpy(config+48,&p,8);
 memset(lookup,0,sizeof lookup);*(int*)lookup=4*size;p=config;memcpy(lookup+8,&p,8);p=rotation;memcpy(lookup+40,&p,8);
 for(unsigned i=0;i<1024;i++){seed=seed*1664525+1013904223;samples[i]=((int)(seed%8193)-4096)*0.00017f;rotation[i]=cos(i*0.017);native[i]=999.25f;}memcpy(recovered,native,sizeof native);
 for(unsigned i=0;i<128;i++)window[i]=i/128.0f;
 ((void(*)(long long,long long,float*,float*,int,int,int))(image+0x1a1860))((long long)lookup,(long long)samples,native+8,window,overlap,0,stride);
 sub_1401A1860((long long)lookup,(long long)samples,recovered+8,window,overlap,0,stride);
 if(memcmp(native,recovered,sizeof native)){printf("MDCT mismatch sample=%u factors=%u overlap=%d stride=%d\n",sample,f,overlap,stride);return 1;}mdct_cases++;
}
printf("%u native FFT stage/dispatcher and %u MDCT buffer/guard comparisons pass; finite/default FP, valid factor sets; original compiler cookies excluded\n",cases,mdct_cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-audio-fft-fixture-20261003';out.mkdir(parents=True,exist_ok=True);path=out/'fft.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',str(path),'-o',str(exe),'-lm'],capture_output=True,text=True)
        self.assertEqual(build.returncode,0,build.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60);(out/'stdout.txt').write_text(run.stdout+run.stderr);self.assertEqual(run.returncode,0,run.stdout+run.stderr)

    def test_native_buffers_and_windowed_autocorrelation(self):
        source=read_client_source()
        def function(name):
            marker=('//----- (0000000'+name+')').encode()
            a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
            return source[a:b]
        if b'return sub_1401F8B20' in function('1401A9C80'):
            source,_=repair(source)
        if b'return sub_1401F8B20' in function('1401A8190'):
            source,_=repair_downsample(source)
        if b'return sub_1401F8B20' in function('1401A8740'):
            source,_=repair_pitch(source)
        if b'return sub_1401F8B20' in function('1401A8B30'):
            source,_=repair_pitch_doubling(source)
        if b'return sub_1401F8B20' in function('1401AE510'):
            source,_=repair_transient(source)
        c=r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <math.h>
#include <xmmintrin.h>
#define __int64 long long
#define _DWORD unsigned int
#define _QWORD unsigned long long
#define BOOL int
#define LODWORD(x) (*(unsigned int *)&(x))
#define SR_VEC_READ_LANES(bits,value,type) ((union {__m128 v;unsigned int u32[4];}){.v=(value)}.type)
static unsigned char *image;
static unsigned int dword_140281F00[16];
static unsigned char byte_140279C00[128];
static void *sub_1401FCD30(void *p,int value,size_t count){return memset(p,value,count);}
static void sub_1401A92A0(float *a,float *b,float *out,int n){((void(*)(float*,float*,float*,int))(image+0x1a92a0))(a,b,out,n);}
static float sub_1401A9C00(__int64 a,__int64 b,int n){return ((float(*)(__int64,__int64,int))(image+0x1a9c00))(a,b,n);}
static void sub_1401AD490(float *a,float *b,int n){((void(*)(float*,float*,int))(image+0x1ad490))(a,b,n);}
static void sub_1401B86A0(__int64 a,float *b,int n){((void(*)(__int64,float*,int))(image+0x1b86a0))(a,b,n);}
static void sub_1401B8330(__int64 a,__int64 b,int n,int l,int *p){((void(*)(__int64,__int64,int,int,int*))(image+0x1b8330))(a,b,n,l,p);}
static unsigned int sub_14019A1A0(unsigned a,unsigned b){return ((unsigned(*)(unsigned,unsigned))(image+0x19a1a0))(a,b);}
static void sub_1401A9B20(__int64 a,__int64 b,__int64 c,int n,float *p,float *q){((void(*)(__int64,__int64,__int64,int,float*,float*))(image+0x1a9b20))(a,b,c,n,p,q);}
static __m128 sub_1401B8890(float a,float b,float c){return _mm_set_ss(((float(*)(float,float,float))(image+0x1b8890))(a,b,c));}
'''.encode()+function('1401A9C80')+function('1401ADFA0')+function('1401A8190')+function('1401A8740')+function('1401A8B30')+function('1401AE510')+r'''
int main(void){image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        for page,size in [(0x19a000,4096),(0x1a8000,4096),(0x1a9000,8192),(0x1ad000,8192),(0x1b8000,4096),(0x1f8000,4096),(0x1fc000,4096),(0x243000,8192),(0x278000,8192),(0x281000,8192),(0x283000,4096),(0x302000,4096)]:
            c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'.encode()
            c+=('{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+f'}};memcpy(image+{page},data,sizeof data);}}\n').encode()
        c+=r'''
image[0x1f8b20]=0xc3; // Ignore original compiler's cookie instrumentation in fixture.
unsigned char bridge[12]={0x48,0xb8,0,0,0,0,0,0,0,0,0xff,0xe0};void *(*host_memset)(void*,int,size_t)=memset;
memcpy(bridge+2,&host_memset,8);memcpy(image+0x1fcd30,bridge,12);
int (*host_abs)(int)=abs;memcpy(bridge+2,&host_abs,8);memcpy(image+0x243f84,bridge,12);
double (*host_sqrt)(double)=sqrt;memcpy(bridge+2,&host_sqrt,8);memcpy(image+0x244e7c,bridge,12);memcpy(dword_140281F00,image+0x281f00,64);
double (*host_floor)(double)=floor;memcpy(bridge+2,&host_floor,8);memcpy(image+0x244f48,bridge,12);memcpy(byte_140279C00,image+0x279c00,128);
float input[2200],other[2200],window[512],native[80],recovered[80],saved[2200];unsigned seed=0x765342,cases=0;
int sizes[]={0,1,2,3,4,7,16,63,128,256,988,1024},lags[]={0,1,2,3,4,5,8,15,24,31};
for(unsigned sample=0;sample<8;sample++){
 for(unsigned i=0;i<2200;i++){seed=seed*1664525+1013904223;input[i]=((int)(seed%2049)-1024)*0.0003f;seed=seed*1664525+1013904223;other[i]=((int)(seed%2049)-1024)*0.0007f;}
 for(unsigned i=0;i<512;i++)window[i]=i*0.0015f;
 memcpy(saved,input,sizeof input);
 for(unsigned n=0;n<12;n++)for(unsigned l=0;l<10;l++){
  memset(native,0xa5,sizeof native);memcpy(recovered,native,sizeof native);
  ((void(*)(float*,__int64,__int64,int,int))(image+0x1a9c80))(input,(__int64)other,(__int64)(native+4),sizes[n],lags[l]);
  sub_1401A9C80(input,(__int64)other,(__int64)(recovered+4),sizes[n],lags[l]);
  if(memcmp(native,recovered,sizeof native)||memcmp(saved,input,sizeof input)){printf("correlation mismatch %u/%d/%d\n",sample,sizes[n],lags[l]);return 1;}cases++;
 }
 for(unsigned n=2;n<12;n++)for(unsigned l=0;l<10;l++)for(unsigned w=0;w<3;w++){
  int length=sizes[n],lag=lags[l];if(lag>=length)continue;
  int overlap=w==0?0:w==1?1:length/2;
  memset(native,0xa5,sizeof native);memcpy(recovered,native,sizeof native);
  ((void(*)(float*,__int64,__int64,int,int,int))(image+0x1adfa0))(input,(__int64)(native+4),(__int64)window,overlap,lag,length);
  sub_1401ADFA0(input,(__int64)(recovered+4),(__int64)window,overlap,lag,length);
  if(memcmp(native,recovered,sizeof native)||memcmp(saved,input,sizeof input)){printf("autocorrelation mismatch %u/%d/%d/%d\n",sample,length,lag,overlap);return 1;}cases++;
 }
}
float dn[1200],dr[1200];_QWORD channels[2]={(_QWORD)input,(_QWORD)other};unsigned downsample_cases=0;
for(unsigned sample=0;sample<8;sample++)for(unsigned n=4;n<12;n++)for(int count=1;count<=2;count++){
 int length=sizes[n];if(length/2<=4)continue;
 memset(dn,0xa5,sizeof dn);memcpy(dr,dn,sizeof dn);
 ((void(*)(_QWORD*,float*,int,int,int))(image+0x1a8190))(channels,dn+8,length,count,0);
 sub_1401A8190(channels,dr+8,length,count,0);
 if(memcmp(dn,dr,sizeof dn)){printf("downsample mismatch n=%d channels=%d\n",length,count);return 1;}downsample_cases++;
}
unsigned pitch_cases=0;int pitch_sizes[]={16,64,120,480,960,1328},pitch_lags[]={8,24,64,620,979};
for(unsigned sample=0;sample<16;sample++){
 for(unsigned i=0;i<2200;i++){seed=seed*1664525+1013904223;input[i]=sample==0?0.0f:((int)(seed%2049)-1024)*0.0003f;other[i]=sample%3==0?input[i]:((int)(i%(sample+3))-(int)sample)*0.001f;}
 for(unsigned n=0;n<6;n++)for(unsigned l=0;l<5;l++){
  unsigned pn[5]={99,98,97,96,95},pr[5];memcpy(pr,pn,sizeof pn);
  ((void(*)(__int64,__int64,int,int,unsigned*))(image+0x1a8740))((__int64)input,(__int64)other,pitch_sizes[n],pitch_lags[l],pn+2);
  sub_1401A8740((__int64)input,(__int64)other,pitch_sizes[n],pitch_lags[l],pr+2);
  if(memcmp(pn,pr,sizeof pn)){printf("pitch mismatch sample=%u n=%d lag=%d native=%u recovered=%u\n",sample,pitch_sizes[n],pitch_lags[l],pn[2],pr[2]);return 1;}pitch_cases++;
 }
}
unsigned gain_cases=0;int periods[]={16,32,120,500,900,1024};float gain_levels[]={0.0f,0.1f,0.5f,0.99f};
for(unsigned sample=0;sample<12;sample++){
 for(unsigned i=0;i<2200;i++){seed=seed*1664525+1013904223;input[i]=sample==0?0.0f:((int)(seed%2049)-1024)*0.0003f;}
 for(unsigned n=2;n<5;n++)for(unsigned p=0;p<6;p++)for(unsigned g=0;g<4;g++){
  int pn[3]={11,periods[p],33},pr[3];memcpy(pr,pn,sizeof pn);
  float gn=((float(*)(__int64,int,int,int,int*,int,float))(image+0x1a8b30))((__int64)input,1024,15,pitch_sizes[n],pn+1,periods[5-p],gain_levels[g]);
  float gr=sub_1401A8B30((__int64)input,1024,15,pitch_sizes[n],pr+1,periods[5-p],gain_levels[g]);
  if(memcmp(pn,pr,sizeof pn)||memcmp(&gn,&gr,4)){printf("pitch gain mismatch sample=%u n=%d period=%d gain=%g native=%g recovered=%g periods=%d/%d\n",sample,pitch_sizes[n],periods[p],gain_levels[g],gn,gr,pn[1],pr[1]);return 1;}gain_cases++;
 }
}
unsigned transient_cases=0;float transient_input[4096];int transient_sizes[]={64,120,240,480,960,1080};
for(unsigned sample=0;sample<32;sample++){
 for(unsigned i=0;i<4096;i++){seed=seed*1664525+1013904223;transient_input[i]=sample==0?0.0f:sample%4==1?(i%(sample+2)==0?1.0f:0.0f):((int)(seed%2049)-1024)*(i<sample*25?0.000001f:0.001f);}
 for(unsigned n=0;n<6;n++)for(int channels=1;channels<=2;channels++)for(int weak=0;weak<=1;weak++){
  float gn[3]={11,22,33},gr[3];memcpy(gr,gn,sizeof gn);int cn[3]={44,55,66},cr[3];memcpy(cr,cn,sizeof cn);unsigned wn[3]={77,88,99},wr[3];memcpy(wr,wn,sizeof wn);
  int rn=((int(*)(__int64,int,int,float*,int*,int,unsigned*))(image+0x1ae510))((__int64)transient_input,transient_sizes[n],channels,gn+1,cn+1,weak,wn+1);
  int rr=sub_1401AE510((__int64)transient_input,transient_sizes[n],channels,gr+1,cr+1,weak,wr+1);
  if(rn!=rr||memcmp(gn,gr,sizeof gn)||memcmp(cn,cr,sizeof cn)||memcmp(wn,wr,sizeof wn)){printf("transient mismatch sample=%u n=%d channels=%d weak=%d decisions=%d/%d gains=%g/%g\n",sample,transient_sizes[n],channels,weak,rn,rr,gn[1],gr[1]);return 1;}transient_cases++;
 }
}
printf("%u native correlation/autocorrelation, %u downsample, %u pitch, %u pitch gain and %u transient comparisons pass\n",cases,downsample_cases,pitch_cases,gain_cases,transient_cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-audio-correlation-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        path=out/'correlation.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',str(path),'-o',str(exe)],capture_output=True,text=True)
        (out/'build.txt').write_text(build.stdout+build.stderr);self.assertEqual(build.returncode,0,build.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
        (out/'stdout.txt').write_text(run.stdout+run.stderr);self.assertEqual(run.returncode,0,run.stdout+run.stderr)
        result=dict(original_sha256=PIN,source_sha256=hashlib.sha256(source).hexdigest(),passed=True,summary=run.stdout.strip(),scope='Whole correlation/autocorrelation/downsample routines, original shared dot/LPC/filter helpers, finite/default FP, valid lengths/lags/windows, full output buffers and guards; native cookie check bypassed, native memset bridged; codec pipeline excluded')
        (out/'result.json').write_text(json.dumps(result,indent=2)+'\n')

if __name__=='__main__':unittest.main()
