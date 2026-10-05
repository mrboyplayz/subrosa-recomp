/* Address: 0x1401ffb98 | Name: sub_1401FFB98 | Size: 80 bytes */
void __fastcall sub_1401FFB98(#89 *this, char a2)
{
  _BYTE *v4; // rax

  if ( a2 )
  {
    v4 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
    if ( v4 )
    {
      v4[8] = a2;
      *(_QWORD *)v4 = off_1402846F0;
      *(_QWORD *)this = v4;
    }
    else
    {
      *(_QWORD *)this = 0;
      *((_BYTE *)this + 8) = 3;
    }
  }
}

