#include "shared_client.h"

//----- (0000000140139E90) ----------------------------------------------------
void            sub_140139E90(__int64 a1, __int64 a2, double a3)
{
  int iteration_count;
  unsigned int *graphics_object;
  unsigned int *state_address;
  __int64 remaining_count;
  unsigned int *state_address_2;
  __int64 remaining_count_2;
  unsigned int *record_byte_offset;
  void *allocation_buffer;
  _WORD *allocated_buffer;
  __int64 saved_packed_word_bits;
  __int64 remaining_count_3;
  __int64 loaded_word;
  __int64 masked_bits;
  __int64 loaded_word_2;
  __int64 masked_bits_2;
  __int64 loaded_word_3;
  __int64 masked_bits_3;
  __int64 loaded_word_4;
  __int64 masked_bits_4;
  __int64 loaded_word_5;
  __int64 masked_bits_5;
  __int64 loaded_word_6;
  __int64 masked_bits_6;
  __int64 loaded_word_7;
  __int64 masked_bits_7;
  __int64 loaded_word_8;
  __int64 masked_bits_8;
  __int64 packed_word_bits;
  __int64 masked_bits_9;
  unsigned int *state_address_3;
  int i;
  __int64 cached_i;
  unsigned int shifted_bits;
  unsigned int *buffer_cursor;
  unsigned int integer_sum;
  unsigned int *buffer_cursor_2;
  unsigned int *buffer_cursor_3;
  unsigned int *buffer_cursor_4;
  unsigned int *buffer_cursor_5;
  unsigned int integer_sum_2;
  unsigned int *state_address_4;
  unsigned int running_total;
  int rol4_result;
  int rol4_result_2;
  int scaled_index;
  unsigned int running_total_2;
  int integer_quotient;
  int rol4_result_3;
  int scaled_index_2;
  int rol4_result_4;
  int rol4_result_5;
  int scaled_index_3;
  int integer_quotient_2;
  __m128i si128;
  __m128i loaded_vector;
  __int64 rol4_result_6;
  int integer_quotient_3;
  __int64 integer_sum_3;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  unsigned int *buffer_cursor_6;
  __int64 unused_local_4;
  __int64 unused_local_5;
  unsigned int *buffer_cursor_7;
  int iteration_count_2;
  int *buffer_cursor_8;
  unsigned int *state_address_5;
  int *record_byte_offset_2;
  int scaled_index_4;
  int state_word;
  int iteration_count_3;
  unsigned int *state_address_6;
  int iteration_count_4;
  unsigned int *state_address_7;
  int state_word_2;
  int iteration_count_5;
  unsigned int *state_address_8;
  int iteration_count_6;
  int *buffer_cursor_9;
  int *buffer_cursor_10;
  int iteration_count_7;
  int iteration_count_8;
  int *buffer_cursor_11;
  int cached_world_particle_mesh_1;
  int j;
  signed int state_word_3;
  int k;
  int m;
  int *buffer_cursor_12;
  int n;
  __int64 state_word_4;
  int state_word_5;
  unsigned int state_word_6;
  signed int state_word_7;
  signed int iteration_count_9;
  int iteration_count_10;
  int scaled_index_5;
  __int64 scaled_index_6;
  signed int iteration_count_11;
  signed int ii;
  __int64 scaled_index_7;
  signed int scaled_index_8;
  int state_word_8;
  __int64 scaled_index_9;
  signed int jj;
  signed int kk;
  signed int scaled_index_10;
  int state_word_9;
  __int64 scaled_index_11;
  signed int iteration_count_12;
  char *state_address_9;
  int table_value;
  int iteration_count_13;
  int *buffer_cursor_13;
  int loaded_word_9;
  int comparison_result;
  int scaled_index_12;
  int *buffer_cursor_14;
  int iteration_count_14;
  int iteration_count_15;
  int *buffer_cursor_15;
  int iteration_count_16;
  int *buffer_cursor_16;
  int iteration_count_17;
  int *buffer_cursor_17;
  int iteration_count_18;
  int *buffer_cursor_18;
  int *buffer_cursor_19;
  signed int *buffer_cursor_20;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140139E90[384];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140139E90 + 0)) /* [rsp+8h] */
#define destination_buffer (*(_QWORD (*)[2])(void *)(sr_frame_140139E90 + 80)) /* [rsp+58h] */
#define scratch_buffer (*(_DWORD (*)[4])(void *)(sr_frame_140139E90 + 96)) /* [rsp+68h] */
#define scratch_buffer_2 (*(_DWORD (*)[30])(void *)(sr_frame_140139E90 + 112)) /* [rsp+78h] */
#define unused_frame_slot_368 (*(__int64 (*))(void *)(sr_frame_140139E90 + 368)) /* [rsp+178h] */

  iteration_count = 1;
  graphics_object = &world_vertex_shader;
  g_151E4618C = 1;
  do
  {
    *(graphics_object - 1) = glCreateProgram();
    *graphics_object = glCreateShader(35633);
    graphics_object[1] = glCreateShader(35632);
    graphics_object[2] = glCreateShader(36313);
    graphics_object += 60;
  }
  while ( (__int64)graphics_object < (__int64)&g_1515AEDC4 );
  state_address = &g_183E9B0C4;
  remaining_count = 0x2000;
  do
  {
    glGenBuffers(1, state_address - 1);
    glGenBuffers(1, state_address);
    state_address += 2;
    --remaining_count;
  }
  while ( remaining_count );
  state_address_2 = &g_183E990C4;
  remaining_count_2 = 64;
  do
  {
    glGenFramebuffers(1, state_address_2 - 1);
    glGenRenderbuffers(1, state_address_2);
    state_address_2 += 2;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  record_byte_offset = &g_144960AC8;
  do
  {
    allocation_buffer = *((void **)record_byte_offset - 2);
    *(record_byte_offset - 6) = 1;
    *record_byte_offset = 1086324736;
    *(record_byte_offset - 5) = 0x40000;
    free(allocation_buffer);
    allocated_buffer = (_WORD *)sr_path_malloc(0x100000);
    *((_QWORD *)record_byte_offset - 2) = (uint64)(uintptr_t)(allocated_buffer);
    crt_memset((void *)(uintptr_t)(allocated_buffer), 0, 0x100000u);
    saved_packed_word_bits = 0;
    remaining_count_3 = 384;
    *((_QWORD *)record_byte_offset - 1) = 0;
    do
    {
      *(_DWORD *)(*((_QWORD *)record_byte_offset - 2) + 4 * saved_packed_word_bits) = 0;
      loaded_word = *((_QWORD *)record_byte_offset - 2);
      masked_bits = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits;
      *(_DWORD *)(loaded_word + 4 * masked_bits) = 0;
      loaded_word_2 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_2 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_2;
      *(_DWORD *)(loaded_word_2 + 4 * masked_bits_2) = 0;
      loaded_word_3 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_3 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_3;
      *(_DWORD *)(loaded_word_3 + 4 * masked_bits_3) = 0;
      loaded_word_4 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_4 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_4;
      *(_DWORD *)(loaded_word_4 + 4 * masked_bits_4) = 0;
      loaded_word_5 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_5 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_5;
      *(_DWORD *)(loaded_word_5 + 4 * masked_bits_5) = 0;
      loaded_word_6 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_6 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_6;
      *(_DWORD *)(loaded_word_6 + 4 * masked_bits_6) = 0;
      loaded_word_7 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_7 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_7;
      *(_DWORD *)(loaded_word_7 + 4 * masked_bits_7) = 0;
      loaded_word_8 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_8 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_8;
      *(_DWORD *)(loaded_word_8 + 4 * masked_bits_8) = 0;
      packed_word_bits = *((_QWORD *)record_byte_offset - 2);
      masked_bits_9 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_9;
      *(_DWORD *)(packed_word_bits + 4 * masked_bits_9) = 0;
      LODWORD(packed_word_bits) = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      saved_packed_word_bits = (unsigned int)packed_word_bits;
      *(record_byte_offset - 2) = packed_word_bits;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
    record_byte_offset += 8;
  }
  while ( (__int64)record_byte_offset < (__int64)&g_144960BC8 );
  g_187BDE460 = (uint64)(uintptr_t)(sub_1401E0760(0xBB80u, 1, 2048, scratch_buffer));
  sub_1401E0F40(*(int **)&g_187BDE460, 4002, 16000);
  state_address_3 = &g_187BDE660;
  do
  {
    *(_QWORD *)state_address_3 = (uint64)(uintptr_t)(sub_1401E22F0(48000, 1, scratch_buffer));
    state_address_3 += 2;
  }
  while ( (__int64)state_address_3 < (__int64)&g_187BDE6A0 );
  g_144AF96E0 = sub_140237448(nullptr);
  for ( i = 1; i < 624; ++i )
  {
    cached_i = i;
    shifted_bits = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
    dword_140404A6C[cached_i + 18600733] = shifted_bits;
  }
  dword_14030186C = i;
  render_cache_camera_uniforms_candidate();
  buffer_cursor = &g_183E977C4;
  integer_sum = 4;
  buffer_cursor_2 = &g_183E987C4;
  _mm_storeu_si128((__m128i *)(void *)&g_183E977A4, _mm_load_si128((     __m128i *)&xmmword_140278F50));
  g_183E977A0 = 4;
  do
  {
    *buffer_cursor++ = integer_sum;
    integer_sum = ++g_183E977A0;
  }
  while ( (__int64)buffer_cursor < (__int64)&g_183E987C4 );
  buffer_cursor_3 = &resting_buffer_0;
  do
  {
    *buffer_cursor_2++ = integer_sum;
    integer_sum = ++g_183E977A0;
  }
  while ( (__int64)buffer_cursor_2 < (__int64)&resting_buffer_0 );
  buffer_cursor_4 = &g_183E98C04;
  do
  {
    *buffer_cursor_3++ = integer_sum;
    integer_sum = ++g_183E977A0;
  }
  while ( (__int64)buffer_cursor_3 < (__int64)&g_183E98C04 );
  do
  {
    *buffer_cursor_4++ = integer_sum;
    integer_sum = ++g_183E977A0;
  }
  while ( (__int64)buffer_cursor_4 < (__int64)&effect_mesh_buffer );
  g_183E98C4C = integer_sum;
  buffer_cursor_5 = &g_183E98C8C;
  g_183E98C50 = integer_sum + 1;
  g_183E98C54 = integer_sum + 2;
  g_183E98C58 = integer_sum + 3;
  g_183E98C5C = integer_sum + 4;
  g_183E98C60 = integer_sum + 5;
  g_183E98C64 = integer_sum + 6;
  g_183E98C68 = integer_sum + 7;
  integer_sum_2 = integer_sum + 8;
  g_183E977A0 = integer_sum_2;
  do
  {
    *buffer_cursor_5++ = integer_sum_2;
    integer_sum_2 = ++g_183E977A0;
  }
  while ( (__int64)buffer_cursor_5 < (__int64)&g_183E98D8C );
  g_183E9908C = integer_sum_2;
  state_address_4 = &g_1810FF788;
  running_total = g_183E977A0;
  g_1810FF788 = 64;
  g_1810FF78C = 17161;
  rol4_result = 128 / __ROL4__(1, 1);
  rol4_result_2 = __ROL4__(1, 2);
  scaled_index = (rol4_result + 3) * (rol4_result + 3);
  g_183E99090 = running_total + 1;
  running_total += 2;
  g_1810FF790 = 411864;
  g_183E977A0 = running_total;
  g_1811177A4 = scaled_index;
  g_183E99094 = running_total;
  running_total_2 = g_183E977A0;
  g_1811177A0 = 128;
  g_1811177A8 = 24 * scaled_index;
  g_183E99098 = running_total_2 + 1;
  integer_quotient = (128 / rol4_result_2 + 3) * (128 / rol4_result_2 + 3);
  g_183E9909C = running_total_2 + 2;
  g_18112F7BC = integer_quotient;
  running_total_2 += 3;
  g_18112F7B8 = 128;
  g_1811477D0 = 512;
  g_18115F7E8 = 1024;
  g_18112F7C0 = 24 * integer_quotient;
  g_183E977A0 = running_total_2;
  rol4_result_3 = 128 / __ROL4__(1, 3);
  g_181177800 = 2048;
  scaled_index_2 = (rol4_result_3 + 3) * (rol4_result_3 + 3);
  g_1811477D4 = scaled_index_2;
  g_1811477D8 = 24 * scaled_index_2;
  rol4_result_4 = 128 / __ROL4__(1, 4);
  rol4_result_5 = __ROL4__(1, 5);
  scaled_index_3 = (rol4_result_4 + 3) * (rol4_result_4 + 3);
  g_18115F7EC = scaled_index_3;
  g_18115F7F0 = 24 * scaled_index_3;
  integer_quotient_2 = (128 / rol4_result_5 + 3) * (128 / rol4_result_5 + 3);
  g_181177804 = integer_quotient_2;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278FD0);
  loaded_vector = _mm_load_si128((     __m128i *)&xmmword_140279010);
  g_181177808 = 24 * integer_quotient_2;
  rol4_result_6 = (unsigned int)__ROL4__(1, 6);
  g_183E990A0 = running_total_2;
  integer_quotient_3 = (128 / (int)rol4_result_6 + 3) * (128 / (int)rol4_result_6 + 3);
  integer_sum_3 = g_183E977A0 + 1;
  g_183E977A0 = integer_sum_3;
  g_183E990A4 = integer_sum_3;
  g_18118F818 = 4096;
  g_183E97744 = 0;
  g_18118F81C = integer_quotient_3;
  g_183E97748 = 1;
  g_183E9774C = 2;
  g_183E97790 = 3;
  g_18118F820 = 24 * integer_quotient_3;
  g_183E97794 = 4;
  g_183E98C48 = g_183E977A0 + 1;
  effect_mesh_buffer = g_183E977A0 + 2;
  g_183E977A0 += 3;
  _mm_storeu_si128((__m128i *)(void *)&g_183E97750, si128);
  g_183E97770 = 13;
  _mm_storeu_si128((__m128i *)(void *)&g_183E97760, loaded_vector);
  g_183E97774 = 14;
  g_183E97798 = 15;
  g_183E97740 = 16;
  sub_1400C2DB0(rol4_result_6, (unsigned int)(128 % (int)rol4_result_6), integer_sum_3);
  sub_14014CBE0();
  sub_14013DCD0();
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C48 + 283793813]);
  glBufferData(34962, 1572864, 0, 35048);
  glBindBuffer(34962, dword_140404A6C[2 * effect_mesh_buffer + 283793813]);
  glBufferData(34962, 393216, 0, 35048);
  buffer_cursor_6 = &g_183E9908C;
  do
  {
    glBindBuffer(34962, dword_140404A6C[2 * *buffer_cursor_6 + 283793813]);
    glBufferData(34962, (int)(*state_address_4 * state_address_4[2]), 0, 35048);
    ++buffer_cursor_6;
    state_address_4 += 24582;
  }
  while ( (__int64)buffer_cursor_6 <= (__int64)&g_183E990A4 );
  glBindBuffer(34962, dword_140404A6C[2 * resting_buffer_0 + 283793813]);
  glBufferData(34962, 0x200000, 0, 35048);
  glBindBuffer(34962, dword_140404A6C[2 * resting_buffer_1 + 283793813]);
  glBufferData(34962, 0x100000, 0, 35048);
  buffer_cursor_7 = &g_183EBBBC4;
  do
  {
    glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[*buffer_cursor_7 + 283790166] + 283793813]);
    glBufferData(34962, 196608, 0, 35048);
    ++buffer_cursor_7;
  }
  while ( (__int64)buffer_cursor_7 < (__int64)&g_183EBBFC4 );
  iteration_count_2 = 0;
  buffer_cursor_8 = (int *)&g_183EBB1C4;
  state_address_5 = &g_192E9A680;
  record_byte_offset_2 = (int *)&g_183EBB2C4;
  while ( iteration_count_2 == 12 )
  {
    sub_140102ED0(12, *(buffer_cursor_8 - 64), "data/helitest.tst");
    sub_140102ED0(12, *buffer_cursor_8, "data/helitest.tst");
LABEL_37:
    ++iteration_count_2;
    ++buffer_cursor_8;
    record_byte_offset_2 += 4;
    state_address_5 += 24944;
    if ( iteration_count_2 >= 18 )
      goto LABEL_40;
  }
  if ( iteration_count_2 == 8 )
  {
    sub_140102ED0(8, *(buffer_cursor_8 - 64), "data/van.tst");
    sub_140102ED0(8, *buffer_cursor_8, "data/van.tst");
    goto LABEL_37;
  }
  scaled_index_4 = *(buffer_cursor_8 - 64);
  if ( iteration_count_2 != 17 )
  {
    if ( *state_address_5 )
    {
      sub_140064FF0(scaled_index_4, iteration_count_2);
      sub_140064FF0(*buffer_cursor_8, iteration_count_2);
    }
    else
    {
      sub_140061A60(scaled_index_4, iteration_count_2);
      sub_1400636E0(*buffer_cursor_8, iteration_count_2);
    }
    goto LABEL_37;
  }
  sub_1400FF660(17, scaled_index_4);
  sub_1400FF660(17, *buffer_cursor_8);
  sub_1400FF3C0((__int64)&g_1905A2E60, *record_byte_offset_2);
LABEL_40:
  sub_1400E9A60(g_183EBB6C8, -1, "ak47");
  sub_1400E9A60(g_183EBB6D0, -1, "m16");
  sub_1400E9A60(g_183EBB6E0, -1, "mp5");
  sub_1400E9A60(g_183EBB6CC, -1, "ak47_magazine");
  sub_1400E9A60(g_183EBB6D4, -1, "m16_magazine");
  sub_1400E9A60(g_183EBB6E4, -1, "mp5_magazine");
  sub_1400E9A60(g_183EBB6F4, -1, "9mm_magazine");
  sub_14004EB60(g_183EBB6DC, 3, 0);
  sub_140052240(g_183EBB6D8, 5, a3);
  sub_1400E9A60(g_183EBB6F0, -1, "9mm");
  sub_14004E6E0(g_183EBB700, 0.3125, 0.09375, 0.25);
  sub_14004E6E0(g_183EBB704, 0.3125, 0.09375, 0.25);
  sub_140066EE0(g_183EBBAC4, 0.25, sr_export_float_lane_container(1052770304), 0.28125);
  sub_140066EE0(g_183EBBAC8, 0.25, sr_export_float_lane_container(1049624576), 0.28125);
  sub_140066EE0(g_183EBBACC, 0.25, sr_export_float_lane_container(1050673152), 0.234375);
  sub_140066EE0(g_183EBBAD0, 0.25, sr_export_float_lane_container(1047527424), 0.234375);
  sub_140050280(g_183EBB710, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB714, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB718, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB71C, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB720, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB724, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB6FC, 0.125, 0.0625, 0.125);
  sub_1400561C0(g_183EBB730);
  sub_140050280(g_183EBB754, 0.03125, 0.28125, 0.03125);
  sub_140050280(g_183EBB734, 0.4375, 1.125, 0.03125);
  sub_14013FCD0(39, g_183EBB760);
  sub_14013FCD0(39, g_183EBB764);
  sub_140050280(
    g_183EBB758,
    *(float *)&g_182AABF94,
    *(float *)&g_182AABF98,
    *(float *)&g_182AABF9C);
  sub_140050280(
    g_183EBB75C,
    *(float *)&g_182AAD364,
    *(float *)&g_182AAD368,
    *(float *)&g_182AAD36C);
  sub_1400555C0(g_183EBB774, 44, sr_export_float_lane_container(1040187392), 0.09375, 0.5);
  state_word = g_183EBB768;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  LODWORD(destination_buffer[0]) = 0;
  *(_QWORD *)((char *)destination_buffer + 4) = 1054867456;
  sub_140002D00((float *)destination_buffer, 1.0, 0.0625, 0.5);
  iteration_count_3 = 0;
  HIDWORD(destination_buffer[0]) = -1115684864;
  do
  {
    if ( !iteration_count_3 || (LODWORD(destination_buffer[0]) = 1064304640, iteration_count_3 == 3) )
      LODWORD(destination_buffer[0]) = -1083179008;
    LODWORD(destination_buffer[1]) = -1092616192;
    if ( (unsigned int)iteration_count_3 >= 2 )
      LODWORD(destination_buffer[1]) = 1054867456;
    sub_140002D00((float *)destination_buffer, 0.0625, 0.5, 0.0625);
    ++iteration_count_3;
  }
  while ( iteration_count_3 < 4 );
  state_address_6 = &g_16AB13DB4;
  iteration_count_4 = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address_7 = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address_7 - 1) = 0;
      ++iteration_count_4;
      *(_QWORD *)(state_address_7 + 1) = 0;
      *(_QWORD *)(state_address_7 + 3) = 0;
      state_address_7 += 6;
    }
    while ( iteration_count_4 < (int)mesh_triangle_count );
  }
  sub_1401449C0(state_word, 0);
  sub_14013FCD0(42, g_183EBB76C);
  sub_14013FCD0(43, g_183EBB770);
  sub_1400FFAE0(g_183EBB708, 0.043945312, 0.03125, 0.10546875);
  sub_1400FFAE0(g_183EBB70C, 0.051269531, 0.01171875, 0.12304688);
  sub_140050280(g_183EBB738, 0.25, 0.015625, 0.25);
  sub_140050280(g_183EBB74C, 0.25, 0.015625, 0.25);
  state_word_2 = g_183EBC3DC;
  LODWORD(destination_buffer[1]) = -1071644672;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  destination_buffer[0] = 0;
  sub_140002D00((float *)destination_buffer, 0.125, 0.03125, 2.5);
  iteration_count_5 = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address_8 = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address_8 - 1) = 0;
      ++iteration_count_5;
      *(_QWORD *)(state_address_8 + 1) = 0;
      *(_QWORD *)(state_address_8 + 3) = 0;
      state_address_8 += 6;
    }
    while ( iteration_count_5 < (int)mesh_triangle_count );
  }
  sub_1401449C0(state_word_2, 0);
  sub_1400E9A60(g_183EBB728, -1, "cellphone");
  sub_1400E9A60(g_183EBB72C, -1, "walkietalkie");
  sub_1400E9A60(g_183EBB6F8, -1, "grenade");
  sub_1400E9A60(g_183EBB750, -1, "soccerball");
  sub_1400504C0(g_183EBB748, 0.0625, 0.1875, 0.0625);
  sub_14004FDB0(g_183EBB73C);
  sub_14018C340(g_183EBC3E4);
  iteration_count_6 = 0;
  if ( (int)g_1812C2060 > 0 )
  {
    buffer_cursor_9 = (int *)&g_183EBB780;
    do
      sub_14013F590(iteration_count_6++, *buffer_cursor_9++);
    while ( iteration_count_6 < (int)g_1812C2060 );
  }
  sub_14013FCD0(9, g_183EBB6E8);
  sub_14013FCD0(10, g_183EBB6EC);
  sub_14013FCD0(45, g_183EBB778);
  asset_load_character_cmc_candidate(0, "fcasual1");
  asset_load_character_cmc_candidate(1, "fsuit1");
  asset_load_character_cmc_candidate(2, "fsuit2");
  asset_load_character_cmc_candidate(8, "mcasual1");
  asset_load_character_cmc_candidate(9, "msuit1");
  asset_load_character_cmc_candidate(10, "msuit2");
  asset_load_character_cmc_candidate(16, "fnecktie1");
  asset_load_character_cmc_candidate(18, "mnecktie1");
  asset_load_character_cmc_candidate(20, "fnecklace1");
  asset_load_character_cmc_candidate(21, "fnecklace4");
  asset_load_character_cmc_candidate(22, "mnecklace1");
  asset_load_character_cmc_candidate(23, "mnecklace4");
  mesh_vertex_count = 0;
  buffer_cursor_10 = (int *)&world_particle_mesh_0;
  mesh_triangle_count = 0;
  iteration_count_7 = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  do
  {
    sub_14004EB60(*(buffer_cursor_10 - 32), iteration_count_7, 0);
    sub_14004EB60(*buffer_cursor_10++, iteration_count_7++, 1);
  }
  while ( iteration_count_7 < 4 );
  iteration_count_8 = 1;
  buffer_cursor_11 = (int *)&g_183EBC0C8;
  do
    sub_14005B840(*buffer_cursor_11++, iteration_count_8++);
  while ( iteration_count_8 < 7 );
  sub_1400E9A60(g_183EBC244, -1, "fhead1");
  sub_1400E9A60(g_183EBC248, -1, "fhead2");
  sub_1400E9A60(g_183EBC24C, -1, "fhead3");
  sub_1400E9A60(g_183EBC250, -1, "fhead4");
  sub_1400E9A60(g_183EBC254, -1, "fhead5");
  sub_1400E9A60(g_183EBC2C4, -1, "fhair1");
  sub_1400E9A60(g_183EBC2C8, -1, "fhair2");
  sub_1400E9A60(g_183EBC2CC, -1, "fhair3");
  sub_1400E9A60(g_183EBC2D0, -1, "fhair4");
  sub_1400E9A60(g_183EBC2D4, -1, "fhair5");
  sub_1400E9A60(g_183EBC2D8, -1, "fhair6");
  sub_1400E9A60(g_183EBC2DC, -1, "fhair7");
  sub_1400E9A60(g_183EBC2E0, -1, "fhair8");
  sub_1400E9A60(g_183EBC2E4, -1, "fhair9");
  sub_1400E9A60(g_183EBC284, -1, "mhead1");
  sub_1400E9A60(g_183EBC288, -1, "mhead2");
  sub_1400E9A60(g_183EBC28C, -1, "mhead3");
  sub_1400E9A60(g_183EBC290, -1, "mhead4");
  sub_1400E9A60(g_183EBC294, -1, "mhead5");
  sub_1400E9A60(g_183EBC304, -1, "mhair1");
  sub_1400E9A60(g_183EBC308, -1, "mhair2");
  sub_1400E9A60(g_183EBC30C, -1, "mhair3");
  sub_1400E9A60(g_183EBC310, -1, "mhair4");
  sub_1400E9A60(g_183EBC314, -1, "mhair5");
  sub_1400E9A60(g_183EBC318, -1, "mhair6");
  sub_1400E9A60(g_183EBC31C, -1, "mhair7");
  sub_1400E9A60(g_183EBC320, -1, "mhair8");
  sub_1400E9A60(g_183EBC324, -1, "mhair9");
  cached_world_particle_mesh_1 = world_particle_mesh_1;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  memset(destination_buffer, 0, 12);
  sub_140002D00((float *)destination_buffer, 0.02, 0.02, 0.02);
  for ( j = 0; j < (int)mesh_triangle_count; state_address_6 += 6 )
  {
    *(_QWORD *)(state_address_6 - 1) = 0;
    ++j;
    *(_QWORD *)(state_address_6 + 1) = 0;
    *(_QWORD *)(state_address_6 + 3) = 0;
  }
  sub_1401449C0(cached_world_particle_mesh_1, 0);
  state_word_3 = g_1A4CFF8D0;
  for ( k = 0; k < state_word_3; ++k )
  {
    if ( k != 1 && k != g_1A4CFF7E4 )
    {
      sub_140099730(k, 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
      state_word_3 = g_1A4CFF8D0;
    }
  }
  for ( m = 0; m < 11; ++m )
    sub_1400990A0(1, m, 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
  sub_14009A5F0(g_183EBE438, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_14009A5F0(effect_texture, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_14009A5F0(g_183EBF050, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_14009A5F0(g_183EBF0F0, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  buffer_cursor_12 = (int *)&g_183EBF074;
  do
    sub_14009A5F0(*buffer_cursor_12++, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  while ( (__int64)buffer_cursor_12 < (__int64)&g_183EBF08C );
  for ( n = g_183EBF0F4; n <= (int)g_183EBF108; ++n )
    sub_14009A5F0(n, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_1400EDED0(g_183EBF10C, "data/model/tex_2.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF110, "data/model/walkie-talkie1.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_14009A5F0(resting_texture_0, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  state_word_4 = (int)g_183EBF16C;
  state_word_5 = 128;
  state_word_6 = g_1862AE010;
  state_word_7 = 128;
  g_1B0037420 = 128;
  iteration_count_9 = 0;
  g_1B0037424 = 128;
  do
  {
    iteration_count_10 = 0;
    if ( state_word_5 > 0 )
    {
      do
      {
        scaled_index_5 = iteration_count_10 + state_word_5 * iteration_count_9;
        if ( state_word_6 )
          dword_140404A6C[scaled_index_5 + 468765295] = -16711904;
        else
          dword_140404A6C[scaled_index_5 + 468765295] = 553582847;
        state_word_5 = g_1B0037420;
        ++iteration_count_10;
      }
      while ( iteration_count_10 < (int)g_1B0037420 );
      state_word_7 = g_1B0037424;
    }
    ++iteration_count_9;
  }
  while ( iteration_count_9 < state_word_7 );
  if ( state_word_6 )
  {
    g_1B0037428 = 1612720160;
    g_1B003742C = -425767648;
  }
  else
  {
    g_1B0037428 = 539500640;
    g_1B003742C = 541958118;
  }
  scaled_index_6 = 44 * state_word_4;
  dword_140404A6C[scaled_index_6 + 284024933] = state_word_5;
  dword_140404A6C[scaled_index_6 + 284024934] = state_word_7;
  dword_140404A6C[scaled_index_6 + 284024935] = 1;
  dword_140404A6C[scaled_index_6 + 284024936] = 6408;
  dword_140404A6C[scaled_index_6 + 284024937] = 6408;
  dword_140404A6C[scaled_index_6 + 284024943] = 0;
  dword_140404A6C[scaled_index_6 + 284024938] = 33071;
  dword_140404A6C[scaled_index_6 + 284024939] = 33071;
  dword_140404A6C[scaled_index_6 + 284024940] = 9728;
  dword_140404A6C[scaled_index_6 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[44 * state_word_4 + 284024945]);
  *(_QWORD *)&dword_140404A6C[scaled_index_6 + 284024945] = sr_path_malloc((int)(4
                                                                     * dword_140404A6C[scaled_index_6 + 284024933]
                                                                     * dword_140404A6C[scaled_index_6 + 284024934]));
  iteration_count_11 = 0;
  if ( (int)dword_140404A6C[44 * state_word_4 + 284024934] > 0 )
  {
    do
    {
      for ( ii = 0;
            ii < (int)dword_140404A6C[scaled_index_6 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index_6 + 284024945] + 4LL * scaled_index_8) = dword_140404A6C[scaled_index_7 + 468765295] )
      {
        scaled_index_7 = ii + g_1B0037420 * iteration_count_11;
        scaled_index_8 = ii + iteration_count_11 * dword_140404A6C[scaled_index_6 + 284024933];
        ++ii;
      }
      ++iteration_count_11;
    }
    while ( iteration_count_11 < (int)dword_140404A6C[scaled_index_6 + 284024934] );
  }
  sub_14014D3E0(state_word_4, 1);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBF154, "data/terrain_normal.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400ED9D0(g_183EBF158, "data/terrain_detail.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBF15C, "data/terrain.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBF160, "data/terrain_reflection.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  sub_14009D7A0(g_183EBF130);
  sub_1400ED9D0(g_183EBF120, "texture/mic.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_1400EDED0(g_183EBF134, "texture/cash_one.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF138, "texture/cash_five.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF13C, "texture/cash_ten.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF140, "texture/cash_twenty.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF144, "texture/cash_fifty.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF148, "texture/cash_hundred.png", 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2702u, 0);
  sub_1400EDED0(g_183EBF14C, "texture/cash_thousand.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2703u, 0);
  sub_1400EDED0(g_183EBF174, "data/model/tex_1.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF178, "data/model/gun_tex.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF17C, "data/model/tex_1.png", 0, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u, 0);
  sub_1400EDED0(g_183EBF5B4, "data/model/grenade.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF60C, "data/model/soccerball.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF634, "data/model/watermelon.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_14009C680(-1, g_183EBF57C);
  state_word_8 = g_183EBF170;
  scaled_index_9 = 44LL * (int)g_183EBF170;
  dword_140404A6C[scaled_index_9 + 284024933] = 16;
  dword_140404A6C[scaled_index_9 + 284024934] = 16;
  dword_140404A6C[scaled_index_9 + 284024935] = 1;
  dword_140404A6C[scaled_index_9 + 284024936] = 6408;
  dword_140404A6C[scaled_index_9 + 284024937] = 6408;
  dword_140404A6C[scaled_index_9 + 284024943] = 0;
  dword_140404A6C[scaled_index_9 + 284024938] = 33071;
  dword_140404A6C[scaled_index_9 + 284024939] = 33071;
  dword_140404A6C[scaled_index_9 + 284024940] = 9728;
  dword_140404A6C[scaled_index_9 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[scaled_index_9 + 284024945]);
  *(_QWORD *)&dword_140404A6C[scaled_index_9 + 284024945] = sr_path_malloc((int)(4
                                                                     * dword_140404A6C[scaled_index_9 + 284024933]
                                                                     * dword_140404A6C[scaled_index_9 + 284024934]));
  for ( jj = 0; jj < (int)dword_140404A6C[scaled_index_9 + 284024934]; ++jj )
  {
    for ( kk = 0;
          kk < (int)dword_140404A6C[scaled_index_9 + 284024933];
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index_9 + 284024945] + 4LL * scaled_index_10) = -1 )
    {
      scaled_index_10 = kk + jj * dword_140404A6C[scaled_index_9 + 284024933];
      ++kk;
    }
  }
  sub_14014D3E0(state_word_8, 1);
  state_word_9 = g_183EBF128;
  scaled_index_11 = 44LL * (int)g_183EBF128;
  dword_140404A6C[scaled_index_11 + 284024933] = 32;
  dword_140404A6C[scaled_index_11 + 284024934] = 16;
  dword_140404A6C[scaled_index_11 + 284024935] = 1;
  dword_140404A6C[scaled_index_11 + 284024936] = 6408;
  dword_140404A6C[scaled_index_11 + 284024937] = 6408;
  dword_140404A6C[scaled_index_11 + 284024943] = 0;
  dword_140404A6C[scaled_index_11 + 284024938] = 33071;
  dword_140404A6C[scaled_index_11 + 284024939] = 33071;
  dword_140404A6C[scaled_index_11 + 284024940] = 9728;
  dword_140404A6C[scaled_index_11 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[scaled_index_11 + 284024945]);
  *(_QWORD *)&dword_140404A6C[scaled_index_11 + 284024945] = sr_path_malloc((int)(4
                                                                     * dword_140404A6C[scaled_index_11 + 284024933]
                                                                     * dword_140404A6C[scaled_index_11 + 284024934]));
  iteration_count_12 = 0;
  if ( (int)dword_140404A6C[scaled_index_11 + 284024934] > 0 )
  {
    state_address_9 = (char *)&unk_1402B3470;
    do
    {
      table_value = dword_140404A6C[scaled_index_11 + 284024933];
      iteration_count_13 = 0;
      if ( table_value > 0 )
      {
        buffer_cursor_13 = (int *)state_address_9;
        do
        {
          loaded_word_9 = *buffer_cursor_13++;
          comparison_result = -(loaded_word_9 != 0);
          scaled_index_12 = iteration_count_13 + table_value * iteration_count_12;
          ++iteration_count_13;
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index_11 + 284024945] + 4LL * scaled_index_12) = comparison_result;
          table_value = dword_140404A6C[scaled_index_11 + 284024933];
        }
        while ( iteration_count_13 < table_value );
      }
      ++iteration_count_12;
      state_address_9 -= 128;
    }
    while ( iteration_count_12 < (int)dword_140404A6C[scaled_index_11 + 284024934] );
  }
  sub_14014D3E0(state_word_9, 1);
  sub_14013D1B0();
  sub_1400ED9D0(g_183EBF980, "texture/title.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_1400ED9D0(g_183EBF984, "texture/box.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_14009B1A0(g_183EBFA88);
  g_1A7971DA0 = 2048;
  g_1A7971DA4 = 2048;
  g_1A7971DD0 = 0;
  free(*(void **)&g_1A7971DC8);
  g_1A7971DC8 = sr_path_malloc(4 * g_1A7971DA0 * g_1A7971DA4);
  crt_memset(
    (void *)(uintptr_t)(*(_WORD **)&g_1A7971DC8),
    0xFFu,
    4 * g_1A7971DA0 * g_1A7971DA4);
  glGenTextures(1, &g_1A7971DC0);
  glBindTexture(3553, g_1A7971DC0);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9729);
  glTexParameteri(3553, 10241, 9729);
  glTexImage2D(3553,
    0,
    6408,
    g_1A7971DA0,
    g_1A7971DA4,
    0,
    6408,
    5121,
    g_1A7971DC8);
  g_18399EBFC = sub_140068FC0(0, "texture/icon-soccer_ball.png");
  g_18399EBC8 = sub_140068FC0(0, "texture/icon-disk-white.png");
  g_18399EBBC = sub_140068FC0(0, "texture/icon-disk-black.png");
  g_18399EBC0 = sub_140068FC0(0, "texture/icon-disk-green.png");
  g_18399EBC4 = sub_140068FC0(0, "texture/icon-disk-blue.png");
  g_18399EBCC = sub_140068FC0(0, "texture/icon-disk-gold.png");
  g_18399EBD0 = sub_140068FC0(0, "texture/icon-disk-red.png");
  g_18399EC0C = sub_140068FC0(0, "texture/icon-keyboard.png");
  g_18399EBAC = sub_140068FC0(0, "texture/icon-case-empty.png");
  g_18399EBB0 = sub_140068FC0(0, "texture/icon-case-empty.png");
  g_18399EBB4 = sub_140068FC0(0, "texture/icon-stack.png");
  g_18399EBB8 = g_18399EBB4;
  g_18399EBA8 = sub_140068FC0(0, "texture/icon-bandage.png");
  g_18399EB9C = sub_140068FC0(0, "texture/icon-pistol.png");
  g_18399EBA0 = sub_140068FC0(0, "texture/icon-clip-pistol.png");
  g_18399EBD4 = sub_140068FC0(0, "texture/icon-phone.png");
  g_18399EB74 = sub_140068FC0(0, "texture/icon-ak47.png");
  g_18399EB78 = sub_140068FC0(0, "texture/icon-clip-ak47.png");
  g_18399EB7C = sub_140068FC0(0, "texture/icon-m16.png");
  g_18399EB80 = sub_140068FC0(0, "texture/icon-clip-m16.png");
  g_18399EB8C = sub_140068FC0(0, "texture/icon-mp5.png");
  g_18399EB90 = sub_140068FC0(0, "texture/icon-clip-mp5.png");
  g_18399EB94 = sub_140068FC0(0, "texture/icon-uzi.png");
  g_18399EB98 = sub_140068FC0(0, "texture/icon-clip-uzi.png");
  g_18399EBDC = sub_140068FC0(0, "texture/icon-key.png");
  g_18399EBA4 = sub_140068FC0(0, "texture/icon-grenade.png");
  g_192E8F444 = sub_140068FC0(0, "texture/icon_speaker.png");
  g_192E8F448 = sub_140068FC0(0, "texture/icon_talking.png");
  buffer_cursor_14 = (int *)&g_183E93778;
  g_192E8F44C = sub_140068FC0(0, "texture/icon_muted.png");
  iteration_count_14 = 1;
  do
  {
    crt_sprintf(scratch_buffer_2, "ak47_fire%02d.wav", iteration_count_14);
    sub_1400EE400(*buffer_cursor_14, (__int64)scratch_buffer_2, 10.0);
    ++iteration_count_14;
    ++buffer_cursor_14;
  }
  while ( (__int64)buffer_cursor_14 < (__int64)&g_183E93790 );
  iteration_count_15 = 1;
  buffer_cursor_15 = (int *)&g_183E937F8;
  do
  {
    crt_sprintf(scratch_buffer_2, "m16_fire%02d.wav", iteration_count_15);
    sub_1400EE400(*buffer_cursor_15, (__int64)scratch_buffer_2, 10.0);
    ++iteration_count_15;
    ++buffer_cursor_15;
  }
  while ( (__int64)buffer_cursor_15 < (__int64)&g_183E93810 );
  iteration_count_16 = 1;
  buffer_cursor_16 = (int *)&g_183E938F8;
  do
  {
    crt_sprintf(scratch_buffer_2, "mp5_fire%02d.wav", iteration_count_16);
    sub_1400EE400(*buffer_cursor_16, (__int64)scratch_buffer_2, 10.0);
    ++iteration_count_16;
    ++buffer_cursor_16;
  }
  while ( (__int64)buffer_cursor_16 < (__int64)&g_183E93910 );
  iteration_count_17 = 1;
  buffer_cursor_17 = (int *)&g_183E93978;
  do
  {
    crt_sprintf(scratch_buffer_2, "uzi_fire%02d.wav", iteration_count_17);
    sub_1400EE400(*buffer_cursor_17, (__int64)scratch_buffer_2, 10.0);
    ++iteration_count_17;
    ++buffer_cursor_17;
  }
  while ( (__int64)buffer_cursor_17 < (__int64)&g_183E93990 );
  iteration_count_18 = 1;
  buffer_cursor_18 = (int *)&g_183E939F8;
  do
  {
    crt_sprintf(scratch_buffer_2, "pistol_fire%02d.wav", iteration_count_18);
    sub_1400EE400(*buffer_cursor_18, (__int64)scratch_buffer_2, 10.0);
    ++iteration_count_18;
    ++buffer_cursor_18;
  }
  while ( (__int64)buffer_cursor_18 < (__int64)&g_183E93A10 );
  sub_1400EE400(g_183E935C4, (__int64)"4cylinder.wav", 10.0);
  sub_1400EE400(g_183E935D4, (__int64)"tiresqueal.wav", 10.0);
  buffer_cursor_19 = (int *)&g_183E935D8;
  do
  {
    crt_sprintf(scratch_buffer_2, "ricochet%02d.wav", iteration_count);
    sub_1400EE400(*buffer_cursor_19, (__int64)scratch_buffer_2, 10.0);
    ++iteration_count;
    ++buffer_cursor_19;
  }
  while ( (__int64)buffer_cursor_19 < (__int64)&g_183E935F8 );
  sub_1400EE400(g_183E93618, (__int64)"carcrash01.wav", 32.0);
  sub_1400EE400(g_183E9361C, (__int64)"carcrash02.wav", 32.0);
  sub_1400EE400(g_183E93628, (__int64)"bullethitbody01.wav", 10.0);
  sub_1400EE400(game_unknown_183e9362c, (__int64)"bullethitbody02.wav", 10.0);
  sub_1400EE400(g_183E93638, (__int64)"bullethitmetal01.wav", 10.0);
  sub_1400EE400(g_183E9363C, (__int64)"bullethitmetal02.wav", 10.0);
  sub_1400EE400(g_183E93658, (__int64)"glassbreak01.wav", 10.0);
  sub_1400EE400(item_event_ring_back, (__int64)"phonering01.wav", 1.0);
  buffer_cursor_20 = (signed int *)&g_183E9366C;
  do
    sr_audio_generate_synth_sound(*buffer_cursor_20++, 0.25);
  while ( (__int64)buffer_cursor_20 < (__int64)&g_183E93698 );
  sub_1400EE400(g_183E936AC, (__int64)"reload01.wav", 1.0);
  sub_1400EE400(particle_landing_sound, (__int64)"shell_hit_cement.wav", 2.0);
  sub_1400EE400(g_183E936D0, (__int64)"gearshift01.wav", 1.0);
  sub_1400EE400(g_183E936D4, (__int64)"helicopter02.wav", 32.0);
  sr_audio_generate_synth_sound(g_183E936D8, 32.0);
  sr_audio_generate_synth_sound(g_183E936DC, 32.0);
  sr_audio_generate_synth_sound(g_183E936E0, 32.0);
  sr_audio_generate_synth_sound(g_183E936E4, 32.0);
  sub_1400EE400(g_183E936E8, (__int64)"factorywhistle.wav", 128.0);
  sub_1400EE400(g_183E936EC, (__int64)"explosion01.wav", 32.0);
  sub_1400EE400(g_183E936F0, (__int64)"modem.wav", 1.0);
  sub_1400EE400(g_183E936F4, (__int64)"floppy.wav", 1.0);
  sub_14013C920(unrecovered_register_value_2, unrecovered_register_value, 0.0 /* unused native input */);
  LOWORD(g_15414F280) = 65;
  LOWORD(g_15414F290) = 66;
  LOWORD(g_15414F2A0) = 67;
  LOWORD(g_15414F2B0) = 68;
  LOWORD(g_15414F2C0) = 69;
  LOWORD(g_15414F2D0) = 70;
  LOWORD(g_15414F2E0) = 71;
  LOWORD(g_15414F2F0) = 72;
  LOWORD(g_15414F300) = 73;
  LOWORD(g_15414F310) = 74;
  LOWORD(g_15414F320) = 75;
  LOWORD(g_15414F330) = 76;
  LOWORD(g_15414F340) = 77;
  LOWORD(g_15414F350) = 78;
  LOWORD(g_15414F360) = 79;
  LOWORD(g_15414F370) = 80;
  LOWORD(g_15414F380) = 81;
  LOWORD(g_15414F390) = 82;
  g_154150060 = 7629889;
  LOWORD(g_15414F3A0) = 83;
  LOWORD(g_15414F3B0) = 84;
  LOWORD(g_15414F3C0) = 85;
  LOWORD(g_15414F3D0) = 86;
  LOWORD(g_15414F3E0) = 87;
  LOWORD(g_15414F3F0) = 88;
  LOWORD(g_15414F400) = 89;
  LOWORD(g_15414F410) = 90;
  LOWORD(g_15414F420) = 49;
  LOWORD(g_15414F430) = 50;
  LOWORD(g_15414F440) = 51;
  LOWORD(g_15414F450) = 52;
  LOWORD(g_15414F460) = 53;
  LOWORD(g_15414F470) = 54;
  LOWORD(g_15414F480) = 55;
  LOWORD(g_15414F490) = 56;
  LOWORD(g_15414F4A0) = 57;
  LOWORD(g_15414F4B0) = 48;
  strcpy((char *)&g_15414F740, "Left");
  strcpy((char *)&g_15414F730, "Right");
  strcpy((char *)&g_15414F760, "Up");
  strcpy((char *)&g_15414F750, "Down");
  strcpy((char *)&g_15414F500, "Space");
  strcpy((char *)&g_15414F4C0, "Enter");
  strcpy((char *)&g_154150290, "Center");
  strcpy((char *)&g_154150040, "Ctrl");
  strcpy((char *)&g_154150050, "Shift");
  strcpy((char *)&g_15414F5A0, "Comma");
  strcpy((char *)&g_15414F5B0, "Period");
  strcpy((char *)&g_15414F830, "Home");
  strcpy((char *)&g_1541502D0, "PgUp");
  strcpy((char *)&g_154150270, "PgDn");
  strcpy((char *)&g_154150320, "Plus");
  strcpy((char *)&g_154150310, "Minus");
  strcpy((char *)&g_15414F240, "None");
  g_154150250 = 6581829;
  g_154150240 = 7564873;
  g_1541502E0 = 7103812;
  return;
}
#undef unused_frame_slot_0
#undef destination_buffer
#undef scratch_buffer
#undef scratch_buffer_2
#undef unused_frame_slot_368

//----- (000000014013DCD0) ----------------------------------------------------
__int64 sub_14013DCD0()
{
  __int64 allocation_size;
  __int64 result;
  int iteration_count;
  unsigned int *saved_allocated_buffer;
  __int64 allocated_buffer;
       char *literal_text;
  unsigned int *buffer_cursor;
  unsigned int integer_sum;
  unsigned int *buffer_cursor_2;
  unsigned int *record_byte_offset;
  unsigned int *buffer_cursor_3;
  unsigned int *buffer_cursor_4;
  unsigned int *buffer_cursor_5;
  unsigned int *buffer_cursor_6;
  unsigned int *buffer_cursor_7;
  unsigned int *buffer_cursor_8;
  unsigned int *buffer_cursor_9;
  unsigned int *buffer_cursor_10;
  unsigned int integer_sum_2;
  unsigned int *buffer_cursor_11;
  unsigned int integer_sum_3;
  unsigned int *record_byte_offset_2;
  unsigned int integer_sum_4;
  unsigned int *buffer_cursor_12;
  unsigned int integer_sum_5;
  unsigned int *buffer_cursor_13;
  unsigned int integer_sum_6;
  unsigned int *buffer_cursor_14;
  unsigned int *buffer_cursor_15;
  unsigned int integer_sum_7;
  unsigned int *buffer_cursor_16;
  unsigned int integer_sum_8;
  unsigned int *buffer_cursor_17;
  unsigned int integer_sum_9;
  unsigned int *state_address;
  int iteration_count_2;
  unsigned int *saved_iteration_count;
  float product_difference;
  unsigned int *state_address_2;
  int iteration_count_3;
  _DWORD *saved_iteration_count_2;

  allocation_size = 138412032;
  if ( g_183F7CBF0 )
    allocation_size = 553648128;
  g_1A4CF0928 = sr_path_malloc(allocation_size);
  if ( !g_1A4CF0928 )
  {
    result = sub_140198F95(16, (__int64)"Error", (__int64)"Colgrid malloc failed");
    g_160FC47C0 = 1;
    return result;
  }
  iteration_count = 0;
  saved_allocated_buffer = &g_1811BF858;
  do
  {
    allocated_buffer = sr_path_malloc(16793604);
    *(_QWORD *)saved_allocated_buffer = allocated_buffer;
    if ( !allocated_buffer )
    {
      literal_text = "Land malloc failed";
      goto LABEL_56;
    }
    ++iteration_count;
    saved_allocated_buffer += 3336;
  }
  while ( iteration_count < 64 );
  g_181290050 = sr_path_malloc(0x200000);
  if ( !g_181290050 )
  {
    literal_text = "Landmask malloc failed";
LABEL_56:
    result = sub_140198F95(16, (__int64)"Error", (__int64)literal_text);
    g_160FC47C0 = 1;
    return result;
  }
  physics_points_no_gravity = 1;
  g_16B27ECC4 = 1;
  g_144CBFAA0 = 0x400000;
  g_144CBFAB8 = sr_path_malloc(0x400000);
  if ( !g_144CBFAB8 )
  {
    literal_text = "Replay malloc failed";
    goto LABEL_56;
  }
  buffer_cursor = &g_183EBB0C4;
  strcpy((char *)(unsigned int *)&g_183EBFAB0, "test2");
  integer_sum = 0;
  g_183EBB0C0 = 0;
  do
  {
    *buffer_cursor++ = integer_sum;
    integer_sum = ++g_183EBB0C0;
  }
  while ( (__int64)buffer_cursor < (__int64)&g_183EBB144 );
  buffer_cursor_2 = &g_183EBB1C4;
  do
  {
    *buffer_cursor_2++ = integer_sum;
    integer_sum = ++g_183EBB0C0;
  }
  while ( (__int64)buffer_cursor_2 < (__int64)&g_183EBB244 );
  record_byte_offset = &g_183EBB2C8;
  do
  {
    *(record_byte_offset - 1) = integer_sum;
    *record_byte_offset = ++g_183EBB0C0;
    record_byte_offset[1] = ++g_183EBB0C0;
    record_byte_offset[2] = ++g_183EBB0C0;
    record_byte_offset += 4;
    integer_sum = ++g_183EBB0C0;
  }
  while ( (__int64)record_byte_offset < (__int64)&g_183EBB4C8 );
  buffer_cursor_3 = &g_183EBB6C4;
  buffer_cursor_4 = &g_183EBBAC4;
  do
  {
    *buffer_cursor_3++ = integer_sum;
    integer_sum = ++g_183EBB0C0;
  }
  while ( (__int64)buffer_cursor_3 < (__int64)&g_183EBBAC4 );
  do
  {
    *buffer_cursor_4++ = integer_sum;
    integer_sum = ++g_183EBB0C0;
  }
  while ( (__int64)buffer_cursor_4 < (__int64)&g_183EBBB44 );
  buffer_cursor_5 = &g_183EBBBC4;
  do
  {
    *buffer_cursor_5++ = integer_sum;
    integer_sum = ++g_183EBB0C0;
  }
  while ( (__int64)buffer_cursor_5 < (__int64)&g_183EBBFC4 );
  buffer_cursor_6 = &g_183EBC144;
  buffer_cursor_7 = &g_183EBC244;
  do
  {
    *buffer_cursor_6++ = integer_sum;
    integer_sum = ++g_183EBB0C0;
  }
  while ( (__int64)buffer_cursor_6 < (__int64)&g_183EBC244 );
  buffer_cursor_8 = &world_particle_mesh_0;
  buffer_cursor_9 = &g_183EBC0C4;
  do
  {
    *(buffer_cursor_8 - 32) = integer_sum;
    *buffer_cursor_8++ = ++g_183EBB0C0;
    integer_sum = ++g_183EBB0C0;
  }
  while ( (__int64)buffer_cursor_8 < (__int64)&g_183EBC0C4 );
  do
  {
    *buffer_cursor_9++ = integer_sum;
    integer_sum = ++g_183EBB0C0;
  }
  while ( (__int64)buffer_cursor_9 < (__int64)&g_183EBC144 );
  g_183EBC3CC = integer_sum;
  buffer_cursor_10 = &g_183EBC2C4;
  integer_sum_2 = integer_sum + 1;
  g_183EBB0C0 = integer_sum_2;
  do
  {
    *buffer_cursor_7++ = integer_sum_2;
    integer_sum_2 = ++g_183EBB0C0;
  }
  while ( (__int64)buffer_cursor_7 < (__int64)&g_183EBC2C4 );
  do
  {
    *buffer_cursor_10++ = integer_sum_2;
    integer_sum_2 = ++g_183EBB0C0;
  }
  while ( (__int64)buffer_cursor_10 < (__int64)&g_183EBC344 );
  g_183EBC344 = integer_sum_2;
  buffer_cursor_11 = &g_183EBC34C;
  g_183EBC348 = integer_sum_2 + 1;
  integer_sum_3 = integer_sum_2 + 2;
  g_183EBB0C0 = integer_sum_3;
  do
  {
    *buffer_cursor_11++ = integer_sum_3;
    integer_sum_3 = ++g_183EBB0C0;
  }
  while ( (__int64)buffer_cursor_11 < (__int64)&g_183EBC3CC );
  g_183EBC3DC = integer_sum_3;
  record_byte_offset_2 = &g_183EBC408;
  g_183EBC3E0 = integer_sum_3 + 1;
  g_183EBC3E4 = integer_sum_3 + 2;
  g_183EBB0C0 = integer_sum_3 + 3;
  integer_sum_4 = 0;
  g_183EBC400 = 0;
  do
  {
    *(record_byte_offset_2 - 1) = integer_sum_4;
    *record_byte_offset_2 = ++g_183EBC400;
    record_byte_offset_2[1] = ++g_183EBC400;
    record_byte_offset_2[2] = ++g_183EBC400;
    record_byte_offset_2 += 4;
    integer_sum_4 = ++g_183EBC400;
  }
  while ( (__int64)record_byte_offset_2 < (__int64)&g_183EBD408 );
  g_183EBE404 = integer_sum_4;
  buffer_cursor_12 = &g_183EBE850;
  shading_texture = integer_sum_4 + 1;
  g_183EBE40C = integer_sum_4 + 2;
  g_183EBE410 = integer_sum_4 + 3;
  g_183EBE414 = integer_sum_4 + 4;
  g_183EBE418 = integer_sum_4 + 5;
  g_183EBE41C = integer_sum_4 + 6;
  g_183EBE420 = integer_sum_4 + 7;
  g_183EBE424 = integer_sum_4 + 8;
  g_183EBE428 = integer_sum_4 + 9;
  shading_cube_map = integer_sum_4 + 10;
  g_183EBE430 = integer_sum_4 + 11;
  g_183EBE438 = integer_sum_4 + 12;
  effect_texture = integer_sum_4 + 13;
  g_183EBE434 = integer_sum_4 + 14;
  g_183EBF050 = integer_sum_4 + 15;
  g_183EBF054 = integer_sum_4 + 16;
  g_183EBF058 = integer_sum_4 + 17;
  g_183EBF05C = integer_sum_4 + 18;
  g_183EBF060 = integer_sum_4 + 19;
  g_183EBF064 = integer_sum_4 + 20;
  g_183EBF068 = integer_sum_4 + 21;
  g_183EBF06C = integer_sum_4 + 22;
  integer_sum_5 = integer_sum_4 + 23;
  g_183EBC400 = integer_sum_5;
  do
  {
    *buffer_cursor_12++ = integer_sum_5;
    integer_sum_5 = ++g_183EBC400;
  }
  while ( (__int64)buffer_cursor_12 < (__int64)&g_183EBEC50 );
  g_183EBF0F0 = integer_sum_5;
  buffer_cursor_13 = &g_183EBF070;
  g_183EBF134 = integer_sum_5 + 1;
  g_183EBF138 = integer_sum_5 + 2;
  g_183EBF13C = integer_sum_5 + 3;
  g_183EBF140 = integer_sum_5 + 4;
  g_183EBF144 = integer_sum_5 + 5;
  g_183EBF148 = integer_sum_5 + 6;
  g_183EBF14C = integer_sum_5 + 7;
  g_183EBF150 = integer_sum_5 + 8;
  integer_sum_6 = integer_sum_5 + 9;
  g_183EBC400 = integer_sum_6;
  do
  {
    *buffer_cursor_13++ = integer_sum_6;
    integer_sum_6 = ++g_183EBC400;
  }
  while ( (__int64)buffer_cursor_13 < (__int64)&g_183EBF0F0 );
  g_183EBF0F4 = integer_sum_6;
  buffer_cursor_14 = &g_183EBF180;
  buffer_cursor_15 = &g_183EBF580;
  g_183EBF0F8 = integer_sum_6 + 1;
  g_183EBF0FC = integer_sum_6 + 2;
  g_183EBF100 = integer_sum_6 + 3;
  g_183EBF104 = integer_sum_6 + 4;
  g_183EBF108 = integer_sum_6 + 5;
  g_183EBF10C = integer_sum_6 + 6;
  g_183EBF110 = integer_sum_6 + 7;
  g_183EBF114 = integer_sum_6 + 8;
  resting_texture_0 = integer_sum_6 + 9;
  g_183EBF11C = integer_sum_6 + 10;
  g_183EBF120 = integer_sum_6 + 11;
  g_183EBF124 = integer_sum_6 + 12;
  g_183EBF128 = integer_sum_6 + 13;
  g_183EBF12C = integer_sum_6 + 14;
  g_183EBF130 = integer_sum_6 + 15;
  g_183EBF154 = integer_sum_6 + 16;
  g_183EBF158 = integer_sum_6 + 17;
  g_183EBF15C = integer_sum_6 + 18;
  g_183EBF160 = integer_sum_6 + 19;
  g_183EBF164 = integer_sum_6 + 20;
  g_183EBF168 = integer_sum_6 + 21;
  g_183EBF16C = integer_sum_6 + 22;
  g_183EBF170 = integer_sum_6 + 23;
  g_183EBF174 = integer_sum_6 + 24;
  g_183EBF178 = integer_sum_6 + 25;
  g_183EBF17C = integer_sum_6 + 26;
  integer_sum_7 = integer_sum_6 + 27;
  g_183EBC400 = integer_sum_7;
  do
  {
    *buffer_cursor_14++ = integer_sum_7;
    integer_sum_7 = ++g_183EBC400;
  }
  while ( (__int64)buffer_cursor_14 < (__int64)&g_183EBF580 );
  do
  {
    *buffer_cursor_15++ = integer_sum_7;
    integer_sum_7 = ++g_183EBC400;
  }
  while ( (__int64)buffer_cursor_15 < (__int64)&g_183EBF780 );
  g_183EBF980 = integer_sum_7;
  buffer_cursor_16 = &g_183EBF988;
  g_183EBF984 = integer_sum_7 + 1;
  integer_sum_8 = integer_sum_7 + 2;
  g_183EBC400 = integer_sum_8;
  do
  {
    *buffer_cursor_16++ = integer_sum_8;
    integer_sum_8 = ++g_183EBC400;
  }
  while ( (__int64)buffer_cursor_16 < (__int64)&g_183EBFA88 );
  g_183EBFA88 = integer_sum_8;
  g_183EBC400 = integer_sum_8 + 1;
  strcpy((char *)&g_1A4CFFCF8, "concrete");
  g_1A4CFF7E4 = 3;
  g_1A4CFF560 = 4;
  g_1A4CFF8D0 = 4;
  sub_140138770();
  g_1A8A873C0 = 1008981770;
  g_1A8A873C4 = 999649058;
  g_1A8A873E0 = 1001795753;
  __builtin_memcpy((void *)&g_1A8A873E4, (const void *)&xmmword_140279270, 16);
  g_1A8A87418 = 0;
  g_1A8A873F8 = 1007908028;
  g_1A8A873C8 = 1006219569;
  __builtin_memcpy((void *)&g_1A8A873FC, (const void *)&xmmword_140279280, 16);
  __builtin_memcpy((void *)&g_1A8A873CC, (const void *)&xmmword_140279260, 16);
  g_1A8A87410 = 1009948138;
  g_1A8A873DC = 998265388;
  g_1A8A87414 = 1023611503;
  g_1A8A873F4 = 1006782914;
  g_1A8A8741C = 1069547520;
  g_1A8A8740C = 1002380023;
  sr_SetupItemTypes();
  buffer_cursor_17 = &g_183E936F8;
  _mm_storeu_si128((__m128i *)(void *)&g_183E935A4, _mm_load_si128((     __m128i *)&xmmword_140278F50));
  integer_sum_9 = 55;
  g_183E935C4 = 8;
  _mm_storeu_si128((__m128i *)(void *)&g_183E935D4, _mm_load_si128((     __m128i *)&xmmword_140279030));
  g_183E935C8 = 9;
  _mm_storeu_si128((__m128i *)(void *)&item_event_ring_back, _mm_load_si128((     __m128i *)&xmmword_1402790A0));
  g_183E935F4 = 18;
  _mm_storeu_si128((__m128i *)(void *)&g_183E935B4, _mm_load_si128((     __m128i *)&xmmword_140278FB0));
  g_183E93618 = 19;
  _mm_storeu_si128((__m128i *)(void *)&g_183E93688, _mm_load_si128((     __m128i *)&xmmword_1402790C0));
  g_183E9361C = 20;
  _mm_storeu_si128((__m128i *)(void *)&g_183E935E4, _mm_load_si128((     __m128i *)&xmmword_140279050));
  g_183E93628 = 21;
  _mm_storeu_si128((__m128i *)(void *)&g_183E936DC, _mm_load_si128((     __m128i *)&xmmword_1402790E0));
  game_unknown_183e9362c = 22;
  _mm_storeu_si128((__m128i *)(void *)&g_183E93678, _mm_load_si128((     __m128i *)&xmmword_1402790B0));
  g_183E93638 = 23;
  _mm_storeu_si128((__m128i *)(void *)&g_183E93648, _mm_load_si128((     __m128i *)&xmmword_140279100));
  g_183E9363C = 24;
  g_183E93658 = 25;
  g_183E9365C = 26;
  g_183E936AC = 39;
  _mm_storeu_si128((__m128i *)(void *)&particle_landing_sound, _mm_load_si128((     __m128i *)&xmmword_1402790D0));
  g_183E936EC = 48;
  g_183E936F0 = 49;
  g_183E936F4 = 50;
  g_183E935A0 = 55;
  do
  {
    *buffer_cursor_17++ = integer_sum_9;
    integer_sum_9 = ++g_183E935A0;
  }
  while ( (__int64)buffer_cursor_17 < (__int64)&g_183E93738 );
  g_183E93778 = integer_sum_9;
  g_183E9377C = integer_sum_9 + 1;
  g_183E93780 = integer_sum_9 + 2;
  g_183E93784 = integer_sum_9 + 3;
  g_183E93788 = integer_sum_9 + 4;
  g_183E9378C = integer_sum_9 + 5;
  g_183E937F8 = integer_sum_9 + 6;
  g_183E937FC = integer_sum_9 + 7;
  g_183E93800 = integer_sum_9 + 8;
  g_183E93804 = integer_sum_9 + 9;
  g_183E93808 = integer_sum_9 + 10;
  g_183E9380C = integer_sum_9 + 11;
  g_183E938F8 = integer_sum_9 + 12;
  g_183E938FC = integer_sum_9 + 13;
  g_183E93900 = integer_sum_9 + 14;
  g_183E93904 = integer_sum_9 + 15;
  g_183E93908 = integer_sum_9 + 16;
  g_183E9390C = integer_sum_9 + 17;
  g_183E93978 = integer_sum_9 + 18;
  g_183E9397C = integer_sum_9 + 19;
  g_183E93980 = integer_sum_9 + 20;
  g_183E93984 = integer_sum_9 + 21;
  g_183E93988 = integer_sum_9 + 22;
  g_183E9398C = integer_sum_9 + 23;
  g_183E939F8 = integer_sum_9 + 24;
  g_183E939FC = integer_sum_9 + 25;
  g_183E93A00 = integer_sum_9 + 26;
  g_183E93A04 = integer_sum_9 + 27;
  g_183E93A08 = integer_sum_9 + 28;
  g_183E93A0C = integer_sum_9 + 29;
  g_183E935A0 = integer_sum_9 + 30;
  sr_SetupVehicleTypes();
  sub_14003FB90(6, 0.0, 2.0, -1.625, 4.0, 4.0, 0.25);
  g_1A760C010 = 1080033280;
  sub_14003FB90(1, 0.0, 0.0, 0.0, 0.375, 6.0, 0.375);
  sub_14003FB90(1, 0.0, 3.0, -5.0, 0.25, 0.25, 10.0);
  sub_14003FB90(1, 0.0, 3.0, -6.0, 0.3125, 1.0, 0.5);
  sub_14003FB90(1, 0.0, 3.0, -10.0, 0.3125, 1.0, 0.5);
  g_1A7602FA8 = 1078984704;
  g_1A7602FAC = -1082130432;
  g_1A7602FA4 = 0;
  g_1A7600B98 = 1077936128;
  sub_14003FB90(4, 0.0, 2.625, -8.0, 0.0625, 0.5, 2.0);
  asset_scan_itemsets_sis_candidate();
  state_address = &g_1A4CFFCE4;
  do
  {
    *state_address = 1048576000;
    state_address[1] = 1048576000;
    state_address[2] = 1065353216;
    state_address[3] = 1067030938;
    state_address += 46;
  }
  while ( (__int64)state_address < (__int64)&g_1A4D0B4E4 );
  *(unsigned int *)&g_181290040 = -981467136;
  g_181290044 = 0;
  *(unsigned int *)&g_181290048 = -981467136;
  dword_140404A6C[46 * g_1A4CFF7E4 + 421784738] = 1;
  iteration_count_2 = 0;
  saved_iteration_count = &g_1811BF850;
  do
  {
    *saved_iteration_count = iteration_count_2;
    *(saved_iteration_count - 1) = 0;
    *(saved_iteration_count - 4) = -981467136;
    *(saved_iteration_count - 3) = 0;
    product_difference = (float)((float)iteration_count_2 * 2048.0) - 4096.0;
    *((float *)saved_iteration_count - 2) = product_difference;
    saved_iteration_count[3336] = iteration_count_2;
    saved_iteration_count[3335] = 1;
    *((float *)saved_iteration_count + 3334) = product_difference;
    saved_iteration_count[3332] = -989855744;
    saved_iteration_count[3333] = 0;
    saved_iteration_count[6672] = iteration_count_2;
    saved_iteration_count[6671] = 2;
    *((float *)saved_iteration_count + 6670) = product_difference;
    *((_QWORD *)saved_iteration_count + 3334) = 0;
    saved_iteration_count[10008] = iteration_count_2;
    saved_iteration_count[10007] = 3;
    *((float *)saved_iteration_count + 10006) = product_difference;
    *((_QWORD *)saved_iteration_count + 5002) = 1157627904;
    saved_iteration_count[13344] = iteration_count_2;
    saved_iteration_count[13343] = 4;
    *((float *)saved_iteration_count + 13342) = product_difference;
    *((_QWORD *)saved_iteration_count + 6670) = 1166016512;
    saved_iteration_count[16680] = iteration_count_2;
    saved_iteration_count[16679] = 5;
    *((float *)saved_iteration_count + 16678) = product_difference;
    *((_QWORD *)saved_iteration_count + 8338) = 1170210816;
    saved_iteration_count[20016] = iteration_count_2;
    saved_iteration_count[20015] = 6;
    *((float *)saved_iteration_count + 20014) = product_difference;
    *((_QWORD *)saved_iteration_count + 10006) = 1174405120;
    saved_iteration_count[23352] = iteration_count_2++;
    saved_iteration_count[23351] = 7;
    *((float *)saved_iteration_count + 23350) = product_difference;
    *((_QWORD *)saved_iteration_count + 11674) = 1176502272;
    saved_iteration_count += 26688;
  }
  while ( iteration_count_2 < 8 );
  state_address_2 = &g_1811BF870;
  do
  {
    iteration_count_3 = 0;
    saved_iteration_count_2 = state_address_2;
    do
    {
      *saved_iteration_count_2 = iteration_count_3;
      saved_iteration_count_2[13] = iteration_count_3;
      saved_iteration_count_2[26] = iteration_count_3;
      saved_iteration_count_2[39] = iteration_count_3;
      saved_iteration_count_2[52] = iteration_count_3;
      saved_iteration_count_2[65] = iteration_count_3;
      saved_iteration_count_2[78] = iteration_count_3;
      saved_iteration_count_2[91] = iteration_count_3;
      saved_iteration_count_2[104] = iteration_count_3;
      saved_iteration_count_2[117] = iteration_count_3;
      saved_iteration_count_2[130] = iteration_count_3;
      saved_iteration_count_2[143] = iteration_count_3;
      saved_iteration_count_2[156] = iteration_count_3;
      saved_iteration_count_2[169] = iteration_count_3;
      saved_iteration_count_2[182] = iteration_count_3;
      saved_iteration_count_2[195] = iteration_count_3++;
      *(saved_iteration_count_2 - 1) = 0;
      saved_iteration_count_2[12] = 1;
      saved_iteration_count_2[25] = 2;
      saved_iteration_count_2[38] = 3;
      saved_iteration_count_2[51] = 4;
      saved_iteration_count_2[64] = 5;
      saved_iteration_count_2[77] = 6;
      saved_iteration_count_2[90] = 7;
      saved_iteration_count_2[103] = 8;
      saved_iteration_count_2[116] = 9;
      saved_iteration_count_2[129] = 10;
      saved_iteration_count_2[142] = 11;
      saved_iteration_count_2[155] = 12;
      saved_iteration_count_2[168] = 13;
      saved_iteration_count_2[181] = 14;
      saved_iteration_count_2[194] = 15;
      saved_iteration_count_2 += 208;
    }
    while ( iteration_count_3 < 16 );
    state_address_2 += 3336;
  }
  while ( (__int64)state_address_2 < (__int64)&g_181290070 );
  return sub_1400D3190();
}
