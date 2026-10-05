/* Address: 0x14011b8f0 | Name: sub_14011B8F0 | Size: 102 bytes */
_BOOL8 __fastcall sub_14011B8F0(float *a1, int a2, float a3)
{
  __int64 v3; // rdx
  float v4; // xmm1_4
  _BOOL8 result; // rax

  v3 = 5873LL * a2;
  result = false;
  if ( *a1 >= (float)(*(float *)&dword_140404A6C[v3 + 283831485] - a3)
    && *a1 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831488]) )
  {
    v4 = a1[2];
    if ( v4 >= (float)(*(float *)&dword_140404A6C[v3 + 283831487] - a3)
      && v4 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831490]) )
    {
      return true;
    }
  }
  return result;
}

