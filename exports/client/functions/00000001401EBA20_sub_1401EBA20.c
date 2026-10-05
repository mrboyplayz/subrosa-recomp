/* Address: 0x1401eba20 | Name: sub_1401EBA20 | Size: 1170 bytes */
__int64 __fastcall sub_1401EBA20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+0h] [rbp-268h] BYREF
  int i; // [rsp+30h] [rbp-238h]
  int v6; // [rsp+34h] [rbp-234h]
  int v7; // [rsp+38h] [rbp-230h]
  int v8; // [rsp+3Ch] [rbp-22Ch]
  float v9; // [rsp+40h] [rbp-228h]
  float v10; // [rsp+44h] [rbp-224h]
  float v11[32]; // [rsp+50h] [rbp-218h] BYREF
  float v12[32]; // [rsp+D0h] [rbp-198h] BYREF
  float v13[32]; // [rsp+150h] [rbp-118h] BYREF
  float v14[32]; // [rsp+1D0h] [rbp-98h] BYREF
  __int64 v15; // [rsp+250h] [rbp-18h]

  v8 = *(_DWORD *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = 3 * v6;
  for ( i = 0; i < v6; ++i )
    v11[i] = (float)*(char *)(*(_QWORD *)a1 + i);
  sub_1401F2860((unsigned int)v11, *(_QWORD *)(a1 + 8), v6, v8, v7, a3);
  sub_1401F2860((unsigned int)v11, *(_QWORD *)(a1 + 16), v6, v6, v7, a2);
  for ( i = 0; i < v6; ++i )
    v11[i] = sub_1401F2810();
  for ( i = 0; i < v6; ++i )
    v12[i] = (float)*(char *)(*(_QWORD *)a1 + i + v6);
  sub_1401F2860((unsigned int)v12, v6 + *(_QWORD *)(a1 + 8), v6, v8, v7, a3);
  sub_1401F2860((unsigned int)v12, v6 + *(_QWORD *)(a1 + 16), v6, v6, v7, a2);
  for ( i = 0; i < v6; ++i )
    v12[i] = sub_1401F2810();
  for ( i = 0; i < v6; ++i )
    v13[i] = (float)*(char *)(*(_QWORD *)a1 + i + 2 * v6);
  for ( i = 0; i < v6; ++i )
    v14[i] = *(float *)(a2 + 4LL * i) * v12[i];
  sub_1401F2860((unsigned int)v13, 2 * v6 + *(_QWORD *)(a1 + 8), v6, v8, v7, a3);
  sub_1401F2860((unsigned int)v13, 2 * v6 + *(_QWORD *)(a1 + 16), v6, v6, v7, (__int64)v14);
  for ( i = 0; i < v6; ++i )
  {
    v10 = v11[i] * *(float *)(a2 + 4LL * i);
    v9 = 1.0 - v11[i];
    v13[i] = v10 + (float)(v9 * sub_1401F2690());
  }
  for ( i = 0; i < v6; ++i )
    *(float *)(a2 + 4LL * i) = v13[i];
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v15);
}

