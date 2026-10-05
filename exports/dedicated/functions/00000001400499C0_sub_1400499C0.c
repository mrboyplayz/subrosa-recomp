/* Address: 0x1400499c0 | Name: sub_1400499C0 | Size: 595 bytes */
__int64 __fastcall sub_1400499C0(unsigned __int8 *a1)
{
  int v2; // edx
  int *v3; // r8
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int8 *v11; // r9
  __int64 v12; // rax
  int v13; // edx
  _DWORD *v14; // rax
  int v15; // r8d
  int v16; // r9d
  _DWORD *v17; // rax
  __int64 v19; // r9
  char *v20; // rax
  unsigned __int8 v21; // cl

  if ( !qword_1915FDF08 )
  {
    qword_1915FDF08 = __rdtsc();
    _sleep(0x64u);
    qword_1915FDF08 = (__rdtsc() - qword_1915FDF08) / 0x186A0;
  }
  if ( !dword_1402491F0[0] )
  {
    v2 = 0;
    v3 = dword_1402491F0;
    do
    {
      ++v3;
      v4 = (unsigned int)v2 >> 1;
      v5 = -(v2++ & 1) & 0xEDB88320;
      v6 = ((v4 ^ v5) >> 1) ^ -(((unsigned __int8)v4 ^ (unsigned __int8)v5) & 1) & 0xEDB88320;
      v7 = (((v6 >> 1) ^ -(v6 & 1) & 0xEDB88320) >> 1)
         ^ -(((unsigned __int8)(v6 >> 1) ^ -(v6 & 1) & 0x20) & 1)
         & 0xEDB88320;
      v8 = (((v7 >> 1) ^ -(v7 & 1) & 0xEDB88320) >> 1)
         ^ -(((unsigned __int8)(v7 >> 1) ^ -(v7 & 1) & 0x20) & 1)
         & 0xEDB88320;
      *(v3 - 1) = (((v8 >> 1) ^ -(v8 & 1) & 0xEDB88320) >> 1)
                ^ -(((unsigned __int8)(v8 >> 1) ^ -(v8 & 1) & 0x20) & 1)
                & 0xEDB88320;
    }
    while ( v2 < 256 );
  }
  v9 = *a1;
  v10 = 0;
  if ( *a1 )
  {
    v11 = a1;
    do
    {
      ++v11;
      v12 = v9;
      v9 = *v11;
      v10 = (v10 >> 8) ^ dword_1402491F0[v12 ^ (unsigned __int8)v10];
    }
    while ( *v11 );
  }
  v13 = -1;
  v14 = &unk_1915FDF24;
  v15 = ~v10;
  v16 = 2;
  do
  {
    if ( *(v14 - 1) && v15 == *v14 )
      v13 = v16 - 2;
    if ( v14[39] && v15 == v14[40] )
      v13 = v16 - 1;
    if ( v14[79] && v15 == v14[80] )
      v13 = v16;
    if ( v14[119] && v15 == v14[120] )
      v13 = v16 + 1;
    v16 += 4;
    v14 += 160;
  }
  while ( v16 - 2 < 1024 );
  if ( v13 != -1 )
    goto LABEL_30;
  v13 = 0;
  v17 = &unk_1915FDF20;
  while ( *v17 )
  {
    ++v13;
    v17 += 40;
    if ( (__int64)v17 >= (__int64)&xmmword_191625F20 )
      return 0xFFFFFFFFLL;
  }
  if ( v13 == -1 )
    return 0xFFFFFFFFLL;
LABEL_30:
  v19 = 160LL * v13;
  v20 = (char *)&unk_1915FDF20 + v19 - (_QWORD)a1;
  *(_DWORD *)((char *)&unk_1915FDF20 + v19) = 1;
  *(_DWORD *)((char *)&unk_1915FDF20 + v19 + 4) = v15;
  do
  {
    v21 = *a1;
    v20[(_QWORD)a1 + 8] = *a1;
    ++a1;
  }
  while ( v21 );
  *(_QWORD *)((char *)&unk_1915FDF20 + v19 + 144) = 0;
  return (unsigned int)v13;
}

