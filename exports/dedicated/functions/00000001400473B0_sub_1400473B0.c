/* Address: 0x1400473b0 | Name: sub_1400473B0 | Size: 241 bytes */
void __fastcall sub_1400473B0(unsigned __int8 *a1, int a2)
{
  int v2; // r10d
  int v5; // ebx
  _DWORD *v6; // r11
  char *v7; // rdi
  unsigned __int8 *v8; // rax
  int v9; // ecx
  int v10; // edx
  __int64 v11; // rdx
  char *v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // rcx

  v2 = 0;
  v5 = -1;
  if ( dword_1962999A0[0] <= 0 )
    goto LABEL_11;
  v6 = &unk_196299A24;
  v7 = (char *)&unk_1962999A4;
  do
  {
    if ( !*v6 )
    {
      v8 = a1;
      do
      {
        v9 = v8[v7 - (char *)a1];
        v10 = *v8 - v9;
        if ( v10 )
          break;
        ++v8;
      }
      while ( v9 );
      if ( !v10 )
        v5 = v2;
    }
    ++v2;
    v7 += 140;
    v6 += 35;
  }
  while ( v2 < dword_1962999A0[0] );
  if ( v5 == -1 )
  {
LABEL_11:
    if ( dword_1962999A0[0] >= 128 )
      return;
    v5 = dword_1962999A0[0];
    v11 = 140LL * dword_1962999A0[0]++ - (_QWORD)a1;
    v12 = (char *)dword_1962999A0 + v11;
    do
    {
      v13 = *a1;
      a1[(_QWORD)v12 + 4] = *a1;
      ++a1;
    }
    while ( v13 );
  }
  v14 = 35LL * v5;
  dword_1962999A0[v14 + 33] = 0;
  dword_1962999A0[v14 + 34] = a2;
}

