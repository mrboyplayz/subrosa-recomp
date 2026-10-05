/* Address: 0x14025a388 | Name: sub_14025A388 | Size: 60 bytes */
__int64 sub_14025A388()
{
  unsigned int v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) < 0 )
    return 1;
  sub_14024EC64((__int64)&v2);
  if ( v2 != 1 )
    return 1;
  return v0;
}

