/* Address: 0x14025fcec | Name: sub_14025FCEC | Size: 54 bytes */
__int64 __fastcall sub_14025FCEC(_QWORD *a1)
{
  if ( a1 && *(_QWORD *)&dword_140404A6C[19065835] )
  {
    *a1 = *(_QWORD *)&dword_140404A6C[19065835];
    return 0;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 22;
  }
}

