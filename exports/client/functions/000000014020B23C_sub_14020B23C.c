/* Address: 0x14020b23c | Name: sub_14020B23C | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14020B23C(double a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v9; // rcx
  double v10; // xmm0_8
  __int64 v11; // rdx
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = ctrlfp(8064, 65472);
  v5 = HIWORD(a1);
  v6 = v4;
  if ( (HIWORD(a1) & 0x7FF0) != 0x7FF0 )
  {
    if ( a1 == 0.0 )
      return ctrlfp(v6, 65472);
    LOWORD(v5) = HIWORD(a1) & 0x7FF0;
    v10 = decomp(v5, &v12);
    if ( a2 >= 0 )
    {
      if ( (int)v12 > 0x7FFFFFFF - a2 )
        goto LABEL_22;
    }
    else if ( (int)v12 < (int)(0x80000000 - a2) )
    {
      goto LABEL_17;
    }
    v11 = v12 + a2;
    if ( (int)v11 <= 2560 )
    {
      if ( (int)v11 > 1024 )
      {
        set_exp(v12, (unsigned int)(v11 - 1536));
LABEL_23:
        v9 = 17;
        return except2(v9, 25, a1, (double)a2, v10, v6);
      }
      if ( (int)v11 >= -2557 )
      {
        if ( (int)v11 >= -1021 )
        {
          set_exp(v12, v11);
          return ctrlfp(v6, 65472);
        }
        set_exp(v12, (unsigned int)(v11 + 1536));
        goto LABEL_18;
      }
LABEL_17:
      v10 = v10 * 0.0;
LABEL_18:
      v9 = 18;
      return except2(v9, 25, a1, (double)a2, v10, v6);
    }
LABEL_22:
    v10 = copysign(INFINITY, v10);
    goto LABEL_23;
  }
  v7 = sptype();
  if ( v7 > 0 )
  {
    if ( v7 <= 2 )
      return ctrlfp(v6, 65472);
    if ( v7 == 3 )
    {
      handle_qnan2();
      return ctrlfp(v6, 65472);
    }
  }
  v9 = 8;
  v10 = a1 + 1.0;
  return except2(v9, 25, a1, (double)a2, v10, v6);
}

