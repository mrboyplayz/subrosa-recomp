/* Address: 0x1401e0cc0 | Name: sub_1401E0CC0 | Size: 364 bytes */
__int64 __fastcall sub_1401E0CC0(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  int i; // [rsp+70h] [rbp+0h] BYREF
  int v10; // [rsp+74h] [rbp+4h]
  int v11; // [rsp+78h] [rbp+8h]
  int *v12; // [rsp+80h] [rbp+10h]
  __int64 v13; // [rsp+88h] [rbp+18h]

  v10 = sub_1401E52C0(a3, (unsigned int)a1[39], (unsigned int)a1[36]);
  if ( v10 > 0 )
  {
    v6 = 4LL * a1[28] * v10 + 15;
    if ( v6 <= 4LL * a1[28] * v10 )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = alloca(sub_1401F89D0(v6 & 0xFFFFFFFFFFFFFFF0uLL, v5));
    v12 = &i;
    for ( i = 0; i < a1[28] * v10; ++i )
      *(float *)&v12[i] = 0.000030517578 * (float)*(__int16 *)(a2 + 2LL * i);
    v11 = sub_1401E5400(a1, v12, (unsigned int)v10, a4, a5, 16, a2, a3, 0, -2, a1[28], sub_1401E5010, 0);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v13);
}

