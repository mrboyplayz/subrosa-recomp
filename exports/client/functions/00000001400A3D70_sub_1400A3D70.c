/* Address: 0x1400a3d70 | Name: sub_1400A3D70 | Size: 191 bytes */
__int64 sub_1400A3D70()
{
  int i; // ecx
  char v1; // dl
  int v2; // r9d
  __int64 v3; // rdx
  char v4; // cl
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
  {
    v1 = *((_BYTE *)&dword_140404A6C[293250415] + i);
    if ( (unsigned __int8)(v1 - 48) <= 9u )
      break;
    if ( v1 == 45 )
      break;
  }
  v2 = 0;
  if ( i < (int)dword_140404A6C[293250414] )
  {
    v3 = 0;
    do
    {
      if ( v3 >= 255 )
        break;
      v4 = *((_BYTE *)&dword_140404A6C[293250415] + i);
      if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
        break;
      *((_BYTE *)&dword_140404A6C[293512559] + v3) = v4;
      ++v2;
      ++v3;
      i = ++dword_140404A6C[293250413];
    }
    while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
  }
  *((_BYTE *)&dword_140404A6C[293512559] + v2) = 0;
  sub_14015B070(&dword_140404A6C[293512559], "%d", (unsigned int)&v6);
  return v6;
}

