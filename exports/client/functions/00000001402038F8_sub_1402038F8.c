/* Address: 0x1402038f8 | Name: sub_1402038F8 | Size: 52 bytes */
DName *__fastcall sub_1402038F8(DName *a1, struct DName *a2)
{
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
  {
    ++*(_QWORD *)&dword_140404A6C[19064555];
    sub_1401FE2A4(a1, a2);
  }
  else
  {
    sub_1402013D0(a1, a2);
  }
  return a1;
}

