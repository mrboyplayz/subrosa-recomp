"""Recover building catalog find-data storage and native void return."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

MARKER=b'//----- (000000014013CDF0)'


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('Building catalog requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in (
        (0x13ce89,'488d542430488d8c2460010000'),
        (0x13cec4,'488d542454'),
        (0x13cee7,'488d542430488bcb'),
        (0x13d198,'488b8c24600500004833cce878b90b00'),
        (0x96635,'e8b6670a00f30f1015aec521000f57dbf30f100d9fc52100f30f100593c52100ff15d5a68e04'),
        (0xfb246,'e8a51b0400f30f10159d791b000f57dbf30f100d8e791b00f30f100582791b00ff15c45a8804'),
    ):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):
            raise ValueError('Native catalog buffer or return changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
    changes=(
        (b'  _BYTE v34[36];',b'  _Alignas(8) _BYTE v34[296];'),
        (b'  char v35; // [rsp+54h] [rbp-544h] BYREF',b'  /* Native filename is part of the find-data object, at offset 36. */'),
        (b'v3 = &v35;',b'v3 = (char *)v34 + 36;'),
        (b'return sub_1401F8B20((unsigned __int64)&v32 ^ v37);',b'return; /* native catalog callers discard the compiler cookie result */'),
    )
    for old,new in changes:
        if body.count(old)!=1:raise ValueError('Catalog export inventory changed: '+repr(old))
        body=body.replace(old,new)
    source=source[:a]+body+source[b:]
    signature=b'__int64 sub_14013CDF0()'
    if source.count(signature)!=2:raise ValueError('Catalog signature inventory changed')
    return source.replace(signature,b'void sub_14013CDF0()'),{'recovered_building_catalog_find_object':1,'recovered_building_catalog_void_return':1}
