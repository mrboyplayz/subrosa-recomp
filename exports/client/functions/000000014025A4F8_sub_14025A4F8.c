/* Address: 0x14025a4f8 | Name: sub_14025A4F8 | Size: 212 bytes */
__int64 __fastcall sub_14025A4F8(unsigned int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  __int16 *v8; // r10
  unsigned __int64 v9; // rbx
  __int16 *v10; // r8
  _WORD *v11; // rsi
  __int16 *v12; // r9
  unsigned int v13; // edx
  __int16 v14; // ax
  __int16 v16; // cx

  v8 = a2;
  v9 = 0;
  if ( a5 )
  {
    a1 = -a1;
    *a2 = 45;
    v9 = 1;
    v8 = a2 + 1;
  }
  v10 = v8;
  do
  {
    v11 = v8 + 1;
    v12 = v8;
    v13 = a1 % a4;
    a1 /= a4;
    v14 = 87;
    if ( v13 <= 9 )
      v14 = 48;
    ++v9;
    *v8 = v13 + v14;
    if ( !a1 )
      break;
    ++v8;
  }
  while ( v9 < a3 );
  if ( v9 < a3 )
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

