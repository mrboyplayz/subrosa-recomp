/* Address: 0x1401a8190 | Name: sub_1401A8190 | Size: 1438 bytes */
__int64 __fastcall sub_1401A8190(_QWORD *a1, float *a2, int a3, int a4, int a5)
{
  __int64 v6; // [rsp+0h] [rbp-A8h] BYREF
  int i; // [rsp+40h] [rbp-68h]
  float v8; // [rsp+44h] [rbp-64h]
  float v9; // [rsp+48h] [rbp-60h]
  _DWORD v10[4]; // [rsp+50h] [rbp-58h] BYREF
  float v11; // [rsp+54h] [rbp-54h]
  float v12; // [rsp+58h] [rbp-50h]
  float v13; // [rsp+5Ch] [rbp-4Ch]
  float v14[6]; // [rsp+60h] [rbp-48h] BYREF
  float v15[6]; // [rsp+78h] [rbp-30h] BYREF
  __int64 v16; // [rsp+90h] [rbp-18h]

  v9 = 1.0;
  v8 = 0.80000001;
  for ( i = 1; i < a3 >> 1; ++i )
    a2[i] = 0.5
          * (float)((float)(0.5 * (float)(*(float *)(*a1 + 4LL * (2 * i - 1)) + *(float *)(*a1 + 4LL * (2 * i + 1))))
                  + *(float *)(*a1 + 8LL * i));
  *a2 = 0.5 * (float)((float)(0.5 * *(float *)(*a1 + 4LL)) + *(float *)*a1);
  if ( a4 == 2 )
  {
    for ( i = 1; i < a3 >> 1; ++i )
      a2[i] = a2[i]
            + (float)(0.5
                    * (float)((float)(0.5
                                    * (float)(*(float *)(a1[1] + 4LL * (2 * i - 1))
                                            + *(float *)(a1[1] + 4LL * (2 * i + 1))))
                            + *(float *)(a1[1] + 8LL * i)));
    *a2 = *a2 + (float)(0.5 * (float)((float)(0.5 * *(float *)(a1[1] + 4LL)) + *(float *)a1[1]));
  }
  sub_1401ADFA0((_DWORD)a2, (unsigned int)v14, 0, 0, 4, a3 >> 1, a5);
  v14[0] = v14[0] * 1.0001;
  for ( i = 1; i <= 4; ++i )
    v14[i] = v14[i] - (float)((float)(v14[i] * (float)(0.0080000004 * (float)i)) * (float)(0.0080000004 * (float)i));
  sub_1401AD490(v10, v14, 4);
  for ( i = 0; i < 4; ++i )
  {
    v9 = 0.89999998 * v9;
    *(float *)&v10[i] = *(float *)&v10[i] * v9;
  }
  v15[0] = *(float *)v10 + 0.80000001;
  v15[1] = v11 + (float)(v8 * *(float *)v10);
  v15[2] = v12 + (float)(v8 * v11);
  v15[3] = v13 + (float)(v8 * v12);
  v15[4] = v8 * v13;
  sub_1401B86A0(a2, v15, (unsigned int)(a3 >> 1));
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v16);
}

