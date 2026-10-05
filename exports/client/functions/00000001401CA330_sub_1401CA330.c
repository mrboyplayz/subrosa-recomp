/* Address: 0x1401ca330 | Name: sub_1401CA330 | Size: 1722 bytes */
__int64 __fastcall sub_1401CA330(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v6; // [rsp+0h] [rbp-88h] BYREF
  int i; // [rsp+20h] [rbp-68h]
  char *v8; // [rsp+28h] [rbp-60h]
  int v9; // [rsp+30h] [rbp-58h]
  int j; // [rsp+34h] [rbp-54h]
  int v11; // [rsp+38h] [rbp-50h]
  int v12; // [rsp+3Ch] [rbp-4Ch]
  int v13; // [rsp+40h] [rbp-48h]
  int v14; // [rsp+44h] [rbp-44h]
  _WORD v15[16]; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+68h] [rbp-20h] BYREF
  __int64 v17; // [rsp+78h] [rbp-10h]

  if ( a4 )
    v8 = (char *)(a1 + 36LL * a3 + 6120);
  else
    v8 = (char *)(a1 + 4752);
  v11 = v8[30] + 2 * v8[29];
  if ( a4 || v11 >= 2 )
    sub_14019A4F0(a2, v11 - 2, (__int64)&unk_140282454, 8);
  else
    sub_14019A4F0(a2, v11, (__int64)&unk_14028246C, 8);
  if ( a5 == 2 )
  {
    sub_14019A4F0(a2, *v8, (__int64)&unk_140282230, 8);
  }
  else
  {
    sub_14019A4F0(a2, *v8 >> 3, (__int64)&unk_140282218 + 8 * v8[29], 8);
    sub_14019A4F0(a2, *v8 & 7, (__int64)&unk_140282538, 8);
  }
  for ( i = 1; i < *(_DWORD *)(a1 + 4580); ++i )
    sub_14019A4F0(a2, v8[i], (__int64)&unk_140282230, 8);
  sub_14019A4F0(a2, v8[8], **(__int16 **)(a1 + 4704) * (v8[29] >> 1) + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 24LL), 8);
  sub_1401C6E20((__int64)v15, (__int64)v16, *(_QWORD *)(a1 + 4704), v8[8]);
  for ( i = 0; i < *(__int16 *)(*(_QWORD *)(a1 + 4704) + 2LL); ++i )
  {
    if ( v8[i + 9] < 4 )
    {
      if ( v8[i + 9] > -4 )
      {
        sub_14019A4F0(a2, v8[i + 9] + 4, (__int16)v15[i] + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 48LL), 8);
      }
      else
      {
        sub_14019A4F0(a2, 0, (__int16)v15[i] + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 48LL), 8);
        sub_14019A4F0(a2, -v8[i + 9] - 4, (__int64)&unk_140282264, 8);
      }
    }
    else
    {
      sub_14019A4F0(a2, 8, (__int16)v15[i] + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 48LL), 8);
      sub_14019A4F0(a2, v8[i + 9] - 4, (__int64)&unk_140282264, 8);
    }
  }
  if ( *(_DWORD *)(a1 + 4580) == 4 )
    sub_14019A4F0(a2, v8[31], (__int64)&unk_1402827F0, 8);
  if ( v8[29] == 2 )
  {
    v12 = 1;
    if ( a5 == 2 && *(_DWORD *)(a1 + 5784) == 2 )
    {
      v9 = *((__int16 *)v8 + 13) - *(__int16 *)(a1 + 5788);
      if ( v9 >= -8 && v9 <= 11 )
      {
        v9 += 9;
        v12 = 0;
      }
      else
      {
        v9 = 0;
      }
      sub_14019A4F0(a2, v9, (__int64)&unk_140282290, 8);
    }
    if ( v12 )
    {
      v13 = *((__int16 *)v8 + 13) / (*(int *)(a1 + 4576) >> 1);
      v14 = *((__int16 *)v8 + 13) - (__int16)(*(int *)(a1 + 4576) >> 1) * (__int16)v13;
      sub_14019A4F0(a2, v13, (__int64)&unk_140282270, 8);
      sub_14019A4F0(a2, v14, *(_QWORD *)(a1 + 4688), 8);
    }
    *(_WORD *)(a1 + 5788) = *((_WORD *)v8 + 13);
    sub_14019A4F0(a2, v8[28], *(_QWORD *)(a1 + 4696), 8);
    sub_14019A4F0(a2, v8[32], (__int64)&unk_14028226C, 8);
    for ( j = 0; j < *(_DWORD *)(a1 + 4580); ++j )
      sub_14019A4F0(a2, v8[j + 4], (__int64)*(&off_1402825D8 + v8[32]), 8);
    if ( !a5 )
      sub_14019A4F0(a2, v8[33], (__int64)&unk_1402822DC, 8);
  }
  *(_DWORD *)(a1 + 5784) = v8[29];
  sub_14019A4F0(a2, v8[34], (__int64)&unk_1402821FC, 8);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v17);
}

