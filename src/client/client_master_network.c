#include "shared_client.h"

//----- (000000014006BED0) ----------------------------------------------------
void               sub_14006BED0()
{
  unsigned int v0;
  char v1;
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14006BED0[48];
#define v12 (*(__int64 (*))(void *)(sr_frame_14006BED0 + 0)) /* [rsp+0h] */
#define v13 (*(char (*))(void *)(sr_frame_14006BED0 + 32)) /* [rsp+20h] */
#define v14 (*(int (*))(void *)(sr_frame_14006BED0 + 36)) /* [rsp+24h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_14006BED0 + 40)) /* [rsp+28h] */

  if ( dword_140404A6C[179668277] > 1 )
    return; /* native master auth updates state and returns void */
  if ( !dword_140404A6C[179668277] )
  {
    if ( dword_140404A6C[134050338] )
    {
      dword_140404A6C[179668277] = 1;
    }
    else
    {
      if ( !dword_140404A6C[278384725] )
        return; /* native master auth updates state and returns void */
      if ( !dword_140404A6C[278384729] )
      {
        dword_140404A6C[278384987] = 0;
        sub_140198D20((__int64)sub_1401880C0);
        dword_140404A6C[278384729] = 1;
      }
    }
  }
  if ( (unsigned int)sub_140198F9B() - dword_140404A6C[179668278] > 0x3E8 )
  {
    dword_140404A6C[179668278] = sub_140198F9B();
    v0 = dword_140404A6C[179668277];
    if ( dword_140404A6C[179668277] )
    {
      v1 = v13;
LABEL_16:
      if ( v0 == 1 )
      {
        *(_QWORD *)&dword_140404A6C[289301092] = 5;
        v1 = 73;
        dword_140404A6C[289301094] = dword_1402B2658;
        LOBYTE(dword_140404A6C[289301095]) = 73;
        sub_14007B180((     __m128i *)&dword_140404A6C[134050334], 4, 1);
        sub_14007B180((     __m128i *)&dword_140404A6C[134050338], 4, 1);
        sub_140130350(dword_140404A6C[280649181], dword_140404A6C[280649182], 0);
      }
      goto LABEL_19;
    }
    if ( dword_140404A6C[278384987] && (int)dword_140404A6C[278384730] < 1024 )
    {
      *(_QWORD *)&dword_140404A6C[289301092] = 5;
      v1 = 72;
      dword_140404A6C[289301094] = dword_1402B2658;
      LOBYTE(dword_140404A6C[289301095]) = 72;
      sub_14007B180((     __m128i *)&dword_140404A6C[73991096], 1, 32);
      sub_14007B180((     __m128i *)&dword_140404A6C[278384730], 4, 1);
      sub_14007B180((     __m128i *)&dword_140404A6C[278384731], 1, dword_140404A6C[278384730]);
      sub_140130350(dword_140404A6C[280649181], dword_140404A6C[280649182], 0);
      v0 = dword_140404A6C[179668277];
      goto LABEL_16;
    }
  }
  v1 = v13;
LABEL_19:
  if ( (int)sub_14011C760() > 0 )
  {
    v2 = v14;
    do
    {
      v3 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (v4 = dword_140404A6C[289317484] + 1,
            (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483]) )
      {
        v5 = dword_140404A6C[289317485];
      }
      else
      {
        v5 = dword_140404A6C[289317485];
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v5 = 0;
          ++dword_140404A6C[289317484];
          dword_140404A6C[289317485] = 0;
          v3 = v4;
        }
        v6 = v3++;
        v1 = *((_BYTE *)&dword_140404A6C[289317486] + v6);
        dword_140404A6C[289317484] = v3;
      }
      if ( v1 == 72 )
      {
        if ( v3 >= 0x10000 )
          goto LABEL_38;
        if ( v3 + 4 <= (int)dword_140404A6C[289317483] )
        {
          if ( v5 > 0 )
          {
            ++v3;
            v5 = 0;
            dword_140404A6C[289317484] = v3;
            dword_140404A6C[289317485] = 0;
          }
          v7 = v3;
          v3 += 4;
          dword_140404A6C[134050334] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v7);
          dword_140404A6C[289317484] = v3;
        }
        if ( v3 >= 0x10000 || v3 + 4 > (int)dword_140404A6C[289317483] )
        {
LABEL_38:
          v9 = dword_140404A6C[134050338];
        }
        else
        {
          if ( v5 > 0 )
          {
            ++v3;
            v5 = 0;
            dword_140404A6C[289317484] = v3;
            dword_140404A6C[289317485] = 0;
          }
          v8 = v3;
          v3 += 4;
          v9 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v8);
          dword_140404A6C[134050338] = v9;
          dword_140404A6C[289317484] = v3;
        }
        if ( v9 )
        {
          if ( v3 < 0x10000 && v3 + 4 <= (int)dword_140404A6C[289317483] )
          {
            if ( v5 > 0 )
            {
              ++v3;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v3;
            }
            dword_140404A6C[134050337] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v3);
            dword_140404A6C[289317484] = v3 + 4;
          }
          dword_140404A6C[179668277] = 1;
        }
        else
        {
          dword_140404A6C[179668277] = -1;
        }
        crt_chdir(&dword_140404A6C[278520373]);
        crt_chdir(&dword_140404A6C[278520245]);
        dword_140404A6C[179668278] = sub_140198F9B() - 1000;
      }
      else if ( v1 == 73 )
      {
        if ( v3 < 0x10000 && v3 + 4 <= (int)dword_140404A6C[289317483] )
        {
          if ( v5 > 0 )
          {
            ++v3;
            v5 = 0;
            dword_140404A6C[289317484] = v3;
            dword_140404A6C[289317485] = 0;
          }
          v10 = v3;
          v3 += 4;
          v2 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v10);
          dword_140404A6C[289317484] = v3;
        }
        if ( v2 == 1 )
        {
          if ( v3 < 0x10000 && v3 + 4 <= (int)dword_140404A6C[289317483] )
          {
            if ( v5 > 0 )
            {
              ++v3;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v3;
            }
            dword_140404A6C[134050337] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v3);
            dword_140404A6C[289317484] = v3 + 4;
          }
          dword_140404A6C[179668277] = 2;
        }
        else
        {
          dword_140404A6C[134050338] = 0;
          dword_140404A6C[179668277] = 0;
        }
      }
    }
    while ( (int)sub_14011C760() > 0 );
  }
  return; /* native master auth updates state and returns void */
}
#undef v12
#undef v13
#undef v14
#undef v15

//----- (00000001400A3F30) ----------------------------------------------------
__int64 sr_ConnectMasterServer()
{
  unsigned int sr_connected = 0;
  int v0;
  struct hostent *v1;
  struct servent *v2;
  __int16 v3;
  char *v4;
  __int128 *v5;
  __int64 v6;
  __int128 v7;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  __int64 v15;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  char v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 i;
  char v34;
  __int64 v35;
  __int64 v36;
  _Alignas(4) _WORD name[8];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A3F30[1200];
#define v37 (*(__int64 (*))(void *)(sr_frame_1400A3F30 + 0)) /* [rsp+0h] */
#define v38 (*(int (*))(void *)(sr_frame_1400A3F30 + 48)) /* [rsp+30h] */
#define argp (*(int (*))(void *)(sr_frame_1400A3F30 + 52)) /* [rsp+34h] */
#define optlen (*(int (*))(void *)(sr_frame_1400A3F30 + 56)) /* [rsp+38h] */
#define optval (*(char (*)[4])(void *)(sr_frame_1400A3F30 + 60)) /* [rsp+3Ch] */
#define timeout (*(__int128 (*))(void *)(sr_frame_1400A3F30 + 64)) /* [rsp+40h] */
#define readfds (*(_QWORD (*)[66])(void *)(sr_frame_1400A3F30 + 80)) /* [rsp+50h] */
#define writefds (*(char (*)[528])(void *)(sr_frame_1400A3F30 + 624)) /* [rsp+270h] */
#define cp (*(char (*)[32])(void *)(sr_frame_1400A3F30 + 1152)) /* [rsp+480h] */
#define v48 (*(__int64 (*))(void *)(sr_frame_1400A3F30 + 1184)) /* [rsp+4A0h] */

  dword_140404A6C[280649181] = 0;
  v0 = socket_sr(2, 1, 6);
  if ( v0 != -1 )
  {
    v1 = sub_140199031("www.crypticsea.com");
    if ( v1 )
    {
      v2 = sub_14019903D("http", "tcp");
      name[0] = 2;
      *(_DWORD *)&name[2] = ***((_DWORD ***)v1 + 3);
      v3 = v2 ? *((_WORD *)v2 + 12) : htons_sr(80);
      name[1] = v3;
      crt_sprintf(
        &dword_140404A6C[289301094],
        "GET /anewzero/serverinfo.php HTTP/1.1\r\nHost:www.crypticsea.com\r\n\r\n");
      argp = 1;
      ioctlsocket_sr(v0, 2147772030LL, &argp);
      if ( (unsigned int)connect_sr(v0, name, 16) == -1 )
      {
        readfds[1] = v0;
        LODWORD(readfds[0]) = 1;
        memcpy(writefds, readfds, 520); /* native MOVUPS copy of Win64 fd_set */
        *(_QWORD *)&timeout = 3;
        if ( select_sr(v0 + 1, (fd_set *)readfds, (fd_set *)writefds, nullptr, (     struct timeval *)&timeout) )
        {
          if ( (unsigned int)_WSAFDIsSet_sr(v0, readfds) || (unsigned int)_WSAFDIsSet_sr(v0, writefds) )
          {
            optlen = 4;
            if ( !(unsigned int)getsockopt_sr(v0, 0xFFFF, 4103, optval, &optlen) && !*(_DWORD *)optval )
              goto LABEL_15;
          }
        }
      }
      if ( v38 >= 1000 )
      {
LABEL_15:
        v38 = 0;
        while ( 1 )
        {
          sub_140198FA1(100);
          ++v38;
          v15 = -1;
          do
            ++v15;
          while ( *((_BYTE *)&dword_140404A6C[289301094] + v15) );
          if ( (int)send_sr(v0, &dword_140404A6C[289301094], v15, 0) > 0 )
            break;
          if ( v38 >= 30 )
          {
            if ( v38 < 1000 )
              return 0;
            break;
          }
        }
        v38 = 0;
        do
        {
          sub_140198FA1(100);
          ++v38;
          if ( (int)recv_sr(v0, &dword_140404A6C[289317486], 0x2000, 0) > 0 )
          {
            v38 = 1000;
            goto LABEL_27;
          }
        }
        while ( v38 < 30 );
        if ( v38 < 1000 )
          return 0;
LABEL_27:
        closesocket_sr(v0);
        v17 = 0;
        v18 = 0;
        while ( LOBYTE(dword_140404A6C[v17 + 289317486]) != 9 )
        {
          if ( BYTE1(dword_140404A6C[v17 + 289317486]) == 9 )
          {
            ++v18;
            break;
          }
          if ( BYTE2(dword_140404A6C[v17 + 289317486]) == 9 )
          {
            v18 += 2;
            break;
          }
          if ( HIBYTE(dword_140404A6C[v17 + 289317486]) == 9 )
          {
            v18 += 3;
            break;
          }
          ++v17;
          v18 += 4;
          if ( v17 >= 2048 )
            break;
        }
        v19 = v18 + 1;
        v20 = v19;
        crt_sscanf((__int64)&dword_140404A6C[289317486] + v19, "%d", (uintptr_t)&v38);
        if ( v19 < 0x2000LL )
        {
          do
          {
            if ( *((_BYTE *)&dword_140404A6C[289317486] + v20) == 9 )
              break;
            ++v19;
            ++v20;
          }
          while ( v20 < 0x2000 );
        }
        v21 = v19 + 1;
        v22 = 0;
        v38 = 0;
        v23 = v21;
        do
        {
          if ( v23 >= 0x2000 )
            break;
          v24 = *((_BYTE *)&dword_140404A6C[289317486] + v23);
          if ( v24 == 9 )
            break;
          v25 = v22;
          ++v21;
          ++v22;
          ++v23;
          cp[v25] = v24;
        }
        while ( v22 < 32 );
        v38 = v22;
        if ( (unsigned __int64)v22 >= 0x20 )
          sub_1401F8694();
        cp[v22] = 0;
        v26 = inet_addr_sr(cp);
        dword_140404A6C[280649181] = ntohl_sr(v26);
        v27 = v21;
        if ( v21 < 0x2000LL )
        {
          do
          {
            if ( *((_BYTE *)&dword_140404A6C[289317486] + v27) == 9 )
              break;
            ++v21;
            ++v27;
          }
          while ( v27 < 0x2000 );
        }
        v28 = v21 + 1;
        v29 = v28;
        crt_sscanf((__int64)&dword_140404A6C[289317486] + v28, "%d", (uintptr_t)&v38);
        LOWORD(dword_140404A6C[280649182]) = v38;
        if ( dword_140404A6C[280649181] != -1 )
        {
          sr_connected = 1;
          LOWORD(dword_140404A6C[280649182]) = v38 + 2;
          if ( v28 < 0x2000LL )
          {
            do
            {
              if ( *((_BYTE *)&dword_140404A6C[289317486] + v29) == 9 )
                break;
              ++v28;
              ++v29;
            }
            while ( v29 < 0x2000 );
          }
          v30 = 0;
          v31 = v28 + 1;
          v32 = 8;
          do
          {
            for ( i = 0; i < 32; ++i )
            {
              if ( v31 >= 0x2000 )
                break;
              v34 = *((_BYTE *)&dword_140404A6C[289317486] + v31);
              if ( v34 == 9 )
                break;
              v35 = v30 + i;
              ++v31;
              *((_BYTE *)&dword_140404A6C[280649182] + v35 + 2) = v34;
            }
            v36 = v30 + i;
            ++v31;
            v30 += 64;
            *((_BYTE *)&dword_140404A6C[280649182] + v36 + 2) = 0;
            --v32;
          }
          while ( v32 );
        }
      }
    }
  }
  return sr_connected;
}
#undef v37
#undef v38
#undef argp
#undef optlen
#undef optval
#undef timeout
#undef readfds
#undef writefds
#undef cp
#undef v48

//----- (000000014011C760) ----------------------------------------------------
__int64 sub_14011C760()
{
  signed int v0;
  __int64 result;
  int v2;

  while ( 1 )
  {
    v0 = 0;
    dword_140404A6C[289301087] = 0;
    if ( !dword_140404A6C[dword_140404A6C[289301069] + 289301070]
      || (v0 = recvfrom_sr(
                 (int)dword_140404A6C[dword_140404A6C[289301069] + 289301078],
                 &dword_140404A6C[289317486],
                 0x10000,
                 0,
                 &dword_140404A6C[289301086],
                 &dword_140404A6C[289301090]),
          dword_140404A6C[289317478] = ntohl_sr(dword_140404A6C[289301087]),
          LOWORD(dword_140404A6C[289317479]) = ntohs_sr(HIWORD(dword_140404A6C[289301086])),
          *(_QWORD *)&dword_140404A6C[289317481] = 0,
          v0 <= 0) )
    {
      if ( !(unsigned int)sub_140198C60(
                            &dword_140404A6C[289317481],
                            (__int64)&dword_140404A6C[289317486],
                            (__int64)&v2,
                            0x10000u) )
        break;
      v0 = v2;
      dword_140404A6C[289317478] = 0;
      LOWORD(dword_140404A6C[289317479]) = 0;
      if ( v2 <= 0 )
        break;
    }
    if ( LOBYTE(dword_140404A6C[289317486]) == (char)dword_1402B2658
      && BYTE1(dword_140404A6C[289317486]) == SBYTE1(dword_1402B2658)
      && BYTE2(dword_140404A6C[289317486]) == SBYTE2(dword_1402B2658) )
    {
      if ( HIBYTE(dword_140404A6C[289317486]) == SHIBYTE(dword_1402B2658) )
      {
        *(_QWORD *)&dword_140404A6C[289317484] = 4;
        break;
      }
      if ( HIBYTE(dword_140404A6C[289317486]) == byte_1402B26C3 )
      {
        result = sub_14011BD70(v0);
        if ( (_DWORD)result )
        {
          dword_140404A6C[289317483] = result;
          return result;
        }
      }
    }
  }
  dword_140404A6C[289317483] = v0;
  return (unsigned int)v0;
}
