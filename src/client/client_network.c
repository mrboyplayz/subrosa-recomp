#include "shared_client.h"

#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014007C040) ----------------------------------------------------
int sub_14007C040()
{
  int result;

  if ( g_160FC4824 )
  {
    result = sub_140199049();
    g_160FC4824 = 0;
  }
  return result;
}

//----- (000000014007C080) ----------------------------------------------------
__int64            sr_net_close_socket(int a1)
{
  __int64 socket_record_offset;
  __int64 result;

  socket_record_offset = 1048782LL * a1;
  result = closesocket_sr((int)dword_140404A6C[socket_record_offset + 112673944]);
  dword_140404A6C[socket_record_offset + 112673941] = 0;
  return result;
}

//----- (000000014007C0C0) ----------------------------------------------------
__int64            sub_14007C0C0(int a1, unsigned __int16 a2, int a3, _BYTE *a4)
{
  __int64 socket_record_offset;
  unsigned int socket_handle;
  __int64 result;
  __int64 table_value;
  __int64 argp;

  socket_record_offset = 1048782LL * a1;
  socket_handle = socket_sr(2, 2, 17);
  LOWORD(dword_140404A6C[socket_record_offset + 112673945]) = 2;
  dword_140404A6C[socket_record_offset + 112673944] = socket_handle;
  LOWORD(dword_140404A6C[socket_record_offset + 112673950]) = a2;
  dword_140404A6C[socket_record_offset + 112673946] = 0;
  HIWORD(dword_140404A6C[socket_record_offset + 112673945]) = htons_sr(a2);
  dword_140404A6C[socket_record_offset + 112673949] = 16;
  if ( !a3
    || (result = bind_sr((int)dword_140404A6C[socket_record_offset + 112673944], &dword_140404A6C[socket_record_offset + 112673945], 16), !(_DWORD)result) )
  {
    if ( a4 )
    {
      LOBYTE(dword_140404A6C[socket_record_offset + 112673942]) = *a4;
      BYTE1(dword_140404A6C[socket_record_offset + 112673942]) = a4[1];
      HIWORD(dword_140404A6C[socket_record_offset + 112673942]) = (unsigned __int8)a4[2];
    }
    table_value = (int)dword_140404A6C[socket_record_offset + 112673944];
    LODWORD(argp) = 1;
    result = ioctlsocket_sr(table_value, 2147772030LL, &argp);
    dword_140404A6C[socket_record_offset + 112673941] = 1;
  }
  return result;
}

//----- (000000014007C1C0) ----------------------------------------------------
__int64            sub_14007C1C0(int a1, int a2)
{
  __int64 input_value;
  __int64 scaled_index;
  __int64 packet_record_offset;
  unsigned int *state_address;
  __int64 result;
  unsigned int i;
  char hibyte_result;
  unsigned int ntohl_sr_result;
  __int64 hiword_result;

  input_value = a1;
  scaled_index = 1048782 * input_value;
  packet_record_offset = 16387LL * a2;
  dword_140404A6C[1048782 * a1 + 112673946] = 0;
  state_address = &dword_140404A6C[1048782 * a1 + 112673949];
  result = recvfrom_sr(
             (int)dword_140404A6C[1048782 * a1 + 112673944],
             &dword_140404A6C[packet_record_offset + 135184968],
             0x10000,
             0,
             &dword_140404A6C[1048782 * input_value + 112673945],
             &dword_140404A6C[1048782 * input_value + 112673949]);
  for ( i = result; (int)result > 0; i = result )
  {
    if ( LOBYTE(dword_140404A6C[packet_record_offset + 135184968]) == LOBYTE(dword_140404A6C[scaled_index + 112673942])
      && BYTE1(dword_140404A6C[packet_record_offset + 135184968]) == BYTE1(dword_140404A6C[scaled_index + 112673942])
      && BYTE2(dword_140404A6C[packet_record_offset + 135184968]) == BYTE2(dword_140404A6C[scaled_index + 112673942]) )
    {
      hibyte_result = HIBYTE(dword_140404A6C[packet_record_offset + 135184968]);
      if ( hibyte_result == 80 )
      {
        ntohl_sr_result = ntohl_sr(dword_140404A6C[scaled_index + 112673946]);
        hiword_result = HIWORD(dword_140404A6C[scaled_index + 112673945]);
        dword_140404A6C[scaled_index + 112673951] = ntohl_sr_result;
        LOWORD(dword_140404A6C[scaled_index + 112673952]) = ntohs_sr(hiword_result);
        *(_QWORD *)&dword_140404A6C[packet_record_offset + 135184965] = 4;
        dword_140404A6C[packet_record_offset + 135184967] = i;
        return i;
      }
      if ( hibyte_result == 102 )
      {
        dword_140404A6C[scaled_index + 112673951] = ntohl_sr(dword_140404A6C[scaled_index + 112673946]);
        LOWORD(dword_140404A6C[scaled_index + 112673952]) = ntohs_sr(HIWORD(dword_140404A6C[scaled_index + 112673945]));
        *(_QWORD *)&dword_140404A6C[packet_record_offset + 135184965] = 4;
        dword_140404A6C[packet_record_offset + 135184967] = i;
        result = sr_net_reassemble_fragments(input_value, a2);
        if ( (_DWORD)result )
          return result;
      }
    }
    dword_140404A6C[scaled_index + 112673946] = 0;
    result = recvfrom_sr(
               (int)dword_140404A6C[scaled_index + 112673944],
               &dword_140404A6C[packet_record_offset + 135184968],
               0x10000,
               0,
               &dword_140404A6C[1048782 * input_value + 112673945],
               state_address);
  }
  return result;
}

//----- (000000014007C3A0) ----------------------------------------------------
__int64            sr_net_reassemble_fragments(int a1, int a2)
{
  __int64 packet_record_offset;
  __int64 input_value;
  __int64 packed_word_bits;
  unsigned int integer_sum;
  __int64 scaled_index;
  __int16 masked_bits;
  unsigned int integer_sum_2;
  __int64 saved_packed_word_bits;
  unsigned __int8 masked_bits_2;
  unsigned int saved_masked_bits;
  unsigned int integer_sum_3;
  __int64 saved_packed_word_bits_2;
  unsigned __int8 saved_masked_bits_2;
  __int64 packed_word_bits_2;
  __int64 scaled_index_2;
  int masked_bits_3;
  unsigned int scaled_index_3;
  __int64 packed_word_bits_3;
  unsigned int table_value;
  int byte_count;
  __int64 scaled_index_4;
  signed int scaled_index_5;
  __int64 scaled_index_6;
  signed int byte_count_2;
  __int16 unrecovered_register_value;

  packet_record_offset = 16387LL * a2;
  input_value = a1;
  if ( (int)dword_140404A6C[packet_record_offset + 135184966] > 0 )
  {
    ++dword_140404A6C[packet_record_offset + 135184965];
    dword_140404A6C[packet_record_offset + 135184966] = 0;
  }
  packed_word_bits = (int)dword_140404A6C[packet_record_offset + 135184965];
  integer_sum = packed_word_bits + 2;
  if ( (int)packed_word_bits + 2 >= 0x10000 )
  {
    masked_bits = unrecovered_register_value;
  }
  else
  {
    scaled_index = packet_record_offset * 4 + packed_word_bits;
    LODWORD(packed_word_bits) = packed_word_bits + 2;
    masked_bits = *(_WORD *)((char *)&g_1607B538C + scaled_index);
    dword_140404A6C[packet_record_offset + 135184965] = integer_sum;
  }
  integer_sum_2 = packed_word_bits + 1;
  if ( (int)packed_word_bits + 1 >= 0x10000 )
  {
    masked_bits_2 = unrecovered_register_value;
  }
  else
  {
    saved_packed_word_bits = (int)packed_word_bits;
    LODWORD(packed_word_bits) = packed_word_bits + 1;
    masked_bits_2 = *((_BYTE *)&dword_140404A6C[packet_record_offset + 135184968] + saved_packed_word_bits);
    dword_140404A6C[packet_record_offset + 135184965] = integer_sum_2;
  }
  saved_masked_bits = masked_bits_2;
  integer_sum_3 = packed_word_bits + 1;
  if ( (int)packed_word_bits + 1 < 0x10000 )
  {
    saved_packed_word_bits_2 = (int)packed_word_bits;
    LODWORD(packed_word_bits) = packed_word_bits + 1;
    masked_bits_2 = *((_BYTE *)&dword_140404A6C[packet_record_offset + 135184968] + saved_packed_word_bits_2);
    dword_140404A6C[packet_record_offset + 135184965] = integer_sum_3;
  }
  saved_masked_bits_2 = masked_bits_2;
  if ( saved_masked_bits >= 0x10 || masked_bits_2 > 0x10u )
    return 0;
  LODWORD(packed_word_bits_2) = -1;
  scaled_index_2 = 1048782 * input_value;
  masked_bits_3 = dword_140404A6C[1048782 * input_value + 112673953];
  scaled_index_3 = dword_140404A6C[1048782 * input_value + 112673954];
  while ( masked_bits_3 != scaled_index_3 )
  {
    if ( LOWORD(dword_140404A6C[16387 * masked_bits_3 + 112673955 + scaled_index_2]) == masked_bits )
      LODWORD(packed_word_bits_2) = masked_bits_3;
    else
      masked_bits_3 = ((_BYTE)masked_bits_3 + 1) & 0x3F;
    if ( (_DWORD)packed_word_bits_2 != -1 )
      goto LABEL_22;
  }
  packed_word_bits_2 = (int)dword_140404A6C[scaled_index_2 + 112673954];
  packed_word_bits_3 = scaled_index_2 * 4 + 65548 * packed_word_bits_2;
  *(_WORD *)((char *)&g_15B1D5CF8 + packed_word_bits_3) = masked_bits;
  *(_QWORD *)((char *)&g_15B1D5CFC + packed_word_bits_3) = 0;
  table_value = dword_140404A6C[scaled_index_2 + 112673953];
  LODWORD(packed_word_bits_3) = ((unsigned __int8)dword_140404A6C[scaled_index_2 + 112673954] + 1) & 0x3F;
  dword_140404A6C[scaled_index_2 + 112673954] = packed_word_bits_3;
  if ( table_value == (_DWORD)packed_word_bits_3 )
    dword_140404A6C[scaled_index_2 + 112673953] = ((_BYTE)table_value + 1) & 0x3F;
LABEL_22:
  byte_count = dword_140404A6C[packet_record_offset + 135184967] - packed_word_bits;
  scaled_index_4 = 16387LL * (int)packed_word_bits_2;
  crt_memcpy(
    (__m128i *)&dword_140404A6C[350 * saved_masked_bits + 112673958 + scaled_index_4 + scaled_index_2],
    (     __m128i *)((char *)&dword_140404A6C[packet_record_offset + 135184968] + (int)packed_word_bits),
    byte_count);
  scaled_index_5 = 1400 * saved_masked_bits + byte_count;
  scaled_index_6 = scaled_index_2 * 4 + scaled_index_4 * 4;
  byte_count_2 = dword_140404A6C[scaled_index_2 + 112673957 + scaled_index_4];
  if ( byte_count_2 < scaled_index_5 )
  {
    *(unsigned int *)((char *)&g_15B1D5D00 + scaled_index_6) = scaled_index_5;
    byte_count_2 = 1400 * saved_masked_bits + byte_count;
  }
  *(unsigned int *)((char *)&g_15B1D5CFC + scaled_index_6) |= 1 << saved_masked_bits;
  if ( (*(unsigned int *)((char *)&g_15B1D5CFC + scaled_index_6) & ((1 << saved_masked_bits_2) - 1)) != (1 << saved_masked_bits_2) - 1 )
    return 0;
  dword_140404A6C[packet_record_offset + 135184967] = byte_count_2;
  *(_QWORD *)&dword_140404A6C[packet_record_offset + 135184965] = 4;
  crt_memcpy(
    (__m128i *)&dword_140404A6C[packet_record_offset + 135184968],
    (     __m128i *)((char *)&g_15B1D5D04 + scaled_index_6),
    byte_count_2);
  return dword_140404A6C[packet_record_offset + 135184967];
}

// 14007C40F: conditional instruction was optimized away because edx.4<1
// 14007C465: conditional instruction was optimized away because edx.4<1

//----- (000000014007C660) ----------------------------------------------------
__int64            sub_14007C660(int a1, int a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 result;
  __int64 packet_record_offset;
  int byte_count;
  __int64 socket_record_offset;
  __int16 htons_sr_result;
  __int64 table_value;
  __int64 table_value_2;
  signed int iteration_count;
  __int64 input_value;
  signed int shifted_bits;
  __int64 socket_record_offset_2;
  unsigned int *state_address;
  _WORD *state_address_2;
       __m128i *source_buffer;
  __int16 htons_sr_result_2;
  __int64 state_word;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007C660[48];
#define unused_written_slot (*(unsigned int * (*))(void *)(sr_frame_14007C660 + 0)) /* [rsp+30h] */
#define unused_written_slot_2 (*(_WORD * (*))(void *)(sr_frame_14007C660 + 8)) /* [rsp+38h] */
#define record_pointer (*(int * (*))(void *)(sr_frame_14007C660 + 16)) /* [rsp+40h] */
#define state_address_3 (*(unsigned int * (*))(void *)(sr_frame_14007C660 + 24)) /* [rsp+48h] */
#define state_address_4 (*(struct sockaddr * (*))(void *)(sr_frame_14007C660 + 32)) /* [rsp+50h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_14007C660 + 40)) /* [rsp+58h] */

  result = a2;
  packet_record_offset = 16387LL * a2;
  if ( (int)dword_140404A6C[packet_record_offset + 135184966] > 0 )
  {
    ++dword_140404A6C[packet_record_offset + 135184965];
    dword_140404A6C[packet_record_offset + 135184966] = 0;
  }
  byte_count = dword_140404A6C[packet_record_offset + 135184965];
  if ( byte_count > 1400 )
  {
    if ( byte_count <= 0x10000 )
    {
      iteration_count = 0;
      input_value = a1;
      input_value_2 = a1;
      shifted_bits = ((int)((unsigned __int64)(1570730897LL * byte_count) >> 32) >> 9)
          + ((unsigned int)((unsigned __int64)(1570730897LL * byte_count) >> 32) >> 31)
          + 1;
      if ( shifted_bits > 0 )
      {
        socket_record_offset_2 = 1048782LL * a1;
        state_address = &dword_140404A6C[socket_record_offset_2 + 112673942];
        unused_written_slot = &dword_140404A6C[socket_record_offset_2 + 112673946];
        state_address_2 = (_WORD *)&dword_140404A6C[socket_record_offset_2 + 112673952] + 1;
        unused_written_slot_2 = (_WORD *)&dword_140404A6C[socket_record_offset_2 + 112673945] + 1;
        state_address_3 = &dword_140404A6C[socket_record_offset_2 + 112673949];
        state_address_4 = (struct sockaddr *)&dword_140404A6C[socket_record_offset_2 + 112673945];
        record_pointer = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + socket_record_offset_2 * 4 + 454909132);
        source_buffer = (     __m128i *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + packet_record_offset * 4 + 544953228);
        do
        {
          g_1608353EC = *state_address;
          LOWORD(g_1608353F0) = *state_address_2;
          *(_QWORD *)&g_1608353E0 = 8;
          HIBYTE(g_1608353EC) = 102;
          BYTE2(g_1608353F0) = iteration_count;
          HIBYTE(g_1608353F0) = shifted_bits;
          if ( byte_count <= 1400 )
          {
            if ( byte_count + 8 < 0x10000 )
            {
              crt_memcpy((__m128i *)&g_1608353F4, source_buffer, byte_count);
              g_1608353E0 += byte_count;
            }
            byte_count = 0;
          }
          else
          {
            crt_memcpy((__m128i *)&g_1608353F4, source_buffer, 0x578u);
            byte_count -= 1400;
            g_1608353E0 = 1408;
          }
          *unused_written_slot = htonl_sr(a3);
          htons_sr_result_2 = htons_sr(a4);
          state_word = g_1608353E0;
          *unused_written_slot_2 = htons_sr_result_2;
          sendto_sr(*record_pointer, &g_1608353EC, state_word, 0, state_address_4, *state_address_3);
          ++iteration_count;
          source_buffer = (     __m128i *)((char *)source_buffer + 1400);
        }
        while ( iteration_count < shifted_bits );
        input_value = input_value_2;
      }
      result = 4195128 * input_value;
      ++*(_WORD *)((char *)&g_15B1D5CEC + result + 2);
    }
  }
  else
  {
    socket_record_offset = 1048782LL * a1;
    HIBYTE(dword_140404A6C[packet_record_offset + 135184968]) = 80;
    dword_140404A6C[socket_record_offset + 112673946] = htonl_sr(a3);
    htons_sr_result = htons_sr(a4);
    table_value = (int)dword_140404A6C[socket_record_offset + 112673944];
    table_value_2 = dword_140404A6C[packet_record_offset + 135184965];
    HIWORD(dword_140404A6C[socket_record_offset + 112673945]) = htons_sr_result;
    return sendto_sr(
             table_value,
             &dword_140404A6C[packet_record_offset + 135184968],
             table_value_2,
             0,
             &dword_140404A6C[socket_record_offset + 112673945],
             dword_140404A6C[socket_record_offset + 112673949]);
  }
  return result;
}
#undef unused_written_slot
#undef unused_written_slot_2
#undef record_pointer
#undef state_address_3
#undef state_address_4
#undef input_value_2

//----- (000000014007EEB0) ----------------------------------------------------
void            __attribute__((noreturn)) sub_14007EEB0(__int64 a1, __int64 a2, double a3)
{
  int connectmasterserver_result;
       char *literal_text;
  unsigned int state_word;
  unsigned int state_word_2;
  __int64 iteration_count;
  char masked_bits;
  int i;
  __int64 cached_i;
  unsigned int shifted_bits;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  unsigned int *state_address;
  __int64 state_word_3;
  int remaining_count;
  int iteration_count_2;
  int record_byte_offset;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 saved_iteration_count;
  unsigned int *state_address_2;
  int iteration_count_3;
  int queryperformancecounter_result;
  signed int state_word_4;
  signed int iteration_count_4;
  unsigned int *state_address_3;
  int iteration_count_5;
  unsigned int *state_address_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007EEB0[16];
#define argp (*(__int64 (*))(void *)(sr_frame_14007EEB0 + 0)) /* [rsp+60h] */
#define PerformanceCount (*(__int64 (*))(void *)(sr_frame_14007EEB0 + 8)) /* [rsp+68h] */

  connectmasterserver_result = sr_ConnectMasterServer();
  literal_text = "connection successful\n";
  if ( !connectmasterserver_result )
    literal_text = "connection failed\n";
  sub_14011BD10(literal_text);
  state_word = g_151E461B0;
  if ( (int)g_151E461B0 >= 1 )
  {
    if ( (int)g_151E461B0 > 30 )
      state_word = 30;
  }
  else
  {
    state_word = 1;
  }
  state_word_2 = g_151E461A8;
  g_151E461B0 = state_word;
  if ( (int)g_151E461A8 >= 2 )
  {
    if ( (int)g_151E461A8 > 128 )
      state_word_2 = 128;
    g_151E461A8 = state_word_2;
  }
  else
  {
    state_word_2 = 2;
    g_151E461A8 = 2;
  }
  iteration_count = 0;
  do
  {
    masked_bits = *((_BYTE *)&g_151E45B4C + iteration_count);
    *((_BYTE *)(unsigned int *)&g_1AD04ADD4 + iteration_count++) = masked_bits;
  }
  while ( masked_bits );
  g_1AD04B1F4 = state_word_2;
  g_183EBFCDC = 3600;
  g_183EBFD30 = 1260;
  g_151E4614C = 1;
  g_183EBFCE0 = 3600 * state_word;
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
    cached_i = i;
    shifted_bits = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
    dword_140404A6C[cached_i + 18600733] = shifted_bits;
  }
  dword_14030186C = i;
  sub_1400E5F10();
  sub_14013DCD0();
  state_address = &g_151620C60;
  g_19021F0C4 = 1120403456;
  g_19021F0DC = 1120403456;
  g_19021F0F4 = 1120403456;
  g_19021F10C = 1120403456;
  do
  {
    *state_address = 0;
    state_address += 3597;
  }
  while ( (__int64)state_address < (__int64)&g_1519A4060 );
  state_word_3 = g_151E461AC;
  game_type = g_151E461AC;
  if ( g_151E461AC - 3 > 2 )
  {
    if ( g_151E461AC != 7 )
      state_word_3 = 3;
    game_type = state_word_3;
  }
  remaining_count = 0;
  sr_ResetGame(state_word_3, unrecovered_register_value, unrecovered_register_value_2);
  g_193AC8680 = 1;
  iteration_count_2 = 0;
  if ( QueryPerformanceCounter((LARGE_INTEGER *)&argp) )
    record_byte_offset = (int)((double)(long long)argp * *(double *)&g_182A7D550);
  else
    record_byte_offset = 0;
  while ( 1 )
  {
    sub_140198FA1(1);
    saved_iteration_count = (unsigned int)iteration_count_2;
    state_address_2 = &g_151623978;
    iteration_count_2 = 0;
    do
    {
      if ( *(state_address_2 - 2886) && !*state_address_2 )
        ++iteration_count_2;
      if ( state_address_2[711] && !state_address_2[3597] )
        ++iteration_count_2;
      if ( state_address_2[4308] && !state_address_2[7194] )
        ++iteration_count_2;
      if ( state_address_2[7905] && !state_address_2[10791] )
        ++iteration_count_2;
      state_address_2 += 14388;
    }
    while ( (__int64)state_address_2 < (__int64)&g_1519A6D78 );
    if ( iteration_count_2 > 0 && !(_DWORD)saved_iteration_count )
    {
      g_183EBFCC4 = 5;
      sr_ResetGame(saved_iteration_count, unrecovered_register_value_3, unrecovered_register_value_4);
    }
    iteration_count_3 = 0;
    while ( 1 )
    {
      queryperformancecounter_result = QueryPerformanceCounter((LARGE_INTEGER *)&argp)
          ? (int)((double)(long long)argp * *(double *)&g_182A7D550)
          : 0;
      if ( (unsigned int)(queryperformancecounter_result - record_byte_offset) < 0x10 || iteration_count_3 >= 5 )
        break;
      if ( ++iteration_count_3 >= 4 )
      {
        if ( QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount) )
          record_byte_offset = (int)((double)(long long)PerformanceCount * *(double *)&g_182A7D550);
        else
          record_byte_offset = 0;
      }
      else
      {
        record_byte_offset += 16;
      }
      if ( --remaining_count <= 0 )
      {
        state_word_4 = g_160361344;
        remaining_count = 3600;
        iteration_count_4 = 0;
        if ( (int)g_160361344 > 0 )
        {
          state_address_3 = &g_1603613B0;
          do
          {
            if ( (int)*state_address_3 > 0 )
            {
              --*state_address_3;
              state_word_4 = g_160361344;
            }
            ++iteration_count_4;
            state_address_3 += 28;
          }
          while ( iteration_count_4 < state_word_4 );
        }
      }
      if ( game_state == 2 )
      {
        iteration_count_5 = 0;
        state_address_4 = &g_151623978;
        do
        {
          if ( *(state_address_4 - 2886) && *state_address_4 )
            sub_1401178F0(iteration_count_5);
          ++iteration_count_5;
          state_address_4 += 3597;
        }
        while ( iteration_count_5 < 256 );
      }
      sub_140132F90();
      sub_140133090();
      game_unknown_16b165f70 = 0;
      game_unknown_16b1f5f74 = 0;
      sub_14011B2A0();
      if ( game_state <= 2 )
        sr_physics_tick();
      sub_1400F5820(unrecovered_register_value_6, unrecovered_register_value_5, a3);
      sub_140136450();
      ++game_tick;
      if ( game_state <= 2 )
        sub_14002B9C0();
      sub_14008F1B0();
      if ( game_state <= 2 )
        sr_world_expire_bullets();
    }
  }
}
#undef argp
#undef PerformanceCount

//----- (000000014008EAD0) ----------------------------------------------------
__int64            sub_14008EAD0(int a1)
{
  __int64 input_value;
  __int64 table_value;
  __int64 result;
  __int64 argp;

  LOWORD(g_18539D3F8) = g_151E45940;
  input_value = a1;
  dword_140404A6C[input_value + 289301078] = socket_sr(2, 2, 17);
  LOWORD(g_18539D3E4) = 2;
  g_18539D3E8 = 0;
  HIWORD(g_18539D3E4) = htons_sr(LOWORD(g_18539D3F8));
  g_18539D3F4 = 16;
  table_value = (int)dword_140404A6C[input_value + 289301078];
  LODWORD(argp) = 1;
  result = ioctlsocket_sr(table_value, 2147772030LL, &argp);
  dword_140404A6C[input_value + 289301070] = 1;
  return result;
}

//----- (000000014008EB80) ----------------------------------------------------
__int64            sub_14008EB80(int a1)
{
  __int64 input_value;
  __int64 result;
  __int64 table_value;
  __int64 argp;

  LOWORD(g_18539D3F8) = g_151E45940;
  input_value = a1;
  dword_140404A6C[input_value + 289301078] = socket_sr(2, 2, 17);
  LOWORD(g_18539D3E4) = 2;
  g_18539D3E8 = 0;
  HIWORD(g_18539D3E4) = htons_sr(LOWORD(g_18539D3F8));
  g_18539D3F4 = 16;
  result = bind_sr((int)dword_140404A6C[input_value + 289301078], &g_18539D3E4, 16);
  if ( !(_DWORD)result )
  {
    table_value = (int)dword_140404A6C[input_value + 289301078];
    LODWORD(argp) = 1;
    result = ioctlsocket_sr(table_value, 2147772030LL, &argp);
    dword_140404A6C[input_value + 289301070] = 1;
  }
  return result;
}

//----- (0000000140130350) ----------------------------------------------------
void            sub_140130350(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  signed int cached_packet_out_byte;
  unsigned int input_value;
  unsigned int state_word;
  int element_index;
  int shifted_bits;
  char hibyte_result;
  int saved_cached_packet_out_byte;
  int saved_cached_packet_out_byte_2;

  cached_packet_out_byte = packet_out_byte;
  input_value = a1;
  if ( (int)packet_out_bit > 0 )
  {
    cached_packet_out_byte = packet_out_byte + 1;
    packet_out_bit = 0;
    ++packet_out_byte;
  }
  if ( cached_packet_out_byte > 1200 )
  {
    state_word = 0;
    g_185A2D7EC = 0;
    element_index = 0;
    shifted_bits = (cached_packet_out_byte >> 10) + 1;
    if ( shifted_bits > 0 )
    {
      while ( 1 )
      {
        g_185A2D7E4 = 0;
        if ( state_word )
        {
          unk_1402B26C0 = g_185A2D7F0;
          LOWORD(g_1853BD424) = g_185A2D7F4;
        }
        else
        {
          g_185A2D7F0 = unk_1402B26C0;
          LOWORD(g_185A2D7F4) = g_1853BD424;
          BYTE2(g_185A2D7F4) = element_index;
        }
        hibyte_result = HIBYTE(g_185A2D7F4);
        saved_cached_packet_out_byte = cached_packet_out_byte;
        if ( !state_word )
          hibyte_result = shifted_bits;
        g_185A2D7E0 = 8;
        HIBYTE(g_185A2D7F4) = hibyte_result;
        saved_cached_packet_out_byte_2 = cached_packet_out_byte;
        if ( cached_packet_out_byte > 1024 )
          saved_cached_packet_out_byte = 1024;
        cached_packet_out_byte -= 1024;
        if ( saved_cached_packet_out_byte_2 <= 1024 )
          cached_packet_out_byte = 0;
        sub_14015AFD0(0, (     __m128i *)&dword_140404A6C[256 * element_index + 289301094], 1, saved_cached_packet_out_byte);
        if ( input_value )
        {
          g_18539D3E8 = htonl_sr(input_value);
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
        if ( ++element_index >= shifted_bits )
          break;
        state_word = g_185A2D7EC;
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
    sub_140198DC0(a3, (__int64)&packet_out_data, cached_packet_out_byte);
  }
}

