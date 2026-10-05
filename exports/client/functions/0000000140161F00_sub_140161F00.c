/* Address: 0x140161f00 | Name: sub_140161F00 | Size: 301 bytes */
__int64 __fastcall sub_140161F00(__int64 a1, unsigned __int8 *a2, int a3)
{
  __int64 result; // rax
  float v7; // xmm2_4

  result = a2[3];
  if ( (_BYTE)result )
  {
    v7 = sub_14020B23C(a1, (unsigned int)(result - 136));
    if ( a3 > 2 )
    {
      *(float *)a1 = (float)*a2 * v7;
      *(float *)(a1 + 4) = (float)a2[1] * v7;
      result = a2[2];
      *(float *)(a1 + 8) = (float)a2[2] * v7;
      if ( a3 == 4 )
        *(_DWORD *)(a1 + 12) = 1065353216;
    }
    else
    {
      result = *a2;
      *(float *)a1 = (float)((float)(*a2 + a2[1] + a2[2]) * v7) * 0.33333334;
      if ( a3 == 2 )
        *(_DWORD *)(a1 + 4) = 1065353216;
    }
    return result;
  }
  if ( a3 == 1 )
  {
LABEL_14:
    *(_DWORD *)a1 = 0;
    return 0;
  }
  if ( a3 == 2 )
  {
    *(_DWORD *)(a1 + 4) = 1065353216;
    goto LABEL_14;
  }
  if ( a3 != 3 )
  {
    if ( a3 != 4 )
      return result;
    *(_DWORD *)(a1 + 12) = 1065353216;
  }
  *(_QWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  return 0;
}

