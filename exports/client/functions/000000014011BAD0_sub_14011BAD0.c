/* Address: 0x14011bad0 | Name: sub_14011BAD0 | Size: 568 bytes */
_BOOL8 __fastcall sub_14011BAD0(float *a1)
{
  float v1; // xmm5_4
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v4; // xmm10_4
  float v5; // xmm11_4
  float v6; // xmm12_4
  _BOOL8 result; // rax

  v1 = *a1 - *(float *)&dword_140404A6C[284024502];
  v2 = a1[1] - *(float *)&dword_140404A6C[284024503];
  v3 = a1[2] - *(float *)&dword_140404A6C[284024504];
  result = false;
  if ( (float)((float)((float)(v2 * *(float *)&dword_140404A6C[284024512])
                     + (float)(v1 * *(float *)&dword_140404A6C[284024511]))
             + (float)(v3 * *(float *)&dword_140404A6C[284024513])) <= 0.0 )
  {
    v4 = *(float *)&dword_140404A6C[284024511] * 0.70709997;
    v5 = *(float *)&dword_140404A6C[284024512] * 0.70709997;
    v6 = *(float *)&dword_140404A6C[284024513] * 0.70709997;
    if ( (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[284024511] * 0.70709997)
                                       - (float)(*(float *)&dword_140404A6C[284024505] * 0.70709997))
                               * v1)
                       + (float)((float)((float)(*(float *)&dword_140404A6C[284024512] * 0.70709997)
                                       - (float)(*(float *)&dword_140404A6C[284024506] * 0.70709997))
                               * v2))
               + (float)((float)((float)(*(float *)&dword_140404A6C[284024513] * 0.70709997)
                               - (float)(*(float *)&dword_140404A6C[284024507] * 0.70709997))
                       * v3)) <= 0.0
      && (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[284024506] * 0.70709997) + v5) * v2)
                       + (float)((float)((float)(*(float *)&dword_140404A6C[284024505] * 0.70709997) + v4) * v1))
               + (float)((float)((float)(*(float *)&dword_140404A6C[284024507] * 0.70709997) + v6) * v3)) <= 0.0
      && (float)((float)((float)((float)(v4 - (float)(*(float *)&dword_140404A6C[284024508] * 0.70709997)) * v1)
                       + (float)((float)(v5 - (float)(*(float *)&dword_140404A6C[284024509] * 0.70709997)) * v2))
               + (float)((float)(v6 - (float)(*(float *)&dword_140404A6C[284024510] * 0.70709997)) * v3)) <= 0.0
      && (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[284024509] * 0.70709997) + v5) * v2)
                       + (float)((float)((float)(*(float *)&dword_140404A6C[284024508] * 0.70709997) + v4) * v1))
               + (float)((float)((float)(*(float *)&dword_140404A6C[284024510] * 0.70709997) + v6) * v3)) <= 0.0 )
    {
      return true;
    }
  }
  return result;
}

