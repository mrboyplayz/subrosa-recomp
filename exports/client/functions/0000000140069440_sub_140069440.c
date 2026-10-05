/* Address: 0x140069440 | Name: sub_140069440 | Size: 269 bytes */
__int64 sub_140069440()
{
  int v0; // eax
  unsigned int v1; // ebx
  unsigned int v2; // edi
  char *v3; // rax
  int v4; // r8d
  char *v5; // rdx
  char v6; // cl
  int v7; // eax
  char *v8; // rax
  int v9; // r8d
  char *v10; // rdx
  char v11; // cl
  __int64 result; // rax

  v0 = MEMORY[0x140198E7B](0);
  v1 = 0;
  *(_QWORD *)&dword_140404A6C[18198670] = 0x746C7561666544LL;
  v2 = 0;
  if ( v0 < 0 )
    v0 = 0;
  dword_140404A6C[18198669] = v0;
  if ( v0 > 0 )
  {
    do
    {
      v3 = (char *)MEMORY[0x140198E81](v2, 0);
      v4 = v2 + 1;
      v5 = (char *)&dword_140404A6C[1] + ((__int64)(int)v2 << 9) - (_QWORD)v3;
      do
      {
        v6 = *v3;
        v3[(_QWORD)v5 + 72795188] = *v3;
        ++v3;
      }
      while ( v6 );
      v0 = dword_140404A6C[18198669];
      ++v2;
    }
    while ( v4 < (int)dword_140404A6C[18198669] );
  }
  dword_140404A6C[18198669] = v0 + 1;
  v7 = MEMORY[0x140198E7B](1);
  *(_QWORD *)&dword_140404A6C[18206865] = 0x746C7561666544LL;
  if ( v7 < 0 )
    v7 = 0;
  dword_140404A6C[18206864] = v7;
  if ( v7 > 0 )
  {
    do
    {
      v8 = (char *)MEMORY[0x140198E81](v1, 1);
      v9 = v1 + 1;
      v10 = (char *)&dword_140404A6C[1] + ((__int64)(int)v1 << 9) - (_QWORD)v8;
      do
      {
        v11 = *v8;
        v8[(_QWORD)v10 + 72827968] = *v8;
        ++v8;
      }
      while ( v11 );
      v7 = dword_140404A6C[18206864];
      ++v1;
    }
    while ( v9 < (int)dword_140404A6C[18206864] );
  }
  result = (unsigned int)(v7 + 1);
  dword_140404A6C[18206864] = result;
  return result;
}

