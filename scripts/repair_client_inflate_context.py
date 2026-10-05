"""Restore PNG inflater stack object and native length table aliases."""
import hashlib
import re
import struct
import pefile
from repair_client_startup_arguments import PROJECT, PIN

MARKER = b'//----- (0000000140167D10)'
CONTEXT = b'''typedef struct {
  uint64 input, input_end;
  unsigned int bit_count, bits;
  char *output, *output_start, *output_end;
  int expandable;
  unsigned char literal[2020], distance[2020];
} sr_png_inflate_context;
_Static_assert(offsetof(sr_png_inflate_context,output)==24,"inflate output");
_Static_assert(offsetof(sr_png_inflate_context,literal)==52,"inflate literal");
_Static_assert(offsetof(sr_png_inflate_context,distance)==2072,"inflate distance");
_Static_assert(sizeof(sr_png_inflate_context)==4096,"inflate size");
'''

def repair(source):
    binary = PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('Inflater requires pinned original')
    pe=pefile.PE(str(binary),fast_load=True)
    # Native RBP = final RSP+0x100; context is RSP+0x70.
    if pe.get_data(0x168566,5)!=bytes.fromhex('488d4c2470'):
        raise ValueError('Native inflater context address changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER))
    region=source[a:b]
    region,n=re.subn(rb'  _QWORD v132\[644\];[^\r\n]*',b'  sr_png_inflate_context sr_inflate;',region)
    if n!=1:raise ValueError('PNG context declaration changed')
    for name,field in [(133,'output'),(134,'output_start'),(135,'output_end'),(136,'expandable')]:
        region,n=re.subn(rb'  (?:char \*|void \*|int )v'+str(name).encode()+rb';[^\r\n]*\r?\n',b'',region)
        if n!=1:raise ValueError('PNG output declaration changed')
        region=re.sub(rb'\bv'+str(name).encode()+rb'\b',b'sr_inflate.'+field.encode(),region)
    region=region.replace(b'v132[0]',b'sr_inflate.input').replace(b'v132[1]',b'sr_inflate.input_end')
    region=region.replace(b'(__int64)v132',b'(__int64)(uintptr_t)&sr_inflate')
    cookie=b'return sub_1401F8B20((unsigned __int64)&v118 ^ v138);'
    if region.count(cookie)!=7:raise ValueError('PNG return inventory changed')
    region=region.replace(cookie,b'return 0;')
    # Native metadata exits preserve EAX=1; errors preserve EAX=0.
    for prefix in [b'v4[2] = 4;',b'v4[2] = i;']:
        region=region.replace(prefix+b'\r\n'+(b'        ' if prefix.endswith(b'4;') else b'      ')+b'return 0;',prefix+b'\n      return 1;')
    region=region.replace(b'if ( v124 == 2 )\r\n            return 0;',b'if ( v124 == 2 )\n            return 1;')
    # IEND metadata mode exits successfully without allocating pixels.
    region=region.replace(b'  if ( !v124 )\r\n  {\r\n    v63 =',b'  if (v124) return 1;\n  if ( !v124 )\r\n  {\r\n    v63 =')
    needle=b'            sub_140160670((__int64)v4);'
    if region.count(needle)!=1:raise ValueError('PNG success CRC path changed')
    region=region.replace(needle,needle+b'\n            return 1;')
    source=source[:a]+CONTEXT+region+source[b:]
    a=source.index(b'//----- (0000000140167A50)');b=source.index(b'//----- (',a+10)
    region=source[a:b];tables=b''
    for old,name,rva in [('dword_14026F8CC','sr_inflate_length_base',0x26fcd0),('dword_14026F94C','sr_inflate_length_extra',0x26fd50)]:
        needle=(old+'[v6]').encode()
        if region.count(needle)!=1:raise ValueError('Inflater length access changed')
        region=region.replace(needle,(name+'[v6 - 257]').encode())
        values=struct.unpack('<32i',pe.get_data(rva,128))
        tables+=('static const int '+name+'[32]={'+','.join(map(str,values))+'};\n').encode()
    source=source[:a]+tables+region+source[b:]
    a=source.index(b'//----- (000000014015E260)');b=source.index(b'//----- (',a+10)
    region=source[a:b]
    cookie=b'return sub_1401F8B20((unsigned __int64)&v35 ^ v67);'
    if region.count(cookie)!=3:raise ValueError('PNG interlace wrapper returns changed')
    region=region.replace(cookie,b'return 0;',1).replace(cookie,b'return 1;',1)
    needle=b'  sub_14015E5F0((_QWORD *)a1, a2, a3, a4, *v9, v9[1], a5, a6);\r\n  '+cookie
    if region.count(needle)!=1:raise ValueError('PNG direct filter return changed')
    region=region.replace(needle,b'  return sub_14015E5F0((_QWORD *)a1, a2, a3, a4, *v9, v9[1], a5, a6);')
    source=source[:a]+region+source[b:]
    source,counts=repair_png_storage(source,pe)
    return source,{'recovered_png_inflate_context_bytes':4096,'recovered_inflate_length_aliases':2,'recovered_png_status_returns':9,**counts}


def repair_png_storage(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('PNG storage requires pinned original')
        pe=pefile.PE(str(binary),fast_load=True)
    # Native distance extra-bit lookup spans 32 dwords, including nonzero entries.
    old=b'int dword_14026FE50[] = { 0 };'
    if source.count(old)!=1:raise ValueError('PNG distance-extra table export changed')
    values=struct.unpack('<32I',pe.get_data(0x26fe50,128))
    if values[:6]!=(0,0,0,0,1,1) or values[-2:]!=(0,0):raise ValueError('Native distance extra-bit table changed')
    source=source.replace(old,b'int dword_14026FE50[32] = { '+b','.join(str(n).encode() for n in values)+b' };')
    # The PNG descriptor at RSP+40 has pointers at +0,+8,+16,+24 and depth at +32.
    for rva,h in ((0x16681b,'488d4c2440'),(0x16682f,'8b442460'),(0x166848,'488b7c2458')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native PNG descriptor layout changed')
    a=source.index(b'//----- (00000001401666B0)');b=source.index(b'//----- (',a+10);region=source[a:b]
    for old,new in ((b'_QWORD v44[3];',b'_QWORD v44[5];'),(b'  char *v45;',b'  /* char *v45;'),(b'  int v46;',b'  /* int v46;')):
        if region.count(old)!=1:raise ValueError('PNG descriptor export changed')
        if old.startswith(b'  '):
            region=re.sub(re.escape(old)+rb'[^\r\n]*',b'',region)
        else:region=region.replace(old,new)
    region=re.sub(rb'\bv45\b',b'(*(char **)(void *)&v44[3])',region)
    region=re.sub(rb'\bv46\b',b'(*(int *)(void *)&v44[4])',region)
    return source[:a]+region+source[b:],{'recovered_png_distance_extra_bit_entries':32,'recovered_png_descriptor_bytes':40}
