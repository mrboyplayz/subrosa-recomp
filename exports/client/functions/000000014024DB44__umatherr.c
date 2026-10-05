/* Address: 0x14024db44 | Name: _umatherr | Size: 212 bytes */
double __fastcall umatherr(int a1, int a2, double a3, double a4, double a5, __int64 a6)
{
  _DWORD *v7; // rax
  int v8; // r8d
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  double v13; // [rsp+30h] [rbp-28h]
  double v14; // [rsp+38h] [rbp-20h]
  double v15; // [rsp+40h] [rbp-18h]

  v7 = &unk_14028A430;
  v8 = 0;
  while ( *v7 != a2 )
  {
    ++v8;
    v7 += 4;
    if ( (__int64)v7 >= (__int64)&dword_14028A600 )
    {
      v9 = 0;
      goto LABEL_6;
    }
  }
  v9 = *((_QWORD *)&unk_14028A430 + 2 * v8 + 1);
LABEL_6:
  v12 = v9;
  if ( v9 )
  {
    v13 = a3;
    v14 = a4;
    v15 = a5;
    v11 = a1;
    ctrlfp(a6, 65472);
    if ( !(unsigned int)MEMORY[0x1402477E8](&v11) )
      set_errno_from_matherr(a1);
    return v15;
  }
  else
  {
    ctrlfp(a6, 65472);
    set_errno_from_matherr(a1);
    return a5;
  }
}

