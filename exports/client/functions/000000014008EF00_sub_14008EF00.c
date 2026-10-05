/* Address: 0x14008ef00 | Name: sub_14008EF00 | Size: 325 bytes */
__int64 __fastcall sub_14008EF00(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  sub_140115AE0(&v7, 6);
  sub_140115AE0(&v8, 28);
  v2 = v7;
  result = v8;
  v4 = 39 * v1;
  if ( dword_140404A6C[39 * v1 + 290382645] && v8 <= dword_140404A6C[v4 + 290382648] )
  {
    LODWORD(v1) = 0x4000;
  }
  else
  {
    dword_140404A6C[v4 + 290382647] = v7;
    dword_140404A6C[v4 + 290382648] = result;
    *(_QWORD *)&dword_140404A6C[v4 + 290382645] = 1;
  }
  if ( !v2 )
  {
    v5 = 39LL * (int)v1;
    sub_140115AE0(&dword_140404A6C[v5 + 290382649], 12);
    sub_140115AE0(&dword_140404A6C[v5 + 290382650], 6);
    sub_140115AE0(&dword_140404A6C[v5 + 290382651], 7);
    result = sub_14007ADF0((__int64)&dword_140404A6C[v5 + 290382652], 1, dword_140404A6C[v5 + 290382651]);
  }
  if ( v2 == 1 )
  {
    v6 = 39LL * (int)v1;
    sub_140115AE0(&dword_140404A6C[v6 + 290382649], 12);
    sub_140115AE0(&dword_140404A6C[v6 + 290382650], 5);
    sub_140115AE0(&dword_140404A6C[v6 + 290382651], 7);
    sub_14007ADF0((__int64)&dword_140404A6C[v6 + 290382652], 1, dword_140404A6C[v6 + 290382651]);
    return sub_14007ADF0((__int64)&dword_140404A6C[v6 + 290382668], 1, dword_140404A6C[v6 + 290382651]);
  }
  return result;
}

