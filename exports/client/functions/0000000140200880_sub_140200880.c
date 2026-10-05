/* Address: 0x140200880 | Name: sub_140200880 | Size: 285 bytes */
__m128i *__fastcall sub_140200880(UnDecorator *this, __m128i *a2, int a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  int Str2; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  sub_140205C58(v9);
  if ( v9[8] )
    return nullptr;
  if ( !dword_140404A6C[19064563] )
    return nullptr;
  v5 = -1;
  v6 = -1;
  do
    ++v6;
  while ( *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064557] + v6) );
  if ( dword_140404A6C[19064563] >= v6 )
    return nullptr;
  Str2 = 6824996;
  do
    ++v5;
  while ( *((_BYTE *)&Str2 + v5) );
  if ( !(unsigned int)strncmp(*(_QWORD *)&dword_140404A6C[19064557] + dword_140404A6C[19064563], &Str2, v5) )
    return nullptr;
  v7 = v5 + v6 + 1;
  if ( v7 < v6 )
    return nullptr;
  if ( a2 )
  {
    if ( v7 >= v3 )
      return nullptr;
  }
  else
  {
    a2 = (__m128i *)(*(__int64 (__fastcall **)(unsigned __int64))&dword_140404A6C[19064565])((v7 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( !a2 )
      return nullptr;
  }
  MEMORY[0x1401FC920](a2, *(const __m128i **)&dword_140404A6C[19064557], dword_140404A6C[19064563]);
  MEMORY[0x1401FC920]((__m128i *)((char *)a2 + dword_140404A6C[19064563]), (const __m128i *)&Str2, v5);
  MEMORY[0x1401FC920](
    (__m128i *)((char *)a2 + v5 + dword_140404A6C[19064563]),
    (const __m128i *)(dword_140404A6C[19064563] + *(_QWORD *)&dword_140404A6C[19064557]),
    v6 - dword_140404A6C[19064563] + 1);
  return a2;
}

