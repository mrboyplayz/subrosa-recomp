/* Address: 0x14008c030 | Name: sub_14008C030 | Size: 439 bytes */
void sub_14008C030()
{
  int v0; // ebp
  unsigned int *v1; // rsi
  __int64 i; // r14
  int v3; // eax
  signed int v4; // ebx
  __int64 j; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // xmm0_8
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdi

  v0 = 0;
  if ( (int)dword_140404A6C[225641186] > 0 )
  {
    v1 = &dword_140404A6C[225654128];
    for ( i = 0; ; i += 4673 )
    {
      if ( *(v1 - 12925) == 3 )
      {
        v3 = *v1;
        v4 = 0;
        for ( j = 0; v4 < (int)*v1; v3 = *v1 )
        {
          if ( (rand() & 7) != 0 )
          {
            ++v4;
            ++j;
          }
          else
          {
            v6 = (int)*v1;
            *v1 = v6 - 1;
            v7 = 3 * (i + v6);
            v8 = *(_QWORD *)&dword_140404A6C[3 * i + 225654126 + 3 * v6];
            v9 = 3 * (i + j);
            *(_QWORD *)&dword_140404A6C[v9 + 225654129] = v8;
            dword_140404A6C[v9 + 225654131] = dword_140404A6C[v7 + 225654128];
          }
        }
        if ( v3 < 8 )
          break;
      }
LABEL_24:
      ++v0;
      v1 += 14019;
      if ( v0 >= (int)dword_140404A6C[225641186] )
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
      dword_140404A6C[3 * i + 225654129 + 3 * (int)*v1] = v11;
      dword_140404A6C[3 * i + 225654130 + 3 * (int)*v1] = dword_140404A6C[24944 * v12 + 346707730];
      dword_140404A6C[3 * i + 225654131 + 3 * (int)(*v1)++] = rand() % 6;
      if ( (int)*v1 >= 8 )
        goto LABEL_24;
    }
    v11 = 7;
LABEL_22:
    v12 = v11;
    goto LABEL_23;
  }
}

