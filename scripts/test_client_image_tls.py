"""Exercise original TLS initialization and isolation using Windows threads."""
import subprocess
import unittest
from pathlib import Path
from repair_client_image_tls import PROJECT


class ImageTls(unittest.TestCase):
    def test_thread_isolation(self):
        s=(PROJECT/'src/rebuild/client_leaf_adapter.inc').read_bytes()
        helper=s[s.index(b'uint64_t sr_client_static_tls(void)'):]
        c=b'#include <windows.h>\n#include <stdint.h>\n#include <stdio.h>\n#include <string.h>\n'+helper+r'''
static HANDLE ready[8],resume;static uintptr_t addresses[8];static LONG failed;
static DWORD WINAPI worker(void *argument){unsigned id=(unsigned)(uintptr_t)argument;
unsigned char *storage=(void*)(uintptr_t)sr_client_static_tls();addresses[id]=(uintptr_t)storage;
unsigned char zero[24]={0};if(((uintptr_t)storage&7)||memcmp(storage,zero,24))InterlockedIncrement(&failed);
memset(storage,id+1,24);SetEvent(ready[id]);WaitForSingleObject(resume,INFINITE);
if((uintptr_t)storage!=sr_client_static_tls())InterlockedIncrement(&failed);
for(unsigned i=0;i<24;i++)if(storage[i]!=id+1)InterlockedIncrement(&failed);return 0;}
int main(void){unsigned char *main_storage=(void*)(uintptr_t)sr_client_static_tls();unsigned char zero[24]={0};
if(memcmp(main_storage,zero,24))return 1;memset(main_storage,0x55,24);
HANDLE threads[8];resume=CreateEventA(0,TRUE,FALSE,0);
for(unsigned i=0;i<8;i++){ready[i]=CreateEventA(0,TRUE,FALSE,0);threads[i]=CreateThread(0,0,worker,(void*)(uintptr_t)i,0,0);if(!threads[i])return 9;}
WaitForMultipleObjects(8,ready,TRUE,INFINITE);
for(unsigned i=0;i<8;i++){if(addresses[i]==(uintptr_t)main_storage)failed++;for(unsigned j=0;j<i;j++)if(addresses[i]==addresses[j])failed++;}
for(unsigned i=0;i<24;i++)if(main_storage[i]!=0x55)failed++;
SetEvent(resume);WaitForMultipleObjects(8,threads,TRUE,INFINITE);
for(unsigned i=0;i<8;i++){CloseHandle(threads[i]);CloseHandle(ready[i]);}CloseHandle(resume);
printf("24-byte zero template, alignment, stable address and concurrent isolation across 9 Windows threads: %ld failures\n",failed);return failed?2:0;}
'''.encode()
        out=PROJECT/'reports/client-image-tls-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'tls.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
