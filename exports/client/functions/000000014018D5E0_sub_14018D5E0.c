/* Address: 0x14018d5e0 | Name: sub_14018D5E0 | Size: 236 bytes */
__int64 __fastcall sub_14018D5E0(int *a1, int a2, int a3)
{
  __int64 result; // rax
  int v7; // ebp
  int v8; // edx
  int v9; // [rsp+48h] [rbp+20h] BYREF

  if ( dword_140404A6C[179992056] )
  {
    result = sub_140115AE0(&v9, 1);
    if ( !v9 )
    {
      *a1 = a2;
      return result;
    }
  }
  sub_140115AE0(&v9, 1);
  if ( v9 )
  {
    sub_140115AE0(&v9, 1);
    if ( v9 )
      return sub_140115D20(a1, a3);
    v7 = dword_140404A6C[157679550];
  }
  else
  {
    v7 = dword_140404A6C[157679549];
  }
  sub_140115AE0(&v9, v7);
  if ( (v9 & (1 << (v7 - 1))) == 1 << (v7 - 1) )
    v8 = v9 | (-1 << v7);
  else
    v8 = v9;
  *a1 = v8 + a2;
  result = (unsigned int)(v8 + 128);
  if ( (unsigned int)result <= 0xFF )
  {
    ++dword_140404A6C[(unsigned __int8)v8 + 179992058];
    return (__int64)&dword_140404A6C[179668285];
  }
  return result;
}

