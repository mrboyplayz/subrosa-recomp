/* Address: 0x14023eb20 | Name: sub_14023EB20 | Stack analysis corrected in export snapshot. */
double __fastcall sub_14023EB20(double result)
{
  __int64 v1; // xmm6_8
  unsigned int v2; // edx
  float v3; // xmm2_4
  float v4; // xmm3_4
  double v5; // xmm5_8
  float v6; // xmm4_4
  float v7; // [rsp+70h] [rbp+8h]
  float v8; // [rsp+78h] [rbp+10h]

  v7 = 0.0;
  *(double *)&v1 = result;
  v2 = (unsigned __int8)(LODWORD(result) >> 23);
  if ( (LODWORD(result) & 0x7FFFFFFFu) > 0x7F800000 )
    return handle_nanf(LODWORD(result));
  if ( v2 < 0x71 )
    goto LABEL_9;
  if ( v2 < 0x7F )
  {
    if ( SLODWORD(result) < 0 )
      *(float *)&v1 = -*(float *)&result;
    if ( v2 < 0x7E )
    {
      v4 = 0.0;
      v3 = *(float *)&v1 * *(float *)&v1;
      v8 = *(float *)&v1 * *(float *)&v1;
    }
    else
    {
      v3 = (float)(1.0 - *(float *)&v1) * 0.5;
      v8 = v3;
      v7 = fsqrt(v3);
      v4 = v7;
      *(float *)&v1 = v7;
    }
    HIDWORD(v5) = 0;
    *(float *)&v5 = (float)((float)((float)((float)((float)((float)(-0.013381929 - (float)(v3 * 0.0039613745)) * v3)
                                                  - 0.056529868)
                                          * v3)
                                  + 0.1841616)
                          * v3)
                  / (float)(1.1049696 - (float)(v3 * 0.8364113));
    if ( v2 < 0x7E )
    {
      *(float *)&v5 = (float)(*(float *)&v5 * *(float *)&v1) + *(float *)&v1;
    }
    else
    {
      LODWORD(v6) = LODWORD(v4) & 0xFFFF0000;
      HIDWORD(v5) = 0;
      *(float *)&v5 = 0.78539813
                    - (float)((float)((float)((float)(v7 * 2.0) * *(float *)&v5)
                                    - (float)(0.000000075497894
                                            - (float)((float)((float)(v8 - (float)(v6 * v6)) / (float)(v6 + v7))
                                                    + (float)((float)(v8 - (float)(v6 * v6)) / (float)(v6 + v7)))))
                            - (float)(0.78539813 - (float)(v6 * 2.0)));
    }
    if ( SLODWORD(result) < 0 )
      *(_QWORD *)&v5 ^= 0x8000000080000000uLL;
    return v5;
  }
  else
  {
    if ( *(float *)&result == 1.0 )
    {
      v1 = 1070141403;
LABEL_9:
      set_statfp(32);
      return *(double *)&v1;
    }
    if ( *(float *)&result == -1.0 )
    {
      v1 = 3217625051LL;
      goto LABEL_9;
    }
    handle_errorf((__int64)"asinf", 14, -4194304, 1, 8, 0x21u, *(float *)&result, 0.0, 1);
  }
  return result;
}

