"""Restore _getdrive's real wide buffer, allocation ABI and EDI return."""
import hashlib
from pathlib import Path
import pefile

PROJECT = Path(__file__).resolve().parent.parent
PIN = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'
START = b'//----- (000000014026426C)'
END = b'//----- (0000000140264364)'
BODY = b'''//----- (000000014026426C) ----------------------------------------------------
int getdrive()
{
  wchar_t buffer[261] = {0};
  wchar_t *path = buffer;
  wchar_t *allocated = NULL;
  unsigned int count = GetCurrentDirectoryW(261, buffer);
  unsigned int drive = 0;
  if (count > 260)
  {
    unsigned int capacity = count + 1;
    allocated = (wchar_t *)(uintptr_t)sr_directory_calloc(capacity, 2);
    path = allocated;
    if (!allocated || !GetCurrentDirectoryW(capacity, allocated))
    {
      *errno_sr() = 12;
      path = NULL;
    }
  }
  if (path && path[0] && path[1] == L':')
  {
    unsigned int letter = (unsigned short)path[0];
    if (letter - 97u <= 25u)
      letter -= 32u;
    drive = letter - 64u;
  }
  if (count > 260)
    free_base(allocated);
  /* The original cookie check preserves EAX; the C return is the EDI drive. */
  return (int)drive;
}

'''


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Directory recovery requires pinned original client')
    pe = pefile.PE(str(binary), fast_load=True)
    if pe.get_data(0x264290, 18) != bytes.fromhex('33d2488d4c242041b80a020000e88e8af9ff'):
        raise ValueError('Original 522-byte directory buffer setup changed')
    if pe.get_data(0x2642e0, 15) != bytes.fromhex('8d7001ba020000008bcee8a99cfeff33')[:15]:
        raise ValueError('Original directory calloc count/width changed')
    start, end = source.index(START), source.index(END)
    old = source[start:end]
    if b'__int16 Buffer;' not in old or b'return sub_1401F8B20' not in old:
        raise ValueError('Expected malformed directory function changed')
    # Preserve the recovered CRT heap/errno/new-handler policy, but give this
    # scoped allocator its actual RCX count and RDX element-width arguments.
    begin = source.index(b'//----- (000000014024DF98)')
    finish = source.index(b'//----- (', begin + 10)
    original_allocator = source[begin:finish]
    normalized_allocator = original_allocator.replace(b'\r\n', b'\n')
    if (normalized_allocator.count(b'  unsigned __int64 v0; // rdx\n') != 1 or
            normalized_allocator.count(b'  unsigned __int64 v1; // rcx\n') != 1 or
            normalized_allocator.count(b'calloc_base()') != 1):
        raise ValueError('Expected allocator register locals changed')
    allocator = original_allocator.replace(b'calloc_base()',
        b'sr_directory_calloc(unsigned __int64 v1, unsigned __int64 v0)', 1)
    allocator = allocator.replace(b'  unsigned __int64 v0; // rdx\r\n', b'')
    allocator = allocator.replace(b'  unsigned __int64 v1; // rcx\r\n', b'')
    allocator = allocator.replace(b'  unsigned __int64 v0; // rdx\n', b'')
    allocator = allocator.replace(b'  unsigned __int64 v1; // rcx\n', b'')
    if allocator.count(b'sr_directory_calloc(') != 1:
        raise ValueError('Directory allocator inventory changed')
    allocator = b'/* Scoped typed recovery of allocator 0x14024DF98. */\n' + allocator.split(b'\n', 1)[1]
    return source[:start] + allocator + BODY + source[end:], {
        'recovered_directory_buffer': 1,
        'recovered_directory_allocator_abi': 1,
        'recovered_directory_drive_return': 1}
