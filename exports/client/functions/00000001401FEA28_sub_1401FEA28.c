/* Address: 0x1401fea28 | Name: sub_1401FEA28 | Size: 147 bytes */
__int64 __fastcall sub_1401FEA28(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax

  v2 = a2;
  if ( *(char *)(a1 + 8) <= 1 && a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      if ( *(_BYTE *)(a2 + 8) <= 1u )
      {
        v4 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
        if ( v4 )
        {
          *v4 = &off_140284740;
          if ( (unsigned __int8)(*(_BYTE *)(v2 + 8) - 2) <= 1u )
            v2 = 0;
          v4[1] = v2;
        }
        else
        {
          v4 = nullptr;
        }
        sub_1401FDEBC((__int64 *)a1, (__int64)v4);
      }
      else
      {
        sub_1401FEABC(a1, (unsigned int)*(char *)(a2 + 8));
      }
    }
    else
    {
      sub_1401FE5EC(a1, a2);
    }
  }
  return a1;
}

