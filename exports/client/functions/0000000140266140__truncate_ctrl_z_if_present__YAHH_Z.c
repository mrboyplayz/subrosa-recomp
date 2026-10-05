/* Address: 0x140266140 | Name: ?truncate_ctrl_z_if_present@@YAHH@Z | Size: 193 bytes */
__int64 __fastcall truncate_ctrl_z_if_present(int a1)
{
  __int64 v1; // rbx
  char v2; // cl
  __int16 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  v2 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v1 >> 6) + 19065401] + 72 * (v1 & 0x3F) + 56);
  if ( (v2 & 0x48) == 0 && v2 < 0 )
  {
    if ( lseeki64_nolock((unsigned int)v1, -1, 2) == -1 )
    {
      if ( *(_DWORD *)sub_14024D19C() != 131 )
        return (unsigned int)*errno();
    }
    else
    {
      v4 = 0;
      if ( !(unsigned int)read_nolock(v1, &v4, 1u) && v4 == 26 && (unsigned int)chsize_nolock(v1) == -1
        || lseeki64_nolock((unsigned int)v1, 0, 0) == -1 )
      {
        return (unsigned int)*errno();
      }
    }
  }
  return 0;
}

