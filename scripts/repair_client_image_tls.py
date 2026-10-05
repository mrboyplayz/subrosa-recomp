"""Recover the original image decoder's 24-byte static TLS template."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Image TLS requires pinned client')
    pe=pefile.PE(str(binary))
    tls=pe.DIRECTORY_ENTRY_TLS.struct
    if (tls.StartAddressOfRawData,tls.EndAddressOfRawData,tls.AddressOfIndex,tls.SizeOfZeroFill)!=(0x140294678,0x140294690,0x144cbe4c4,0):
        raise ValueError('Native image TLS directory changed')
    if pe.get_data(0x294678,24)!=bytes(24):raise ValueError('Native image TLS initializer changed')
    # A compiler TLS index cannot be copied into a newly linked executable:
    # its loader assigns that executable's slot and compiler-specific offsets.
    # Route the original TLS accesses to one shared C thread-local template.
    pattern=rb'\*\(_QWORD \*\)\(__readgsqword\(0x58u\)\s*\+\s*8LL\s*\*\s*dword_140404A6C\[19064470\]\)'
    source,count=re.subn(pattern,b'sr_client_static_tls()',source)
    if count!=150:raise ValueError(f'Image TLS direct inventory changed: {count}')
    changes=[
        (b'v29 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * v15);',b'v29 = sr_client_static_tls();'),
        (b'v116 = __readgsqword(0x58u);',b'v116 = 0; /* compiler TLS slot access recovered below */'),
        (b'v15 = *(_QWORD *)(v116 + 8LL * dword_140404A6C[19064470]);',b'v15 = sr_client_static_tls();'),
        (b'v105 = (__int64 *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);',b'uint64 sr_local_image_tls=sr_client_static_tls();\n  v105 = (__int64 *)&sr_local_image_tls;'),
    ]
    for old,new in changes:
        if source.count(old)!=1:raise ValueError('Image TLS indirect export changed')
        source=source.replace(old,new)
    if b'__readgsqword(0x58u)' in source:raise ValueError('Unrecovered original static TLS access')
    return source,{'recovered_image_tls_template_bytes':24,'recovered_image_tls_accesses':153}
