"""Recover SDL's Windows UTF-16 command-line bridge from the pinned client."""
import hashlib
from pathlib import Path
import pefile
import re
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import X86_OP_MEM, X86_REG_RIP

PROJECT = Path(__file__).resolve().parent.parent
PIN = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'
START = b'//----- (0000000140001030)'
END = b'//----- (00000001400011D0)'
BODY = b'''//----- (0000000140001030) ----------------------------------------------------
/* Typed import aliases preserve the x64 ABI without changing other callers. */
extern void *sr_startup_calloc(size_t, size_t) __asm__("SDL_calloc");
extern size_t sr_startup_wcslen(const wchar_t *) __asm__("SDL_wcslen");
extern char *sr_startup_iconv(const char *, const char *, const char *, size_t) __asm__("SDL_iconv_string");
extern void sr_startup_ready(void) __asm__("SDL_SetMainReady");
extern void sr_startup_free(void *) __asm__("SDL_free");
__int64 WinMain_0()
{
  int count = 0;
  int index;
  unsigned int result;
  wchar_t **wide = CommandLineToArgvW(GetCommandLineW(), &count);
  char **utf8;
  if (!wide)
    goto out_of_memory;
  utf8 = sr_startup_calloc((size_t)(count + 1), 8);
  if (!utf8)
    goto out_of_memory;
  for (index = 0; index < count; ++index)
  {
    size_t length = sr_startup_wcslen(wide[index]);
    utf8[index] = sr_startup_iconv(
      "UTF-8", "UTF-16LE", (const char *)wide[index], 2 * length + 2);
    if (!utf8[index])
      goto out_of_memory;
  }
  utf8[index] = 0;
  LocalFree(wide);
  sr_startup_ready();
  result = app_main_utf8_candidate(count, (__int64)(uintptr_t)utf8);
  for (index = 0; index < count; ++index)
    sr_startup_free(utf8[index]);
  sr_startup_free(utf8);
  return result;
out_of_memory:
  /* The original failure path displays the error and returns without cleanup. */
  sub_140198F95(16, (__int64)"Fatal Error", (__int64)"Out of memory - aborting");
  return 0;
}

'''


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Startup recovery requires pinned original client')
    pe = pefile.PE(str(binary))
    expected = {0x26c9c6: b'SDL_free', 0x26c9cc: b'SDL_SetMainReady',
                0x26c9d2: b'SDL_iconv_string', 0x26c9d8: b'SDL_wcslen',
                0x26c9de: b'SDL_calloc'}
    imports = {i.address: i.name for d in pe.DIRECTORY_ENTRY_IMPORT for i in d.imports}
    for rva, name in expected.items():
        code = pe.get_data(rva, 6)
        target = pe.OPTIONAL_HEADER.ImageBase + rva + 6 + int.from_bytes(code[2:], 'little', signed=True)
        if code[:2] != b'\xff\x25' or imports.get(target) != name:
            raise ValueError('SDL startup thunk changed')
    if pe.get_data(0x1074, 24) != bytes.fromhex('8b442440ba0800000048896c2450ffc04863c8e852b92600'):
        raise ValueError('Original calloc argument setup changed')
    if pe.get_data(0x29389c, 6) != b'UTF-8\0' or pe.get_data(0x2938a8, 9) != b'UTF-16LE\0':
        raise ValueError('Original command-line encoding strings changed')
    if source.count(START) != 1 or source.count(END) != 1:
        raise ValueError('Startup function inventory changed')
    start, end = source.index(START), source.index(END)
    old = source[start:end]
    if any(old.count(name.encode() + b'()') != count for name, count in
           [('sub_14026C9DE', 1), ('sub_14026C9D8', 1), ('sub_14026C9D2', 1),
            ('sub_14026C9CC', 1), ('sub_14026C9C6', 2)]):
        raise ValueError('Expected dropped SDL startup arguments changed')
    source = source[:start] + BODY + source[end:]
    source, stores = repair_vector_stores(source, pe)
    return source, {'recovered_startup_argument_bridge': 1,
                    'recovered_startup_unaligned_stores': stores}


def repair_vector_stores(source, pe):
    """Restrict changes to the six original startup MOVDQU destinations."""
    disassembler = Cs(CS_ARCH_X86, CS_MODE_64)
    disassembler.detail = True
    destinations = set()
    for instruction in disassembler.disasm(pe.get_data(0x1330, 0x800), 0x140001330):
        if instruction.mnemonic != 'movdqu':
            continue
        operand = instruction.operands[0]
        if operand.type == X86_OP_MEM and operand.mem.base == X86_REG_RIP:
            destinations.add(instruction.address + instruction.size + operand.mem.disp)
    indices = {179457276, 179457284, 179457254, 179457280, 179457264, 179457268}
    if destinations != {0x140404a6c + 4 * index for index in indices}:
        raise ValueError('Original startup unaligned store inventory changed')
    start = source.index(b'//----- (0000000140001330)')
    end = source.index(b'//----- (', start + 10)
    region = source[start:end]
    pattern = rb'\*\(__m128i \*\)&dword_140404A6C\[(\d+)\] = (_mm_load_si128\([^;]+\));'
    found = set()
    def replace(match):
        index = int(match[1])
        if index not in indices or index in found:
            raise ValueError('Unexpected startup vector store')
        found.add(index)
        return (b'_mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[' + match[1] +
                b'], ' + match[2] + b');')
    region = re.sub(pattern, replace, region)
    if found != indices:
        raise ValueError('Missing startup vector stores')
    return source[:start] + region + source[end:], len(found)
