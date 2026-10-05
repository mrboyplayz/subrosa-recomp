/* Address: 0x140268520 | Name: ?make_big_integer_power_of_two@__crt_strtox@@YA?AUbig_integer@1@I@Z | Size: 103 bytes */
__int64 __fastcall __crt_strtox::make_big_integer_power_of_two(__int64 a1, unsigned int a2)
{
  char v2; // di
  __int64 v4; // rsi

  v2 = a2;
  v4 = a2 >> 5;
  MEMORY[0x1401FCD30]((_WORD *)(a1 + 4), 0, 4 * v4);
  *(_DWORD *)(4 * v4 + a1 + 4) = 1 << (v2 & 0x1F);
  *(_DWORD *)a1 = v4 + 1;
  return a1;
}

