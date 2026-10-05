/* Address: 0x14009a370 | Name: sub_14009A370 | Size: 630 bytes */
__int64 __fastcall sub_14009A370(int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // r8d
  int *v4; // rbx
  int v5; // ebp
  int v6; // ecx
  int *v7; // rdi
  void **v8; // rsi
  int v9; // r13d
  int v10; // r9d
  int v11; // r15d
  int v12; // r12d
  int v13; // r14d
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v18; // edi
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // edx
  unsigned int v23; // r10d
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  __int64 v27; // rdx
  int *v28; // [rsp+20h] [rbp-58h]
  int v29; // [rsp+80h] [rbp+8h]
  void **v30; // [rsp+88h] [rbp+10h]
  unsigned int *v31; // [rsp+98h] [rbp+20h]

  v1 = 44LL * a1;
  result = dword_140404A6C[v1 + 284024936] - 6407;
  if ( (unsigned int)result <= 1 )
  {
    v3 = dword_140404A6C[v1 + 284024933];
    v4 = (int *)&dword_140404A6C[v1 + 284024933];
    v5 = 1;
    v31 = &dword_140404A6C[v1 + 284024933];
    v6 = 1;
    v29 = 1;
    if ( (v3 & 0xFFFFFFFE) != 0 )
    {
      do
        result = (unsigned int)(v3 >> ++v6);
      while ( (_DWORD)result );
      v29 = v6;
    }
    dword_140404A6C[v1 + 284024935] = v6;
    if ( v6 > 1 )
    {
      v7 = (int *)&dword_140404A6C[v1 + 284024934];
      v8 = (void **)&dword_140404A6C[v1 + 284024947];
      v28 = v7;
      v30 = v8;
      do
      {
        free(*v8);
        *v8 = (void *)j__malloc_base(4 * (*v4 >> v5) * (*v7 >> v5));
        v9 = 0;
        result = (unsigned int)(*v7 >> v5);
        if ( (int)result > 0 )
        {
          v10 = *v4;
          v11 = 0;
          do
          {
            v12 = 0;
            if ( v10 >> v5 > 0 )
            {
              v13 = 0;
              do
              {
                v14 = 0;
                v15 = 0;
                v16 = 0;
                v17 = 0;
                v18 = 0;
                v19 = *(__int64 *)((char *)v8
                                 + (char *)&dword_140404A6C[284024933]
                                 - (char *)&dword_140404A6C[284024947]
                                 + 48);
                do
                {
                  v20 = (v11 + v18++) * (v10 >> (v5 - 1));
                  v21 = v13 + v20;
                  v22 = *(_DWORD *)(v19 + 4 * v21);
                  v23 = (unsigned __int8)v22 + v14;
                  v24 = HIBYTE(v22) + v17;
                  v25 = *(_DWORD *)(v19 + 4 * v21 + 4);
                  v14 = (unsigned __int8)v25 + v23;
                  v15 += BYTE1(v25) + (unsigned __int8)BYTE1(*(_DWORD *)(v19 + 4 * v21));
                  v17 = HIBYTE(v25) + v24;
                  v16 += BYTE2(v25) + (unsigned __int8)BYTE2(*(_DWORD *)(v19 + 4 * v21));
                }
                while ( v18 < 2 );
                v8 = v30;
                v13 += 2;
                v26 = (v16 >> 2) + (v17 >> 2 << 8);
                v4 = (int *)v31;
                v27 = v12 + v9 * (v10 >> v5);
                ++v12;
                *((_DWORD *)*v30 + v27) = (v14 >> 2) + (((v15 >> 2) + (v26 << 8)) << 8);
                v10 = *v31;
              }
              while ( v12 < (int)*v31 >> v5 );
              v7 = v28;
            }
            result = (unsigned int)(*v7 >> v5);
            ++v9;
            v11 += 2;
          }
          while ( v9 < (int)result );
        }
        ++v8;
        ++v5;
        v30 = v8;
      }
      while ( v5 < v29 );
    }
  }
  return result;
}

