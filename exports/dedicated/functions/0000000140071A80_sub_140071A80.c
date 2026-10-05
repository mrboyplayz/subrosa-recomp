/* Address: 0x140071a80 | Name: sub_140071A80 | Size: 1036 bytes */
__int64 __fastcall sub_140071A80(signed int a1)
{
  signed int v1; // esi
  unsigned int v2; // r13d
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 j; // rbx
  char *v7; // rax
  char *v8; // rdx
  __int64 v9; // r8
  char v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // al
  char *v14; // rax
  char *v15; // rdx
  __int64 v16; // r8
  char v17; // cl
  int v18; // ebp
  __int64 i; // rdi
  char *v20; // rax
  char *v21; // rdx
  __int64 v22; // r8
  char v23; // cl
  signed int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  char *v27; // rax
  char *v28; // rdx
  char v29; // cl
  char v30; // cl
  __int64 v31; // r9
  __int64 v32; // r9
  char *v33; // rax
  const char *v34; // rdx
  __int64 v35; // r8
  char v36; // cl
  char v37; // cl
  __int64 result; // rax
  char Buffer[512]; // [rsp+30h] [rbp-238h] BYREF

  v1 = 0;
  v2 = a1;
  v4 = 7040LL * a1;
  v5 = 110LL * a1;
  if ( *(int *)((char *)&unk_19025F0C0 + v4 + 5732) <= 0 )
  {
    v18 = 0;
    for ( i = 0; i < 24; ++i )
    {
      if ( i )
      {
        if ( (unsigned __int64)(i - 4) > 0xF )
        {
          *((_BYTE *)&unk_19025F0C0 + 64 * v5 + 64 * i + 884) = 0;
        }
        else
        {
          v24 = v18 + (*(_DWORD *)((_BYTE *)&unk_19025F0C0 + v4 + 5748) & 0xFFFFFFF0) - 4;
          if ( v24 >= *(_DWORD *)((char *)&unk_19025F0C0 + v4 + 5756) )
          {
            v31 = i + v5;
            if ( v24 == *(_DWORD *)((char *)&unk_19025F0C0 + v4 + 5756) )
            {
              v32 = v31 << 6;
              v33 = (char *)&unk_19025FC34 + v32;
              v34 = " CANCEL";
              v35 = 16;
              if ( v24 == *(_DWORD *)((char *)&unk_19025F0C0 + v4 + 5748) )
              {
                do
                {
                  v36 = *v34;
                  if ( *v34 )
                    ++v34;
                  else
                    v36 = 32;
                  *(v33 - 2048) = v36;
                  *v33++ = -72;
                  --v35;
                }
                while ( v35 );
                *((_BYTE *)&unk_19025F0C0 + v32 + 900) = 0;
              }
              else
              {
                do
                {
                  v37 = *v34;
                  if ( *v34 )
                    ++v34;
                  else
                    v37 = 32;
                  *(v33 - 2048) = v37;
                  *v33++ = 15;
                  --v35;
                }
                while ( v35 );
                *((_BYTE *)&unk_19025F0C0 + v32 + 900) = 0;
              }
            }
            else
            {
              *((_BYTE *)&unk_19025F0C0 + 64 * v31 + 884) = 0;
            }
          }
          else
          {
            sub_1400DBB30(Buffer, " %s");
            v25 = 16;
            v26 = (i + v5) << 6;
            v27 = (char *)&unk_19025FC34 + v26;
            v28 = Buffer;
            if ( v24 == *(_DWORD *)((char *)&unk_19025F0C0 + v4 + 5748) )
            {
              do
              {
                v29 = *v28;
                if ( *v28 )
                  ++v28;
                else
                  v29 = 32;
                *(v27 - 2048) = v29;
                *v27++ = -72;
                --v25;
              }
              while ( v25 );
              *((_BYTE *)&unk_19025F0C0 + v26 + 900) = 0;
            }
            else
            {
              do
              {
                v30 = *v28;
                if ( *v28 )
                  ++v28;
                else
                  v30 = 32;
                *(v27 - 2048) = v30;
                *v27++ = 15;
                --v25;
              }
              while ( v25 );
              *((_BYTE *)&unk_19025F0C0 + v26 + 900) = 0;
            }
          }
        }
      }
      else
      {
        sub_1400DBB30(Buffer, "UPLOAD FILE");
        v20 = (char *)&unk_19025FC34 + v4;
        v21 = Buffer;
        v22 = 20;
        do
        {
          v23 = *v21;
          if ( *v21 )
            ++v21;
          else
            v23 = 32;
          *(v20 - 2048) = v23;
          *v20++ = -16;
          --v22;
        }
        while ( v22 );
        *((_BYTE *)&unk_19025F0C0 + 64 * v5 + 904) = 0;
      }
      ++v18;
    }
    v2 = a1;
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
          v12 = (__int64)(255 - *(_DWORD *)((char *)&unk_19025F0C0 + v4 + 5732)) >> 4;
          do
          {
            v13 = 127;
            if ( v11 > v12 )
              v13 = 32;
            Buffer[v11++] = v13;
          }
          while ( v11 < 16 );
          Buffer[16] = 0;
          v14 = (char *)&unk_19025F0C0 + v4 + 2996;
          v15 = Buffer;
          v16 = 16;
          do
          {
            v17 = *v15;
            if ( *v15 )
              ++v15;
            else
              v17 = 32;
            *(v14 - 2048) = v17;
            *v14++ = -16;
            --v16;
          }
          while ( v16 );
          *((_BYTE *)&unk_19025F0C0 + 64 * v5 + 964) = 0;
        }
        else
        {
          *((_BYTE *)&unk_19025F0C0 + 64 * v5 + 64 * j + 884) = 0;
        }
      }
      else
      {
        sub_1400DBB30(Buffer, "UPLOADING");
        v7 = (char *)&unk_19025FC34 + v4;
        v8 = Buffer;
        v9 = 16;
        do
        {
          v10 = *v8;
          if ( *v8 )
            ++v8;
          else
            v10 = 32;
          *(v7 - 2048) = v10;
          *v7++ = -16;
          --v9;
        }
        while ( v9 );
        *((_BYTE *)&unk_19025F0C0 + 64 * v5 + 900) = 0;
      }
    }
  }
  do
    result = sub_1400395A0(v2, v1++);
  while ( v1 < 24 );
  return result;
}

