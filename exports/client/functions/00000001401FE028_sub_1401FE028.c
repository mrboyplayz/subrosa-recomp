/* Address: 0x1401fe028 | Name: sub_1401FE028 | Size: 149 bytes */
void __fastcall sub_1401FE028(__int64 a1, char *a2, signed int a3)
{
  void *v6; // rax
  _BYTE *v7; // rax
  char v8; // cl

  if ( !a2 || a3 <= 0 )
  {
    *(_BYTE *)(a1 + 8) = 2;
    return;
  }
  if ( a3 == 1 )
  {
    v7 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
    if ( v7 )
    {
      v8 = *a2;
      *(_QWORD *)v7 = off_1402846F0;
      v7[8] = v8;
      goto LABEL_9;
    }
  }
  else
  {
    v6 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x18u);
    if ( v6 )
    {
      v7 = (_BYTE *)sub_1401FDC38((__int64)v6, (__int64)a2, a3);
      goto LABEL_9;
    }
  }
  v7 = nullptr;
LABEL_9:
  *(_QWORD *)a1 = v7;
  if ( !v7 )
    *(_BYTE *)(a1 + 8) = 3;
}

