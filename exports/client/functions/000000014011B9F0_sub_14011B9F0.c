/* Address: 0x14011b9f0 | Name: sub_14011B9F0 | Size: 142 bytes */
_BOOL8 __fastcall sub_14011B9F0(int a1, float *a2, float a3)
{
  __int64 v3; // rcx
  float v4; // xmm1_4
  float v5; // xmm1_4
  _BOOL8 result; // rax

  v3 = 14019LL * a1;
  result = false;
  if ( *a2 >= (float)(*(float *)&dword_140404A6C[v3 + 225641219] - a3)
    && *a2 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 225641222]) )
  {
    v4 = a2[1];
    if ( v4 >= (float)(*(float *)&dword_140404A6C[v3 + 225641220] - a3)
      && v4 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 225641223]) )
    {
      v5 = a2[2];
      if ( v5 >= (float)(*(float *)&dword_140404A6C[v3 + 225641221] - a3)
        && v5 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 225641224]) )
      {
        return true;
      }
    }
  }
  return result;
}

