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

  if ( g_16B165F40 > 1 )
    return; /* native master auth updates state and returns void */
  if ( !g_16B165F40 )
  {
    if ( g_1603612F4 )
    {
      g_16B165F40 = 1;
    }
    else
    {
      if ( !g_1829F8BC0 )
        return; /* native master auth updates state and returns void */
      if ( !g_1829F8BD0 )
      {
        g_1829F8FD8 = 0;
        sub_140198D20((__int64)sub_1401880C0);
        g_1829F8BD0 = 1;
      }
    }
  }
  if ( (unsigned int)sub_140198F9B() - g_16B165F44 > 0x3E8 )
  {
    g_16B165F44 = sub_140198F9B();
    v0 = g_16B165F40;
    if ( g_16B165F40 )
    {
      v1 = v13;
LABEL_16:
      if ( v0 == 1 )
      {
        *(_QWORD *)&packet_out_byte = 5;
        v1 = 73;
        packet_out_data = dword_1402B2658;
        LOBYTE(g_18539D408) = 73;
        sub_14007B180((     __m128i *)&g_1603612E4, 4, 1);
        sub_14007B180((     __m128i *)&g_1603612F4, 4, 1);
        sub_140130350(g_18329C1E0, g_18329C1E4, 0);
      }
      goto LABEL_19;
    }
    if ( g_1829F8FD8 && (int)g_1829F8BD4 < 1024 )
    {
      *(_QWORD *)&packet_out_byte = 5;
      v1 = 72;
      packet_out_data = dword_1402B2658;
      LOBYTE(g_18539D408) = 72;
      sub_14007B180((     __m128i *)(unsigned int *)&g_151E4594C, 1, 32);
      sub_14007B180((     __m128i *)&g_1829F8BD4, 4, 1);
      sub_14007B180((     __m128i *)&g_1829F8BD8, 1, g_1829F8BD4);
      sub_140130350(g_18329C1E0, g_18329C1E4, 0);
      v0 = g_16B165F40;
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
      v3 = packet_in_byte;
      if ( (int)packet_in_byte >= 0x10000
        || (v4 = packet_in_byte + 1,
            (signed int)(packet_in_byte + 1) > (int)packet_in_length) )
      {
        v5 = packet_in_bit;
      }
      else
      {
        v5 = packet_in_bit;
        if ( (int)packet_in_bit > 0 )
        {
          v5 = 0;
          ++packet_in_byte;
          packet_in_bit = 0;
          v3 = v4;
        }
        v6 = v3++;
        v1 = *((_BYTE *)&packet_in_data + v6);
        packet_in_byte = v3;
      }
      if ( v1 == 72 )
      {
        if ( v3 >= 0x10000 )
          goto LABEL_38;
        if ( v3 + 4 <= (int)packet_in_length )
        {
          if ( v5 > 0 )
          {
            ++v3;
            v5 = 0;
            packet_in_byte = v3;
            packet_in_bit = 0;
          }
          v7 = v3;
          v3 += 4;
          g_1603612E4 = *(unsigned int *)((char *)&packet_in_data + v7);
          packet_in_byte = v3;
        }
        if ( v3 >= 0x10000 || v3 + 4 > (int)packet_in_length )
        {
LABEL_38:
          v9 = g_1603612F4;
        }
        else
        {
          if ( v5 > 0 )
          {
            ++v3;
            v5 = 0;
            packet_in_byte = v3;
            packet_in_bit = 0;
          }
          v8 = v3;
          v3 += 4;
          v9 = *(unsigned int *)((char *)&packet_in_data + v8);
          g_1603612F4 = v9;
          packet_in_byte = v3;
        }
        if ( v9 )
        {
          if ( v3 < 0x10000 && v3 + 4 <= (int)packet_in_length )
          {
            if ( v5 > 0 )
            {
              ++v3;
              packet_in_bit = 0;
              packet_in_byte = v3;
            }
            g_1603612F0 = *(unsigned int *)((char *)&packet_in_data + v3);
            packet_in_byte = v3 + 4;
          }
          g_16B165F40 = 1;
        }
        else
        {
          g_16B165F40 = -1;
        }
        crt_chdir(&g_182A7D340);
        crt_chdir(&g_182A7D140);
        g_16B165F44 = sub_140198F9B() - 1000;
      }
      else if ( v1 == 73 )
      {
        if ( v3 < 0x10000 && v3 + 4 <= (int)packet_in_length )
        {
          if ( v5 > 0 )
          {
            ++v3;
            v5 = 0;
            packet_in_byte = v3;
            packet_in_bit = 0;
          }
          v10 = v3;
          v3 += 4;
          v2 = *(unsigned int *)((char *)&packet_in_data + v10);
          packet_in_byte = v3;
        }
        if ( v2 == 1 )
        {
          if ( v3 < 0x10000 && v3 + 4 <= (int)packet_in_length )
          {
            if ( v5 > 0 )
            {
              ++v3;
              packet_in_bit = 0;
              packet_in_byte = v3;
            }
            g_1603612F0 = *(unsigned int *)((char *)&packet_in_data + v3);
            packet_in_byte = v3 + 4;
          }
          g_16B165F40 = 2;
        }
        else
        {
          g_1603612F4 = 0;
          g_16B165F40 = 0;
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

  g_18329C1E0 = 0;
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
        &packet_out_data,
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
          while ( *((_BYTE *)&packet_out_data + v15) );
          if ( (int)send_sr(v0, &packet_out_data, v15, 0) > 0 )
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
          if ( (int)recv_sr(v0, &packet_in_data, 0x2000, 0) > 0 )
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
        crt_sscanf((__int64)&packet_in_data + v19, "%d", (uintptr_t)&v38);
        if ( v19 < 0x2000LL )
        {
          do
          {
            if ( *((_BYTE *)&packet_in_data + v20) == 9 )
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
          v24 = *((_BYTE *)&packet_in_data + v23);
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
        g_18329C1E0 = ntohl_sr(v26);
        v27 = v21;
        if ( v21 < 0x2000LL )
        {
          do
          {
            if ( *((_BYTE *)&packet_in_data + v27) == 9 )
              break;
            ++v21;
            ++v27;
          }
          while ( v27 < 0x2000 );
        }
        v28 = v21 + 1;
        v29 = v28;
        crt_sscanf((__int64)&packet_in_data + v28, "%d", (uintptr_t)&v38);
        LOWORD(g_18329C1E4) = v38;
        if ( g_18329C1E0 != -1 )
        {
          sr_connected = 1;
          LOWORD(g_18329C1E4) = v38 + 2;
          if ( v28 < 0x2000LL )
          {
            do
            {
              if ( *((_BYTE *)&packet_in_data + v29) == 9 )
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
              v34 = *((_BYTE *)&packet_in_data + v31);
              if ( v34 == 9 )
                break;
              v35 = v30 + i;
              ++v31;
              *((_BYTE *)&g_18329C1E4 + v35 + 2) = v34;
            }
            v36 = v30 + i;
            ++v31;
            v30 += 64;
            *((_BYTE *)&g_18329C1E4 + v36 + 2) = 0;
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
    g_18539D3E8 = 0;
    if ( !dword_140404A6C[g_18539D3A0 + 289301070]
      || (v0 = recvfrom_sr(
                 (int)dword_140404A6C[g_18539D3A0 + 289301078],
                 &packet_in_data,
                 0x10000,
                 0,
                 &g_18539D3E4,
                 &g_18539D3F4),
          g_1853AD404 = ntohl_sr(g_18539D3E8),
          LOWORD(g_1853AD408) = ntohs_sr(HIWORD(g_18539D3E4)),
          g_1853AD410 = 0,
          v0 <= 0) )
    {
      if ( !(unsigned int)sub_140198C60(
                            (unsigned int *)&g_1853AD410,
                            (__int64)&packet_in_data,
                            (__int64)&v2,
                            0x10000u) )
        break;
      v0 = v2;
      g_1853AD404 = 0;
      LOWORD(g_1853AD408) = 0;
      if ( v2 <= 0 )
        break;
    }
    if ( LOBYTE(packet_in_data) == (char)dword_1402B2658
      && BYTE1(packet_in_data) == SBYTE1(dword_1402B2658)
      && BYTE2(packet_in_data) == SBYTE2(dword_1402B2658) )
    {
      if ( HIBYTE(packet_in_data) == SHIBYTE(dword_1402B2658) )
      {
        *(_QWORD *)&packet_in_byte = 4;
        break;
      }
      if ( HIBYTE(packet_in_data) == byte_1402B26C3 )
      {
        result = sub_14011BD70(v0);
        if ( (_DWORD)result )
        {
          packet_in_length = result;
          return result;
        }
      }
    }
  }
  packet_in_length = v0;
  return (unsigned int)v0;
}
