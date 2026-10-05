/* Address: 0x14025c0ac | Name: _call_matherr | Size: 101 bytes */
double __fastcall call_matherr(int a1, __int64 a2, __int64 a3, double a4, __int64 a5, double a6, __int64 a7)
{
  int v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  double v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  double v13; // [rsp+40h] [rbp-18h]

  v9 = a1;
  v12 = a5;
  v13 = a6;
  v11 = a4;
  v10 = a3;
  ctrlfp(a7, 65472);
  if ( !(unsigned int)MEMORY[0x1402477E8](&v9) )
    set_errno_from_matherr(a1);
  return v13;
}

