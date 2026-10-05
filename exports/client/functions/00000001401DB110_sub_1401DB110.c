/* Address: 0x1401db110 | Name: sub_1401DB110 | Size: 186 bytes */
__int64 __fastcall sub_1401DB110(__int16 *a1, _WORD *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax

  if ( a4 <= 0 )
  {
    *a1 = 0;
    *a2 = 0;
    return 0;
  }
  else
  {
    *a1 = sub_14019AFE0(a3, byte_140282488[a4] + a5, 8);
    result = (unsigned int)(a4 - *a1);
    *a2 = a4 - *a1;
  }
  return result;
}

