/* Address: 0x14001c350 | Name: sub_14001C350 | Size: 1125 bytes */
void sub_14001C350()
{
  __int64 v0; // r13
  int v1; // r14d
  int v2; // eax
  __int64 v3; // rsi
  int v4; // r12d
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  char *v11; // r8
  _WORD *v12; // r9
  _DWORD *v13; // rcx
  _WORD *v14; // rdx
  __int64 v15; // r10
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rbp
  __int64 v21; // r11
  __int64 v22; // rbx
  __int64 v23; // r10
  __int64 v24; // rdi
  int *v25; // rax
  int v26; // r8d
  int v27; // r8d
  __int64 i; // r9
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx

  v0 = (unsigned int)dword_148BAAC80;
  v1 = 0;
  if ( dword_148BAAC80 > 0 )
  {
    v2 = dword_148BAAC7C;
    v3 = 0;
    v4 = dword_148BAAC78;
    do
    {
      v5 = 0;
      if ( v2 >= 0 )
      {
        v6 = (unsigned int)(v2 + 1);
        do
        {
          v7 = 0;
          if ( v4 >= 0 )
          {
            v8 = (unsigned int)(v4 + 1);
            v9 = v5 + (v3 << 6);
            v10 = 3840 * v9;
            v11 = (char *)&unk_1469AABE4 + 4864 * v9;
            v12 = (_WORD *)(0x140000000LL + 4864 * v9 + 110799872);
            v13 = (_DWORD *)((char *)&unk_148BAAC98 + 3840 * v9);
            v14 = (_WORD *)((char *)&unk_148BAACAC + v10);
            do
            {
              *((_DWORD *)v11 - 1) = *(v13 - 1);
              *(_DWORD *)v11 = *v13;
              *(v12 - 2) = *(v14 - 2);
              *(v12 - 1) = *(v14 - 1);
              *v12 = *v14;
              v12[1] = v14[1];
              v12[2] = v14[2];
              v12[3] = v14[3];
              v12[4] = v14[4];
              v12[5] = v14[5];
              v12[6] = v14[6];
              v12[7] = v14[7];
              v12[8] = v14[8];
              v12[9] = v14[9];
              v12[10] = v14[10];
              v12[11] = v14[11];
              v12[12] = v14[12];
              v12[13] = v14[13];
              *((_QWORD *)v11 + 2) = (unsigned int)v13[3];
              if ( v1 >= (int)v0 - 1
                || (v15 = 60 * (v7 + ((v5 + ((v3 + 1) << 6)) << 6)), !*(_DWORD *)((char *)&unk_148BAAC94 + v15))
                || !*(_DWORD *)((char *)&unk_148BAAC98 + v15)
                || *(_DWORD *)((char *)&unk_148BAACA4 + v15) )
              {
                *((_DWORD *)v11 + 5) = 1;
              }
              ++v7;
              *((_DWORD *)v11 + 1) = *(v13 - 2);
              v14 += 30;
              v12 += 38;
              *((_DWORD *)v11 + 2) = v13[1];
              *((_DWORD *)v11 + 3) = v13[2];
              v16 = v13[12];
              v13 += 15;
              *((_DWORD *)v11 + 17) = v16;
              v11 += 76;
              --v8;
            }
            while ( v8 );
            v4 = dword_148BAAC78;
          }
          ++v5;
          --v6;
        }
        while ( v6 );
        v2 = dword_148BAAC7C;
      }
      ++v1;
      ++v3;
    }
    while ( v1 < (int)v0 );
    v17 = 0;
    v18 = v0;
    do
    {
      v19 = 0;
      if ( v2 >= 0 )
      {
        v20 = (unsigned int)(v2 + 1);
        do
        {
          v21 = 0;
          if ( v4 >= 0 )
          {
            v22 = v17 + v19;
            v23 = 2432 * (v17 + v19);
            v24 = (unsigned int)(v4 + 1);
            v25 = (int *)((char *)&unk_1469AABEC + 4864 * v17 + 4864 * v19);
            do
            {
              if ( *(v25 - 3) == 0x40000000 )
              {
                v26 = *(v25 - 2);
                if ( v26 == 0xFFFF
                  || !v26
                  || *((_DWORD *)&unk_15AE31834 + 58 * (unsigned __int16)v26)
                  || (v26 & 0xC0000000) == 0xC0000000 )
                {
                  v27 = 1;
                  for ( i = 1; i < 5; i += 4 )
                  {
                    switch ( i )
                    {
                      case 1LL:
                        v29 = dword_1469ABEEC[1216 * v22 + 19 * v21];
                        break;
                      case 2LL:
                        v29 = v25[1];
                        break;
                      case 3LL:
                        v29 = *v25;
                        break;
                      default:
                        v29 = v25[20];
                        break;
                    }
                    if ( (unsigned int)(v29 - 3) <= 0xC )
                      word_1469AABFC[i + v23] += 0x8000;
                    if ( v27 )
                    {
                      if ( v27 == 1 )
                      {
                        v30 = v25[1];
                      }
                      else if ( v27 == 2 )
                      {
                        v30 = *v25;
                      }
                      else
                      {
                        v30 = v25[20];
                      }
                    }
                    else
                    {
                      v30 = dword_1469ABEEC[1216 * v22 + 19 * v21];
                    }
                    if ( (unsigned int)(v30 - 3) <= 0xC )
                      word_1469AABFE[i + v23] += 0x8000;
                    if ( v27 == -1 )
                    {
                      v31 = dword_1469ABEEC[1216 * v22 + 19 * v21];
                    }
                    else if ( v27 )
                    {
                      if ( v27 == 1 )
                        v31 = *v25;
                      else
                        v31 = v25[20];
                    }
                    else
                    {
                      v31 = v25[1];
                    }
                    if ( (unsigned int)(v31 - 3) <= 0xC )
                      word_1469AAC00[i + v23] += 0x8000;
                    if ( v27 == -2 )
                    {
                      v32 = dword_1469ABEEC[1216 * v22 + 19 * v21];
                    }
                    else if ( v27 == -1 )
                    {
                      v32 = v25[1];
                    }
                    else if ( v27 )
                    {
                      v32 = v25[20];
                    }
                    else
                    {
                      v32 = *v25;
                    }
                    if ( (unsigned int)(v32 - 3) <= 0xC )
                      word_1469AAC02[i + v23] += 0x8000;
                    v27 += 4;
                  }
                }
              }
              ++v21;
              v25 += 19;
              v23 += 38;
              --v24;
            }
            while ( v24 );
            v4 = dword_148BAAC78;
          }
          ++v19;
          --v20;
        }
        while ( v20 );
        v2 = dword_148BAAC7C;
      }
      v17 += 64;
      --v18;
    }
    while ( v18 );
  }
}

