/* Address: 0x14006f060 | Name: sub_14006F060 | Size: 99 bytes */
float __fastcall sub_14006F060(int a1, _BYTE *a2, float a3)
{
  float result; // xmm0_4
  _BYTE *v4; // r8
  __int64 v5; // rax

  result = 0.0;
  v4 = a2;
  if ( dword_140404A6C[3592 * a1 + 72777085] && *a2 )
  {
    do
    {
      if ( a2 - v4 >= 0xFFFF )
        break;
      v5 = (char)*a2++;
      result = result + (float)(a3 * *(float *)&dword_140404A6C[3592 * a1 + 72777093 + v5]);
    }
    while ( *a2 );
  }
  return result;
}

