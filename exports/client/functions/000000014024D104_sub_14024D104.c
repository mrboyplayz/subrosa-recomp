/* Address: 0x14024d104 | Name: sub_14024D104 | Size: 69 bytes */
__int64 __fastcall MEMORY[0x14024D104](int a1)
{
  __int64 v1; // rax
  unsigned int *v2; // rdx
  __int64 result; // rax

  v1 = 0;
  v2 = dword_14028A2C0;
  do
  {
    if ( a1 == *v2 )
      return dword_14028A2C0[2 * v1 + 1];
    v1 = (unsigned int)(v1 + 1);
    v2 += 2;
  }
  while ( (unsigned int)v1 < 0x2D );
  if ( (unsigned int)(a1 - 19) <= 0x11 )
    return 13;
  result = 22;
  if ( (unsigned int)(a1 - 188) <= 0xE )
    return 8;
  return result;
}

