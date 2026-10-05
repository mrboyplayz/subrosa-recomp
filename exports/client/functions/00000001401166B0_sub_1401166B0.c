/* Address: 0x1401166b0 | Name: sub_1401166B0 | Size: 682 bytes */
__int64 __fastcall sub_1401166B0(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  signed int v10; // eax
  __int64 v11; // rdx
  __int64 v13; // [rsp+8h] [rbp-49h] BYREF
  float v14; // [rsp+28h] [rbp-29h] BYREF
  float v15; // [rsp+2Ch] [rbp-25h]
  float v16; // [rsp+30h] [rbp-21h]
  __int128 v17; // [rsp+38h] [rbp-19h] BYREF
  __int128 v18; // [rsp+48h] [rbp-9h]
  float v19; // [rsp+58h] [rbp+7h]
  __int128 v20; // [rsp+60h] [rbp+Fh]

  v2 = 3597LL * a1;
  if ( (int)dword_140404A6C[v2 + 71856276] < (int)dword_140404A6C[284022493] )
  {
    v3 = (int)dword_140404A6C[v2 + 71856286];
    if ( (unsigned int)v3 > 5 )
    {
      v8 = *(float *)&dword_140404A6C[179992855];
      v9 = *(float *)&dword_140404A6C[179992857];
      v15 = *(float *)&dword_140404A6C[179992856];
      v14 = v8
          + (float)((float)((float)(*(float *)&dword_140404A6C[179992858] - 2.0) * (float)(unsigned __int8)rand())
                  * 0.001953125);
      v16 = v9
          + (float)((float)((float)(*(float *)&dword_140404A6C[179992860] - 2.0) * (float)(unsigned __int8)rand())
                  * 0.001953125);
      v7 = -1.5707964;
    }
    else
    {
      v17 = xmmword_140278D30;
      v18 = xmmword_140278D30;
      v19 = 1.0;
      v4 = *(float *)&dword_140404A6C[5873 * v3 + 283831498];
      v5 = *(float *)&dword_140404A6C[5873 * v3 + 283831499];
      v6 = *(float *)&dword_140404A6C[5873 * v3 + 283831500];
      v7 = *(float *)&dword_140404A6C[5873 * v3 + 283831497] + 1.570796326795;
      sub_14007B2A0((__int64)&v17, (float *)&v17 + 3);
      v14 = (float)(v4 - (float)(*((float *)&v18 + 2) * 4.0)) + (float)(*(float *)&v17 * 18.0);
      v15 = (float)((float)(v5 - 0.5) - (float)(*((float *)&v18 + 3) * 4.0)) + (float)(*((float *)&v17 + 1) * 18.0);
      v16 = (float)(v6 - (float)(v19 * 4.0)) + (float)(*((float *)&v17 + 2) * 18.0);
    }
    v19 = 1.0;
    v17 = xmmword_140278D30;
    v18 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v17, (float *)&v17 + 3);
    v10 = sub_140053840(&v14, (float *)&v17, a1);
    dword_140404A6C[v2 + 71856292] = v10;
    if ( v10 != -1 )
    {
      v11 = 7166LL * v10;
      dword_140404A6C[v11 + 280651306] = dword_140404A6C[v2 + 71856268];
      *(float *)&dword_140404A6C[v11 + 280651341] = v7;
      sub_140051DC0(a1);
      sub_140051F50((unsigned int)a1);
      dword_140404A6C[v2 + 71856342] = 0;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v20);
}

