/* Address: 0x14023cbb4 | Name: sub_14023CBB4 | Size: 42 bytes */
__int64 __fastcall sub_14023CBB4(__int64 a1, __int64 *a2, signed int a3)
{
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023BEE0(nullptr, v4, a3, 0);
}

