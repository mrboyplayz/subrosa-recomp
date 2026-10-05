/* Address: 0x1400de770 | Name: sub_1400DE770 | Size: 1149 bytes */
__int64 __fastcall sub_1400DE770(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  size_t v5; // rbp
  int v6; // ebx
  __int64 v7; // r14
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  BOOL v11; // r12d
  int v12; // eax
  int v13; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // r13d
  __int64 v20; // rcx
  int v21; // edx
  int v22; // eax
  char *v23; // r15
  int v24; // ebx
  int v25; // edi
  char *v26; // rsi
  int v27; // edi
  int v28; // r8d
  char v29; // di
  unsigned int v30; // ecx
  int v31; // edi
  char v32; // di
  int v33; // eax
  __int64 v34; // rdi
  int v35; // eax
  int v36; // [rsp+C0h] [rbp-68h]
  int v37; // [rsp+C4h] [rbp-64h]
  int v38; // [rsp+C8h] [rbp-60h]
  int v39; // [rsp+D0h] [rbp-58h]
  __int64 v40; // [rsp+D8h] [rbp-50h]
  int v43; // [rsp+140h] [rbp+18h]
  BOOL v44; // [rsp+148h] [rbp+20h]

  v43 = a3;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  v8 = a2;
  v9 = a4 - 1;
  v10 = 0;
  v11 = ((a4 - 2) & 0xFFFFFFFD) == 0;
  v44 = v11;
  if ( ((a4 - 2) & 0xFFFFFFFD) != 0 )
    v9 = a4;
  LOBYTE(v10) = v9 < 2;
  v12 = v10 + 2;
  if ( a3 < 0 || a2 < 0 )
    return 0;
  v13 = 8 * (v11 + v9);
  if ( !dword_140146A04 )
    return sub_1400E0FC0(v7, -1, -1, a2, a3, a4, 0, a5, v11, 0);
  sub_1400E1C70(v7, "111 221 2222 11", 0, 0, v12 + 8, 0, 0, 0, 0, 0, a2, a3, v13, 8 * v11);
  if ( dword_1402495F0 )
  {
    v15 = 0;
    v16 = 1;
  }
  else
  {
    v15 = v6 - 1;
    v6 = -1;
    v43 = -1;
    v16 = -1;
  }
  v37 = v16;
  v36 = v15;
  if ( v15 == v6 )
    goto LABEL_46;
  v17 = v5 * v8 * v15;
  v18 = v5 * v8 * v16;
  v38 = v17;
  v39 = v18;
  do
  {
    v19 = 0;
    v20 = a5 + v17;
    v40 = v20;
    if ( v8 <= 0 )
      goto LABEL_45;
    v21 = v8 - 1;
    do
    {
      v22 = 1;
      v23 = (char *)(v20 + (int)v5 * v19);
      v24 = 1;
      if ( v19 < v21 )
      {
        v24 = 2;
        v22 = memcmp((const void *)(v20 + (int)v5 * v19), (const void *)(v20 + (int)v5 * (v19 + 1)), v5);
        v25 = v19 + 2;
        if ( v22 )
        {
          v26 = v23;
          if ( v25 < a2 )
          {
            v27 = v5 * v25;
            while ( v24 < 128 )
            {
              if ( !memcmp(v26, (const void *)(v40 + v27), v5) )
              {
                --v24;
                break;
              }
              ++v24;
              v26 += v5;
              v27 += v5;
              if ( v24 + v19 >= a2 )
              {
                v28 = *(_DWORD *)(v7 + 80);
                v29 = v24;
                v8 = a2;
                v30 = v28 + 1;
                goto LABEL_32;
              }
            }
          }
          v28 = *(_DWORD *)(v7 + 80);
          v29 = v24;
          v8 = a2;
          v30 = v28 + 1;
LABEL_32:
          v32 = v29 - 1;
          v33 = v28;
          if ( v30 > 0x40 && v28 )
          {
            (*(void (__fastcall **)(_QWORD, __int64))v7)(*(_QWORD *)(v7 + 8), v7 + 16);
            v33 = 0;
            *(_DWORD *)(v7 + 80) = 0;
          }
          v11 = v44;
          *(_BYTE *)(v33 + v7 + 16) = v32;
          ++*(_DWORD *)(v7 + 80);
          if ( v24 > 0 )
          {
            v34 = (unsigned int)v24;
            do
            {
              sub_1400E18C0(v7, -1, v5, v44, 0, (__int64)v23);
              v23 += v5;
              --v34;
            }
            while ( v34 );
            v8 = a2;
          }
          goto LABEL_43;
        }
        if ( v25 < v8 )
        {
          v31 = v5 * v25;
          do
          {
            if ( v24 >= 128 )
              break;
            if ( memcmp(v23, (const void *)(v40 + v31), v5) )
              break;
            ++v24;
            v31 += v5;
          }
          while ( v24 + v19 < v8 );
          v7 = a1;
          v22 = 0;
        }
        v11 = v44;
      }
      v28 = *(_DWORD *)(v7 + 80);
      v29 = v24;
      v30 = v28 + 1;
      if ( v22 )
        goto LABEL_32;
      v35 = *(_DWORD *)(v7 + 80);
      if ( v30 > 0x40 && v28 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))v7)(*(_QWORD *)(v7 + 8), v7 + 16);
        v35 = 0;
        *(_DWORD *)(v7 + 80) = 0;
      }
      *(_BYTE *)(v35 + v7 + 16) = v24 + 127;
      ++*(_DWORD *)(v7 + 80);
      sub_1400E18C0(v7, -1, v5, v11, 0, (__int64)v23);
LABEL_43:
      v20 = v40;
      v21 = v8 - 1;
      v19 += v24;
    }
    while ( v19 < v8 );
    v15 = v36;
    v6 = v43;
    v18 = v39;
LABEL_45:
    v15 += v37;
    v17 = v18 + v38;
    v36 = v15;
    v38 += v18;
  }
  while ( v15 != v6 );
LABEL_46:
  if ( *(_DWORD *)(v7 + 80) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))v7)(*(_QWORD *)(v7 + 8), v7 + 16);
    *(_DWORD *)(v7 + 80) = 0;
  }
  return 1;
}

