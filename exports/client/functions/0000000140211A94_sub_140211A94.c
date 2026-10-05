/* Address: 0x140211a94 | Name: sub_140211A94 | Size: 62 bytes */
char __fastcall MEMORY[0x140211A94](char a1, __int16 a2, int a3)
{
  __int64 v3; // rcx
  char result; // al

  if ( a3 == 2 )
    return 0;
  if ( a3 == 3 || a3 == 12 || a3 == 13 )
    return 1;
  v3 = a1 & 4;
  result = (_DWORD)v3 != 0;
  if ( ((a2 - 99) & 0xFFEF) != 0 )
    return v3 == 0;
  return result;
}

