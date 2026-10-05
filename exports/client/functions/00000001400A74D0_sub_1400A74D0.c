/* Address: 0x1400a74d0 | Name: sub_1400A74D0 | Size: 321 bytes */
__int64 __fastcall sub_1400A74D0(int a1, float a2, float a3)
{
  float v3; // xmm0_4
  int v4; // r11d
  __int64 v6; // r8
  float v7; // xmm3_4
  unsigned int v8; // xmm0_4
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // r9d
  signed int v12; // r9d
  signed int *v14; // rax

  v3 = (float)(int)dword_140404A6C[137297772];
  v4 = 0;
  dword_140404A6C[137297772] = 0;
  v6 = 122LL * a1;
  v7 = *(float *)&dword_140404A6C[v6 + 70087232] - (float)(v3 * 16.0);
  if ( v7 < 0.0 )
    v7 = 0.0;
  v8 = dword_140404A6C[v6 + 70087234];
  *(float *)&dword_140404A6C[v6 + 70087232] = v7;
  if ( v7 > *(float *)&v8 )
  {
    dword_140404A6C[v6 + 70087232] = v8;
    v7 = *(float *)&v8;
  }
  v9 = 0;
  if ( (int)(float)(a2 / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087228])) >= 0 )
    v9 = (int)(float)(a2 / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087228]));
  v10 = dword_140404A6C[v6 + 70087227];
  v11 = v10 - 1;
  if ( v9 <= (int)(v10 - 1) )
    v11 = v9;
  if ( (int)(float)((float)(v7 + a3)
                  / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087229])) >= 0 )
    v4 = (int)(float)((float)(v7 + a3)
                    / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087229]));
  v12 = v10 * v4 + v11;
  if ( v12 > (int)(dword_140404A6C[v6 + 70087220] - 1) )
  {
    dword_140404A6C[v6 + 70087223] = -1;
    return 0;
  }
  dword_140404A6C[v6 + 70087223] = v12;
  if ( v12 == -1 || dword_140404A6C[70317817] || !dword_140404A6C[70317856] || a1 != dword_140404A6C[70087106] )
    return 0;
  v14 = *(signed int **)&dword_140404A6C[v6 + 70087225];
  dword_140404A6C[v6 + 70087222] = v12;
  if ( v14 )
    *v14 = v12;
  return 1;
}

