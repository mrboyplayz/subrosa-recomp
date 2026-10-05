/* Address: 0x1402462e4 | Name: _initialize_narrow_environment_0 | Size: 108 bytes */
__int64 initialize_narrow_environment_0()
{
  unsigned int v0; // edi
  char *v2; // rax
  char *v3; // rbx
  __int64 v4; // rax

  v0 = 0;
  if ( *(_QWORD *)&dword_140404A6C[19064861] )
    return 0;
  sub_14025F520();
  v2 = (char *)sub_14025FDC4();
  v3 = v2;
  if ( v2 )
  {
    v4 = sub_140246428(v2);
    if ( v4 )
    {
      *(_QWORD *)&dword_140404A6C[19064867] = v4;
      *(_QWORD *)&dword_140404A6C[19064861] = v4;
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

