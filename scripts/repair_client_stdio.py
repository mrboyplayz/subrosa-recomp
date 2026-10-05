"""Restore low-level file and stream startup, allocation ABI and backing."""
import hashlib
import re
import pefile
from repair_client_api_cache import PROJECT, PIN

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Stdio requires pinned client')
    pe=pefile.PE(str(binary))
    for rva,value in [(0x28a030,0x140250554),(0x26e6e8,0x14020b408)]:
        if int.from_bytes(pe.get_data(rva,8),'little')!=value:raise ValueError('File initializer registration changed')
    for rva,old,new in [
        (0x260ec8,b'calloc_base()',b'sr_directory_calloc(64, 72)'),
        (0x25068c,b'calloc_base()',b'sr_directory_calloc(1, 88)'),
        (0x20b408,b'= calloc_base(',b'= sr_directory_calloc(')]:
        marker=('//----- (%016X)'%(0x140000000+rva)).encode();a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
        region=source[a:b]
        if region.count(old)!=(2 if rva==0x20b408 else 1):raise ValueError('File calloc inventory changed')
        source=source[:a]+region.replace(old,new)+source[b:]
    marker=b'//----- (0000000140250358)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
    region=source[a:b]
    if region.count(b'_WORD v8[36]')!=1 or region.count(b'GetStartupInfoW)(v8);')!=1:raise ValueError('Inherited handle stack layout changed')
    region=region.replace(b'_WORD v8[36]',b'_WORD v8[52]').replace(b'GetStartupInfoW)(v8);',b'GetStartupInfoW)(v8);\n  v9=*(int **)((unsigned char *)v8+72);')
    source=source[:a]+region+source[b:]
    pattern=rb'_UNKNOWN unk_1403020E0;[^\n]*\r?\n_UNKNOWN unk_1403020F8;[^\n]*'
    if len(list(re.finditer(pattern,source)))!=1:raise ValueError('Standard-stream split globals changed')
    data=pe.get_data(0x3020e0,264)
    if len(data)!=264:raise ValueError('Standard-stream backing unavailable')
    backing=(b'unsigned char sr_standard_streams[264] __attribute__((aligned(16))) = {'+b','.join(str(x).encode() for x in data)+b'};\n'
             b'extern _UNKNOWN unk_1403020E0;\nextern _DWORD unk_1403020F8;\n'
             b'__asm__(".globl unk_1403020E0\\n.set unk_1403020E0, sr_standard_streams\\n"\n'
             b'        ".globl unk_1403020F8\\n.set unk_1403020F8, sr_standard_streams+24\\n");')
    source=re.sub(pattern,lambda _:backing,source)
    old=b'  return WinMain_0();\ncrt_initialization_failure:'
    new=b'''  if (!sub_140250554())
  {
    _acrt_uninitialize_ptd_0();
    *(_QWORD *)&dword_140404A6C[19065847] = 0;
    _acrt_uninitialize_locks_0();
    goto crt_initialization_failure;
  }
  /* Original _initterm_e startup returns 255 on a C initializer failure. */
  if ((unsigned int)sub_14020B408()) return 255;
  return WinMain_0();
crt_initialization_failure:'''
    if source.count(old)!=1:raise ValueError('Thread entry insertion point changed')
    source=source.replace(old,new)
    return source,{'recovered_file_calloc_calls':4,'recovered_standard_stream_bytes':264,
                   'recovered_inherited_handle_layout':1,'recovered_file_startup_stages':2}
