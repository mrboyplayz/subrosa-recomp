/* Address: 0x1401e3f90 | Name: sub_1401E3F90 | Size: 2052 bytes */
__int64 __fastcall sub_1401E3F90(int *a1, int a2, _DWORD *a3)
{
  int *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  int *v7; // [rsp+20h] [rbp-B8h]
  int v8; // [rsp+28h] [rbp-B0h]
  unsigned int v9; // [rsp+2Ch] [rbp-ACh]
  unsigned int v10; // [rsp+34h] [rbp-A4h]
  unsigned int v11; // [rsp+38h] [rbp-A0h]
  int j; // [rsp+3Ch] [rbp-9Ch]
  int m; // [rsp+40h] [rbp-98h]
  int i; // [rsp+44h] [rbp-94h]
  int n; // [rsp+48h] [rbp-90h]
  int k; // [rsp+4Ch] [rbp-8Ch]
  int v17; // [rsp+50h] [rbp-88h]
  int v18; // [rsp+54h] [rbp-84h]
  int v19; // [rsp+58h] [rbp-80h]
  int v20; // [rsp+5Ch] [rbp-7Ch]
  _DWORD *v21; // [rsp+60h] [rbp-78h]
  _DWORD *v22; // [rsp+68h] [rbp-70h]
  int v23; // [rsp+70h] [rbp-68h] BYREF
  int v24; // [rsp+74h] [rbp-64h] BYREF
  unsigned int v25; // [rsp+78h] [rbp-60h]
  int **v26; // [rsp+80h] [rbp-58h]
  _DWORD *v27; // [rsp+88h] [rbp-50h]
  int *v28; // [rsp+90h] [rbp-48h]
  __int64 v29; // [rsp+98h] [rbp-40h]
  int *v30; // [rsp+A0h] [rbp-38h]
  int *v31; // [rsp+A8h] [rbp-30h]
  int *v32; // [rsp+B0h] [rbp-28h]
  __int64 v33; // [rsp+B8h] [rbp-20h]
  __int64 v34; // [rsp+C0h] [rbp-18h]
  int *v35; // [rsp+C8h] [rbp-10h]
  _QWORD **v39; // [rsp+F0h] [rbp+18h]

  v9 = 0;
  v10 = sub_1401E06F0(2);
  v11 = sub_1401E06F0(1);
  v3 = (int *)((char *)a1 + (int)sub_1401E99B0(292));
  v7 = v3;
  if ( a2 > 5120 )
  {
    if ( a2 == 11002 )
    {
LABEL_39:
      v25 = *a3;
      for ( i = 0; i < a1[1]; ++i )
      {
        v32 = v7;
        v7 = (int *)((char *)v7 + (i >= a1[2] ? (int)sub_1401E99B0(v11) : sub_1401E99B0(v10)));
        v9 = sub_1401E0F40(v32, a2, v25);
        if ( v9 )
          break;
      }
    }
    else if ( a2 == 11019 )
    {
LABEL_29:
      v29 = *(_QWORD *)a3;
      v30 = v3;
      return (unsigned int)sub_1401E0F40(v3, a2, v29);
    }
    else
    {
      return (unsigned int)-5;
    }
    return v9;
  }
  if ( a2 != 5120 )
  {
    switch ( a2 )
    {
      case 4000:
      case 4004:
      case 4006:
      case 4008:
      case 4010:
      case 4012:
      case 4014:
      case 4016:
      case 4020:
      case 4022:
      case 4024:
      case 4036:
      case 4042:
      case 4046:
        goto LABEL_39;
      case 4001:
      case 4007:
      case 4009:
      case 4011:
      case 4013:
      case 4015:
      case 4017:
      case 4021:
      case 4023:
      case 4025:
      case 4027:
      case 4029:
      case 4037:
      case 4043:
      case 4047:
        goto LABEL_29;
      case 4002:
        v8 = *a3;
        if ( *a3 == -1000 || v8 == -1 )
          goto LABEL_20;
        if ( v8 <= 0 )
          return 0xFFFFFFFFLL;
        if ( 500 * *a1 <= v8 )
          v18 = *a3;
        else
          v18 = 500 * *a1;
        if ( 300000 * *a1 >= v18 )
        {
          if ( 500 * *a1 <= v8 )
            v19 = *a3;
          else
            v19 = 500 * *a1;
          v20 = v19;
        }
        else
        {
          v20 = 300000 * *a1;
        }
        v8 = v20;
LABEL_20:
        a1[72] = v8;
        break;
      case 4003:
        v21 = *(_DWORD **)a3;
        if ( !*(_QWORD *)a3 )
          return 0xFFFFFFFFLL;
        *v21 = 0;
        for ( j = 0; j < a1[1]; ++j )
        {
          v28 = v7;
          if ( j >= a1[2] )
            v7 = (int *)((char *)v7 + (int)sub_1401E99B0(v11));
          else
            v7 = (int *)((char *)v7 + (int)sub_1401E99B0(v10));
          sub_1401E0F40(v28, a2, &v23);
          *v21 += v23;
        }
        return v9;
      case 4028:
        if ( a1[71] == 1 )
        {
          v33 = 4LL * *a1;
          v4 = sub_1401F6230(a1);
          MEMORY[0x1401FCD30](v4, 0, v33);
          v34 = 480LL * *a1;
          v5 = sub_1401F6300(a1);
          MEMORY[0x1401FCD30](v5, 0, v34);
        }
        for ( k = 0; k < a1[1]; ++k )
        {
          v35 = v7;
          v7 = (int *)((char *)v7 + (k >= a1[2] ? (int)sub_1401E99B0(v11) : sub_1401E99B0(v10)));
          v9 = sub_1401E0F40(v35, 4028);
          if ( v9 )
            break;
        }
        return v9;
      case 4031:
        v22 = *(_DWORD **)a3;
        if ( !*(_QWORD *)a3 )
          return 0xFFFFFFFFLL;
        *v22 = 0;
        for ( m = 0; m < a1[1]; ++m )
        {
          v31 = v7;
          v7 = (int *)((char *)v7 + (m >= a1[2] ? (int)sub_1401E99B0(v11) : sub_1401E99B0(v10)));
          v9 = sub_1401E0F40(v31, a2, &v24);
          if ( v9 )
            break;
          *v22 ^= v24;
        }
        return v9;
      case 4040:
        a1[70] = *a3;
        return v9;
      case 4041:
        v27 = *(_DWORD **)a3;
        if ( !v27 )
          return 0xFFFFFFFFLL;
        *v27 = a1[70];
        return v9;
      default:
        return (unsigned int)-5;
    }
    return v9;
  }
  v39 = (_QWORD **)(a3 + 2);
  v17 = *((_DWORD *)v39 - 2);
  if ( v17 >= 0 && v17 < a1[1] )
  {
    v26 = (int **)*v39;
    if ( v26 )
    {
      for ( n = 0; n < v17; ++n )
      {
        if ( n >= a1[2] )
          v7 = (int *)((char *)v7 + (int)sub_1401E99B0(v11));
        else
          v7 = (int *)((char *)v7 + (int)sub_1401E99B0(v10));
      }
      *v26 = v7;
      return v9;
    }
  }
  return 0xFFFFFFFFLL;
}

