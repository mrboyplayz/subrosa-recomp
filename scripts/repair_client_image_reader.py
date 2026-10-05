"""Recover the file image loader's contiguous STB reader and return value."""
import hashlib
import struct
import pefile
from repair_client_startup_arguments import PROJECT, PIN

PREFIX = b'''typedef struct {
  unsigned char header[16];
  int (*read)(void *, char *, int);
  void (*skip)(void *, int);
  int (*eof)(void *);
  void *user;
  int active, capacity;
  char buffer[128];
  int consumed;
  unsigned int padding;
  char *current, *end, *original, *original_end;
} sr_image_reader;
_Static_assert(sizeof(sr_image_reader)==224 && offsetof(sr_image_reader,read)==16 &&
  offsetof(sr_image_reader,user)==40 && offsetof(sr_image_reader,buffer)==56 &&
  offsetof(sr_image_reader,consumed)==184 && offsetof(sr_image_reader,current)==192 &&
  offsetof(sr_image_reader,original_end)==216,"native image reader layout");
'''
BODY = b'''//----- (0000000140170C30) ----------------------------------------------------
__int64 sub_140170C30(char *a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  __int64 file;
  __int64 decoded;
  sr_image_reader reader;
  int opened = sub_14020B8E4(&file, a1, "rb");
  if (opened) file=0;
  if (!file) {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u)+8LL*dword_140404A6C[19064470])+16LL) =
      (uint64)(uintptr_t)("can't fopen");
    return 0;
  }
  reader.read=(int (*)(void *,char *,int))sub_1400012A0;
  reader.skip=(void (*)(void *,int))sub_1400012C0;
  reader.eof=(int (*)(void *))sub_140001300;
  reader.user=(void *)(uintptr_t)file;
  reader.capacity=128;
  reader.active=1;
  reader.consumed=0;
  reader.current=reader.original=reader.buffer;
  int count=reader.read(reader.user,reader.buffer,128);
  if (!count) {
    reader.active=0;
    reader.buffer[0]=0;
    count=1;
  }
  reader.end=reader.original_end=reader.buffer+count;
  decoded=(__int64)(uintptr_t)sub_140166160((__int64)(uintptr_t)&reader,a2,a3,a4,a5);
  if (decoded)
    sub_14020C4A8(file,(unsigned int)((uintptr_t)reader.current-(uintptr_t)reader.end),1u);
  sub_14020B9E8(file);
  return decoded;
}
'''


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('Image reader requires pinned original')
    pe=pefile.PE(str(binary),fast_load=True)
    if struct.unpack('<3Q',pe.get_data(0x301820,24))!=(0x1400012a0,0x1400012c0,0x140001300):
        raise ValueError('Native image callbacks changed')
    if pe.get_data(0x170d62,10)!=bytes.fromhex('488d4c2440e8f453ffff'):
        raise ValueError('Native image reader context call changed')
    if pe.get_data(0x170d90,3)!=bytes.fromhex('488bc7'):
        raise ValueError('Native image reader return changed')
    marker=b'//----- (0000000140170C30)'
    start=source.index(marker)
    end=source.index(b'//----- (',start+len(marker))
    source=source[:start]+PREFIX+BODY+source[end:]
    return source,{'recovered_image_reader_layout':224,'recovered_image_reader_callbacks':3,
                   'recovered_image_reader_return':1}
