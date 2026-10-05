/* Address: 0x14006d030 | Name: sub_14006D030 | Size: 233 bytes */
__int64 __fastcall sub_14006D030(int a1)
{
  int v1; // r10d
  __int64 v2; // rcx
  int v3; // ebx
  int v4; // r8d
  int v5; // edi
  unsigned __int64 v6; // r11
  char v7; // dl
  char v8; // cl

  v1 = 0;
  v2 = 7040LL * a1;
  v3 = 0;
  v4 = 0;
  v5 = *(_DWORD *)((char *)&unk_19025F364 + v2);
  if ( v5 < 0 )
    return 0;
  if ( v5 + 1 < 2 )
  {
    LODWORD(v6) = *(_DWORD *)((char *)&unk_19025F368 + v2);
  }
  else
  {
    v6 = *(unsigned int *)((char *)&unk_19025F368 + v2);
    do
    {
      v7 = 3 * v4;
      v8 = 3 * v4;
      v4 += 2;
      v1 += dword_140146B90[(v6 >> v8) & 7];
      v3 += dword_140146B90[(v6 >> (v7 + 3)) & 7];
    }
    while ( v4 <= v5 - 1 );
    if ( v4 > v5 )
      return (unsigned int)(v3 + v1);
  }
  return (unsigned int)(dword_140146B90[((unsigned __int64)(unsigned int)v6 >> (3 * (unsigned __int8)v4)) & 7] + v3 + v1);
}

