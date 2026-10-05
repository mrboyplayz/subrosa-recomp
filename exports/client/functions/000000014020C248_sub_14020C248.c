/* Address: 0x14020c248 | Name: sub_14020C248 | Size: 108 bytes */
__int64 __fastcall sub_14020C248(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  unsigned int v8; // edi

  if ( a1 && a3 <= 2 )
  {
    sub_14020B5E0(a1);
    v8 = sub_14020C398(a1, a2, a3);
    sub_14020B5EC(a1);
    return v8;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v6);
    return 0xFFFFFFFFLL;
  }
}

