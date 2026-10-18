#include "shared_client.h"

//----- (000000014007C0C0) ----------------------------------------------------
__int64            sub_14007C0C0(int a1, unsigned __int16 a2, int a3, _BYTE *a4)
{
  __int64 v7;
  unsigned int v8;
  __int64 result;
  __int64 v10;
  __int64 argp;

  v7 = 1048782LL * a1;
  v8 = socket_sr(2, 2, 17);
  LOWORD(dword_140404A6C[v7 + 112673945]) = 2;
  dword_140404A6C[v7 + 112673944] = v8;
  LOWORD(dword_140404A6C[v7 + 112673950]) = a2;
  dword_140404A6C[v7 + 112673946] = 0;
  HIWORD(dword_140404A6C[v7 + 112673945]) = htons_sr(a2);
  dword_140404A6C[v7 + 112673949] = 16;
  if ( !a3
    || (result = bind_sr((int)dword_140404A6C[v7 + 112673944], &dword_140404A6C[v7 + 112673945], 16), !(_DWORD)result) )
  {
    if ( a4 )
    {
      LOBYTE(dword_140404A6C[v7 + 112673942]) = *a4;
      BYTE1(dword_140404A6C[v7 + 112673942]) = a4[1];
      HIWORD(dword_140404A6C[v7 + 112673942]) = (unsigned __int8)a4[2];
    }
    v10 = (int)dword_140404A6C[v7 + 112673944];
    LODWORD(argp) = 1;
    result = ioctlsocket_sr(v10, 2147772030LL, &argp);
    dword_140404A6C[v7 + 112673941] = 1;
  }
  return result;
}

//----- (000000014007C1C0) ----------------------------------------------------
__int64            sub_14007C1C0(int a1, int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned int *v6;
  __int64 result;
  unsigned int i;
  char v9;
  unsigned int v10;
  __int64 v11;

  v2 = a1;
  v4 = 1048782 * v2;
  v5 = 16387LL * a2;
  dword_140404A6C[1048782 * a1 + 112673946] = 0;
  v6 = &dword_140404A6C[1048782 * a1 + 112673949];
  result = recvfrom_sr(
             (int)dword_140404A6C[1048782 * a1 + 112673944],
             &dword_140404A6C[v5 + 135184968],
             0x10000,
             0,
             &dword_140404A6C[1048782 * v2 + 112673945],
             &dword_140404A6C[1048782 * v2 + 112673949]);
  for ( i = result; (int)result > 0; i = result )
  {
    if ( LOBYTE(dword_140404A6C[v5 + 135184968]) == LOBYTE(dword_140404A6C[v4 + 112673942])
      && BYTE1(dword_140404A6C[v5 + 135184968]) == BYTE1(dword_140404A6C[v4 + 112673942])
      && BYTE2(dword_140404A6C[v5 + 135184968]) == BYTE2(dword_140404A6C[v4 + 112673942]) )
    {
      v9 = HIBYTE(dword_140404A6C[v5 + 135184968]);
      if ( v9 == 80 )
      {
        v10 = ntohl_sr(dword_140404A6C[v4 + 112673946]);
        v11 = HIWORD(dword_140404A6C[v4 + 112673945]);
        dword_140404A6C[v4 + 112673951] = v10;
        LOWORD(dword_140404A6C[v4 + 112673952]) = ntohs_sr(v11);
        *(_QWORD *)&dword_140404A6C[v5 + 135184965] = 4;
        dword_140404A6C[v5 + 135184967] = i;
        return i;
      }
      if ( v9 == 102 )
      {
        dword_140404A6C[v4 + 112673951] = ntohl_sr(dword_140404A6C[v4 + 112673946]);
        LOWORD(dword_140404A6C[v4 + 112673952]) = ntohs_sr(HIWORD(dword_140404A6C[v4 + 112673945]));
        *(_QWORD *)&dword_140404A6C[v5 + 135184965] = 4;
        dword_140404A6C[v5 + 135184967] = i;
        result = sub_14007C3A0(v2, a2);
        if ( (_DWORD)result )
          return result;
      }
    }
    dword_140404A6C[v4 + 112673946] = 0;
    result = recvfrom_sr(
               (int)dword_140404A6C[v4 + 112673944],
               &dword_140404A6C[v5 + 135184968],
               0x10000,
               0,
               &dword_140404A6C[1048782 * v2 + 112673945],
               v6);
  }
  return result;
}

//----- (000000014007C660) ----------------------------------------------------
__int64            sub_14007C660(int a1, int a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 result;
  __int64 v5;
  int v8;
  __int64 v9;
  __int16 v10;
  __int64 v11;
  __int64 v12;
  signed int v13;
  __int64 v14;
  signed int v15;
  __int64 v16;
  unsigned int *v17;
  _WORD *v18;
       __m128i *v19;
  __int16 v20;
  __int64 v21;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007C660[48];
#define v22 (*(unsigned int * (*))(void *)(sr_frame_14007C660 + 0)) /* [rsp+30h] */
#define v23 (*(_WORD * (*))(void *)(sr_frame_14007C660 + 8)) /* [rsp+38h] */
#define v24 (*(int * (*))(void *)(sr_frame_14007C660 + 16)) /* [rsp+40h] */
#define v25 (*(unsigned int * (*))(void *)(sr_frame_14007C660 + 24)) /* [rsp+48h] */
#define v26 (*(struct sockaddr * (*))(void *)(sr_frame_14007C660 + 32)) /* [rsp+50h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_14007C660 + 40)) /* [rsp+58h] */

  result = a2;
  v5 = 16387LL * a2;
  if ( (int)dword_140404A6C[v5 + 135184966] > 0 )
  {
    ++dword_140404A6C[v5 + 135184965];
    dword_140404A6C[v5 + 135184966] = 0;
  }
  v8 = dword_140404A6C[v5 + 135184965];
  if ( v8 > 1400 )
  {
    if ( v8 <= 0x10000 )
    {
      v13 = 0;
      v14 = a1;
      v27 = a1;
      v15 = ((int)((unsigned __int64)(1570730897LL * v8) >> 32) >> 9)
          + ((unsigned int)((unsigned __int64)(1570730897LL * v8) >> 32) >> 31)
          + 1;
      if ( v15 > 0 )
      {
        v16 = 1048782LL * a1;
        v17 = &dword_140404A6C[v16 + 112673942];
        v22 = &dword_140404A6C[v16 + 112673946];
        v18 = (_WORD *)&dword_140404A6C[v16 + 112673952] + 1;
        v23 = (_WORD *)&dword_140404A6C[v16 + 112673945] + 1;
        v25 = &dword_140404A6C[v16 + 112673949];
        v26 = (struct sockaddr *)&dword_140404A6C[v16 + 112673945];
        v24 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v16 * 4 + 454909132);
        v19 = (     __m128i *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v5 * 4 + 544953228);
        do
        {
          g_1608353EC = *v17;
          LOWORD(g_1608353F0) = *v18;
          *(_QWORD *)&g_1608353E0 = 8;
          HIBYTE(g_1608353EC) = 102;
          BYTE2(g_1608353F0) = v13;
          HIBYTE(g_1608353F0) = v15;
          if ( v8 <= 1400 )
          {
            if ( v8 + 8 < 0x10000 )
            {
              crt_memcpy((__m128i *)&g_1608353F4, v19, v8);
              g_1608353E0 += v8;
            }
            v8 = 0;
          }
          else
          {
            crt_memcpy((__m128i *)&g_1608353F4, v19, 0x578u);
            v8 -= 1400;
            g_1608353E0 = 1408;
          }
          *v22 = htonl_sr(a3);
          v20 = htons_sr(a4);
          v21 = g_1608353E0;
          *v23 = v20;
          sendto_sr(*v24, &g_1608353EC, v21, 0, v26, *v25);
          ++v13;
          v19 = (     __m128i *)((char *)v19 + 1400);
        }
        while ( v13 < v15 );
        v14 = v27;
      }
      result = 4195128 * v14;
      ++*(_WORD *)((char *)&g_15B1D5CEC + result + 2);
    }
  }
  else
  {
    v9 = 1048782LL * a1;
    HIBYTE(dword_140404A6C[v5 + 135184968]) = 80;
    dword_140404A6C[v9 + 112673946] = htonl_sr(a3);
    v10 = htons_sr(a4);
    v11 = (int)dword_140404A6C[v9 + 112673944];
    v12 = dword_140404A6C[v5 + 135184965];
    HIWORD(dword_140404A6C[v9 + 112673945]) = v10;
    return sendto_sr(
             v11,
             &dword_140404A6C[v5 + 135184968],
             v12,
             0,
             &dword_140404A6C[v9 + 112673945],
             dword_140404A6C[v9 + 112673949]);
  }
  return result;
}
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27

//----- (000000014007EEB0) ----------------------------------------------------
void            __attribute__((noreturn)) sub_14007EEB0(__int64 a1, __int64 a2, double a3)
{
  int v3;
       char *v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  char v8;
  int i;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  unsigned int *v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int *v22;
  int v23;
  int v24;
  signed int v25;
  signed int v26;
  unsigned int *v27;
  int v28;
  unsigned int *v29;
  __int64 v30;
  __int64 v31;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007EEB0[16];
#define argp (*(__int64 (*))(void *)(sr_frame_14007EEB0 + 0)) /* [rsp+60h] */
#define PerformanceCount (*(__int64 (*))(void *)(sr_frame_14007EEB0 + 8)) /* [rsp+68h] */

  v3 = sr_ConnectMasterServer();
  v4 = "connection successful\n";
  if ( !v3 )
    v4 = "connection failed\n";
  sub_14011BD10(v4);
  v5 = g_151E461B0;
  if ( (int)g_151E461B0 >= 1 )
  {
    if ( (int)g_151E461B0 > 30 )
      v5 = 30;
  }
  else
  {
    v5 = 1;
  }
  v6 = g_151E461A8;
  g_151E461B0 = v5;
  if ( (int)g_151E461A8 >= 2 )
  {
    if ( (int)g_151E461A8 > 128 )
      v6 = 128;
    g_151E461A8 = v6;
  }
  else
  {
    v6 = 2;
    g_151E461A8 = 2;
  }
  v7 = 0;
  do
  {
    v8 = *((_BYTE *)&g_151E45B4C + v7);
    *((_BYTE *)(unsigned int *)&g_1AD04ADD4 + v7++) = v8;
  }
  while ( v8 );
  g_1AD04B1F4 = v6;
  g_183EBFCDC = 3600;
  g_183EBFD30 = 1260;
  g_151E4614C = 1;
  g_183EBFCE0 = 3600 * v5;
  LOWORD(g_18539D3F8) = g_151E45940;
  g_151E46150 = 1;
  g_151E45948 = 1;
  g_18539D3C4 = socket_sr(2, 2, 17);
  LOWORD(g_18539D3E4) = 2;
  g_18539D3E8 = 0;
  HIWORD(g_18539D3E4) = htons_sr(LOWORD(g_18539D3F8));
  g_18539D3F4 = 16;
  if ( !(unsigned int)bind_sr((int)g_18539D3C4, &g_18539D3E4, 16) )
  {
    LODWORD(argp) = 1;
    ioctlsocket_sr((int)g_18539D3C4, 2147772030LL, &argp);
    g_18539D3A4 = 1;
  }
  game_connected = 1;
  g_1AD04ADC8 = 1;
  sub_14011BD10("port:%d\n", LOWORD(g_18539D3F8));
  sub_14011BD10("socketenabled:%d\n", g_18539D3A4);
  g_144AF96E0 = sub_140237448(nullptr);
  for ( i = 1; i < 624; ++i )
  {
    v10 = i;
    v11 = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
    dword_140404A6C[v10 + 18600733] = v11;
  }
  dword_14030186C = i;
  sub_1400E5F10();
  sub_14013DCD0();
  v14 = &g_151620C60;
  g_19021F0C4 = 1120403456;
  g_19021F0DC = 1120403456;
  g_19021F0F4 = 1120403456;
  g_19021F10C = 1120403456;
  do
  {
    *v14 = 0;
    v14 += 3597;
  }
  while ( (__int64)v14 < (__int64)&g_1519A4060 );
  v15 = g_151E461AC;
  game_type = g_151E461AC;
  if ( g_151E461AC - 3 > 2 )
  {
    if ( g_151E461AC != 7 )
      v15 = 3;
    game_type = v15;
  }
  v16 = 0;
  sr_ResetGame(v15, v12, v13);
  g_193AC8680 = 1;
  v17 = 0;
  if ( QueryPerformanceCounter((LARGE_INTEGER *)&argp) )
    v18 = (int)((double)(long long)argp * *(double *)&g_182A7D550);
  else
    v18 = 0;
  while ( 1 )
  {
    sub_140198FA1(1);
    v21 = (unsigned int)v17;
    v22 = &g_151623978;
    v17 = 0;
    do
    {
      if ( *(v22 - 2886) && !*v22 )
        ++v17;
      if ( v22[711] && !v22[3597] )
        ++v17;
      if ( v22[4308] && !v22[7194] )
        ++v17;
      if ( v22[7905] && !v22[10791] )
        ++v17;
      v22 += 14388;
    }
    while ( (__int64)v22 < (__int64)&g_1519A6D78 );
    if ( v17 > 0 && !(_DWORD)v21 )
    {
      g_183EBFCC4 = 5;
      sr_ResetGame(v21, v19, v20);
    }
    v23 = 0;
    while ( 1 )
    {
      v24 = QueryPerformanceCounter((LARGE_INTEGER *)&argp)
          ? (int)((double)(long long)argp * *(double *)&g_182A7D550)
          : 0;
      if ( (unsigned int)(v24 - v18) < 0x10 || v23 >= 5 )
        break;
      if ( ++v23 >= 4 )
      {
        if ( QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount) )
          v18 = (int)((double)(long long)PerformanceCount * *(double *)&g_182A7D550);
        else
          v18 = 0;
      }
      else
      {
        v18 += 16;
      }
      if ( --v16 <= 0 )
      {
        v25 = g_160361344;
        v16 = 3600;
        v26 = 0;
        if ( (int)g_160361344 > 0 )
        {
          v27 = &g_1603613B0;
          do
          {
            if ( (int)*v27 > 0 )
            {
              --*v27;
              v25 = g_160361344;
            }
            ++v26;
            v27 += 28;
          }
          while ( v26 < v25 );
        }
      }
      if ( game_state == 2 )
      {
        v28 = 0;
        v29 = &g_151623978;
        do
        {
          if ( *(v29 - 2886) && *v29 )
            sub_1401178F0(v28);
          ++v28;
          v29 += 3597;
        }
        while ( v28 < 256 );
      }
      sub_140132F90();
      sub_140133090();
      game_unknown_16b165f70 = 0;
      game_unknown_16b1f5f74 = 0;
      sub_14011B2A0();
      if ( game_state <= 2 )
        sub_140116210();
      sub_1400F5820(v31, v30, a3);
      sub_140136450();
      ++game_tick;
      if ( game_state <= 2 )
        sub_14002B9C0();
      sub_14008F1B0();
      if ( game_state <= 2 )
        sub_14002CE50();
    }
  }
}
#undef argp
#undef PerformanceCount

//----- (000000014008EAD0) ----------------------------------------------------
__int64            sub_14008EAD0(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 argp;

  LOWORD(g_18539D3F8) = g_151E45940;
  v1 = a1;
  dword_140404A6C[v1 + 289301078] = socket_sr(2, 2, 17);
  LOWORD(g_18539D3E4) = 2;
  g_18539D3E8 = 0;
  HIWORD(g_18539D3E4) = htons_sr(LOWORD(g_18539D3F8));
  g_18539D3F4 = 16;
  v2 = (int)dword_140404A6C[v1 + 289301078];
  LODWORD(argp) = 1;
  result = ioctlsocket_sr(v2, 2147772030LL, &argp);
  dword_140404A6C[v1 + 289301070] = 1;
  return result;
}

//----- (000000014008EB80) ----------------------------------------------------
__int64            sub_14008EB80(int a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 argp;

  LOWORD(g_18539D3F8) = g_151E45940;
  v1 = a1;
  dword_140404A6C[v1 + 289301078] = socket_sr(2, 2, 17);
  LOWORD(g_18539D3E4) = 2;
  g_18539D3E8 = 0;
  HIWORD(g_18539D3E4) = htons_sr(LOWORD(g_18539D3F8));
  g_18539D3F4 = 16;
  result = bind_sr((int)dword_140404A6C[v1 + 289301078], &g_18539D3E4, 16);
  if ( !(_DWORD)result )
  {
    v3 = (int)dword_140404A6C[v1 + 289301078];
    LODWORD(argp) = 1;
    result = ioctlsocket_sr(v3, 2147772030LL, &argp);
    dword_140404A6C[v1 + 289301070] = 1;
  }
  return result;
}

//----- (0000000140130350) ----------------------------------------------------
void            sub_140130350(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  signed int v3;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  char v10;
  int v11;
  int v12;

  v3 = packet_out_byte;
  v6 = a1;
  if ( (int)packet_out_bit > 0 )
  {
    v3 = packet_out_byte + 1;
    packet_out_bit = 0;
    ++packet_out_byte;
  }
  if ( v3 > 1200 )
  {
    v7 = 0;
    g_185A2D7EC = 0;
    v8 = 0;
    v9 = (v3 >> 10) + 1;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        g_185A2D7E4 = 0;
        if ( v7 )
        {
          unk_1402B26C0 = g_185A2D7F0;
          LOWORD(g_1853BD424) = g_185A2D7F4;
        }
        else
        {
          g_185A2D7F0 = unk_1402B26C0;
          LOWORD(g_185A2D7F4) = g_1853BD424;
          BYTE2(g_185A2D7F4) = v8;
        }
        v10 = HIBYTE(g_185A2D7F4);
        v11 = v3;
        if ( !v7 )
          v10 = v9;
        g_185A2D7E0 = 8;
        HIBYTE(g_185A2D7F4) = v10;
        v12 = v3;
        if ( v3 > 1024 )
          v11 = 1024;
        v3 -= 1024;
        if ( v12 <= 1024 )
          v3 = 0;
        sub_14015AFD0(0, (     __m128i *)&dword_140404A6C[256 * v8 + 289301094], 1, v11);
        if ( v6 )
        {
          g_18539D3E8 = htonl_sr(v6);
          HIWORD(g_18539D3E4) = htons_sr(a2);
          sendto_sr(
            (int)dword_140404A6C[g_18539D3A0 + 289301078],
            &g_185A2D7F0,
            g_185A2D7E0,
            0,
            &g_18539D3E4,
            g_18539D3F4);
        }
        else
        {
          sub_140198DC0(a3, (__int64)&g_185A2D7F0, g_185A2D7E0);
        }
        if ( ++v8 >= v9 )
          break;
        v7 = g_185A2D7EC;
      }
    }
    ++LOWORD(g_1853BD424);
  }
  else if ( (_DWORD)a1 )
  {
    if ( dword_140404A6C[g_18539D3A0 + 289301070] )
    {
      g_18539D3E8 = htonl_sr(a1);
      HIWORD(g_18539D3E4) = htons_sr(a2);
      sendto_sr(
        (int)dword_140404A6C[g_18539D3A0 + 289301078],
        &packet_out_data,
        packet_out_byte,
        0,
        &g_18539D3E4,
        g_18539D3F4);
    }
  }
  else
  {
    sub_140198DC0(a3, (__int64)&packet_out_data, v3);
  }
}

