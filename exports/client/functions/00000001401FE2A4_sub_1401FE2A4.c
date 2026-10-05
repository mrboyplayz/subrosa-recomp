/* Address: 0x1401fe2a4 | Name: sub_1401FE2A4 | Size: 129 bytes */
DName *__fastcall sub_1401FE2A4(DName *this, struct DName *a2)
{
  char v2; // bl
  struct DName *v3; // rsi
  _QWORD *v5; // r8

  v2 = 0;
  v3 = a2;
  *((_DWORD *)this + 2) = 0;
  if ( a2 )
  {
    v5 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
    if ( v5 )
    {
      *v5 = &off_140284740;
      if ( (unsigned __int8)(*((_BYTE *)v3 + 8) - 2) <= 1u )
        v3 = nullptr;
      v5[1] = v3;
    }
    else
    {
      v5 = nullptr;
    }
    v2 = v5 == nullptr ? 3 : 0;
  }
  else
  {
    v5 = nullptr;
  }
  *(_QWORD *)this = v5;
  *((_BYTE *)this + 8) = v2;
  return this;
}

