/* Address: 0x1400722c0 | Name: sub_1400722C0 | Size: 301 bytes */
__int64 sub_1400722C0()
{
  signed int v0; // r11d
  unsigned __int64 v1; // r9
  int v2; // ebp
  signed int v3; // ebx
  unsigned int v4; // r14d
  signed int v5; // edx
  __int64 v6; // rax
  unsigned int *v7; // r8
  signed int v8; // r10d
  unsigned int *v9; // rsi
  unsigned int *v10; // rdi
  signed int v11; // eax
  unsigned __int64 v12; // rcx
  char v13; // al
  __int64 result; // rax

  v0 = dword_140404A6C[70318066];
  v1 = -1;
  v2 = 0;
  v3 = dword_140404A6C[70318066];
  v4 = 0;
  v5 = 0;
  v6 = -1;
  do
    ++v6;
  while ( *((_BYTE *)&dword_140404A6C[70318069] + v6) );
  v7 = &dword_140404A6C[70322165];
  if ( v6 )
  {
    v8 = dword_140404A6C[70318065];
    v9 = &dword_140404A6C[70318069];
    v10 = &dword_140404A6C[70322165];
    do
    {
      if ( v5 < v8 )
      {
        if ( v5 < v0 )
          goto LABEL_13;
      }
      else if ( v5 < v0 )
      {
        goto LABEL_10;
      }
      if ( v5 < v8 )
      {
LABEL_10:
        v11 = v5;
        v4 = 1;
        if ( v3 <= v5 )
          v11 = v3;
        v3 = v11;
        goto LABEL_14;
      }
LABEL_13:
      ++v2;
      *(_BYTE *)v10 = *(_BYTE *)v9;
      v10 = (unsigned int *)((char *)v10 + 1);
      v0 = dword_140404A6C[70318066];
      v8 = dword_140404A6C[70318065];
LABEL_14:
      ++v5;
      v12 = -1;
      v9 = (unsigned int *)((char *)v9 + 1);
      do
        ++v12;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v12) );
    }
    while ( v5 < v12 );
  }
  *((_BYTE *)&dword_140404A6C[70322165] + v2) = 0;
  do
  {
    v13 = *(_BYTE *)v7;
    *((_BYTE *)v7 - 0x4000) = *(_BYTE *)v7;
    v7 = (unsigned int *)((char *)v7 + 1);
  }
  while ( v13 );
  dword_140404A6C[70318066] = v3;
  do
    ++v1;
  while ( *((_BYTE *)&dword_140404A6C[70318069] + v1) );
  result = v4;
  if ( v3 > v1 )
    v3 = v1;
  dword_140404A6C[70318066] = v3;
  dword_140404A6C[70318065] = v3;
  return result;
}

