/* Address: 0x14020c520 | Name: sub_14020C520 | Size: 84 bytes */
__int64 __fastcall sub_14020C520(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rdi

  if ( a1 )
  {
    sub_14020B5E0(a1);
    v4 = ftelli64_nolock_0(a1);
    sub_14020B5EC(a1);
    return v4;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v2);
    return -1;
  }
}

