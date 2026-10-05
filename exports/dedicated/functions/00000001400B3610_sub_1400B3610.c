/* Address: 0x1400b3610 | Name: sub_1400B3610 | Size: 142 bytes */
_BOOL8 __fastcall sub_1400B3610(int a1, float *a2, float a3)
{
  __int64 v3; // rcx
  float v4; // xmm1_4
  float v5; // xmm1_4
  _BOOL8 result; // rax

  v3 = 14019LL * a1;
  result = false;
  if ( *a2 >= (float)(*(float *)&dword_183989E80[v3 + 250014] - a3)
    && *a2 < (float)(a3 + *(float *)&dword_183989E80[v3 + 250017]) )
  {
    v4 = a2[1];
    if ( v4 >= (float)(*(float *)&dword_183989E80[v3 + 250015] - a3)
      && v4 < (float)(a3 + *(float *)&dword_183989E80[v3 + 250018]) )
    {
      v5 = a2[2];
      if ( v5 >= (float)(*(float *)&dword_183989E80[v3 + 250016] - a3)
        && v5 < (float)(a3 + *(float *)&dword_183989E80[v3 + 250019]) )
      {
        return true;
      }
    }
  }
  return result;
}

