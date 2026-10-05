/* Address: 0x1400eda80 | Name: sub_1400EDA80 | Size: 1243 bytes */
__int64 __fastcall sub_1400EDA80(int a1, char *a2, int a3, unsigned int *a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r13
  char *v8; // rcx
  char v9; // al
  FILE *v10; // rsi
  int v11; // r12d
  int i; // r15d
  __int64 v13; // rbx
  __int64 v14; // r14
  char *v15; // rdi
  char *v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rbp
  char *v20; // rbx
  __int64 v21; // rdi
  char *v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned int v25; // ecx
  int Buffer; // [rsp+60h] [rbp+8h] BYREF

  result = a1;
  v5 = 1060912LL * a1;
  if ( *(FILE **)((char *)&Stream + v5) && dword_1407A92A8[265228 * a1] )
  {
    *((_DWORD *)&unk_1407A92B8 + 265228 * a1 + 16 * (unsigned __int64)(unsigned int)dword_1407A92B4[265228 * a1]) = a3;
    v8 = (char *)&unk_1407A92C4 + 1060912 * a1 + 64 * (unsigned __int64)(unsigned int)dword_1407A92B4[265228 * a1];
    do
    {
      v9 = *a2++;
      *v8++ = v9;
    }
    while ( v9 );
    *(_DWORD *)((char *)&unk_1407A92BC + 64 * (unsigned __int64)(unsigned int)dword_1407A92B4[v5 / 4] + v5) = ftell(*(FILE **)((char *)&Stream + v5));
    switch ( a3 )
    {
      case 1482293249:
        v10 = *(FILE **)((char *)&Stream + v5);
        if ( v10 )
        {
          Buffer = 1;
          fwrite(&Buffer, 4u, 1u, v10);
          fwrite(&dword_15AD76740, 4u, 1u, v10);
          fwrite(&dword_15AD76744, 4u, 1u, v10);
          fwrite(&dword_15AD76748, 4u, 1u, v10);
          fwrite(&dword_15AD7674C, 4u, 1u, v10);
          fwrite(&dword_15AD76750, 4u, 1u, v10);
          fwrite(&dword_15AD76754, 4u, 1u, v10);
          fwrite(&dword_15AD76758, 4u, 1u, v10);
          fwrite(&dword_15AD7675C, 4u, 1u, v10);
          fwrite(&dword_15AD76760, 4u, 1u, v10);
          fwrite(&dword_15AD76764, 4u, 1u, v10);
          v11 = 0;
          for ( i = 0; i < dword_15AD76764; ++i )
          {
            v13 = 348LL * i;
            fwrite((char *)&unk_15AD76774 + v13, 4u, 1u, v10);
            fwrite((char *)&unk_15AD7676C + v13, 4u, 1u, v10);
            fwrite((char *)&unk_15AD76778 + v13, 4u, 1u, v10);
            fwrite((char *)&unk_15AD76770 + v13, 4u, 1u, v10);
            fwrite((char *)&unk_15AD768BC + v13, 4u, 1u, v10);
            fwrite((char *)&unk_15AD768C0 + v13, 4u, 1u, v10);
            v14 = 4;
            v15 = (char *)&unk_15AD7683C + v13;
            v16 = (char *)(0x140000000LL + v13 + 450324348);
            do
            {
              v17 = 4;
              do
              {
                fwrite(v16, 4u, 3u, v10);
                fwrite(v15, 4u, 2u, v10);
                v16 += 12;
                v15 += 8;
                --v17;
              }
              while ( v17 );
              --v14;
            }
            while ( v14 );
          }
          fwrite(&dword_15ADA1F68, 4u, 1u, v10);
          if ( dword_15ADA1F68 > 0 )
          {
            do
            {
              v18 = 8;
              v19 = 124LL * v11;
              v20 = (char *)(0x140000000LL + v19 + 450502508);
              do
              {
                fwrite(v20, 4u, 3u, v10);
                v20 += 12;
                --v18;
              }
              while ( v18 );
              v21 = 6;
              v22 = (char *)(0x140000000LL + v19 + 450502604);
              do
              {
                fwrite(v22, 4u, 1u, v10);
                v22 += 4;
                --v21;
              }
              while ( v21 );
              fwrite((const void *)(0x140000000LL + v19 + 450502628), 4u, 1u, v10);
              ++v11;
            }
            while ( v11 < dword_15ADA1F68 );
          }
        }
        break;
      case 1482293250:
        sub_1400EE530(a4, *(FILE **)((char *)&Stream + v5));
        break;
      case 1482293252:
        sub_1400EEE40(*a4, *(FILE **)((char *)&Stream + v5), 1);
        break;
    }
    v23 = ftell(*(FILE **)((char *)&Stream + v5));
    v24 = v5 + ((unsigned __int64)(unsigned int)dword_1407A92B4[v5 / 4] << 6);
    *(_DWORD *)((char *)&unk_1407A92C0 + v24) = v23 - *(_DWORD *)((char *)&unk_1407A92BC + v24);
    v25 = dword_1407A92B4[v5 / 4];
    dword_1407A92B0[v5 / 4] += *(_DWORD *)((char *)&unk_1407A92C0 + 64 * (unsigned __int64)v25 + v5);
    result = v25 + 1;
    dword_1407A92B4[v5 / 4] = result;
  }
  return result;
}

