/* Address: 0x14006cd90 | Name: sub_14006CD90 | Size: 241 bytes */
void __fastcall sub_14006CD90(unsigned __int8 *a1, unsigned int a2)
{
  int v2; // r10d
  signed int v5; // ebx
  unsigned int *v6; // r11
  unsigned int *v7; // rdi
  unsigned __int8 *v8; // rax
  int v9; // ecx
  int v10; // edx
  __int64 v11; // rdx
  char *v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // rcx

  v2 = 0;
  v5 = -1;
  if ( (int)dword_140404A6C[135034429] <= 0 )
    goto LABEL_11;
  v6 = &dword_140404A6C[135034462];
  v7 = &dword_140404A6C[135034430];
  do
  {
    if ( !*v6 )
    {
      v8 = a1;
      do
      {
        v9 = v8[(char *)v7 - (char *)a1];
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
    v7 += 35;
    v6 += 35;
  }
  while ( v2 < (int)dword_140404A6C[135034429] );
  if ( v5 == -1 )
  {
LABEL_11:
    if ( (int)dword_140404A6C[135034429] >= 128 )
      return;
    v5 = dword_140404A6C[135034429];
    v11 = 140LL * (int)dword_140404A6C[135034429]++ - (_QWORD)a1;
    v12 = (char *)&dword_140404A6C[135034429] + v11;
    do
    {
      v13 = *a1;
      a1[(_QWORD)v12 + 4] = *a1;
      ++a1;
    }
    while ( v13 );
  }
  v14 = 35LL * v5;
  dword_140404A6C[v14 + 135034462] = 0;
  dword_140404A6C[v14 + 135034463] = a2;
}

