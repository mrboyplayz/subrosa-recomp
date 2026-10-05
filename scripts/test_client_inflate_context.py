"""Check native inflater layout and decoded backreferences against original code."""
import random
from client_sources import read_client_source
import struct
import subprocess
import unittest
import zlib
import pefile
from repair_client_inflate_context import PROJECT, CONTEXT, repair

class InflateContext(unittest.TestCase):
    def test_complete_native_font_streams(self):
        source=read_client_source()
        def region(rva):
            marker=('//----- (%016X)'%(0x140000000+rva)).encode()
            a=source.index(marker);return source[a:source.index(b'//----- (',a+len(marker))].replace(CONTEXT,b'')
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        out=PROJECT/'reports/client-font-inflate-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        inputs=[]
        for name in ('vcr','osd-white','rockwell','fixedsys','overpass'):
            png=(PROJECT.parent/'font'/(name+'.png')).read_bytes();a=8;data=b''
            while a<len(png):
                n=struct.unpack('>I',png[a:a+4])[0]
                if png[a+4:a+8]==b'IDAT':data+=png[a+8:a+8+n]
                a+=n+12
            raw=zlib.decompress(data);(out/(name+'.zlib')).write_bytes(data);(out/(name+'.raw')).write_bytes(raw)
            inputs.append(name)
        # Fixed Huffman data followed by Z_SYNC_FLUSH includes an empty stored
        # block. Stored-only streams cover nonempty LEN/NLEN headers as well.
        for i in range(24):
            raw=bytes((j*73+i*19)&255 for j in range(i*53))
            compressor=zlib.compressobj(0 if i%2 else 6)
            split=len(raw)//2
            data=compressor.compress(raw[:split])+compressor.flush(zlib.Z_SYNC_FLUSH)
            data+=compressor.compress(raw[split:])+compressor.flush()
            name='stored-%d'%i
            (out/(name+'.zlib')).write_bytes(data);(out/(name+'.raw')).write_bytes(raw)
            inputs.append(name)
        # Exercise every PNG zlib stream in the installed Practice archive.
        # Some textures use a sync-flush block that the font atlas never hits.
        from append_smallotown_csx import read_entries, TYPE_PNG
        archive=(PROJECT.parent/'data/test2/test.csx').read_bytes()
        _,entries=read_entries(archive)
        seen=set()
        for type_tag,_,_,asset,payload in entries:
            if type_tag!=TYPE_PNG:continue
            cursor=0
            while True:
                start=payload.find(b'\x89PNG\r\n\x1a\n',cursor)
                if start<0:break
                cursor=start+8;data=b''
                while cursor+12<=len(payload):
                    n=struct.unpack('>I',payload[cursor:cursor+4])[0]
                    kind=payload[cursor+4:cursor+8]
                    if kind==b'IDAT':data+=payload[cursor+8:cursor+8+n]
                    cursor+=n+12
                    if kind==b'IEND':break
                if not data or data in seen:continue
                seen.add(data);raw=zlib.decompress(data)
                name='practice-%d'%len(seen)
                (out/(name+'.zlib')).write_bytes(data);(out/(name+'.raw')).write_bytes(raw)
                inputs.append(name)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "defs.h"
typedef uint64_t uint64;
static unsigned dword_140404A6C[19064471];static uintptr_t tls[2];static const char *error_text;
static uint64_t mock_gs(unsigned ignored){tls[0]=(uintptr_t)&error_text-16;return (uintptr_t)tls;}
#define __readgsqword mock_gs
/* Controlled native TLS boundary; template/isolation tested separately. */
static uint64_t sr_client_static_tls(void){return *(uint64_t *)(uintptr_t)__readgsqword(0x58);}
static void sub_1401FCD30(void *p,int v,unsigned n){memset(p,v,n);}
static void sub_1401FC920(void *p,const void *q,size_t n){memcpy(p,q,n);}
static uint64_t sub_14016F9E0(uint64_t c,uint64_t p,unsigned n){return 0;}
'''.encode()+CONTEXT
        for name,rva,count in [('byte_14026FED0',0x26fed0,32),('dword_14026FDD0',0x26fdd0,32),('dword_14026FE50',0x26fe50,32),('sr_inflate_length_base',0x26fcd0,32),('sr_inflate_length_extra',0x26fd50,32),('byte_14026FEF0',0x26fef0,288),('byte_140270010',0x270010,40)]:
            if name=='dword_14026FE50':
                c+=next(line for line in source.splitlines() if line.startswith(b'int dword_14026FE50['))+b'\n'
            else:
                values=list(pe.get_data(rva,count)) if name.startswith('byte') else struct.unpack('<'+str(count)+'i',pe.get_data(rva,count*4))
                c+=('static '+('unsigned char' if name.startswith('byte') else 'int')+' '+name+'['+str(count)+']={'+','.join(map(str,values))+'};\n').encode()
        # Real C fill/table/decode loop; expansion boundary is unreachable with exact capacity.
        for rva in (0x16f730,0x160350,0x16fb90,0x15cf70,0x167a50,0x168c80,0x168e00):c+=region(rva)
        c+=r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
static unsigned char *load(const char *name,size_t *n){FILE *f=fopen(name,"rb");if(!f)abort();fseek(f,0,SEEK_END);*n=ftell(f);rewind(f);unsigned char *p=malloc(*n);if(fread(p,1,*n,f)!=*n)abort();fclose(f);return p;}
int main(void){unsigned char *image=VirtualAlloc(0,0x4cbe5000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        pages=(0x15c000,0x15d000,0x160000,0x167000,0x168000,0x169000,0x16f000,0x1fc000,0x1f8000,0x26f000,0x270000,0x302000,0x4cbe4000)
        for page in pages:
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
        for rva,n in ((page,4096) for page in pages if page<0x4cbe4000):
            c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(rva,n)))+'};memcpy(image+'+hex(rva)+',b,sizeof b);}\n').encode()
        c+=r'''
thunk(image+0x16f9e0,sub_14016F9E0);thunk(image+0x1fcd30,sub_1401FCD30);thunk(image+0x1fc920,sub_1401FC920);
const uint64_t cookie=0x123456789abcdefULL;memcpy(image+0x3020a0,&cookie,8);
unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
const char *names[]={SR_STREAM_NAMES};unsigned checked=0;
for(unsigned i=0;i<sizeof names/sizeof *names;i++){char path[128];size_t input_n,expected_n;
sprintf(path,"%s.zlib",names[i]);unsigned char *input=load(path,&input_n);
sprintf(path,"%s.raw",names[i]);unsigned char *expected=load(path,&expected_n);
unsigned char *output[2]={malloc(expected_n+64),malloc(expected_n+64)};sr_png_inflate_context contexts[2];uint64_t results[2];
for(unsigned native=0;native<2;native++){
memset(output[native],0xcc,expected_n+64);memset(&contexts[native],0xa5,sizeof contexts[native]);error_text=NULL;
sr_png_inflate_context *p=&contexts[native];p->input=(uintptr_t)input;p->input_end=(uintptr_t)(input+input_n);p->output=p->output_start=(char*)output[native]+32;p->output_end=p->output_start+expected_n;p->expandable=0;
results[native]=native?((uint64_t (*)(uint64_t,int))(image+0x168e00))((uintptr_t)p,1):sub_140168E00((uintptr_t)p,1);
if(results[native]!=1||p->output-p->output_start!=expected_n||memcmp(p->output_start,expected,expected_n)){printf("%s native=%u return=%llu bytes=%llu expected=%llu error=%s\n",names[i],native,results[native],(uint64_t)(p->output-p->output_start),(uint64_t)expected_n,error_text?error_text:"");return 1;}
for(unsigned j=0;j<32;j++)if(output[native][j]!=0xcc||output[native][expected_n+32+j]!=0xcc)return 2;
}
if(memcmp(output[0],output[1],expected_n+64)||contexts[0].input!=contexts[1].input||contexts[0].bits!=contexts[1].bits||contexts[0].bit_count!=contexts[1].bit_count)return 3;
free(input);free(expected);free(output[0]);free(output[1]);checked++;
}
printf("%u complete font and stored/sync-flush zlib streams match native inflater, expected bytes, cursor/bit state and guards; allocation expansion and native cookie failure diagnostics excluded\n",checked);return 0;}
'''.encode()
        c=c.replace(b'SR_STREAM_NAMES',','.join('"'+name+'"' for name in inputs).encode())
        f=out/'font_inflate.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-Wl,--stack,33554432','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],cwd=out,capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

    def test_native_emission(self):
        source=read_client_source()
        if b'sr_png_inflate_context sr_inflate;' not in source:source,_=repair(source)
        def region(rva):
            marker=('//----- (%016X)'%(0x140000000+rva)).encode()
            a=source.index(marker);return source[a:source.index(b'//----- (',a+len(marker))].replace(CONTEXT,b'')
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        rng=random.Random(412);inputs=[]
        for k in range(128):
            raw=bytes(rng.randrange(2+k%57) for _ in range(4000+k*9))
            data=zlib.compress(raw,6)[2:]
            if data[0]&7==5:inputs.append((data,raw))
        png=(PROJECT.parent/'font/vcr.png').read_bytes();a=8;data=b''
        while a<len(png):
            n=struct.unpack('>I',png[a:a+4])[0]
            if png[a+4:a+8]==b'IDAT':data+=png[a+8:a+8+n]
            a+=n+12
        font_index=None
        if (data[2]>>1)&3==2:
            font_index=len(inputs)
            inputs.append((data[2:],zlib.decompress(data)))
        self.assertGreater(len(inputs),100)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
typedef uint64_t uint64;
static unsigned dword_140404A6C[19064471];static uintptr_t tls[2];static const char *error_text;
static uint64_t mock_gs(unsigned ignored){tls[0]=(uintptr_t)&error_text-16;return (uintptr_t)tls;}
#define __readgsqword mock_gs
/* Controlled native TLS boundary; template/isolation tested separately. */
static uint64_t sr_client_static_tls(void){return *(uint64_t *)(uintptr_t)__readgsqword(0x58);}
static void sub_1401FCD30(void *p,int v,unsigned n){memset(p,v,n);}
static uint64_t sub_14016F9E0(uint64_t c,uint64_t p,unsigned n){return 0;}
'''.encode()+CONTEXT
        for name,rva in [('byte_14026FED0',0x26fed0),('dword_14026FDD0',0x26fdd0),('dword_14026FE50',0x26fe50),('sr_inflate_length_base',0x26fcd0),('sr_inflate_length_extra',0x26fd50)]:
            values=list(pe.get_data(rva,32)) if name.startswith('byte') else struct.unpack('<32i',pe.get_data(rva,128))
            text+=('static '+('unsigned char' if name.startswith('byte') else 'int')+' '+name+'[32]={'+','.join(map(str,values))+'};\n').encode()
        for rva in [0x16f730,0x160350,0x16fb90,0x15cf70,0x167a50]:text+=region(rva)
        for i,(data,raw) in enumerate(inputs):
            for prefix,value in [('input',data),('expected',raw)]:text+=('static unsigned char '+prefix+str(i)+'[]={'+','.join(map(str,value))+'};\n').encode()
        text+=r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x270000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x167000,0x160000,0x16f000,0x1fc000,0x26f000};
for(unsigned j=0;j<5;j++)if(!VirtualAlloc(image+pages[j],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;
'''.encode()
        data=pe.get_data(0x167a50,0x2be)
        text+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+0x167a50,b,sizeof b); }\n').encode()
        for rva in [0x26fcd0,0x26fd50,0x26fdd0,0x26fe50]:text+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(rva,128)))+'};memcpy(image+'+hex(rva)+',b,sizeof b); }\n').encode()
        text+=b'thunk(image+0x160350,sub_140160350);thunk(image+0x16fb90,sub_14016FB90);thunk(image+0x16f9e0,sub_14016F9E0);thunk(image+0x1fcd30,sub_1401FCD30);\n'
        for i,(data,raw) in enumerate(inputs):
            text+=('''{unsigned char outputs[2][%d];sr_png_inflate_context contexts[2];uint64_t result[2];
for(unsigned native=0;native<2;native++){
memset(&contexts[native],0xa5,sizeof contexts[native]);memset(outputs[native],0xcc,sizeof outputs[native]);
sr_png_inflate_context *c=&contexts[native];c->input=(uintptr_t)input%d+1;c->input_end=(uintptr_t)input%d+sizeof input%d;
c->bits=input%d[0]>>3;c->bit_count=5;c->output=c->output_start=(char *)outputs[native];c->output_end=(char *)outputs[native]+%d;c->expandable=0;
if(!sub_14015CF70((uintptr_t)c))return 7;
result[native]=native?((uint64_t (*)(uint64_t))(image+0x167a50))((uintptr_t)c):sub_140167A50((uintptr_t)c);
if(result[native]!=1 || c->output-c->output_start%s sizeof expected%d || memcmp(outputs[native],expected%d,(size_t)(c->output-c->output_start))){printf("inflate input %d native %%u failed %%llu bytes %%lld error %%s\\n",native,result[native],(long long)(c->output-c->output_start),error_text?error_text:"");return 1;}
}
if(memcmp(outputs[0],outputs[1],sizeof outputs[0])||contexts[0].bits!=contexts[1].bits||contexts[0].bit_count!=contexts[1].bit_count||contexts[0].input!=contexts[1].input)return 2;}
'''%(len(raw)+32,i,i,i,i,len(raw),'>' if i==font_index else '!=',i,i,i)).encode()
        text+=('printf("%d native inflater emission and expected-output comparisons pass\\n");return 0;}\n'%len(inputs)).encode()
        out=PROJECT/'reports/client-inflate-context-20261002';out.mkdir(exist_ok=True,parents=True)
        fixture=out/'inflate_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-Wl,--stack,33554432','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
