/* Address: 0x14020b144 | Name: sub_14020B144 | Stack analysis corrected in export snapshot. */
double __fastcall sub_14020B144(double result, _DWORD *a2)
{
  double v2; // xmm6_8
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  double v9; // xmm3_8

  v2 = result;
  if ( !a2 )
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0.0;
  }
  v4 = ctrlfp(8064, 65472);
  v6 = HIWORD(result);
  v5 = v4;
  LOWORD(v6) = HIWORD(result) & 0x7FF0;
  if ( (HIWORD(result) & 0x7FF0) == 0x7FF0 )
  {
    *a2 = -1;
    v7 = sptype() - 1;
    if ( v7 && (unsigned int)(v7 - 1) >= 2 )
    {
      v8 = 8;
      v9 = result + 1.0;
LABEL_7:
      except1(v8, 23, result, v9, v5);
      return result;
    }
  }
  else
  {
    if ( result == 0.0 && (unsigned int)MEMORY[0x14024D0E0]() )
    {
      *a2 = 0;
      v9 = -0.0;
      v8 = 0;
      goto LABEL_7;
    }
    v2 = decomp(v6, a2);
  }
  ctrlfp(v5, 65472);
  return v2;
}

