/* Address: 0x1400f45a0 | Name: sub_1400F45A0 | Size: 1391 bytes */
__int64 __fastcall sub_1400F45A0(signed int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r11
  int v6; // ecx
  int v7; // eax
  unsigned int *v8; // r9
  int v9; // eax
  unsigned int *v10; // r9
  int v11; // eax
  unsigned int *v12; // r9
  int v13; // eax
  unsigned int *v14; // r9
  int v15; // eax
  unsigned int *v16; // r9
  int v17; // eax
  unsigned int *v18; // r10
  int v19; // r8d
  unsigned int v20; // xmm1_4
  unsigned int v21; // eax
  __int64 v22; // r8
  const char *v23; // r9
  __int64 v24; // rbp
  unsigned int v25; // esi
  unsigned int v26; // eax
  __int64 v27; // rdi
  __int64 v29; // [rsp+0h] [rbp-498h] BYREF
  unsigned int v30[4]; // [rsp+20h] [rbp-478h] BYREF
  _OWORD v31[2]; // [rsp+30h] [rbp-468h] BYREF
  int v32; // [rsp+50h] [rbp-448h]
  _BYTE Src[1024]; // [rsp+60h] [rbp-438h] BYREF
  __int64 v34; // [rsp+460h] [rbp-38h]

  v2 = a1;
  v3 = a2;
  if ( (unsigned int)a1 <= 5 )
  {
    v4 = 5873LL * a1;
    if ( dword_140404A6C[v4 + 283831510] == -1 )
    {
      if ( dword_140404A6C[283831312] == 4 )
      {
        v5 = 3597LL * a2;
        v6 = dword_140404A6C[v5 + 71856275];
        if ( v6 <= 0 )
          v6 = 0;
        dword_140404A6C[5 * v2 + 188872238] = v6;
        if ( !dword_140404A6C[180001071] && (int)dword_140404A6C[539 * v2 + 180001074] > 0 )
        {
          v7 = 0;
          if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
            v7 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
          if ( v7 > 1000 )
            v7 = 1000;
          dword_140404A6C[539 * v2 + 180001074] = dword_140404A6C[180001072]
                                                + (signed int)(v7 * dword_140404A6C[180001072]) / 100;
        }
        if ( !dword_140404A6C[180035724] )
        {
          v8 = &dword_140404A6C[539 * v2 + 180035727];
          if ( (int)*v8 > 0 )
          {
            v9 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v9 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v9 > 1000 )
              v9 = 1000;
            *v8 = dword_140404A6C[180035725] + (signed int)(v9 * dword_140404A6C[180035725]) / 100;
          }
        }
        if ( !dword_140404A6C[180070377] )
        {
          v10 = &dword_140404A6C[539 * v2 + 180070380];
          if ( (int)*v10 > 0 )
          {
            v11 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v11 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v11 > 1000 )
              v11 = 1000;
            *v10 = dword_140404A6C[180070378] + (signed int)(v11 * dword_140404A6C[180070378]) / 100;
          }
        }
        if ( !dword_140404A6C[180105030] )
        {
          v12 = &dword_140404A6C[539 * v2 + 180105033];
          if ( (int)*v12 > 0 )
          {
            v13 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v13 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v13 > 1000 )
              v13 = 1000;
            *v12 = dword_140404A6C[180105031] + (signed int)(v13 * dword_140404A6C[180105031]) / 100;
          }
        }
        if ( !dword_140404A6C[180139683] )
        {
          v14 = &dword_140404A6C[539 * v2 + 180139686];
          if ( (int)*v14 > 0 )
          {
            v15 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v15 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v15 > 1000 )
              v15 = 1000;
            *v14 = dword_140404A6C[180139684] + (signed int)(v15 * dword_140404A6C[180139684]) / 100;
          }
        }
        if ( !dword_140404A6C[180174336] )
        {
          v16 = &dword_140404A6C[539 * v2 + 180174339];
          if ( (int)*v16 > 0 )
          {
            v17 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v17 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v17 > 1000 )
              v17 = 1000;
            *v16 = dword_140404A6C[180174337] + (signed int)(v17 * dword_140404A6C[180174337]) / 100;
          }
        }
        if ( !dword_140404A6C[180208989] )
        {
          v18 = &dword_140404A6C[539 * v2 + 180208992];
          if ( (int)*v18 > 0 )
          {
            v19 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v19 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v19 > 1000 )
              v19 = 1000;
            *v18 = dword_140404A6C[180208990] + (signed int)(v19 * dword_140404A6C[180208990]) / 100;
          }
        }
      }
      sub_1400F3D10(v2);
      v20 = dword_140404A6C[v4 + 283831499];
      v30[0] = dword_140404A6C[v4 + 283831498];
      v30[2] = dword_140404A6C[v4 + 283831500];
      v30[1] = v20;
      v32 = 1065353216;
      v31[0] = xmmword_140278D30;
      v31[1] = xmmword_140278D30;
      sub_14007B2A0((__int64)v31, (float *)v31 + 3);
      v21 = sub_140054130(25, v30, nullptr, (unsigned int *)v31);
      if ( v21 != -1 )
      {
        v22 = 1760LL * (int)v21;
        dword_140404A6C[v22 + 278846051] = 0;
        dword_140404A6C[v22 + 278845981] = 1111 * (v2 + 1);
        sub_140051940(v21);
      }
      v23 = off_1402B2890[v2];
      dword_140404A6C[v4 + 283831510] = v3;
      sub_140158AB0(Src, "%s is now manager of %s", (const char *)&dword_140404A6C[3597 * v3 + 71856254], v23);
      if ( dword_140404A6C[456202453] )
      {
        v24 = -1;
        do
          ++v24;
        while ( Src[v24] );
        v25 = dword_140404A6C[308307070];
        if ( (int)v24 > 63 )
          LODWORD(v24) = 63;
        v26 = dword_140404A6C[283831474];
        v27 = (__int64)(int)dword_140404A6C[308307070] << 7;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v27) = 2;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v27) = v26;
        MEMORY[0x1401FC920]((char *)&dword_140404A6C[297756301] + v27, Src);
        *((_BYTE *)&dword_140404A6C[297756301] + v27 + (int)v24) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v27) = v24;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v27) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v27) = -1;
        dword_140404A6C[308307070] = v25 + 1;
        *(unsigned int *)((char *)&dword_140404A6C[297756296] + v27) = 0;
        HIWORD(dword_140404A6C[308307070]) = 0;
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v29 ^ v34);
}

