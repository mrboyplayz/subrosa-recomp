/* Address: 0x140166d20 | Name: sub_140166D20 | Size: 276 bytes */
__int64 __fastcall sub_140166D20(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rax
  char *v14; // rax

  v9 = a5;
  if ( (unsigned int)sub_140162BB0(a1, (__int64)a2) )
  {
    v10 = sub_1401623E0(a1, a2, a3, a4, a5);
    if ( v10 )
    {
      v11 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      if ( *(_DWORD *)(v11 + 8) ? *(_DWORD *)(v11 + 12) : dword_140404A6C[18215120] )
      {
        if ( !a5 )
          v9 = *a4;
        sub_14016F470(v10, (unsigned int)*a2, (unsigned int)*a3, (unsigned int)(4 * v9));
      }
    }
    return v10;
  }
  else
  {
    v14 = (char *)sub_140166160(a1, a2, a3, (unsigned int *)a4, a5);
    if ( v14 )
    {
      if ( !a5 )
        v9 = *a4;
      return sub_140165C60(v14, *a2, *a3, v9);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "unknown image type";
      return 0;
    }
  }
}

