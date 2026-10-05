/* Address: 0x1400b06d0 | Name: sub_1400B06D0 | Size: 684 bytes */
__int64 __fastcall sub_1400B06D0(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  __int64 v11; // r8
  float v12; // xmm8_4
  float v13; // xmm9_4
  __int64 v14; // rdx
  float v15; // [rsp+28h] [rbp-29h] BYREF
  float v16; // [rsp+2Ch] [rbp-25h]
  float v17; // [rsp+30h] [rbp-21h]
  __int128 v18; // [rsp+38h] [rbp-19h] BYREF
  __int128 v19; // [rsp+48h] [rbp-9h]
  float v20; // [rsp+58h] [rbp+7h]

  result = (unsigned int)xmmword_1915FBCC0;
  v5 = 3597LL * a1;
  if ( dword_16D67D5FC[v5] < (int)xmmword_1915FBCC0 )
  {
    v6 = dword_16D67D624[v5];
    if ( (unsigned int)v6 > 5 )
    {
      v12 = *(float *)&dword_178C5B8E8;
      v13 = *(float *)&dword_178C5B8F0;
      v16 = *(float *)&dword_178C5B8EC;
      v15 = v12
          + (float)((float)((float)(*(float *)&dword_178C5B8F4 - 2.0) * (float)(unsigned __int8)rand()) * 0.001953125);
      v17 = v13
          + (float)((float)((float)(*(float *)&dword_178C5B8FC - 2.0) * (float)(unsigned __int8)rand()) * 0.001953125);
      v10 = -1.5707964;
    }
    else
    {
      v18 = xmmword_1400F78B0;
      v19 = xmmword_1400F78B0;
      v20 = 1.0;
      v7 = *((float *)&unk_191541474 + 5873 * v6);
      v8 = *((float *)&unk_191541478 + 5873 * v6);
      v9 = *((float *)&unk_19154147C + 5873 * v6);
      v10 = *((float *)&unk_191541470 + 5873 * v6) + 1.570796326795;
      sub_140049C20((__int64)&v18, (float *)&v18 + 3, a3);
      v15 = (float)(v7 - (float)(*((float *)&v19 + 2) * 4.0)) + (float)(*(float *)&v18 * 18.0);
      v16 = (float)((float)(v8 - 0.5) - (float)(*((float *)&v19 + 3) * 4.0)) + (float)(*((float *)&v18 + 1) * 18.0);
      v17 = (float)(v9 - (float)(v20 * 4.0)) + (float)(*((float *)&v18 + 2) * 18.0);
    }
    v20 = 1.0;
    v18 = xmmword_1400F78B0;
    v19 = xmmword_1400F78B0;
    sub_140049C20((__int64)&v18, (float *)&v18 + 3, v11);
    result = sub_14003A7B0(&v15, (float *)&v18, a1);
    dword_16D67D63C[v5] = result;
    if ( (_DWORD)result != -1 )
    {
      v14 = 28664LL * (int)result;
      *(_DWORD *)((char *)&unk_1909419D4 + v14) = dword_16D67D5DC[v5];
      *(float *)((char *)&unk_190941A60 + v14) = v10;
      sub_14003A3D0(a1);
      result = sub_14003A560(a1);
      dword_16D67D704[v5] = 0;
    }
  }
  return result;
}

