/* Address: 0x1401fc440 | Name: sub_1401FC440 | Size: 112 bytes */
__int64 __fastcall sub_1401FC440(__int64 a1, double *a2)
{
  double v2; // xmm1_8
  double v4; // [rsp+20h] [rbp-8h]

  v2 = *(double *)a1;
  v4 = *(double *)a1;
  if ( (*(_WORD *)(a1 + 6) & 0x7FF0) != 0x7FF0 )
    return 0;
  if ( LODWORD(v4) || (HIBYTE(v4) = *(_BYTE *)(a1 + 7) & 0x7F, HIDWORD(v4) != 2146435072) )
  {
    *a2 = v2 * v2;
    return 0;
  }
  else
  {
    *a2 = v2 * 0.0;
    return 1;
  }
}

