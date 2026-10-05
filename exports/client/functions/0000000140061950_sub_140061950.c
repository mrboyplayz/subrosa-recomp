/* Address: 0x140061950 | Name: sub_140061950 | Size: 270 bytes */
__int64 sub_140061950()
{
  int v0; // edi
  unsigned int *v1; // rbx
  unsigned int v2; // xmm1_4
  unsigned int v3; // xmm0_4
  __int64 v5; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v6[4]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v7[2]; // [rsp+40h] [rbp-48h] BYREF
  int v8; // [rsp+60h] [rbp-28h]
  __int64 v9; // [rsp+68h] [rbp-20h]

  v0 = 0;
  if ( (int)dword_140404A6C[112631653] > 0 )
  {
    v1 = &dword_140404A6C[112631657];
    do
    {
      v2 = *v1;
      v6[0] = *(v1 - 2);
      *(float *)&v3 = *((float *)v1 - 1) + 2.0;
      v6[2] = v2;
      v7[0] = xmmword_140278D30;
      v8 = 1065353216;
      v7[1] = xmmword_140278D30;
      v6[1] = v3;
      sub_14007B2A0(v7, &dword_1402F6188);
      v1 += 5;
      dword_140404A6C[5210 * (int)sub_14005BCA0(13, v6, nullptr, (unsigned int *)v7, 1u) + 129721811] = v0++;
    }
    while ( v0 < (int)dword_140404A6C[112631653] );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v9);
}

