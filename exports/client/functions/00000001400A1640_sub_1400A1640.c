/* Address: 0x1400a1640 | Name: sub_1400A1640 | Size: 1182 bytes */
void __fastcall sub_1400A1640(int a1, unsigned int a2)
{
  __int64 v3; // r14
  int v4; // ebp
  unsigned int *v5; // rbx
  int v6; // r8d
  __int64 v7; // rdi
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  unsigned int v12; // eax
  __int64 v13; // rdx

  v3 = a1;
  if ( !dword_140404A6C[284024634] )
  {
    v4 = 0;
    if ( (int)dword_140404A6C[280649848] > 0 )
    {
      v5 = &dword_140404A6C[280649850];
      do
      {
        if ( *(v5 - 1) )
          goto LABEL_34;
        v6 = v5[2];
        if ( (unsigned int)(v6 - 97) > 0x19 )
        {
          if ( (unsigned int)(v6 - 33) > 0x3E )
            goto LABEL_16;
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
          v9 = 14388 * v3 + 84LL * (int)dword_140404A6C[3597 * v3 + 71856362];
          if ( (v5[3] & 3) != 0 )
            *(unsigned int *)((char *)&dword_140404A6C[71856369] + v9) = dword_1402B29D0[v6 & 0x7F];
          else
            *(unsigned int *)((char *)&dword_140404A6C[71856369] + v9) = v6;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        else
        {
          v7 = 3597 * v3;
          if ( (v5[3] & 0xC0) != 0 )
            v8 = toupper(v6) | 0x100;
          else
            v8 = toupper(v6);
          dword_140404A6C[21 * (int)dword_140404A6C[v7 + 71856362] + 71856367 + v7] = 2;
          dword_140404A6C[21 * (int)dword_140404A6C[v7 + 71856362] + 71856368 + v7] = a2;
          dword_140404A6C[21 * (int)dword_140404A6C[v7 + 71856362] + 71856369 + v7] = v8;
          v6 = v5[2];
          dword_140404A6C[v7 + 71856362] = ((unsigned __int8)dword_140404A6C[v7 + 71856362] + 1) & 0x3F;
        }
        *v5 = 1;
LABEL_16:
        if ( v6 == 32 )
        {
          *v5 = 1;
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 32;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( v6 == 13 )
        {
          v10 = 3597 * v3;
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 10;
LABEL_22:
          v11 = dword_140404A6C[v10 + 71856362] + 1;
          *v5 = 1;
          dword_140404A6C[v10 + 71856362] = v11 & 0x3F;
          goto LABEL_23;
        }
        if ( v6 == 8 )
        {
          v10 = 3597 * v3;
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 8;
          goto LABEL_22;
        }
LABEL_23:
        v12 = v5[1];
        switch ( v12 )
        {
          case 0xE0u:
            goto LABEL_33;
          case 0x52u:
            v13 = 3597 * v3;
            dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
            dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
            dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 16;
LABEL_32:
            dword_140404A6C[v13 + 71856362] = ((unsigned __int8)dword_140404A6C[v13 + 71856362] + 1) & 0x3F;
LABEL_33:
            *v5 = 1;
            break;
          case 0x51u:
            v13 = 3597 * v3;
            dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
            dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
            dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 17;
            goto LABEL_32;
          case 0x50u:
            v13 = 3597 * v3;
            dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
            dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
            dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 18;
            goto LABEL_32;
          case 0x4Fu:
            v13 = 3597 * v3;
            dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
            dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
            dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 19;
            goto LABEL_32;
        }
LABEL_34:
        ++v4;
        v5 += 5;
      }
      while ( v4 < (int)dword_140404A6C[280649848] );
    }
  }
}

