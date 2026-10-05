"""Relocate original image-relative friend-ID destinations in all three callers."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN

OLD=b'(__int64 *)(0x140000000LL + 528LL * i + 1117753312)'
NEW=b'(__int64 *)&dword_140404A6C[132LL * i + 278384989]'


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Steam friend storage requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in ((0x96782,'488d89e08f9f424803cde88f201000'),
                  (0x9ff80,'488d89e08f9f424903cce891880f00'),
                  (0xfb3a3,'488d89e08f9f424803cfe86ed40900')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native Steam friend destination changed')
    if source.count(OLD)!=3:raise ValueError('Steam friend destination inventory changed')
    if 0x404a6c+4*278384989!=0x429f8fe0:raise ValueError('Steam friend storage alias changed')
    return source.replace(OLD,NEW),{'recovered_steam_friend_id_storage_aliases':3}
