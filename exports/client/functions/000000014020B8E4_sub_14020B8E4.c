/* Address: 0x14020b8e4 | Name: sub_14020B8E4 | Size: 88 bytes */
__int64 __fastcall sub_14020B8E4(__int64 *a1, char *a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax

  v3 = 0;
  if ( a1 )
  {
    v5 = sub_14020B6A0(a2, a3);
    *a1 = v5;
    if ( !v5 )
      return (unsigned int)*errno();
  }
  else
  {
    v3 = 22;
    *errno() = 22;
    sub_14024CF6C();
  }
  return v3;
}

