/* Address: 0x14025cda0 | Name: _exp_special | Size: 152 bytes */
double __fastcall exp_special(double a1, double a2, int a3)
{
  int v3; // r8d
  int v4; // r9d
  int v6; // [rsp+20h] [rbp-48h]
  double v7; // [rsp+30h] [rbp-38h]

  v3 = a3 - 2;
  if ( !v3 )
  {
    v4 = 4;
    v7 = a1;
    v6 = 18;
    goto LABEL_5;
  }
  if ( v3 == 1 )
  {
    v4 = 3;
    v7 = a1;
    v6 = 17;
LABEL_5:
    handle_error((__int64)&dword_14028A600, 20, *(__int64 *)&a2, v4, v6, 0x22u, v7, 0, 1);
  }
  return a2;
}

