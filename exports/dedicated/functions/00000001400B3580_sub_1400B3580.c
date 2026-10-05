/* Address: 0x1400b3580 | Name: sub_1400B3580 | Size: 142 bytes */
_BOOL8 __fastcall sub_1400B3580(float *a1, int a2, float a3)
{
  __int64 v3; // rdx
  float v4; // xmm1_4
  float v5; // xmm1_4
  _BOOL8 result; // rax

  v3 = 23492LL * a2;
  result = false;
  if ( *a1 >= (float)(*(float *)((char *)&unk_191541180 + v3 + 728) - a3)
    && *a1 < (float)(a3 + *(float *)((char *)&unk_191541180 + v3 + 740)) )
  {
    v4 = a1[1];
    if ( v4 >= (float)(*(float *)((char *)&unk_191541180 + v3 + 732) - a3)
      && v4 < (float)(a3 + *(float *)((char *)&unk_191541180 + v3 + 744)) )
    {
      v5 = a1[2];
      if ( v5 >= (float)(*(float *)((char *)&unk_191541180 + v3 + 736) - a3)
        && v5 < (float)(a3 + *(float *)((char *)&unk_191541180 + v3 + 748)) )
      {
        return true;
      }
    }
  }
  return result;
}

