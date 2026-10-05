/* Address: 0x14007be20 | Name: sub_14007BE20 | Size: 476 bytes */
__int64 __fastcall sub_14007BE20(float *a1, unsigned int *a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  __int64 v6; // [rsp+0h] [rbp-78h] BYREF
  _OWORD v7[3]; // [rsp+20h] [rbp-58h] BYREF
  float v8; // [rsp+50h] [rbp-28h]
  float v9; // [rsp+54h] [rbp-24h]
  float v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  __int64 v12; // [rsp+60h] [rbp-18h]

  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  if ( a2 )
  {
    dword_140404A6C[431564501] = *a2;
    dword_140404A6C[431564505] = a2[1];
    dword_140404A6C[431564509] = a2[2];
    dword_140404A6C[431564502] = a2[3];
    dword_140404A6C[431564506] = a2[4];
    dword_140404A6C[431564510] = a2[5];
    dword_140404A6C[431564503] = a2[6];
    dword_140404A6C[431564507] = a2[7];
    dword_140404A6C[431564511] = a2[8];
  }
  if ( a1 )
  {
    v7[0] = xmmword_140278D30;
    v7[2] = xmmword_140278E20;
    v2 = *a1;
    v7[1] = xmmword_140278D80;
    v8 = -v2;
    v3 = a1[1];
    v11 = 1065353216;
    v4 = a1[2];
    v9 = -v3;
    v10 = -v4;
    sub_14007A0E0(&dword_140404A6C[431564501], (__int64)v7, (__int64)&dword_140404A6C[431564501]);
  }
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v12);
}

