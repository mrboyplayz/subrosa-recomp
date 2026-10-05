/* Address: 0x1401f1960 | Name: sub_1401F1960 | Size: 668 bytes */
__int64 sub_1401F1960(__int64 a1, int a2, ...)
{
  int i; // [rsp+28h] [rbp-60h]
  int j; // [rsp+2Ch] [rbp-5Ch]
  int v5; // [rsp+30h] [rbp-58h]
  int *v6; // [rsp+38h] [rbp-50h]
  int v7; // [rsp+40h] [rbp-48h]
  int v8; // [rsp+44h] [rbp-44h]
  int v9; // [rsp+48h] [rbp-40h]
  unsigned int v10; // [rsp+4Ch] [rbp-3Ch]
  int v11; // [rsp+54h] [rbp-34h]
  _DWORD *v12; // [rsp+58h] [rbp-30h]
  _DWORD *v13; // [rsp+60h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-10h]
  _DWORD *v17; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  __int64 v19; // [rsp+A8h] [rbp+20h]
  va_list va1; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v17 = va_arg(va1, _DWORD *);
  v19 = va_arg(va1, _QWORD);
  v10 = 0;
  v6 = (int *)sub_1401F82D0(a1);
  v12 = (_DWORD *)sub_1401F8290(a1);
  switch ( a2 )
  {
    case 6001:
      if ( v17 )
      {
        *v17 = v12[2];
        return v10;
      }
      break;
    case 6003:
      if ( v17 )
      {
        *v17 = 2 * (v6[2] + v6[1]) * *v6;
        return v10;
      }
      break;
    case 6005:
      v7 = v6[2] + v6[1];
      v8 = *v6;
      v13 = v17;
      v11 = v19;
      if ( v17 )
      {
        v14 = sub_1401F21B0(v12);
        if ( v11 == 2 * v8 * v7 )
        {
          v5 = 0;
          for ( i = 0; i < v7; ++i )
          {
            for ( j = 0; j < v8; ++j )
            {
              v9 = j + i * *v12;
              *((_BYTE *)v13 + 2 * v5) = *(_BYTE *)(v14 + 2LL * v9);
              *((_BYTE *)v13 + 2 * v5++ + 1) = HIBYTE(*(_WORD *)(v14 + 2LL * v9));
            }
          }
          return v10;
        }
      }
      break;
    default:
      return (unsigned int)sub_1401E3F90(v6, a2, (_DWORD **)va);
  }
  return 0xFFFFFFFFLL;
}

