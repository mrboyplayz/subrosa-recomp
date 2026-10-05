/* Address: 0x14025d004 | Name: _powf_special | Size: 395 bytes */
// local variable allocation has failed, the output may be wrong!
double __fastcall powf_special(double result, float a2, double a3, unsigned int a4)
{
  int v4; // r9d
  int v5; // r8d
  unsigned int v6; // [rsp+30h] [rbp-11h]
  float v7; // [rsp+38h] [rbp-9h]
  float v8; // [rsp+40h] [rbp-1h]

  if ( a4 == 1 )
  {
    v8 = a2;
    v7 = *(float *)&result;
    v6 = 0;
    v4 = 0;
    v5 = LODWORD(a3);
LABEL_14:
    handle_errorf((__int64)"powf", 29, v5, v4, 8, v6, v7, v8, 2);
    goto LABEL_15;
  }
  if ( a4 == 2 )
  {
    handle_errorf((__int64)"powf", 29, SLODWORD(a3), 2, 4, 0x22u, *(float *)&result, a2, 2);
  }
  else if ( a4 > 2 )
  {
    if ( a4 <= 5 )
    {
      handle_nanf(LODWORD(a3));
      return result;
    }
    if ( a4 != 6 )
    {
      if ( a4 == 7 )
      {
        handle_errorf((__int64)"powf", 29, SLODWORD(a3), 4, 18, 0x22u, *(float *)&result, a2, 2);
      }
      else if ( a4 == 9 )
      {
        handle_errorf((__int64)"powf", 29, SLODWORD(a3), 3, 17, 0x22u, *(float *)&result, a2, 2);
      }
      goto LABEL_15;
    }
    v4 = 1;
    v8 = a2;
    v7 = *(float *)&result;
    v5 = LODWORD(a3);
    v6 = 33;
    goto LABEL_14;
  }
LABEL_15:
  *(_OWORD *)&result = *(_OWORD *)&a3;
  return result;
}

