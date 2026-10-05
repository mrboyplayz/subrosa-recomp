/* Address: 0x1400ed0f0 | Name: sub_1400ED0F0 | Size: 939 bytes */
__int64 sub_1400ED0F0()
{
  __int64 result; // rax
  int *v1; // r13
  int v2; // r12d
  _DWORD *v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rsi
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rax
  int i; // ebx
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r11
  _DWORD *v13; // r10
  char *v14; // rax
  char *v15; // r8
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rcx
  int *v20; // rax
  __int64 v21; // rax
  char *v22; // r8
  char *v23; // rdx
  char v24; // al
  int v25; // r15d
  int v26; // ebp
  int *v27; // r14
  unsigned __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rdi
  int v31; // edx
  char *v32; // r8
  unsigned __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-248h]
  int j; // [rsp+20h] [rbp-248h]
  char Buffer[512]; // [rsp+30h] [rbp-238h] BYREF

  result = (unsigned int)dword_163D95E7C;
  v1 = (int *)&unk_163D95E88;
  v2 = 0;
  v34 = 0;
  if ( dword_163D95E7C > 0 )
  {
    v3 = &unk_163D95E88;
    v4 = 0;
    do
    {
      v5 = 64;
      do
      {
        v6 = 0;
        if ( &dword_163D95E8C[259 * v2] )
          v6 = rand() % *v3;
        v7 = dword_163D95E8C[v4 + v6];
        v8 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_163D841E0[v8] )
            break;
          v8 = rand() & 0x1F;
        }
        sub_1400DBB30(Buffer, "%s.DOC", off_140147A40[v8]);
        v10 = 10280 * v7;
        v11 = 0;
        v12 = *((int *)&unk_18F7184CC + 2570 * v7);
        if ( (int)v12 <= 0 )
        {
LABEL_17:
          v18 = 0;
          v19 = 0;
          v20 = dword_18EE07480;
          while ( *v20 )
          {
            ++v18;
            ++v19;
            v20 += 290;
            if ( (__int64)v20 >= (__int64)dword_18F717480 )
              goto LABEL_26;
          }
          if ( v18 != -1 )
          {
            v21 = 290 * v19;
            dword_18EE07480[v21] = 1;
            dword_18EE07480[v21 + 257] = 0;
            if ( (int)v12 < 256 )
            {
              *(_DWORD *)((char *)&unk_18F7184D0 + 24 * v12 + v10) = v18;
              v22 = Buffer;
              v23 = (char *)&unk_18F7184D4 + 24 * *(int *)((char *)&unk_18F7184CC + v10) + v10;
              do
              {
                v24 = *v22++;
                *v23++ = v24;
              }
              while ( v24 );
              dword_18F7184E4[6 * (*(_DWORD *)((char *)&unk_18F7184CC + v10))++ + v10 / 4] = 0;
            }
          }
        }
        else
        {
          v13 = &dword_18F7184E4[v10 / 4];
          while ( 1 )
          {
            if ( !*v13 )
            {
              v14 = (char *)&unk_18F7184D4 + 24 * v11 + v10;
              v15 = (char *)(Buffer - v14);
              do
              {
                v16 = (unsigned __int8)v15[(_QWORD)v14];
                v17 = (unsigned __int8)*v14 - v16;
                if ( v17 )
                  break;
                ++v14;
              }
              while ( v16 );
              if ( !v17 )
                break;
            }
            v11 = (unsigned int)(v11 + 1);
            v13 += 6;
            if ( (int)v11 >= (int)v12 )
              goto LABEL_17;
          }
        }
LABEL_26:
        --v5;
      }
      while ( v5 );
      v4 += 259;
      result = (unsigned int)dword_163D95E7C;
      v2 = v34 + 1;
      v3 += 259;
      v34 = v2;
    }
    while ( v2 < dword_163D95E7C );
    v1 = (int *)&unk_163D95E88;
  }
  v25 = 0;
  for ( j = 0; v25 < (int)result; j = v25 )
  {
    v26 = 0;
    if ( *v1 > 0 )
    {
      v27 = v1 + 1;
      do
      {
        v28 = 10280LL * *v27;
        if ( *(int *)((char *)&unk_18F7184CC + v28) > 1 )
        {
          v29 = 64;
          do
          {
            v30 = rand() % *(_DWORD *)((char *)&unk_18F7184CC + v28);
            v31 = rand() % *(_DWORD *)((char *)&unk_18F7184CC + v28);
            if ( (_DWORD)v30 != v31 )
            {
              v32 = (char *)&unk_18F7184D0 + 24 * v30 + v28;
              v33 = v28 + 24LL * v31;
              *(_OWORD *)&dword_18F7184E4[v28 / 4 + 1531] = *(_OWORD *)v32;
              *(_QWORD *)&dword_18F7184E4[v28 / 4 + 1535] = *((_QWORD *)v32 + 2);
              *(_OWORD *)v32 = *(_OWORD *)((char *)&unk_18F7184D0 + v33);
              *((_QWORD *)v32 + 2) = *(_QWORD *)((char *)&unk_18F7184E0 + v33);
              *(_OWORD *)((char *)&unk_18F7184D0 + v33) = *(_OWORD *)&dword_18F7184E4[v28 / 4 + 1531];
              *(_QWORD *)((char *)&unk_18F7184E0 + v33) = *(_QWORD *)&dword_18F7184E4[v28 / 4 + 1535];
            }
            --v29;
          }
          while ( v29 );
        }
        ++v26;
        ++v27;
      }
      while ( v26 < *v1 );
      result = (unsigned int)dword_163D95E7C;
      v25 = j;
    }
    ++v25;
    v1 += 259;
  }
  return result;
}

