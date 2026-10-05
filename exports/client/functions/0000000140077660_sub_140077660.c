/* Address: 0x140077660 | Name: sub_140077660 | Size: 169 bytes */
__int64 __fastcall sub_140077660(char a1)
{
  unsigned int v2; // eax
  unsigned int *v3; // rbx
  __int64 v4; // rdi

  if ( QueryPerformanceFrequency((LARGE_INTEGER *)&dword_140404A6C[137297777]) )
  {
    QueryPerformanceCounter((LARGE_INTEGER *)&dword_140404A6C[137297779]);
    dword_140404A6C[137297775] = 1;
  }
  v2 = dword_140404A6C[137297769];
  if ( (a1 & 1) != 0 )
    v2 = 1;
  dword_140404A6C[137297769] = v2;
  if ( (a1 & 2) != 0 )
  {
    MEMORY[0x140199043](257, &dword_140404A6C[129454453]);
    dword_140404A6C[137297774] = 1;
  }
  sub_140077710();
  v3 = &dword_140404A6C[436582486];
  v4 = 2048;
  do
  {
    unk_140404060(1, v3);
    v3 += 42;
    --v4;
  }
  while ( v4 );
  return 1;
}

