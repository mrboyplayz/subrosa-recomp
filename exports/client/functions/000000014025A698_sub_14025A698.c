/* Address: 0x14025a698 | Name: sub_14025A698 | Size: 217 bytes */
__int64 __fastcall sub_14025A698(unsigned __int64 a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  __int16 *v7; // r11
  unsigned __int64 v8; // rbx
  __int16 *v9; // r8
  unsigned __int64 v10; // rbp
  _WORD *v11; // rsi
  __int16 *v12; // r9
  unsigned __int64 v13; // rdx
  __int16 v14; // ax
  __int16 v16; // cx

  v7 = a2;
  v8 = 0;
  if ( a5 )
  {
    a1 = -(__int64)a1;
    *a2 = 45;
    v8 = 1;
    v7 = a2 + 1;
  }
  v9 = v7;
  v10 = a4;
  do
  {
    v11 = v7 + 1;
    v12 = v7;
    v13 = a1 % v10;
    a1 /= v10;
    v14 = 87;
    if ( (unsigned int)v13 <= 9 )
      v14 = 48;
    ++v8;
    *v7 = v13 + v14;
    if ( !a1 )
      break;
    ++v7;
  }
  while ( v8 < a3 );
  if ( v8 < a3 )
  {
    *v11 = 0;
    do
    {
      v16 = *v12;
      *v12-- = *v9;
      *v9++ = v16;
    }
    while ( v9 < v12 );
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

