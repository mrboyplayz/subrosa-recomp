/* Address: 0x14007b990 | Name: sub_14007B990 | Size: 355 bytes */
__int64 __fastcall sub_14007B990(unsigned int *a1, _DWORD *a2)
{
  int v2; // xmm1_4
  int v3; // xmm0_4
  int v4; // xmm1_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  int v9; // xmm0_4
  __int64 v11; // [rsp+0h] [rbp-78h] BYREF
  _DWORD v12[12]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  if ( a1 )
  {
    dword_140404A6C[431564529] = *a1;
    dword_140404A6C[431564530] = a1[1];
    dword_140404A6C[431564531] = a1[2];
  }
  if ( a2 )
  {
    v2 = a2[1];
    v12[0] = *a2;
    v3 = a2[2];
    v12[1] = v2;
    v4 = a2[3];
    v12[2] = v3;
    v5 = a2[4];
    v12[4] = v4;
    v6 = a2[5];
    v12[5] = v5;
    v7 = a2[6];
    v12[6] = v6;
    v8 = a2[7];
    v12[8] = v7;
    v9 = a2[8];
    v12[9] = v8;
    v12[10] = v9;
    v13 = xmmword_140279490;
    v12[3] = 0;
    v12[7] = 0;
    v12[11] = 0;
    sub_14007A0E0(&dword_140404A6C[431564517], (__int64)v12, (__int64)&dword_140404A6C[431564517]);
  }
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v11 ^ v14);
}

