"""Recover shader record status returned through the native cookie epilogue."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014004C4E0)'
def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Shader status needs pinned original')
    pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x4c937,5)!=bytes.fromhex('428b443810'):raise ValueError('Native shader status field changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));region=source[a:b]
    old=b'return sub_1401F8B20((unsigned __int64)&v45 ^ v51);'
    if region.count(old)!=2:raise ValueError('Shader status exit inventory changed')
    region=region.replace(old,b'return dword_140404A6C[60 * (__int64)a1 + 71737689];')
    return source[:a]+region+source[b:],{'recovered_shader_record_status_returns':2}
