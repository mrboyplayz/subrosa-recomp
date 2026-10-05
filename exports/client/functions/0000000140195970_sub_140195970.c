/* Address: 0x140195970 | Name: sub_140195970 | Size: 937 bytes */
__int64 sub_140195970()
{
  signed int v0; // eax
  unsigned int *v1; // r13
  int v2; // r12d
  unsigned int *v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rsi
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rax
  int i; // ebx
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r11
  unsigned int *v13; // r10
  unsigned int *v14; // rax
  _BYTE *v15; // r8
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int *v20; // rax
  __int64 v21; // rax
  char *v22; // r8
  unsigned int *v23; // rdx
  char v24; // al
  signed int v25; // r15d
  signed int v26; // ebp
  int *v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rdi
  int v31; // edx
  unsigned int *v32; // r8
  __int64 v33; // rax
  __int64 v35; // [rsp+0h] [rbp-268h] BYREF
  int j; // [rsp+20h] [rbp-248h]
  _BYTE v37[512]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v38; // [rsp+230h] [rbp-38h]

  v0 = dword_140404A6C[487149972];
  v1 = &dword_140404A6C[487149975];
  v2 = 0;
  j = 0;
  if ( (int)dword_140404A6C[487149972] > 0 )
  {
    v3 = &dword_140404A6C[487149975];
    v4 = 0;
    do
    {
      v5 = 64;
      do
      {
        v6 = 0;
        if ( &dword_140404A6C[259 * v2 + 487149976] )
          v6 = rand() % (int)*v3;
        v7 = (int)dword_140404A6C[v4 + 487149976 + v6];
        v8 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_140404A6C[v8 + 485542517] )
            break;
          v8 = rand() & 0x1F;
        }
        sub_140158AB0((__int64)v37, "%s.DOC", (const char *)*(&off_1402B2000 + v8));
        v10 = 2570 * v7;
        v11 = 0;
        v12 = (int)dword_140404A6C[2570 * v7 + 275754072];
        if ( (int)v12 <= 0 )
        {
LABEL_17:
          v18 = 0;
          v19 = 0;
          v20 = &dword_140404A6C[273377349];
          while ( *v20 )
          {
            ++v18;
            ++v19;
            v20 += 290;
            if ( (__int64)v20 >= (__int64)&dword_140404A6C[275753029] )
              goto LABEL_26;
          }
          if ( v18 != -1 )
          {
            v21 = 290 * v19;
            dword_140404A6C[v21 + 273377349] = 1;
            dword_140404A6C[v21 + 273377606] = 0;
            if ( (int)v12 < 256 )
            {
              dword_140404A6C[6 * v12 + 275754073 + v10] = v18;
              v22 = v37;
              v23 = &dword_140404A6C[6 * (int)dword_140404A6C[v10 + 275754072] + 275754074 + v10];
              do
              {
                v24 = *v22++;
                *(_BYTE *)v23 = v24;
                v23 = (unsigned int *)((char *)v23 + 1);
              }
              while ( v24 );
              dword_140404A6C[6 * (int)dword_140404A6C[v10 + 275754072]++ + 275754078 + v10] = 0;
            }
          }
        }
        else
        {
          v13 = &dword_140404A6C[v10 + 275754078];
          while ( 1 )
          {
            if ( !*v13 )
            {
              v14 = &dword_140404A6C[6 * v11 + 275754074 + v10];
              v15 = (_BYTE *)(v37 - (_BYTE *)v14);
              do
              {
                v16 = (unsigned __int8)v15[(_QWORD)v14];
                v17 = *(unsigned __int8 *)v14 - v16;
                if ( v17 )
                  break;
                v14 = (unsigned int *)((char *)v14 + 1);
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
      v0 = dword_140404A6C[487149972];
      v2 = j + 1;
      v3 += 259;
      j = v2;
    }
    while ( v2 < (int)dword_140404A6C[487149972] );
    v1 = &dword_140404A6C[487149975];
  }
  v25 = 0;
  for ( j = 0; v25 < v0; j = v25 )
  {
    v26 = 0;
    if ( (int)*v1 > 0 )
    {
      v27 = (int *)(v1 + 1);
      do
      {
        v28 = 2570LL * *v27;
        if ( (int)dword_140404A6C[v28 + 275754072] > 1 )
        {
          v29 = 64;
          do
          {
            v30 = rand() % (int)dword_140404A6C[v28 + 275754072];
            v31 = rand() % (int)dword_140404A6C[v28 + 275754072];
            if ( (_DWORD)v30 != v31 )
            {
              v32 = &dword_140404A6C[6 * v30 + 275754073 + v28];
              v33 = v28 * 4 + 24LL * v31;
              *(_OWORD *)&dword_140404A6C[v28 + 275755609] = *(_OWORD *)v32;
              *(_QWORD *)&dword_140404A6C[v28 + 275755613] = *((_QWORD *)v32 + 2);
              *(_OWORD *)v32 = *(_OWORD *)((char *)&dword_140404A6C[275754073] + v33);
              *((_QWORD *)v32 + 2) = *(_QWORD *)((char *)&dword_140404A6C[275754077] + v33);
              *(_OWORD *)((char *)&dword_140404A6C[275754073] + v33) = *(_OWORD *)&dword_140404A6C[v28 + 275755609];
              *(_QWORD *)((char *)&dword_140404A6C[275754077] + v33) = *(_QWORD *)&dword_140404A6C[v28 + 275755613];
            }
            --v29;
          }
          while ( v29 );
        }
        ++v26;
        ++v27;
      }
      while ( v26 < (int)*v1 );
      v0 = dword_140404A6C[487149972];
      v25 = j;
    }
    ++v25;
    v1 += 259;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v35 ^ v38);
}

