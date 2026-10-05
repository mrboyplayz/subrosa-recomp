/* Address: 0x1401f1d90 | Name: sub_1401F1D90 | Size: 513 bytes */
__int64 __fastcall sub_1401F1D90(_DWORD *a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  int v9; // eax
  int *v10; // rax
  int i; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp+4h]
  int v14; // [rsp+38h] [rbp+8h]
  int v15; // [rsp+3Ch] [rbp+Ch]
  int v16; // [rsp+40h] [rbp+10h]
  int *v17; // [rsp+48h] [rbp+18h]
  _BYTE v18[256]; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+150h] [rbp+120h]
  signed int v21; // [rsp+178h] [rbp+148h]

  v21 = a2;
  v13 = a5 + a4;
  v15 = 2 * a3 * (a5 + a4);
  if ( v15 == a7 )
  {
    v7 = 2LL * (int)(a3 * v13) + 15;
    if ( v7 <= 2LL * (int)(a3 * v13) )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(sub_1401F89D0(v7 & 0xFFFFFFFFFFFFFFF0uLL, a2));
    v17 = &i;
    for ( i = 0; i < (int)(a3 * v13); ++i )
    {
      LOWORD(v14) = *(unsigned __int8 *)(a6 + 2 * i) | (*(unsigned __int8 *)(a6 + 2 * i + 1) << 8);
      v14 = ((unsigned __int16)v14 ^ 0x8000) - 0x8000;
      *((_WORD *)v17 + i) = v14;
    }
    *a1 = sub_1401F2140((unsigned int)a3, v13);
    if ( *a1 )
    {
      v9 = sub_1401F8020(a1);
      sub_1401F21E0(v9, a3, v13, 0, (__int64)v17);
      for ( i = 0; i < a3; ++i )
        v18[i] = i;
      v10 = (int *)sub_1401F8050(a1);
      v16 = sub_1401F0EA0(v10, v21, a3, a4, a5, (__int64)v18);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v19);
}

