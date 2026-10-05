/* Address: 0x1401fe888 | Name: sub_1401FE888 | Size: 126 bytes */
__int64 __fastcall sub_1401FE888(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  char *v5; // rcx
  int v6; // edx

  if ( *(char *)(a1 + 8) <= 1 && *(int *)(a2 + 8) > 0 )
  {
    if ( *(_QWORD *)a1 )
    {
      v4 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x18u);
      if ( v4 )
      {
        v5 = *(char **)a2;
        v6 = *(_DWORD *)(a2 + 8);
        *v4 = &off_140284718;
        v4[1] = v5;
        *((_DWORD *)v4 + 4) = v6;
      }
      sub_1401FDF20((__int64 *)a1, (__int64)v4);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      sub_1401FDF84(a1, *(char **)a2, *(_DWORD *)(a2 + 8));
    }
  }
  return a1;
}

