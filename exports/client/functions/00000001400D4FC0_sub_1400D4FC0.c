/* Address: 0x1400d4fc0 | Name: sub_1400D4FC0 | Size: 787 bytes */
__int64 __fastcall sub_1400D4FC0(signed int a1, int a2, signed int a3, int a4, unsigned int a5)
{
  int v5; // ebx
  int v7; // edi
  int v8; // ecx
  int v10; // esi
  unsigned int v13; // r8d
  unsigned int *v14; // rax
  __int64 v15; // r9
  int v16; // edx
  unsigned int v17; // r11d
  unsigned __int64 v18; // rbx
  unsigned int v19; // r8d
  __int64 v20; // r10
  __int64 v22; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v23; // [rsp+20h] [rbp-78h]
  __int16 *v24; // [rsp+28h] [rbp-70h]
  __int16 v25; // [rsp+30h] [rbp-68h] BYREF
  __int16 v26; // [rsp+32h] [rbp-66h]
  __int16 v27; // [rsp+34h] [rbp-64h]
  __int16 v28; // [rsp+36h] [rbp-62h]
  __int16 v29; // [rsp+38h] [rbp-60h]
  __int16 v30; // [rsp+3Ah] [rbp-5Eh]
  __int16 v31; // [rsp+3Ch] [rbp-5Ch]
  __int16 v32; // [rsp+3Eh] [rbp-5Ah]
  __int64 v33; // [rsp+40h] [rbp-58h]

  v5 = a2 >> 3;
  v7 = a3 >> 3;
  v8 = 0;
  v10 = a4 >> 3;
  v13 = -1;
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v14 = &dword_140404A6C[210457993];
    do
    {
      if ( *(v14 - 1) == a1 && *v14 == v5 && v14[1] == v7 && v14[2] == v10 )
        v13 = v8;
      ++v8;
      v14 += 3588;
    }
    while ( v8 < (int)dword_140404A6C[210457991] );
    if ( v13 != -1 )
      goto LABEL_12;
  }
  if ( (int)dword_140404A6C[210457991] < 4096 )
  {
    MEMORY[0x1401FCD30](&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992], 0, 14352);
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992] = a1;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457993] = v5;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457994] = v7;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457995] = v10;
    v13 = dword_140404A6C[210457991]++;
    if ( v13 != -1 )
    {
LABEL_12:
      v15 = a5 & 0xFFF;
      dword_140404A6C[3588 * v13 + 210460556 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
      v16 = HIBYTE(a5) & 3;
      v17 = dword_140404A6C[4242 * v15 + 193082775];
      v18 = (((unsigned __int64)a5 >> 16) & 0x1F) - 1;
      v19 = -v16 & 3;
      v20 = 16968 * v15 + 528 * v18;
      v25 = *(_WORD *)((char *)&dword_140404A6C[193082905] + v20);
      if ( (v17 & 0xE0000000) == 0x40000000 )
      {
        v26 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + v19 + 1);
        v27 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + (((unsigned __int8)v19 + 1) & 3) + 1);
        v28 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + (((unsigned __int8)v19 - 2) & 3) + 1);
        v29 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + (((unsigned __int8)v19 - 1) & 3) + 1);
        v30 = *(_WORD *)((char *)&dword_140404A6C[193082907] + v20 + 2);
        v31 = *(_WORD *)((char *)&dword_140404A6C[193082908] + v20);
        v32 = *(_WORD *)((char *)&dword_140404A6C[193082908] + v20 + 2);
        v24 = &v25;
        v23 = 0x40000000;
      }
      else
      {
        v26 = *(_WORD *)((char *)&dword_140404A6C[193082905] + v20 + 2);
        v27 = *(_WORD *)((char *)&dword_140404A6C[193082906] + v20);
        v28 = *(_WORD *)((char *)&dword_140404A6C[193082906] + v20 + 2);
        v29 = *(_WORD *)((char *)&dword_140404A6C[193082907] + v20);
        v30 = *(_WORD *)((char *)&dword_140404A6C[193082907] + v20 + 2);
        v31 = *(_WORD *)((char *)&dword_140404A6C[193082908] + v20);
        v32 = *(_WORD *)((char *)&dword_140404A6C[193082908] + v20 + 2);
        v24 = &v25;
        v23 = v17 + v16;
      }
      sub_14000F830(a1, a2, a3, a4, v23, v24);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v22 ^ v33);
}

