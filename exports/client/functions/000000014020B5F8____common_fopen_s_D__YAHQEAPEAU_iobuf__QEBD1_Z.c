/* Address: 0x14020b5f8 | Name: ??$common_fopen_s@D@@YAHQEAPEAU_iobuf@@QEBD1@Z | Size: 83 bytes */
__int64 __fastcall common_fopen_s<char>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax

  if ( a1 )
  {
    v5 = sub_14020B6A0(a2, a3, 128);
    *a1 = v5;
    if ( v5 )
      return 0;
    else
      return (unsigned int)*errno();
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 22;
  }
}

