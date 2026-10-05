/* Address: 0x14009e950 | Name: sub_14009E950 | Size: 195 bytes */
float __fastcall sub_14009E950(__int64 a1, __int64 a2, double a3)
{
  int i; // ecx
  char v4; // dl
  int v5; // r9d
  __int64 v6; // rdx
  char v7; // cl
  float v9; // [rsp+30h] [rbp+8h]

  for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
  {
    v4 = *((_BYTE *)&dword_140404A6C[293250415] + i);
    if ( v4 != 47 && v4 > 44 && v4 < 58 )
      break;
  }
  v5 = 0;
  if ( i < (int)dword_140404A6C[293250414] )
  {
    v6 = 0;
    do
    {
      if ( v6 >= 255 )
        break;
      v7 = *((_BYTE *)&dword_140404A6C[293250415] + i);
      if ( (unsigned __int8)(v7 - 48) > 9u && (unsigned __int8)(v7 - 45) > 1u )
        break;
      *((_BYTE *)&dword_140404A6C[293512559] + v6) = v7;
      ++v5;
      ++v6;
      i = ++dword_140404A6C[293250413];
    }
    while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
  }
  *((_BYTE *)&dword_140404A6C[293512559] + v5) = 0;
  sub_14015B070(&dword_140404A6C[293512559], "%f", a3);
  return v9;
}

