/* Address: 0x1400c86d0 | Name: sub_1400C86D0 | Size: 1020 bytes */
__int64 __fastcall sub_1400C86D0(signed int a1)
{
  signed int v1; // esi
  unsigned int v2; // r13d
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 j; // rbx
  unsigned int *v7; // rax
  char *v8; // rdx
  __int64 v9; // r8
  char v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // al
  unsigned int *v14; // rax
  char *v15; // rdx
  __int64 v16; // r8
  char v17; // cl
  int v18; // ebp
  __int64 i; // rdi
  unsigned int *v20; // rax
  char *v21; // rdx
  __int64 v22; // r8
  char v23; // cl
  int v24; // edx
  int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // rax
  char *v29; // rdx
  char v30; // cl
  char v31; // cl
  __int64 v32; // r9
  __int64 v33; // r9
  char *v34; // rax
  const char *v35; // rdx
  __int64 v36; // r8
  char v37; // cl
  char v38; // cl
  __int64 v40; // [rsp+0h] [rbp-268h] BYREF
  _BYTE v41[512]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v42; // [rsp+230h] [rbp-38h]

  v1 = 0;
  v2 = a1;
  v3 = a1;
  v4 = 1760LL * a1;
  v5 = 110LL * a1;
  if ( (int)dword_140404A6C[v4 + 278847326] <= 0 )
  {
    v18 = 0;
    for ( i = 0; i < 24; ++i )
    {
      if ( i )
      {
        if ( (unsigned __int64)(i - 4) > 0xF )
        {
          LOBYTE(dword_140404A6C[16 * v5 + 278846114 + 16 * i]) = 0;
        }
        else
        {
          v24 = v18 + (dword_140404A6C[v4 + 278847330] & 0xFFFFFFF0);
          v25 = v24 - 4;
          if ( v24 - 4 >= (int)dword_140404A6C[v4 + 278847332] )
          {
            v32 = i + v5;
            if ( v25 == dword_140404A6C[v4 + 278847332] )
            {
              v33 = v32 << 6;
              v34 = (char *)&dword_140404A6C[278846626] + v33;
              v35 = " CANCEL";
              v36 = 16;
              if ( v25 == dword_140404A6C[v4 + 278847330] )
              {
                do
                {
                  v37 = *v35;
                  if ( *v35 )
                    ++v35;
                  else
                    v37 = 32;
                  *(v34 - 2048) = v37;
                  *v34++ = -72;
                  --v36;
                }
                while ( v36 );
                *((_BYTE *)&dword_140404A6C[278846118] + v33) = 0;
              }
              else
              {
                do
                {
                  v38 = *v35;
                  if ( *v35 )
                    ++v35;
                  else
                    v38 = 32;
                  *(v34 - 2048) = v38;
                  *v34++ = 15;
                  --v36;
                }
                while ( v36 );
                *((_BYTE *)&dword_140404A6C[278846118] + v33) = 0;
              }
            }
            else
            {
              LOBYTE(dword_140404A6C[16 * v32 + 278846114]) = 0;
            }
          }
          else
          {
            sub_140158AB0(
              v41,
              " %s",
              (const char *)&dword_140404A6C[2570 * dword_140404A6C[v4 + 278846098]
                                           + 275754074
                                           + 6 * dword_140404A6C[1760 * v3 + 278847329 + v24]]);
            v26 = 16;
            v27 = (i + v5) << 6;
            v28 = (char *)&dword_140404A6C[278846626] + v27;
            v29 = v41;
            if ( v25 == dword_140404A6C[v4 + 278847330] )
            {
              do
              {
                v30 = *v29;
                if ( *v29 )
                  ++v29;
                else
                  v30 = 32;
                *(v28 - 2048) = v30;
                *v28++ = -72;
                --v26;
              }
              while ( v26 );
              *((_BYTE *)&dword_140404A6C[278846118] + v27) = 0;
            }
            else
            {
              do
              {
                v31 = *v29;
                if ( *v29 )
                  ++v29;
                else
                  v31 = 32;
                *(v28 - 2048) = v31;
                *v28++ = 15;
                --v26;
              }
              while ( v26 );
              *((_BYTE *)&dword_140404A6C[278846118] + v27) = 0;
            }
          }
        }
      }
      else
      {
        sub_140158AB0(v41, "UPLOAD FILE");
        v20 = &dword_140404A6C[v4 + 278846626];
        v21 = v41;
        v22 = 20;
        do
        {
          v23 = *v21;
          if ( *v21 )
            ++v21;
          else
            v23 = 32;
          *((_BYTE *)v20 - 2048) = v23;
          *(_BYTE *)v20 = -16;
          v20 = (unsigned int *)((char *)v20 + 1);
          --v22;
        }
        while ( v22 );
        LOBYTE(dword_140404A6C[16 * v5 + 278846119]) = 0;
      }
      ++v18;
    }
    v2 = v3;
  }
  else
  {
    for ( j = 0; j < 24; ++j )
    {
      if ( j )
      {
        if ( j == 1 )
        {
          v11 = 0;
          v12 = (__int64)(int)(255 - dword_140404A6C[v4 + 278847326]) >> 4;
          do
          {
            v13 = 127;
            if ( v11 > v12 )
              v13 = 32;
            v41[v11++] = v13;
          }
          while ( v11 < 16 );
          v41[16] = 0;
          v14 = &dword_140404A6C[v4 + 278846642];
          v15 = v41;
          v16 = 16;
          do
          {
            v17 = *v15;
            if ( *v15 )
              ++v15;
            else
              v17 = 32;
            *((_BYTE *)v14 - 2048) = v17;
            *(_BYTE *)v14 = -16;
            v14 = (unsigned int *)((char *)v14 + 1);
            --v16;
          }
          while ( v16 );
          LOBYTE(dword_140404A6C[16 * v5 + 278846134]) = 0;
        }
        else
        {
          LOBYTE(dword_140404A6C[16 * v5 + 278846114 + 16 * j]) = 0;
        }
      }
      else
      {
        sub_140158AB0(v41, "UPLOADING");
        v7 = &dword_140404A6C[v4 + 278846626];
        v8 = v41;
        v9 = 16;
        do
        {
          v10 = *v8;
          if ( *v8 )
            ++v8;
          else
            v10 = 32;
          *((_BYTE *)v7 - 2048) = v10;
          *(_BYTE *)v7 = -16;
          v7 = (unsigned int *)((char *)v7 + 1);
          --v9;
        }
        while ( v9 );
        LOBYTE(dword_140404A6C[16 * v5 + 278846118]) = 0;
      }
    }
  }
  do
    sub_140050F90(v2, v1++);
  while ( v1 < 24 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v40 ^ v42);
}

