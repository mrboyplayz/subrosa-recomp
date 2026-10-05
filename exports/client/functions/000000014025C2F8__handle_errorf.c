/* Address: 0x14025c2f8 | Name: _handle_errorf | Size: 307 bytes */
__int64 __fastcall handle_errorf(
        __int64 a1,
        __int16 a2,
        int a3,
        int a4,
        char a5,
        unsigned int a6,
        float a7,
        float a8,
        int a9)
{
  BOOL v13; // eax
  float v14; // xmm6_4
  __int64 v16; // [rsp+8h] [rbp-E1h] BYREF
  __int64 v17; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v18; // [rsp+50h] [rbp-99h] BYREF
  int v19; // [rsp+58h] [rbp-91h]
  _DWORD v20[16]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v21; // [rsp+A8h] [rbp-41h]
  __int64 v22; // [rsp+D8h] [rbp-11h]

  v18 = ctrlfp(8064, 65472);
  v19 = a3;
  LODWORD(v17) = a3;
  v13 = exception_enabled(a5, v18);
  v14 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      *(float *)&v20[12] = a8;
      v21 = v21 & 0xFFFFFFE0 | 1;
    }
    raise_excf(v20, &v18, a5, a2, &a7, &v17);
  }
  if ( (unsigned __int8)MEMORY[0x1402477C0]() && a4 )
  {
    call_matherr(a4, a6, a1, a7, COERCE__INT64(v14), *(float *)&v17, v18);
  }
  else
  {
    set_errno_from_matherr(a4);
    ctrlfp(v18, 65472);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v16 ^ v22);
}

