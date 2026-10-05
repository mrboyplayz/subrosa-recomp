/* Address: 0x140246350 | Name: sub_140246350 | Size: 103 bytes */
__int64 sub_140246350()
{
  unsigned int v0; // edi
  __int64 v2; // rax
  void *v3; // rbx
  __int64 v4; // rax

  v0 = 0;
  if ( *(_QWORD *)&dword_140404A6C[19064863] )
    return 0;
  v2 = sub_14025FEC8();
  v3 = (void *)v2;
  if ( v2 )
  {
    v4 = sub_140246530(v2);
    if ( v4 )
    {
      *(_QWORD *)&dword_140404A6C[19064865] = v4;
      *(_QWORD *)&dword_140404A6C[19064863] = v4;
    }
    else
    {
      v0 = -1;
    }
    free_base(nullptr);
  }
  else
  {
    v0 = -1;
  }
  free_base(v3);
  return v0;
}

