/* Address: 0x14006cca0 | Name: sub_14006CCA0 | Size: 235 bytes */
void __fastcall sub_14006CCA0(unsigned __int8 *a1, float a2)
{
  int v2; // r10d
  signed int v4; // ebx
  unsigned int *v5; // r11
  unsigned int *v6; // rdi
  unsigned __int8 *v7; // rax
  int v8; // ecx
  int v9; // edx
  __int64 v10; // rdx
  char *v11; // rdx
  unsigned __int8 v12; // al
  __int64 v13; // rcx

  v2 = 0;
  v4 = -1;
  if ( (int)dword_140404A6C[135034429] <= 0 )
    goto LABEL_11;
  v5 = &dword_140404A6C[135034462];
  v6 = &dword_140404A6C[135034430];
  do
  {
    if ( *v5 == 1 )
    {
      v7 = a1;
      do
      {
        v8 = v7[(char *)v6 - (char *)a1];
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
    v6 += 35;
    v5 += 35;
  }
  while ( v2 < (int)dword_140404A6C[135034429] );
  if ( v4 == -1 )
  {
LABEL_11:
    if ( (int)dword_140404A6C[135034429] >= 128 )
      return;
    v4 = dword_140404A6C[135034429];
    v10 = 140LL * (int)dword_140404A6C[135034429]++ - (_QWORD)a1;
    v11 = (char *)&dword_140404A6C[135034429] + v10;
    do
    {
      v12 = *a1;
      a1[(_QWORD)v11 + 4] = *a1;
      ++a1;
    }
    while ( v12 );
  }
  v13 = 35LL * v4;
  *(float *)&dword_140404A6C[v13 + 135034464] = a2;
  dword_140404A6C[v13 + 135034462] = 1;
}

