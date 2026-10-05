/* Address: 0x1401eb3e0 | Name: sub_1401EB3E0 | Size: 1194 bytes */
__int64 __fastcall sub_1401EB3E0(
        int *a1,
        _BYTE *a2,
        int a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, _QWORD, _QWORD, int *, int, int, __int64),
        int a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  int i; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v14; // [rsp+54h] [rbp+4h]
  int v15; // [rsp+58h] [rbp+8h] BYREF
  unsigned int k; // [rsp+5Ch] [rbp+Ch]
  int m; // [rsp+60h] [rbp+10h]
  int v18; // [rsp+64h] [rbp+14h]
  int v19; // [rsp+68h] [rbp+18h]
  int v20; // [rsp+6Ch] [rbp+1Ch] BYREF
  int v21; // [rsp+70h] [rbp+20h]
  unsigned int v22; // [rsp+74h] [rbp+24h]
  int v23; // [rsp+78h] [rbp+28h]
  int v24; // [rsp+7Ch] [rbp+2Ch]
  BOOL v25; // [rsp+80h] [rbp+30h]
  unsigned int j; // [rsp+84h] [rbp+34h]
  int *v27; // [rsp+88h] [rbp+38h]
  int v28; // [rsp+90h] [rbp+40h]
  int v29; // [rsp+94h] [rbp+44h]
  int *v30; // [rsp+98h] [rbp+48h]
  int *v31; // [rsp+A0h] [rbp+50h]
  __int64 v32; // [rsp+A8h] [rbp+58h]
  int v37; // [rsp+E8h] [rbp+98h]

  v18 = 0;
  if ( a6 > 0 && !(unsigned int)sub_1401F1160(a1, 4029, &v15) )
  {
    v9 = (unsigned int)(v15 >> 31);
    LODWORD(v9) = v15 % 25;
    if ( a6 >= 3 * (v15 / 25) )
    {
      v9 = (unsigned int)(v15 >> 31);
      LODWORD(v9) = v15 % 25;
      v23 = 3 * (v15 / 25);
    }
    else
    {
      v23 = a6;
    }
    v37 = v23;
    v10 = 8LL * v23 + 15;
    if ( v10 <= 8LL * v23 )
      v10 = 0xFFFFFFFFFFFFFF0LL;
    v11 = alloca(sub_1401F89D0(v10 & 0xFFFFFFFFFFFFFFF0uLL, v9));
    v27 = &i;
    v30 = (int *)((char *)a1 + (int)sub_1401E99B0(268));
    v28 = sub_1401E2280(2);
    v29 = sub_1401E2280(1);
    if ( !a3 )
      v18 = 1;
    if ( a3 >= 0 && (v18 || a3 >= 2 * a1[1] - 1) )
    {
      if ( v18
        || (v19 = sub_1401F5F20(a2, (unsigned int)a3, (unsigned int)a1[1], (unsigned int)v15), v19 >= 0) && v19 <= v37 )
      {
        for ( i = 0; i < a1[1]; ++i )
        {
          v31 = v30;
          if ( i >= a1[2] )
            v24 = sub_1401E99B0(v29);
          else
            v24 = sub_1401E99B0(v28);
          v30 = (int *)((char *)v30 + v24);
          if ( !v18 && a3 <= 0 )
            return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v32);
          v20 = 0;
          v25 = i != a1[1] - 1;
          v21 = sub_1401E9360(v31, a2, a3, (__int64)v27, v37, a7, v25, (__int64)&v20, a8);
          a2 += v20;
          a3 -= v20;
          if ( v21 <= 0 )
            return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v32);
          v37 = v21;
          if ( i >= a1[2] )
          {
            for ( j = -1; ; j = v22 )
            {
              v22 = sub_1401E4DF0(a1, i, j);
              if ( v22 == -1 )
                break;
              a5(a4, (unsigned int)*a1, v22, v27, 1, v37, a9);
            }
          }
          else
          {
            for ( k = -1; ; k = v14 )
            {
              v14 = sub_1401E4CF0(a1, i, k);
              if ( v14 == -1 )
                break;
              a5(a4, (unsigned int)*a1, v14, v27, 2, v37, a9);
            }
            for ( k = -1; ; k = v14 )
            {
              v14 = sub_1401E4D70(a1, i, k);
              if ( v14 == -1 )
                break;
              a5(a4, (unsigned int)*a1, v14, v27 + 1, 2, v37, a9);
            }
          }
        }
        for ( m = 0; m < *a1; ++m )
        {
          if ( *((unsigned __int8 *)a1 + m + 12) == 255 )
            a5(a4, (unsigned int)*a1, (unsigned int)m, nullptr, 0, v37, a9);
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v32);
}

