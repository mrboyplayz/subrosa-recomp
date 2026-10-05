/* Address: 0x14004cb50 | Name: sub_14004CB50 | Size: 443 bytes */
void sub_14004CB50()
{
  int v0; // ebp
  int *v1; // rsi
  __int64 i; // r14
  int v3; // eax
  int v4; // ebx
  __int64 j; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // xmm0_8
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdi

  v0 = 0;
  if ( dword_183A7E074 > 0 )
  {
    v1 = dword_183A8AAAC;
    for ( i = 0; ; i += 4673 )
    {
      if ( *(v1 - 12925) == 3 )
      {
        v3 = *v1;
        v4 = 0;
        for ( j = 0; v4 < *v1; v3 = *v1 )
        {
          if ( (rand() & 7) != 0 )
          {
            ++v4;
            ++j;
          }
          else
          {
            v6 = *v1;
            *v1 = v6 - 1;
            v7 = 3 * (i + v6);
            v8 = *(__int64 *)((char *)&qword_183A8AAA4 + 12 * i + 12 * v6);
            v9 = 3 * (i + j);
            *(__int64 *)((char *)&qword_183A8AAB0 + 4 * v9) = v8;
            dword_183A8AAB8[v9] = dword_183A8AAAC[v7];
          }
        }
        if ( v3 < 8 )
          break;
      }
LABEL_24:
      ++v0;
      v1 += 14019;
      if ( v0 >= dword_183A7E074 )
        return;
    }
    while ( 1 )
    {
      v10 = rand() & 0xF;
      if ( v10 < 2 )
        break;
      if ( v10 >= 6 )
      {
        if ( v10 < 0xA )
        {
          v11 = 15;
          goto LABEL_22;
        }
        if ( v10 < 0xD )
        {
          v11 = 9;
          goto LABEL_22;
        }
        if ( v10 < 0xF )
        {
          v11 = 6;
          goto LABEL_22;
        }
        LODWORD(v11) = 4;
        v12 = 4;
        if ( (rand() & 0xF) == 0 )
        {
          v11 = 5;
          goto LABEL_22;
        }
      }
      else
      {
        LODWORD(v11) = 0;
        v12 = 0;
      }
LABEL_23:
      *((_DWORD *)&qword_183A8AAB0 + 3 * i + 3 * *v1) = v11;
      *((_DWORD *)&qword_183A8AAB0 + 3 * i + 3 * *v1 + 1) = dword_14AA15314[24944 * v12];
      dword_183A8AAB8[3 * i + 3 * (*v1)++] = rand() % 6;
      if ( *v1 >= 8 )
        goto LABEL_24;
    }
    v11 = 7;
LABEL_22:
    v12 = v11;
    goto LABEL_23;
  }
}

