/* Address: 0x1401fdf84 | Name: sub_1401FDF84 | Size: 161 bytes */
void __fastcall sub_1401FDF84(__int64 a1, char *a2, int a3)
{
  _BYTE *v6; // rax
  char v7; // cl

  if ( a2 && a3 > 0 )
  {
    if ( a3 == 1 )
    {
      v6 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
      if ( v6 )
      {
        v7 = *a2;
        *(_QWORD *)v6 = off_1402846F0;
        v6[8] = v7;
        goto LABEL_8;
      }
    }
    else
    {
      v6 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x18u);
      if ( v6 )
      {
        *((_QWORD *)v6 + 1) = a2;
        *(_QWORD *)v6 = &off_140284718;
        *((_DWORD *)v6 + 4) = a3;
LABEL_8:
        *(_QWORD *)a1 = v6;
        return;
      }
    }
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 3;
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 2;
  }
}

