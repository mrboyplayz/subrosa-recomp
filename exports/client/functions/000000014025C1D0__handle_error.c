/* Address: 0x14025c1d0 | Name: _handle_error | Size: 295 bytes */
__int64 __fastcall handle_error(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        double a7,
        __int64 a8,
        int a9)
{
  BOOL v13; // eax
  __int64 v14; // xmm6_8
  __int64 v16; // [rsp+8h] [rbp-E1h] BYREF
  __int64 v17; // [rsp+48h] [rbp-A1h] BYREF
  double v18[2]; // [rsp+50h] [rbp-99h] BYREF
  _QWORD v19[8]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp-41h]
  __int64 v21; // [rsp+D8h] [rbp-11h]

  v17 = ctrlfp(8064, 65472);
  *(_QWORD *)&v18[1] = a3;
  *(_QWORD *)&v18[0] = a3;
  v13 = exception_enabled(a5, v17);
  v14 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      v19[6] = a8;
      v20 = v20 & 0xFFFFFFE0 | 3;
    }
    raise_exc((int)v19, (int)&v17, a5, a2, (__int64)&a7, (__int64)v18);
  }
  if ( (unsigned __int8)MEMORY[0x1402477C0]() && a4 )
  {
    call_matherr(a4, a6, a1, a7, v14, v18[0], v17);
  }
  else
  {
    set_errno_from_matherr(a4);
    ctrlfp(v17, 65472);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v16 ^ v21);
}

