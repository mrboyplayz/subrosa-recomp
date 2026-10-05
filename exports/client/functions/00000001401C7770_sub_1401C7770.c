/* Address: 0x1401c7770 | Name: sub_1401C7770 | Size: 1656 bytes */
__int64 __fastcall sub_1401C7770(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int16 v5; // ax
  __int64 v7; // [rsp+0h] [rbp-88h] BYREF
  int v8; // [rsp+20h] [rbp-68h]
  int i; // [rsp+24h] [rbp-64h]
  int v10; // [rsp+28h] [rbp-60h]
  int j; // [rsp+2Ch] [rbp-5Ch]
  int v12; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  _BYTE v14[16]; // [rsp+40h] [rbp-48h] BYREF
  _WORD v15[16]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]

  if ( a4 || *(_DWORD *)(a1 + 4LL * a3 + 2416) )
    v8 = sub_14019AFE0(a2, (__int64)&unk_140282454, 8) + 2;
  else
    v8 = sub_14019AFE0(a2, (__int64)&unk_14028246C, 8);
  *(_BYTE *)(a1 + 2789) = v8 >> 1;
  *(_BYTE *)(a1 + 2790) = v8 & 1;
  if ( a5 == 2 )
  {
    *(_BYTE *)(a1 + 2760) = sub_14019AFE0(a2, (__int64)&unk_140282230, 8);
  }
  else
  {
    *(_BYTE *)(a1 + 2760) = 8 * sub_14019AFE0(a2, (__int64)&unk_140282218 + 8 * *(char *)(a1 + 2789), 8);
    v13 = 0;
    *(_BYTE *)(a1 + 2760) += sub_14019AFE0(a2, (__int64)&unk_140282538, 8);
  }
  for ( i = 1; i < *(_DWORD *)(a1 + 2324); ++i )
    *(_BYTE *)(a1 + i + 2760) = sub_14019AFE0(a2, (__int64)&unk_140282230, 8);
  *(_BYTE *)(a1 + 2768) = sub_14019AFE0(
                            a2,
                            **(__int16 **)(a1 + 2752) * (*(char *)(a1 + 2789) >> 1)
                          + *(_QWORD *)(*(_QWORD *)(a1 + 2752) + 24LL),
                            8);
  sub_1401C6E20((__int64)v15, (__int64)v14, *(_QWORD *)(a1 + 2752), *(char *)(a1 + 2768));
  for ( i = 0; i < *(__int16 *)(*(_QWORD *)(a1 + 2752) + 2LL); ++i )
  {
    v8 = sub_14019AFE0(a2, (__int16)v15[i] + *(_QWORD *)(*(_QWORD *)(a1 + 2752) + 48LL), 8);
    if ( v8 )
    {
      if ( v8 == 8 )
        v8 = sub_14019AFE0(a2, (__int64)&unk_140282264, 8) + 8;
    }
    else
    {
      v8 = -(int)sub_14019AFE0(a2, (__int64)&unk_140282264, 8);
    }
    *(_BYTE *)(a1 + i + 1 + 2768) = v8 - 4;
  }
  if ( *(_DWORD *)(a1 + 2324) == 4 )
    *(_BYTE *)(a1 + 2791) = sub_14019AFE0(a2, (__int64)&unk_1402827F0, 8);
  else
    *(_BYTE *)(a1 + 2791) = 4;
  if ( *(_BYTE *)(a1 + 2789) == 2 )
  {
    v12 = 1;
    if ( a5 == 2 && *(_DWORD *)(a1 + 2408) == 2 )
    {
      v5 = sub_14019AFE0(a2, (__int64)&unk_140282290, 8);
      v10 = v5;
      if ( v5 > 0 )
      {
        v10 -= 9;
        *(_WORD *)(a1 + 2786) = v10 + *(_WORD *)(a1 + 2412);
        v12 = 0;
      }
    }
    if ( v12 )
    {
      *(_WORD *)(a1 + 2786) = (*(int *)(a1 + 2316) >> 1) * sub_14019AFE0(a2, (__int64)&unk_140282270, 8);
      *(_WORD *)(a1 + 2786) += sub_14019AFE0(a2, *(_QWORD *)(a1 + 2384), 8);
    }
    *(_WORD *)(a1 + 2412) = *(_WORD *)(a1 + 2786);
    *(_BYTE *)(a1 + 2788) = sub_14019AFE0(a2, *(_QWORD *)(a1 + 2392), 8);
    *(_BYTE *)(a1 + 2792) = sub_14019AFE0(a2, (__int64)&unk_14028226C, 8);
    for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
      *(_BYTE *)(a1 + j + 2764) = sub_14019AFE0(a2, (__int64)*(&off_1402825D8 + *(char *)(a1 + 2792)), 8);
    if ( a5 )
      *(_BYTE *)(a1 + 2793) = 0;
    else
      *(_BYTE *)(a1 + 2793) = sub_14019AFE0(a2, (__int64)&unk_1402822DC, 8);
  }
  *(_DWORD *)(a1 + 2408) = *(char *)(a1 + 2789);
  *(_BYTE *)(a1 + 2794) = sub_14019AFE0(a2, (__int64)&unk_1402821FC, 8);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v16);
}

