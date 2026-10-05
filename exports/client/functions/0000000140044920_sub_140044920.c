/* Address: 0x140044920 | Name: sub_140044920 | Size: 2767 bytes */
_UNKNOWN **sub_140044920()
{
  _UNKNOWN **result; // rax
  __int64 v1; // r13
  __int64 v2; // r15
  signed int v3; // eax
  signed int v4; // edx
  char *v5; // rcx
  unsigned int v6; // eax
  int v7; // ebp
  int v8; // ebx
  signed int v9; // r8d
  char v10; // r10
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  __int64 v13; // r14
  __int64 v14; // rdi
  int v15; // esi
  signed int v16; // edx
  __int64 v17; // r9
  _BYTE *v18; // r8
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  _BYTE *v22; // rdx
  char *v23; // rbx
  __int64 v24; // r12
  int v25; // ebp
  unsigned int v26; // r15d
  __int64 v27; // rsi
  __int64 v28; // r13
  signed int v29; // eax
  char v30; // r9
  unsigned int v31; // r10d
  unsigned int v32; // ecx
  __int64 v33; // rdi
  unsigned int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  signed int v37; // eax
  int v38; // r9d
  __int64 v39; // r8
  unsigned int v40; // r10d
  unsigned int v41; // r9d
  __int64 v42; // r9
  unsigned int v43; // r10d
  unsigned int v44; // eax
  signed int v45; // edx
  unsigned int v46; // r8d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( dword_140404A6C[284024501] != -1 )
  {
    v1 = (int)dword_140404A6C[284024501];
    v2 = 3597LL * (int)dword_140404A6C[284024501];
    dword_140404A6C[289301094] = dword_1402B2658;
    *(_QWORD *)&dword_140404A6C[289301092] = 9;
    LOBYTE(dword_140404A6C[289301095]) = 4;
    *(unsigned int *)((char *)&dword_140404A6C[289301095] + 1) = dword_140404A6C[283831447];
    sub_14010E610(&dword_140404A6C[v2 + 71856293], 24);
    sub_14010E610(&dword_140404A6C[v2 + 71856294], 24);
    sub_14010E610(&dword_140404A6C[v2 + 71856295], 24);
    sub_14010E610(&dword_140404A6C[v2 + 71856296], 24);
    sub_14010E610(&dword_140404A6C[v2 + 71856297], 24);
    sub_14010E610(&dword_140404A6C[v2 + 71856298], 24);
    sub_14010E610(&dword_140404A6C[v2 + 71856299], 24);
    sub_14010E610(&dword_140404A6C[v2 + 71856300], 24);
    sub_14010E610(&dword_140404A6C[v2 + 71856301], 24);
    sub_14010E610(&dword_140404A6C[v2 + 71856309], 24);
    sub_14010E610(&dword_140404A6C[v2 + 71856310], 24);
    v3 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v3 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v3) = dword_140404A6C[v2 + 71856325];
      dword_140404A6C[289301092] += 4;
    }
    sub_140115D90(&dword_140404A6C[v2 + 71856339], 8);
    sub_140115D90(&dword_140404A6C[v2 + 71856330], 4);
    sub_140115D90(&dword_140404A6C[308307069], 16);
    v4 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v4 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v4) = dword_140404A6C[456202728];
      v4 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] = v4;
      if ( v4 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v4;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v4;
        }
        v5 = (char *)&dword_140404A6C[289301094] + v4;
        v6 = dword_140404A6C[284024504];
        *(_QWORD *)v5 = *(_QWORD *)&dword_140404A6C[284024502];
        *((_DWORD *)v5 + 2) = v6;
        v4 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] += 12;
      }
    }
    v7 = dword_140404A6C[v2 + 71856363];
    v8 = dword_140404A6C[v2 + 71856362] - v7;
    if ( (int)dword_140404A6C[v2 + 71856362] < v7 )
      v8 += 64;
    if ( v8 > 15 )
      v8 = 15;
    v9 = 4;
    if ( v4 < 0x10000 )
    {
      v10 = dword_140404A6C[289301093];
      v11 = v8 & 0xF;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v4) &= ~(((1 << v9) - 1) << v10);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v11 << SLOBYTE(dword_140404A6C[289301093]);
        v12 = 8 - dword_140404A6C[289301093];
        if ( v9 < 8 - dword_140404A6C[289301093] )
          break;
        dword_140404A6C[289301093] = 0;
        if ( v9 == v12 )
        {
          ++dword_140404A6C[289301092];
          goto LABEL_25;
        }
        v9 -= v12;
        v4 = dword_140404A6C[289301092] + 1;
        v11 >>= v12;
        ++dword_140404A6C[289301092];
        v10 = 0;
        if ( v9 <= 0 )
          goto LABEL_25;
      }
      dword_140404A6C[289301093] += v9;
    }
LABEL_25:
    sub_140115D90(&dword_140404A6C[v2 + 71856363], 8);
    if ( v8 > 0 )
    {
      v13 = (unsigned int)v8;
      while ( 1 )
      {
        v14 = v2 * 4 + 84LL * v7;
        sub_140115D90((char *)&dword_140404A6C[71856367] + v14, 4);
        v15 = *(unsigned int *)((char *)&dword_140404A6C[71856367] + v14);
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            sub_140115D90((char *)&dword_140404A6C[71856368] + v14, 6);
            v19 = *(unsigned int *)((char *)&dword_140404A6C[71856368] + v14);
            if ( v19 > 0 )
            {
              v20 = (unsigned int)v19;
              v21 = dword_140404A6C[289301092];
              v22 = (char *)&dword_140404A6C[71856372] + v14;
              do
              {
                if ( v21 < 0x10000 )
                {
                  if ( (int)dword_140404A6C[289301093] > 0 )
                  {
                    ++v21;
                    dword_140404A6C[289301093] = 0;
                    dword_140404A6C[289301092] = v21;
                  }
                  *((_BYTE *)&dword_140404A6C[289301094] + v21) = *v22;
                  v21 = ++dword_140404A6C[289301092];
                }
                ++v22;
                --v20;
              }
              while ( v20 );
            }
            v23 = (char *)&dword_140404A6C[71856369] + v14;
            sub_140115D90((char *)&dword_140404A6C[71856369] + v14, 4);
            v16 = dword_140404A6C[289301092];
LABEL_48:
            if ( v15 == 3 )
            {
              sub_140115D90((char *)&dword_140404A6C[71856368] + v14, 16);
              sub_140115D90(v23, 16);
              sub_140115D90((char *)&dword_140404A6C[71856370] + v14, 16);
              v16 = dword_140404A6C[289301092];
            }
            else if ( (unsigned int)(v15 - 4) <= 1 && v16 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v16;
                dword_140404A6C[289301093] = 0;
                dword_140404A6C[289301092] = v16;
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v16) = *(unsigned int *)((char *)&dword_140404A6C[71856368]
                                                                                             + v14);
              v16 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v16;
              if ( v16 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v16;
                  dword_140404A6C[289301093] = 0;
                  dword_140404A6C[289301092] = v16;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v16) = *(unsigned int *)((char *)&dword_140404A6C[71856369]
                                                                                               + v14);
                v16 = dword_140404A6C[289301092] + 4;
                dword_140404A6C[289301092] += 4;
              }
            }
            goto LABEL_61;
          }
          v16 = dword_140404A6C[289301092];
        }
        else
        {
          sub_140115D90((char *)&dword_140404A6C[71856368] + v14, 8);
          v16 = dword_140404A6C[289301092];
          if ( (int)dword_140404A6C[289301092] < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              v16 = dword_140404A6C[289301092] + 1;
              dword_140404A6C[289301093] = 0;
              ++dword_140404A6C[289301092];
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v16) = *(unsigned int *)((char *)&dword_140404A6C[71856369]
                                                                                           + v14);
            v16 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] += 4;
          }
          v17 = 16;
          v18 = (char *)&dword_140404A6C[71856372] + v14;
          do
          {
            if ( v16 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v16;
                dword_140404A6C[289301093] = 0;
                dword_140404A6C[289301092] = v16;
              }
              *((_BYTE *)&dword_140404A6C[289301094] + v16) = *v18;
              v16 = ++dword_140404A6C[289301092];
            }
            ++v18;
            --v17;
          }
          while ( v17 );
        }
        v23 = (char *)&dword_140404A6C[71856369] + v14;
        if ( v15 != 2 )
          goto LABEL_48;
        sub_140115D90((char *)&dword_140404A6C[71856368] + v14, 16);
        sub_140115D90((char *)&dword_140404A6C[71856369] + v14, 16);
        v16 = dword_140404A6C[289301092];
LABEL_61:
        v7 = ((_BYTE)v7 + 1) & 0x3F;
        if ( !--v13 )
          goto LABEL_64;
      }
    }
    v16 = dword_140404A6C[289301092];
LABEL_64:
    v24 = 32901 * v1;
    v25 = 11;
    v26 = dword_140404A6C[32901 * v1 + 299853696] & 0x3F;
    dword_140404A6C[32901 * v1 + 299853696] = v26;
    v27 = ((_BYTE)v26 - 6) & 0x3F;
    if ( (_DWORD)v27 != v26 )
    {
      v28 = 32901 * v1;
      do
      {
        v29 = 6;
        if ( v16 < 0x10000 )
        {
          v30 = dword_140404A6C[289301093];
          v31 = v27;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v16) &= ~(((1 << v29) - 1) << v30);
            *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + 0x140000000LL) |= (_BYTE)v31 << SLOBYTE(dword_140404A6C[289301093]);
            v32 = 8 - dword_140404A6C[289301093];
            if ( v29 < 8 - dword_140404A6C[289301093] )
              break;
            dword_140404A6C[289301093] = 0;
            if ( v29 == v32 )
            {
              ++dword_140404A6C[289301092];
              goto LABEL_74;
            }
            v29 -= v32;
            v16 = dword_140404A6C[289301092] + 1;
            v31 >>= v32;
            ++dword_140404A6C[289301092];
            v30 = 0;
            if ( v29 <= 0 )
              goto LABEL_74;
          }
          dword_140404A6C[289301093] += v29;
        }
LABEL_74:
        v33 = v27 + v28;
        sub_140115D90(&dword_140404A6C[v33 + 299853762], 11);
        sub_140115D90(&dword_140404A6C[v33 + 299853698], 2);
        v16 = dword_140404A6C[289301092];
        v34 = dword_140404A6C[v33 + 299853762];
        if ( (int)dword_140404A6C[289301092] < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            v16 = dword_140404A6C[289301092] + 1;
            dword_140404A6C[289301093] = 0;
            ++dword_140404A6C[289301092];
          }
          MEMORY[0x1401FC920](
            (char *)&dword_140404A6C[289301094] + v16,
            &dword_140404A6C[512 * (unsigned __int64)(unsigned int)v27 + 299853826 + v24]);
          v16 = v34 + dword_140404A6C[289301092];
          dword_140404A6C[289301092] += v34;
        }
        v27 = ((_BYTE)v27 + 1) & 0x3F;
      }
      while ( (_DWORD)v27 != v26 );
    }
    sub_140115D90(0x140000000LL + v24 * 4 + 1203628128, 1);
    v37 = dword_140404A6C[289301092];
    v38 = 8;
    v39 = dword_140404A6C[289301093];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      v40 = LOBYTE(dword_140404A6C[284021982]);
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v37) &= ~(((1 << v38) - 1) << v39);
        v35 = (int)dword_140404A6C[289301092] + 1161417732LL;
        *(_BYTE *)(v35 + 0x140000000LL) |= (_BYTE)v40 << SLOBYTE(dword_140404A6C[289301093]);
        v36 = 8 - dword_140404A6C[289301093];
        v37 = dword_140404A6C[289301092];
        if ( v38 < (unsigned int)v36 )
          break;
        if ( v38 == (_DWORD)v36 )
        {
          v37 = ++dword_140404A6C[289301092];
          v39 = 0;
          goto LABEL_87;
        }
        v37 = dword_140404A6C[289301092] + 1;
        v40 >>= 8 - LOBYTE(dword_140404A6C[289301093]);
        v39 = 0;
        ++dword_140404A6C[289301092];
        v38 -= v36;
        dword_140404A6C[289301093] = 0;
        if ( v38 <= 0 )
          goto LABEL_88;
      }
      v39 = v38 + dword_140404A6C[289301093];
LABEL_87:
      dword_140404A6C[289301093] = v39;
LABEL_88:
      if ( v37 < 0x10000 )
      {
        v41 = dword_140404A6C[421835947] & 0x7FF;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v37) &= ~(((1 << v25) - 1) << v39);
          v35 = (int)dword_140404A6C[289301092] + 1161417732LL;
          *(_BYTE *)(v35 + 0x140000000LL) |= (_BYTE)v41 << SLOBYTE(dword_140404A6C[289301093]);
          v36 = 8 - dword_140404A6C[289301093];
          v37 = dword_140404A6C[289301092];
          if ( v25 < (unsigned int)v36 )
            break;
          if ( v25 == (_DWORD)v36 )
          {
            v37 = ++dword_140404A6C[289301092];
            v39 = 0;
            goto LABEL_96;
          }
          v37 = dword_140404A6C[289301092] + 1;
          v41 >>= 8 - LOBYTE(dword_140404A6C[289301093]);
          v39 = 0;
          ++dword_140404A6C[289301092];
          v25 -= v36;
          dword_140404A6C[289301093] = 0;
          if ( v25 <= 0 )
            goto LABEL_97;
        }
        v39 = v25 + dword_140404A6C[289301093];
LABEL_96:
        dword_140404A6C[289301093] = v39;
      }
    }
LABEL_97:
    v42 = 8;
    if ( v37 < 0x10000 )
    {
      v43 = LOBYTE(dword_140404A6C[421846188]);
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v37) &= ~(((1 << v42) - 1) << v39);
        v35 = (int)dword_140404A6C[289301092] + 1161417732LL;
        *(_BYTE *)(v35 + 0x140000000LL) |= (_BYTE)v43 << SLOBYTE(dword_140404A6C[289301093]);
        v36 = 8 - dword_140404A6C[289301093];
        if ( (unsigned int)v42 < (unsigned int)v36 )
          break;
        if ( (_DWORD)v42 == (_DWORD)v36 )
        {
          ++dword_140404A6C[289301092];
          dword_140404A6C[289301093] = 0;
          goto LABEL_105;
        }
        v39 = 0;
        v37 = dword_140404A6C[289301092] + 1;
        v43 >>= 8 - LOBYTE(dword_140404A6C[289301093]);
        v42 = (unsigned int)(v42 - v36);
        ++dword_140404A6C[289301092];
        dword_140404A6C[289301093] = 0;
        if ( (int)v42 <= 0 )
          goto LABEL_105;
      }
      dword_140404A6C[289301093] += v42;
    }
LABEL_105:
    v44 = MEMORY[0x140198F9B](v36, v35, v39, v42);
    v45 = dword_140404A6C[289301092];
    dword_140404A6C[LOBYTE(dword_140404A6C[430859442]) + 430859443] = v44;
    v46 = dword_140404A6C[430859442];
    if ( v45 < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        ++v45;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v45;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v45) = dword_140404A6C[430859442];
      v45 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] += 4;
    }
    if ( v45 < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        ++v45;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v45;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v45) = *(_DWORD *)(4LL * (unsigned __int8)v46
                                                                               + 1727651128
                                                                               + 0x140000000LL);
      dword_140404A6C[289301092] += 4;
    }
    dword_140404A6C[430859442] = v46 + 1;
    return (_UNKNOWN **)sub_140130350(
                          dword_140404A6C[456202714],
                          LOWORD(dword_140404A6C[456202715]),
                          *(_QWORD *)&dword_140404A6C[456202717]);
  }
  return result;
}

