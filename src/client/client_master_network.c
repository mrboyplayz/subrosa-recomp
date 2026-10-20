#include "shared_client.h"

//----- (000000014006BED0) ----------------------------------------------------
void               sub_14006BED0()
{
  unsigned int state_word;
  char masked_bits;
  int masked_bits_2;
  int cached_packet_in_byte;
  unsigned int integer_sum;
  int cached_packet_in_bit;
  __int64 integer_sum_2;
  __int64 saved_cached_packet_in_byte;
  __int64 saved_cached_packet_in_byte_2;
  unsigned int masked_bits_3;
  __int64 saved_cached_packet_in_byte_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14006BED0[48];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14006BED0 + 0)) /* [rsp+0h] */
#define frame_word_at_32 (*(char (*))(void *)(sr_frame_14006BED0 + 32)) /* [rsp+20h] */
#define frame_word_at_36 (*(int (*))(void *)(sr_frame_14006BED0 + 36)) /* [rsp+24h] */
#define unused_frame_slot_40 (*(__int64 (*))(void *)(sr_frame_14006BED0 + 40)) /* [rsp+28h] */

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
    state_word = g_16B165F40;
    if ( g_16B165F40 )
    {
      masked_bits = frame_word_at_32;
LABEL_16:
      if ( state_word == 1 )
      {
        *(_QWORD *)&packet_out_byte = 5;
        masked_bits = 73;
        packet_out_data = dword_1402B2658;
        LOBYTE(g_18539D408) = 73;
        sr_net_write_bytes((     __m128i *)&g_1603612E4, 4, 1);
        sr_net_write_bytes((     __m128i *)&g_1603612F4, 4, 1);
        sub_140130350(g_18329C1E0, g_18329C1E4, 0);
      }
      goto LABEL_19;
    }
    if ( g_1829F8FD8 && (int)g_1829F8BD4 < 1024 )
    {
      *(_QWORD *)&packet_out_byte = 5;
      masked_bits = 72;
      packet_out_data = dword_1402B2658;
      LOBYTE(g_18539D408) = 72;
      sr_net_write_bytes((     __m128i *)(unsigned int *)&g_151E4594C, 1, 32);
      sr_net_write_bytes((     __m128i *)&g_1829F8BD4, 4, 1);
      sr_net_write_bytes((     __m128i *)&g_1829F8BD8, 1, g_1829F8BD4);
      sub_140130350(g_18329C1E0, g_18329C1E4, 0);
      state_word = g_16B165F40;
      goto LABEL_16;
    }
  }
  masked_bits = frame_word_at_32;
LABEL_19:
  if ( (int)sub_14011C760() > 0 )
  {
    masked_bits_2 = frame_word_at_36;
    do
    {
      cached_packet_in_byte = packet_in_byte;
      if ( (int)packet_in_byte >= 0x10000
        || (integer_sum = packet_in_byte + 1,
            (signed int)(packet_in_byte + 1) > (int)packet_in_length) )
      {
        cached_packet_in_bit = packet_in_bit;
      }
      else
      {
        cached_packet_in_bit = packet_in_bit;
        if ( (int)packet_in_bit > 0 )
        {
          cached_packet_in_bit = 0;
          ++packet_in_byte;
          packet_in_bit = 0;
          cached_packet_in_byte = integer_sum;
        }
        integer_sum_2 = cached_packet_in_byte++;
        masked_bits = *((_BYTE *)&packet_in_data + integer_sum_2);
        packet_in_byte = cached_packet_in_byte;
      }
      if ( masked_bits == 72 )
      {
        if ( cached_packet_in_byte >= 0x10000 )
          goto LABEL_38;
        if ( cached_packet_in_byte + 4 <= (int)packet_in_length )
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          g_1603612E4 = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte);
          packet_in_byte = cached_packet_in_byte;
        }
        if ( cached_packet_in_byte >= 0x10000 || cached_packet_in_byte + 4 > (int)packet_in_length )
        {
LABEL_38:
          masked_bits_3 = g_1603612F4;
        }
        else
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_2 = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          masked_bits_3 = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_2);
          g_1603612F4 = masked_bits_3;
          packet_in_byte = cached_packet_in_byte;
        }
        if ( masked_bits_3 )
        {
          if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= (int)packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
            }
            g_1603612F0 = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte);
            packet_in_byte = cached_packet_in_byte + 4;
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
      else if ( masked_bits == 73 )
      {
        if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= (int)packet_in_length )
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_3 = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          masked_bits_2 = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_3);
          packet_in_byte = cached_packet_in_byte;
        }
        if ( masked_bits_2 == 1 )
        {
          if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= (int)packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
            }
            g_1603612F0 = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte);
            packet_in_byte = cached_packet_in_byte + 4;
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
#undef unused_frame_slot_0
#undef frame_word_at_32
#undef frame_word_at_36
#undef unused_frame_slot_40

//----- (00000001400A3F30) ----------------------------------------------------
__int64 sr_ConnectMasterServer()
{
  unsigned int sr_connected = 0;
  int socket_handle;
  struct hostent *returned_pointer;
  struct servent *returned_pointer_2;
  __int16 htons_sr_result;
  char *unused_frame_slot_1184;
  __int128 *unused_local;
  __int64 unused_local_2;
  __int128 unused_local_3;
  __int128 unused_local_4;
  __int128 unused_local_5;
  __int128 unused_local_6;
  __int128 unused_local_7;
  __int128 unused_local_8;
  __int128 unused_local_9;
  __int128 unused_local_10;
  __int64 iteration_count;
  __int64 element_index;
  int record_byte_offset;
  int iteration_count_2;
  __int64 iteration_count_3;
  int iteration_count_4;
  int element_index_2;
  __int64 iteration_count_5;
  char masked_bits;
  __int64 saved_element_index;
  unsigned int inet_addr_sr_result;
  __int64 iteration_count_6;
  int iteration_count_7;
  __int64 iteration_count_8;
  __int64 record_byte_offset_2;
  __int64 iteration_count_9;
  __int64 remaining_count;
  __int64 i;
  char masked_bits_2;
  __int64 integer_sum;
  __int64 integer_sum_2;
  _Alignas(4) _WORD name[8];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A3F30[1200];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400A3F30 + 0)) /* [rsp+0h] */
#define iteration_count_10 (*(int (*))(void *)(sr_frame_1400A3F30 + 48)) /* [rsp+30h] */
#define argp (*(int (*))(void *)(sr_frame_1400A3F30 + 52)) /* [rsp+34h] */
#define optlen (*(int (*))(void *)(sr_frame_1400A3F30 + 56)) /* [rsp+38h] */
#define optval (*(char (*)[4])(void *)(sr_frame_1400A3F30 + 60)) /* [rsp+3Ch] */
#define timeout (*(__int128 (*))(void *)(sr_frame_1400A3F30 + 64)) /* [rsp+40h] */
#define readfds (*(_QWORD (*)[66])(void *)(sr_frame_1400A3F30 + 80)) /* [rsp+50h] */
#define writefds (*(char (*)[528])(void *)(sr_frame_1400A3F30 + 624)) /* [rsp+270h] */
#define cp (*(char (*)[32])(void *)(sr_frame_1400A3F30 + 1152)) /* [rsp+480h] */
#define unused_frame_slot_1184_2 (*(__int64 (*))(void *)(sr_frame_1400A3F30 + 1184)) /* [rsp+4A0h] */

  g_18329C1E0 = 0;
  socket_handle = socket_sr(2, 1, 6);
  if ( socket_handle != -1 )
  {
    returned_pointer = sub_140199031("www.crypticsea.com");
    if ( returned_pointer )
    {
      returned_pointer_2 = sub_14019903D("http", "tcp");
      name[0] = 2;
      *(_DWORD *)&name[2] = ***((_DWORD ***)returned_pointer + 3);
      htons_sr_result = returned_pointer_2 ? *((_WORD *)returned_pointer_2 + 12) : htons_sr(80);
      name[1] = htons_sr_result;
      crt_sprintf(
        &packet_out_data,
        "GET /anewzero/serverinfo.php HTTP/1.1\r\nHost:www.crypticsea.com\r\n\r\n");
      argp = 1;
      ioctlsocket_sr(socket_handle, 2147772030LL, &argp);
      if ( (unsigned int)connect_sr(socket_handle, name, 16) == -1 )
      {
        readfds[1] = socket_handle;
        LODWORD(readfds[0]) = 1;
        memcpy(writefds, readfds, 520); /* native MOVUPS copy of Win64 fd_set */
        *(_QWORD *)&timeout = 3;
        if ( select_sr(socket_handle + 1, (fd_set *)readfds, (fd_set *)writefds, nullptr, (     struct timeval *)&timeout) )
        {
          if ( (unsigned int)_WSAFDIsSet_sr(socket_handle, readfds) || (unsigned int)_WSAFDIsSet_sr(socket_handle, writefds) )
          {
            optlen = 4;
            if ( !(unsigned int)getsockopt_sr(socket_handle, 0xFFFF, 4103, optval, &optlen) && !*(_DWORD *)optval )
              goto LABEL_15;
          }
        }
      }
      if ( iteration_count_10 >= 1000 )
      {
LABEL_15:
        iteration_count_10 = 0;
        while ( 1 )
        {
          sub_140198FA1(100);
          ++iteration_count_10;
          iteration_count = -1;
          do
            ++iteration_count;
          while ( *((_BYTE *)&packet_out_data + iteration_count) );
          if ( (int)send_sr(socket_handle, &packet_out_data, iteration_count, 0) > 0 )
            break;
          if ( iteration_count_10 >= 30 )
          {
            if ( iteration_count_10 < 1000 )
              return 0;
            break;
          }
        }
        iteration_count_10 = 0;
        do
        {
          sub_140198FA1(100);
          ++iteration_count_10;
          if ( (int)recv_sr(socket_handle, &packet_in_data, 0x2000, 0) > 0 )
          {
            iteration_count_10 = 1000;
            goto LABEL_27;
          }
        }
        while ( iteration_count_10 < 30 );
        if ( iteration_count_10 < 1000 )
          return 0;
LABEL_27:
        closesocket_sr(socket_handle);
        element_index = 0;
        record_byte_offset = 0;
        while ( LOBYTE(dword_140404A6C[element_index + 289317486]) != 9 )
        {
          if ( BYTE1(dword_140404A6C[element_index + 289317486]) == 9 )
          {
            ++record_byte_offset;
            break;
          }
          if ( BYTE2(dword_140404A6C[element_index + 289317486]) == 9 )
          {
            record_byte_offset += 2;
            break;
          }
          if ( HIBYTE(dword_140404A6C[element_index + 289317486]) == 9 )
          {
            record_byte_offset += 3;
            break;
          }
          ++element_index;
          record_byte_offset += 4;
          if ( element_index >= 2048 )
            break;
        }
        iteration_count_2 = record_byte_offset + 1;
        iteration_count_3 = iteration_count_2;
        crt_sscanf((__int64)&packet_in_data + iteration_count_2, "%d", (uintptr_t)&iteration_count_10);
        if ( iteration_count_2 < 0x2000LL )
        {
          do
          {
            if ( *((_BYTE *)&packet_in_data + iteration_count_3) == 9 )
              break;
            ++iteration_count_2;
            ++iteration_count_3;
          }
          while ( iteration_count_3 < 0x2000 );
        }
        iteration_count_4 = iteration_count_2 + 1;
        element_index_2 = 0;
        iteration_count_10 = 0;
        iteration_count_5 = iteration_count_4;
        do
        {
          if ( iteration_count_5 >= 0x2000 )
            break;
          masked_bits = *((_BYTE *)&packet_in_data + iteration_count_5);
          if ( masked_bits == 9 )
            break;
          saved_element_index = element_index_2;
          ++iteration_count_4;
          ++element_index_2;
          ++iteration_count_5;
          cp[saved_element_index] = masked_bits;
        }
        while ( element_index_2 < 32 );
        iteration_count_10 = element_index_2;
        if ( (unsigned __int64)element_index_2 >= 0x20 )
          sub_1401F8694();
        cp[element_index_2] = 0;
        inet_addr_sr_result = inet_addr_sr(cp);
        g_18329C1E0 = ntohl_sr(inet_addr_sr_result);
        iteration_count_6 = iteration_count_4;
        if ( iteration_count_4 < 0x2000LL )
        {
          do
          {
            if ( *((_BYTE *)&packet_in_data + iteration_count_6) == 9 )
              break;
            ++iteration_count_4;
            ++iteration_count_6;
          }
          while ( iteration_count_6 < 0x2000 );
        }
        iteration_count_7 = iteration_count_4 + 1;
        iteration_count_8 = iteration_count_7;
        crt_sscanf((__int64)&packet_in_data + iteration_count_7, "%d", (uintptr_t)&iteration_count_10);
        LOWORD(g_18329C1E4) = iteration_count_10;
        if ( g_18329C1E0 != -1 )
        {
          sr_connected = 1;
          LOWORD(g_18329C1E4) = iteration_count_10 + 2;
          if ( iteration_count_7 < 0x2000LL )
          {
            do
            {
              if ( *((_BYTE *)&packet_in_data + iteration_count_8) == 9 )
                break;
              ++iteration_count_7;
              ++iteration_count_8;
            }
            while ( iteration_count_8 < 0x2000 );
          }
          record_byte_offset_2 = 0;
          iteration_count_9 = iteration_count_7 + 1;
          remaining_count = 8;
          do
          {
            for ( i = 0; i < 32; ++i )
            {
              if ( iteration_count_9 >= 0x2000 )
                break;
              masked_bits_2 = *((_BYTE *)&packet_in_data + iteration_count_9);
              if ( masked_bits_2 == 9 )
                break;
              integer_sum = record_byte_offset_2 + i;
              ++iteration_count_9;
              *((_BYTE *)&g_18329C1E4 + integer_sum + 2) = masked_bits_2;
            }
            integer_sum_2 = record_byte_offset_2 + i;
            ++iteration_count_9;
            record_byte_offset_2 += 64;
            *((_BYTE *)&g_18329C1E4 + integer_sum_2 + 2) = 0;
            --remaining_count;
          }
          while ( remaining_count );
        }
      }
    }
  }
  return sr_connected;
}
#undef unused_frame_slot_0
#undef iteration_count_10
#undef argp
#undef optlen
#undef optval
#undef timeout
#undef readfds
#undef writefds
#undef cp
#undef unused_frame_slot_1184_2

//----- (000000014011C760) ----------------------------------------------------
__int64 sub_14011C760()
{
  signed int received_byte_count;
  __int64 result;
  int callee_output_word;

  while ( 1 )
  {
    received_byte_count = 0;
    g_18539D3E8 = 0;
    if ( !dword_140404A6C[g_18539D3A0 + 289301070]
      || (received_byte_count = recvfrom_sr(
                 (int)dword_140404A6C[g_18539D3A0 + 289301078],
                 &packet_in_data,
                 0x10000,
                 0,
                 &g_18539D3E4,
                 &g_18539D3F4),
          g_1853AD404 = ntohl_sr(g_18539D3E8),
          LOWORD(g_1853AD408) = ntohs_sr(HIWORD(g_18539D3E4)),
          g_1853AD410 = 0,
          received_byte_count <= 0) )
    {
      if ( !(unsigned int)sub_140198C60(
                            (unsigned int *)&g_1853AD410,
                            (__int64)&packet_in_data,
                            (__int64)&callee_output_word,
                            0x10000u) )
        break;
      received_byte_count = callee_output_word;
      g_1853AD404 = 0;
      LOWORD(g_1853AD408) = 0;
      if ( callee_output_word <= 0 )
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
        result = sub_14011BD70(received_byte_count);
        if ( (_DWORD)result )
        {
          packet_in_length = result;
          return result;
        }
      }
    }
  }
  packet_in_length = received_byte_count;
  return (unsigned int)received_byte_count;
}
