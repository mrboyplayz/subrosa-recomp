/* Address: 0x14025fcb4 | Name: sub_14025FCB4 | Size: 54 bytes */
__int64 __fastcall sub_14025FCB4(_QWORD *a1)
{
  if ( a1 && *(_QWORD *)&dword_140404A6C[19065833] )
  {
    *a1 = *(_QWORD *)&dword_140404A6C[19065833];
    return 0;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 22;
  }
}

