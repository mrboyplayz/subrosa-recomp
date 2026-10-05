/* Address: 0x14025d1f0 | Name: _log_special_common | Size: 150 bytes */
// local variable allocation has failed, the output may be wrong!
__m128 __fastcall log_special_common(double a1, double a2, int a3, int a4, __int64 a5)
{
  int v6; // r8d
  int v7; // r9d
  int v9; // [rsp+20h] [rbp-48h]
  unsigned int v10; // [rsp+28h] [rbp-40h]
  double v11; // [rsp+30h] [rbp-38h]

  v6 = a3 - 1;
  if ( !v6 )
  {
    v7 = 2;
    v11 = a1;
    v10 = 34;
    v9 = 4;
    goto LABEL_5;
  }
  if ( v6 == 1 )
  {
    v7 = 1;
    v11 = a1;
    v10 = 33;
    v9 = 8;
LABEL_5:
    handle_error(a5, a4, *(__int64 *)&a2, v7, v9, v10, v11, 0, 1);
  }
  return *(__m128 *)&a2;
}

