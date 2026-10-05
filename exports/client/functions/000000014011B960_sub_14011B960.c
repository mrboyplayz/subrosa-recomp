/* Address: 0x14011b960 | Name: sub_14011B960 | Size: 142 bytes */
_BOOL8 __fastcall sub_14011B960(float *a1, int a2, float a3)
{
  __int64 v3; // rdx
  float v4; // xmm1_4
  float v5; // xmm1_4
  _BOOL8 result; // rax

  v3 = 5873LL * a2;
  result = false;
  if ( *a1 >= (float)(*(float *)&dword_140404A6C[v3 + 283831491] - a3)
    && *a1 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831494]) )
  {
    v4 = a1[1];
    if ( v4 >= (float)(*(float *)&dword_140404A6C[v3 + 283831492] - a3)
      && v4 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831495]) )
    {
      v5 = a1[2];
      if ( v5 >= (float)(*(float *)&dword_140404A6C[v3 + 283831493] - a3)
        && v5 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831496]) )
      {
        return true;
      }
    }
  }
  return result;
}

