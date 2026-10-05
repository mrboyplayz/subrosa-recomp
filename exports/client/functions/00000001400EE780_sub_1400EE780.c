/* Address: 0x1400ee780 | Name: sub_1400EE780 | Size: 2371 bytes */
__int64 __fastcall sub_1400EE780(unsigned int a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // r15
  unsigned int v6; // r13d
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  int v11; // edx
  signed int v12; // r8d
  unsigned int v13; // r14d
  int v14; // edx
  unsigned int v15; // r14d
  __int64 v16; // r12
  signed int v17; // eax
  unsigned int v18; // xmm1_4
  unsigned int v19; // xmm0_4
  signed int v20; // r14d
  int j; // edi
  int i; // edi
  __int64 v23; // rcx
  unsigned int v24; // r13d
  unsigned int v25; // xmm1_4
  unsigned int v26; // xmm0_4
  signed int v27; // r12d
  int v28; // edi
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rdx
  unsigned int v34; // r14d
  __int64 v35; // rbp
  __int64 v36; // r12
  __int64 k; // rsi
  int v38; // ecx
  __int64 v39; // rdi
  unsigned int *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rbp
  unsigned int v45; // esi
  unsigned int v46; // eax
  __int64 v47; // rdi
  __int64 v49; // [rsp+0h] [rbp-2B8h] BYREF
  int v50; // [rsp+20h] [rbp-298h]
  unsigned int v51; // [rsp+28h] [rbp-290h] BYREF
  unsigned int v52; // [rsp+2Ch] [rbp-28Ch]
  unsigned int v53; // [rsp+30h] [rbp-288h]
  __int64 v54; // [rsp+38h] [rbp-280h]
  __int128 v55; // [rsp+40h] [rbp-278h] BYREF
  __int128 v56; // [rsp+50h] [rbp-268h]
  int v57; // [rsp+60h] [rbp-258h]
  _BYTE Src[512]; // [rsp+70h] [rbp-248h] BYREF
  __int64 v59; // [rsp+270h] [rbp-48h]

  v3 = 3597LL * (int)a1;
  v4 = (unsigned __int8)a2;
  v50 = a2 >> 16;
  v5 = (int)dword_140404A6C[v3 + 71856292];
  if ( (_DWORD)v5 == -1 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v49 ^ v59);
  v6 = dword_140404A6C[v3 + 71856286];
  LODWORD(v54) = v6;
  switch ( (unsigned __int8)a2 )
  {
    case 0x80u:
      dword_140404A6C[v3 + 71856342] = 14;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v49 ^ v59);
    case 0x81u:
      dword_140404A6C[v3 + 71856342] = 15;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v49 ^ v59);
    case 0x82u:
      dword_140404A6C[v3 + 71856342] = 16;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v49 ^ v59);
    case 0x83u:
      dword_140404A6C[v3 + 71856342] = 17;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v49 ^ v59);
    case 0x84u:
      dword_140404A6C[v3 + 71856342] = 18;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v49 ^ v59);
    case 0x85u:
      dword_140404A6C[v3 + 71856342] = 19;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v49 ^ v59);
  }
  v7 = dword_140404A6C[v3 + 71856342];
  v8 = 1000;
  v9 = -1;
  if ( v7 == 14 )
  {
    v10 = 11;
    if ( (_BYTE)a2 )
      v10 = -1;
    switch ( (unsigned __int8)a2 )
    {
      case 1u:
        v10 = 7;
        break;
      case 2u:
        v10 = 1;
        break;
      case 3u:
        v10 = 3;
        break;
      case 4u:
        v10 = 9;
        break;
      default:
        if ( v10 == -1 )
          goto LABEL_85;
        break;
    }
    goto LABEL_71;
  }
  if ( v7 == 15 )
  {
    if ( (_BYTE)a2 )
    {
      switch ( (unsigned __int8)a2 )
      {
        case 1u:
          v10 = 8;
          break;
        case 2u:
          v10 = 2;
          break;
        case 3u:
          v10 = 4;
          break;
        case 4u:
          v10 = 10;
          break;
        default:
          goto LABEL_85;
      }
    }
    else
    {
      v10 = 12;
    }
    goto LABEL_71;
  }
  if ( v7 != 16 )
    goto LABEL_85;
  v50 = 0;
  if ( !(_BYTE)a2 )
  {
    v10 = 14;
LABEL_71:
    if ( (int)dword_140404A6C[v3 + 71856279] < 10 )
    {
      v16 = 1268LL * v10;
      v17 = dword_140404A6C[v16 + 278521286];
      if ( (int)dword_140404A6C[v3 + 71856272] >= v17 || !v17 )
      {
        v57 = 1065353216;
        v18 = dword_140404A6C[7166 * v5 + 280651336];
        v51 = dword_140404A6C[7166 * v5 + 280651335];
        v19 = dword_140404A6C[7166 * v5 + 280651337];
        v52 = v18;
        v53 = v19;
        v55 = xmmword_140278D30;
        v56 = xmmword_140278D30;
        v20 = sub_140054130(v10, &v51, nullptr, (unsigned int *)&v55);
        if ( v10 == 15 )
        {
          for ( i = 0; i < 2; ++i )
          {
            if ( (unsigned int)sub_1400E35D0(v20, -1, v5, i) )
              break;
          }
        }
        else
        {
          for ( j = 2; j < 7; ++j )
          {
            if ( (unsigned int)sub_1400E35D0(v20, -1, v5, j) )
              break;
          }
        }
        dword_140404A6C[v3 + 71856272] -= dword_140404A6C[v16 + 278521286];
        if ( dword_140404A6C[283831312] == 3 )
          sub_140051F50(a1);
        ++dword_140404A6C[v3 + 71856279];
      }
    }
    goto LABEL_85;
  }
  if ( (unsigned __int8)a2 == 6 )
  {
    v10 = 13;
    goto LABEL_71;
  }
  if ( (unsigned __int8)a2 == 7 )
  {
    v10 = 15;
    goto LABEL_71;
  }
  if ( (unsigned int)(unsigned __int8)a2 - 1 <= 2 )
  {
    v11 = 5000;
    if ( (_DWORD)v4 != 1 )
      v11 = 1000;
    if ( (_DWORD)v4 == 2 )
    {
      v11 = 20000;
    }
    else if ( (_DWORD)v4 == 3 )
    {
      v11 = 100000;
    }
    v12 = dword_140404A6C[v3 + 71856272];
    if ( v12 >= v11 )
    {
      v13 = 3;
      if ( (_DWORD)v4 != 1 )
        v13 = 0;
      if ( (_DWORD)v4 == 2 )
      {
        v13 = 8;
      }
      else if ( (_DWORD)v4 == 3 )
      {
        v13 = 7;
      }
      ++dword_140404A6C[v5 + 282485789];
      v50 = v13;
      dword_140404A6C[v3 + 71859822] = v13;
      dword_140404A6C[v3 + 71856272] = v12 - v11;
      dword_140404A6C[7166 * v5 + 280658446] = v13;
      sub_140051DC0(a1);
    }
    v8 = 1000;
  }
  if ( (unsigned int)(v4 - 4) <= 1 )
  {
    v14 = 10000;
    if ( (_DWORD)v4 != 4 )
      v14 = 1000;
    v8 = dword_140404A6C[v3 + 71856272];
    if ( (_DWORD)v4 == 5 )
      v14 = 1000000;
    if ( (int)v8 >= v14 )
    {
      if ( (_DWORD)v4 == 4 )
        v15 = 1;
      else
        v15 = 2;
      ++dword_140404A6C[v5 + 282485789];
      v50 = v15;
      dword_140404A6C[v3 + 71859826] = v15;
      dword_140404A6C[v3 + 71856272] = v8 - v14;
      dword_140404A6C[7166 * v5 + 280658449] = v15;
      sub_140051DC0(a1);
    }
  }
LABEL_85:
  if ( dword_140404A6C[v3 + 71856342] == 17 && (unsigned int)v4 < 8 )
  {
    if ( dword_140404A6C[4 * v4 + 335047158] )
    {
      if ( (int)dword_140404A6C[v3 + 71856272] >= (int)dword_140404A6C[4 * v4 + 335047161] && v6 <= 5 )
      {
        if ( (unsigned int)sub_14011B8F0(0x140000000LL + 28664 * v5 + 1126818696, v6) )
        {
          v23 = dword_140404A6C[4 * v4 + 335047159];
          if ( (_DWORD)v23 != -1 )
          {
            v24 = sub_1400F00D0(v23, v6, dword_140404A6C[4 * v4 + 335047160]);
            if ( v24 != -1 )
            {
              v25 = *(_DWORD *)(0x140000004LL + 28664 * v5 + 1126818696);
              v51 = *(_DWORD *)(0x140000000LL + 28664 * v5 + 1126818696);
              v26 = *(_DWORD *)(0x140000008LL + 28664 * v5 + 1126818696);
              v52 = v25;
              v53 = v26;
              v57 = 1065353216;
              v55 = xmmword_140278D30;
              v56 = xmmword_140278D30;
              v27 = sub_140054130(27, &v51, nullptr, (unsigned int *)&v55);
              v28 = 2;
              dword_140404A6C[1760 * v27 + 278846053] = v24;
              do
              {
                if ( (unsigned int)sub_1400E35D0(v27, -1, v5, v28) )
                  break;
                ++v28;
              }
              while ( v28 < 7 );
              dword_140404A6C[v3 + 71856272] -= dword_140404A6C[4 * v4 + 335047161];
              sub_140051F50(a1);
              dword_140404A6C[4 * v4 + 335047158] = 0;
            }
            v6 = v54;
          }
        }
      }
    }
  }
  v29 = dword_140404A6C[v3 + 71856342];
  if ( v29 != 18 )
    goto LABEL_117;
  if ( (_DWORD)v4 )
  {
    switch ( (_DWORD)v4 )
    {
      case 1:
        sub_1401189F0(a1, 10, v8, v9);
        break;
      case 2:
        sub_1401189F0(a1, 100, v8, v9);
        break;
      case 3:
        sub_1401189F0(a1, 1000, v8, v9);
        break;
      default:
        switch ( (_DWORD)v4 )
        {
          case 4:
            v30 = 1;
            break;
          case 5:
            v30 = 10;
            break;
          case 6:
            v30 = 100;
            break;
          case 7:
            v30 = 1000;
            break;
          default:
            goto LABEL_116;
        }
        sub_14011AF80(a1, v30);
        break;
    }
  }
  else
  {
    sub_1401189F0(a1, 1, v8, v9);
  }
LABEL_116:
  sub_140051F50(a1);
  v29 = dword_140404A6C[v3 + 71856342];
LABEL_117:
  if ( v29 == 19 && v6 <= 5 )
  {
    v31 = (int)v6;
    v32 = 5873LL * (int)v6;
    v54 = (int)v6;
    if ( dword_140404A6C[v32 + 283831510] == a1 )
    {
      if ( (unsigned int)sub_14011B8F0(&dword_140404A6C[7166 * v5 + 280651335], v6) )
      {
        if ( (_DWORD)v4 == 6 )
        {
          v33 = (int)dword_140404A6C[v32 + 283837164];
          if ( (int)v33 < 128 )
          {
            v34 = v50;
            if ( v50 != a1 )
            {
              v35 = 3597LL * v50;
              if ( dword_140404A6C[v35 + 71856286] == v6 )
              {
                v36 = (int)dword_140404A6C[v35 + 71856292];
                dword_140404A6C[5873 * (int)v6 + 283837165 + v33] = dword_140404A6C[v35 + 71856268];
                ++dword_140404A6C[v32 + 283837164];
                if ( (_DWORD)v36 != -1 )
                {
                  for ( k = 0; k < 80; k += 10 )
                  {
                    v38 = dword_140404A6C[7166 * v36 + 280658139 + k];
                    if ( v38 > 0 )
                    {
                      v39 = (unsigned int)v38;
                      v40 = &dword_140404A6C[7166 * (int)dword_140404A6C[v35 + 71856292] + 280658140 + k];
                      do
                      {
                        v41 = (int)*v40;
                        if ( (unsigned int)v41 <= 0x3FF )
                        {
                          v42 = 1760 * v41;
                          v43 = (int)dword_140404A6C[1760 * v41 + 278845898];
                          if ( dword_140404A6C[1268 * v43 + 278521289]
                            || (int)dword_140404A6C[1268 * v43 + 278521294] > 0
                            || (unsigned int)(v43 - 13) <= 1
                            || (_DWORD)v43 == 27 )
                          {
                            dword_140404A6C[v42 + 278845900] = 0;
                            if ( (int)dword_140404A6C[v42 + 278845906] > 0 )
                            {
                              dword_140404A6C[1760 * dword_140404A6C[v42 + 278845907] + 278845900] = 0;
                              sub_1400CA9B0(dword_140404A6C[v42 + 278845907], v41);
                            }
                          }
                        }
                        ++v40;
                        --v39;
                      }
                      while ( v39 );
                    }
                  }
                  sub_14007F590(dword_140404A6C[v35 + 71856292]);
                  v31 = v54;
                }
                sub_14011AF80(v34, dword_140404A6C[v35 + 71856288]);
                dword_140404A6C[v35 + 71856286] = 17;
                dword_140404A6C[v35 + 71856289] = 0;
                sub_140051DC0(v34);
                sub_140051F50(v34);
                sub_140158AB0(
                  Src,
                  "%s has been fired from %s",
                  (const char *)&dword_140404A6C[v35 + 71856254],
                  off_1402B2890[v31]);
                if ( dword_140404A6C[456202453] )
                {
                  v44 = -1;
                  do
                    ++v44;
                  while ( Src[v44] );
                  v45 = dword_140404A6C[308307070];
                  if ( (int)v44 > 63 )
                    LODWORD(v44) = 63;
                  v46 = dword_140404A6C[283831474];
                  v47 = (__int64)(int)dword_140404A6C[308307070] << 7;
                  *(unsigned int *)((char *)&dword_140404A6C[297756285] + v47) = 2;
                  *(unsigned int *)((char *)&dword_140404A6C[297756286] + v47) = v46;
                  MEMORY[0x1401FC920]((char *)&dword_140404A6C[297756301] + v47, Src);
                  *((_BYTE *)&dword_140404A6C[297756301] + (int)v44 + v47) = 0;
                  *(unsigned int *)((char *)&dword_140404A6C[297756293] + v47) = v44;
                  *(unsigned int *)((char *)&dword_140404A6C[297756294] + v47) = 0;
                  *(unsigned int *)((char *)&dword_140404A6C[297756295] + v47) = -1;
                  dword_140404A6C[308307070] = v45 + 1;
                  *(unsigned int *)((char *)&dword_140404A6C[297756296] + v47) = 0;
                  HIWORD(dword_140404A6C[308307070]) = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v49 ^ v59);
}

