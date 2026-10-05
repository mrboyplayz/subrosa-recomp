/* Address: 0x1401fe9bc | Name: sub_1401FE9BC | Size: 108 bytes */
__int64 __fastcall sub_1401FE9BC(__int64 a1, char a2)
{
  _BYTE *v4; // rax

  if ( *(char *)(a1 + 8) <= 1 && a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      v4 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
      if ( v4 )
      {
        v4[8] = a2;
        *(_QWORD *)v4 = off_1402846F0;
      }
      sub_1401FDE58((__int64 *)a1, (__int64)v4);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      sub_1401FFB98((#89 *)a1, a2);
    }
  }
  return a1;
}

