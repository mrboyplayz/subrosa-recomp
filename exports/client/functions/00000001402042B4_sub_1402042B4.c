/* Address: 0x1402042b4 | Name: sub_1402042B4 | Size: 104 bytes */
__int64 __fastcall sub_1402042B4(__int64 a1)
{
  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( !(unsigned int)strncmp(*(_QWORD *)&dword_140404A6C[19064555], "??_C", 4) )
    {
      *(_QWORD *)&dword_140404A6C[19064555] += 4LL;
      sub_1402041A0(a1, 0);
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 8) = 2;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = &off_1402848D0;
  }
  return a1;
}

