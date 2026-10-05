/* Address: 0x1401fdf20 | Name: sub_1401FDF20 | Size: 98 bytes */
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
void __fastcall sub_1401FDF20(__int64 *a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rdx

  if ( a2 )
  {
    v4 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x20u);
    if ( v4 )
    {
      v5 = *a1;
      v4[6] = -1;
      *(_QWORD *)v4 = &off_140284790;
      *((_QWORD *)v4 + 1) = v5;
      *((_QWORD *)v4 + 2) = a2;
      *a1 = (__int64)v4;
    }
    else
    {
      *a1 = 0;
      *((_BYTE *)a1 + 8) = 3;
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = 3;
  }
}

