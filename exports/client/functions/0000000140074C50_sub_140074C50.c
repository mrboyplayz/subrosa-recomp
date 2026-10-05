/* Address: 0x140074c50 | Name: sub_140074C50 | Size: 130 bytes */
__int64 __fastcall sub_140074C50(int a1, float a2)
{
  int v2; // edx
  float v3; // xmm2_4
  unsigned int *v4; // r8

  v2 = 0;
  v3 = 0.0;
  if ( LOBYTE(dword_140404A6C[70318069]) )
  {
    v4 = &dword_140404A6C[70318069];
    do
    {
      if ( v2 >= (int)dword_140404A6C[70318068] )
        break;
      v3 = v3
         + (float)(*(float *)&dword_140404A6C[3592 * dword_140404A6C[122 * a1 + 70087123]
                                            + 72777093
                                            + *(unsigned __int8 *)v4]
                 * *(float *)&dword_140404A6C[122 * a1 + 70087133]);
      if ( a2 < v3 )
        break;
      v4 = (unsigned int *)((char *)v4 + 1);
      ++v2;
    }
    while ( *(_BYTE *)v4 );
  }
  return (unsigned int)v2;
}

