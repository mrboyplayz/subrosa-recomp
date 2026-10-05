/* Address: 0x1400472c0 | Name: sub_1400472C0 | Size: 235 bytes */
void __fastcall sub_1400472C0(unsigned __int8 *a1, float a2)
{
  int v2; // r10d
  int v4; // ebx
  _DWORD *v5; // r11
  char *v6; // rdi
  unsigned __int8 *v7; // rax
  int v8; // ecx
  int v9; // edx
  __int64 v10; // rdx
  char *v11; // rdx
  unsigned __int8 v12; // al
  __int64 v13; // rcx

  v2 = 0;
  v4 = -1;
  if ( dword_1962999A0[0] <= 0 )
    goto LABEL_11;
  v5 = &unk_196299A24;
  v6 = (char *)&unk_1962999A4;
  do
  {
    if ( *v5 == 1 )
    {
      v7 = a1;
      do
      {
        v8 = v7[v6 - (char *)a1];
        v9 = *v7 - v8;
        if ( v9 )
          break;
        ++v7;
      }
      while ( v8 );
      if ( !v9 )
        v4 = v2;
    }
    ++v2;
    v6 += 140;
    v5 += 35;
  }
  while ( v2 < dword_1962999A0[0] );
  if ( v4 == -1 )
  {
LABEL_11:
    if ( dword_1962999A0[0] >= 128 )
      return;
    v4 = dword_1962999A0[0];
    v10 = 140LL * dword_1962999A0[0]++ - (_QWORD)a1;
    v11 = (char *)dword_1962999A0 + v10;
    do
    {
      v12 = *a1;
      a1[(_QWORD)v11 + 4] = *a1;
      ++a1;
    }
    while ( v12 );
  }
  v13 = 35LL * v4;
  *(float *)&dword_1962999A0[v13 + 35] = a2;
  dword_1962999A0[v13 + 33] = 1;
}

