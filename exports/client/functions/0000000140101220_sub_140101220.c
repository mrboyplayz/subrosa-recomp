/* Address: 0x140101220 | Name: sub_140101220 | Size: 702 bytes */
__int64 __fastcall sub_140101220(int a1, float *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // r11d
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // r10d
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // rcx
  float v15; // xmm0_4
  int *v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rdx
  _DWORD v24[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v25; // [rsp+20h] [rbp-18h]

  v3 = 2LL * a1;
  v24[0] = dword_140404A6C[4 * a1 + 178322642];
  v24[1] = dword_140404A6C[4 * a1 + 178322643];
  v24[2] = dword_140404A6C[4 * a1 + 178322644];
  v24[3] = dword_140404A6C[4 * a1 + 178322645];
  v4 = (int)(3 * dword_140404A6C[4 * a1 + 178322642]);
  v5 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v5 + 177167567] = *(float *)&dword_140404A6C[v4 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v5 + 177167568] = *(float *)&dword_140404A6C[v4 + 177167568] + a2[1];
  *(float *)&dword_140404A6C[v5 + 177167569] = *(float *)&dword_140404A6C[v4 + 177167569] + a2[2];
  v6 = dword_140404A6C[177167565];
  v24[4] = dword_140404A6C[177167565]++;
  v7 = (int)(3 * dword_140404A6C[4 * a1 + 178322643]);
  v8 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v8 + 177167567] = *(float *)&dword_140404A6C[v7 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v8 + 177167568] = *(float *)&dword_140404A6C[v7 + 177167568] + a2[1];
  *(float *)&dword_140404A6C[v8 + 177167569] = *(float *)&dword_140404A6C[v7 + 177167569] + a2[2];
  v9 = dword_140404A6C[177167565];
  v24[5] = dword_140404A6C[177167565]++;
  v10 = (int)(3 * dword_140404A6C[2 * v3 + 178322644]);
  v11 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v11 + 177167567] = *(float *)&dword_140404A6C[v10 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v11 + 177167568] = *(float *)&dword_140404A6C[v10 + 177167568] + a2[1];
  *(float *)&dword_140404A6C[v11 + 177167569] = *(float *)&dword_140404A6C[v10 + 177167569] + a2[2];
  v12 = dword_140404A6C[177167565];
  v24[6] = dword_140404A6C[177167565]++;
  v13 = (int)(3 * dword_140404A6C[2 * v3 + 178322645]);
  v14 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v14 + 177167567] = *(float *)&dword_140404A6C[v13 + 177167567] + *a2;
  *(float *)&dword_140404A6C[v14 + 177167568] = *(float *)&dword_140404A6C[v13 + 177167568] + a2[1];
  v15 = *(float *)&dword_140404A6C[v13 + 177167569];
  v16 = &dword_1402B3674;
  *(float *)&dword_140404A6C[v14 + 177167569] = v15 + a2[2];
  LODWORD(v14) = dword_140404A6C[177167565];
  v24[7] = dword_140404A6C[177167565]++;
  dword_140404A6C[2 * v3 + 178322644] = v12;
  dword_140404A6C[2 * v3 + 178322642] = v6;
  dword_140404A6C[2 * v3 + 178322643] = v9;
  dword_140404A6C[2 * v3 + 178322645] = v14;
  v17 = dword_140404A6C[178322641];
  do
  {
    v18 = *v16;
    dword_140404A6C[4 * v17 + 178322642] = v24[*(v16 - 1)];
    v19 = v24[v18];
    v20 = v16[1];
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v19;
    v21 = v24[v20];
    v22 = v16[2];
    v16 += 4;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v21;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v24[v22];
    v17 = ++dword_140404A6C[178322641];
  }
  while ( (__int64)v16 < (__int64)&dword_1402B36B4 );
  return MEMORY[0x1401F8B20]((unsigned __int64)v24 ^ v25);
}

