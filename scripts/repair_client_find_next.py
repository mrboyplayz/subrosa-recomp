"""Restore the paired find-next locale object and native zero/-1 statuses."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN
NEXT=b'''__int64 sub_14023A5C4(__int64 a1,__int64 a2)
{
 struct {uintptr_t thread,locale,multibyte;unsigned char changed;} locale;
 unsigned char wide[560];
 unsigned int cp=65001,result=0xffffffffu;
 sub_140213644((_LocaleUpdate *)&locale,NULL);
 if(*(_DWORD *)(locale.locale+12)!=65001)cp=(unsigned int)sub_14024EDA4()?0:1;
 if(locale.changed)*(_DWORD *)(locale.thread+936)&=~2u;
 unsigned int status=(unsigned int)sub_140239448(a1,(__int64)(uintptr_t)wide);
 if(status!=0xffffffffu && sub_140239928((__int64)(uintptr_t)wide,a2,cp))result=status;
 return result;
}
'''

def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Find-next requires original client')
 pe=pefile.PE(str(binary),fast_load=True)
 if pe.get_data(0x239481,3)!=bytes.fromhex('83c8ff') or pe.get_data(0x23a67f,2)!=bytes.fromhex('8bc7'):raise ValueError('Native find-next statuses changed')
 m=b'//----- (0000000140239448)';a=source.index(m);b=source.index(b'//----- (',a+len(m));r=source[a:b]
 old=b'return sub_1401F8B20((unsigned __int64)v6 ^ v8);'
 if r.count(old)!=3 or b'_DWORD FindFileData[148]' not in r:raise ValueError('Find-next export inventory changed')
 # The existing 592-byte wide data buffer is contiguous. Every failure returns
 # EAX=-1; the checked wide copy's successful EAX=0 is the original success.
 r=r.replace(old,b'return 0xffffffffu;')
 tail=b'  return 0xffffffffu;'
 index=r.rfind(tail)
 r=r[:index]+b'  return status;'+r[index+len(tail):]
 r=r.replace(b'  int v5; // eax',b'  int v5; // eax\n  unsigned int status=0xffffffffu;')
 r=r.replace(b'      v5 = FindFileData[0];',b'      status=0;\n      v5 = FindFileData[0];')
 source=source[:a]+r+source[b:]
 m=b'//----- (000000014023A5C4)';a=source.index(m);b=source.index(b'//----- (',a+len(m))
 if b'_QWORD v7[3]' not in source[a:b]:raise ValueError('Find-next locale export changed')
 source=source[:a]+m+b'\n'+NEXT+source[b:]
 m=b'//----- (0000000140239CCC)';a=source.index(m);b=source.index(b'//----- (',a+len(m));r=source[a:b]
 if r.count(b'((__int64 (*)(void))FindClose)()')!=1:raise ValueError('FindClose dropped handle changed')
 r=r.replace(b'__int64 sub_140239CCC()',b'__int64 sub_140239CCC(__int64 handle)').replace(b'((__int64 (*)(void))FindClose)()',b'FindClose((HANDLE)(intptr_t)handle)')
 source=source[:a]+r+source[b:]
 source=source.replace(b'__int64 sub_140239CCC();',b'__int64 sub_140239CCC(__int64 handle);')
 return source,{'recovered_find_next_locale_object':1,'recovered_find_next_statuses':4,'recovered_find_close_handle':1}
