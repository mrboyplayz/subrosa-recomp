/* Address: 0x1401e47a0 | Name: sub_1401E47A0 | Size: 1202 bytes */
__int64 __fastcall sub_1401E47A0(__int64 a1, int a2, int **a3)
{
  int *v3; // r8
  int *v5; // [rsp+28h] [rbp-70h]
  unsigned int v6; // [rsp+30h] [rbp-68h]
  int m; // [rsp+34h] [rbp-64h]
  int j; // [rsp+38h] [rbp-60h]
  int i; // [rsp+3Ch] [rbp-5Ch]
  int k; // [rsp+40h] [rbp-58h]
  unsigned int v11; // [rsp+44h] [rbp-54h]
  unsigned int v12; // [rsp+48h] [rbp-50h]
  int v13; // [rsp+4Ch] [rbp-4Ch]
  int *v14; // [rsp+50h] [rbp-48h]
  int v15; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+5Ch] [rbp-3Ch]
  int **v17; // [rsp+60h] [rbp-38h]
  int *v18; // [rsp+68h] [rbp-30h]
  int *v19; // [rsp+70h] [rbp-28h]
  int *v20; // [rsp+78h] [rbp-20h]
  int *v21; // [rsp+80h] [rbp-18h]
  int *v22; // [rsp+88h] [rbp-10h]
  _QWORD **v26; // [rsp+B0h] [rbp+18h]

  v6 = 0;
  v11 = sub_1401E2280(2);
  v12 = sub_1401E2280(1);
  v5 = (int *)((int)sub_1401E99B0(268) + a1);
  if ( a2 > 4039 )
  {
    if ( a2 != 4045 )
    {
      if ( a2 == 4046 )
        goto LABEL_43;
      if ( a2 != 4047 )
      {
        if ( a2 != 5122 )
          return (unsigned int)-5;
        v26 = (_QWORD **)(a3 + 1);
        v13 = *((_DWORD *)v26 - 2);
        if ( v13 >= 0 && v13 < *(_DWORD *)(a1 + 4) )
        {
          v17 = (int **)*v26;
          if ( v17 )
          {
            for ( i = 0; i < v13; ++i )
            {
              if ( i >= *(_DWORD *)(a1 + 8) )
                v5 = (int *)((char *)v5 + (int)sub_1401E99B0(v12));
              else
                v5 = (int *)((char *)v5 + (int)sub_1401E99B0(v11));
            }
            *v17 = v5;
            return v6;
          }
        }
        return 0xFFFFFFFFLL;
      }
    }
LABEL_14:
    v18 = *a3;
    v19 = v5;
    return (unsigned int)sub_1401E27C0(v5, a2, v18);
  }
  switch ( a2 )
  {
    case 4039:
    case 4009:
      goto LABEL_14;
    case 4028:
      for ( j = 0; j < *(_DWORD *)(a1 + 4); ++j )
      {
        v21 = v5;
        v5 = (int *)((char *)v5 + (j >= *(_DWORD *)(a1 + 8) ? (int)sub_1401E99B0(v12) : sub_1401E99B0(v11)));
        v6 = sub_1401E27C0(v21, 4028, v3);
        if ( v6 )
          break;
      }
      return v6;
    case 4029:
      goto LABEL_14;
  }
  if ( a2 != 4031 )
  {
    if ( a2 != 4034 )
      return (unsigned int)-5;
LABEL_43:
    v16 = *(_DWORD *)a3;
    for ( k = 0; k < *(_DWORD *)(a1 + 4); ++k )
    {
      v22 = v5;
      v5 = (int *)((char *)v5 + (k >= *(_DWORD *)(a1 + 8) ? (int)sub_1401E99B0(v12) : sub_1401E99B0(v11)));
      v6 = sub_1401E27C0(v22, a2, (int *)v16);
      if ( v6 )
        break;
    }
    return v6;
  }
  v14 = *a3;
  if ( *a3 )
  {
    *v14 = 0;
    for ( m = 0; m < *(_DWORD *)(a1 + 4); ++m )
    {
      v20 = v5;
      v5 = (int *)((char *)v5 + (m >= *(_DWORD *)(a1 + 8) ? (int)sub_1401E99B0(v12) : sub_1401E99B0(v11)));
      v6 = sub_1401E27C0(v20, a2, &v15);
      if ( v6 )
        break;
      *v14 ^= v15;
    }
    return v6;
  }
  return 0xFFFFFFFFLL;
}

