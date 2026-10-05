/* Address: 0x1402027e8 | Name: sub_1402027E8 | Size: 113 bytes */
__int64 MEMORY[0x1402027E8]()
{
  _BYTE *v0; // rcx
  int v1; // edx
  unsigned int v3; // r8d
  char v4; // al

  v0 = *(_BYTE **)&dword_140404A6C[19064555];
  v1 = (char)**(_BYTE **)&dword_140404A6C[19064555];
  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
    return 0;
  if ( (unsigned __int8)(v1 - 48) > 9u )
  {
    v3 = 0;
    while ( (_BYTE)v1 != 64 )
    {
      if ( !(_BYTE)v1 )
        return 0;
      if ( (unsigned __int8)(v1 - 65) > 0xFu )
        return 0xFFFFFFFFLL;
      v3 = (char)v1 + 16 * v3 - 65;
      *(_QWORD *)&dword_140404A6C[19064555] = ++v0;
      LOBYTE(v1) = *v0;
    }
    v4 = *v0;
    *(_QWORD *)&dword_140404A6C[19064555] = v0 + 1;
    if ( v4 != 64 )
      return 0xFFFFFFFFLL;
    return v3;
  }
  else
  {
    ++*(_QWORD *)&dword_140404A6C[19064555];
    return (unsigned int)(v1 - 47);
  }
}

