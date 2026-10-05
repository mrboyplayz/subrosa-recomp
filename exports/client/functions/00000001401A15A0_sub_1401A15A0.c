/* Address: 0x1401a15a0 | Name: sub_1401A15A0 | Size: 698 bytes */
__int64 __fastcall sub_1401A15A0(__int64 a1, CGlobalUtils *a2)
{
  int v2; // edx
  _DWORD v4[12]; // [rsp+0h] [rbp-98h] BYREF
  int i; // [rsp+30h] [rbp-68h]
  int v6; // [rsp+34h] [rbp-64h]
  unsigned int v7; // [rsp+38h] [rbp-60h]
  int v8; // [rsp+3Ch] [rbp-5Ch]
  int v9; // [rsp+40h] [rbp-58h]
  int v10; // [rsp+44h] [rbp-54h]
  int v11; // [rsp+48h] [rbp-50h]
  int v12; // [rsp+4Ch] [rbp-4Ch]
  __int64 v13; // [rsp+50h] [rbp-48h]
  __int64 v14; // [rsp+58h] [rbp-40h]
  __int64 v15; // [rsp+60h] [rbp-38h]
  _DWORD v16[8]; // [rsp+68h] [rbp-30h]
  __int64 v17; // [rsp+88h] [rbp-10h]

  if ( *(int *)(a1 + 8) <= 0 )
    v11 = 0;
  else
    v11 = *(_DWORD *)(a1 + 8);
  v10 = v11;
  v16[0] = 1;
  v6 = 0;
  do
  {
    v12 = *(__int16 *)(a1 + 4LL * v6 + 12);
    v7 = *(__int16 *)(a1 + 2LL * (2 * v6 + 1) + 12);
    v16[v6 + 1] = v12 * v16[v6];
    ++v6;
  }
  while ( v7 != 1 );
  v7 = *(__int16 *)(a1 + 2LL * (2 * v6 - 1) + 12);
  for ( i = v6 - 1; i >= 0; --i )
  {
    if ( i )
      v8 = *(__int16 *)(a1 + 2LL * (2 * i - 1) + 12);
    else
      v8 = 1;
    v9 = *(__int16 *)(a1 + 4LL * i + 12);
    switch ( v9 )
    {
      case 2:
        sub_1401B61A0(a2, v7, (unsigned int)v16[i]);
        break;
      case 3:
        v14 = i;
        sub_1401B6FA0((_DWORD)a2, v16[i] << v10, a1, v7, v16[i], v8);
        break;
      case 4:
        v13 = i;
        v2 = v16[i] << v10;
        v4[10] = v8;
        v4[8] = v16[i];
        CGlobalUtils::SetNewParent(a2, (struct CObList *)v2, (struct CWnd *)a1, v7);
        break;
      case 5:
        v15 = i;
        sub_1401B7510((_DWORD)a2, v16[i] << v10, a1, v7, v16[i], v8);
        break;
    }
    v7 = v8;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v4 ^ v17);
}

