"""Restore the native master-auth state machine's unused void exits."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (000000014006BED0)'


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Master auth requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in ((0x6bed4,'488b05c56129004833c44889442428'),
                  (0x6c2dc,'488b4c24284833cce837c81800'),
                  (0x9695c,'e86f55fdff833db8def22000')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native master auth exit/caller changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
    old=b'return sub_1401F8B20((unsigned __int64)&v12 ^ v15);'
    if body.count(old)!=3:raise ValueError('Master auth cookie inventory changed')
    body=body.replace(old,b'return; /* native master auth updates state and returns void */')
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_14006BED0()'
    if source.count(sig)!=2:raise ValueError('Master auth signature changed')
    return source.replace(sig,b'void               sub_14006BED0()'),{'recovered_master_auth_void_returns':3}
