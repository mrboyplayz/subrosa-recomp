/* Address: 0x140095910 | Name: sub_140095910 | Size: 99 bytes */
void sub_140095910()
{
  char *v0; // rcx
  int v1; // ebx
  __int64 v2; // rdi

  v0 = *(char **)&dword_140404A6C[18215121];
  if ( *(_QWORD *)&dword_140404A6C[18215121] )
  {
    v1 = 0;
    if ( (int)dword_140404A6C[18215119] > 0 )
    {
      v2 = 0;
      do
      {
        free(*(void **)&v0[v2]);
        v0 = *(char **)&dword_140404A6C[18215121];
        v2 += 8;
        ++v1;
      }
      while ( v1 < (int)dword_140404A6C[18215119] );
    }
    free(v0);
    *(_QWORD *)&dword_140404A6C[18215121] = 0;
  }
}

