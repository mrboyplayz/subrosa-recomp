/* Address: 0x14000ddf0 | Name: sub_14000DDF0 | Size: 90 bytes */
__int64 __fastcall sub_14000DDF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  char v5; // bl
  char v6; // di
  char v7; // si
  __int64 result; // rax

  v5 = a4;
  v6 = a3;
  v7 = a2;
  result = sub_14000C480(a1, a2, a3, a4);
  if ( (_DWORD)result != -1 )
  {
    dword_1661A26A8[6930 * (int)result + 64 * (v6 & 7) + 8 * (v5 & 7) + (v7 & 7)] = a5;
    return a5;
  }
  return result;
}

