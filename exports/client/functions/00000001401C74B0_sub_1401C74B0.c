/* Address: 0x1401c74b0 | Name: sub_1401C74B0 | Size: 698 bytes */
__int64 __fastcall sub_1401C74B0(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  void *v7; // rsp
  void *v8; // rsp
  __int64 v9; // rcx
  _DWORD v11[36]; // [rsp-60h] [rbp-90h] BYREF
  unsigned int v12; // [rsp+30h] [rbp+0h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp+8h]
  int v14; // [rsp+40h] [rbp+10h]
  int v15; // [rsp+44h] [rbp+14h]
  _DWORD *v16; // [rsp+48h] [rbp+18h]
  __int64 v17; // [rsp+50h] [rbp+20h]
  __int64 v18; // [rsp+58h] [rbp+28h]

  v15 = 0;
  v12 = *(_DWORD *)(a1 + 2328);
  v7 = alloca(144);
  v13 = v11;
  v11[34] = 0;
  if ( !a5 || a5 == 2 && *(_DWORD *)(a1 + 4LL * *(int *)(a1 + 2400) + 2432) == 1 )
  {
    v8 = alloca(sub_1401F89D0());
    v16 = v11;
    sub_1401C7770(a1, a2, *(_DWORD *)(a1 + 2400), a5, a6);
    sub_1401C92B0(a2, (_DWORD)v16, *(char *)(a1 + 2789), *(char *)(a1 + 2790), *(_DWORD *)(a1 + 2328));
    sub_1401C7DF0(a1, v13, a6);
    sub_1401C82D0(a1, (_DWORD)v13, a3, (_DWORD)v16, a7);
    sub_1401BEB10((_DWORD *)a1, (__int64)v13, a3, 0, a7);
    *(_DWORD *)(a1 + 4184) = 0;
    *(_DWORD *)(a1 + 4188) = *(char *)(a1 + 2789);
    *(_DWORD *)(a1 + 2376) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 2789) = *(_BYTE *)(a1 + 4188);
    sub_1401BEB10((_DWORD *)a1, (__int64)v13, a3, 1, a7);
  }
  v14 = *(_DWORD *)(a1 + 2336) - *(_DWORD *)(a1 + 2328);
  v9 = a1 + 2LL * *(int *)(a1 + 2328) + 1348;
  v17 = a1 + 1348;
  MEMORY[0x1401FC920](a1 + 1348, v9);
  MEMORY[0x1401FC920](a1 + 2LL * v14 + 1348, a3);
  sub_1401C96E0(a1, v13, a3, v12);
  sub_1401BEBC0((_DWORD *)a1, a3, v12);
  *(_DWORD *)(a1 + 2308) = v13[*(_DWORD *)(a1 + 2324) - 1];
  *a4 = v12;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v18);
}

