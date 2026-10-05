/* Address: 0x14025a430 | Name: sub_14025A430 | Size: 198 bytes */
__int64 __fastcall sub_14025A430(unsigned int a1, char *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  unsigned __int64 v5; // rbx
  char *v9; // r11
  char *v10; // r8
  _BYTE *v11; // rsi
  char *v12; // r9
  unsigned int v13; // edx
  char v14; // al
  char v16; // cl

  v5 = 0;
  v9 = a2;
  if ( a5 )
  {
    *a2 = 45;
    v9 = a2 + 1;
    v5 = 1;
    a1 = -a1;
  }
  v10 = v9;
  do
  {
    v11 = v9 + 1;
    v12 = v9;
    v13 = a1 % a4;
    a1 /= a4;
    v14 = 87;
    if ( v13 <= 9 )
      v14 = 48;
    ++v5;
    *v9 = v13 + v14;
    if ( !a1 )
      break;
    ++v9;
  }
  while ( v5 < a3 );
  if ( v5 < a3 )
  {
    *v11 = 0;
    do
    {
      v16 = *v12;
      *v12-- = *v10;
      *v10++ = v16;
    }
    while ( v10 < v12 );
    return 0;
  }
  else
  {
    *a2 = 0;
    *errno() = 34;
    sub_14024CF6C();
    return 34;
  }
}

