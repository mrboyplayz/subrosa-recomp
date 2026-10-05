/* Address: 0x1400b3510 | Name: sub_1400B3510 | Size: 102 bytes */
_BOOL8 __fastcall sub_1400B3510(float *a1, int a2, float a3)
{
  __int64 v3; // rdx
  float v4; // xmm1_4
  _BOOL8 result; // rax

  v3 = 23492LL * a2;
  result = false;
  if ( *a1 >= (float)(*(float *)((char *)&unk_191541180 + v3 + 704) - a3)
    && *a1 < (float)(a3 + *(float *)((char *)&unk_191541180 + v3 + 716)) )
  {
    v4 = a1[2];
    if ( v4 >= (float)(*(float *)((char *)&unk_191541180 + v3 + 712) - a3)
      && v4 < (float)(a3 + *(float *)((char *)&unk_191541180 + v3 + 724)) )
    {
      return true;
    }
  }
  return result;
}

