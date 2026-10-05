/* Address: 0x14009ea20 | Name: sub_14009EA20 | Size: 1304 bytes */
void __fastcall sub_14009EA20(int a1, int a2)
{
  signed int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // eax

  if ( a2 != -1 )
  {
    v2 = -1;
    v3 = a1;
    v4 = 7166LL * a2;
    if ( (int)dword_140404A6C[v4 + 280658139] > 0 )
      v2 = dword_140404A6C[v4 + 280658140];
    v5 = 0;
    if ( !dword_140404A6C[280648133] )
      v5 = BYTE1(dword_140404A6C[284024821]) != 0;
    if ( !dword_140404A6C[73991653] )
    {
      v5 = 3;
      if ( BYTE1(dword_140404A6C[284024821]) )
        v5 = 2;
    }
    if ( !dword_140404A6C[280648133] )
    {
      if ( !BYTE1(dword_140404A6C[284024770]) && BYTE1(dword_140404A6C[284024642]) )
        sub_140116B00((unsigned int)v3, 1, v5, v5 ^ 1);
      if ( LOBYTE(dword_140404A6C[284024767]) && !LOBYTE(dword_140404A6C[284024639]) )
        sub_140116B00((unsigned int)v3, 8, v5, v5 ^ 1);
      if ( v2 == -1
        || (v6 = 1760LL * v2, ((dword_140404A6C[v6 + 278845898] - 25) & 0xFFFFFFF7) != 0)
        || dword_140404A6C[v6 + 278846052] != 1 )
      {
        if ( !BYTE2(dword_140404A6C[284024772]) && BYTE2(dword_140404A6C[284024644]) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !HIBYTE(dword_140404A6C[284024772]) && HIBYTE(dword_140404A6C[284024644]) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 4;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !LOBYTE(dword_140404A6C[284024773]) && LOBYTE(dword_140404A6C[284024645]) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 5;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !BYTE1(dword_140404A6C[284024773]) && BYTE1(dword_140404A6C[284024645]) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 6;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !BYTE2(dword_140404A6C[284024773]) && BYTE2(dword_140404A6C[284024645]) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 7;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
      }
      v7 = dword_140404A6C[280649843];
      if ( dword_140404A6C[280649843] )
      {
        if ( dword_140404A6C[284024634] )
        {
          if ( !dword_140404A6C[284024594] )
            v7 = 0;
          dword_140404A6C[280649843] = v7;
        }
      }
      else if ( dword_140404A6C[280649844] )
      {
        dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
        dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
        dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
        dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = -1;
        dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
      }
      if ( dword_140404A6C[280649840] || v7 )
      {
        v8 = dword_140404A6C[280649847];
      }
      else
      {
        if ( !dword_140404A6C[284024633] )
        {
LABEL_49:
          dword_140404A6C[280649847] = 0;
          return;
        }
        v8 = dword_140404A6C[280649847];
        if ( !dword_140404A6C[284024593] )
          v8 = 1;
        dword_140404A6C[280649847] = v8;
      }
      if ( !dword_140404A6C[284024633] )
        goto LABEL_49;
      if ( v8 )
        dword_140404A6C[3597 * v3 + 71856325] |= 1u;
    }
  }
}

