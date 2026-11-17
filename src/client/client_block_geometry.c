#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (00000001400689A0) ----------------------------------------------------
__int64            sub_1400689A0(int a1, int a2, int a3, int a4, int a5, signed int a6, unsigned int *a7, float *a8)
{
  __int64 record_word_offset;
  __int64 masked_bits;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  int cached_world_effect_count;
  char element_index;
  __int64 element_index_2;
  __int64 scaled_index;
  unsigned int masked_bits_2;
  unsigned int float_word;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float combined_products_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400689A0[112];
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1400689A0 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400689A0 + 4)) /* [rsp+4h] */
#define float_word_2 (*(_DWORD (*)[22])(void *)(sr_frame_1400689A0 + 8)) /* [rsp+8h] */
#define unused_frame_slot_96 (*(__int64 (*))(void *)(sr_frame_1400689A0 + 96)) /* [rsp+60h] */

  if ( (a5 & 0xE0000000) == 0x80000000 )
  {
    record_word_offset = 58LL * (unsigned __int16)a5;
    if ( a6 < (int)dword_140404A6C[record_word_offset + 20074651] )
    {
      masked_bits = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074653];
      weighted_sum = *(float *)&dword_140404A6C[263004 * a1 + 111579653];
      weighted_sum_2 = (float)((float)a4 + *(float *)(masked_bits + 48LL * a6 + 44)) * weighted_sum;
      weighted_sum_3 = (float)((float)a2 + *(float *)(masked_bits + 48LL * a6 + 36)) * weighted_sum;
      weighted_sum_4 = (float)((float)a4 + *(float *)(masked_bits + 48LL * a6 + 32)) * weighted_sum;
      weighted_sum_5 = (float)((float)a2 + *(float *)(masked_bits + 48LL * a6 + 24)) * weighted_sum;
      weighted_sum_6 = (float)((float)a2 + *(float *)(masked_bits + 48LL * a6 + 12)) * weighted_sum;
      weighted_sum_7 = (float)((float)a3 + *(float *)(masked_bits + 48LL * a6 + 16)) * weighted_sum;
      weighted_sum_8 = (float)((float)a4 + *(float *)(masked_bits + 48LL * a6 + 20)) * weighted_sum;
      weighted_sum_9 = (float)((float)a2 + *(float *)(masked_bits + 48LL * a6)) * weighted_sum;
      weighted_sum_10 = (float)((float)a3 + *(float *)(masked_bits + 48LL * a6 + 4)) * weighted_sum;
      weighted_sum_11 = (float)((float)a4 + *(float *)(masked_bits + 48LL * a6 + 8)) * weighted_sum;
      weighted_sum_12 = (float)((float)a3 + *(float *)(masked_bits + 48LL * a6 + 40)) * weighted_sum;
      weighted_sum_13 = (float)((float)a3 + *(float *)(masked_bits + 48LL * a6 + 28)) * weighted_sum;
      saved_weighted_sum = weighted_sum_3;
      unused_written_slot = weighted_sum_12;
      *(float *)float_word_2 = weighted_sum_2;
      *(float *)&float_word_2[1] = weighted_sum_5;
      *(float *)&float_word_2[2] = weighted_sum_13;
      *(float *)&float_word_2[3] = weighted_sum_4;
      *(float *)&float_word_2[4] = weighted_sum_6;
      *(float *)&float_word_2[10] = (float)(weighted_sum_3 + weighted_sum_5) * 0.5;
      *(float *)&float_word_2[5] = weighted_sum_7;
      *(float *)&float_word_2[6] = weighted_sum_8;
      *(float *)&float_word_2[7] = weighted_sum_9;
      *(float *)&float_word_2[8] = weighted_sum_10;
      *(float *)&float_word_2[9] = weighted_sum_11;
      *(float *)&float_word_2[11] = (float)(weighted_sum_12 + weighted_sum_13) * 0.5;
      cached_world_effect_count = world_effect_count;
      element_index = 0;
      element_index_2 = 0;
      *(float *)&float_word_2[12] = (float)(weighted_sum_2 + weighted_sum_4) * 0.5;
      *(float *)&float_word_2[17] = (float)(weighted_sum_7 + weighted_sum_10) * 0.5;
      *(float *)&float_word_2[15] = (float)(weighted_sum_4 + weighted_sum_8) * 0.5;
      *(float *)&float_word_2[18] = (float)(weighted_sum_8 + weighted_sum_11) * 0.5;
      *(float *)&float_word_2[19] = (float)(weighted_sum_3 + weighted_sum_9) * 0.5;
      *(float *)&float_word_2[20] = (float)(weighted_sum_12 + weighted_sum_10) * 0.5;
      *(float *)&float_word_2[21] = (float)(weighted_sum_2 + weighted_sum_11) * 0.5;
      *(float *)&float_word_2[14] = (float)(weighted_sum_7 + weighted_sum_13) * 0.5;
      *(float *)&float_word_2[13] = (float)(weighted_sum_6 + weighted_sum_5) * 0.5;
      *(float *)&float_word_2[16] = (float)(weighted_sum_6 + weighted_sum_9) * 0.5;
      do
      {
        if ( cached_world_effect_count < 0x4000 )
        {
          scaled_index = 37LL * cached_world_effect_count;
          masked_bits_2 = *((_DWORD *)&saved_weighted_sum + 3 * element_index_2);
          dword_140404A6C[scaled_index + 432826949] = 4;
          dword_140404A6C[scaled_index + 432826961] = masked_bits_2;
          dword_140404A6C[scaled_index + 432826962] = float_word_2[3 * element_index_2 - 1];
          dword_140404A6C[scaled_index + 432826963] = float_word_2[3 * element_index_2];
          dword_140404A6C[scaled_index + 432826964] = *((_DWORD *)&saved_weighted_sum + 3 * ((element_index + 1) & 3));
          dword_140404A6C[scaled_index + 432826965] = float_word_2[3 * ((element_index + 1) & 3) - 1];
          dword_140404A6C[scaled_index + 432826966] = float_word_2[3 * ((element_index + 1) & 3)];
          dword_140404A6C[scaled_index + 432826967] = *a7;
          dword_140404A6C[scaled_index + 432826968] = a7[1];
          dword_140404A6C[scaled_index + 432826969] = a7[2];
          if ( element_index_2 == 2 )
            *(float *)&dword_140404A6C[scaled_index + 432826968] = *(float *)&dword_140404A6C[scaled_index + 432826968] - 0.0625;
          *(_QWORD *)&dword_140404A6C[scaled_index + 432826970] = 0;
          ++cached_world_effect_count;
          *(_QWORD *)&dword_140404A6C[scaled_index + 432826972] = 0;
          *(_QWORD *)&dword_140404A6C[scaled_index + 432826974] = 0;
          *(float *)&dword_140404A6C[scaled_index + 432826976] = *a8 * 0.015625;
          *(float *)&dword_140404A6C[scaled_index + 432826977] = a8[1] * 0.015625;
          *(float *)&float_word = a8[2] * 0.015625;
          world_effect_count = cached_world_effect_count;
          dword_140404A6C[scaled_index + 432826978] = float_word;
          dword_140404A6C[scaled_index + 432826950] = 60000;
          dword_140404A6C[scaled_index + 432826984] = 1048576000;
          dword_140404A6C[scaled_index + 432826951] = 993158992;
          dword_140404A6C[scaled_index + 432826983] = 1065311273;
          combined_products = *(float *)&dword_140404A6C[scaled_index + 432826961] - *(float *)&dword_140404A6C[scaled_index + 432826964];
          combined_products_2 = *(float *)&dword_140404A6C[scaled_index + 432826962] - *(float *)&dword_140404A6C[scaled_index + 432826965];
          combined_products_3 = *(float *)&dword_140404A6C[scaled_index + 432826963] - *(float *)&dword_140404A6C[scaled_index + 432826966];
          *(float *)&dword_140404A6C[scaled_index + 432826979] = fsqrt(
                                                          (float)((float)(combined_products_2 * combined_products_2) + (float)(combined_products * combined_products))
                                                        + (float)(combined_products_3 * combined_products_3));
          combined_products_4 = *(float *)&dword_140404A6C[scaled_index + 432826964] - *(float *)&dword_140404A6C[scaled_index + 432826967];
          combined_products_5 = *(float *)&dword_140404A6C[scaled_index + 432826965] - *(float *)&dword_140404A6C[scaled_index + 432826968];
          combined_products_6 = *(float *)&dword_140404A6C[scaled_index + 432826966] - *(float *)&dword_140404A6C[scaled_index + 432826969];
          *(float *)&dword_140404A6C[scaled_index + 432826980] = fsqrt(
                                                          (float)((float)(combined_products_5 * combined_products_5) + (float)(combined_products_4 * combined_products_4))
                                                        + (float)(combined_products_6 * combined_products_6));
          combined_products_7 = *(float *)&dword_140404A6C[scaled_index + 432826969] - *(float *)&dword_140404A6C[scaled_index + 432826963];
          *(float *)&dword_140404A6C[scaled_index + 432826981] = fsqrt(
                                                          (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index + 432826968]
                                                                                - *(float *)&dword_140404A6C[scaled_index + 432826962])
                                                                        * (float)(*(float *)&dword_140404A6C[scaled_index + 432826968]
                                                                                - *(float *)&dword_140404A6C[scaled_index + 432826962]))
                                                                + (float)((float)(*(float *)&dword_140404A6C[scaled_index + 432826967]
                                                                                - *(float *)&dword_140404A6C[scaled_index + 432826961])
                                                                        * (float)(*(float *)&dword_140404A6C[scaled_index + 432826967]
                                                                                - *(float *)&dword_140404A6C[scaled_index + 432826961])))
                                                        + (float)(combined_products_7 * combined_products_7));
        }
        ++element_index;
        ++element_index_2;
      }
      while ( element_index_2 < 4 );
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef saved_weighted_sum
#undef unused_written_slot
#undef float_word_2
#undef unused_frame_slot_96

