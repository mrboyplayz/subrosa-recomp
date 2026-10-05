/* Address: 0x1401feb28 | Name: sub_1401FEB28 | Size: 88 bytes */
int *__fastcall sub_1401FEB28(int *a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rdx

  if ( *a1 != 9 )
  {
    if ( *(_QWORD *)a2 )
    {
      v4 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
      if ( v4 )
      {
        *(_QWORD *)v4 = *(_QWORD *)a2;
        v4[2] = *(_DWORD *)(a2 + 8);
        v5 = *a1;
        *a1 = v5 + 1;
        *(_QWORD *)&a1[2 * v5 + 4] = v4;
      }
    }
  }
  return a1;
}

