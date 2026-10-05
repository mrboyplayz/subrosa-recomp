/* Address: 0x1400fc480 | Name: sub_1400FC480 | Size: 1738 bytes */
__int64 sub_1400FC480()
{
  int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  char v11; // si
  signed int v12; // edx
  __int128 v13; // xmm1
  signed int v14; // eax
  __int128 v15; // xmm1
  signed int v16; // eax
  int v17; // edi
  int v18; // ebx
  int v19; // r8d
  __int64 v20; // rax
  int v21; // r9d
  char v22; // r10
  int v23; // eax
  signed int v24; // ecx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v27; // [rsp+50h] [rbp+8h]

  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1101004800;
  dword_140404A6C[70087074] = 41;
  v0 = ui_button_candidate((__int64)"Cancel");
  v4 = dword_140404A6C[283831310];
  if ( v0 )
    v4 = 1;
  dword_140404A6C[283831310] = v4;
  if ( !dword_140404A6C[179662132] )
  {
    dword_140404A6C[70087067] = 1138229248;
    dword_140404A6C[70087068] = 1131413504;
    dword_140404A6C[70087069] = 1126170624;
    dword_140404A6C[70087070] = 1101004800;
    dword_140404A6C[70087077] = 1;
    sub_140070200("Password", (__int64)&dword_140404A6C[179662133], 0x18u);
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 16.0;
    result = ui_button_candidate((__int64)"Connect");
    if ( (_DWORD)result )
      dword_140404A6C[179662132] = 1;
    return result;
  }
  if ( (unsigned int)MEMORY[0x140198F9B](v4, v1, v2, v3) - dword_140404A6C[179662126] <= 0xC8 )
  {
    v11 = v27;
  }
  else
  {
    dword_140404A6C[179662126] = MEMORY[0x140198F9B](v7, v6, v8, v9);
    v10 = dword_140404A6C[179662132];
    if ( dword_140404A6C[179662132] == 1 )
    {
      v11 = 75;
      dword_140404A6C[289301094] = dword_1402B2658;
      *(unsigned int *)((char *)&dword_140404A6C[289301095] + 1) = dword_140404A6C[134050334];
      *(unsigned int *)((char *)&dword_140404A6C[289301096] + 1) = dword_140404A6C[134050338];
      *(unsigned int *)((char *)&dword_140404A6C[289301097] + 1) = dword_140404A6C[456202719];
      *(_WORD *)((char *)&dword_140404A6C[289301098] + 1) = dword_140404A6C[456202720];
      *(_QWORD *)&dword_140404A6C[289301092] = 19;
      LOBYTE(dword_140404A6C[289301095]) = 75;
      sub_140130350(dword_140404A6C[280649181], LOWORD(dword_140404A6C[280649182]), 0);
      v10 = dword_140404A6C[179662132];
    }
    else
    {
      v11 = v27;
    }
    if ( v10 == 2 )
    {
      v11 = 2;
      *(_QWORD *)&dword_140404A6C[289301092] = 5;
      LOBYTE(dword_140404A6C[289301095]) = 2;
      dword_140404A6C[289301094] = dword_1402B2658;
      sub_140115D90(&dword_1402B231C, 8);
      v12 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v12 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v12) = dword_140404A6C[134050334];
        v12 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v12;
        if ( v12 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v12;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v12;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v12) = dword_140404A6C[134050339];
          v12 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v12;
          if ( v12 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v12;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v12;
            }
            v13 = *(_OWORD *)&dword_140404A6C[73991100];
            *(_OWORD *)((char *)&dword_140404A6C[289301094] + v12) = *(_OWORD *)&dword_140404A6C[73991096];
            *(_OWORD *)((char *)&dword_140404A6C[289301098] + v12) = v13;
            v12 = dword_140404A6C[289301092] + 32;
            dword_140404A6C[289301092] += 32;
          }
        }
      }
      if ( v12 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v12;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v12;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v12) = dword_140404A6C[73991647]
                                                                     + 2
                                                                     * (dword_140404A6C[73991648]
                                                                      + 16
                                                                      * (dword_140404A6C[73991649]
                                                                       + 8
                                                                       * (dword_140404A6C[73991650]
                                                                        + 16
                                                                        * (dword_140404A6C[73991651]
                                                                         + 16 * dword_140404A6C[73991652]))));
        v14 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v14;
        if ( v14 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v14;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v14;
          }
          v15 = *(_OWORD *)&dword_140404A6C[179662137];
          *(_OWORD *)((char *)&dword_140404A6C[289301094] + v14) = *(_OWORD *)&dword_140404A6C[179662133];
          *(_OWORD *)((char *)&dword_140404A6C[289301098] + v14) = v15;
          dword_140404A6C[289301092] += 32;
        }
      }
      sub_140115D90(&dword_1402B26C8, 8);
      v16 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v16 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v16) = dword_140404A6C[134050337];
        dword_140404A6C[289301092] += 4;
      }
      sub_140130350(
        dword_140404A6C[456202714],
        LOWORD(dword_140404A6C[456202715]),
        *(_QWORD *)&dword_140404A6C[456202717]);
    }
  }
  result = sub_14011C760();
  if ( (int)result > 0 )
  {
    v17 = v27;
    do
    {
      v18 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
      {
        v19 = dword_140404A6C[289317485];
      }
      else
      {
        v19 = dword_140404A6C[289317485];
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v18 = ++dword_140404A6C[289317484];
          v19 = 0;
          dword_140404A6C[289317485] = 0;
        }
        v20 = v18++;
        v11 = *((_BYTE *)&dword_140404A6C[289317486] + v20);
        dword_140404A6C[289317484] = v18;
      }
      switch ( v11 )
      {
        case 75:
          if ( v18 < 0x10000 && v18 + 4 <= (int)dword_140404A6C[289317483] )
          {
            if ( v19 > 0 )
            {
              ++v18;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v18;
            }
            dword_140404A6C[134050339] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v18);
            dword_140404A6C[289317484] = v18 + 4;
          }
          dword_140404A6C[179662132] = 2;
          break;
        case 6:
          if ( v18 < 0x10000 && v18 + 4 <= (int)dword_140404A6C[289317483] )
          {
            if ( v19 > 0 )
            {
              ++v18;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v18;
            }
            dword_140404A6C[421831838] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v18);
            dword_140404A6C[289317484] = v18 + 4;
          }
          sub_140115AE0(&dword_140404A6C[283831312], 4);
          sub_140115AE0(&dword_140404A6C[283831441], 4);
          sub_140115AE0(&dword_140404A6C[283831446], 8);
          v24 = dword_140404A6C[289317484];
          if ( (int)dword_140404A6C[289317484] < 0x10000
            && (signed int)(dword_140404A6C[289317484] + 32) <= (int)dword_140404A6C[289317483] )
          {
            if ( (int)dword_140404A6C[289317485] > 0 )
            {
              v24 = dword_140404A6C[289317484] + 1;
              dword_140404A6C[289317485] = 0;
              ++dword_140404A6C[289317484];
            }
            v25 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + v24);
            v26 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + v24);
            dword_140404A6C[289317484] = v24 + 32;
            *(_OWORD *)&dword_140404A6C[283831313] = v25;
            *(_OWORD *)&dword_140404A6C[283831317] = v26;
          }
          sub_14018D440(&dword_140404A6C[283831482], 16);
          sub_14018D440(&dword_140404A6C[283831483], 16);
          if ( dword_140404A6C[283831312] == 7 )
            sub_140115AE0(&dword_140404A6C[284022502], 8);
          dword_140404A6C[179662132] = 3;
          dword_140404A6C[283831310] = 0;
          return sub_140095B00();
        case 3:
          v21 = 6;
          if ( v18 < 0x10000 )
          {
            if ( v18 <= (int)dword_140404A6C[289317483] )
            {
              v17 = 0;
              v22 = 0;
              while ( 1 )
              {
                v23 = 8 - v19;
                v17 |= (~(-1 << v21)
                      & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v18) >> SLOBYTE(dword_140404A6C[289317485]))) << v22;
                if ( v21 < (unsigned int)(8 - v19) )
                  break;
                v19 = 0;
                dword_140404A6C[289317485] = 0;
                if ( v21 == v23 )
                {
                  dword_140404A6C[289317484] = ++v18;
                  goto LABEL_60;
                }
                ++v18;
                v21 -= v23;
                v22 += v23;
                dword_140404A6C[289317484] = v18;
                if ( v21 <= 0 )
                  goto LABEL_60;
              }
              v19 += v21;
              dword_140404A6C[289317485] = v19;
            }
LABEL_60:
            if ( v18 < 0x10000 && v18 + v17 <= (int)dword_140404A6C[289317483] )
            {
              if ( v19 > 0 )
              {
                ++v18;
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v18;
              }
              MEMORY[0x1401FC920](&dword_140404A6C[179662389], (char *)&dword_140404A6C[289317486] + v18);
              dword_140404A6C[289317484] = v17 + v18;
            }
          }
          *((_BYTE *)&dword_140404A6C[179662389] + v17) = 0;
          dword_140404A6C[179662132] = 4;
          break;
      }
      result = sub_14011C760();
    }
    while ( (int)result > 0 );
  }
  return result;
}

