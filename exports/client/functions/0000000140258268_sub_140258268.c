/* Address: 0x140258268 | Name: sub_140258268 | Size: 93 bytes */
__int64 __fastcall sub_140258268(__int64 a1)
{
  __int64 v3; // rbx

  if ( a1 && (unsigned __int64)strnlen(a1, 0x7FFF) < 0x7FFF )
  {
    sub_140258B64(11);
    v3 = sub_140258328(a1);
    sub_140258BB8(11);
    return v3;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0;
  }
}

