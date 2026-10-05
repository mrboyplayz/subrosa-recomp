/* Address: 0x1400cdbd0 | Name: sub_1400CDBD0 | Size: 1054 bytes */
__int64 __fastcall sub_1400CDBD0(unsigned int a1, signed int a2, signed int a3, int a4, int a5, int a6)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  int v9; // r15d
  int v10; // r13d
  float v11; // xmm6_4
  __int64 v12; // rbx
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm8_4
  float v17; // xmm10_4
  float v18; // xmm9_4
  unsigned int v19; // ebx
  __int64 v20; // r9
  unsigned int v21; // eax
  unsigned int v22; // r13d
  bool v23; // zf
  unsigned int *v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r8
  _DWORD *v27; // rcx
  __int64 v29; // [rsp+0h] [rbp-C9h] BYREF
  unsigned int v30; // [rsp+30h] [rbp-99h]
  int v31; // [rsp+34h] [rbp-95h]
  unsigned int v32; // [rsp+38h] [rbp-91h]
  unsigned int v33[4]; // [rsp+40h] [rbp-89h] BYREF
  __int128 v34; // [rsp+50h] [rbp-79h] BYREF
  __int128 v35; // [rsp+60h] [rbp-69h]
  float v36; // [rsp+70h] [rbp-59h]
  __int64 v37; // [rsp+78h] [rbp-51h]

  v7 = a2;
  v30 = a1;
  v8 = a3;
  v9 = 1 << a2;
  v32 = a2;
  if ( ((unsigned int)sub_1400169B0(a3, a4, a5, a6) & (1 << a2)) == 0 )
  {
    v34 = xmmword_140278D30;
    v35 = xmmword_140278D30;
    v10 = HIBYTE(v30) & 3;
    v30 &= 0x3FFu;
    v11 = *(float *)&dword_140404A6C[263004 * v8 + 111579653];
    v36 = 1.0;
    sub_14007B2A0((__int64)&v34, (float *)&dword_1402F6188);
    v12 = 3792LL * v30 + 116 * v7;
    v13 = *(float *)((char *)&dword_140404A6C[272299434] + v12);
    v14 = *(float *)((char *)&dword_140404A6C[272299435] + v12);
    v15 = *(float *)((char *)&dword_140404A6C[272299436] + v12);
    v16 = (float)((float)((float)((float)((float)a4 + 0.5) * v11) + (float)(*(float *)&v34 * v13))
                + (float)(*((float *)&v34 + 3) * v14))
        + (float)(*((float *)&v35 + 2) * v15);
    *(float *)v33 = v16;
    v17 = (float)((float)((float)((float)a5 * v11) + (float)(*((float *)&v34 + 1) * v13)) + (float)(*(float *)&v35 * v14))
        + (float)(*((float *)&v35 + 3) * v15);
    *(float *)&v33[1] = v17;
    v18 = (float)((float)((float)((float)((float)a6 + 0.5) * v11) + (float)(*((float *)&v34 + 2) * v13))
                + (float)(*((float *)&v35 + 1) * v14))
        + (float)(v36 * v15);
    v34 = *(_OWORD *)((char *)&dword_140404A6C[272299437] + v12);
    *(float *)&v33[2] = v18;
    v35 = *(_OWORD *)((char *)&dword_140404A6C[272299441] + v12);
    v36 = *(float *)((char *)&dword_140404A6C[272299445] + v12);
    sub_14007B2A0((__int64)&v34, (float *)&dword_1402F6188);
    v31 = sub_140054130(
            *(unsigned int *)((char *)&dword_140404A6C[272299433] + v12),
            v33,
            nullptr,
            (unsigned int *)&v34);
    if ( v31 != -1 )
    {
      v19 = v9 | sub_1400169B0(v8, a4, a5, a6);
      sub_140017110(v8, a4, a5, a6, v19);
      sub_1400516B0(v8, a4, a5, a6, v19, 1u);
      v20 = 1760LL * v31;
      v21 = v32;
      v22 = v30 + (v10 << 24);
      v23 = dword_140404A6C[v20 + 278845898] == 39;
      dword_140404A6C[v20 + 278846091] = 1;
      dword_140404A6C[v20 + 278846092] = v8;
      dword_140404A6C[v20 + 278846093] = a4;
      dword_140404A6C[v20 + 278846094] = a5;
      dword_140404A6C[v20 + 278846095] = a6;
      dword_140404A6C[v20 + 278846096] = v22;
      dword_140404A6C[v20 + 278846097] = v21;
      if ( v23 && (int)dword_140404A6C[225641186] > 0 )
      {
        v24 = &dword_140404A6C[225641222];
        v25 = dword_140404A6C[225641186];
        do
        {
          if ( v16 >= *((float *)v24 - 3)
            && v16 < *(float *)v24
            && v17 >= *((float *)v24 - 2)
            && v17 < *((float *)v24 + 1)
            && v18 >= *((float *)v24 - 1)
            && v18 < *((float *)v24 + 2) )
          {
            v26 = (int)v24[12959];
            if ( v26 > 0 )
            {
              v27 = v24 + 12962;
              do
              {
                if ( a5 == *(v27 - 1) && a6 == *v27 && a4 == *(v27 - 2) )
                {
                  v23 = *(v24 - 19) == 1;
                  dword_140404A6C[v20 + 278846098] = v27[1];
                  if ( v23 )
                    dword_140404A6C[v20 + 278847323] = v24[103];
                }
                v27 += 4;
                --v26;
              }
              while ( v26 );
            }
          }
          v24 += 14019;
          --v25;
        }
        while ( v25 );
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v29 ^ v37);
}

