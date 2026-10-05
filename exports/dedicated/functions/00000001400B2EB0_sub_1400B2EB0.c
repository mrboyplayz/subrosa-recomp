/* Address: 0x1400b2eb0 | Name: sub_1400B2EB0 | Size: 1354 bytes */
void sub_1400B2EB0()
{
  int v0; // r9d
  __int64 *v1; // r14
  int v2; // ebx
  _DWORD *v3; // r12
  int v4; // r11d
  int v5; // r13d
  __int64 v6; // r10
  int v7; // esi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // zf
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 *v15; // r15
  int v16; // eax
  int *v17; // rbp
  int v18; // eax
  int *v19; // r8
  int *v20; // r11
  __int64 v21; // rdi
  __int64 v22; // r10
  __int64 v23; // r9
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // r9
  int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // [rsp+30h] [rbp+8h]

  v0 = HIDWORD(xmmword_1915FBCD8);
  v1 = &qword_16D67D6F8;
  v2 = HIDWORD(qword_1915413B4);
  v3 = &unk_16D67D664;
  v4 = dword_191541390;
  v5 = dword_19154118C;
  v6 = 256;
  v7 = 0;
  v36 = 256;
  do
  {
    if ( !*((_DWORD *)v1 - 86) )
      goto LABEL_48;
    v8 = *((_DWORD *)v1 - 48);
    if ( v8 > 0 )
      *((_DWORD *)v1 - 48) = v8 - 1;
    v9 = *((int *)v1 - 47);
    if ( (_DWORD)v9 != -1 )
    {
      v10 = 7166 * v9;
      v11 = *((int *)v1 - 47);
      v12 = dword_1909419F0[7166 * v9] == -1;
      *((_DWORD *)&unk_1909419D8 + 7166 * v9) = *((_DWORD *)v1 - 51);
      if ( !v12 )
        goto LABEL_13;
      if ( *(_DWORD *)v1 == 1 )
      {
        v13 = 28664 * v11;
        *(_DWORD *)&algn_190941AC4[v13 + 44] = *(v3 - 9);
        *(_DWORD *)&algn_190941AC4[v13 + 48] = *(v3 - 8);
        *(_DWORD *)&algn_190941AC4[v13 + 52] = *(v3 - 7);
        *(_DWORD *)&algn_190941AC4[v13 + 56] = *(v3 - 6);
        dword_190941B00[v13 / 4] = *(v3 - 5);
        dword_190941B04[v13 / 4] = *(v3 - 4);
        dword_190941B08[v13 / 4] = *(v3 - 3);
        *(_DWORD *)&algn_190941B0C[v13] = *(v3 - 2);
        *(_DWORD *)&algn_190941B0C[v13 + 4] = *(v3 - 1);
        *(_DWORD *)&algn_190941B0C[v13 + 8] = *v3;
        *(_DWORD *)&algn_190941B0C[v13 + 12] = v3[1];
        *(_DWORD *)&algn_190941B0C[v13 + 16] = v3[2];
        *(_DWORD *)&algn_190941B0C[v13 + 20] = v3[3];
        *(_DWORD *)&algn_190941B0C[v13 + 24] = v3[4];
        *(_DWORD *)&algn_190941B0C[v13 + 28] = v3[5];
        *(_DWORD *)&algn_190941B0C[v13 + 32] = v3[6];
        *(_DWORD *)&algn_190941B0C[v13 + 36] = v3[7];
        *(_DWORD *)&algn_190941B0C[v13 + 40] = v3[8];
        *(_DWORD *)&algn_190941B0C[v13 + 44] = v3[9];
        *(_DWORD *)&algn_190941B0C[v13 + 48] = v3[10];
        if ( v5 == 7 && v2 < 60 * v0 )
        {
          *(_DWORD *)&algn_190941AC4[v10 * 4 + 48] = 0;
          *(_DWORD *)&algn_190941AC4[v10 * 4 + 56] = 0;
        }
      }
      else
      {
        dword_190941B00[v10] = *(_DWORD *)((char *)&unk_190941A60 + v10 * 4);
        dword_190941B04[v10] = dword_190941A64[v10];
      }
      if ( dword_1909419F0[v10] != -1 )
      {
LABEL_13:
        if ( (unsigned int)(*(_DWORD *)v1 - 2) <= 1 )
        {
          v14 = 28664 * v11;
          *(_DWORD *)&algn_190941AC4[v14 + 44] = *(v3 - 9);
          *(_DWORD *)&algn_190941AC4[v14 + 48] = *(v3 - 8);
          *(_DWORD *)&algn_190941AC4[v14 + 52] = *(v3 - 7);
          *(_DWORD *)&algn_190941AC4[v14 + 56] = *(v3 - 6);
          dword_190941B00[v14 / 4] = *(v3 - 5);
          dword_190941B04[v14 / 4] = *(v3 - 4);
          dword_190941B08[v14 / 4] = *(v3 - 3);
          *(_DWORD *)&algn_190941B0C[v14] = *(v3 - 2);
        }
      }
      *(_DWORD *)&byte_190941BDC[v10 * 4] = *((_DWORD *)v1 - 14);
      v15 = v1 + 688;
      *(_DWORD *)&algn_190941A08[v10 * 4 + 32] = *((_DWORD *)v1 - 9);
      v16 = dword_190941A04[v10];
      if ( v16 < 0 )
        v16 = 0;
      v17 = &dword_19094849C[v10];
      *((_DWORD *)v1 + 1372) = v16;
      do
      {
        v18 = *(v17 - 1);
        *((_DWORD *)v15 - 1) = v18;
        if ( v18 > 0 )
        {
          v19 = (int *)v15;
          v20 = v17;
          v21 = (unsigned int)v18;
          do
          {
            v22 = 1760LL * *v20;
            v23 = dword_19025F0D4[v22];
            *v19 = v23;
            v24 = v23;
            if ( (unsigned int)v7 < 2 )
            {
              if ( dword_1901220D0[1268 * v23] )
              {
                if ( dword_19025F0F4[v22] > 0 )
                {
                  v24 = v23 | 0x100;
                  v25 = 7040LL * dword_19025F0F8[v22];
                  *v19 = v23 | 0x100;
                  if ( !*(_DWORD *)((char *)&unk_19025F204 + v25) )
                  {
                    v24 = v23 | 0x300;
                    *v19 = v23 | 0x300;
                  }
                }
              }
              if ( (_DWORD)v23 == 16 && dword_19025F0F4[v22] > 0 )
              {
                v24 |= 0x100u;
                *v19 = v24;
              }
              if ( dword_1901220E4[1268 * v23] > 0 )
                *v19 = v24 | (*(_DWORD *)((char *)&unk_19025F204 + v22 * 4) << 8);
            }
            ++v20;
            ++v19;
            --v21;
          }
          while ( v21 );
        }
        ++v7;
        v15 = (__int64 *)((char *)v15 + 36);
        v17 += 10;
      }
      while ( v7 < 7 );
      v5 = dword_19154118C;
      v6 = v36;
      v7 = 0;
      v4 = dword_191541390;
      v2 = HIDWORD(qword_1915413B4);
    }
    if ( v5 == 4 )
    {
      v26 = *((int *)v1 - 53);
      if ( (unsigned int)v26 > 5 )
      {
        v27 = 0;
        v28 = 0;
      }
      else
      {
        v27 = *((_DWORD *)&qword_17AE3AD40 + 5 * v26 + 1);
        v28 = *((_DWORD *)&qword_17AE3AD40 + 5 * v26);
      }
      *((_DWORD *)v1 - 66) = v28;
      *((_DWORD *)v1 - 65) = v27;
      v29 = *((int *)v1 - 71);
      if ( (_DWORD)v29 == -1 )
        goto LABEL_47;
      v30 = *((_DWORD *)v1 - 67);
      if ( (unsigned int)v26 <= 5 )
        v30 = (int)(float)((float)((float)(dword_1961996A4[6 * v26] * 0.94999999) * (float)*((int *)v1 - 51))
                         + (float)v30);
      v31 = 112 * v29;
      *(_DWORD *)((char *)&unk_16DDCBA64 + v31) = v30;
      *(_DWORD *)((char *)&unk_16DDCBA68 + v31) = *((_DWORD *)v1 - 64);
      *(_DWORD *)((char *)&unk_16DDCBA6C + v31) = *((_DWORD *)v1 - 63);
      *(_DWORD *)((char *)&unk_16DDCBA70 + v31) = *((_DWORD *)v1 - 48);
    }
    if ( v5 == 3 && v4 != 1 )
    {
      v32 = *((int *)v1 - 71);
      if ( (_DWORD)v32 != -1 )
      {
        v33 = *((int *)v1 - 53);
        v34 = *((_DWORD *)v1 - 67);
        v35 = 112 * v32;
        if ( (_DWORD)v33 == -1 )
          *(_DWORD *)((char *)&unk_16DDCBA64 + v35) = v34;
        else
          *(_DWORD *)((char *)&unk_16DDCBA64 + v35) = (int)(float)((float)((float)(dword_1961996A4[6 * v33] * 0.98000002)
                                                                         * (float)*((int *)v1 - 51))
                                                                 + (float)v34);
      }
    }
LABEL_47:
    v0 = HIDWORD(xmmword_1915FBCD8);
    *((_DWORD *)v1 - 13) = *((_DWORD *)v1 - 14);
LABEL_48:
    v3 += 3597;
    v1 = (__int64 *)((char *)v1 + 14388);
    v36 = --v6;
  }
  while ( v6 );
}

