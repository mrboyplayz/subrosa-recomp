/* Address: 0x140090ba0 | Name: sub_140090BA0 | Size: 2371 bytes */
void __fastcall sub_140090BA0(unsigned int a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // r15
  unsigned int v6; // r13d
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  int v11; // edx
  int v12; // r8d
  int v13; // r14d
  int v14; // edx
  int v15; // r14d
  __int64 v16; // r12
  int v17; // eax
  int v18; // xmm1_4
  int v19; // xmm0_4
  signed int v20; // r14d
  int j; // edi
  int i; // edi
  __int64 v23; // rcx
  int v24; // r13d
  int v25; // xmm1_4
  int v26; // xmm0_4
  signed int v27; // r12d
  int v28; // edi
  int v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // r12
  __int64 k; // rsi
  int v36; // ecx
  __int64 v37; // rdi
  int *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rbp
  int v43; // esi
  int v44; // eax
  __int64 v45; // rdi
  int v46; // [rsp+20h] [rbp-298h]
  int v47; // [rsp+28h] [rbp-290h] BYREF
  int v48; // [rsp+2Ch] [rbp-28Ch]
  int v49; // [rsp+30h] [rbp-288h]
  __int64 v50; // [rsp+38h] [rbp-280h]
  __int128 v51; // [rsp+40h] [rbp-278h] BYREF
  __int128 v52; // [rsp+50h] [rbp-268h]
  int v53; // [rsp+60h] [rbp-258h]
  char Src[512]; // [rsp+70h] [rbp-248h] BYREF

  v3 = 3597LL * (int)a1;
  v4 = (unsigned __int8)a2;
  v46 = a2 >> 16;
  v5 = dword_16D67D63C[v3];
  if ( (_DWORD)v5 == -1 )
    return;
  v6 = dword_16D67D624[v3];
  LODWORD(v50) = v6;
  switch ( (unsigned __int8)a2 )
  {
    case 0x80u:
      dword_16D67D704[v3] = 14;
      return;
    case 0x81u:
      dword_16D67D704[v3] = 15;
      return;
    case 0x82u:
      dword_16D67D704[v3] = 16;
      return;
    case 0x83u:
      dword_16D67D704[v3] = 17;
      return;
    case 0x84u:
      dword_16D67D704[v3] = 18;
      return;
    case 0x85u:
      dword_16D67D704[v3] = 19;
      return;
  }
  v7 = dword_16D67D704[v3];
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
  v46 = 0;
  if ( !(_BYTE)a2 )
  {
    v10 = 14;
LABEL_71:
    if ( *(int *)((char *)&unk_16D67D608 + v3 * 4) < 10 )
    {
      v16 = 1268LL * v10;
      v17 = dword_1901220C4[v16];
      if ( dword_16D67D5EC[v3] >= v17 || !v17 )
      {
        v53 = 1065353216;
        v18 = dword_190941A48[7166 * v5 + 1];
        v47 = dword_190941A48[7166 * v5];
        v19 = dword_190941A48[7166 * v5 + 2];
        v48 = v18;
        v49 = v19;
        v51 = xmmword_1400F78B0;
        v52 = xmmword_1400F78B0;
        v20 = sub_14003B080(v10, &v47, nullptr, (int *)&v51);
        if ( v10 == 15 )
        {
          for ( i = 0; i < 2; ++i )
          {
            if ( (unsigned int)sub_140089E50(v20, -1, v5, i) )
              break;
          }
        }
        else
        {
          for ( j = 2; j < 7; ++j )
          {
            if ( (unsigned int)sub_140089E50(v20, -1, v5, j) )
              break;
          }
        }
        dword_16D67D5EC[v3] -= dword_1901220C4[v16];
        if ( dword_19154118C == 3 )
          sub_14003A560(a1);
        ++*(_DWORD *)((char *)&unk_16D67D608 + v3 * 4);
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
    v12 = dword_16D67D5EC[v3];
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
      ++dword_1910411A0[v5];
      v46 = v13;
      dword_16D680D64[v3] = v13;
      dword_16D67D5EC[v3] = v12 - v11;
      dword_190948964[7166 * v5] = v13;
      sub_14003A3D0(a1);
    }
    v8 = 1000;
  }
  if ( (unsigned int)(v4 - 4) <= 1 )
  {
    v14 = 10000;
    if ( (_DWORD)v4 != 4 )
      v14 = 1000;
    v8 = (unsigned int)dword_16D67D5EC[v3];
    if ( (_DWORD)v4 == 5 )
      v14 = 1000000;
    if ( (int)v8 >= v14 )
    {
      if ( (_DWORD)v4 == 4 )
        v15 = 1;
      else
        v15 = 2;
      ++dword_1910411A0[v5];
      v46 = v15;
      *(_DWORD *)&algn_16D680D74[v3 * 4] = v15;
      dword_16D67D5EC[v3] = v8 - v14;
      dword_190948970[7166 * v5] = v15;
      sub_14003A3D0(a1);
    }
  }
LABEL_85:
  if ( dword_16D67D704[v3] == 17 && (unsigned int)v4 < 8 )
  {
    if ( dword_196199824[4 * v4] )
    {
      if ( dword_16D67D5EC[v3] >= dword_196199830[4 * v4] && v6 <= 5 )
      {
        if ( (unsigned int)sub_1400B3510(0x140000000LL + 28664 * v5 + 1351883336, v6) )
        {
          v23 = (unsigned int)dword_196199828[4 * v4];
          if ( (_DWORD)v23 != -1 )
          {
            v24 = sub_1400924F0(v23, v6, (unsigned int)dword_19619982C[4 * v4]);
            if ( v24 != -1 )
            {
              v25 = *(_DWORD *)(0x140000004LL + 28664 * v5 + 1351883336);
              v47 = *(_DWORD *)(0x140000000LL + 28664 * v5 + 1351883336);
              v26 = *(_DWORD *)(0x140000008LL + 28664 * v5 + 1351883336);
              v48 = v25;
              v49 = v26;
              v53 = 1065353216;
              v51 = xmmword_1400F78B0;
              v52 = xmmword_1400F78B0;
              v27 = sub_14003B080(27, &v47, nullptr, (int *)&v51);
              v28 = 2;
              dword_19025F340[1760 * v27] = v24;
              do
              {
                if ( (unsigned int)sub_140089E50(v27, -1, v5, v28) )
                  break;
                ++v28;
              }
              while ( v28 < 7 );
              dword_16D67D5EC[v3] -= dword_196199830[4 * v4];
              sub_14003A560(a1);
              dword_196199824[4 * v4] = 0;
            }
            v6 = v50;
          }
        }
      }
    }
  }
  v29 = dword_16D67D704[v3];
  if ( v29 != 18 )
    goto LABEL_117;
  if ( (_DWORD)v4 )
  {
    switch ( (_DWORD)v4 )
    {
      case 1:
        sub_1400B2A10(a1, 10, v8, v9);
        break;
      case 2:
        sub_1400B2A10(a1, 100, v8, v9);
        break;
      case 3:
        sub_1400B2A10(a1, 1000, v8, v9);
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
        sub_1400B2B90(a1, v30);
        break;
    }
  }
  else
  {
    sub_1400B2A10(a1, 1, v8, v9);
  }
LABEL_116:
  sub_14003A560(a1);
  v29 = dword_16D67D704[v3];
LABEL_117:
  if ( v29 == 19 && v6 <= 5 )
  {
    v31 = 23492LL * (int)v6;
    v50 = (int)v6;
    if ( dword_1915414A4[v31 / 4] == a1 )
    {
      if ( (unsigned int)sub_1400B3510(&dword_190941A48[7166 * v5], v6) )
      {
        if ( (_DWORD)v4 == 6 )
        {
          v32 = *(int *)((char *)&unk_191546CFC + v31);
          if ( (int)v32 < 128 && v46 != a1 )
          {
            v33 = 3597LL * v46;
            if ( dword_16D67D624[v33] == v6 )
            {
              v34 = dword_16D67D63C[v33];
              dword_191546D00[5873 * (int)v6 + v32] = dword_16D67D5DC[v33];
              ++*(_DWORD *)((char *)&unk_191546CFC + v31);
              if ( (_DWORD)v34 != -1 )
              {
                for ( k = 0; k < 80; k += 10 )
                {
                  v36 = dword_190948498[7166 * v34 + k];
                  if ( v36 > 0 )
                  {
                    v37 = (unsigned int)v36;
                    v38 = &dword_19094849C[7166 * dword_16D67D63C[v33] + k];
                    do
                    {
                      v39 = *v38;
                      if ( (unsigned int)v39 <= 0x3FF )
                      {
                        v40 = 1760 * v39;
                        v41 = dword_19025F0D4[1760 * v39];
                        if ( dword_1901220D0[1268 * v41]
                          || dword_1901220E4[1268 * v41] > 0
                          || (unsigned int)(v41 - 13) <= 1
                          || (_DWORD)v41 == 27 )
                        {
                          dword_19025F0DC[v40] = 0;
                          if ( dword_19025F0F4[v40] > 0 )
                          {
                            dword_19025F0DC[1760 * dword_19025F0F8[v40]] = 0;
                            sub_140073D90(dword_19025F0F8[v40], v39);
                          }
                        }
                      }
                      ++v38;
                      --v37;
                    }
                    while ( v37 );
                  }
                }
                sub_14004B880(dword_16D67D63C[v33]);
              }
              sub_1400B2B90((unsigned int)v46, (unsigned int)dword_16D67D62C[v33]);
              dword_16D67D624[v33] = 17;
              *(_DWORD *)((char *)&unk_16D67D630 + v33 * 4) = 0;
              sub_14003A3D0(v46);
              sub_14003A560(v46);
              sub_1400DBB30(Src, "%s has been fired from %s");
              if ( dword_163D75B60 )
              {
                v42 = -1;
                do
                  ++v42;
                while ( Src[v42] );
                v43 = dword_196199564;
                if ( (int)v42 > 63 )
                  LODWORD(v42) = 63;
                v44 = dword_191541414;
                v45 = (__int64)dword_196199564 << 7;
                *(_DWORD *)((char *)&unk_195999560 + v45) = 2;
                *(_DWORD *)((char *)&unk_195999564 + v45) = v44;
                memcpy(&byte_1959995A0[v45], Src, (int)v42);
                byte_1959995A0[(int)v42 + v45] = 0;
                *(int *)((char *)&dword_195999580 + v45) = v42;
                *(int *)((char *)&dword_195999584 + v45) = 0;
                *(int *)((char *)&dword_195999588 + v45) = -1;
                dword_196199564 = v43 + 1;
                *(_DWORD *)((char *)&unk_19599958C + v45) = 0;
                HIWORD(dword_196199564) = 0;
              }
            }
          }
        }
      }
    }
  }
}

