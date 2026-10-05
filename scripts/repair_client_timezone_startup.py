"""Restore the registered time-zone initializer before the client entry point."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN

def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Timezone startup needs pinned client')
 pe=pefile.PE(str(binary),fast_load=True)
 if pe.get_data(0x26e6f0,8)!=(0x1402370d4).to_bytes(8,'little'):raise ValueError('Timezone initializer registration changed')
 old=b'  if ((unsigned int)sub_14020B408()) return 255;\n  return WinMain_0();'
 if source.count(old)!=1:raise ValueError('Timezone entry insertion point changed')
 source=source.replace(old,b'  if ((unsigned int)sub_14020B408()) return 255;\n  if ((unsigned int)sub_1402370D4()) return 255;\n  return WinMain_0();')
 m=b'//----- (0000000140237D10)';a=source.index(m);b=source.index(b'//----- (',a+len(m));r=source[a:b]
 r,n=re.subn(rb'(__int64 v(?:9|10));',rb'\1 = 0;',r)
 if n!=2:raise ValueError('Timezone capacity argument slots changed')
 source=source[:a]+r+source[b:]
 return source,{'recovered_timezone_startup_initializer':1,'recovered_timezone_capacity_slots':2}
