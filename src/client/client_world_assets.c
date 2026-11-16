#include "shared_client.h"
#include "../engine/world_assets.h"

//----- (0000000140026830) ----------------------------------------------------
// Candidate .sbb loader: formats building/%s.sbb, accepts versions 12-14, reads dimensions/header and block/material/name tables.
void               asset_load_building_sbb_candidate(char *Buffer,      char *a2, int a3)
{
  sr_building_sbb_load((char *)Buffer, a2, a3);
}
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
  sr_city_sbc_save((char *)(unsigned int *)&g_183EBFAB0);
  return 0;
}
#undef unused_frame_slot_0
#undef Buffer
#undef FileName
#undef unused_frame_slot_304

//----- (00000001400E6E50) ----------------------------------------------------
__int64            asset_load_block_sbl_candidate(     char *a1)
{
  sr_block_sbl_load(a1);
  return 0;
}
