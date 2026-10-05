/* Address: 0x140049260 | Name: sub_140049260 | Size: 107 bytes */
__int64 __fastcall sub_140049260(__int64 a1, float *a2)
{
  float v2; // xmm3_4
  float v3; // xmm4_4
  __int64 result; // rax

  v2 = *a2;
  v3 = fsqrt((float)((float)(v2 * v2) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]));
  if ( v3 == 0.0 )
  {
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    return 0;
  }
  else
  {
    *(float *)a1 = v2 * (float)(1.0 / v3);
    *(float *)(a1 + 4) = (float)(1.0 / v3) * a2[1];
    *(float *)(a1 + 8) = (float)(1.0 / v3) * a2[2];
  }
  return result;
}

