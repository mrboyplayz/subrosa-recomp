#include "shared_client.h"

//----- (0000000140026830) ----------------------------------------------------
// Candidate .sbb loader: formats building/%s.sbb, accepts versions 12-14, reads dimensions/header and block/material/name tables.
void               asset_load_building_sbb_candidate(char *Buffer,      char *a2, int a3)
{
  char *byte_cursor;
  __int64 file_handle;
  __int64 file_handle_2;
  int i;
  int j;
  int k;
  int m;
  int element_index;
  char *n;
  int element_index_2;
  int element_index_3;
  char *state_address;
  int iteration_count;
  char *running_total;
  __int64 scaled_index;
  int ii;
  __int64 scaled_index_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140026830[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140026830 + 0)) /* [rsp+0h] */
#define Buffera (*(int (*))(void *)(sr_frame_140026830 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(int (*)[3])(void *)(sr_frame_140026830 + 36)) /* [rsp+24h] */
#define FileName (*(char (*)[512])(void *)(sr_frame_140026830 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_140026830 + 560)) /* [rsp+230h] */

  byte_cursor = Buffer + 68;
  *((_DWORD *)Buffer + 16) = 24;
  *((_DWORD *)Buffer + 18) = 4;
  *(_QWORD *)(Buffer + 76) = 4;
  *((_DWORD *)Buffer + 21) = 4;
  *((_DWORD *)Buffer + 17) = 24;
  crt_sprintf(FileName, "building/%s.sbb", a2);
  file_handle = crt_fopen(FileName, "rb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    fread_sr((void *)(uintptr_t)(&Buffera), 4, 1, (FILE *)(uintptr_t)(file_handle));
    if ( (unsigned int)(Buffera - 12) > 2 )
      goto LABEL_32;
    fread_sr((void *)(uintptr_t)(Buffer), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
    fread_sr((void *)(uintptr_t)(Buffer + 64), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    fread_sr((void *)(uintptr_t)(byte_cursor), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    fread_sr((void *)(uintptr_t)(Buffer + 72), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    if ( Buffera >= 13 )
    {
      fread_sr((void *)(uintptr_t)(Buffer + 76), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(Buffer + 80), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(Buffer + 84), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    }
    if ( a3 )
    {
LABEL_32:
      crt_fclose(file_handle_2);
      return; /* native compiler cookie is not a recovered result */
    }
    fread_sr((void *)(uintptr_t)(Buffer + 47187628), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    for ( i = 0; i < *((_DWORD *)Buffer + 11796907); ++i )
      fread_sr((void *)(uintptr_t)(&Buffer[64 * (__int64)i + 47187632]), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
    fread_sr((void *)(uintptr_t)(Buffer + 47208112), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    for ( j = 0; j < *((_DWORD *)Buffer + 11802028); ++j )
      fread_sr((void *)(uintptr_t)(&Buffer[64 * (__int64)j + 47208116]), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
    fread_sr((void *)(uintptr_t)(Buffer + 47277748), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    for ( k = 0; k < *((_DWORD *)Buffer + 11819437); ++k )
      fread_sr((void *)(uintptr_t)(&Buffer[64 * (__int64)k + 47277752]), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
    fread_sr((void *)(uintptr_t)(Buffer + 47282872), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    for ( m = 0; m < *((_DWORD *)Buffer + 11820718); ++m )
      fread_sr((void *)(uintptr_t)(&Buffer[64 * (__int64)m + 47282876]), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
    element_index = 0;
    for ( n = Buffer + 72; element_index < *(_DWORD *)n; ++element_index )
    {
      element_index_2 = 0;
      if ( *(int *)byte_cursor >= 0 )
      {
        do
        {
          element_index_3 = 0;
          if ( *((int *)Buffer + 16) >= 0 )
          {
            do
            {
              state_address = &Buffer[3840 * (element_index_2 + ((__int64)element_index << 6)) + 60 * element_index_3];
              fread_sr((void *)(uintptr_t)(state_address + 92), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 96), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 88), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 100), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 104), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 108), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 112), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 114), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 116), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 118), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 120), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 122), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 124), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 126), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 128), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 130), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 132), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 134), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 136), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 138), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 140), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 142), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(state_address + 144), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              ++element_index_3;
            }
            while ( element_index_3 <= *((_DWORD *)Buffer + 16) );
            byte_cursor = Buffer + 68;
          }
          ++element_index_2;
        }
        while ( element_index_2 <= *(_DWORD *)byte_cursor );
        n = Buffer + 72;
      }
    }
    if ( Buffera >= 14 )
    {
      scratch_buffer[0] = 1;
      fread_sr((void *)(uintptr_t)(scratch_buffer), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      if ( scratch_buffer[0] == 1 )
      {
        fread_sr((void *)(uintptr_t)(Buffer + 47352508), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        iteration_count = 0;
        if ( *((int *)Buffer + 11838127) > 0 )
        {
          running_total = Buffer + 47352512;
          do
          {
            scaled_index = 1028LL * iteration_count;
            fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 47352512]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
            for ( ii = 0; ii < *(_DWORD *)running_total; ++ii )
            {
              scaled_index_2 = scaled_index + 16LL * ii;
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index_2 + 47352516]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index_2 + 47352528]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
            }
            ++iteration_count;
            running_total += 1028;
          }
          while ( iteration_count < *((_DWORD *)Buffer + 11838127) );
        }
      }
    }
    crt_fclose(file_handle_2);
  }
  sub_140027690();
  return; /* native compiler cookie is not a recovered result */
}
#undef unused_frame_slot_0
#undef Buffera
#undef scratch_buffer
#undef FileName
#undef unused_frame_slot_560

//----- (00000001400D5A50) ----------------------------------------------------
// Candidate .sbc city loader: references city2.sbc; compare against save routine at asset_save_city_sbc_candidate.
__int64 asset_load_city_sbc_candidate()
{
  __int64 file_handle;
  int element_index;
  __int64 file_handle_2;
  int i;
  int j;
  __int64 scaled_index;
  int k;
  __int64 scaled_index_2;
  int m;
  __int64 scaled_index_3;
  int iteration_count;
  unsigned int *state_address;
  __int64 scaled_index_4;
  signed int element_index_2;
  __int64 remaining_count;
  unsigned int *record_byte_offset;
  int iteration_count_2;
  unsigned int *state_address_2;
  __int64 scaled_index_5;
  unsigned int *record_byte_offset_2;
  __int64 remaining_count_2;
  int element_index_3;
  unsigned int *state_address_3;
  __int64 scaled_index_6;
  __int64 remaining_count_3;
  unsigned int *buffer_cursor;
  __int64 element_index_4;
  __int64 remaining_count_4;
  __int64 iteration_count_3;
  __int64 remaining_count_5;
  __int64 element_index_5;
  __int64 remaining_count_6;
  int n;
  unsigned int *record_byte_offset_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D5A50[320];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400D5A50 + 0)) /* [rsp+0h] */
#define Buffer (*(int (*)[4])(void *)(sr_frame_1400D5A50 + 32)) /* [rsp+20h] */
#define FileName (*(char (*)[256])(void *)(sr_frame_1400D5A50 + 48)) /* [rsp+30h] */
#define unused_frame_slot_304 (*(__int64 (*))(void *)(sr_frame_1400D5A50 + 304)) /* [rsp+130h] */

  crt_sprintf(FileName, "city2.sbc");
  file_handle = crt_fopen(FileName, "rb");
  element_index = 0;
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    fread_sr((void *)(uintptr_t)(Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle));
    if ( (unsigned int)(Buffer[0] - 7) > 5 )
    {
      crt_fclose(file_handle_2);
      return 0; /* legacy result ignored; native returns void */
    }
    if ( Buffer[0] >= 10 )
    {
      fread_sr((void *)(uintptr_t)(&g_175EEA08C), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      for ( i = 0; i < (int)g_175EEA08C; ++i )
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[16 * (__int64)i + 225154441]), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
    }
    fread_sr((void *)(uintptr_t)(&g_16E486878), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    for ( j = 0; j < (int)g_16E486878; ++j )
    {
      scaled_index = 3LL * j;
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 193070980]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 193070981]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 193070982]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    }
    fread_sr((void *)(uintptr_t)(&g_16E48987C), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    for ( k = 0; k < (int)g_16E48987C; ++k )
    {
      scaled_index_2 = 13LL * k;
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_2 + 193074053]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_2 + 193074054]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_2 + 193074055]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_2 + 193074056]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_2 + 193074057]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_2 + 193074058]), 1, 32, (FILE *)(uintptr_t)(file_handle_2));
    }
    fread_sr((void *)(uintptr_t)(&g_175EFB090), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    for ( m = 0; m < (int)g_175EFB090; ++m )
    {
      scaled_index_3 = 24LL * m;
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_3 + 225171851]), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_3 + 225171867]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_3 + 225171868]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_3 + 225171869]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_3 + 225171870]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    }
    if ( Buffer[0] < 12 )
    {
      if ( Buffer[0] == 11 )
      {
        fread_sr((void *)(uintptr_t)(&g_16E492084), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        iteration_count_2 = 0;
        if ( (int)g_16E492084 > 0 )
        {
          state_address_2 = &g_16E4920CC;
          do
          {
            scaled_index_5 = 4242LL * iteration_count_2;
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_5 + 193082759]), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
            *state_address_2 = 1;
            record_byte_offset_2 = &dword_140404A6C[scaled_index_5 + 193082777];
            remaining_count_2 = 8;
            do
            {
              fread_sr((void *)(uintptr_t)(record_byte_offset_2), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
              record_byte_offset_2 += 16;
              --remaining_count_2;
            }
            while ( remaining_count_2 );
            ++iteration_count_2;
            state_address_2 += 4242;
          }
          while ( iteration_count_2 < (int)g_16E492084 );
        }
      }
      else
      {
        g_16E492084 = 0;
      }
    }
    else
    {
      fread_sr((void *)(uintptr_t)(&g_16E492084), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      iteration_count = 0;
      if ( (int)g_16E492084 > 0 )
      {
        state_address = &g_16E4920CC;
        do
        {
          scaled_index_4 = 4242LL * iteration_count;
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_4 + 193082759]), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_4 + 193082776]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          element_index_2 = 0;
          if ( (int)*state_address > 0 )
          {
            do
            {
              remaining_count = 8;
              record_byte_offset = &dword_140404A6C[132 * element_index_2 + 193082777 + scaled_index_4];
              do
              {
                fread_sr((void *)(uintptr_t)(record_byte_offset), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
                record_byte_offset += 16;
                --remaining_count;
              }
              while ( remaining_count );
              ++element_index_2;
            }
            while ( element_index_2 < (int)*state_address );
            element_index = 0;
          }
          ++iteration_count;
          state_address += 4242;
        }
        while ( iteration_count < (int)g_16E492084 );
      }
    }
    if ( Buffer[0] >= 8 )
    {
      fread_sr((void *)(uintptr_t)(&g_1726DA088), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      element_index_3 = 0;
      if ( (int)g_1726DA088 > 0 )
      {
        state_address_3 = &g_1726DC89C;
        do
        {
          scaled_index_6 = 3588LL * element_index_3;
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_6 + 210457992]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_6 + 210457993]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_6 + 210457994]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_6 + 210457995]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          if ( Buffer[0] < 11 )
            goto LABEL_37;
          remaining_count_3 = 512;
          buffer_cursor = &dword_140404A6C[scaled_index_6 + 210460556];
          do
          {
            fread_sr((void *)(uintptr_t)(buffer_cursor++), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
            --remaining_count_3;
          }
          while ( remaining_count_3 );
          crt_memset((void *)(uintptr_t)((_WORD *)state_address_3 - 5120), 0, 0x800u);
          if ( Buffer[0] < 11 )
          {
LABEL_37:
            element_index_4 = 0;
            remaining_count_4 = 512;
            do
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[3588 * element_index_3 + 210457996 + element_index_4++]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              --remaining_count_4;
            }
            while ( remaining_count_4 );
            iteration_count_3 = 0;
            remaining_count_5 = 4096;
            do
            {
              fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[3588 * element_index_3 + 210458508] + 2 * iteration_count_3++), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
              --remaining_count_5;
            }
            while ( remaining_count_5 );
            crt_memset((void *)(uintptr_t)(state_address_3), 0, 0x800u);
          }
          if ( Buffer[0] >= 10 )
          {
            element_index_5 = 0;
            remaining_count_6 = 512;
            do
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[3588 * element_index_3 + 210461068 + element_index_5++]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              --remaining_count_6;
            }
            while ( remaining_count_6 );
          }
          ++element_index_3;
          state_address_3 += 3588;
        }
        while ( element_index_3 < (int)g_1726DA088 );
      }
    }
    if ( Buffer[0] >= 9 )
    {
      fread_sr((void *)(uintptr_t)(&g_175FBB094), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      for ( n = 0; n < (int)g_175FBB094; ++n )
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * n + 225368459 + n]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
    }
    crt_fclose(file_handle_2);
  }
  if ( (int)g_175EFB090 > 0 )
  {
    record_byte_offset_3 = &g_175EFB0F0;
    do
    {
      asset_load_building_sbb_candidate(
        (char *)&g_1AD2C94A0,
        (     char *)&dword_140404A6C[24 * element_index + 225171851],
        1);
      record_byte_offset_3 += 24;
      ++element_index;
      *(record_byte_offset_3 - 26) = g_1AD2C94E0 - g_1AD2C94EC;
      *(record_byte_offset_3 - 24) = g_1AD2C94E8 - g_1AD2C94F0;
      *(record_byte_offset_3 - 25) = g_1AD2C94E4 - g_1AD2C94F4;
    }
    while ( element_index < (int)g_175EFB090 );
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef unused_frame_slot_0
#undef Buffer
#undef FileName
#undef unused_frame_slot_304

//----- (00000001400D62A0) ----------------------------------------------------
// Candidate .sbc city serializer: formats data/%s/city2.sbc and opens wb; likely editor/save path.
__int64 asset_save_city_sbc_candidate()
{
  __int64 file_handle;
  __int64 file_handle_2;
  int element_index;
  int i;
  int j;
  __int64 scaled_index;
  int k;
  __int64 scaled_index_2;
  int m;
  __int64 scaled_index_3;
  int iteration_count;
  unsigned int *state_address;
  __int64 scaled_index_4;
  signed int element_index_2;
  __int64 remaining_count;
  unsigned int *destination_buffer;
  int n;
  __int64 scaled_index_5;
  __int64 remaining_count_2;
  unsigned int *buffer_cursor;
  __int64 remaining_count_3;
  unsigned int *buffer_cursor_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D62A0[320];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400D62A0 + 0)) /* [rsp+0h] */
#define Buffer (*(int (*))(void *)(sr_frame_1400D62A0 + 32)) /* [rsp+20h] */
#define FileName (*(char (*)[256])(void *)(sr_frame_1400D62A0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_304 (*(__int64 (*))(void *)(sr_frame_1400D62A0 + 304)) /* [rsp+130h] */

  crt_sprintf(FileName, "data/%s/city2.sbc", (     char *)(unsigned int *)&g_183EBFAB0);
  file_handle = crt_fopen(FileName, "wb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    Buffer = 12;
    crt_fread((__int64)&Buffer, 4, 1, file_handle);
    crt_fread((__int64)&g_175EEA08C, 4, 1, file_handle_2);
    element_index = 0;
    for ( i = 0; i < (int)g_175EEA08C; ++i )
      crt_fread((__int64)&dword_140404A6C[16 * (__int64)i + 225154441], 1, 64, file_handle_2);
    crt_fread((__int64)&g_16E486878, 4, 1, file_handle_2);
    for ( j = 0; j < (int)g_16E486878; ++j )
    {
      scaled_index = 3LL * j;
      crt_fread((__int64)&dword_140404A6C[scaled_index + 193070980], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index + 193070981], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index + 193070982], 4, 1, file_handle_2);
    }
    crt_fread((__int64)&g_16E48987C, 4, 1, file_handle_2);
    for ( k = 0; k < (int)g_16E48987C; ++k )
    {
      scaled_index_2 = 13LL * k;
      crt_fread((__int64)&dword_140404A6C[scaled_index_2 + 193074053], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_2 + 193074054], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_2 + 193074055], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_2 + 193074056], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_2 + 193074057], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_2 + 193074058], 1, 32, file_handle_2);
    }
    crt_fread((__int64)&g_175EFB090, 4, 1, file_handle_2);
    for ( m = 0; m < (int)g_175EFB090; ++m )
    {
      scaled_index_3 = 24LL * m;
      crt_fread((__int64)&dword_140404A6C[scaled_index_3 + 225171851], 1, 64, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_3 + 225171867], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_3 + 225171868], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_3 + 225171869], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_3 + 225171870], 4, 1, file_handle_2);
    }
    crt_fread((__int64)&g_16E492084, 4, 1, file_handle_2);
    iteration_count = 0;
    if ( (int)g_16E492084 > 0 )
    {
      state_address = &g_16E4920CC;
      do
      {
        scaled_index_4 = 4242LL * iteration_count;
        crt_fread((__int64)&dword_140404A6C[scaled_index_4 + 193082759], 1, 64, file_handle_2);
        crt_fread((__int64)&dword_140404A6C[scaled_index_4 + 193082776], 4, 1, file_handle_2);
        element_index_2 = 0;
        if ( (int)*state_address > 0 )
        {
          do
          {
            remaining_count = 8;
            destination_buffer = &dword_140404A6C[132 * element_index_2 + 193082777 + scaled_index_4];
            do
            {
              crt_fread((__int64)destination_buffer, 1, 64, file_handle_2);
              destination_buffer += 16;
              --remaining_count;
            }
            while ( remaining_count );
            ++element_index_2;
          }
          while ( element_index_2 < (int)*state_address );
          element_index = 0;
        }
        ++iteration_count;
        state_address += 4242;
      }
      while ( iteration_count < (int)g_16E492084 );
    }
    crt_fread((__int64)&g_1726DA088, 4, 1, file_handle_2);
    for ( n = 0; n < (int)g_1726DA088; ++n )
    {
      scaled_index_5 = 3588LL * n;
      crt_fread((__int64)&dword_140404A6C[scaled_index_5 + 210457992], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_5 + 210457993], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_5 + 210457994], 4, 1, file_handle_2);
      crt_fread((__int64)&dword_140404A6C[scaled_index_5 + 210457995], 4, 1, file_handle_2);
      remaining_count_2 = 512;
      buffer_cursor = &dword_140404A6C[scaled_index_5 + 210460556];
      do
      {
        crt_fread((__int64)buffer_cursor++, 4, 1, file_handle_2);
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      remaining_count_3 = 512;
      buffer_cursor_2 = &dword_140404A6C[scaled_index_5 + 210461068];
      do
      {
        crt_fread((__int64)buffer_cursor_2++, 4, 1, file_handle_2);
        --remaining_count_3;
      }
      while ( remaining_count_3 );
    }
    crt_fread((__int64)&g_175FBB094, 4, 1, file_handle_2);
    if ( (int)g_175FBB094 > 0 )
    {
      do
      {
        crt_fread((__int64)&dword_140404A6C[2 * element_index + 225368459 + element_index], 4, 3, file_handle_2);
        ++element_index;
      }
      while ( element_index < (int)g_175FBB094 );
    }
    crt_fclose(file_handle_2);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef Buffer
#undef FileName
#undef unused_frame_slot_304

//----- (00000001400E6E50) ----------------------------------------------------
// Candidate .sbl loader: formats block/%s.sbl, opens rb, accepts versions 1-2, reads global block tables.
__int64            asset_load_block_sbl_candidate(     char *a1)
{
  __int64 file_handle;
  __int64 file_handle_2;
  int iteration_count;
  int i;
  __int64 scaled_index;
  __int64 remaining_count;
  unsigned int *state_address;
  unsigned int *state_address_2;
  __int64 remaining_count_2;
  __int64 scaled_index_2;
  __int64 remaining_count_3;
  unsigned int *state_address_3;
  __int64 remaining_count_4;
  unsigned int *buffer_cursor;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E6E50[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400E6E50 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(int (*)[4])(void *)(sr_frame_1400E6E50 + 32)) /* [rsp+20h] */
#define scratch_buffer_2 (*(char (*)[512])(void *)(sr_frame_1400E6E50 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_1400E6E50 + 560)) /* [rsp+230h] */

  crt_sprintf(scratch_buffer_2, "block/%s.sbl", a1);
  file_handle = crt_fopen(scratch_buffer_2, "rb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    (*(void (           **)(int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(scratch_buffer, 4, 1, file_handle);
    if ( (unsigned int)(scratch_buffer[0] - 1) <= 1 )
    {
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
        &g_144FBFBA0,
        4,
        1,
        file_handle_2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
        &g_144FBFBA4,
        4,
        1,
        file_handle_2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
        &g_144FBFBA8,
        4,
        1,
        file_handle_2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
        &g_144FBFBAC,
        4,
        1,
        file_handle_2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
        &g_144FBFBB0,
        4,
        1,
        file_handle_2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
        &g_144FBFBB4,
        4,
        1,
        file_handle_2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
        &g_144FBFBB8,
        4,
        1,
        file_handle_2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
        &g_144FBFBBC,
        4,
        1,
        file_handle_2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
        &g_144FBFBC0,
        4,
        1,
        file_handle_2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
        &g_144FBFBC4,
        4,
        1,
        file_handle_2);
      iteration_count = 0;
      for ( i = 0; i < (int)g_144FBFBC4; ++i )
      {
        scaled_index = 87LL * i;
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[scaled_index + 19852378],
          4,
          1,
          file_handle_2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[scaled_index + 19852376],
          4,
          1,
          file_handle_2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[scaled_index + 19852379],
          4,
          1,
          file_handle_2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[scaled_index + 19852377],
          4,
          1,
          file_handle_2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[scaled_index + 19852460],
          4,
          1,
          file_handle_2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[scaled_index + 19852461],
          4,
          1,
          file_handle_2);
        remaining_count = 4;
        state_address = &dword_140404A6C[scaled_index + 19852428];
        state_address_2 = &dword_140404A6C[scaled_index + 19852380];
        do
        {
          remaining_count_2 = 4;
          do
          {
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              state_address_2,
              4,
              3,
              file_handle_2);
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              state_address,
              4,
              2,
              file_handle_2);
            state_address_2 += 3;
            state_address += 2;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          --remaining_count;
        }
        while ( remaining_count );
      }
      g_144FEB3C8 = 0;
      if ( scratch_buffer[0] >= 2 )
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &g_144FEB3C8,
          4,
          1,
          file_handle_2);
        if ( (int)g_144FEB3C8 > 0 )
        {
          do
          {
            scaled_index_2 = 31LL * iteration_count;
            remaining_count_3 = 8;
            state_address_3 = &dword_140404A6C[scaled_index_2 + 19896920];
            do
            {
              (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
                state_address_3,
                4,
                3,
                file_handle_2);
              state_address_3 += 3;
              --remaining_count_3;
            }
            while ( remaining_count_3 );
            remaining_count_4 = 6;
            buffer_cursor = &dword_140404A6C[scaled_index_2 + 19896944];
            do
            {
              (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
                buffer_cursor++,
                4,
                1,
                file_handle_2);
              --remaining_count_4;
            }
            while ( remaining_count_4 );
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              &dword_140404A6C[scaled_index_2 + 19896950],
              4,
              1,
              file_handle_2);
            ++iteration_count;
          }
          while ( iteration_count < (int)g_144FEB3C8 );
        }
      }
    }
    crt_fclose(file_handle_2);
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef scratch_buffer_2
#undef unused_frame_slot_560
