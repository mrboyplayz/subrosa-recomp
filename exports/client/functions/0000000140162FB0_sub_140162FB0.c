/* Address: 0x140162fb0 | Name: sub_140162FB0 | Size: 108 bytes */
__int64 __fastcall sub_140162FB0(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  int v4; // edx
  int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // edx
  unsigned int v8; // ecx

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v3 = HIWORD(a1);
  v4 = 16;
  if ( a1 < 0x10000 )
  {
    v3 = a1;
    v4 = 0;
  }
  if ( v3 >= 0x100 )
  {
    v4 += 8;
    v3 >>= 8;
  }
  v5 = v4 + 4;
  v6 = v3 >> 4;
  if ( v3 < 0x10 )
  {
    v5 = v4;
    v6 = v3;
  }
  v7 = v5 + 2;
  if ( v6 < 4 )
    v7 = v5;
  v8 = v6 >> 2;
  if ( v6 < 4 )
    v8 = v6;
  result = v7 + 1;
  if ( v8 < 2 )
    return v7;
  return result;
}

