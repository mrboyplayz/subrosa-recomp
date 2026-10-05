"""Restore registered CRT locks/PTD initialization and five calloc arguments."""
import hashlib
import re
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from repair_client_api_cache import PROJECT, PIN

GETTERS = [0x255818,0x2558b8,0x255a70,0x255b44,0x255bec]
ENTRY = b'''__int64 sr_directory_calloc(unsigned __int64 count, unsigned __int64 width);
__int64 WinMain_sr()
{
  sub_14024FAF0();
  if (!_acrt_initialize_locks())
    goto crt_initialization_failure;
  if (!sub_140260A78())
  {
    _acrt_uninitialize_locks_0();
    goto crt_initialization_failure;
  }
  if (!sub_140255CB8())
  {
    /* Original heap uninitializer 0x140260A94 clears this handle. */
    *(_QWORD *)&dword_140404A6C[19065847] = 0;
    _acrt_uninitialize_locks_0();
    goto crt_initialization_failure;
  }
  return WinMain_0();
crt_initialization_failure:
  /* Original executable's failed CRT initialization invokes fast-fail 7. */
  sub_1401FBFB8(7u);
  __builtin_unreachable();
}
'''


def repair(source):
    binary = PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Thread startup requires pinned client')
    pe = pefile.PE(str(binary))
    expected = {0x289fd0:0x14024faf0,0x289ff0:0x140258b1c,
                0x28a000:0x140260a78,0x28a020:0x140255cb8}
    for rva,address in expected.items():
        if pe.get_data(rva,8) != address.to_bytes(8,'little'):
            raise ValueError('CRT initializer registration/order changed')
    if pe.get_data(0x260a94,12) != bytes.fromhex('488325acefa50400b001c3cccc')[:12]:
        raise ValueError('Original heap uninitializer changed')
    decoder = Cs(CS_ARCH_X86,CS_MODE_64)
    edits = []
    for address in GETTERS:
        finish = next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress==address)
        instructions = list(decoder.disasm(pe.get_data(address,finish-address),0x140000000+address))
        calls = [i for i,x in enumerate(instructions) if x.mnemonic=='call' and x.op_str=='0x14024df98']
        if len(calls)!=1 or [(x.mnemonic,x.op_str) for x in instructions[calls[0]-2:calls[0]]] != [('mov','edx, 0x3c8'),('mov','ecx, 1')]:
            raise ValueError('Native PTD calloc arguments changed')
        marker = ('//----- (%016X)'%(0x140000000+address)).encode()
        start = source.index(marker);end = source.index(b'//----- (',start+len(marker))
        region = source[start:end]
        if region.count(b'calloc_base()')!=1:
            raise ValueError('Dropped PTD calloc inventory changed')
        region = region.replace(b'calloc_base()',b'sr_directory_calloc(1, 0x3C8)')
        edits.append((start,end,region))
    for start,end,region in sorted(edits,reverse=True):source=source[:start]+region+source[end:]
    old = b'__int64 WinMain_sr()\n{\n  sub_14024FAF0();\n  sub_140260A78();\n  return WinMain_0();\n}'
    if source.count(old)!=1:
        raise ValueError('Entry initialization sequence changed')
    source = source.replace(old,ENTRY,1)
    return source,{'recovered_thread_calloc_arguments':5,'recovered_thread_startup_initializers':2,
                   'recovered_thread_startup_rollback':1}
