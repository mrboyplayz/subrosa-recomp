"""Recover matrix scratch storage, unaligned stores and preserved native RAX."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014007A0E0)'
BODY=b'''__int64 sub_14007A0E0(_OWORD *a1,__int64 a2,__int64 a3)
{
  float left[16],right[16],result[16];
  memcpy(left,(const void *)(uintptr_t)a2,64);
  memcpy(right,(const void *)(uintptr_t)a3,64);
  for(int row=0;row<4;row++)for(int column=0;column<4;column++)
  {
    float p0=left[row*4]*right[column];
    float p1=left[row*4+1]*right[column+4];
    float p2=left[row*4+2]*right[column+8];
    float p3=left[row*4+3]*right[column+12];
    result[row*4+column]=((p0+p1)+p2)+p3;
  }
  memcpy(a1,result,64);
  /* Native scalar loop leaves RAX at right+48; cookie checker preserves it. */
  return a3+48;
}
'''
def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Matrix recovery requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x7a192,4)!=bytes.fromhex('410f1102') or pe.get_data(0x7a1b7,5)!=bytes.fromhex('e864e91700'):
        raise ValueError('Native matrix stores/epilogue changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));region=source[a:b]
    if region.count(b'return sub_1401F8B20')!=1:raise ValueError('Matrix cookie inventory changed')
    return source[:a]+MARKER+b'\n'+BODY+source[b:],{'recovered_matrix_multiply':1}
