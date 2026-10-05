/* Address: 0x140028bd0 | Name: sub_140028BD0 | Size: 1359 bytes */
__int64 sub_140028BD0()
{
  unsigned int *v0; // rbx
  signed int v1; // eax
  signed int v2; // esi
  int v3; // r11d
  signed int v4; // r9d
  unsigned int *v5; // r10
  unsigned int *v6; // rax
  int v7; // ecx
  int v8; // edx
  unsigned int *v9; // rbx
  signed int v10; // eax
  signed int v11; // esi
  int v12; // r11d
  signed int v13; // r9d
  const char *v14; // r10
  unsigned int *v15; // rbx
  signed int v16; // eax
  signed int v17; // esi
  int v18; // r11d
  signed int v19; // r9d
  unsigned int *v20; // r10
  unsigned int *v21; // rax
  int v22; // ecx
  int v23; // edx
  signed int v24; // edx
  signed int v25; // esi
  __int64 result; // rax
  int v27; // ecx
  __int64 v28; // rdi
  int v29; // r11d
  __int64 v30; // rbx
  int v31; // r10d
  __int64 v32; // rcx
  unsigned int *v33; // rdx
  _WORD *v34; // r9
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  __int16 v37; // cx
  __int16 v38; // ax
  __int16 v39; // cx
  __int16 v40; // ax
  __int16 v41; // cx
  __int16 v42; // ax
  __int16 v43; // cx
  __int16 v44; // ax
  __int16 v45; // cx
  __int16 v46; // ax
  __int16 v47; // cx
  __int16 v48; // ax
  __int16 v49; // cx
  int v50; // ecx
  unsigned int v51; // eax

  v0 = &dword_140404A6C[468657209];
  MEMORY[0x1401FCD30](&dword_140404A6C[468657209], 0, 1024);
  v1 = dword_140404A6C[468653112];
  v2 = 0;
  if ( (int)dword_140404A6C[468653112] > 0 )
  {
    v3 = dword_140404A6C[421784253];
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &dword_140404A6C[421784739];
        do
        {
          v6 = &dword_140404A6C[16 * (__int64)v2 + 468653113];
          do
          {
            v7 = *((unsigned __int8 *)v6 + (char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468653113]);
            v8 = *(unsigned __int8 *)v6 - v7;
            if ( v8 )
              break;
            v6 = (unsigned int *)((char *)v6 + 1);
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 46;
        }
        while ( v4 < v3 );
        v1 = dword_140404A6C[468653112];
      }
      ++v2;
      ++v0;
    }
    while ( v2 < v1 );
  }
  v9 = &dword_140404A6C[468674618];
  MEMORY[0x1401FCD30](&dword_140404A6C[468674618], 0, 4096);
  v10 = dword_140404A6C[468658233];
  v11 = 0;
  if ( (int)dword_140404A6C[468658233] > 0 )
  {
    v12 = dword_140404A6C[19928869];
    do
    {
      v13 = 0;
      if ( v12 > 0 )
      {
        v14 = (const char *)&dword_140404A6C[20074597];
        do
        {
          if ( !strcmp((const char *)&dword_140404A6C[16 * (__int64)v11 + 468658234], v14) )
            *v9 = v13;
          ++v13;
          v14 += 232;
        }
        while ( v13 < v12 );
        v10 = dword_140404A6C[468658233];
      }
      ++v11;
      ++v9;
    }
    while ( v11 < v10 );
  }
  sub_140027690();
  v15 = &dword_140404A6C[468693308];
  MEMORY[0x1401FCD30](&dword_140404A6C[468693308], 0, 4096);
  v16 = dword_140404A6C[468676923];
  v17 = 0;
  if ( (int)dword_140404A6C[468676923] > 0 )
  {
    v18 = dword_140404A6C[273270149];
    do
    {
      v19 = 0;
      if ( v18 > 0 )
      {
        v20 = &dword_140404A6C[272299397];
        do
        {
          v21 = &dword_140404A6C[16 * (__int64)v17 + 468676924];
          do
          {
            v22 = *((unsigned __int8 *)v21 + (char *)v20 - (char *)&dword_140404A6C[16 * (__int64)v17 + 468676924]);
            v23 = *(unsigned __int8 *)v21 - v22;
            if ( v23 )
              break;
            v21 = (unsigned int *)((char *)v21 + 1);
          }
          while ( v22 );
          if ( !v23 )
            *v15 = v19;
          ++v19;
          v20 += 948;
        }
        while ( v19 < v18 );
        v16 = dword_140404A6C[468676923];
      }
      ++v17;
      ++v15;
    }
    while ( v17 < v16 );
  }
  v24 = dword_140404A6C[456856223];
  v25 = 0;
  result = dword_140404A6C[456856221];
  v27 = dword_140404A6C[456856222];
  dword_140404A6C[460788387] = dword_140404A6C[456856221];
  dword_140404A6C[460788388] = dword_140404A6C[456856222];
  dword_140404A6C[460788389] = dword_140404A6C[456856223];
  if ( (int)dword_140404A6C[456856223] > 0 )
  {
    v28 = 0;
    do
    {
      v29 = 0;
      v30 = 0;
      if ( v27 >= 0 )
      {
        do
        {
          v31 = 0;
          if ( (int)result >= 0 )
          {
            v32 = 960 * (v28 + v30);
            v33 = &dword_140404A6C[v32 + 460788394];
            v34 = (_WORD *)&dword_140404A6C[v32 + 460788399] + 1;
            do
            {
              v35 = *(v33 - 3932166);
              *v33 = v35;
              if ( (v35 & 0xE0000000) == 0x80000000 )
                *v33 = (HIBYTE(v35) & 3) + (dword_140404A6C[(v35 & 0x3FF) + 468674618] | 0x80000000);
              v36 = *(v33 - 3932165);
              v33[1] = v36;
              if ( (v36 & 0xE0000000) == 0x80000000 )
                v33[1] = (HIBYTE(v36) & 3) + (dword_140404A6C[(v36 & 0x3FF) + 468674618] | 0x80000000);
              *(v33 - 1) = dword_140404A6C[*(v33 - 3932167) + 468675899];
              v33[2] = *(v33 - 3932164);
              v33[3] = *(v33 - 3932163);
              v33[4] = *(v33 - 3932162);
              v37 = *(v34 - 7864332);
              *(v34 - 1) = *(v34 - 7864333) & 0xFF00
                         | LOWORD(dword_140404A6C[(unsigned __int8)*(v34 - 7864333) + 468657209]);
              v38 = v37 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v37 + 468657209]);
              v39 = *(v34 - 7864331);
              *v34 = v38;
              v40 = v39 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v39 + 468657209]);
              v41 = *(v34 - 7864330);
              v34[1] = v40;
              v42 = v41 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v41 + 468657209]);
              v43 = *(v34 - 7864329);
              v34[2] = v42;
              v44 = v43 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v43 + 468657209]);
              v45 = *(v34 - 7864328);
              v34[3] = v44;
              v46 = v45 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v45 + 468657209]);
              v47 = *(v34 - 7864327);
              v34[4] = v46;
              v48 = v47 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v47 + 468657209]);
              v49 = *(v34 - 7864326);
              v34[5] = v48;
              v34[6] = v49 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v49 + 468657209]);
              v34[7] = dword_140404A6C[(unsigned __int8)*(v34 - 7864325) + 468657209];
              v34[8] = dword_140404A6C[(unsigned __int8)*(v34 - 7864324) + 468657209];
              v34[9] = dword_140404A6C[(unsigned __int8)*(v34 - 7864323) + 468657209];
              v34[10] = dword_140404A6C[(unsigned __int8)*(v34 - 7864322) + 468657209];
              v34[11] = dword_140404A6C[(unsigned __int8)*(v34 - 7864321) + 468657209];
              v34[12] = dword_140404A6C[(unsigned __int8)*(v34 - 7864320) + 468657209];
              v34[13] = dword_140404A6C[(unsigned __int8)*(v34 - 7864319) + 468657209];
              v34[14] = dword_140404A6C[(unsigned __int8)*(v34 - 7864318) + 468657209];
              v50 = *(v33 - 3932153);
              if ( v50 )
                v51 = dword_140404A6C[(v50 & 0x3FF) + 468693308] | v50 & 0x3000000 | 0x40000000;
              else
                v51 = 0;
              v33[13] = v51;
              ++v31;
              result = dword_140404A6C[460788387];
              v33 += 15;
              v34 += 30;
            }
            while ( v31 <= (int)dword_140404A6C[460788387] );
            v27 = dword_140404A6C[460788388];
          }
          ++v29;
          ++v30;
        }
        while ( v29 <= v27 );
        v24 = dword_140404A6C[460788389];
      }
      ++v25;
      v28 += 64;
    }
    while ( v25 < v24 );
  }
  return result;
}

