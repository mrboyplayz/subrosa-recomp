/* Address: 0x1401fdc38 | Name: sub_1401FDC38 | Size: 114 bytes */
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall sub_1401FDC38(__int64 a1, __int64 a2, unsigned int a3)
{
  _BYTE *v6; // rax
  _BYTE *v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rcx

  *(_QWORD *)a1 = &off_140284718;
  v6 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], (int)a3);
  *(_QWORD *)(a1 + 8) = v6;
  v7 = v6;
  *(_DWORD *)(a1 + 16) = a3;
  if ( v6 )
  {
    if ( a3 )
    {
      v8 = a2 - (_QWORD)v6;
      v9 = a3;
      do
      {
        *v7 = v7[v8];
        ++v7;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 0;
  }
  return a1;
}

