/* Address: 0x1400dbf10 | Name: sub_1400DBF10 | Size: 156 bytes */
__int64 __fastcall sub_1400DBF10(int a1, char *a2, int a3, int a4)
{
  __int64 v4; // rdi
  char *v5; // r10
  __int64 v6; // rcx
  int v7; // ebx
  char *v9; // rcx

  v4 = 65552LL * a1;
  v5 = a2;
  if ( *(int *)((char *)&qword_19A257E20 + v4 + 4) > 0 )
  {
    ++*(int *)((char *)&qword_19A257E20 + v4);
    *(int *)((char *)&qword_19A257E20 + v4 + 4) = 0;
  }
  v6 = *(int *)((char *)&qword_19A257E20 + v4);
  v7 = a4 * a3;
  if ( (int)v6 + a4 * a3 >= 0x10000 )
    return 0;
  if ( *(int *)((char *)&qword_19A257E20 + v4 + 12) )
  {
    a2 = &dword_19A257E30[v4 + v6];
    v9 = v5;
  }
  else
  {
    v9 = &dword_19A257E30[v4 + v6];
  }
  memcpy(v9, a2, v7);
  *(int *)((char *)&qword_19A257E20 + v4) += v7;
  return 1;
}

