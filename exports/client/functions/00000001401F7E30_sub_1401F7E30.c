/* Address: 0x1401f7e30 | Name: sub_1401F7E30 | Size: 128 bytes */
__int64 __fastcall sub_1401F7E30(__int64 a1, int a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    *(float *)(a1 + 4LL * a2 * i) = 0.000030517578 * (float)*(__int16 *)(a3 + 2LL * (a5 + a4 * i));
  }
  return result;
}

