/* Address: 0x14020b878 | Name: sub_14020B878 | Size: 88 bytes */
__int64 __fastcall sub_14020B878(__int64 *a1, #49 *a2, _WORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax

  v3 = 0;
  if ( a1 )
  {
    v5 = sub_14020B75C(a2, a3);
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

