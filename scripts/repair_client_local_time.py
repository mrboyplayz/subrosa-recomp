"""Recover omitted native 64-bit calendar arithmetic and timezone void return."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN
BODY=b'''__int64 _loctotime64_t_0(int a1,int a2,int a3,unsigned int a4,unsigned int a5,unsigned int a6,int a7)
{
 unsigned int year=(unsigned int)a1-1900u;
 if(year<70 || year>1101 || (unsigned int)a2-1u>11 || a3<=0 ||
    (a3>dword_14028BF18[a2]-dword_14028BF18[a2-1] &&
     !(sub_1402374E4(year) && a2==2 && a3<=29)) || a4>23 || a5>59 || a6>59){
   *errno_sr()=22;return -1;
 }
 int yday=dword_14028BF18[a2-1]+a3;
 if(sub_1402374E4(year) && a2>2)++yday;
 sub_140237FC0();
 int daylight=0,dstbias=0,timezone=0;
 if((unsigned int)sub_140237138((_DWORD *)&daylight) ||
    (unsigned int)sub_140237168((_DWORD *)&dstbias) ||
    (unsigned int)sub_140237198((_DWORD *)&timezone)){
   sub_14024CFBC();__debugbreak();
 }
 int64_t days=((int64_t)year-70)*365+(year-1)/4-17+(year+299)/400-(year-1)/100+yday;
 int64_t result=((days*24+(int32_t)a4)*60+(int32_t)a5)*60+(int32_t)a6+timezone;
 if(a7==1)return result+dstbias;
 if(a7==-1 && daylight){
   struct tm calendar={0};
   calendar.tm_sec=a6;calendar.tm_min=a5;calendar.tm_hour=a4;
   calendar.tm_mon=a2-1;calendar.tm_year=year;calendar.tm_yday=yday;
   if((int)sub_140238034(&calendar))return result+dstbias;
 }
 return result;
}
'''

def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Local time requires pinned client')
 pe=pefile.PE(str(binary),fast_load=True)
 if pe.get_data(0x2598dc,4)!=bytes.fromhex('4883e846') or pe.get_data(0x259953,3)!=bytes.fromhex('498bc6'):raise ValueError('Native epoch arithmetic changed')
 m=b'//----- (0000000140259770)';a=source.index(m);b=source.index(b'//----- (',a+len(m))
 if b'return sub_1401F8B20' not in source[a:b]:raise ValueError('Local time cookie export changed')
 source=source[:a]+m+b'\n'+BODY+source[b:]
 m=b'//----- (0000000140237EB8)';a=source.index(m);b=source.index(b'//----- (',a+len(m));r=source[a:b]
 old=b'return sub_1401F8B20((unsigned __int64)&v6 ^ v10);'
 if source.count(b'sub_140237EB8(')!=4 or r.count(old)!=1:raise ValueError('Timezone wrapper callers/cookie changed')
 r=r.replace(b'__int64 sub_140237EB8()',b'void sub_140237EB8()').replace(old,b'return;')
 # Recover size ABI on the optional environment-variable allocation path too.
 r=r.replace(b'malloc_base(Size)',b'sr_path_malloc(Size)')
 source=source[:a]+r+source[b:]
 source=source.replace(b'__int64 sub_140237EB8();',b'void sub_140237EB8();')
 # This wrapper precedes the path converter's declaration.
 a=source.index(m)
 source=source[:a]+b'__int64 sr_path_malloc(unsigned __int64);\n'+source[a:]
 return source,{'recovered_local_time_epoch_arithmetic':1,'recovered_timezone_void_return':1,'recovered_timezone_environment_allocation':1}
