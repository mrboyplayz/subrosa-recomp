"""Compare recovered scan construction and result flow with original instructions."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_scan_input import PROJECT, BODY, repair, repair_integer_locale


class ScanInput(unittest.TestCase):
    def test_native_integer_scanner_locale_and_parsing(self):
        source=read_client_source()
        if b'number_locale' not in source:source=repair_integer_locale(source)
        def body(rva):
            m=('//----- (%016X)'%(0x140000000+rva)).encode();a=source.index(m);b=source.index(b'//----- (',a+len(m));return source[a:b].decode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        words=[int.from_bytes(pe.get_data(0x28b80e+i*2,2),'little') for i in range(257)]
        text=r'''#include "export_compat.h"
#include <stdio.h>
typedef void _LocaleUpdate;
struct __crt_locale_pointers {uintptr_t pair[2];};
static uint16_t ctype[]={'''+','.join(map(str,words))+r'''};
static struct {uint16_t *ctype;int mb,cp;} locale_data={ctype+1,1,0};
static unsigned char thread[968];static int changed,error,invalid,constructors;
static int *errno_sr(void) {return &error;}
static void sub_14024CF6C(void) {invalid++;}
static _LocaleUpdate *sub_140213644(_LocaleUpdate *out,struct __crt_locale_pointers *provided) {
 constructors++;uint64_t data[]={(uintptr_t)thread,(uintptr_t)&locale_data,0};
 if(provided) {data[1]=provided->pair[0];data[2]=provided->pair[1];}
 memcpy(out,data,24);((unsigned char *)out)[24]=changed;
 if(changed)*(unsigned *)(thread+936)|=2;return out;
}
static uint16_t *sub_140256DC0(void) {return ctype+1;}
static __int64 isctype_l(unsigned a,__int16 b,struct __crt_locale_pointers *c) {abort();}
'''+body(0x236ed8)+body(0x2257b4)+body(0x22be60)+r'''
static void jump(unsigned char *image,unsigned rva,void *target) {
 unsigned char head[]={0xff,0x25,0,0,0,0};memcpy(image+rva,head,6);memcpy(image+rva+6,&target,8);
}
int main(void) {
 unsigned char *image=VirtualAlloc(0,0x260000,MEM_RESERVE,PAGE_READWRITE);if(!image)return 1;
 unsigned pages[]={0x213000,0x22b000,0x22c000,0x225000,0x236000,0x24c000,0x24d000};
 for(int i=0;i<7;++i)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 2;
'''
        for rva in [0x22be60,0x2257b4,0x236ed8]:
            end=next((e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress==rva),rva+0x40)
            text+=' {unsigned char code[]={'+','.join(map(str,pe.get_data(rva,end-rva)))+'};memcpy(image+'+hex(rva)+',code,sizeof code);}\n'
        text+=r'''
 jump(image,0x213644,(void *)sub_140213644);jump(image,0x24d1bc,(void *)errno_sr);jump(image,0x24cf6c,(void *)sub_14024CF6C);
 FlushInstructionCache(GetCurrentProcess(),image,0x260000);
 const char *inputs[]={"","0","1"," 17 tail","-42","+123","0x10","077","0Xff!","-0x8000000000000000",
 "9223372036854775807","9223372036854775808","-9223372036854775808","-9223372036854775809",
 "18446744073709551615","18446744073709551616","999999999999999999999999999999999999","xyz","  +","\t\n\r19","\xff" "42"};
 int bases[]={0,2,8,10,16,36,1,37,INT_MIN};unsigned widths[]={0,1,2,3,8,100};
 struct __crt_locale_pointers provided={{(uintptr_t)&locale_data,0}};
 struct record {uint64_t result,used,position;int err,invalid,constructors;unsigned flags;unsigned char status;} records[2];
 int cases=0;
 for(unsigned input=0;input<sizeof inputs/sizeof inputs[0];++input)for(int base=0;base<9;++base)
 for(int width=0;width<6;++width)for(int flags=0;flags<4;++flags)for(changed=0;changed<2;++changed)
 for(int supplied=0;supplied<2;++supplied)for(int initial=0;initial<2;++initial) {
  for(int native=0;native<2;++native) {
   uint64_t adapter[]={(uintptr_t)inputs[input],(uintptr_t)(inputs[input]+strlen(inputs[input])),(uintptr_t)inputs[input]};
   unsigned char status=1;uint64_t context[]={(uintptr_t)adapter,widths[width],initial,(uintptr_t)&status};
   error=55;invalid=constructors=0;memset(thread,0,sizeof thread);*(unsigned *)(thread+936)=4;
   struct record *r=&records[native];memset(r,0,sizeof *r);
   r->result=native?((uint64_t (*)(void *,uint64_t *,int,unsigned char))(image+0x22be60))(supplied?&provided:NULL,context,bases[base],flags):
     sub_14022BE60(supplied?&provided:NULL,context,bases[base],flags);
   r->used=context[2];r->position=adapter[2]-(uintptr_t)inputs[input];r->status=status;
   r->err=error;r->invalid=invalid;r->constructors=constructors;r->flags=*(unsigned *)(thread+936);
  }
  if(memcmp(records,records+1,sizeof records[0])) {printf("mismatch input=%u base=%d width=%u flags=%d changed=%d supplied=%d initial=%d\n",input,bases[base],widths[width],flags,changed,supplied,initial);return 3;}
  cases++;
 }
 printf("%d native integer parsing/radix/overflow/locale comparisons pass\n",cases);
 VirtualFree(image,0,MEM_RELEASE);return 0;
}
'''
        directory=PROJECT/'reports/client-scan-input-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'integer_fixture.c';fixture.write_text(text);exe=directory/'integer_fixture.exe'
        run=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-O0','-std=gnu11','-fstack-protector-all','-fno-strict-aliasing','-I',str(PROJECT/'src/rebuild'),'-I',str(PROJECT/'exports/client'),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(run.returncode,0,run.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (directory/'integer-stdout.txt').write_text(run.stdout);(directory/'integer-stderr.txt').write_text(run.stderr)
        self.assertEqual(run.returncode,0,run.stdout+run.stderr)
        print(run.stdout.strip())

    def test_native_wrapper_objects_and_result(self):
        source=read_client_source()
        if b'sr_scan_processor' not in source:source,_=repair(source)
        m=b'//----- (0000000140236BF4)';a=source.index(m);b=source.index(b'//----- (',a+len(m));body=source[a:b].decode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        end=next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress==0x236bf4)
        text=r'''#include "export_compat.h"
#include <stdio.h>
typedef void _LocaleUpdate;
struct __crt_locale_pointers {uint64_t pair[2];};
static unsigned char thread[968];
static uint64_t cfg_options,cfg_arguments,cfg_limit;
static const char *cfg_input,*cfg_format;static struct __crt_locale_pointers *cfg_locale;
static int cfg_changed,cfg_result,error_value;
struct trace {uint64_t result,limit,length;int lengths,locales,processors,invalid,error;unsigned flags;};
static struct trace trace;
static int *errno_sr(void) {return &error_value;}
static void sub_14024CF6C(void) {trace.invalid++;}
static char *strnlen_sr(__m128i *input,uint64_t limit) {
 if((const char *)input!=cfg_input||limit!=cfg_limit)abort();trace.lengths++;trace.limit=limit;
 uint64_t n=0;while(n<limit&&((const char *)input)[n])n++;trace.length=n;return (char *)(uintptr_t)n;
}
static _LocaleUpdate *sub_140213644(_LocaleUpdate *out,struct __crt_locale_pointers *provided) {
 if(provided!=cfg_locale)abort();trace.locales++;
 uint64_t pair[]={0x1234567887654321ULL,0x2345678998765432ULL};
 uint64_t fields[]={(uintptr_t)thread,pair[0],pair[1]};memcpy(out,fields,24);
 ((unsigned char *)out)[24]=cfg_changed;return out;
}
static __int64 sub_1402338B8(__int64 address) {
 unsigned char *p=(void *)(uintptr_t)address;trace.processors++;
 if(*(uint64_t *)(p)!=cfg_options||*(uintptr_t *)(p+8)!=(uintptr_t)cfg_input||
 *(uintptr_t *)(p+16)!=(uintptr_t)cfg_input+trace.length||*(uintptr_t *)(p+24)!=(uintptr_t)cfg_input||
 *(uint64_t *)(p+32)!=cfg_options||*(uintptr_t *)(p+40)!=(uintptr_t)cfg_format||
 *(int *)(p+48)||*(int *)(p+52)||*(unsigned short *)(p+56)||p[58]||*(uint64_t *)(p+64)||
 *(int *)(p+72)||p[76]||*(int *)(p+80)||*(uint64_t *)(p+128)!=cfg_arguments||*(uint64_t *)(p+136))abort();
 for(int i=84;i<116;++i)if(p[i])abort();
 uint64_t *pair=*(uint64_t **)(p+120);
 if(pair[0]!=0x1234567887654321ULL||pair[1]!=0x2345678998765432ULL)abort();
 /* Exercise writes through the native field offsets and both end slots. */
 *(uint64_t *)(p+136)=19;p[84]=0x7a;p[115]=0xa7;
 *(uintptr_t *)(p+24)+=trace.length;
 return (unsigned)cfg_result;
}
static void *native_fill(void *p,int byte,size_t length) {if(byte||length!=32)abort();return memset(p,byte,length);}
'''+body+r'''
static void jump(unsigned char *image,unsigned rva,void *target) {
 unsigned char code[]={0xff,0x25,0,0,0,0};memcpy(image+rva,code,6);memcpy(image+rva+6,&target,8);
}
int main(void) {
 unsigned char *image=VirtualAlloc(0,0x310000,MEM_RESERVE,PAGE_READWRITE);if(!image)return 1;
 unsigned pages[]={0x1f8000,0x1fc000,0x213000,0x233000,0x236000,0x24c000,0x24d000,0x254000,0x302000};
 for(int i=0;i<9;++i)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 2;
 unsigned char original[]={'''+','.join(map(str,pe.get_data(0x236bf4,end-0x236bf4)))+r'''};
 memcpy(image+0x236bf4,original,sizeof original);
 jump(image,0x254ccc,(void *)strnlen_sr);jump(image,0x213644,(void *)sub_140213644);
 jump(image,0x2338b8,(void *)sub_1402338B8);jump(image,0x1fcd30,(void *)native_fill);
 jump(image,0x24d1bc,(void *)errno_sr);jump(image,0x24cf6c,(void *)sub_14024CF6C);
 *(uint64_t *)(image+0x3020a0)=0x2b992ddfa232ULL;
 unsigned char cookie[]={0x48,0x3b,0x0d,0,0,0,0,0x75,0x01,0xc3,0x0f,0x0b};
 int32_t displacement=0x3020a0-(0x1f8b20+7);memcpy(cookie+3,&displacement,4);memcpy(image+0x1f8b20,cookie,sizeof cookie);
 FlushInstructionCache(GetCurrentProcess(),image,0x310000);
 const char *inputs[]={NULL,"","1","Agent 7","\xe6\x97\xa5\xe6\x9c\xac"};
 uint64_t limits[]={0,1,2,5,64,UINT64_MAX},options[]={0,1,2,3,UINT64_MAX};
 int results[]={-3,-2,-1,0,1,7,INT_MIN,INT_MAX};
 struct __crt_locale_pointers provided={{1,2}};
 int cases=0;unsigned char records[2][sizeof trace];
 for(int input=0;input<5;++input)for(int limit=0;limit<6;++limit)for(int option=0;option<5;++option)
 for(int result=0;result<8;++result)for(int null_format=0;null_format<2;++null_format)
 for(int locale=0;locale<2;++locale)for(cfg_changed=0;cfg_changed<2;++cfg_changed)for(unsigned flags=0;flags<4;++flags) {
  cfg_input=inputs[input];cfg_format=null_format?NULL:"%d";cfg_locale=locale?&provided:NULL;
  cfg_options=options[option];cfg_limit=limits[limit];cfg_arguments=0xf123456789abcdefULL;cfg_result=results[result];
  for(int native=0;native<2;++native) {
   memset(&trace,0,sizeof trace);memset(thread,0,sizeof thread);*(unsigned *)(thread+936)=flags;error_value=55;
   trace.result=native?((uint64_t (*)(uint64_t,const char *,uint64_t,const char *,void *,uint64_t))(image+0x236bf4))
     (cfg_options,cfg_input,cfg_limit,cfg_format,cfg_locale,cfg_arguments):
     sub_140236BF4(cfg_options,(__m128i *)cfg_input,cfg_limit,(intptr_t)cfg_format,cfg_locale,cfg_arguments);
   trace.flags=*(unsigned *)(thread+936);trace.error=error_value;memcpy(records[native],&trace,sizeof trace);
  }
  if(memcmp(records[0],records[1],sizeof trace)) {printf("mismatch input=%d limit=%d option=%d result=%d null_format=%d locale=%d changed=%d flags=%u\n",input,limit,option,result,null_format,locale,cfg_changed,flags);return 3;}
  cases++;
 }
 printf("%d native string-scanner object/result/locale comparisons pass\n",cases);
 VirtualFree(image,0,MEM_RELEASE);return 0;
}
'''
        directory=PROJECT/'reports/client-scan-input-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'fixture.c';fixture.write_text(text);exe=directory/'fixture.exe'
        run=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-O0','-std=gnu11','-fstack-protector-all','-fno-strict-aliasing','-I',str(PROJECT/'src/rebuild'),'-I',str(PROJECT/'exports/client'),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(run.returncode,0,run.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (directory/'stdout.txt').write_text(run.stdout);(directory/'stderr.txt').write_text(run.stderr)
        self.assertEqual(run.returncode,0,run.stdout+run.stderr)
        print(run.stdout.strip())


if __name__=='__main__':unittest.main()
