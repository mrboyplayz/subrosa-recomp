/* Address: 0x14024d310 | Name: _except1 | Size: 241 bytes */
__int64 __fastcall except1(__int64 a1, int a2, double a3, double a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+8h] [rbp-A1h] BYREF
  __int64 v13; // [rsp+48h] [rbp-61h] BYREF
  double v14; // [rsp+50h] [rbp-59h] BYREF
  char v15; // [rsp+58h] [rbp-51h] BYREF
  int v16; // [rsp+98h] [rbp-11h]
  __int64 v17; // [rsp+C8h] [rbp+1Fh]

  v5 = a5;
  v14 = a3;
  v13 = *(_QWORD *)&a4;
  v7 = a1;
  if ( !(unsigned int)handle_exc(a1, &v13, a5) )
  {
    v16 &= ~1u;
    raise_exc_ex((unsigned int)&v15, (unsigned int)&a5, v7, a2, (__int64)&v14, (__int64)&v13, 0);
    v5 = a5;
  }
  v8 = errcode(v7);
  if ( (unsigned __int8)MEMORY[0x1402477C0]() && v8 )
  {
    umatherr(v8, a2, v9, v10, v13, v5);
  }
  else
  {
    set_errno_from_matherr(v8);
    ctrlfp(v5, 65472);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v17);
}

