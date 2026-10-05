/* Address: 0x14024d404 | Name: _except2 | Size: 262 bytes */
__int64 __fastcall except2(__int64 a1, int a2, double a3, double a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  int v10; // r8d
  int v11; // r9d
  __int64 v13; // [rsp+8h] [rbp-B9h] BYREF
  double v14[2]; // [rsp+48h] [rbp-79h] BYREF
  char v15; // [rsp+58h] [rbp-69h] BYREF
  double v16; // [rsp+88h] [rbp-39h]
  unsigned int v17; // [rsp+98h] [rbp-29h]
  __int64 v18; // [rsp+C8h] [rbp+7h]

  v6 = a6;
  v14[0] = a3;
  v8 = a1;
  if ( !(unsigned int)handle_exc(a1, &a5, a6) )
  {
    v16 = a4;
    v17 = v17 & 0xFFFFFFE0 | 3;
    raise_exc_ex((unsigned int)&v15, (unsigned int)&a6, v8, a2, (__int64)v14, (__int64)&a5, 0);
    v6 = a6;
  }
  v9 = errcode(v8);
  if ( (unsigned __int8)MEMORY[0x1402477C0]() && v9 )
  {
    umatherr(v9, a2, v10, v11, a5, v6);
  }
  else
  {
    set_errno_from_matherr(v9);
    ctrlfp(v6, 65472);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v18);
}

