/* Address: 0x1401fe5ec | Name: sub_1401FE5EC | Size: 118 bytes */
__int64 __fastcall sub_1401FE5EC(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax

  v2 = a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v4 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
    if ( v4 )
    {
      *v4 = &off_140284740;
      if ( (unsigned __int8)(*(_BYTE *)(v2 + 8) - 2) <= 1u )
        v2 = 0;
      v4[1] = v2;
      *(_QWORD *)a1 = v4;
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 8) = 3;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 3;
  }
  return a1;
}

