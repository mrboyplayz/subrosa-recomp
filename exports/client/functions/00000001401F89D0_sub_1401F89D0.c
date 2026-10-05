/* Address: 0x1401f89d0 | Name: __chkstk | Stack analysis corrected in export snapshot. */
unsigned __int64 __usercall __spoils<> _chkstk@<rax>(unsigned __int64 size@<rax>)
{
  char *v1; // r10
  char *v2; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - size;
  if ( (unsigned __int64)&v3 < size )
    v1 = nullptr;
  v2 = (char *)__readgsqword(0x10u);
  if ( v1 < v2 )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      v2 -= 4096;
      *v2 = 0;
    }
    while ( v1 != v2 );
  }
  return size;
}

