"""Compare narrow formatter wrapper with original instructions at CRT boundaries."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_formatter import PROJECT, repair


class FormatterRecovery(unittest.TestCase):
    def test_default_locale_pair_and_complete_ctype(self):
        source=read_client_source()
        if b'sr_format_processor' not in source:source,_=repair(source)
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        a=source.index(b'__int16 sr_format_ctype_backing[257]');b=source.index(b');',a)+2
        ctype=source[a:b]
        a=source.index(b'struct sr_format_default_pair');b=source.index(b'\n',source.index(b'#define off_140302580',a))
        pair=source[a:b]
        marker=b'//----- (0000000140213644)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
        constructor=source[a:b]
        data=pe.get_data(0x28b80e,514)
        text=r'''#include "export_compat.h"
#include <windows.h>
#include <stdio.h>
typedef struct { unsigned char bytes[32]; } _LocaleUpdate;
struct __crt_locale_pointers {uint64_t pair[2];};
static unsigned dword_140404A6C[19065284];
static unsigned char thread[968];
static __int64 sub_140255A70(void) {return (intptr_t)thread;}
static __int64 sub_140255D2C(__int64 t,__int64 *p) {return 0;}
static __int64 sub_140255D60(__int64 t,__int64 *p) {return 0;}
'''+ctype.decode()+r'''
__int16 *off_140302420=asc_14028B810;
_UNKNOWN unk_1403025A0;
'''+pair.decode()+'\n'+constructor.decode()+r'''
int main(void) {
 unsigned char original[]={'''+','.join(map(str,data))+r'''};
 if(memcmp(sr_format_ctype_backing,original,sizeof original)) return 1;
 if((unsigned char *)asc_14028B810!=(unsigned char *)sr_format_ctype_backing+2) return 2;
 if((char *)&off_140302580-(char *)&off_140302578!=8) return 3;
 for(int code=-1;code<256;++code) {
  uint16_t word;memcpy(&word,original+2*(code+1),2);
  if((uint16_t)asc_14028B810[code]!=word) return 4;
 }
 for(int changed=0;changed<2;++changed) for(int supplied=0;supplied<2;++supplied)
 for(unsigned flags=0;flags<4;++flags) {
  _LocaleUpdate update;memset(&update,0x5a,sizeof update);
  struct __crt_locale_pointers locale={{(uintptr_t)&off_140302420,(uintptr_t)&unk_1403025A0}};
  *(uintptr_t *)(thread+144)=(uintptr_t)&off_140302420;
  *(uintptr_t *)(thread+136)=(uintptr_t)&unk_1403025A0;
  *(unsigned *)(thread+936)=flags;dword_140404A6C[19065283]=changed;
  sub_140213644(&update,supplied?&locale:NULL);
  uint64_t expected[]={locale.pair[0],locale.pair[1]};
  if(memcmp(update.bytes+8,expected,16)) return 5;
  unsigned expected_change=changed && !supplied && !(flags&2);
  if(update.bytes[24]!=expected_change) return 6;
  if(*(unsigned *)(thread+936)!=(flags|(expected_change?2:0))) return 7;
  for(int i=25;i<32;++i) if(update.bytes[i]!=0x5a) return 8;
 }
 puts("257 native ctype words and 16 actual locale-constructor cases pass");return 0;
}
'''
        directory=PROJECT/'reports/client-formatter-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'locale_fixture.c';fixture.write_text(text)
        executable=directory/'locale_fixture.exe'
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-std=gnu11','-O0','-fno-strict-aliasing','-I',str(PROJECT/'src/rebuild'),'-I',str(PROJECT/'exports/client'),'-o',str(executable)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(executable)],capture_output=True,text=True,timeout=15)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)
        (directory/'locale-stdout.txt').write_text(result.stdout)

    def test_native_wrapper_layout_results_and_cleanup(self):
        source=read_client_source()
        if b'sr_format_processor' not in source:source,_=repair(source)
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        marker=b'//----- (000000014020E60C)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
        body=source[a:b]
        finish=next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress==0x20e60c)
        native=pe.get_data(0x20e60c,finish-0x20e60c)
        text=r'''#include "export_compat.h"
#include <windows.h>
#include <stdio.h>
typedef struct { unsigned char bytes[32]; } _LocaleUpdate;
struct __crt_locale_pointers {uint64_t pair[2];};
static unsigned char thread[968],output_memory[96];
static int cfg_changed,cfg_result,cfg_block,reported_errno;
static uint64_t cfg_used,cfg_options,cfg_capacity,cfg_arguments;
static unsigned char *cfg_destination;static const char *cfg_format;
static struct __crt_locale_pointers *cfg_locale;
static struct {uint64_t result;int constructors,processors,frees,invalid,err;unsigned flags;unsigned char bytes[96];} trace;
static int *errno_sr(void) {return &reported_errno;}
static void sub_14024CF6C(void) {trace.invalid++;}
static _LocaleUpdate *sub_140213644(_LocaleUpdate *p,struct __crt_locale_pointers *provided) {
 trace.constructors++;if(provided!=cfg_locale) exit(91);
 uint64_t values[]={(uintptr_t)thread,0x1234567887654321ULL,0x2345678998765432ULL};
 memcpy(p,values,24);((unsigned char *)p)[24]=cfg_changed;return p;
}
static void free_base(void *p) {trace.frees++;if(p!=(cfg_block?(void *)thread:NULL)) exit(92);}
static __int64 sub_14021666C(__int64 ptr,__int64 unused,__int64 unused2) {
 unsigned char *p=(unsigned char *)(uintptr_t)ptr;trace.processors++;
 uint64_t *words=(uint64_t *)p;
 if(words[0]!=cfg_options || words[2] || words[3]!=(uintptr_t)cfg_format || words[4]!=cfg_arguments ||
 words[5] || words[6] || *(unsigned *)(p+56) || *(unsigned short *)(p+64) ||
 *(unsigned *)(p+80) || p[84] || *(uint64_t *)(p+1112) || *(uintptr_t *)(p+1120) ||
 *(unsigned *)(p+1136)) exit(93);
 uint64_t *locale=(uint64_t *)(uintptr_t)words[1];
 if(locale[0]!=0x1234567887654321ULL || locale[1]!=0x2345678998765432ULL) exit(94);
 unsigned char *adapter=*(unsigned char **)(p+1128);
 if(*(uintptr_t *)adapter!=(uintptr_t)cfg_destination || *(uint64_t *)(adapter+8)!=cfg_capacity ||
 *(uint64_t *)(adapter+16) || adapter[24]!=((cfg_options&2)!=0 || !cfg_destination)) exit(95);
 for(int i=25;i<32;++i) if(adapter[i]) exit(96);
 if(cfg_destination) for(unsigned i=0;i<cfg_used;++i) cfg_destination[i]=(unsigned char)(0x41+i);
 *(uint64_t *)(adapter+16)=cfg_used;
 *(void **)(p+1120)=cfg_block?(void *)thread:NULL;
 return (unsigned)cfg_result;
}
'''+body.decode()+r'''
static void jump(unsigned char *image,unsigned rva,void *target) {
 unsigned char head[]={0xff,0x25,0,0,0,0};memcpy(image+rva,head,6);memcpy(image+rva+6,&target,8);
}
int main(void) {
 unsigned char *image=VirtualAlloc(0,0x310000,MEM_RESERVE,PAGE_READWRITE);
 if(!image) return 1;
 unsigned regions[]={0x1f8000,0x20e000,0x213000,0x216000,0x24c000,0x24d000,0x24e000,0x302000};
 for(int i=0;i<8;++i) if(!VirtualAlloc(image+regions[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)) return 2;
 unsigned char original[]={'''+','.join(map(str,native))+r'''};
 memcpy(image+0x20e60c,original,sizeof original);
 jump(image,0x213644,(void *)sub_140213644);jump(image,0x21666c,(void *)sub_14021666C);
 jump(image,0x24d1bc,(void *)errno_sr);jump(image,0x24cf6c,(void *)sub_14024CF6C);
 jump(image,0x24e018,(void *)free_base);
 *(uint64_t *)(image+0x3020a0)=0x2b992ddfa232ULL;
 unsigned char cookie[]={0x48,0x3b,0x0d,0,0,0,0,0x75,0x01,0xc3,0x0f,0x0b};
 int32_t displacement=0x3020a0-(0x1f8b20+7);memcpy(cookie+3,&displacement,4);
 memcpy(image+0x1f8b20,cookie,sizeof cookie);
 FlushInstructionCache(GetCurrentProcess(),image,0x310000);
 uint64_t options[]={0,1,2,3,0x28,UINT64_MAX};uint64_t capacities[]={0,1,2,8,32,UINT64_MAX};
 int results[]={-3,-2,-1,0,1,4,32,INT_MAX,INT_MIN};
 struct __crt_locale_pointers provided={{1,2}};
 int comparisons=0;
 for(int o=0;o<6;++o) for(int c=0;c<6;++c) for(int used=0;used<3;++used)
 for(int r=0;r<9;++r) for(int null_case=0;null_case<3;++null_case)
 for(int locale=0;locale<2;++locale) for(cfg_changed=0;cfg_changed<2;++cfg_changed)
 for(cfg_block=0;cfg_block<2;++cfg_block) {
  cfg_options=options[o];cfg_capacity=capacities[c];cfg_result=results[r];
  cfg_used=used==0?0:used==1?(cfg_capacity<4?cfg_capacity:4):(cfg_capacity<32?cfg_capacity:32);
  cfg_arguments=0xf123456789abcdefULL;cfg_format=null_case==1?NULL:"Agent %d";
  cfg_destination=null_case==2?NULL:output_memory+16;cfg_locale=locale?&provided:NULL;
  unsigned char records[2][sizeof trace];
  for(int is_native=0;is_native<2;++is_native) {
   memset(&trace,0,sizeof trace);memset(output_memory,0x5a,sizeof output_memory);reported_errno=123;
   *(unsigned *)(thread+936)=7;
   if(is_native) trace.result=((uint64_t (*)(uint64_t,void *,uint64_t,const char *,void *,uint64_t))(image+0x20e60c))
       (cfg_options,cfg_destination,cfg_capacity,cfg_format,cfg_locale,cfg_arguments);
   else trace.result=sub_14020E60C(cfg_options,(_BYTE *)cfg_destination,cfg_capacity,
       (intptr_t)cfg_format,cfg_locale,cfg_arguments);
   trace.err=reported_errno;trace.flags=*(unsigned *)(thread+936);memcpy(trace.bytes,output_memory,sizeof output_memory);
   memcpy(records[is_native],&trace,sizeof trace);
  }
  if(memcmp(records[0],records[1],sizeof trace)) {printf("mismatch %d %d %d %d %d\n",o,c,used,r,null_case);return 3;}
  comparisons++;
 }
 printf("%d native formatter layout/return/termination/cleanup comparisons pass\n",comparisons);
 VirtualFree(image,0,MEM_RELEASE);return 0;
}
'''
        directory=PROJECT/'reports/client-formatter-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'formatter_fixture.c';fixture.write_text(text)
        executable=directory/'formatter_fixture.exe'
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-std=gnu11','-O0','-fno-strict-aliasing','-fstack-protector-all','-I',str(PROJECT/'src/rebuild'),'-I',str(PROJECT/'exports/client'),'-o',str(executable)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(executable)],capture_output=True,text=True,timeout=30)
        (directory/'stdout.txt').write_text(result.stdout);(directory/'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)
        print(result.stdout.strip())


if __name__=='__main__':unittest.main()
