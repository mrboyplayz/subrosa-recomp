/* Address: 0x140202784 | Name: sub_140202784 | Size: 98 bytes */
DName *__fastcall sub_140202784(DName *a1)
{
  const char *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  if ( **(_BYTE **)&dword_140404A6C[19064555] == 95 && *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL) == 69 )
  {
    v4 = 9;
    *(_QWORD *)&dword_140404A6C[19064555] += 2LL;
    v3 = " noexcept";
    sub_1401FE248(a1, (const struct StringLiteral *)&v3);
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
  }
  return a1;
}

