"""Compare relocated CreateVehicle address expressions with pinned native LEAs."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_vehicle_storage import PROJECT,CREATE_ALIASES
from repair_client_menu_actions import pinned_pe,region


class CreateVehicleAddresses(unittest.TestCase):
    def test_native_address_bits(self):
        source=read_client_source()
        _,_,body=region(source,0x5bca0)
        pe=pinned_pe()
        code=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static unsigned *dword_140404A6C;
static uint64_t recovered(unsigned site,uint64_t base,int64_t offset){
 dword_140404A6C=(unsigned *)(uintptr_t)(base+0x404a6c);
 int64_t v35=offset,v45=offset,v97=offset,v6=offset;
 switch(site){
'''.encode()
        for site,(old,new,rva,h) in enumerate(CREATE_ALIASES):
            self.assertNotIn(old,body)
            self.assertEqual(body.count(new),1)
            native=pe.get_data(rva,len(bytes.fromhex(h)))
            self.assertEqual(native,bytes.fromhex(h))
            code+=b' case '+str(site).encode()+b':return '+new+b';\n'
        code+=r''' }return 0;}
int main(void){
 unsigned char *ops=VirtualAlloc(0,4096,MEM_COMMIT|MEM_RESERVE,PAGE_EXECUTE_READWRITE);
 if(!ops)return 8;
'''.encode()
        for site,(_,_,rva,h) in enumerate(CREATE_ALIASES):
            # RCX is the dynamic offset and RDX the relocated image base.
            # Keep each original LEA opcode, marshalling its source register.
            if site in (0,2):
                wrapper=bytes.fromhex('4889c8')+pe.get_data(rva,7)+bytes.fromhex('4801d0c3')
            elif site==1:
                wrapper=pe.get_data(rva,7)+bytes.fromhex('488d0411c3')
            else:
                wrapper=bytes.fromhex('4989c8')+pe.get_data(rva,8)+bytes.fromhex('488d0411c3')
            code+=('{unsigned char b[]={'+','.join(map(str,wrapper))+f'}};memcpy(ops+{site*64},b,sizeof b);}}\n').encode()
        code+=r'''
 uint64_t bases[]={0x140000000ULL,0x7ff612340000ULL,0x10000000000ULL,(uintptr_t)ops};
 unsigned cases=0;uint64_t seed=0x1a7ecba46c32ULL;
 for(unsigned b=0;b<4;b++)for(unsigned site=0;site<4;site++)for(unsigned i=0;i<4096;i++){
  seed=seed*6364136223846793005ULL+1442695040888963407ULL;
  int64_t offset=(int64_t)(int32_t)(seed>>32);
  // Vectorized collision copies subtract a rebuilt destination pointer.
  if(site<3 && (i&1))offset=-(int64_t)bases[b]-(0x404a6c+4LL*129721886)+(i%32)*184LL-(i%128)*20768LL;
  if(site==3)offset=(i%512);
  uint64_t actual=((uint64_t(*)(int64_t,uint64_t))(ops+site*64))(offset,bases[b]);
  uint64_t expected=recovered(site,bases[b],offset);
  if(actual!=expected){printf("site %u base %llx offset %llx: %llx/%llx\n",site,bases[b],(uint64_t)offset,actual,expected);return 1;}
  cases++;
 }
 printf("%u native CreateVehicle address cases pass; four LEAs, relocated bases and negative pointer differences\n",cases);
 VirtualFree(ops,0,MEM_RELEASE);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-create-vehicle-addresses-20261004'
        out.mkdir(parents=True,exist_ok=True)
        fixture=out/'addresses.c';fixture.write_bytes(code);exe=fixture.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
