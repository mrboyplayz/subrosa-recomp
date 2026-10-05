/* Address: 0x14020b6a0 | Name: sub_14020B6A0 | Size: 185 bytes */
__int64 __fastcall sub_14020B6A0(char *a1, _BYTE *a2)
{
  __int64 v4; // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !*a2 )
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0;
  }
  if ( !*a1 )
  {
    *errno() = 22;
    return 0;
  }
  sub_140250604(&v5);
  if ( !v5 )
  {
    *errno() = 24;
    return 0;
  }
  v4 = sub_140251044(a1);
  if ( !v4 )
    MEMORY[0x14025065C](v5);
  sub_14020B5EC(v5);
  return v4;
}

