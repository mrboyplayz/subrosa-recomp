/* Address: 0x1401dae50 | Name: sub_1401DAE50 | Size: 483 bytes */
__int64 __fastcall sub_1401DAE50(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        signed int a7,
        int a8)
{
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  int i; // [rsp+20h] [rbp+0h] BYREF
  signed int j; // [rsp+24h] [rbp+4h]
  int v13; // [rsp+28h] [rbp+8h]
  int v14; // [rsp+2Ch] [rbp+Ch]
  int *v15; // [rsp+30h] [rbp+10h]
  int *v16; // [rsp+38h] [rbp+18h]
  __int64 v17; // [rsp+40h] [rbp+20h]

  v8 = 4LL * a7 + 15;
  if ( v8 <= 4LL * a7 )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(sub_1401F89D0(v8 & 0xFFFFFFFFFFFFFFF0uLL, a2));
  v16 = &i;
  v15 = &i;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0; j < a7; ++j )
    {
      if ( (int)((*(int *)(a6 + 4LL * i) * (__int64)*(int *)(a5 + 4LL * (a7 * (i + a8 - 2) + j))) >> 16) >> 8 <= 0x7FFF )
      {
        if ( (int)((*(int *)(a6 + 4LL * i) * (__int64)*(int *)(a5 + 4LL * (a7 * (i + a8 - 2) + j))) >> 16) >> 8 >= -32768 )
          v13 = (int)((*(int *)(a6 + 4LL * i) * (__int64)*(int *)(a5 + 4LL * (a7 * (i + a8 - 2) + j))) >> 16) >> 8;
        else
          v13 = -32768;
        v14 = v13;
      }
      else
      {
        v14 = 0x7FFF;
      }
      *((_WORD *)v15 + j) = v14;
    }
    v15 = (int *)((char *)v15 + 2 * a7);
  }
  sub_1401BC4C0(a1, a2, (__int64)v16, a7);
  sub_1401BC4C0(a3, a4, (__int64)v16 + 2 * a7, a7);
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v17);
}

