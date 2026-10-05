/* Address: 0x140205354 | Name: sub_140205354 | Size: 117 bytes */
DName *__fastcall sub_140205354(DName *a1)
{
  const char *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( **(_BYTE **)&dword_140404A6C[19064555] == 65 )
    {
      v4 = 6;
      ++*(_QWORD *)&dword_140404A6C[19064555];
      v3 = "{flat}";
      sub_1401FE248(a1, (const struct StringLiteral *)&v3);
    }
    else
    {
      *((_DWORD *)a1 + 2) = 0;
      *((_BYTE *)a1 + 8) = 2;
      *(_QWORD *)a1 = 0;
    }
  }
  else
  {
    *((_DWORD *)a1 + 2) = 0;
    *(_QWORD *)a1 = &off_1402848D0;
  }
  return a1;
}

