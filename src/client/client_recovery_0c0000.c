#include "shared_client.h"

// 1400BF580: conditional instruction was optimized away because edi.4==D

//----- (00000001400C2D50) ----------------------------------------------------
__int64            sub_1400C2D50(unsigned int a1)
{
  __int64 result;
  __int64 saved_call_status;
  unsigned int shifted_bits;

  g_144AF96E0 = a1;
  LODWORD(result) = 1;
  do
  {
    saved_call_status = (int)result;
    shifted_bits = result
       + 1812433253 * (dword_140404A6C[(int)result + 18600732] ^ (dword_140404A6C[(int)result + 18600732] >> 30));
    result = (unsigned int)(result + 1);
    dword_140404A6C[saved_call_status + 18600733] = shifted_bits;
  }
  while ( (int)result < 624 );
  dword_14030186C = result;
  return result;
}

//----- (00000001400C2F90) ----------------------------------------------------
/* Existing callers carry the native XMM3 float word in a double container. */
_UNKNOWN ** sub_1400C2F90(float *a1,float *a2,float *a3,double a4)
{
  float alpha;
  memcpy(&alpha,&a4,sizeof alpha);
  __m128 factor=_mm_set1_ps(alpha),left,right;
  sr_math_quat_from_mat3((float *)(void *)&left,a2);
  sr_math_quat_from_mat3((float *)(void *)&right,a3);
  float l[4],r[4];
  _mm_storeu_ps(l,left);_mm_storeu_ps(r,right);
  float p2=l[2]*r[2],p0=l[0]*r[0];
  float p3=l[3]*r[3]+p2,p1=l[1]*r[1]+p0;
  float dot=p3+p1;
  if(!_mm_comige_ss(_mm_set_ss(dot),_mm_setzero_ps()))
    right=_mm_xor_ps(right,_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279870)));
  __m128 weights=_mm_sub_ps(_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279700)),factor);
  __m128 blended=_mm_add_ps(_mm_mul_ps(weights,left),_mm_mul_ps(factor,right));
  float q[4];_mm_storeu_ps(q,blended);
  float s2=q[2]*q[2],s3=q[3]*q[3];
  float s0=q[0]*q[0],s1=q[1]*q[1];
  float sum23=s3+s2,sum01=s0+s1,norm=sum23+sum01;
  __m128d root=_mm_sqrt_pd(_mm_cvtss_sd(_mm_setzero_pd(),_mm_set_ss(norm)));
  unsigned char zero_or_unordered;
  __asm__ volatile("ucomisd %2, %1; sete %0" : "=qm"(zero_or_unordered)
                   : "x"(root),"x"(_mm_setzero_pd()) : "cc");
  if(zero_or_unordered)
    _mm_storeu_ps(q,_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279490)));
  else
  {
    __m128d inverse=_mm_div_sd(_mm_set_sd(1.0),root);
    inverse=_mm_unpacklo_pd(inverse,inverse);
    for(unsigned i=0;i<2;i++)
    {
      __m128 pair=_mm_castpd_ps(_mm_load_sd((const double *)(const void *)(q+2*i)));
      __m128 converted=_mm_cvtpd_ps(_mm_mul_pd(_mm_cvtps_pd(pair),inverse));
      uint64_t words;
      memcpy(&words,&converted,sizeof words);
      memcpy(q+2*i,&words,sizeof words);
    }
  }
  return sr_math_mat3_from_quat(a1,q);
}

//----- (00000001400C30E0) ----------------------------------------------------
void            sub_1400C30E0(float *a1, float *a2, float *a3, float a4)
{
  float source_component_y;
  float source_component_y_2;
  float source_component_z;
  float source_component_z_2;

  source_component_y = a3[1];
  source_component_y_2 = a2[1];
  source_component_z = a2[2];
  source_component_z_2 = a3[2];
  *a1 = (float)((float)(*a3 - *a2) * a4) + *a2;
  a1[1] = (float)((float)(source_component_y - source_component_y_2) * a4) + a2[1];
  a1[2] = (float)((float)(source_component_z_2 - source_component_z) * a4) + a2[2];
}

//----- (00000001400C3140) ----------------------------------------------------
__int64            sub_1400C3140(unsigned __int64 a1, float *a2)
{
  float source_float_15;
  float source_float_11;
  float source_float_7;
  float source_float_10;
  float source_float_14;
  float source_float_6;
  float source_float_13;
  float float_word;
  float source_float_8;
  float source_float_12;
  float float_word_2;
  float scaled_value;
  float product_difference;
  float scaled_value_2;
  float component_delta;
  float scaled_value_3;
  float scaled_value_4;
  float scaled_value_5;
  float scaled_value_6;
  float scaled_value_7;
  float scaled_value_8;
  float combined_products;
  float scaled_value_9;
  float scaled_value_10;
  float component_delta_2;
  float scaled_value_11;
  float scaled_value_12;
  float scaled_value_13;
  float scaled_value_14;
  float combined_products_2;
  float source_float_9;
  float combined_products_3;
  float scaled_value_15;
  float product_difference_2;
  float source_component_y;
  float component_delta_3;
  float source_component_z;
  float scaled_value_16;
  float weighted_sum;
  float source_component_w;
  float scaled_value_17;
  float scaled_value_18;
  float scaled_value_19;
  float scaled_value_20;
  float source_float_14_2;
  float scaled_value_21;
  float scaled_value_22;
  float source_float_13_2;
  float scaled_value_23;
  float scaled_value_24;
  float source_component_z_2;
  float source_component_y_2;
  float scaled_value_25;
  float source_component_w_2;
  float scaled_value_26;
  float scaled_value_27;
  float squared_component;
  float scaled_value_28;
  float scaled_value_29;
  float scaled_value_30;
  float combined_products_4;
  float scaled_value_31;
  float scaled_value_32;
  __m128 vector_result;
  __m128 vector_result_2;
  __m128 saved_vector_result;
  float source_float_14_3;
  float scaled_value_33;
  float source_float_7_2;
  __m128 vector_result_3;
  __m128 reordered_vector;
  __m128 converted_vector;
  float scaled_value_34;
  float source_float_10_2;
  __m128 reordered_vector_2;
  __m128 vector_result_4;
  __m128 vector_result_5;
  float scaled_value_35;
  __m128 saved_vector_result_2;
  float source_float_11_2;
  __m128 vector_result_6;
  __m128 vector_result_7;
  __m128 vector_result_8;
  float scaled_value_36;
  float source_float_5;
  __m128 vector_result_9;
  float scaled_value_37;
  float scaled_value_38;
  float scaled_value_39;
  float weighted_sum_2;
  __m128 converted_vector_2;
  __m128 reordered_vector_3;
  _BYTE *state_address;
  __int8 *state_address_2;
  unsigned __int64 running_total;
  __int64 remaining_count;
  float product_difference_3;
  float product_difference_4;
  float product_difference_5;
  __m128 vector_result_10;
  __m128 vector_result_11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C3140[160];
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1400C3140 + 0)) /* [rsp+0h] */
#define scaled_value_40 (*(float (*))(void *)(sr_frame_1400C3140 + 4)) /* [rsp+4h] */
#define combined_products_5 (*(float (*))(void *)(sr_frame_1400C3140 + 8)) /* [rsp+8h] */
#define saved_combined_products (*(float (*))(void *)(sr_frame_1400C3140 + 12)) /* [rsp+Ch] */
#define scaled_value_41 (*(float (*))(void *)(sr_frame_1400C3140 + 16)) /* [rsp+10h] */
#define squared_component_2 (*(float (*))(void *)(sr_frame_1400C3140 + 20)) /* [rsp+14h] */
#define scaled_value_42 (*(float (*))(void *)(sr_frame_1400C3140 + 24)) /* [rsp+18h] */
#define scaled_value_43 (*(float (*))(void *)(sr_frame_1400C3140 + 28)) /* [rsp+1Ch] */
#define scaled_value_44 (*(float (*))(void *)(sr_frame_1400C3140 + 32)) /* [rsp+20h] */
#define saved_scaled_value (*(float (*))(void *)(sr_frame_1400C3140 + 36)) /* [rsp+24h] */
#define squared_component_3 (*(float (*))(void *)(sr_frame_1400C3140 + 40)) /* [rsp+28h] */
#define scaled_value_45 (*(float (*))(void *)(sr_frame_1400C3140 + 44)) /* [rsp+2Ch] */
#define saved_scaled_value_2 (*(float (*))(void *)(sr_frame_1400C3140 + 48)) /* [rsp+30h] */
#define scaled_value_46 (*(float (*))(void *)(sr_frame_1400C3140 + 52)) /* [rsp+34h] */
#define saved_scaled_value_3 (*(float (*))(void *)(sr_frame_1400C3140 + 56)) /* [rsp+38h] */
#define saved_scaled_value_4 (*(float (*))(void *)(sr_frame_1400C3140 + 60)) /* [rsp+3Ch] */
#define saved_vector_result_3 (*(__m128 (*))(void *)(sr_frame_1400C3140 + 64)) /* [rsp+40h] */
#define saved_vector_result_4 (*(__m128 (*))(void *)(sr_frame_1400C3140 + 80)) /* [rsp+50h] */
#define float_word_3 (*(_BYTE (*)[48])(void *)(sr_frame_1400C3140 + 96)) /* [rsp+60h] */
#define unused_frame_slot_144 (*(__int64 (*))(void *)(sr_frame_1400C3140 + 144)) /* [rsp+90h] */

  source_float_15 = a2[15];
  source_float_11 = a2[11];
  source_float_7 = a2[7];
  source_float_10 = a2[10];
  source_float_14 = a2[14];
  source_float_6 = a2[6];
  source_float_13 = a2[13];
  float_word = a2[4];
  source_float_8 = a2[8];
  source_float_12 = a2[12];
  float_word_2 = (float)(source_float_6 * a2[9]) * source_float_15;
  scaled_value = source_float_8 * source_float_7;
  product_difference = (float)((float)(a2[5] * source_float_10) * source_float_15) - (float)((float)(source_float_11 * a2[5]) * source_float_14);
  scaled_value_2 = source_float_8 * source_float_6;
  saved_weighted_sum = float_word * source_float_10;
  component_delta = product_difference - float_word_2;
  scaled_value_3 = source_float_13 * source_float_6;
  scaled_value_4 = source_float_12 * a2[6];
  scaled_value_5 = (float)(source_float_13 * source_float_7) * source_float_10;
  scaled_value_6 = source_float_12 * source_float_7;
  combined_products_5 = (float)((float)(component_delta + (float)((float)(source_float_7 * a2[9]) * source_float_14)) + (float)(scaled_value_3 * source_float_11)) - scaled_value_5;
  scaled_value_7 = (float)(float_word * source_float_11) * source_float_13;
  scaled_value_8 = (float)(source_float_8 * source_float_7) * source_float_14;
  combined_products = (float)((float)((float)(float_word * source_float_11) * source_float_14) - (float)(saved_weighted_sum * source_float_15)) + (float)(scaled_value_2 * source_float_15);
  scaled_value_9 = scaled_value_4 * source_float_11;
  scaled_value_10 = source_float_12 * a2[5];
  component_delta_2 = (float)(combined_products - scaled_value_8) - scaled_value_9;
  scaled_value_11 = float_word * a2[9];
  *(float *)float_word_3 = component_delta_2 + (float)(scaled_value_6 * a2[10]);
  scaled_value_12 = (float)(source_float_8 * a2[5]) * source_float_14;
  scaled_value_13 = scaled_value_10 * a2[11];
  scaled_value_14 = scaled_value_10 * a2[10];
  combined_products_2 = (float)((float)((float)((float)((float)(scaled_value_11 * source_float_15) - scaled_value_7) - (float)((float)(source_float_8 * a2[5]) * source_float_15))
                      + (float)(scaled_value * source_float_13))
              + scaled_value_13)
      - (float)(scaled_value_6 * a2[9]);
  source_float_9 = a2[9];
  saved_combined_products = combined_products_2;
  combined_products_3 = (float)((float)(saved_weighted_sum * source_float_13) - (float)(scaled_value_11 * source_float_14)) + scaled_value_12;
  scaled_value_15 = *a2;
  product_difference_2 = combined_products_3 - (float)(scaled_value_2 * source_float_13);
  source_component_y = a2[1];
  squared_component_3 = *a2 * a2[10];
  component_delta_3 = product_difference_2 - scaled_value_14;
  source_component_z = a2[2];
  scaled_value_40 = source_component_y * source_float_12;
  scaled_value_16 = source_component_z * source_float_9;
  weighted_sum = component_delta_3 + (float)(scaled_value_4 * source_float_9);
  source_component_w = a2[3];
  scaled_value_42 = source_component_z * source_float_8;
  scaled_value_17 = source_component_w * source_float_9;
  saved_weighted_sum = weighted_sum;
  scaled_value_18 = source_component_z * source_float_13;
  scaled_value_19 = source_component_w * a2[13];
  scaled_value_45 = scaled_value_15 * a2[11];
  scaled_value_44 = source_component_z * source_float_12;
  scaled_value_43 = source_component_w * source_float_8;
  scaled_value_20 = source_component_w * source_float_12;
  source_float_14_2 = a2[14];
  saved_scaled_value = scaled_value_20;
  scaled_value_21 = scaled_value_15 * source_float_9;
  scaled_value_22 = source_component_y * source_float_8;
  source_float_13_2 = a2[13];
  saved_scaled_value_4 = scaled_value_21;
  saved_scaled_value_3 = scaled_value_22;
  scaled_value_23 = source_component_y * a2[6];
  *(float *)&float_word_3[36] = (float)((float)((float)((float)((float)(source_float_14_2 * scaled_value_21) - (float)(source_float_13_2 * squared_component_3)) - (float)(source_float_14_2 * scaled_value_22))
                                      + (float)(source_float_13_2 * scaled_value_42))
                              + (float)(a2[10] * scaled_value_40))
                      - (float)(a2[9] * scaled_value_44);
  scaled_value_24 = *a2;
  source_component_z_2 = a2[2];
  source_component_y_2 = a2[1];
  scaled_value_25 = source_component_w * a2[5];
  source_component_w_2 = a2[3];
  scaled_value_26 = source_component_y * a2[7];
  scaled_value_27 = source_component_z_2 * a2[5];
  squared_component = *a2 * a2[7];
  squared_component_2 = *a2 * a2[6];
  scaled_value_41 = source_component_z_2 * float_word;
  scaled_value_28 = scaled_value_24 * a2[5];
  scaled_value_29 = a2[13] * squared_component_2;
  saved_scaled_value_2 = scaled_value_28;
  scaled_value_46 = source_component_y_2 * float_word;
  scaled_value_30 = source_component_w_2 * float_word;
  combined_products_4 = (float)((float)((float)((float)(scaled_value_29 - (float)(a2[14] * scaled_value_28)) + (float)(a2[14] * (float)(source_component_y_2 * float_word)))
                      - (float)(a2[13] * scaled_value_41))
              - (float)(a2[6] * scaled_value_40))
      + (float)(a2[5] * scaled_value_44);
  scaled_value_31 = a2[11] * scaled_value_23;
  scaled_value_32 = a2[11] * scaled_value_27;
  *(float *)&float_word_3[40] = combined_products_4;
  vector_result = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 10))));
  vector_result_2 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 15))));
  saved_vector_result = vector_result_2;
  SR_VEC_LANES(128, saved_vector_result, f32)[0] = SR_VEC_LANES(128, vector_result_2, f32)[0] * scaled_value_23;
  source_float_14_3 = a2[14];
  SR_VEC_LANES(128, vector_result, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, vector_result, f32)[0] * scaled_value_26) - scaled_value_31) + scaled_value_32) - (float)(a2[10] * scaled_value_25))
                          - (float)(a2[7] * scaled_value_16))
                  + (float)(a2[6] * scaled_value_17);
  scaled_value_33 = source_float_14_3 * scaled_value_25;
  source_float_7_2 = a2[7];
  SR_VEC_LANES(128, saved_vector_result, f32)[0] = (float)((float)((float)((float)(SR_VEC_LANES(128, saved_vector_result, f32)[0] - (float)(source_float_14_3 * scaled_value_26)) - (float)(a2[15] * scaled_value_27)) + scaled_value_33)
                          + (float)(source_float_7_2 * scaled_value_18))
                  - (float)(a2[6] * scaled_value_19);
  vector_result_3 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 1))));
  reordered_vector = _mm_unpacklo_ps(saved_vector_result, vector_result);
  converted_vector = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(source_float_14_3))));
  scaled_value_34 = a2[15] * scaled_value_16;
  source_float_10_2 = a2[10];
  SR_VEC_LANES(128, vector_result_3, f32)[0] = (float)((float)((float)((float)((float)((float)(SR_VEC_LANES(128, vector_result_3, f32)[0] * a2[11]) * source_float_14_3)
                                                  - (float)((float)(SR_VEC_LANES(128, vector_result_3, f32)[0] * source_float_10_2) * SR_VEC_LANES(128, vector_result_2, f32)[0]))
                                          + scaled_value_34)
                                  - (float)(source_float_14_3 * scaled_value_17))
                          - (float)(a2[11] * scaled_value_18))
                  + (float)(source_float_10_2 * scaled_value_19);
  reordered_vector_2 = _mm_unpacklo_ps(((__m128)_mm_cvtsi32_si128((int)(LODWORD(combined_products_5)))), vector_result_3);
  SR_VEC_LANES(128, vector_result_3, f32)[0] = a2[6];
  vector_result_4 = _mm_movelh_ps(reordered_vector_2, reordered_vector);
  vector_result_5 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 11))));
  saved_vector_result_3 = vector_result_4;
  saved_vector_result_4 = vector_result_4;
  SR_VEC_LANES(128, vector_result_5, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, vector_result_5, f32)[0] * squared_component_2) - (float)(source_float_10_2 * squared_component))
                                          - (float)(a2[11] * scaled_value_41))
                                  + (float)(source_float_10_2 * scaled_value_30))
                          + (float)(source_float_7_2 * scaled_value_42))
                  - (float)(SR_VEC_LANES(128, vector_result_3, f32)[0] * scaled_value_43);
  scaled_value_35 = SR_VEC_LANES(128, vector_result_3, f32)[0] * saved_scaled_value;
  saved_vector_result_2 = vector_result_2;
  SR_VEC_LANES(128, converted_vector, f32)[0] = (float)((float)((float)((float)((float)(source_float_14_3 * squared_component) - (float)(SR_VEC_LANES(128, vector_result_2, f32)[0] * squared_component_2))
                                          + (float)(SR_VEC_LANES(128, vector_result_2, f32)[0] * scaled_value_41))
                                  - (float)(source_float_14_3 * scaled_value_30))
                          - (float)(source_float_7_2 * scaled_value_44))
                  + scaled_value_35;
  SR_VEC_LANES(128, saved_vector_result_2, f32)[0] = (float)((float)((float)(SR_VEC_LANES(128, vector_result_2, f32)[0] * squared_component_3) - (float)(source_float_14_3 * scaled_value_45))
                          - (float)(SR_VEC_LANES(128, vector_result_2, f32)[0] * scaled_value_42))
                  + (float)(source_float_14_3 * scaled_value_43);
  source_float_11_2 = a2[11];
  SR_VEC_LANES(128, saved_vector_result_2, f32)[0] = (float)(SR_VEC_LANES(128, saved_vector_result_2, f32)[0] + (float)(source_float_11_2 * scaled_value_44)) - (float)(a2[10] * saved_scaled_value);
  vector_result_6 = _mm_movelh_ps(_mm_unpacklo_ps(saved_vector_result_2, converted_vector), _mm_unpacklo_ps(vector_result_5, ((__m128)_mm_cvtsi32_si128((int)(LODWORD(saved_combined_products))))));
  SR_VEC_LANES(128, vector_result_5, f32)[0] = a2[9];
  vector_result_7 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, vector_result_5, u32)[0]));
  *(__m128_u *)&float_word_3[4] = vector_result_6;
  vector_result_8 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 15))));
  SR_VEC_LANES(128, vector_result_7, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, vector_result_5, f32)[0] * squared_component) - (float)(source_float_11_2 * saved_scaled_value_2))
                                          + (float)(source_float_11_2 * scaled_value_46))
                                  - (float)(SR_VEC_LANES(128, vector_result_5, f32)[0] * scaled_value_30))
                          - (float)(source_float_7_2 * saved_scaled_value_3))
                  + (float)(a2[5] * scaled_value_43);
  scaled_value_36 = a2[13] * scaled_value_30;
  source_float_5 = a2[5];
  vector_result_9 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 13))));
  SR_VEC_LANES(128, vector_result_8, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, vector_result_8, f32)[0] * saved_scaled_value_2) - (float)(a2[13] * squared_component))
                                          - (float)(SR_VEC_LANES(128, vector_result_8, f32)[0] * scaled_value_46))
                                  + scaled_value_36)
                          + (float)(source_float_7_2 * scaled_value_40))
                  - (float)(source_float_5 * saved_scaled_value);
  SR_VEC_LANES(128, vector_result_9, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, vector_result_9, f32)[0] * scaled_value_45) - (float)(a2[15] * saved_scaled_value_4))
                                          + (float)(a2[15] * saved_scaled_value_3))
                                  - (float)(a2[13] * scaled_value_43))
                          - (float)(a2[11] * scaled_value_40))
                  + (float)(a2[9] * saved_scaled_value);
  scaled_value_37 = a2[9] * squared_component_2;
  scaled_value_38 = a2[9] * scaled_value_41;
  SR_VEC_LANES(128, vector_result_6, f32)[0] = a2[10];
  *(__m128_u *)&float_word_3[20] = _mm_movelh_ps(_mm_unpacklo_ps(vector_result_9, vector_result_8), _mm_unpacklo_ps(vector_result_7, ((__m128)_mm_cvtsi32_si128((int)(LODWORD(saved_weighted_sum))))));
  SR_VEC_LANES(128, vector_result_6, f32)[0] = (float)((float)((float)((float)(SR_VEC_LANES(128, vector_result_6, f32)[0] * saved_scaled_value_2) - scaled_value_37) - (float)(SR_VEC_LANES(128, vector_result_6, f32)[0] * scaled_value_46))
                          + scaled_value_38)
                  + (float)(a2[6] * saved_scaled_value_3);
  SR_VEC_LANES(128, vector_result_9, f32)[0] = (float)(*(float *)float_word_3 * a2[1]) + (float)(combined_products_5 * *a2);
  scaled_value_39 = a2[3] * saved_weighted_sum;
  *(float *)&float_word_3[44] = SR_VEC_LANES(128, vector_result_6, f32)[0] - (float)(source_float_5 * scaled_value_42);
  weighted_sum_2 = SR_VEC_LANES(128, vector_result_9, f32)[0] + (float)(scaled_value_39 + (float)(a2[2] * saved_combined_products));
  if ( weighted_sum_2 != 0.0 )
  {
    converted_vector_2 = ((__m128)_mm_cvtsi32_si128((int)(0x3F800000u)));
    SR_VEC_LANES(128, converted_vector_2, f32)[0] = 1.0 / weighted_sum_2;
    reordered_vector_3 = _mm_shuffle_ps(converted_vector_2, converted_vector_2, 0);
    if ( a1 > (unsigned __int64)&float_word_3[44] || a1 + 60 < (unsigned __int64)&saved_vector_result_4 )
    {
      vector_result_10 = _mm_mul_ps(*(__m128_u *)&float_word_3[16], reordered_vector_3);
      *(__m128_u *)a1 = _mm_mul_ps(saved_vector_result_3, reordered_vector_3);
      *(__m128_u *)(a1 + 16) = _mm_mul_ps(*(__m128_u *)float_word_3, reordered_vector_3);
      vector_result_11 = _mm_mul_ps(*(__m128_u *)&float_word_3[32], reordered_vector_3);
      *(__m128_u *)(a1 + 32) = vector_result_10;
      *(__m128_u *)(a1 + 48) = vector_result_11;
    }
    else
    {
      state_address = (char *)&saved_vector_result_4 - a1;
      state_address_2 = &SR_VEC_LANES(128, saved_vector_result_4, i8)[-a1 + 4];
      running_total = a1 + 8;
      remaining_count = 4;
      do
      {
        running_total += 16LL;
        product_difference_3 = SR_VEC_LANES(128, converted_vector_2, f32)[0] * *(float *)&state_address_2[running_total - 24];
        *(float *)(running_total - 24) = SR_VEC_LANES(128, converted_vector_2, f32)[0] * *(float *)&state_address[running_total - 24];
        product_difference_4 = SR_VEC_LANES(128, converted_vector_2, f32)[0] * *(float *)&state_address[running_total - 16];
        *(float *)(running_total - 20) = product_difference_3;
        product_difference_5 = SR_VEC_LANES(128, converted_vector_2, f32)[0] * *(float *)&state_address_2[running_total - 16];
        *(float *)(running_total - 16) = product_difference_4;
        *(float *)(running_total - 12) = product_difference_5;
        --remaining_count;
      }
      while ( remaining_count );
    }
  }
  return 0; /* the function has no caller */
}
#undef saved_weighted_sum
#undef scaled_value_40
#undef combined_products_5
#undef saved_combined_products
#undef scaled_value_41
#undef squared_component_2
#undef scaled_value_42
#undef scaled_value_43
#undef scaled_value_44
#undef saved_scaled_value
#undef squared_component_3
#undef scaled_value_45
#undef saved_scaled_value_2
#undef scaled_value_46
#undef saved_scaled_value_3
#undef saved_scaled_value_4
#undef saved_vector_result_3
#undef saved_vector_result_4
#undef float_word_3
#undef unused_frame_slot_144

// 1400C39C9: conditional instruction was optimized away because r11.8==10

//----- (00000001400C6AB0) ----------------------------------------------------
unsigned int *           sub_1400C6AB0(int a1, int a2, char *a3, char a4, int a5)
{
  int input_value;
  __int64 input_value_2;
  __int64 remaining_count;
  unsigned int *state_address;
  char input_byte;

  input_value = 0;
  input_value_2 = a1;
  remaining_count = a5;
  if ( a5 > 0 )
  {
    input_value = a5;
    state_address = &dword_140404A6C[16 * (a2 + 110LL * a1) + 278846626];
    do
    {
      input_byte = *a3;
      if ( *a3 )
        ++a3;
      else
        input_byte = 32;
      *((_BYTE *)state_address - 2048) = input_byte;
      *(_BYTE *)state_address = a4;
      state_address = (unsigned int *)((char *)state_address + 1);
      --remaining_count;
    }
    while ( remaining_count );
  }
  *((_BYTE *)&dword_140404A6C[16 * (a2 + 110 * input_value_2) + 278846114] + input_value) = 0;
  return &g_182BBB4F4;
}

//----- (00000001400C6B30) ----------------------------------------------------
void            sub_1400C6B30(_BYTE *a1, int a2, int a3)
{
  __int64 input_value;
  __int64 item_record_offset;
  unsigned int scaled_index;
  int iteration_count;
  __int64 scaled_index_2;
  char *state_address;
  int *buffer_cursor;
  char *destination_text;
  bool comparison_result;
  int loaded_word;
  _WORD *record_pointer;

  input_value = a3;
  if ( a3 == 2 )
  {
    item_record_offset = 1760LL * a2;
    scaled_index = dword_140404A6C[item_record_offset + 278846098];
  }
  else
  {
    if ( a3 )
      goto LABEL_17;
    item_record_offset = 1760LL * a2;
    if ( (int)dword_140404A6C[item_record_offset + 278845906] <= 0 )
      goto LABEL_17;
    scaled_index = dword_140404A6C[1760 * dword_140404A6C[item_record_offset + 278845907] + 278846098];
  }
  if ( scaled_index == -1 )
  {
LABEL_17:
    *a1 = 0;
    return;
  }
  crt_sprintf(a1, "%c:\\", (unsigned int)(a3 + 65));
  iteration_count = 1;
  scaled_index_2 = item_record_offset * 4 + 72 * input_value;
  state_address = (char *)&g_182BBB180 + scaled_index_2;
  if ( *(int *)((char *)&g_182BBC57C + scaled_index_2) >= 1 )
  {
    buffer_cursor = (int *)((char *)&g_182BBC584 + scaled_index_2);
    do
    {
      destination_text = a1 - 1;
      do
        comparison_result = *++destination_text == 0;
      while ( !comparison_result );
      strcpy(destination_text, (     char *)&dword_140404A6C[2570 * scaled_index + 275753048 + 4 * *buffer_cursor]);
      loaded_word = *((_DWORD *)state_address + 1279);
      if ( iteration_count < loaded_word )
      {
        record_pointer = a1 - 1;
        do
        {
          comparison_result = *((_BYTE *)record_pointer + 1) == 0;
          record_pointer = (_WORD *)((char *)record_pointer + 1);
        }
        while ( !comparison_result );
        *record_pointer = 92;
        loaded_word = *((_DWORD *)state_address + 1279);
      }
      ++iteration_count;
      ++buffer_cursor;
    }
    while ( iteration_count <= loaded_word );
  }
}

//----- (00000001400C6C90) ----------------------------------------------------
__m128i *           sub_1400C6C90(int a1)
{
  __int64 item_record_offset;
  __int64 table_value;
  signed int iteration_count;
  __int64 remaining_count;
  __m128i *result;
  __m128i si128;

  item_record_offset = 1760LL * a1;
  table_value = (int)dword_140404A6C[item_record_offset + 278846111];
  iteration_count = 2;
  dword_140404A6C[item_record_offset + 278847170] = 2;
  dword_140404A6C[item_record_offset + 278847323] = -1;
  strcpy((char *)&dword_140404A6C[1760 * a1 + 278846114 + 16 * table_value], "STARTING CS-DOS...");
  sub_1400C3E00(a1);
  sub_1400C3E00(a1);
  sub_1400C6D90(a1, 0);
  do
    sr_item_link_text_line(a1, iteration_count++);
  while ( iteration_count < 24 );
  remaining_count = 32;
  result = (__m128i *)&dword_140404A6C[item_record_offset + 278846626];
  do
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
    *result = si128;
    result[1] = si128;
    result[2] = si128;
    result += 4;
    SR_VEC_LANES(128, result[-1], i64)[0] = SR_VEC_LANES(128, si128, i64)[0];
    SR_VEC_LANES(128, result[-1], i32)[2] = SR_VEC_LANES(128, si128, i32)[0];
    SR_VEC_LANES(128, result[-1], i16)[6] = SR_VEC_LANES(128, si128, i16)[0];
    SR_VEC_LANES(128, result[-1], i8)[14] = SR_VEC_LANES(128, si128, i8)[0];
    --remaining_count;
  }
  while ( remaining_count );
  return result;
}

//----- (00000001400C8AD0) ----------------------------------------------------
__int64            sub_1400C8AD0(_BYTE *a1, __int64 a2, int *a3)
{
  int iteration_count;
  unsigned int selection_flag;
  int element_index;
  int saved_iteration_count;
  char loaded_word;
  _BYTE *buffer_cursor;
  char loaded_word_2;

  iteration_count = *a3;
  selection_flag = 0;
  element_index = 0;
  if ( *a3 < 62 )
  {
    saved_iteration_count = *a3;
    do
    {
      loaded_word = *(_BYTE *)(iteration_count + a2);
      if ( (unsigned __int8)(loaded_word - 97) <= 0x19u )
        break;
      if ( (unsigned __int8)(loaded_word - 65) <= 0x19u )
        break;
      if ( (unsigned __int8)(loaded_word - 48) <= 9u )
        break;
      if ( !loaded_word )
        break;
      *a3 = ++iteration_count;
      saved_iteration_count = iteration_count;
    }
    while ( iteration_count < 62 );
    if ( saved_iteration_count < 62 )
    {
      buffer_cursor = a1;
      do
      {
        loaded_word_2 = *(_BYTE *)(saved_iteration_count + a2);
        if ( (unsigned __int8)(loaded_word_2 - 97) > 0x19u
          && (unsigned __int8)(loaded_word_2 - 65) > 0x19u
          && (unsigned __int8)(loaded_word_2 - 48) > 9u
          && loaded_word_2 != 46 )
        {
          break;
        }
        *buffer_cursor = loaded_word_2;
        ++element_index;
        ++buffer_cursor;
        saved_iteration_count = *a3 + 1;
        *a3 = saved_iteration_count;
      }
      while ( saved_iteration_count < 62 );
    }
  }
  a1[element_index] = 0;
  LOBYTE(selection_flag) = element_index > 0;
  return selection_flag;
}

// 1400C8B63: conditional instruction was optimized away because cl.1 is in (==2E|30..39)

//----- (00000001400C8BA0) ----------------------------------------------------
__int64            sub_1400C8BA0(_BYTE *a1, __int64 a2, int *a3)
{
  int iteration_count;
  unsigned int selection_flag;
  int element_index;
  int saved_iteration_count;
  char loaded_word;
  _BYTE *buffer_cursor;
  char loaded_word_2;

  iteration_count = *a3;
  selection_flag = 0;
  element_index = 0;
  if ( *a3 < 62 )
  {
    saved_iteration_count = *a3;
    do
    {
      loaded_word = *(_BYTE *)(iteration_count + a2);
      if ( (unsigned __int8)(loaded_word - 97) <= 0x19u )
        break;
      if ( (unsigned __int8)(loaded_word - 65) <= 0x19u )
        break;
      if ( (unsigned __int8)(loaded_word - 48) <= 9u )
        break;
      if ( !loaded_word )
        break;
      *a3 = ++iteration_count;
      saved_iteration_count = iteration_count;
    }
    while ( iteration_count < 62 );
    if ( saved_iteration_count < 62 )
    {
      buffer_cursor = a1;
      do
      {
        loaded_word_2 = *(_BYTE *)(saved_iteration_count + a2);
        if ( (unsigned __int8)(loaded_word_2 - 97) > 0x19u
          && (unsigned __int8)(loaded_word_2 - 65) > 0x19u
          && (unsigned __int8)(loaded_word_2 - 48) > 9u )
        {
          break;
        }
        *buffer_cursor = loaded_word_2;
        ++element_index;
        ++buffer_cursor;
        saved_iteration_count = *a3 + 1;
        *a3 = saved_iteration_count;
      }
      while ( saved_iteration_count < 62 );
    }
  }
  a1[element_index] = 0;
  LOBYTE(selection_flag) = element_index > 0;
  return selection_flag;
}

// 1400C8C2E: conditional instruction was optimized away because cl.1 is in (30..39)

//----- (00000001400C8C70) ----------------------------------------------------
__int64            sub_1400C8C70(_BYTE *a1, __int64 a2, int *a3)
{
  int saved_iteration_count;
  int element_index;
  int iteration_count;
  char loaded_word;
  __int64 element_index_2;
  char loaded_word_2;

  saved_iteration_count = *a3;
  element_index = 0;
  if ( *a3 < 62 )
  {
    iteration_count = *a3;
    do
    {
      if ( *(_BYTE *)(iteration_count + a2) != 32 )
        break;
      *a3 = ++iteration_count;
      saved_iteration_count = iteration_count;
    }
    while ( iteration_count < 62 );
  }
  loaded_word = *(_BYTE *)(saved_iteration_count + a2);
  if ( (unsigned __int8)(loaded_word - 97) <= 0x19u || (unsigned __int8)(loaded_word - 65) <= 0x19u || (unsigned __int8)(loaded_word - 48) <= 9u )
  {
    *a1 = 0;
  }
  else
  {
    if ( loaded_word && saved_iteration_count < 62 )
    {
      element_index_2 = 0;
      do
      {
        if ( element_index_2 >= 2 )
          break;
        loaded_word_2 = *(_BYTE *)(saved_iteration_count + a2);
        if ( !loaded_word_2 )
          break;
        a1[element_index_2] = loaded_word_2;
        ++element_index;
        ++element_index_2;
        saved_iteration_count = *a3 + 1;
        *a3 = saved_iteration_count;
      }
      while ( saved_iteration_count < 62 );
    }
    a1[element_index] = 0;
    if ( element_index > 0 )
      return 1;
  }
  return 0;
}

//----- (00000001400C8D20) ----------------------------------------------------
__int64            sub_1400C8D20(int a1, int a2)
{
  __int64 record_word_offset;
  __int64 remaining_count;
  int masked_bits;
  char *destination_text;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C8D20[2096];
#define callee_output_word (*(_BYTE (*)[32])(void *)(sr_frame_1400C8D20 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(__m128i (*)[64])(void *)(sr_frame_1400C8D20 + 32)) /* [rsp+20h] */
#define source_text (*(char (*)[1024])(void *)(sr_frame_1400C8D20 + 1056)) /* [rsp+420h] */
#define unused_frame_slot_2080 (*(__int64 (*))(void *)(sr_frame_1400C8D20 + 2080)) /* [rsp+820h] */

  SR_VEC_LANES(128, scratch_buffer[0], i8)[0] = 0;
  record_word_offset = 110LL * a2;
  remaining_count = 23;
  masked_bits = dword_140404A6C[1760 * a2 + 278846112];
  do
  {
    crt_sprintf(source_text, "%s\n", (     char *)&dword_140404A6C[16 * (record_word_offset + masked_bits) + 278846114]);
    destination_text = &callee_output_word[31];
    while ( *++destination_text != 0 )
      ;
    strcpy(destination_text, source_text);
    masked_bits = ((_BYTE)masked_bits + 1) & 0x1F;
    --remaining_count;
  }
  while ( remaining_count );
  return sub_1400584B0(a1, scratch_buffer); /* 0x1400C8DE3: the result of this call is still in rax at the exit */
}
#undef callee_output_word
#undef scratch_buffer
#undef source_text
#undef unused_frame_slot_2080

//----- (00000001400C90D0) ----------------------------------------------------
__int64            sub_1400C90D0(int a1)
{
  __int64 item_record_offset;

  item_record_offset = 1760LL * a1;
  *(_QWORD *)&dword_140404A6C[item_record_offset + 278846111] = 0;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[item_record_offset + 278847325]), 0, 0x520u);
  return sub_1400C92B0(a1);
}

//----- (00000001400CF610) ----------------------------------------------------
void            sub_1400CF610()
{
  int item;
  unsigned int *state_address;
  int remaining_count;

  item = 0;
  state_address = &g_182BBB19C;
  do
  {
    if ( *(state_address - 7) )
    {
      remaining_count = *state_address;
      if ( (int)*state_address < 0xFFFF )
        *state_address = --remaining_count;
      if ( remaining_count <= 0 )
        sr_world_remove_item(item);
    }
    ++item;
    state_address += 1760;
  }
  while ( item < 1024 );
}

//----- (00000001400CFC80) ----------------------------------------------------
void sub_1400CFC80(int a1,unsigned a2,float x,float y,float width,float height,unsigned flags)
{
  (void)a2;
  float outer=0.625f,inner=(flags&1)?0.5f:0.0f;
  if(flags&8){outer=0.25f;inner=0.0f;}
  unsigned color=sr_text_float_bits(outer);
  sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,color,color,color,0x3f800000);
  color=sr_text_float_bits(inner);
  sr_renderer_draw_flat_rect(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,color,color,color,0x3f800000);
  __int64 row=23LL*a1;
  float middle=height*0.5f+y;
  sr_text_draw_recovered((char *)&dword_140404A6C[row+179473704],x+4.0f,middle,16.0f,68,1,1,1,1,NULL);
  uint64_t ping[]={dword_140404A6C[row+179473720]};
  sr_text_draw_recovered("/i",480.0f,middle,16.0f,6,1,1,1,1,ping);
  uint64_t players[]={dword_140404A6C[row+179473717],dword_140404A6C[row+179473719]};
  sr_text_draw_recovered("/i///i",560.0f,middle,16.0f,6,1,1,1,1,players);
  unsigned mode=dword_140404A6C[row+179473721];
  if(mode==5)sr_text_draw_recovered("Eliminator",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==3)sr_text_draw_recovered("Round",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==4)sr_text_draw_recovered("World",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==7)sr_text_draw_recovered("Versus",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  uint64_t version[]={dword_140404A6C[row+179473701],(uint32_t)(dword_140404A6C[row+179473702]+97u)};
  sr_text_draw_recovered("Alpha /i/c",784.0f,middle,16.0f,6,1,1,1,1,version);
  if(dword_140404A6C[row+179473723])sr_text_draw_recovered("Yes",878.0f,middle,16.0f,6,1,1,1,1,NULL);
}

//----- (00000001400D00F0) ----------------------------------------------------
__int64            sub_1400D00F0(int a1)
{
  int integer_difference;
  unsigned int iteration_count;
  __int64 record_word_offset;
  __int64 masked_bits;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  unsigned int shifted_bits;
  unsigned int shifted_bits_2;
  int integer_sum;
  int cached_integer_difference;
  __int64 scaled_index;
  __int64 iteration_count_2;
  int iteration_count_3;
  unsigned int iteration_count_4;
  int running_total;
  int saved_iteration_count;
  __int64 saved_iteration_count_2;
  float weighted_sum_4;
  __int64 saved_running_total;
  int integer_sum_2;
  __int16 integer_difference_2;
  unsigned int shifted_bits_3;
  unsigned int shifted_bits_4;
  float weighted_sum_5;
  unsigned int shifted_bits_5;
  float weighted_sum_6;
  float component_delta;
  int shifted_bits_6;
  float combined_products;
  float weighted_sum_7;
  float component_delta_2;
  float scaled_value;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_value_2;
  int integer_sum_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D00F0[272];
#define shifted_bits_7 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 0)) /* [rsp+20h] */
#define shifted_bits_8 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 4)) /* [rsp+24h] */
#define integer_sum_4 (*(__int16 (*))(void *)(sr_frame_1400D00F0 + 8)) /* [rsp+28h] */
#define saved_masked_bits (*(__int64 (*))(void *)(sr_frame_1400D00F0 + 16)) /* [rsp+30h] */
#define input_value (*(__int64 (*))(void *)(sr_frame_1400D00F0 + 24)) /* [rsp+38h] */
#define saved_shifted_bits (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 240)) /* [rsp+110h] */
#define iteration_count_5 (*(int (*))(void *)(sr_frame_1400D00F0 + 248)) /* [rsp+118h] */
#define integer_difference_3 (*(int (*))(void *)(sr_frame_1400D00F0 + 256)) /* [rsp+120h] */
#define saved_shifted_bits_2 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 264)) /* [rsp+128h] */

  integer_difference = -1;
  iteration_count = -1;
  input_value = a1;
  record_word_offset = 3336LL * a1;
  integer_difference_3 = -1;
  masked_bits = *(_QWORD *)&dword_140404A6C[record_word_offset + 272034683];
  weighted_sum = *(float *)&dword_140404A6C[record_word_offset + 272034677];
  weighted_sum_2 = *(float *)&dword_140404A6C[record_word_offset + 272034678];
  weighted_sum_3 = *(float *)&dword_140404A6C[record_word_offset + 272034679];
  shifted_bits = dword_140404A6C[record_word_offset + 272034680] << 11;
  shifted_bits_2 = dword_140404A6C[record_word_offset + 272034681] << 11;
  integer_sum = 0;
  saved_shifted_bits_2 = shifted_bits;
  iteration_count_5 = 0;
  saved_shifted_bits = shifted_bits_2;
  saved_masked_bits = masked_bits;
  do
  {
    if ( integer_difference >= 0 )
    {
      cached_integer_difference = integer_difference;
      if ( integer_difference > 2048 )
        cached_integer_difference = 2048;
    }
    else
    {
      cached_integer_difference = 0;
    }
    scaled_index = 2049LL * cached_integer_difference;
    iteration_count_2 = -1;
    iteration_count_3 = -1;
    iteration_count_4 = -1;
    shifted_bits_7 = (int)(shifted_bits_2 + cached_integer_difference - 128) >> 11;
    integer_sum_4 = cached_integer_difference + shifted_bits_2 + 128;
    shifted_bits_8 = (int)(cached_integer_difference + shifted_bits_2 + 128) >> 11;
    running_total = 6 * integer_sum;
    do
    {
      if ( iteration_count_3 >= 0 )
      {
        if ( iteration_count_3 <= 2048 )
        {
          saved_iteration_count = iteration_count_3;
          saved_iteration_count_2 = iteration_count_2;
        }
        else
        {
          saved_iteration_count = 2048;
          saved_iteration_count_2 = 2048;
        }
      }
      else
      {
        saved_iteration_count = 0;
        saved_iteration_count_2 = 0;
      }
      if ( iteration_count_4 > 0x800 || iteration_count > 0x800 )
        weighted_sum_4 = *(float *)(masked_bits + 4 * (scaled_index + saved_iteration_count_2)) - 16.0;
      else
        weighted_sum_4 = *(float *)(masked_bits + 4 * (scaled_index + saved_iteration_count_2));
      saved_running_total = running_total;
      integer_sum_2 = shifted_bits + saved_iteration_count;
      integer_difference_2 = shifted_bits + saved_iteration_count - 128;
      shifted_bits_3 = (integer_sum_2 - 128) >> 11;
      *(float *)&dword_140404A6C[running_total + 271182638] = weighted_sum_4 + weighted_sum_2;
      *(float *)&dword_140404A6C[running_total + 271182639] = (float)cached_integer_difference + weighted_sum_3;
      *(float *)&dword_140404A6C[running_total + 271182637] = weighted_sum + (float)saved_iteration_count;
      shifted_bits_4 = (int)(cached_integer_difference + saved_shifted_bits) >> 11;
      if ( shifted_bits_3 > 7 || shifted_bits_4 > 7 )
        weighted_sum_5 = 0.0;
      else
        weighted_sum_5 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (shifted_bits_3 + 8 * shifted_bits_4) + 272034683]
                       + 4LL * (2049 * (((_WORD)cached_integer_difference + (_WORD)saved_shifted_bits) & 0x7FF) + (integer_difference_2 & 0x7FFu)));
      shifted_bits_5 = (integer_sum_2 + 128) >> 11;
      if ( shifted_bits_5 > 7 || shifted_bits_4 > 7 )
        weighted_sum_6 = 0.0;
      else
        weighted_sum_6 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (shifted_bits_5 + 8 * shifted_bits_4) + 272034683]
                       + 4LL * (2049 * (cached_integer_difference & 0x7FF) + (((_WORD)integer_sum_2 + 128) & 0x7FFu)));
      component_delta = weighted_sum_5 - weighted_sum_6;
      shifted_bits_6 = integer_sum_2 >> 11;
      if ( (unsigned int)(integer_sum_2 >> 11) > 7 )
      {
        combined_products = 0.0;
      }
      else
      {
        if ( shifted_bits_7 > 7 )
          combined_products = 0.0;
        else
          combined_products = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (shifted_bits_6 + 8 * shifted_bits_7) + 272034683]
                         + 4LL * ((integer_sum_2 & 0x7FF) + 2049 * (((_WORD)cached_integer_difference + (_WORD)saved_shifted_bits - 128) & 0x7FFu)));
        if ( shifted_bits_8 <= 7 )
        {
          weighted_sum_7 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (shifted_bits_6 + 8 * shifted_bits_8) + 272034683]
                         + 4LL * ((saved_iteration_count & 0x7FF) + 2049 * (integer_sum_4 & 0x7FFu)));
          goto LABEL_32;
        }
      }
      weighted_sum_7 = 0.0;
LABEL_32:
      component_delta_2 = combined_products - weighted_sum_7;
      scaled_value = component_delta_2 * 0.0078125;
      square_root = fsqrt((float)((float)((float)(component_delta_2 * component_delta_2) + (float)(component_delta * component_delta)) * 0.000061035156) + 1.0);
      if ( square_root == 0.0 )
      {
        scaled_ratio_2 = 0.0;
        scaled_ratio = 0.0;
        scaled_value_2 = 0.0;
      }
      else
      {
        scaled_ratio = 1.0 / square_root;
        scaled_ratio_2 = (float)(1.0 / square_root) * (float)(component_delta * 0.0078125);
        scaled_value_2 = scaled_ratio * scaled_value;
      }
      integer_sum = iteration_count_5 + 1;
      *(float *)&dword_140404A6C[running_total + 271182640] = scaled_ratio_2;
      running_total += 6;
      *(float *)&dword_140404A6C[saved_running_total + 271182641] = scaled_ratio;
      *(float *)&dword_140404A6C[saved_running_total + 271182642] = scaled_value_2;
      ++iteration_count_5;
      if ( iteration_count_4 <= 0x7FF )
      {
        iteration_count_3 += 127;
        iteration_count_4 += 127;
        iteration_count_2 += 127;
      }
      masked_bits = saved_masked_bits;
      ++iteration_count_3;
      shifted_bits = saved_shifted_bits_2;
      ++iteration_count_4;
      ++iteration_count_2;
    }
    while ( iteration_count_3 <= 2049 );
    integer_sum_3 = integer_difference_3;
    if ( iteration_count <= 0x7FF )
    {
      integer_sum_3 = integer_difference_3 + 127;
      iteration_count += 127;
    }
    shifted_bits_2 = saved_shifted_bits;
    integer_difference = integer_sum_3 + 1;
    ++iteration_count;
    integer_difference_3 = integer_difference;
  }
  while ( integer_difference <= 2049 );
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[input_value + 283791496] + 283793813]);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))glBufferData)(34962, 24 * integer_sum, &g_180E7F720, 35048);
}
#undef shifted_bits_7
#undef shifted_bits_8
#undef integer_sum_4
#undef saved_masked_bits
#undef input_value
#undef saved_shifted_bits
#undef iteration_count_5
#undef integer_difference_3
#undef saved_shifted_bits_2

//----- (00000001400D05B0) ----------------------------------------------------
__int64            sub_1400D05B0(int *a1, float *a2, float *a3)
{
  float *input_cursor;
  __int64 result;
  int integer_difference;
  int scaled_index;
  int iteration_count;
  int iteration_count_2;
  unsigned int shifted_bits;
  unsigned int shifted_bits_2;
  int bit_mask;
  __int64 shifted_bits_3;
  __int64 masked_bits;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float component_sum;
  __int64 masked_bits_2;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float component_sum_2;
  float component_sum_3;
  float component_sum_4;
  float source_component_y;
  __int64 packed_word_bits;
  int iteration_count_3;
  float *record_byte_offset;
  float *record_byte_offset_2;
  int iteration_count_4;
  int iteration_count_5;
  float *record_byte_offset_3;
  int iteration_count_6;
  float *record_byte_offset_4;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float component_delta_4;
  float *state_address;
  __int64 table_value;
  float component_delta_5;
  float *state_address_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D05B0[16];
#define scaled_index_2 (*(unsigned int (*))(void *)(sr_frame_1400D05B0 + 0)) /* [rsp+100h] */
#define cached_integer_difference (*(int (*))(void *)(sr_frame_1400D05B0 + 8)) /* [rsp+108h] */

  input_cursor = a2;
  result = (unsigned int)(int)(float)(*a2 - g_181290040);
  integer_difference = (int)(float)(a3[2] - g_181290048);
  scaled_index_2 = (int)(float)(*a2 - g_181290040);
  scaled_index = (int)(float)(*a3 - g_181290040);
  cached_integer_difference = integer_difference;
  iteration_count = (int)(float)(a2[2] - g_181290048);
  if ( iteration_count > integer_difference )
    return result;
  do
  {
    iteration_count_2 = result;
    if ( (int)result > scaled_index )
      goto LABEL_52;
    shifted_bits = iteration_count >> 11;
    do
    {
      if ( (unsigned int)(iteration_count_2 >> 11) > 7 )
        goto LABEL_50;
      if ( shifted_bits > 7 )
        goto LABEL_50;
      shifted_bits_2 = iteration_count >> 2;
      if ( (unsigned int)(iteration_count_2 >> 2) > 0xFFF )
        goto LABEL_50;
      if ( shifted_bits_2 > 0xFFF )
        goto LABEL_50;
      bit_mask = *(unsigned __int16 *)(g_181290050 + 2LL * ((iteration_count_2 >> 4) + (iteration_count >> 4 << 10)));
      if ( !_bittest(&bit_mask, (unsigned __int8)(((iteration_count_2 >> 2) & 3) + 4 * (shifted_bits_2 & 3))) )
        goto LABEL_50;
      shifted_bits_3 = 3336LL * (int)((iteration_count_2 >> 11) + 8 * shifted_bits);
      masked_bits = *(_QWORD *)&dword_140404A6C[shifted_bits_3 + 272034683];
      weighted_sum = *(float *)&dword_140404A6C[shifted_bits_3 + 272034678];
      weighted_sum_2 = *(float *)&dword_140404A6C[shifted_bits_3 + 272034677];
      weighted_sum_3 = *(float *)&dword_140404A6C[shifted_bits_3 + 272034679];
      component_sum = (float)(iteration_count_2 & 0x7FF) + weighted_sum_2;
      masked_bits_2 = (iteration_count_2 & 0x7FF) + 2049 * (iteration_count & 0x7FFu);
      weighted_sum_4 = weighted_sum + *(float *)(masked_bits + 4 * masked_bits_2);
      weighted_sum_5 = weighted_sum + *(float *)(masked_bits + 4 * masked_bits_2 + 4);
      weighted_sum_6 = weighted_sum + *(float *)(masked_bits + 4 * masked_bits_2 + 8200);
      weighted_sum_7 = weighted_sum + *(float *)(masked_bits + 4 * masked_bits_2 + 8196);
      component_sum_2 = (float)((iteration_count & 0x7FF) + 1) + weighted_sum_3;
      component_sum_3 = (float)(iteration_count & 0x7FF) + weighted_sum_3;
      component_sum_4 = (float)((iteration_count_2 & 0x7FF) + 1) + weighted_sum_2;
      if ( a1[8193] >= 1023 )
        goto LABEL_50;
      source_component_y = input_cursor[1];
      if ( weighted_sum_4 <= source_component_y && weighted_sum_5 <= source_component_y && weighted_sum_6 <= source_component_y && weighted_sum_7 <= source_component_y )
        goto LABEL_50;
      packed_word_bits = *a1;
      iteration_count_3 = 0;
      if ( (int)packed_word_bits > 0 )
      {
        record_byte_offset = (float *)(a1 + 3);
        while ( fabs(component_sum - *(record_byte_offset - 1)) >= 0.000061035156
             || fabs(weighted_sum_4 - *record_byte_offset) >= 0.000061035156
             || fabs(component_sum_3 - record_byte_offset[1]) >= 0.000061035156 )
        {
          ++iteration_count_3;
          record_byte_offset += 4;
          if ( iteration_count_3 >= (int)packed_word_bits )
            goto LABEL_20;
        }
LABEL_23:
        record_byte_offset_2 = (float *)(a1 + 3);
        iteration_count_4 = 0;
        while ( fabs(component_sum_4 - *(record_byte_offset_2 - 1)) >= 0.000061035156
             || fabs(weighted_sum_5 - *record_byte_offset_2) >= 0.000061035156
             || fabs(component_sum_3 - record_byte_offset_2[1]) >= 0.000061035156 )
        {
          LODWORD(packed_word_bits) = *a1;
          ++iteration_count_4;
          record_byte_offset_2 += 4;
          if ( iteration_count_4 >= *a1 )
            goto LABEL_28;
        }
        goto LABEL_31;
      }
LABEL_20:
      if ( (int)packed_word_bits < 2048 )
      {
        packed_word_bits *= 2;
        *(float *)&a1[2 * packed_word_bits + 2] = component_sum;
        *(float *)&a1[2 * packed_word_bits + 3] = weighted_sum_4;
        *(float *)&a1[2 * packed_word_bits + 4] = component_sum_3;
        LODWORD(packed_word_bits) = *a1 + 1;
        *a1 = packed_word_bits;
      }
      iteration_count_3 = packed_word_bits - 1;
      if ( (int)packed_word_bits > 0 )
        goto LABEL_23;
LABEL_28:
      if ( (int)packed_word_bits < 2048 )
      {
        packed_word_bits = 2LL * (int)packed_word_bits;
        *(float *)&a1[2 * packed_word_bits + 2] = component_sum_4;
        *(float *)&a1[2 * packed_word_bits + 3] = weighted_sum_5;
        *(float *)&a1[2 * packed_word_bits + 4] = component_sum_3;
        LODWORD(packed_word_bits) = *a1 + 1;
        *a1 = packed_word_bits;
      }
      iteration_count_4 = packed_word_bits - 1;
LABEL_31:
      iteration_count_5 = 0;
      if ( (int)packed_word_bits <= 0 )
      {
LABEL_37:
        if ( (int)packed_word_bits < 2048 )
        {
          packed_word_bits = 2LL * (int)packed_word_bits;
          *(float *)&a1[2 * packed_word_bits + 2] = component_sum_4;
          *(float *)&a1[2 * packed_word_bits + 3] = weighted_sum_6;
          *(float *)&a1[2 * packed_word_bits + 4] = component_sum_2;
          LODWORD(packed_word_bits) = *a1 + 1;
          *a1 = packed_word_bits;
        }
        iteration_count_5 = packed_word_bits - 1;
      }
      else
      {
        record_byte_offset_3 = (float *)(a1 + 3);
        while ( fabs(component_sum_4 - *(record_byte_offset_3 - 1)) >= 0.000061035156
             || fabs(weighted_sum_6 - *record_byte_offset_3) >= 0.000061035156
             || fabs(component_sum_2 - record_byte_offset_3[1]) >= 0.000061035156 )
        {
          LODWORD(packed_word_bits) = *a1;
          ++iteration_count_5;
          record_byte_offset_3 += 4;
          if ( iteration_count_5 >= *a1 )
            goto LABEL_37;
        }
      }
      iteration_count_6 = 0;
      if ( (int)packed_word_bits <= 0 )
      {
LABEL_46:
        if ( (int)packed_word_bits < 2048 )
        {
          packed_word_bits = 2LL * (int)packed_word_bits;
          *(float *)&a1[2 * packed_word_bits + 2] = component_sum;
          *(float *)&a1[2 * packed_word_bits + 3] = weighted_sum_7;
          *(float *)&a1[2 * packed_word_bits + 4] = component_sum_2;
          LODWORD(packed_word_bits) = *a1 + 1;
          *a1 = packed_word_bits;
        }
        iteration_count_6 = packed_word_bits - 1;
      }
      else
      {
        record_byte_offset_4 = (float *)(a1 + 3);
        while ( fabs(component_sum - *(record_byte_offset_4 - 1)) >= 0.000061035156
             || fabs(weighted_sum_7 - *record_byte_offset_4) >= 0.000061035156
             || fabs(component_sum_2 - record_byte_offset_4[1]) >= 0.000061035156 )
        {
          LODWORD(packed_word_bits) = *a1;
          ++iteration_count_6;
          record_byte_offset_4 += 4;
          if ( iteration_count_6 >= *a1 )
            goto LABEL_46;
        }
      }
      component_delta = weighted_sum_5 - weighted_sum_4;
      component_delta_2 = component_sum_4 - component_sum;
      component_delta_3 = component_sum_2 - component_sum_3;
      component_delta_4 = weighted_sum_6 - weighted_sum_4;
      a1[8 * a1[8193] + 8194] = 3;
      a1[8 * a1[8193] + 8195] = iteration_count_3;
      a1[8 * a1[8193] + 8196] = iteration_count_4;
      a1[8 * a1[8193] + 8197] = iteration_count_5;
      state_address = (float *)&a1[8 * a1[8193] + 8199];
      *state_address = -(float)(component_delta_3 * component_delta);
      state_address[1] = component_delta_3 * component_delta_2;
      state_address[2] = (float)(component_delta * component_delta_2) - (float)(component_delta_4 * component_delta_2);
      sr_math_vec3_normalize((__int64)state_address, state_address);
      table_value = a1[8193];
      component_delta_5 = weighted_sum_7 - weighted_sum_4;
      a1[8193] = table_value + 1;
      a1[8 * table_value + 8202] = 3;
      a1[8 * a1[8193] + 8195] = iteration_count_3;
      a1[8 * a1[8193] + 8196] = iteration_count_5;
      a1[8 * a1[8193] + 8197] = iteration_count_6;
      state_address_2 = (float *)&a1[8 * a1[8193] + 8199];
      *state_address_2 = (float)(component_delta_5 * component_delta_3) - (float)(component_delta_3 * component_delta_4);
      state_address_2[1] = component_delta_3 * component_delta_2;
      state_address_2[2] = -(float)(component_delta_5 * component_delta_2);
      sr_math_vec3_normalize((__int64)state_address_2, state_address_2);
      ++a1[8193];
      input_cursor = a2;
LABEL_50:
      ++iteration_count_2;
    }
    while ( iteration_count_2 <= scaled_index );
    result = scaled_index_2;
    integer_difference = cached_integer_difference;
LABEL_52:
    ++iteration_count;
  }
  while ( iteration_count <= integer_difference );
  return result;
}
#undef scaled_index_2
#undef cached_integer_difference

//----- (00000001400D0C10) ----------------------------------------------------
double            sub_1400D0C10(signed int a1, signed int a2, int a3)
{
  double result;
  __int64 input_value;
  __int64 input_value_2;
  __int64 record_word_offset;
  __int64 input_value_3;
  __int64 table_value;
  int integer_difference;
  int iteration_count;
  int integer_sum;
  unsigned int iteration_count_2;
  int shifted_bits;
  __int64 packed_word_bits;
  __int64 record_word_offset_2;
  int integer_difference_2;
  float weighted_sum;
  float weighted_sum_2;
  __int64 scaled_index;
  __int64 masked_bits;
  unsigned int shifted_bits_2;
  unsigned int shifted_bits_3;
  unsigned int shifted_bits_4;
  float weighted_sum_3;
  float scaled_ratio;
  int cached_integer_difference;
  int iteration_count_3;
  int scaled_index_2;
  int integer_sum_2;
  int integer_difference_3;
  unsigned int iteration_count_4;
  int running_total;
  float component_sum;
  int saved_iteration_count;
  float weighted_sum_4;
  __int64 saved_running_total;
  int integer_difference_4;
  unsigned int shifted_bits_5;
  unsigned int shifted_bits_6;
  float combined_products;
  int integer_sum_3;
  unsigned int shifted_bits_7;
  float weighted_sum_5;
  int shifted_bits_8;
  float product_difference;
  float weighted_sum_6;
  float weighted_sum_7;
  float product_difference_2;
  float square_root;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float scaled_ratio_4;
  int integer_sum_4;
  int masked_bits_2;
  signed int masked_bits_3;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D0C10[288];
#define iteration_count_5 (*(int (*))(void *)(sr_frame_1400D0C10 + 0)) /* [rsp+20h] */
#define integer_difference_5 (*(int (*))(void *)(sr_frame_1400D0C10 + 4)) /* [rsp+24h] */
#define shifted_bits_9 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 8)) /* [rsp+28h] */
#define cached_integer_difference_2 (*(__int16 (*))(void *)(sr_frame_1400D0C10 + 12)) /* [rsp+2Ch] */
#define shifted_bits_10 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 16)) /* [rsp+30h] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_1400D0C10 + 20)) /* [rsp+34h] */
#define saved_shifted_bits (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 24)) /* [rsp+38h] */
#define saved_shifted_bits_2 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 28)) /* [rsp+3Ch] */
#define saved_masked_bits (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 32)) /* [rsp+40h] */
#define input_value_4 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 40)) /* [rsp+48h] */
#define saved_packed_word_bits (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 48)) /* [rsp+50h] */
#define scaled_index_6 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 56)) /* [rsp+58h] */
#define saved_shifted_bits_3 (*(int (*))(void *)(sr_frame_1400D0C10 + 272)) /* [rsp+130h] */
#define saved_packed_word_bits_2 (*(int (*))(void *)(sr_frame_1400D0C10 + 280)) /* [rsp+138h] */

  input_value = a2;
  input_value_2 = a1;
  record_word_offset = 13LL * a2;
  input_value_3 = a3;
  input_value_4 = a3;
  scaled_index_6 = a3 + record_word_offset + 3336LL * a1;
  table_value = (int)dword_140404A6C[scaled_index_6 + 272034690];
  if ( (_DWORD)table_value != -1 )
  {
    dword_140404A6C[24582 * a3 + 271838029 + 3 * table_value] = 4;
    return result;
  }
  integer_difference = -1;
  iteration_count = 0;
  integer_sum = 0;
  iteration_count_2 = -1;
  shifted_bits = 1 << a3;
  packed_word_bits = 98328 * input_value_3;
  record_word_offset_2 = 3336LL * a1;
  saved_packed_word_bits = packed_word_bits;
  integer_difference_2 = shifted_bits - 1;
  *(unsigned int *)((char *)&g_1810FF780 + packed_word_bits) = 6;
  weighted_sum = *(float *)&dword_140404A6C[record_word_offset_2 + 272034677];
  weighted_sum_2 = *(float *)&dword_140404A6C[record_word_offset_2 + 272034678];
  scaled_index = record_word_offset_2 * 4 + 52 * input_value;
  masked_bits = *(_QWORD *)&dword_140404A6C[3336 * input_value_2 + 272034683];
  LODWORD(packed_word_bits) = dword_140404A6C[3336 * input_value_2 + 272034680] << 11;
  shifted_bits_2 = *(unsigned int *)((char *)&g_1811BF870 + scaled_index) << 7;
  shifted_bits_3 = *(unsigned int *)((char *)&g_1811BF86C + scaled_index) << 7;
  shifted_bits_4 = dword_140404A6C[record_word_offset_2 + 272034681] << 11;
  weighted_sum_3 = *(float *)&dword_140404A6C[record_word_offset_2 + 272034679];
  saved_packed_word_bits_2 = packed_word_bits;
  saved_shifted_bits_2 = shifted_bits_4;
  saved_shifted_bits_3 = shifted_bits;
  scaled_ratio = 1.0 / (float)((float)(shifted_bits - 1) + 1.0);
  iteration_count_5 = 0;
  saved_shifted_bits = shifted_bits_2;
  integer_difference_5 = -1;
  saved_masked_bits = masked_bits;
  do
  {
    if ( integer_difference >= 0 )
    {
      cached_integer_difference = integer_difference;
      if ( integer_difference > 128 )
        cached_integer_difference = 128;
    }
    else
    {
      cached_integer_difference = 0;
    }
    iteration_count_3 = -1;
    scaled_index_2 = 2049 * (cached_integer_difference + shifted_bits_2);
    integer_sum_2 = shifted_bits_2 + cached_integer_difference + shifted_bits_4;
    cached_scaled_index = scaled_index_2;
    integer_difference_3 = shifted_bits_2 + shifted_bits_4 + cached_integer_difference - integer_difference_2 - 1;
    iteration_count_4 = -1;
    cached_integer_difference_2 = integer_difference_3;
    shifted_bits_10 = (shifted_bits + integer_sum_2) >> 11;
    running_total = 6 * integer_sum;
    shifted_bits_9 = integer_difference_3 >> 11;
    component_sum = (float)(int)(cached_integer_difference + shifted_bits_2) + weighted_sum_3;
    do
    {
      if ( iteration_count_3 >= 0 )
      {
        saved_iteration_count = iteration_count_3;
        if ( iteration_count_3 > 128 )
          saved_iteration_count = 128;
      }
      else
      {
        saved_iteration_count = 0;
      }
      if ( iteration_count_4 > 0x80 || iteration_count_2 > 0x80 )
        weighted_sum_4 = *(float *)(masked_bits + 4LL * (int)(shifted_bits_3 + scaled_index_2 + saved_iteration_count)) - 16.0;
      else
        weighted_sum_4 = *(float *)(masked_bits + 4LL * (int)(shifted_bits_3 + scaled_index_2 + saved_iteration_count));
      saved_running_total = running_total;
      integer_difference_4 = saved_packed_word_bits_2 + saved_iteration_count - integer_difference_2;
      *(float *)&dword_140404A6C[running_total + 271182638] = weighted_sum_4 + weighted_sum_2;
      *(float *)&dword_140404A6C[running_total + 271182639] = component_sum;
      *(float *)&dword_140404A6C[running_total + 271182637] = weighted_sum + (float)(int)(saved_iteration_count + shifted_bits_3);
      shifted_bits_5 = integer_sum_2 >> 11;
      shifted_bits_6 = (int)(integer_difference_4 + shifted_bits_3 - 1) >> 11;
      if ( shifted_bits_6 > 7 || shifted_bits_5 > 7 )
        combined_products = 0.0;
      else
        combined_products = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (shifted_bits_6 + 8 * shifted_bits_5) + 272034683]
                       + 4LL * (2049 * (integer_sum_2 & 0x7FF) + (((_WORD)integer_difference_4 + (_WORD)shifted_bits_3 - 1) & 0x7FFu)));
      integer_sum_3 = shifted_bits_3 + saved_iteration_count + saved_packed_word_bits_2;
      shifted_bits_7 = (integer_sum_3 + saved_shifted_bits_3) >> 11;
      if ( shifted_bits_7 > 7 || shifted_bits_5 > 7 )
        weighted_sum_5 = 0.0;
      else
        weighted_sum_5 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (shifted_bits_7 + 8 * shifted_bits_5) + 272034683]
                       + 4LL * (2049 * (integer_sum_2 & 0x7FF) + (((_WORD)integer_sum_3 + (_WORD)saved_shifted_bits_3) & 0x7FFu)));
      shifted_bits_8 = integer_sum_3 >> 11;
      product_difference = (float)(combined_products - weighted_sum_5) * scaled_ratio;
      if ( (unsigned int)(integer_sum_3 >> 11) > 7 )
      {
        weighted_sum_6 = 0.0;
      }
      else
      {
        if ( shifted_bits_9 > 7 )
          weighted_sum_6 = 0.0;
        else
          weighted_sum_6 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (shifted_bits_8 + 8 * shifted_bits_9) + 272034683]
                         + 4LL * ((integer_sum_3 & 0x7FF) + 2049 * (cached_integer_difference_2 & 0x7FFu)));
        if ( shifted_bits_10 <= 7 )
        {
          weighted_sum_7 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (shifted_bits_8 + 8 * shifted_bits_10) + 272034683]
                         + 4LL * ((integer_sum_3 & 0x7FF) + 2049 * (((_WORD)integer_sum_2 + (_WORD)saved_shifted_bits_3) & 0x7FFu)));
          goto LABEL_33;
        }
      }
      weighted_sum_7 = 0.0;
LABEL_33:
      product_difference_2 = (float)(weighted_sum_6 - weighted_sum_7) * scaled_ratio;
      square_root = fsqrt((float)((float)(product_difference * product_difference) + 1.0) + (float)(product_difference_2 * product_difference_2));
      if ( square_root == 0.0 )
      {
        scaled_ratio_3 = 0.0;
        scaled_ratio_2 = 0.0;
        scaled_ratio_4 = 0.0;
      }
      else
      {
        scaled_ratio_2 = 1.0 / square_root;
        scaled_ratio_3 = (float)(1.0 / square_root) * product_difference;
        scaled_ratio_4 = (float)(1.0 / square_root) * product_difference_2;
      }
      running_total += 6;
      *(float *)&dword_140404A6C[saved_running_total + 271182640] = scaled_ratio_3;
      *(float *)&dword_140404A6C[saved_running_total + 271182641] = scaled_ratio_2;
      *(float *)&dword_140404A6C[saved_running_total + 271182642] = scaled_ratio_4;
      integer_sum = ++iteration_count_5;
      if ( iteration_count_4 <= 0x7F )
      {
        iteration_count_3 += integer_difference_2;
        iteration_count_4 += integer_difference_2;
      }
      scaled_index_2 = cached_scaled_index;
      ++iteration_count_3;
      masked_bits = saved_masked_bits;
      ++iteration_count_4;
    }
    while ( iteration_count_3 <= 129 );
    integer_sum_4 = integer_difference_5;
    if ( iteration_count_2 <= 0x7F )
    {
      integer_sum_4 = integer_difference_2 + integer_difference_5;
      iteration_count_2 += integer_difference_2;
    }
    shifted_bits = saved_shifted_bits_3;
    integer_difference = integer_sum_4 + 1;
    shifted_bits_2 = saved_shifted_bits;
    ++iteration_count_2;
    shifted_bits_4 = saved_shifted_bits_2;
    integer_difference_5 = integer_difference;
  }
  while ( integer_difference <= 129 );
  masked_bits_2 = *(unsigned int *)((char *)&g_1810FF788 + saved_packed_word_bits);
  masked_bits_3 = (masked_bits_2 - 1) & (*(unsigned int *)((char *)&g_1810FF794 + saved_packed_word_bits) + 1);
  *(unsigned int *)((char *)&g_1810FF794 + saved_packed_word_bits) = masked_bits_3;
  if ( masked_bits_2 > 0 )
  {
    do
    {
      if ( (int)dword_140404A6C[24582 * input_value_4 + 271838029 + 3 * masked_bits_3] <= 0 )
        break;
      masked_bits_3 = (masked_bits_2 - 1) & (masked_bits_3 + 1);
      ++iteration_count;
      *(unsigned int *)((char *)&g_1810FF794 + saved_packed_word_bits) = masked_bits_3;
    }
    while ( iteration_count < masked_bits_2 );
  }
  scaled_index_3 = masked_bits_3 + 8194 * input_value_4;
  scaled_index_4 = (int)dword_140404A6C[3 * scaled_index_3 + 271838027];
  if ( (unsigned int)scaled_index_4 <= 0x3F )
  {
    scaled_index_5 = (int)dword_140404A6C[3 * scaled_index_3 + 271838028];
    if ( (unsigned int)scaled_index_5 <= 0xFF )
      dword_140404A6C[3336 * scaled_index_4 + 272034690 + 13 * scaled_index_5 + input_value_4] = -1;
  }
  dword_140404A6C[3 * scaled_index_3 + 271838027] = a1;
  dword_140404A6C[3 * scaled_index_3 + 271838028] = a2;
  dword_140404A6C[3 * scaled_index_3 + 271838029] = 4;
  dword_140404A6C[scaled_index_6 + 272034690] = masked_bits_3;
  ((double (*)(_QWORD, _QWORD, _QWORD))glBindBuffer)(34962, dword_140404A6C[2 * dword_140404A6C[input_value_4 + 283791752] + 283793813], 3 * scaled_index_3);
  return ((double (*)(_QWORD, _QWORD, _QWORD, _QWORD))glBufferSubData)(
           34962,
           (int)(masked_bits_3 * *(unsigned int *)((char *)&g_1810FF790 + saved_packed_word_bits)),
           (int)(4 * *(unsigned int *)((char *)&g_1810FF780 + saved_packed_word_bits) * integer_sum),
           &g_180E7F720);
}
#undef iteration_count_5
#undef integer_difference_5
#undef shifted_bits_9
#undef cached_integer_difference_2
#undef shifted_bits_10
#undef cached_scaled_index
#undef saved_shifted_bits
#undef saved_shifted_bits_2
#undef saved_masked_bits
#undef input_value_4
#undef saved_packed_word_bits
#undef scaled_index_6
#undef saved_shifted_bits_3
#undef saved_packed_word_bits_2

//----- (00000001400D26A0) ----------------------------------------------------
unsigned int *           sub_1400D26A0(float *a1)
{
  int iteration_count;
  float *input_cursor;
  unsigned int *state_address;
  int iteration_count_2;
  unsigned int *state_address_2;
  int iteration_count_3;
  unsigned int *state_address_3;
  int iteration_count_4;
  unsigned int *state_address_4;
  int iteration_count_5;
  unsigned int *state_address_5;
  int iteration_count_6;
  unsigned int *state_address_6;
  int iteration_count_7;
  unsigned int *state_address_7;
  unsigned int *result;
  float *state_address_8;
  signed int iteration_count_8;
  __int64 running_total;
  int record_byte_offset;
  __int64 record_byte_offset_2;
  _DWORD *running_total_2;
  int iteration_count_9;
  __int64 i;
  float shifted_bits;
  float shifted_bits_2;
  float squared_length;
  int iteration_count_10;
  __int64 element_index;
  unsigned int *state_address_9;
  signed int table_value;
  unsigned int *state_address_10;

  iteration_count = 0;
  input_cursor = a1;
  g_180E6F600 = 0;
  if ( (int)g_1810FF788 > 0 )
  {
    state_address = &g_1810FF7A0;
    do
    {
      if ( (*(state_address - 2) & 0x80000000) != 0 )
      {
        *state_address = 0;
      }
      else if ( (int)*state_address > 0 )
      {
        --*state_address;
      }
      ++iteration_count;
      state_address += 3;
    }
    while ( iteration_count < (int)g_1810FF788 );
  }
  iteration_count_2 = 0;
  g_180E6F604 = 0;
  if ( (int)g_1811177A0 > 0 )
  {
    state_address_2 = &g_1811177B8;
    do
    {
      if ( (*(state_address_2 - 2) & 0x80000000) != 0 )
      {
        *state_address_2 = 0;
      }
      else if ( (int)*state_address_2 > 0 )
      {
        --*state_address_2;
      }
      ++iteration_count_2;
      state_address_2 += 3;
    }
    while ( iteration_count_2 < (int)g_1811177A0 );
  }
  iteration_count_3 = 0;
  g_180E6F608 = 0;
  if ( (int)g_18112F7B8 > 0 )
  {
    state_address_3 = &g_18112F7D0;
    do
    {
      if ( (*(state_address_3 - 2) & 0x80000000) != 0 )
      {
        *state_address_3 = 0;
      }
      else if ( (int)*state_address_3 > 0 )
      {
        --*state_address_3;
      }
      ++iteration_count_3;
      state_address_3 += 3;
    }
    while ( iteration_count_3 < (int)g_18112F7B8 );
  }
  iteration_count_4 = 0;
  g_180E6F60C = 0;
  if ( (int)g_1811477D0 > 0 )
  {
    state_address_4 = &g_1811477E8;
    do
    {
      if ( (*(state_address_4 - 2) & 0x80000000) != 0 )
      {
        *state_address_4 = 0;
      }
      else if ( (int)*state_address_4 > 0 )
      {
        --*state_address_4;
      }
      ++iteration_count_4;
      state_address_4 += 3;
    }
    while ( iteration_count_4 < (int)g_1811477D0 );
  }
  iteration_count_5 = 0;
  g_180E6F610 = 0;
  if ( (int)g_18115F7E8 > 0 )
  {
    state_address_5 = &g_18115F800;
    do
    {
      if ( (*(state_address_5 - 2) & 0x80000000) != 0 )
      {
        *state_address_5 = 0;
      }
      else if ( (int)*state_address_5 > 0 )
      {
        --*state_address_5;
      }
      ++iteration_count_5;
      state_address_5 += 3;
    }
    while ( iteration_count_5 < (int)g_18115F7E8 );
  }
  iteration_count_6 = 0;
  g_180E6F614 = 0;
  if ( (int)g_181177800 > 0 )
  {
    state_address_6 = &g_181177818;
    do
    {
      if ( (*(state_address_6 - 2) & 0x80000000) != 0 )
      {
        *state_address_6 = 0;
      }
      else if ( (int)*state_address_6 > 0 )
      {
        --*state_address_6;
      }
      ++iteration_count_6;
      state_address_6 += 3;
    }
    while ( iteration_count_6 < (int)g_181177800 );
  }
  iteration_count_7 = 0;
  g_180E6F618 = 0;
  if ( (int)g_18118F818 > 0 )
  {
    state_address_7 = &g_18118F830;
    do
    {
      if ( (*(state_address_7 - 2) & 0x80000000) != 0 )
      {
        *state_address_7 = 0;
      }
      else if ( (int)*state_address_7 > 0 )
      {
        --*state_address_7;
      }
      ++iteration_count_7;
      state_address_7 += 3;
    }
    while ( iteration_count_7 < (int)g_18118F818 );
  }
  result = &g_180E6F620;
  state_address_8 = (float *)&g_1811BF848;
  iteration_count_8 = 0;
  running_total = 0;
  state_address_10 = &g_180E6F620;
  do
  {
    if ( (float)((float)((float)((float)(input_cursor[1] - *(state_address_8 - 1)) * (float)(input_cursor[1] - *(state_address_8 - 1)))
                       + (float)((float)(*input_cursor - (float)(*(state_address_8 - 2) + 1024.0))
                               * (float)(*input_cursor - (float)(*(state_address_8 - 2) + 1024.0))))
               + (float)((float)(input_cursor[2] - (float)(*state_address_8 + 1024.0)) * (float)(input_cursor[2] - (float)(*state_address_8 + 1024.0)))) >= 16777216.0 )
    {
      *result = 0;
      goto LABEL_78;
    }
    record_byte_offset = 0;
    *result = 1;
    record_byte_offset_2 = 0;
    running_total_2 = state_address_8 + 10;
    do
    {
      iteration_count_9 = 0;
      for ( i = 0; i < 16; ++i )
      {
        shifted_bits = *input_cursor - (float)((float)((float)(int)(*(running_total_2 - 1) << 7) + *(state_address_8 - 2)) + 64.0);
        shifted_bits_2 = (float)((float)(int)(*running_total_2 << 7) + *state_address_8) + 64.0;
        squared_length = (float)((float)(shifted_bits * shifted_bits) + (float)((float)(input_cursor[1] - *(state_address_8 - 1)) * (float)(input_cursor[1] - *(state_address_8 - 1))))
            + (float)((float)(input_cursor[2] - shifted_bits_2) * (float)(input_cursor[2] - shifted_bits_2));
        if ( squared_length >= 262144.0 )
        {
          if ( squared_length >= 589824.0 )
          {
            if ( squared_length >= 1048576.0 )
            {
              if ( squared_length >= 2359296.0 )
              {
                if ( squared_length >= 4194304.0 )
                {
                  if ( squared_length >= 9437184.0 )
                  {
                    element_index = 6;
                    iteration_count_10 = 6;
                    goto LABEL_73;
                  }
                  element_index = 5;
                }
                else
                {
                  element_index = 4;
                }
              }
              else
              {
                element_index = 3;
              }
            }
            else
            {
              element_index = 2;
            }
          }
          else
          {
            element_index = 1;
          }
          iteration_count_10 = element_index;
        }
        else
        {
          iteration_count_10 = 0;
          element_index = 0;
        }
        state_address_9 = &dword_140404A6C[24582 * element_index + 271838023];
        do
        {
          if ( (int)dword_140404A6C[element_index + 271166181] < (int)*state_address_9 )
            break;
          ++iteration_count_10;
          ++element_index;
          state_address_9 += 24582;
        }
        while ( (__int64)state_address_9 < (__int64)&g_18118F818 );
LABEL_73:
        table_value = dword_140404A6C[element_index + 271166181];
        if ( table_value < (int)dword_140404A6C[24582 * element_index + 271838023] )
        {
          dword_140404A6C[element_index + 271166181] = table_value + 1;
          dword_140404A6C[i + 271166190 + running_total + record_byte_offset_2] = iteration_count_10;
          sub_1400D0C10(iteration_count_8, record_byte_offset + iteration_count_9, iteration_count_10);
          input_cursor = a1;
        }
        ++iteration_count_9;
        running_total_2 += 13;
      }
      record_byte_offset += 16;
      record_byte_offset_2 += 16;
    }
    while ( record_byte_offset < 256 );
    result = state_address_10;
LABEL_78:
    result += 257;
    ++iteration_count_8;
    state_address_8 += 3336;
    state_address_10 = result;
    running_total += 257;
  }
  while ( iteration_count_8 < 64 );
  return result;
}

//----- (00000001400D2B90) ----------------------------------------------------
__int64            sub_1400D2B90(int a1)
{
  __int64 input_value;
  __int64 unused_local;
  __int64 unused_local_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D2B90[80];
#define scratch_buffer (*(_DWORD (*)[10])(void *)(sr_frame_1400D2B90 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_1400D2B90 + 40)) /* [rsp+28h] */
#define cached_xmmword_140279700 (*(__int128 (*))(void *)(sr_frame_1400D2B90 + 48)) /* [rsp+30h] */
#define unused_frame_slot_64 (*(__int64 (*))(void *)(sr_frame_1400D2B90 + 64)) /* [rsp+40h] */

  input_value = a1;
  cached_xmmword_140279700 = xmmword_140279700;
  glVertexAttrib4fv(2, &cached_xmmword_140279700);
  glBindBuffer(34963, dword_140404A6C[2 * g_183E98C58 + 283793814]);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[input_value + 283791496] + 283793813]);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(0));
  unused_written_slot = 12;
  scratch_buffer[8] = 24;
  glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(12));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)(3 * g_1811477CC),5125,NULL);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef scratch_buffer
#undef unused_written_slot
#undef cached_xmmword_140279700
#undef unused_frame_slot_64

//----- (00000001400D3190) ----------------------------------------------------
__int64 sub_1400D3190()
{
  int rol4_result;
  unsigned int *buffer_cursor;
  unsigned int *state_address;
  __int64 remaining_count;
  __int64 integer_sum;
  int iteration_count;
  int integer_quotient;
  int integer_quotient_2;
  __int64 remaining_count_2;
  int iteration_count_2;
  int integer_difference;
  unsigned int integer_difference_2;
  __int64 scaled_index;
  __int64 result;

  rol4_result = 1;
  buffer_cursor = &g_183E98C4C;
  state_address = &g_1810FF784;
  remaining_count = 7;
  do
  {
    integer_sum = 0;
    g_180FFF760 = 0;
    iteration_count = 0;
    integer_quotient = 128 / rol4_result;
    integer_quotient_2 = 128 / rol4_result + 2;
    if ( integer_quotient_2 > 0 )
    {
      do
      {
        ++iteration_count;
        remaining_count_2 = (unsigned int)integer_quotient_2;
        iteration_count_2 = (integer_quotient + 3) * iteration_count + 1;
        do
        {
          integer_difference = iteration_count_2 - 1 - (integer_quotient + 3);
          dword_140404A6C[3 * (_DWORD)integer_sum + 271575870] = integer_difference;
          dword_140404A6C[3 * g_180FFF760 + 271575871] = iteration_count_2 - (integer_quotient + 3);
          integer_difference_2 = iteration_count_2 - 1;
          dword_140404A6C[3 * g_180FFF760++ + 271575872] = iteration_count_2;
          dword_140404A6C[3 * g_180FFF760 + 271575870] = integer_difference;
          dword_140404A6C[3 * g_180FFF760 + 271575871] = iteration_count_2++;
          dword_140404A6C[3 * g_180FFF760 + 271575872] = integer_difference_2;
          integer_sum = ++g_180FFF760;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
      }
      while ( iteration_count < integer_quotient_2 );
    }
    scaled_index = (int)*buffer_cursor;
    *state_address = integer_sum;
    glBindBuffer(34963, dword_140404A6C[2 * scaled_index + 283793814]);
    result = ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))glBufferData)(34963, 12 * g_180FFF760, &g_180FFF764, 35044);
    rol4_result = __ROL4__(rol4_result, 1);
    state_address += 24582;
    ++buffer_cursor;
    --remaining_count;
  }
  while ( remaining_count );
  return result;
}

//----- (00000001400D40C0) ----------------------------------------------------
double            sub_1400D40C0(double result)
{
  int state_word;
  __int64 scaled_index;
  __int64 allocated_buffer;
  signed int iteration_count;
  unsigned __int64 iteration_count_2;
  __int64 running_total;
  signed int iteration_count_3;
  __int64 i;
  float state_address;
  float state_address_2;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  signed int scaled_index_2;

  state_word = g_183EBF154;
  scaled_index = 44LL * (int)g_183EBF154;
  dword_140404A6C[scaled_index + 284024933] = 2048;
  dword_140404A6C[scaled_index + 284024934] = 2048;
  dword_140404A6C[scaled_index + 284024935] = 1;
  dword_140404A6C[scaled_index + 284024936] = 6408;
  dword_140404A6C[scaled_index + 284024937] = 6408;
  dword_140404A6C[scaled_index + 284024943] = 0;
  dword_140404A6C[scaled_index + 284024938] = 33071;
  dword_140404A6C[scaled_index + 284024939] = 33071;
  dword_140404A6C[scaled_index + 284024940] = 9729;
  dword_140404A6C[scaled_index + 284024941] = 9987;
  if ( *(_QWORD *)&dword_140404A6C[scaled_index + 284024945]
    || (allocated_buffer = sr_path_malloc(0x1000000), (*(_QWORD *)&dword_140404A6C[scaled_index + 284024945] = allocated_buffer) != 0) )
  {
    iteration_count = 0;
    if ( (int)dword_140404A6C[scaled_index + 284024934] > 0 )
    {
      iteration_count_2 = -1;
      running_total = 0;
      do
      {
        iteration_count_3 = 0;
        for ( i = 0;
              iteration_count_3 < (int)dword_140404A6C[scaled_index + 284024933];
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index + 284024945] + 4LL * scaled_index_2) = ((int)(float)((float)(scaled_ratio * 127.0)
                                                                                                 + 128.0) << 8)
                                                                                   - ((int)(float)((float)(scaled_ratio_3 * 127.0)
                                                                                                 + -128.0) << 16)
                                                                                   - 0x1000000
                                                                                   + (int)(float)((float)(scaled_ratio_2 * 127.0)
                                                                                                + 128.0) )
        {
          state_address = 0.0;
          state_address_2 = 0.0;
          if ( (unsigned __int64)(i - 1) <= 0x7FE )
            state_address = (float)(*(float *)&dword_140404A6C[running_total + 188872559 + i] - *(float *)&dword_140404A6C[running_total + 188872561 + i])
               * 0.5;
          if ( iteration_count_2 <= 0x7FE )
            state_address_2 = (float)(*(float *)&dword_140404A6C[running_total + 188874609 + i] - *(float *)&dword_140404A6C[running_total + 188870511 + i])
                * 0.5;
          square_root = fsqrt((float)((float)(state_address * state_address) + 1.0) + (float)(state_address_2 * state_address_2));
          if ( square_root == 0.0 )
          {
            scaled_ratio_2 = 0.0;
            scaled_ratio = 0.0;
            scaled_ratio_3 = 0.0;
          }
          else
          {
            scaled_ratio = 1.0 / square_root;
            scaled_ratio_2 = state_address * (float)(1.0 / square_root);
            scaled_ratio_3 = state_address_2 * (float)(1.0 / square_root);
          }
          ++i;
          scaled_index_2 = iteration_count_3 + dword_140404A6C[scaled_index + 284024933] * (dword_140404A6C[scaled_index + 284024934] - iteration_count - 1);
          ++iteration_count_3;
        }
        ++iteration_count;
        ++iteration_count_2;
        running_total += 2049;
      }
      while ( iteration_count < (int)dword_140404A6C[scaled_index + 284024934] );
    }
    sub_14014D3E0(state_word, 0);
    return ((double (*)(_QWORD))glGenerateMipmap)(3553);
  }
  return result;
}

//----- (00000001400D4740) ----------------------------------------------------
__int64            sub_1400D4740(__int64 a1)
{
  return ((__int64 (           *)(_QWORD,      char *, __int64, char *,      char *, int))ShellExecuteA)(
           0,
           "open",
           a1,
           Parameters,
           "c:\\",
           1);
}

// 14026E558: invalid function type 'HINSTANCE (__stdcall *ShellExecuteA)(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd)' has been ignored

//----- (00000001400D47A0) ----------------------------------------------------
__m128            sub_1400D47A0(float a1, float a2, int a3)
{
  __int128 masked_bits;
  int input_value;
  int record_word_offset;
  int masked_bits_2;
  int shifted_bits;
  float component_delta;
  int shifted_bits_2;
  int record_word_offset_2;
  int masked_bits_3;
  int shifted_bits_3;
  int shifted_bits_4;

  masked_bits = 0x3F800000u;
  input_value = (int)a1;
  record_word_offset = 57 * (int)a2;
  masked_bits_2 = a3 & ((int)a1 + 1);
  shifted_bits = 15731 * (((record_word_offset + input_value) << 13) ^ (record_word_offset + input_value)) * (((record_word_offset + input_value) << 13) ^ (record_word_offset + input_value));
  component_delta = a1 - (float)(int)a1;
  shifted_bits_2 = (((masked_bits_2 + record_word_offset) << 13) ^ (masked_bits_2 + record_word_offset)) * (((masked_bits_2 + record_word_offset) << 13) ^ (masked_bits_2 + record_word_offset));
  record_word_offset_2 = 57 * (a3 & ((int)a2 + 1));
  masked_bits_3 = ((15731 * shifted_bits_2 + 789221) * (15731 * shifted_bits_2 + 789221) - 771171059) & 0x7FFFFFFF;
  shifted_bits_3 = (((record_word_offset_2 + masked_bits_2) << 13) ^ (record_word_offset_2 + masked_bits_2)) * (((record_word_offset_2 + masked_bits_2) << 13) ^ (record_word_offset_2 + masked_bits_2));
  shifted_bits_4 = 15731 * (((record_word_offset_2 + input_value) << 13) ^ (record_word_offset_2 + input_value)) * (((record_word_offset_2 + input_value) << 13) ^ (record_word_offset_2 + input_value)) + 789221;
  *(float *)&masked_bits = (float)((float)((float)((float)(1.0
                                                - (float)((float)(((shifted_bits + 789221) * (shifted_bits + 789221) - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * (float)(1.0 - component_delta))
                                + (float)((float)(1.0 - (float)((float)masked_bits_3 * 9.3132257e-10)) * component_delta))
                        * (float)(1.0 - (float)(a2 - (float)(int)a2)))
                + (float)((float)((float)((float)(1.0
                                                - (float)((float)((shifted_bits_4 * shifted_bits_4 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                        * (float)(1.0 - component_delta))
                                + (float)((float)(1.0
                                                - (float)((float)(((15731 * shifted_bits_3 + 789221) * (15731 * shifted_bits_3 + 789221)
                                                                 - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * component_delta))
                        * (float)(a2 - (float)(int)a2));
  return (__m128)masked_bits;
}

//----- (00000001400D4960) ----------------------------------------------------
void sub_1400D4960()
{
  g_175FD13A0 = xmmword_140279810;
  g_175FD13E4 = 1061158912;
  g_175FD13E0 = 1115684864;
  g_175FD13B0 = xmmword_140279710;
  g_175FD13C0 = xmmword_140279490;
  g_175FD13D0 = xmmword_140279490;
  sr_math_mat3_rotate_rows((__int64)&g_175FD13BC, (float *)&g_175FD13BC, sr_export_float_lane_container(1070141403));
  g_16E486868 = 3;
  g_16E48686C = 3;
  g_16E486848 = -1;
  g_16E486864 = -1;
}

//----- (00000001400D4A90) ----------------------------------------------------
__int64            sub_1400D4A90(int a1, int a2)
{
  __int64 packed_word_bits;
  __int64 packed_word_bits_2;
  unsigned int state_word;
  int iteration_count;
  unsigned int *state_address;
  int scaled_index;
  __int64 scaled_index_2;
  unsigned int *state_address_2;
  int saved_packed_word_bits;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  int saved_packed_word_bits_2;

  packed_word_bits = a2;
  packed_word_bits_2 = a1;
  if ( a1 == a2 )
    return 0xFFFFFFFFLL;
  state_word = g_16E48987C;
  iteration_count = 0;
  if ( (int)g_16E48987C <= 0 )
  {
LABEL_9:
    scaled_index_2 = 3 * packed_word_bits_2;
    state_address_2 = &dword_140404A6C[3 * packed_word_bits + 193070965];
    if ( dword_140404A6C[3 * packed_word_bits_2 + 193070980] == state_address_2[15] )
    {
      dword_140404A6C[13 * g_16E48987C + 193074055] = 1;
      state_word = g_16E48987C;
      if ( (int)dword_140404A6C[scaled_index_2 + 193070982] > (int)state_address_2[17] )
      {
        saved_packed_word_bits = packed_word_bits_2;
        LODWORD(packed_word_bits_2) = packed_word_bits;
        LODWORD(packed_word_bits) = saved_packed_word_bits;
      }
    }
    else if ( dword_140404A6C[scaled_index_2 + 193070982] != state_address_2[17] )
    {
      return 0xFFFFFFFFLL;
    }
    scaled_index_3 = 3LL * (int)packed_word_bits_2;
    scaled_index_4 = 3LL * (int)packed_word_bits;
    if ( dword_140404A6C[scaled_index_3 + 193070982] == dword_140404A6C[scaled_index_4 + 193070982] )
    {
      dword_140404A6C[13 * state_word + 193074055] = 0;
      state_word = g_16E48987C;
      if ( (int)dword_140404A6C[scaled_index_3 + 193070980] > (int)dword_140404A6C[scaled_index_4 + 193070980] )
      {
        saved_packed_word_bits_2 = packed_word_bits_2;
        LODWORD(packed_word_bits_2) = packed_word_bits;
        LODWORD(packed_word_bits) = saved_packed_word_bits_2;
      }
    }
    dword_140404A6C[13 * state_word + 193074053] = packed_word_bits_2;
    dword_140404A6C[13 * g_16E48987C + 193074054] = packed_word_bits;
    dword_140404A6C[13 * g_16E48987C + 193074056] = g_16E486868;
    dword_140404A6C[13 * g_16E48987C + 193074057] = *(unsigned int *)&g_16E48686C;
    strcpy((char *)&dword_140404A6C[13 * g_16E48987C + 193074058], "Street");
    return g_16E48987C++;
  }
  state_address = &g_16E489884;
  while ( 1 )
  {
    scaled_index = *(state_address - 1);
    if ( scaled_index == (_DWORD)packed_word_bits_2 && *state_address == (_DWORD)packed_word_bits )
      break;
    if ( scaled_index == (_DWORD)packed_word_bits && *state_address == (_DWORD)packed_word_bits_2 )
      break;
    ++iteration_count;
    state_address += 13;
    if ( iteration_count >= (int)g_16E48987C )
      goto LABEL_9;
  }
  return (unsigned int)iteration_count;
}

//----- (00000001400D4C40) ----------------------------------------------------
void            sub_1400D4C40(unsigned int a1, int a2, int a3, int a4, unsigned int a5, _WORD *a6)
{
  int shifted_bits;
  char input_value;
  int shifted_bits_2;
  int shifted_bits_3;
  int iteration_count;
  char input_value_2;
  char input_value_3;
  signed int saved_iteration_count;
  unsigned int *state_address;
  __int64 masked_bits;
  __int64 masked_bits_2;
  unsigned int masked_bits_3;
  __int64 scaled_index;

  shifted_bits = a2 >> 3;
  input_value = a4;
  shifted_bits_2 = a3 >> 3;
  shifted_bits_3 = a4 >> 3;
  iteration_count = 0;
  input_value_2 = a3;
  input_value_3 = a2;
  saved_iteration_count = -1;
  if ( (int)g_1726DA088 > 0 )
  {
    state_address = &g_1726DA090;
    do
    {
      if ( *(state_address - 1) == a1 && *state_address == shifted_bits && state_address[1] == shifted_bits_2 && state_address[2] == shifted_bits_3 )
        saved_iteration_count = iteration_count;
      ++iteration_count;
      state_address += 3588;
    }
    while ( iteration_count < (int)g_1726DA088 );
    if ( saved_iteration_count != -1 )
      goto LABEL_12;
  }
  if ( (int)g_1726DA088 < 4096 )
  {
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[3588 * g_1726DA088 + 210457992]), 0, 0x3810u);
    dword_140404A6C[3588 * g_1726DA088 + 210457992] = a1;
    dword_140404A6C[3588 * g_1726DA088 + 210457993] = shifted_bits;
    dword_140404A6C[3588 * g_1726DA088 + 210457994] = shifted_bits_2;
    dword_140404A6C[3588 * g_1726DA088 + 210457995] = shifted_bits_3;
    saved_iteration_count = g_1726DA088++;
    if ( saved_iteration_count != -1 )
    {
LABEL_12:
      masked_bits = input_value_2 & 7;
      masked_bits_2 = input_value & 7;
      masked_bits_3 = input_value_3 & 7;
      dword_140404A6C[3588 * saved_iteration_count + 210457996 + 64 * (_DWORD)masked_bits + 8 * (_DWORD)masked_bits_2 + masked_bits_3] = a5;
      scaled_index = 2 * (masked_bits_3 + 897LL * saved_iteration_count + 8 * (masked_bits_2 + 8 * masked_bits));
      LOWORD(dword_140404A6C[2 * scaled_index + 210458508]) = *a6;
      HIWORD(dword_140404A6C[2 * scaled_index + 210458508]) = a6[1];
      LOWORD(dword_140404A6C[2 * scaled_index + 210458509]) = a6[2];
      HIWORD(dword_140404A6C[2 * scaled_index + 210458509]) = a6[3];
      LOWORD(dword_140404A6C[2 * scaled_index + 210458510]) = a6[4];
      HIWORD(dword_140404A6C[2 * scaled_index + 210458510]) = a6[5];
      LOWORD(dword_140404A6C[2 * scaled_index + 210458511]) = a6[6];
      HIWORD(dword_140404A6C[2 * scaled_index + 210458511]) = a6[7];
    }
  }
}

//----- (00000001400D4E50) ----------------------------------------------------
void            sub_1400D4E50(unsigned int a1, int a2, int a3, int a4, unsigned int a5)
{
  int shifted_bits;
  int shifted_bits_2;
  char input_value;
  int shifted_bits_3;
  int iteration_count;
  char input_value_2;
  char input_value_3;
  unsigned int saved_iteration_count;
  unsigned int *state_address;

  shifted_bits = a4 >> 3;
  shifted_bits_2 = a2 >> 3;
  input_value = a4;
  shifted_bits_3 = a3 >> 3;
  iteration_count = 0;
  input_value_2 = a3;
  input_value_3 = a2;
  saved_iteration_count = -1;
  if ( (int)g_1726DA088 > 0 )
  {
    state_address = &g_1726DA090;
    do
    {
      if ( *(state_address - 1) == a1 && *state_address == shifted_bits_2 && state_address[1] == shifted_bits_3 && state_address[2] == shifted_bits )
        saved_iteration_count = iteration_count;
      ++iteration_count;
      state_address += 3588;
    }
    while ( iteration_count < (int)g_1726DA088 );
    if ( saved_iteration_count != -1 )
      goto LABEL_12;
  }
  if ( (int)g_1726DA088 < 4096 )
  {
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[3588 * g_1726DA088 + 210457992]), 0, 0x3810u);
    dword_140404A6C[3588 * g_1726DA088 + 210457992] = a1;
    dword_140404A6C[3588 * g_1726DA088 + 210457993] = shifted_bits_2;
    dword_140404A6C[3588 * g_1726DA088 + 210457994] = shifted_bits_3;
    dword_140404A6C[3588 * g_1726DA088 + 210457995] = shifted_bits;
    saved_iteration_count = g_1726DA088++;
    if ( saved_iteration_count != -1 )
LABEL_12:
      dword_140404A6C[3588 * saved_iteration_count + 210461068 + 64 * (input_value_2 & 7) + 8 * (input_value & 7) + (input_value_3 & 7)] = a5;
  }
}

//----- (00000001400D4FC0) ----------------------------------------------------
__int64            sub_1400D4FC0(signed int a1, int a2, signed int a3, int a4, unsigned int a5)
{
  int shifted_bits;
  int shifted_bits_2;
  int iteration_count;
  int shifted_bits_3;
  unsigned int saved_iteration_count;
  unsigned int *state_address;
  __int64 masked_bits;
  unsigned int hibyte_result;
  unsigned int scaled_index;
  unsigned __int64 shifted_bits_4;
  unsigned int masked_bits_2;
  __int64 scaled_index_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D4FC0[80];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400D4FC0 + 0)) /* [rsp+0h] */
#define integer_sum (*(unsigned int (*))(void *)(sr_frame_1400D4FC0 + 32)) /* [rsp+20h] */
#define state_address_2 (*(__int16 * (*))(void *)(sr_frame_1400D4FC0 + 40)) /* [rsp+28h] */
#define masked_bits_3 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 50)) /* [rsp+32h] */
#define unused_written_slot_2 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 52)) /* [rsp+34h] */
#define unused_written_slot_3 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 54)) /* [rsp+36h] */
#define unused_written_slot_4 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 56)) /* [rsp+38h] */
#define unused_written_slot_5 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 58)) /* [rsp+3Ah] */
#define unused_written_slot_6 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 60)) /* [rsp+3Ch] */
#define unused_written_slot_7 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 62)) /* [rsp+3Eh] */
#define unused_frame_slot_64 (*(__int64 (*))(void *)(sr_frame_1400D4FC0 + 64)) /* [rsp+40h] */

  shifted_bits = a2 >> 3;
  shifted_bits_2 = a3 >> 3;
  iteration_count = 0;
  shifted_bits_3 = a4 >> 3;
  saved_iteration_count = -1;
  if ( (int)g_1726DA088 > 0 )
  {
    state_address = &g_1726DA090;
    do
    {
      if ( *(state_address - 1) == a1 && *state_address == shifted_bits && state_address[1] == shifted_bits_2 && state_address[2] == shifted_bits_3 )
        saved_iteration_count = iteration_count;
      ++iteration_count;
      state_address += 3588;
    }
    while ( iteration_count < (int)g_1726DA088 );
    if ( saved_iteration_count != -1 )
      goto LABEL_12;
  }
  if ( (int)g_1726DA088 < 4096 )
  {
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[3588 * g_1726DA088 + 210457992]), 0, 0x3810u);
    dword_140404A6C[3588 * g_1726DA088 + 210457992] = a1;
    dword_140404A6C[3588 * g_1726DA088 + 210457993] = shifted_bits;
    dword_140404A6C[3588 * g_1726DA088 + 210457994] = shifted_bits_2;
    dword_140404A6C[3588 * g_1726DA088 + 210457995] = shifted_bits_3;
    saved_iteration_count = g_1726DA088++;
    if ( saved_iteration_count != -1 )
    {
LABEL_12:
      masked_bits = a5 & 0xFFF;
      dword_140404A6C[3588 * saved_iteration_count + 210460556 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
      hibyte_result = HIBYTE(a5) & 3;
      scaled_index = dword_140404A6C[4242 * masked_bits + 193082775];
      shifted_bits_4 = (((unsigned __int64)a5 >> 16) & 0x1F) - 1;
      masked_bits_2 = -hibyte_result & 3;
      scaled_index_2 = 16968 * masked_bits + 528 * shifted_bits_4;
      masked_bits_3 = *(_WORD *)((char *)&g_16E4922D0 + scaled_index_2);
      if ( (scaled_index & 0xE0000000) == 0x40000000 )
      {
        unused_written_slot = *((_WORD *)&dword_140404A6C[4242 * masked_bits + 193082905 + 132 * shifted_bits_4] + masked_bits_2 + 1);
        unused_written_slot_2 = *((_WORD *)&dword_140404A6C[4242 * masked_bits + 193082905 + 132 * shifted_bits_4] + (((unsigned __int8)masked_bits_2 + 1) & 3) + 1);
        unused_written_slot_3 = *((_WORD *)&dword_140404A6C[4242 * masked_bits + 193082905 + 132 * shifted_bits_4] + (((unsigned __int8)masked_bits_2 - 2) & 3) + 1);
        unused_written_slot_4 = *((_WORD *)&dword_140404A6C[4242 * masked_bits + 193082905 + 132 * shifted_bits_4] + (((unsigned __int8)masked_bits_2 - 1) & 3) + 1);
        unused_written_slot_5 = *(_WORD *)((char *)&g_16E4922D8 + scaled_index_2 + 2);
        unused_written_slot_6 = *(_WORD *)((char *)&g_16E4922DC + scaled_index_2);
        unused_written_slot_7 = *(_WORD *)((char *)&g_16E4922DC + scaled_index_2 + 2);
        state_address_2 = &masked_bits_3;
        integer_sum = 0x40000000;
      }
      else
      {
        unused_written_slot = *(_WORD *)((char *)&g_16E4922D0 + scaled_index_2 + 2);
        unused_written_slot_2 = *(_WORD *)((char *)&g_16E4922D4 + scaled_index_2);
        unused_written_slot_3 = *(_WORD *)((char *)&g_16E4922D4 + scaled_index_2 + 2);
        unused_written_slot_4 = *(_WORD *)((char *)&g_16E4922D8 + scaled_index_2);
        unused_written_slot_5 = *(_WORD *)((char *)&g_16E4922D8 + scaled_index_2 + 2);
        unused_written_slot_6 = *(_WORD *)((char *)&g_16E4922DC + scaled_index_2);
        unused_written_slot_7 = *(_WORD *)((char *)&g_16E4922DC + scaled_index_2 + 2);
        state_address_2 = &masked_bits_3;
        integer_sum = scaled_index + hibyte_result;
      }
      sub_14000F830(a1, a2, a3, a4, integer_sum, state_address_2);
    }
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef unused_frame_slot_0
#undef integer_sum
#undef state_address_2
#undef masked_bits_3
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef unused_written_slot_7
#undef unused_frame_slot_64

//----- (00000001400D52E0) ----------------------------------------------------
__int64            sub_1400D52E0(unsigned int a1, int a2, int a3, int a4)
{
  int shifted_bits;
  int iteration_count;
  int shifted_bits_2;
  int shifted_bits_3;
  __int64 result;
  unsigned int *state_address;

  shifted_bits = a2 >> 3;
  iteration_count = 0;
  shifted_bits_2 = a3 >> 3;
  shifted_bits_3 = a4 >> 3;
  result = 0xFFFFFFFFLL;
  if ( (int)g_1726DA088 <= 0 )
    goto LABEL_10;
  state_address = &g_1726DA090;
  do
  {
    if ( *(state_address - 1) == a1 && *state_address == shifted_bits && state_address[1] == shifted_bits_2 && state_address[2] == shifted_bits_3 )
      result = (unsigned int)iteration_count;
    ++iteration_count;
    state_address += 3588;
  }
  while ( iteration_count < (int)g_1726DA088 );
  if ( (_DWORD)result == -1 )
  {
LABEL_10:
    if ( (int)g_1726DA088 < 4096 )
    {
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[3588 * g_1726DA088 + 210457992]), 0, 0x3810u);
      dword_140404A6C[3588 * g_1726DA088 + 210457992] = a1;
      dword_140404A6C[3588 * g_1726DA088 + 210457993] = shifted_bits;
      dword_140404A6C[3588 * g_1726DA088 + 210457994] = shifted_bits_2;
      dword_140404A6C[3588 * g_1726DA088 + 210457995] = shifted_bits_3;
      return g_1726DA088++;
    }
  }
  return result;
}

//----- (00000001400D5400) ----------------------------------------------------
void            sub_1400D5400(int a1, int a2, int a3, int a4)
{
  char input_value;
  int shifted_bits;
  int iteration_count;
  int saved_iteration_count;
  unsigned int *state_address;
  __int64 scaled_index;
  int masked_bits;
  __int64 iteration_count_2;
  __int64 masked_bits_2;
  unsigned int *record_byte_offset;
  __int64 iteration_count_3;
  unsigned int *record_byte_offset_2;
  __int64 iteration_count_4;
  unsigned int *buffer_cursor;

  input_value = a3;
  shifted_bits = a3 >> 3;
  iteration_count = 0;
  saved_iteration_count = -1;
  if ( (int)g_1726DA088 > 0 )
  {
    state_address = &g_1726DA090;
    do
    {
      if ( *(state_address - 1) == a1 && *state_address == a2 >> 3 && state_address[1] == shifted_bits && state_address[2] == a4 >> 3 )
        saved_iteration_count = iteration_count;
      ++iteration_count;
      state_address += 3588;
    }
    while ( iteration_count < (int)g_1726DA088 );
    if ( saved_iteration_count != -1 )
    {
      scaled_index = 3588LL * saved_iteration_count;
      masked_bits = (a4 & 7) + 8 * (input_value & 7);
      iteration_count_2 = 0;
      masked_bits_2 = 3588LL * saved_iteration_count + (a2 & 7u) + 8 * masked_bits;
      record_byte_offset = &dword_140404A6C[scaled_index + 210457996];
      dword_140404A6C[masked_bits_2 + 210457996] = 0;
LABEL_11:
      iteration_count_3 = 0;
      record_byte_offset_2 = record_byte_offset;
LABEL_12:
      iteration_count_4 = 0;
      buffer_cursor = record_byte_offset_2;
      while ( !*buffer_cursor )
      {
        ++iteration_count_4;
        ++buffer_cursor;
        if ( iteration_count_4 >= 8 )
        {
          ++iteration_count_3;
          record_byte_offset_2 += 8;
          if ( iteration_count_3 < 8 )
            goto LABEL_12;
          ++iteration_count_2;
          record_byte_offset += 64;
          if ( iteration_count_2 >= 8 )
          {
            --g_1726DA088;
            crt_memcpy(
              (__m128i *)&dword_140404A6C[scaled_index + 210457992],
              (     __m128i *)&dword_140404A6C[3588 * g_1726DA088 + 210457992],
              0x3810u);
            return;
          }
          goto LABEL_11;
        }
      }
    }
  }
}

//----- (00000001400D5560) ----------------------------------------------------
void            sub_1400D5560(int a1)
{
  __int64 input_value;
  unsigned int state_word;
  signed int state_word_2;
  int iteration_count;
  signed int iteration_count_2;
  __int64 iteration_count_3;
  unsigned int *state_address;
  __int64 scaled_index;
  __int64 integer_difference;
  __int64 scaled_index_2;
  unsigned int *state_address_2;

  input_value = a1;
  if ( a1 >= 0 )
  {
    state_word = g_16E486878;
    if ( (int)input_value < (int)g_16E486878 )
    {
      state_word_2 = g_16E48987C;
      iteration_count = 0;
      iteration_count_2 = 0;
      if ( (int)g_16E48987C > 0 )
      {
        iteration_count_3 = 0;
        state_address = &g_16E489880;
        do
        {
          if ( *state_address == (_DWORD)input_value || state_address[1] == (_DWORD)input_value )
          {
            if ( iteration_count_3 >= 0 )
            {
              if ( iteration_count_2 >= state_word_2 )
                break;
              g_16E48987C = state_word_2 - 1;
              scaled_index = 13LL * (state_word_2 - 1);
              *(_OWORD *)state_address = *(_OWORD *)&dword_140404A6C[scaled_index + 193074053];
              *((_OWORD *)state_address + 1) = *(_OWORD *)&dword_140404A6C[scaled_index + 193074057];
              *((_OWORD *)state_address + 2) = *(_OWORD *)&dword_140404A6C[scaled_index + 193074061];
              state_address[12] = dword_140404A6C[scaled_index + 193074065];
              state_word_2 = g_16E48987C;
            }
          }
          else
          {
            ++iteration_count_2;
            ++iteration_count_3;
            state_address += 13;
          }
        }
        while ( iteration_count_2 < state_word_2 );
        state_word = g_16E486878;
      }
      g_16E486878 = state_word - 1;
      integer_difference = (int)(state_word - 1);
      scaled_index_2 = 3 * input_value;
      *(_QWORD *)&dword_140404A6C[scaled_index_2 + 193070980] = *(_QWORD *)&dword_140404A6C[3 * integer_difference + 193070980];
      dword_140404A6C[scaled_index_2 + 193070982] = dword_140404A6C[3 * integer_difference + 193070982];
      if ( (int)g_16E48987C > 0 )
      {
        state_address_2 = &g_16E489884;
        do
        {
          if ( *(state_address_2 - 1) == g_16E486878 )
            *(state_address_2 - 1) = input_value;
          if ( *state_address_2 == g_16E486878 )
            *state_address_2 = input_value;
          ++iteration_count;
          state_address_2 += 13;
        }
        while ( iteration_count < (int)g_16E48987C );
      }
    }
  }
}

//----- (00000001400D5690) ----------------------------------------------------
void            sub_1400D5690(signed int a1, signed int a2, signed int a3, signed int a4)
{
  int shifted_bits;
  int iteration_count;
  int saved_iteration_count;
  unsigned int *state_address;
  __int64 iteration_count_2;
  __int64 scaled_index;
  __int64 masked_bits;
  unsigned int *record_byte_offset;
  __int64 iteration_count_3;
  unsigned int *record_byte_offset_2;
  __int64 iteration_count_4;
  unsigned int *buffer_cursor;

  shifted_bits = a3 >> 3;
  iteration_count = 0;
  saved_iteration_count = -1;
  if ( (int)g_1726DA088 > 0 )
  {
    state_address = &g_1726DA090;
    do
    {
      if ( *(state_address - 1) == a1 && *state_address == a2 >> 3 && state_address[1] == shifted_bits && state_address[2] == a4 >> 3 )
        saved_iteration_count = iteration_count;
      ++iteration_count;
      state_address += 3588;
    }
    while ( iteration_count < (int)g_1726DA088 );
    if ( saved_iteration_count != -1 )
    {
      iteration_count_2 = 0;
      scaled_index = 3588LL * saved_iteration_count;
      masked_bits = 3588LL * saved_iteration_count + (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7u));
      record_byte_offset = &dword_140404A6C[scaled_index + 210460556];
      dword_140404A6C[masked_bits + 210460556] = 0;
LABEL_11:
      iteration_count_3 = 0;
      record_byte_offset_2 = record_byte_offset;
LABEL_12:
      iteration_count_4 = 0;
      buffer_cursor = record_byte_offset_2;
      while ( !*(buffer_cursor - 2560) && !*buffer_cursor && !buffer_cursor[512] )
      {
        ++iteration_count_4;
        ++buffer_cursor;
        if ( iteration_count_4 >= 8 )
        {
          ++iteration_count_3;
          record_byte_offset_2 += 8;
          if ( iteration_count_3 < 8 )
            goto LABEL_12;
          ++iteration_count_2;
          record_byte_offset += 64;
          if ( iteration_count_2 >= 8 )
          {
            --g_1726DA088;
            crt_memcpy(
              (__m128i *)&dword_140404A6C[scaled_index + 210457992],
              (     __m128i *)&dword_140404A6C[3588 * g_1726DA088 + 210457992],
              0x3810u);
            break;
          }
          goto LABEL_11;
        }
      }
      sub_140017AC0(a1, a2, a3, a4, 0);
    }
  }
}

//----- (00000001400D5820) ----------------------------------------------------
__m128i *           sub_1400D5820(__int64 a1, int a2)
{
  __int64 record_word_offset;
  __int64 iteration_count;
  unsigned int *record_byte_offset;
  __int64 iteration_count_2;
  __m128i *saved_record_byte_offset;
  __int64 iteration_count_3;
  __m128i *result;

  record_word_offset = 3588LL * a2;
  iteration_count = 0;
  record_byte_offset = &dword_140404A6C[record_word_offset + 210460556];
LABEL_2:
  iteration_count_2 = 0;
  saved_record_byte_offset = (__m128i *)record_byte_offset;
LABEL_3:
  iteration_count_3 = 0;
  result = saved_record_byte_offset;
  while ( !SR_VEC_LANES(128, result[-640], i32)[0] && !SR_VEC_PTR_LANES(128, result, i32)[0] && !SR_VEC_LANES(128, result[128], i32)[0] )
  {
    ++iteration_count_3;
    result = (__m128i *)((char *)result + 4);
    if ( iteration_count_3 >= 8 )
    {
      ++iteration_count_2;
      saved_record_byte_offset += 2;
      if ( iteration_count_2 < 8 )
        goto LABEL_3;
      ++iteration_count;
      record_byte_offset += 64;
      if ( iteration_count >= 8 )
      {
        --g_1726DA088;
        return crt_memcpy(
                 (__m128i *)&dword_140404A6C[record_word_offset + 210457992],
                 (     __m128i *)&dword_140404A6C[3588 * g_1726DA088 + 210457992],
                 0x3810u);
      }
      goto LABEL_2;
    }
  }
  return result;
}

//----- (00000001400D5950) ----------------------------------------------------
__int64            sub_1400D5950(int a1, int a2, int a3, int a4)
{
  char input_value;
  int shifted_bits;
  int iteration_count;
  int saved_iteration_count;
  unsigned int *state_address;

  input_value = a4;
  shifted_bits = a4 >> 3;
  iteration_count = 0;
  saved_iteration_count = -1;
  if ( (int)g_1726DA088 <= 0 )
    return 0;
  state_address = &g_1726DA090;
  do
  {
    if ( *(state_address - 1) == a1 && *state_address == a2 >> 3 && state_address[1] == a3 >> 3 && state_address[2] == shifted_bits )
      saved_iteration_count = iteration_count;
    ++iteration_count;
    state_address += 3588;
  }
  while ( iteration_count < (int)g_1726DA088 );
  if ( saved_iteration_count == -1 )
    return 0;
  else
    return dword_140404A6C[3588 * saved_iteration_count + 210457996 + 64 * (a3 & 7) + 8 * (input_value & 7) + (a2 & 7)];
}

//----- (00000001400D8790) ----------------------------------------------------
_BOOL8            sub_1400D8790(float *a1, __int64 a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  int *record_byte_offset;
  int *running_total;
  int iteration_count;
  __int64 scaled_index;
  float scaled_value;
  float source_component_y;
  float source_component_z;
  float scaled_value_2;
  float source_component_y_2;
  float source_component_z_2;
  __int64 loaded_word;
  float weighted_sum;
  __int64 scaled_index_2;
  __int64 table_value;
  float weighted_sum_2;
  __int64 scaled_index_3;
  __int64 table_value_2;
  float weighted_sum_3;
  float state_address;
  float weighted_sum_4;
  float state_address_2;
  _BOOL8 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D8790[80];
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400D8790 + 0)) /* [rsp+40h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400D8790 + 16)) /* [rsp+50h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_1400D8790 + 32)) /* [rsp+60h] */
#define float_buffer_4 (*(float (*)[8])(void *)(sr_frame_1400D8790 + 48)) /* [rsp+70h] */

  record_byte_offset = dword_1402B3664;
  running_total = dword_1402B3558;
  iteration_count = 0;
  while ( 1 )
  {
    scaled_index = 3LL * *(record_byte_offset - 1);
    scaled_value = *a6;
    source_component_y = a6[1];
    source_component_z = a6[2];
    scaled_value_2 = *a7;
    source_component_y_2 = a7[1];
    source_component_z_2 = a7[2];
    loaded_word = *record_byte_offset;
    float_buffer_2[0] = (float)(*a7 * *(float *)&dword_1402B34F0[3 * *(record_byte_offset - 1)]) + *a6;
    float_buffer_2[1] = (float)(source_component_y_2 * *(float *)&dword_1402B34F0[scaled_index + 1]) + source_component_y;
    weighted_sum = source_component_z_2 * *(float *)&dword_1402B34F0[scaled_index + 2];
    scaled_index_2 = 3 * loaded_word;
    table_value = record_byte_offset[1];
    float_buffer_2[2] = weighted_sum + source_component_z;
    float_buffer_3[0] = (float)(scaled_value_2 * *(float *)&dword_1402B34F0[scaled_index_2]) + scaled_value;
    float_buffer_3[1] = (float)(source_component_y_2 * *(float *)&dword_1402B34F0[scaled_index_2 + 1]) + source_component_y;
    weighted_sum_2 = source_component_z_2 * *(float *)&dword_1402B34F0[scaled_index_2 + 2];
    scaled_index_3 = 3 * table_value;
    table_value_2 = record_byte_offset[2];
    float_buffer_3[2] = weighted_sum_2 + source_component_z;
    float_buffer[0] = (float)(scaled_value_2 * *(float *)&dword_1402B34F0[scaled_index_3]) + scaled_value;
    float_buffer[1] = (float)(source_component_y_2 * *(float *)&dword_1402B34F0[scaled_index_3 + 1]) + source_component_y;
    weighted_sum_3 = source_component_y_2 * *(float *)&dword_1402B34F0[3 * table_value_2 + 1];
    state_address = (float)(source_component_z_2 * *(float *)&dword_1402B34F0[scaled_index_3 + 2]) + source_component_z;
    weighted_sum_4 = source_component_z_2 * *(float *)&dword_1402B34F0[3 * table_value_2 + 2];
    state_address_2 = (float)(scaled_value_2 * *(float *)&dword_1402B34F0[3 * table_value_2]) + scaled_value;
    *(_DWORD *)a2 = *(running_total - 2);
    *(_DWORD *)(a2 + 4) = *(running_total - 1);
    *(_DWORD *)(a2 + 8) = *running_total;
    float_buffer[2] = state_address;
    float_buffer_4[0] = state_address_2;
    float_buffer_4[1] = weighted_sum_3 + source_component_y;
    float_buffer_4[2] = weighted_sum_4 + source_component_z;
    if ( sr_collision_line_triangle(a1, (float *)a2, a3, a4, a5, float_buffer_2, float_buffer_3, float_buffer) )
      break;
    result = sr_collision_line_triangle(a1, (float *)a2, a3, a4, a5, float_buffer_2, float_buffer, float_buffer_4);
    if ( result )
      break;
    ++iteration_count;
    record_byte_offset += 4;
    running_total += 3;
    if ( iteration_count >= 6 )
      return result;
  }
  return 1;
}
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4

//----- (00000001400D89E0) ----------------------------------------------------
_BOOL8            sub_1400D89E0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float a8)
{
  float source_component_x;
  float source_component_z;
  float source_component_x_2;
  float source_component_y;
  float source_component_z_2;
  float component_delta;
  float component_delta_2;
  float saved_distance;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D89E0[48];
#define distance (*(float (*))(void *)(sr_frame_1400D89E0 + 0)) /* [rsp+44h] */
#define on_a (*(float (*)[4])(void *)(sr_frame_1400D89E0 + 4)) /* [rsp+48h] */
#define on_b (*(float (*)[6])(void *)(sr_frame_1400D89E0 + 20)) /* [rsp+58h] */

  if ( sr_collision_segment_segment(on_a, on_b, &distance, a4, a5, a6, a7, a8) )
  {
    source_component_x = on_a[0];
    source_component_z = on_a[2];
    a1[1] = on_a[1];
    source_component_x_2 = on_b[0];
    a1[2] = source_component_z;
    source_component_y = on_b[1];
    *a1 = source_component_x;
    *a2 = source_component_x_2 - source_component_x;
    source_component_z_2 = on_b[2];
    a2[1] = source_component_y - a1[1];
    a2[2] = source_component_z_2 - a1[2];
    sr_math_vec3_normalize((__int64)a2, a2);
    component_delta = a5[1] - a4[1];
    component_delta_2 = a5[2] - a4[2];
    saved_distance = distance;
    *a3 = (float)((float)((float)((float)(*a1 - *a4) * (float)(*a5 - *a4)) + (float)((float)(a1[1] - a4[1]) * component_delta))
                + (float)((float)(a1[2] - a4[2]) * component_delta_2))
        / (float)((float)((float)(component_delta * component_delta) + (float)((float)(*a5 - *a4) * (float)(*a5 - *a4))) + (float)(component_delta_2 * component_delta_2));
  }
  else
  {
    saved_distance = 65536.0;
  }
  return saved_distance < 65536.0;
}
#undef distance
#undef on_a
#undef on_b

//----- (00000001400DA300) ----------------------------------------------------
_BOOL8            sub_1400DA300(__int64 a1, int *a2, float *a3, float *a4)
{
  int iteration_count;
  float *record_byte_offset;
  float source_float_6;
  float product_difference;
  float scaled_value;
  float source_float_4;
  float source_float_5;
  float source_component_w;
  float source_component_z;
  float source_component_y;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float component_delta_4;
  float component_delta_5;
  float product_difference_2;
  float product_difference_3;
  float product_difference_4;
  float product_difference_5;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float saved_t;
  float source_component_y_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA300[240];
#define normal (*(float (*)[2])(void *)(sr_frame_1400DA300 + 0)) /* [rsp+48h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400DA300 + 8)) /* [rsp+50h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400DA300 + 16)) /* [rsp+58h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400DA300 + 32)) /* [rsp+68h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_1400DA300 + 48)) /* [rsp+78h] */
#define point (*(float (*)[6])(void *)(sr_frame_1400DA300 + 64)) /* [rsp+88h] */
#define t (*(float (*))(void *)(sr_frame_1400DA300 + 224)) /* [rsp+128h] */

  iteration_count = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  if ( *a2 <= 0 )
    return 0;
  record_byte_offset = (float *)(a2 + 3);
  do
  {
    source_float_6 = record_byte_offset[6];
    product_difference = *(record_byte_offset - 1);
    scaled_value = *record_byte_offset;
    source_float_4 = record_byte_offset[4];
    source_float_5 = record_byte_offset[5];
    source_component_w = record_byte_offset[3];
    source_component_z = record_byte_offset[2];
    source_component_y = record_byte_offset[1];
    float_buffer_3[0] = *(record_byte_offset - 2);
    float_buffer_3[2] = scaled_value;
    float_buffer[2] = source_float_6;
    component_delta = source_float_6 - scaled_value;
    float_buffer_2[2] = source_component_w;
    component_delta_2 = source_component_w - scaled_value;
    float_buffer[0] = source_float_4;
    float_buffer[1] = source_float_5;
    component_delta_3 = source_float_5 - product_difference;
    float_buffer_3[1] = product_difference;
    float_buffer_2[1] = source_component_z;
    component_delta_4 = source_component_z - product_difference;
    float_buffer_2[0] = source_component_y;
    component_delta_5 = source_component_y - float_buffer_3[0];
    product_difference_2 = (float)(component_delta_3 * component_delta_2) - (float)(component_delta * component_delta_4);
    product_difference_3 = (float)(source_float_4 - float_buffer_3[0]) * component_delta_2;
    product_difference_4 = (float)((float)(source_float_4 - float_buffer_3[0]) * component_delta_4) - (float)(component_delta_3 * component_delta_5);
    product_difference_5 = (float)(component_delta * component_delta_5) - product_difference_3;
    square_root = fsqrt((float)((float)(product_difference_5 * product_difference_5) + (float)(product_difference_2 * product_difference_2)) + (float)(product_difference_4 * product_difference_4));
    if ( square_root == 0.0 )
    {
      normal[0] = 0.0;
      scaled_ratio = 0.0;
      unused_written_slot = 0.0;
      scaled_ratio_3 = 0.0;
      scaled_ratio_2 = 0.0;
    }
    else
    {
      scaled_ratio = product_difference_2 * (float)(1.0 / square_root);
      scaled_ratio_2 = product_difference_4 * (float)(1.0 / square_root);
      normal[0] = scaled_ratio;
      scaled_ratio_3 = product_difference_5 * (float)(1.0 / square_root);
      unused_written_slot = scaled_ratio_2;
    }
    normal[1] = scaled_ratio_3;
    if ( sr_collision_line_triangle(point, normal, &t, a3, a4, float_buffer_3, float_buffer_2, float_buffer) )
    {
      saved_t = t;
      if ( t < *(float *)(a1 + 24) )
      {
        source_component_y_2 = point[1];
        *(float *)a1 = point[0];
        *(float *)(a1 + 8) = point[2];
        *(float *)(a1 + 4) = source_component_y_2;
        *(float *)(a1 + 12) = scaled_ratio;
        *(float *)(a1 + 16) = scaled_ratio_3;
        *(float *)(a1 + 20) = scaled_ratio_2;
        *(float *)(a1 + 24) = saved_t;
      }
    }
    ++iteration_count;
    record_byte_offset += 12;
  }
  while ( iteration_count < *a2 );
  return *(float *)(a1 + 24) < 1.0;
}
#undef normal
#undef unused_written_slot
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef point
#undef t

//----- (00000001400DA580) ----------------------------------------------------
_BOOL8            sub_1400DA580(__int64 a1, __int64 a2, float *a3, float *a4)
{
  int iteration_count;
  int *record_byte_offset;
  float combined_products;
  float combined_products_2;
  __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 scaled_index_2;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float component_delta_4;
  float component_delta_5;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float saved_t;
  int comparison_operand;
  __int64 scaled_index_3;
  float weighted_sum_6;
  float weighted_sum_7;
  float saved_t_2;
  int comparison_operand_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA580[256];
#define normal (*(float (*)[2])(void *)(sr_frame_1400DA580 + 0)) /* [rsp+48h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400DA580 + 8)) /* [rsp+50h] */
#define point (*(int (*))(void *)(sr_frame_1400DA580 + 16)) /* [rsp+58h] */
#define frame_word_at_20 (*(int (*))(void *)(sr_frame_1400DA580 + 20)) /* [rsp+5Ch] */
#define frame_word_at_24 (*(int (*))(void *)(sr_frame_1400DA580 + 24)) /* [rsp+60h] */
#define float_buffer (*(float (*)[2])(void *)(sr_frame_1400DA580 + 32)) /* [rsp+68h] */
#define weighted_sum_8 (*(float (*))(void *)(sr_frame_1400DA580 + 40)) /* [rsp+70h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400DA580 + 48)) /* [rsp+78h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_1400DA580 + 64)) /* [rsp+88h] */
#define float_buffer_4 (*(float (*)[6])(void *)(sr_frame_1400DA580 + 80)) /* [rsp+98h] */
#define t (*(float (*))(void *)(sr_frame_1400DA580 + 240)) /* [rsp+138h] */

  iteration_count = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  if ( *(int *)(a2 + 32772) <= 0 )
    return 0;
  record_byte_offset = (int *)(a2 + 32784);
  do
  {
    combined_products = *(float *)(a2 + 16LL * *(record_byte_offset - 1) + 12);
    combined_products_2 = *(float *)(a2 + 16LL * *(record_byte_offset - 1) + 16);
    scaled_index = 2LL * *record_byte_offset;
    float_buffer_2[0] = *(float *)(a2 + 16LL * *(record_byte_offset - 1) + 8);
    float_buffer_2[2] = combined_products_2;
    float_buffer_2[1] = combined_products;
    weighted_sum = *(float *)(a2 + 8 * scaled_index + 16);
    weighted_sum_2 = *(float *)(a2 + 8 * scaled_index + 8);
    weighted_sum_3 = *(float *)(a2 + 8 * scaled_index + 12);
    scaled_index_2 = 2LL * record_byte_offset[1];
    float_buffer_3[2] = weighted_sum;
    component_delta = weighted_sum - combined_products_2;
    float_buffer_3[1] = weighted_sum_3;
    component_delta_2 = weighted_sum_3 - combined_products;
    float_buffer_3[0] = weighted_sum_2;
    component_delta_3 = weighted_sum_2 - float_buffer_2[0];
    weighted_sum_4 = *(float *)(a2 + 8 * scaled_index_2 + 8);
    weighted_sum_5 = *(float *)(a2 + 8 * scaled_index_2 + 12);
    weighted_sum_8 = *(float *)(a2 + 8 * scaled_index_2 + 16);
    float_buffer[0] = weighted_sum_4;
    component_delta_4 = weighted_sum_4 - float_buffer_2[0];
    float_buffer[1] = weighted_sum_5;
    component_delta_5 = weighted_sum_5 - combined_products;
    product_difference = (float)(component_delta_5 * component_delta) - (float)((float)(weighted_sum_8 - combined_products_2) * component_delta_2);
    product_difference_2 = (float)((float)(weighted_sum_8 - combined_products_2) * component_delta_3) - (float)(component_delta_4 * component_delta);
    product_difference_3 = (float)(component_delta_4 * component_delta_2) - (float)(component_delta_5 * component_delta_3);
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      normal[0] = 0.0;
      scaled_ratio = 0.0;
      unused_written_slot = 0.0;
      scaled_ratio_3 = 0.0;
      scaled_ratio_2 = 0.0;
    }
    else
    {
      scaled_ratio = product_difference * (float)(1.0 / square_root);
      scaled_ratio_2 = product_difference_3 * (float)(1.0 / square_root);
      normal[0] = scaled_ratio;
      scaled_ratio_3 = product_difference_2 * (float)(1.0 / square_root);
      unused_written_slot = scaled_ratio_2;
    }
    normal[1] = scaled_ratio_3;
    if ( sr_collision_line_triangle((float *)&point, normal, &t, a3, a4, float_buffer_2, float_buffer_3, float_buffer) )
    {
      saved_t = t;
      if ( t < *(float *)(a1 + 24) )
      {
        comparison_operand = frame_word_at_20;
        *(_DWORD *)a1 = point;
        *(_DWORD *)(a1 + 8) = frame_word_at_24;
        *(_DWORD *)(a1 + 4) = comparison_operand;
        *(float *)(a1 + 12) = scaled_ratio;
        *(float *)(a1 + 16) = scaled_ratio_3;
        *(float *)(a1 + 20) = scaled_ratio_2;
        *(float *)(a1 + 24) = saved_t;
      }
    }
    if ( *(record_byte_offset - 2) == 4 )
    {
      scaled_index_3 = 2LL * record_byte_offset[2];
      weighted_sum_6 = *(float *)(a2 + 16LL * record_byte_offset[2] + 12);
      float_buffer_4[0] = *(float *)(a2 + 16LL * record_byte_offset[2] + 8);
      weighted_sum_7 = *(float *)(a2 + 8 * scaled_index_3 + 16);
      float_buffer_4[1] = weighted_sum_6;
      float_buffer_4[2] = weighted_sum_7;
      if ( sr_collision_line_triangle((float *)&point, normal, &t, a3, a4, float_buffer_2, float_buffer, float_buffer_4) )
      {
        saved_t_2 = t;
        if ( t < *(float *)(a1 + 24) )
        {
          comparison_operand_2 = frame_word_at_20;
          *(_DWORD *)a1 = point;
          *(_DWORD *)(a1 + 8) = frame_word_at_24;
          *(_DWORD *)(a1 + 4) = comparison_operand_2;
          *(float *)(a1 + 12) = scaled_ratio;
          *(float *)(a1 + 16) = scaled_ratio_3;
          *(float *)(a1 + 20) = scaled_ratio_2;
          *(float *)(a1 + 24) = saved_t_2;
        }
      }
    }
    ++iteration_count;
    record_byte_offset += 8;
  }
  while ( iteration_count < *(_DWORD *)(a2 + 32772) );
  return *(float *)(a1 + 24) < 1.0;
}
#undef normal
#undef unused_written_slot
#undef point
#undef frame_word_at_20
#undef frame_word_at_24
#undef float_buffer
#undef weighted_sum_8
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef t

//----- (00000001400DA8E0) ----------------------------------------------------
__int64            sub_1400DA8E0(__int64 a1, __int64 a2, float *a3, float *a4)
{
  float *record_pointer;
  float *record_pointer_2;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA8E0[6256];
#define scratch_buffer (*(_BYTE (*)[6144])(void *)(sr_frame_1400DA8E0 + 0)) /* [rsp+10h] */
#define unused_frame_slot_6144 (*(__int64 (*))(void *)(sr_frame_1400DA8E0 + 6144)) /* [rsp+1810h] */
#define record_pointer_3 (*(float * (*))(void *)(sr_frame_1400DA8E0 + 6240)) /* [rsp+1870h] */
#define record_pointer_4 (*(float * (*))(void *)(sr_frame_1400DA8E0 + 6248)) /* [rsp+1878h] */

  record_pointer = record_pointer_3;
  record_pointer_2 = record_pointer_4;
  sr_collision_place_mesh((__int64)scratch_buffer, a2, a3, a4);
  return sub_1400DA960(a1, a2, (__int64)scratch_buffer, record_pointer, record_pointer_2); /* 0x1400DA937: the result of this call is still in rax at the exit */
}
#undef scratch_buffer
#undef unused_frame_slot_6144
#undef record_pointer_3
#undef record_pointer_4

//----- (00000001400DA960) ----------------------------------------------------
_BOOL8            sub_1400DA960(__int64 a1, __int64 a2, __int64 a3, float *a4, float *a5)
{
  int iteration_count;
  float *to;
  __int64 running_total;
  int iteration_count_2;
  __int64 record_byte_offset;
  __int64 loaded_word;
  __int64 packed_word_bits;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 packed_word_bits_2;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  __int64 scaled_index;
  float weighted_sum_7;
  float weighted_sum_8;
  float component_delta_4;
  float component_delta_5;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  bool comparison_result;
  __int64 loaded_word_2;
  float weighted_sum_9;
  float saved_t;
  int comparison_operand;
  float saved_t_2;
  int comparison_operand_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA960[288];
#define saved_iteration_count (*(int (*))(void *)(sr_frame_1400DA960 + 0)) /* [rsp+48h] */
#define normal (*(float (*)[2])(void *)(sr_frame_1400DA960 + 8)) /* [rsp+50h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400DA960 + 16)) /* [rsp+58h] */
#define point (*(int (*))(void *)(sr_frame_1400DA960 + 24)) /* [rsp+60h] */
#define frame_word_at_28 (*(int (*))(void *)(sr_frame_1400DA960 + 28)) /* [rsp+64h] */
#define frame_word_at_32 (*(int (*))(void *)(sr_frame_1400DA960 + 32)) /* [rsp+68h] */
#define float_buffer (*(float (*)[2])(void *)(sr_frame_1400DA960 + 40)) /* [rsp+70h] */
#define weighted_sum_10 (*(float (*))(void *)(sr_frame_1400DA960 + 48)) /* [rsp+78h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400DA960 + 56)) /* [rsp+80h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_1400DA960 + 72)) /* [rsp+90h] */
#define float_buffer_4 (*(float (*)[4])(void *)(sr_frame_1400DA960 + 88)) /* [rsp+A0h] */
#define t (*(float (*))(void *)(sr_frame_1400DA960 + 272)) /* [rsp+158h] */
#define input_value (*(__int64 (*))(void *)(sr_frame_1400DA960 + 280)) /* [rsp+160h] */

  input_value = a2;
  iteration_count = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  saved_iteration_count = 0;
  if ( *(int *)(a2 + 16) <= 0 )
    return 0;
  to = a5;
  running_total = a2 + 48;
  do
  {
    iteration_count_2 = 0;
    if ( *(int *)running_total > 0 )
    {
      record_byte_offset = 0;
      do
      {
        loaded_word = *(_QWORD *)(running_total + 8);
        packed_word_bits = 3 * *(_DWORD *)(loaded_word + record_byte_offset + 8);
        weighted_sum = *(float *)(a3 + 4 * packed_word_bits);
        weighted_sum_2 = *(float *)(a3 + 4 * packed_word_bits + 4);
        weighted_sum_3 = *(float *)(a3 + 4 * packed_word_bits + 8);
        LODWORD(packed_word_bits) = *(_DWORD *)(loaded_word + record_byte_offset + 12);
        float_buffer_2[0] = weighted_sum;
        float_buffer_2[2] = weighted_sum_3;
        float_buffer_2[1] = weighted_sum_2;
        packed_word_bits_2 = 3 * (int)packed_word_bits;
        weighted_sum_4 = *(float *)(a3 + 4 * packed_word_bits_2 + 8);
        weighted_sum_5 = *(float *)(a3 + 4 * packed_word_bits_2);
        weighted_sum_6 = *(float *)(a3 + 4 * packed_word_bits_2 + 4);
        LODWORD(packed_word_bits_2) = *(_DWORD *)(loaded_word + record_byte_offset + 16);
        float_buffer_3[2] = weighted_sum_4;
        component_delta = weighted_sum_4 - weighted_sum_3;
        float_buffer_3[1] = weighted_sum_6;
        component_delta_2 = weighted_sum_6 - weighted_sum_2;
        float_buffer_3[0] = weighted_sum_5;
        component_delta_3 = weighted_sum_5 - weighted_sum;
        scaled_index = 3 * (int)packed_word_bits_2;
        weighted_sum_7 = *(float *)(a3 + 4 * scaled_index);
        weighted_sum_8 = *(float *)(a3 + 4 * scaled_index + 4);
        weighted_sum_10 = *(float *)(a3 + 4 * scaled_index + 8);
        float_buffer[0] = weighted_sum_7;
        component_delta_4 = weighted_sum_7 - weighted_sum;
        float_buffer[1] = weighted_sum_8;
        component_delta_5 = weighted_sum_8 - weighted_sum_2;
        product_difference = (float)(component_delta_5 * component_delta) - (float)((float)(weighted_sum_10 - weighted_sum_3) * component_delta_2);
        product_difference_2 = (float)((float)(weighted_sum_10 - weighted_sum_3) * component_delta_3) - (float)(component_delta_4 * component_delta);
        product_difference_3 = (float)(component_delta_4 * component_delta_2) - (float)(component_delta_5 * component_delta_3);
        square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
        if ( square_root == 0.0 )
        {
          normal[0] = 0.0;
          scaled_ratio = 0.0;
          unused_written_slot = 0.0;
          scaled_ratio_3 = 0.0;
          scaled_ratio_2 = 0.0;
        }
        else
        {
          scaled_ratio = product_difference * (float)(1.0 / square_root);
          scaled_ratio_2 = product_difference_3 * (float)(1.0 / square_root);
          normal[0] = scaled_ratio;
          scaled_ratio_3 = product_difference_2 * (float)(1.0 / square_root);
          unused_written_slot = scaled_ratio_2;
        }
        comparison_result = *(_DWORD *)(loaded_word + record_byte_offset + 4) == 4;
        normal[1] = scaled_ratio_3;
        if ( comparison_result )
        {
          loaded_word_2 = 3 * *(_DWORD *)(loaded_word + record_byte_offset + 20);
          weighted_sum_9 = *(float *)(a3 + 4 * loaded_word_2 + 4);
          float_buffer_4[0] = *(float *)(a3 + 4 * loaded_word_2);
          float_buffer_4[2] = *(float *)(a3 + 4 * loaded_word_2 + 8);
          float_buffer_4[1] = weighted_sum_9;
        }
        if ( sr_collision_line_triangle((float *)&point, normal, &t, a4, to, float_buffer_2, float_buffer_3, float_buffer) )
        {
          saved_t = t;
          if ( t < *(float *)(a1 + 24) )
          {
            comparison_operand = frame_word_at_28;
            *(_DWORD *)a1 = point;
            *(_DWORD *)(a1 + 8) = frame_word_at_32;
            *(_DWORD *)(a1 + 4) = comparison_operand;
            *(float *)(a1 + 12) = scaled_ratio;
            *(float *)(a1 + 16) = scaled_ratio_3;
            *(float *)(a1 + 20) = scaled_ratio_2;
            *(float *)(a1 + 24) = saved_t;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(running_total + 8) + record_byte_offset + 4) == 4
          && sr_collision_line_triangle((float *)&point, normal, &t, a4, to, float_buffer_2, float_buffer, float_buffer_4) )
        {
          saved_t_2 = t;
          if ( t < *(float *)(a1 + 24) )
          {
            comparison_operand_2 = frame_word_at_28;
            *(_DWORD *)a1 = point;
            *(_DWORD *)(a1 + 8) = frame_word_at_32;
            *(_DWORD *)(a1 + 4) = comparison_operand_2;
            *(float *)(a1 + 12) = scaled_ratio;
            *(float *)(a1 + 16) = scaled_ratio_3;
            *(float *)(a1 + 20) = scaled_ratio_2;
            *(float *)(a1 + 24) = saved_t_2;
          }
        }
        ++iteration_count_2;
        record_byte_offset += 36;
      }
      while ( iteration_count_2 < *(_DWORD *)running_total );
      iteration_count = saved_iteration_count;
      a2 = input_value;
    }
    ++iteration_count;
    running_total += 56;
    saved_iteration_count = iteration_count;
  }
  while ( iteration_count < *(_DWORD *)(a2 + 16) );
  return *(float *)(a1 + 24) < 1.0;
}
#undef saved_iteration_count
#undef normal
#undef unused_written_slot
#undef point
#undef frame_word_at_28
#undef frame_word_at_32
#undef float_buffer
#undef weighted_sum_10
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef t
#undef input_value

//----- (00000001400DB460) ----------------------------------------------------
__int64            sub_1400DB460(_DWORD *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  signed int iteration_count;
  unsigned __int64 record_word_offset;
  float *input_cursor;
  unsigned int *state_address;
  float source_component_w;
  unsigned __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  unsigned __int64 scaled_index_2;
  float weighted_sum_4;
  float scaled_value;
  float weighted_sum_5;
  float scaled_value_2;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float scaled_value_3;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  unsigned __int64 scaled_index_3;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float state_address_2;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  bool comparison_result;
  float scaled_value_4;
  float source_component_y;
  float source_component_z;
  unsigned __int64 scaled_index_4;
  float state_address_3;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  float weighted_sum_20;
  float weighted_sum_21;
  float state_address_4;
  float saved_t;
  int comparison_operand;
  float saved_t_2;
  int comparison_operand_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DB460[368];
#define state_address_5 (*(float (*))(void *)(sr_frame_1400DB460 + 0)) /* [rsp+40h] */
#define normal (*(float (*)[2])(void *)(sr_frame_1400DB460 + 8)) /* [rsp+48h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400DB460 + 16)) /* [rsp+50h] */
#define point (*(int (*))(void *)(sr_frame_1400DB460 + 24)) /* [rsp+58h] */
#define frame_word_at_28 (*(int (*))(void *)(sr_frame_1400DB460 + 28)) /* [rsp+5Ch] */
#define frame_word_at_32 (*(int (*))(void *)(sr_frame_1400DB460 + 32)) /* [rsp+60h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400DB460 + 40)) /* [rsp+68h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400DB460 + 56)) /* [rsp+78h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_1400DB460 + 72)) /* [rsp+88h] */
#define float_buffer_4 (*(float (*)[6])(void *)(sr_frame_1400DB460 + 88)) /* [rsp+98h] */
#define state_address_6 (*(float (*))(void *)(sr_frame_1400DB460 + 352)) /* [rsp+1A0h] */
#define t (*(float (*))(void *)(sr_frame_1400DB460 + 360)) /* [rsp+1A8h] */

  iteration_count = 0;
  record_word_offset = 5072LL * a4;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[record_word_offset / 4 + 278521861] <= 0 )
    return 0;
  input_cursor = a5;
  state_address = &dword_140404A6C[record_word_offset / 4 + 278521865];
  do
  {
    source_component_w = a6[3];
    scaled_index = record_word_offset + 12LL * (int)*(state_address - 1);
    weighted_sum = *(float *)((char *)&g_182A7E780 + scaled_index);
    weighted_sum_2 = *(float *)((char *)&g_182A7E784 + scaled_index);
    weighted_sum_3 = *(float *)((char *)&g_182A7E788 + scaled_index);
    scaled_index_2 = record_word_offset + 12LL * (int)*state_address;
    weighted_sum_4 = *(float *)((char *)&g_182A7E780 + scaled_index_2);
    scaled_value = a6[4] * weighted_sum_2;
    weighted_sum_5 = (float)(source_component_w * weighted_sum_2) + (float)(*a6 * weighted_sum);
    scaled_value_2 = a6[5] * weighted_sum_2;
    weighted_sum_6 = *(float *)((char *)&g_182A7E784 + scaled_index_2);
    weighted_sum_7 = weighted_sum_5 + (float)(a6[6] * weighted_sum_3);
    weighted_sum_8 = scaled_value + (float)(a6[1] * weighted_sum);
    scaled_value_3 = a6[2] * weighted_sum;
    weighted_sum_9 = *(float *)((char *)&g_182A7E788 + scaled_index_2);
    weighted_sum_10 = weighted_sum_8 + (float)(a6[7] * weighted_sum_3);
    weighted_sum_11 = (float)(scaled_value_2 + scaled_value_3) + (float)(a6[8] * weighted_sum_3);
    scaled_index_3 = record_word_offset + 12LL * (int)state_address[1];
    weighted_sum_12 = (float)((float)(weighted_sum_4 * *a6) + (float)(weighted_sum_6 * source_component_w)) + (float)(weighted_sum_9 * a6[6]);
    weighted_sum_13 = (float)((float)(weighted_sum_4 * a6[1]) + (float)(weighted_sum_6 * a6[4])) + (float)(weighted_sum_9 * a6[7]);
    weighted_sum_14 = (float)((float)(weighted_sum_4 * a6[2]) + (float)(weighted_sum_6 * a6[5])) + (float)(weighted_sum_9 * a6[8]);
    weighted_sum_15 = *(float *)((char *)&g_182A7E788 + scaled_index_3);
    state_address_6 = (float)((float)(*(float *)((char *)&g_182A7E780 + scaled_index_3) * *a6)
                + (float)(*(float *)((char *)&g_182A7E784 + scaled_index_3) * source_component_w))
        + (float)(weighted_sum_15 * a6[6]);
    state_address_2 = (float)((float)(*(float *)((char *)&g_182A7E780 + scaled_index_3) * a6[2])
                + (float)(*(float *)((char *)&g_182A7E784 + scaled_index_3) * a6[5]))
        + (float)(weighted_sum_15 * a6[8]);
    state_address_5 = (float)((float)(*(float *)((char *)&g_182A7E780 + scaled_index_3) * a6[1])
                + (float)(*(float *)((char *)&g_182A7E784 + scaled_index_3) * a6[4]))
        + (float)(weighted_sum_15 * a6[7]);
    product_difference = (float)((float)(state_address_5 - weighted_sum_10) * (float)(weighted_sum_14 - weighted_sum_11)) - (float)((float)(state_address_2 - weighted_sum_11) * (float)(weighted_sum_13 - weighted_sum_10));
    product_difference_2 = (float)((float)(state_address_2 - weighted_sum_11) * (float)(weighted_sum_12 - weighted_sum_7)) - (float)((float)(state_address_6 - weighted_sum_7) * (float)(weighted_sum_14 - weighted_sum_11));
    product_difference_3 = (float)((float)(state_address_6 - weighted_sum_7) * (float)(weighted_sum_13 - weighted_sum_10)) - (float)((float)(state_address_5 - weighted_sum_10) * (float)(weighted_sum_12 - weighted_sum_7));
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      normal[0] = 0.0;
      scaled_ratio = 0.0;
      unused_written_slot = 0.0;
      scaled_ratio_3 = 0.0;
      scaled_ratio_2 = 0.0;
    }
    else
    {
      scaled_ratio = product_difference * (float)(1.0 / square_root);
      scaled_ratio_2 = product_difference_3 * (float)(1.0 / square_root);
      normal[0] = scaled_ratio;
      scaled_ratio_3 = product_difference_2 * (float)(1.0 / square_root);
      unused_written_slot = scaled_ratio_2;
    }
    comparison_result = *(state_address - 2) == 4;
    scaled_value_4 = *input_cursor;
    normal[1] = scaled_ratio_3;
    float_buffer_2[0] = weighted_sum_7 + scaled_value_4;
    source_component_y = input_cursor[1];
    float_buffer_3[0] = weighted_sum_12 + scaled_value_4;
    float_buffer[0] = state_address_6 + scaled_value_4;
    float_buffer_2[1] = weighted_sum_10 + source_component_y;
    source_component_z = input_cursor[2];
    float_buffer_3[1] = weighted_sum_13 + source_component_y;
    float_buffer[1] = state_address_5 + source_component_y;
    float_buffer_2[2] = weighted_sum_11 + source_component_z;
    float_buffer_3[2] = weighted_sum_14 + source_component_z;
    float_buffer[2] = state_address_2 + source_component_z;
    if ( comparison_result )
    {
      scaled_index_4 = record_word_offset + 12LL * (int)state_address[2];
      state_address_3 = (float)(*(float *)((char *)&g_182A7E784 + scaled_index_4) * a6[3]) + scaled_value_4;
      weighted_sum_16 = *(float *)((char *)&g_182A7E788 + scaled_index_4);
      weighted_sum_17 = *(float *)((char *)&g_182A7E780 + scaled_index_4);
      weighted_sum_18 = (float)((float)(weighted_sum_16 * a6[6]) + (float)(weighted_sum_17 * *a6)) + state_address_3;
      weighted_sum_19 = (float)(weighted_sum_16 * a6[8]) + (float)(weighted_sum_17 * a6[2]);
      weighted_sum_20 = *(float *)((char *)&g_182A7E784 + scaled_index_4) * a6[5];
      weighted_sum_21 = (float)(weighted_sum_16 * a6[7]) + (float)(weighted_sum_17 * a6[1]);
      state_address_4 = (float)(*(float *)((char *)&g_182A7E784 + scaled_index_4) * a6[4]) + source_component_y;
      float_buffer_4[0] = weighted_sum_18;
      float_buffer_4[1] = weighted_sum_21 + state_address_4;
      float_buffer_4[2] = weighted_sum_19 + (float)(weighted_sum_20 + source_component_z);
    }
    if ( sr_collision_line_triangle((float *)&point, normal, &t, a7, a8, float_buffer_2, float_buffer_3, float_buffer) )
    {
      saved_t = t;
      if ( t < *a3 )
      {
        comparison_operand = frame_word_at_28;
        *a1 = point;
        a1[2] = frame_word_at_32;
        a1[1] = comparison_operand;
        *a2 = scaled_ratio;
        a2[1] = scaled_ratio_3;
        a2[2] = scaled_ratio_2;
        *a3 = saved_t;
      }
    }
    if ( *(state_address - 2) == 4 && sr_collision_line_triangle((float *)&point, normal, &t, a7, a8, float_buffer_2, float_buffer, float_buffer_4) )
    {
      saved_t_2 = t;
      if ( t < *a3 )
      {
        comparison_operand_2 = frame_word_at_28;
        *a1 = point;
        a1[2] = frame_word_at_32;
        a1[1] = comparison_operand_2;
        *a2 = scaled_ratio;
        a2[1] = scaled_ratio_3;
        a2[2] = scaled_ratio_2;
        *a3 = saved_t_2;
      }
    }
    ++iteration_count;
    state_address += 6;
  }
  while ( iteration_count < (int)dword_140404A6C[record_word_offset / 4 + 278521861] );
  if ( *a3 >= 1.0 )
    return 0;
  g_151A848A0 = 0;
  g_151A848A8 = 0;
  return 1;
}
#undef state_address_5
#undef normal
#undef unused_written_slot
#undef point
#undef frame_word_at_28
#undef frame_word_at_32
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef state_address_6
#undef t

//----- (00000001400DBAD0) ----------------------------------------------------
__int64            sub_1400DBAD0(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  signed int iteration_count;
  __int64 record_word_offset;
  __int64 record_byte_offset;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 loaded_word;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float source_component_w;
  float scaled_value;
  float source_float_6;
  float source_float_4;
  float source_component_y;
  float source_float_7;
  float source_float_5;
  float source_float_8;
  float source_component_z;
  float weighted_sum_4;
  __int64 loaded_word_2;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  __int64 loaded_word_3;
  float saved_weighted_sum;
  float scaled_value_2;
  float weighted_sum_8;
  float weighted_sum_9;
  float saved_weighted_sum_2;
  float weighted_sum_10;
  float weighted_sum_11;
  float scaled_value_3;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float source_component_y_2;
  float weighted_sum_15;
  float source_component_z_2;
  float weighted_sum_16;
  float weighted_sum_17;
  float saved_t;
  float source_component_y_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DBAD0[368];
#define normal (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 0)) /* [rsp+40h] */
#define weighted_sum_18 (*(float (*))(void *)(sr_frame_1400DBAD0 + 16)) /* [rsp+50h] */
#define weighted_sum_19 (*(float (*))(void *)(sr_frame_1400DBAD0 + 20)) /* [rsp+54h] */
#define weighted_sum_20 (*(float (*))(void *)(sr_frame_1400DBAD0 + 24)) /* [rsp+58h] */
#define weighted_sum_21 (*(float (*))(void *)(sr_frame_1400DBAD0 + 28)) /* [rsp+5Ch] */
#define t (*(float (*))(void *)(sr_frame_1400DBAD0 + 32)) /* [rsp+60h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 40)) /* [rsp+68h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 56)) /* [rsp+78h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 72)) /* [rsp+88h] */
#define point (*(float (*)[6])(void *)(sr_frame_1400DBAD0 + 88)) /* [rsp+98h] */
#define weighted_sum_22 (*(float (*))(void *)(sr_frame_1400DBAD0 + 352)) /* [rsp+1A0h] */
#define weighted_sum_23 (*(float (*))(void *)(sr_frame_1400DBAD0 + 360)) /* [rsp+1A8h] */
#define weighted_sum_24 (*(float (*))(void *)(sr_frame_1400DBAD0 + 360)) /* [rsp+1A8h] */

  iteration_count = 0;
  record_word_offset = 50LL * a4;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[record_word_offset + 272248227] <= 0 )
    return 0;
  record_byte_offset = 0;
  do
  {
    masked_bits = *(_QWORD *)&dword_140404A6C[record_word_offset + 272248223];
    masked_bits_2 = *(_QWORD *)&dword_140404A6C[record_word_offset + 272248229];
    loaded_word = 3 * *(_DWORD *)(record_byte_offset + masked_bits_2);
    weighted_sum = *(float *)(masked_bits + 4 * loaded_word);
    weighted_sum_2 = *(float *)(masked_bits + 4 * loaded_word + 4);
    weighted_sum_3 = *(float *)(masked_bits + 4 * loaded_word + 8);
    source_component_w = a6[3];
    scaled_value = *a6;
    source_float_6 = a6[6];
    source_float_4 = a6[4];
    source_component_y = a6[1];
    source_float_7 = a6[7];
    source_float_5 = a6[5];
    source_float_8 = a6[8];
    weighted_sum_18 = (float)((float)(source_component_w * weighted_sum_2) + (float)(*a6 * weighted_sum)) + (float)(source_float_6 * weighted_sum_3);
    weighted_sum_19 = (float)((float)(source_float_4 * weighted_sum_2) + (float)(source_component_y * weighted_sum)) + (float)(source_float_7 * weighted_sum_3);
    source_component_z = a6[2];
    weighted_sum_4 = (float)(source_float_5 * weighted_sum_2) + (float)(source_component_z * weighted_sum);
    loaded_word_2 = 3 * *(_DWORD *)(record_byte_offset + masked_bits_2 + 4);
    weighted_sum_5 = *(float *)(masked_bits + 4 * loaded_word_2 + 4);
    weighted_sum_6 = *(float *)(masked_bits + 4 * loaded_word_2 + 8);
    weighted_sum_20 = weighted_sum_4 + (float)(source_float_8 * weighted_sum_3);
    weighted_sum_7 = *(float *)(masked_bits + 4 * loaded_word_2);
    loaded_word_3 = 3 * *(_DWORD *)(record_byte_offset + masked_bits_2 + 8);
    saved_weighted_sum = weighted_sum_5;
    scaled_value_2 = weighted_sum_7 * source_component_y;
    weighted_sum_21 = (float)((float)(weighted_sum_7 * scaled_value) + (float)(weighted_sum_5 * source_component_w)) + (float)(weighted_sum_6 * source_float_6);
    weighted_sum_8 = (float)(weighted_sum_7 * source_component_z) + (float)(weighted_sum_5 * source_float_5);
    weighted_sum_9 = *(float *)(masked_bits + 4 * loaded_word_3 + 4);
    weighted_sum_23 = scaled_value_2 + (float)(saved_weighted_sum * source_float_4);
    saved_weighted_sum_2 = weighted_sum_6;
    weighted_sum_10 = weighted_sum_8 + (float)(weighted_sum_6 * source_float_8);
    weighted_sum_11 = *(float *)(masked_bits + 4 * loaded_word_3 + 8);
    weighted_sum_24 = weighted_sum_23 + (float)(saved_weighted_sum_2 * source_float_7);
    scaled_value_3 = weighted_sum_9 * source_component_w;
    weighted_sum_12 = *(float *)(masked_bits + 4 * loaded_word_3);
    weighted_sum_13 = (float)((float)(weighted_sum_12 * scaled_value) + scaled_value_3) + (float)(weighted_sum_11 * source_float_6);
    weighted_sum_14 = (float)((float)(weighted_sum_12 * source_component_z) + (float)(weighted_sum_9 * source_float_5)) + (float)(weighted_sum_11 * source_float_8);
    weighted_sum_22 = (float)((float)(weighted_sum_12 * source_component_y) + (float)(weighted_sum_9 * source_float_4)) + (float)(weighted_sum_11 * source_float_7);
    product_difference = (float)((float)(weighted_sum_22 - weighted_sum_19) * (float)(weighted_sum_10 - weighted_sum_20)) - (float)((float)(weighted_sum_14 - weighted_sum_20) * (float)(weighted_sum_24 - weighted_sum_19));
    product_difference_2 = (float)((float)(weighted_sum_14 - weighted_sum_20) * (float)(weighted_sum_21 - weighted_sum_18)) - (float)((float)(weighted_sum_13 - weighted_sum_18) * (float)(weighted_sum_10 - weighted_sum_20));
    product_difference_3 = (float)((float)(weighted_sum_13 - weighted_sum_18) * (float)(weighted_sum_24 - weighted_sum_19)) - (float)((float)(weighted_sum_22 - weighted_sum_19) * (float)(weighted_sum_21 - weighted_sum_18));
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      normal[0] = 0.0;
      scaled_ratio = 0.0;
      scaled_ratio_2 = 0.0;
      scaled_ratio_3 = 0.0;
    }
    else
    {
      scaled_ratio = product_difference * (float)(1.0 / square_root);
      scaled_ratio_2 = product_difference_2 * (float)(1.0 / square_root);
      normal[0] = scaled_ratio;
      scaled_ratio_3 = product_difference_3 * (float)(1.0 / square_root);
    }
    source_component_y_2 = a5[1];
    weighted_sum_15 = weighted_sum_18 + *a5;
    source_component_z_2 = a5[2];
    weighted_sum_16 = weighted_sum_13 + *a5;
    weighted_sum_17 = weighted_sum_21 + *a5;
    normal[2] = scaled_ratio_3;
    normal[1] = scaled_ratio_2;
    float_buffer_3[0] = weighted_sum_15;
    float_buffer[1] = weighted_sum_22 + source_component_y_2;
    float_buffer_3[1] = weighted_sum_19 + source_component_y_2;
    float_buffer_3[2] = weighted_sum_20 + source_component_z_2;
    float_buffer_2[0] = weighted_sum_17;
    float_buffer_2[1] = weighted_sum_24 + source_component_y_2;
    float_buffer_2[2] = weighted_sum_10 + source_component_z_2;
    float_buffer[0] = weighted_sum_16;
    float_buffer[2] = weighted_sum_14 + source_component_z_2;
    if ( sr_collision_line_triangle(point, normal, &t, a7, a8, float_buffer_3, float_buffer_2, float_buffer) )
    {
      saved_t = t;
      if ( t < *a3 )
      {
        source_component_y_3 = point[1];
        *a1 = point[0];
        a1[2] = point[2];
        a1[1] = source_component_y_3;
        *a2 = scaled_ratio;
        a2[1] = scaled_ratio_2;
        a2[2] = scaled_ratio_3;
        *a3 = saved_t;
      }
    }
    ++iteration_count;
    record_byte_offset += 12;
  }
  while ( iteration_count < (int)dword_140404A6C[record_word_offset + 272248227] );
  if ( *a3 >= 1.0 )
    return 0;
  g_151A848A0 = 0;
  g_151A848A8 = 0;
  return 1;
}
#undef normal
#undef weighted_sum_18
#undef weighted_sum_19
#undef weighted_sum_20
#undef weighted_sum_21
#undef t
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef point
#undef weighted_sum_22
#undef weighted_sum_23
#undef weighted_sum_24

//----- (00000001400DC650) ----------------------------------------------------
__int64            sub_1400DC650(float *a1, __int64 a2, float *a3, float *a4, float *a5, int *a6, int a7, float a8)
{
  int *record_byte_offset;
  int *running_total;
  signed int iteration_count;
  float scaled_value;
  float source_component_y;
  float source_component_z;
  __int64 scaled_index;
  __int64 scaled_index_2;
  float state_address;
  float weighted_sum;
  __int64 scaled_index_3;
  __int64 packed_word_bits;
  float state_address_2;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 scaled_index_4;
  float state_address_3;
  float weighted_sum_4;
  float weighted_sum_5;
  __int64 scaled_index_5;
  __int64 table_value;
  float state_address_4;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float sr_cell_ray_vertex_c[3];
  float sr_cell_ray_vertex_b[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DC650[80];
#define float_buffer (*(float (*)[20])(void *)(sr_frame_1400DC650 + 0)) /* [rsp+60h] */

  record_byte_offset = dword_1402B3668;
  running_total = dword_1402B3558;
  iteration_count = 0;
  scaled_value = (float)*a6;
  source_component_y = (float)a6[1];
  source_component_z = (float)a6[2];
  while ( 1 )
  {
    if ( ((((64 << iteration_count) & a7) != 0) & _bittest(&a7, iteration_count)) != 0 )
    {
      scaled_index = 3LL * *(record_byte_offset - 2);
      scaled_index_2 = *(record_byte_offset - 1);
      state_address = (float)(source_component_y + *(float *)&dword_1402B34F0[3 * *(record_byte_offset - 2) + 1]) * a8;
      float_buffer[0] = (float)(scaled_value + *(float *)&dword_1402B34F0[3 * *(record_byte_offset - 2)]) * a8;
      weighted_sum = source_component_z + *(float *)&dword_1402B34F0[scaled_index + 2];
      scaled_index_3 = 3 * scaled_index_2;
      float_buffer[1] = state_address;
      packed_word_bits = *record_byte_offset;
      state_address_2 = (float)(source_component_y + *(float *)&dword_1402B34F0[scaled_index_3 + 1]) * a8;
      float_buffer[2] = weighted_sum * a8;
      weighted_sum_2 = scaled_value + *(float *)&dword_1402B34F0[scaled_index_3];
      sr_cell_ray_vertex_b[1] = state_address_2;
      sr_cell_ray_vertex_b[0] = weighted_sum_2 * a8;
      weighted_sum_3 = source_component_z + *(float *)&dword_1402B34F0[scaled_index_3 + 2];
      scaled_index_4 = 3 * packed_word_bits;
      LODWORD(packed_word_bits) = *(running_total - 2);
      state_address_3 = (float)(source_component_y + *(float *)&dword_1402B34F0[scaled_index_4 + 1]) * a8;
      sr_cell_ray_vertex_b[2] = weighted_sum_3 * a8;
      weighted_sum_4 = scaled_value + *(float *)&dword_1402B34F0[scaled_index_4];
      sr_cell_ray_vertex_c[1] = state_address_3;
      sr_cell_ray_vertex_c[0] = weighted_sum_4 * a8;
      weighted_sum_5 = source_component_z + *(float *)&dword_1402B34F0[scaled_index_4 + 2];
      *(_DWORD *)a2 = packed_word_bits;
      *(_DWORD *)(a2 + 4) = *(running_total - 1);
      *(_DWORD *)(a2 + 8) = *running_total;
      sr_cell_ray_vertex_c[2] = weighted_sum_5 * a8;
      if ( sr_collision_line_triangle(a1, (float *)a2, a3, a4, a5, float_buffer, &sr_cell_ray_vertex_b[0], &sr_cell_ray_vertex_c[0]) )
        break;
      scaled_index_5 = 3LL * *record_byte_offset;
      table_value = record_byte_offset[1];
      state_address_4 = (float)(source_component_y + *(float *)&dword_1402B34F0[3 * *record_byte_offset + 1]) * a8;
      sr_cell_ray_vertex_b[0] = (float)(scaled_value + *(float *)&dword_1402B34F0[3 * *record_byte_offset]) * a8;
      weighted_sum_6 = source_component_z + *(float *)&dword_1402B34F0[scaled_index_5 + 2];
      sr_cell_ray_vertex_b[1] = state_address_4;
      weighted_sum_7 = source_component_y + *(float *)&dword_1402B34F0[3 * table_value + 1];
      sr_cell_ray_vertex_b[2] = weighted_sum_6 * a8;
      weighted_sum_8 = scaled_value + *(float *)&dword_1402B34F0[3 * table_value];
      sr_cell_ray_vertex_c[1] = weighted_sum_7 * a8;
      sr_cell_ray_vertex_c[0] = weighted_sum_8 * a8;
      sr_cell_ray_vertex_c[2] = (float)(source_component_z + *(float *)&dword_1402B34F0[3 * table_value + 2]) * a8;
      if ( sr_collision_line_triangle(a1, (float *)a2, a3, a4, a5, float_buffer, &sr_cell_ray_vertex_b[0], &sr_cell_ray_vertex_c[0]) )
        break;
    }
    ++iteration_count;
    running_total += 3;
    record_byte_offset += 4;
    if ( iteration_count >= 6 )
      return 0;
  }
  g_151A848EC = iteration_count;
  return 1;
}
#undef float_buffer

//----- (00000001400DE770) ----------------------------------------------------
_BOOL8            sub_1400DE770(_DWORD *a1, float *a2, float *a3, float *a4, float *a5, __int64 a6, float a7, float a8)
{
  float input_value;
  signed int iteration_count;
  float scaled_value;
  int hiword_result;
  __int64 loword_result;
  __m128i converted_vector;
  __m128i converted_vector_2;
  float scaled_value_2;
  float converted_vector_3;
  float converted_vector_4;
  __int64 record_byte_offset;
  __int64 integer_sum;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 loaded_word;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 packed_word_bits;
  float scaled_value_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  __int64 packed_word_bits_2;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  __int64 scaled_index;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float product_difference;
  float scaled_value_4;
  float scaled_value_5;
  float scaled_value_6;
  float product_difference_2;
  float product_difference_3;
  float product_difference_4;
  float product_difference_5;
  float product_difference_6;
  float product_difference_7;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float input_value_2;
  int comparison_operand;
  __int64 masked_bits_3;
  float component_delta;
  float component_delta_2;
  float product_difference_8;
  float product_difference_9;
  float product_difference_10;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float input_value_3;
  int comparison_operand_2;
  __int64 masked_bits_4;
  signed int iteration_count_2;
  __int16 loword_result_2;
  __int64 record_byte_offset_2;
  __int64 record_byte_offset_3;
  __int64 masked_bits_5;
  float saved_converted_vector;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  float weighted_sum_20;
  float weighted_sum_21;
  float weighted_sum_22;
  float weighted_sum_23;
  float scaled_value_7;
  float scaled_value_8;
  float scaled_value_9;
  float component_delta_3;
  float scaled_value_10;
  float product_difference_11;
  float product_difference_12;
  float component_delta_4;
  float component_delta_5;
  float product_difference_13;
  float product_difference_14;
  float product_difference_15;
  float square_root_3;
  float scaled_ratio_7;
  float scaled_ratio_8;
  float scaled_ratio_9;
  float input_value_4;
  int comparison_operand_3;
  float input_value_5;
  int comparison_operand_4;
  float component_delta_6;
  float component_delta_7;
  float component_delta_8;
  float product_difference_16;
  float product_difference_17;
  float product_difference_18;
  float square_root_4;
  float scaled_ratio_10;
  float scaled_ratio_11;
  float scaled_ratio_12;
  float input_value_6;
  int comparison_operand_5;
  BOOL collision_line_triangle_result;
  float input_value_7;
  int comparison_operand_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DE770[416];
#define normal (*(float (*))(void *)(sr_frame_1400DE770 + 0)) /* [rsp+40h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400DE770 + 4)) /* [rsp+44h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400DE770 + 8)) /* [rsp+48h] */
#define point (*(int (*))(void *)(sr_frame_1400DE770 + 16)) /* [rsp+50h] */
#define frame_word_at_20 (*(int (*))(void *)(sr_frame_1400DE770 + 20)) /* [rsp+54h] */
#define frame_word_at_24 (*(int (*))(void *)(sr_frame_1400DE770 + 24)) /* [rsp+58h] */
#define rol4_result (*(float (*))(void *)(sr_frame_1400DE770 + 32)) /* [rsp+60h] */
#define saved_converted_vector_2 (*(float (*))(void *)(sr_frame_1400DE770 + 36)) /* [rsp+64h] */
#define saved_scaled_value (*(float (*))(void *)(sr_frame_1400DE770 + 40)) /* [rsp+68h] */
#define scaled_value_11 (*(float (*))(void *)(sr_frame_1400DE770 + 44)) /* [rsp+6Ch] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1400DE770 + 48)) /* [rsp+70h] */
#define product_difference_19 (*(float (*))(void *)(sr_frame_1400DE770 + 52)) /* [rsp+74h] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_1400DE770 + 56)) /* [rsp+78h] */
#define unused_written_slot_3 (*(float (*))(void *)(sr_frame_1400DE770 + 60)) /* [rsp+7Ch] */
#define unused_written_slot_4 (*(float (*))(void *)(sr_frame_1400DE770 + 64)) /* [rsp+80h] */
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_1400DE770 + 72)) /* [rsp+88h] */
#define unused_written_slot_5 (*(float (*))(void *)(sr_frame_1400DE770 + 76)) /* [rsp+8Ch] */
#define unused_written_slot_6 (*(float (*))(void *)(sr_frame_1400DE770 + 80)) /* [rsp+90h] */
#define scaled_value_12 (*(float (*))(void *)(sr_frame_1400DE770 + 88)) /* [rsp+98h] */
#define unused_written_slot_7 (*(float (*))(void *)(sr_frame_1400DE770 + 92)) /* [rsp+9Ch] */
#define unused_written_slot_8 (*(float (*))(void *)(sr_frame_1400DE770 + 96)) /* [rsp+A0h] */
#define weighted_sum_24 (*(float (*))(void *)(sr_frame_1400DE770 + 104)) /* [rsp+A8h] */
#define unused_written_slot_9 (*(float (*))(void *)(sr_frame_1400DE770 + 108)) /* [rsp+ACh] */
#define unused_written_slot_10 (*(float (*))(void *)(sr_frame_1400DE770 + 112)) /* [rsp+B0h] */
#define scaled_value_13 (*(float (*))(void *)(sr_frame_1400DE770 + 120)) /* [rsp+B8h] */
#define record_byte_offset_4 (*(__int64 (*))(void *)(sr_frame_1400DE770 + 128)) /* [rsp+C0h] */
#define saved_hiword_result (*(__int16 (*))(void *)(sr_frame_1400DE770 + 384)) /* [rsp+1C0h] */
#define from (*(float * (*))(void *)(sr_frame_1400DE770 + 392)) /* [rsp+1C8h] */
#define saved_converted_vector_3 (*(float (*))(void *)(sr_frame_1400DE770 + 408)) /* [rsp+1D8h] */

  from = a4;
  input_value = a8;
  iteration_count = 0;
  scaled_value = 1.0;
  hiword_result = HIWORD(LODWORD(a7));
  loword_result = 58LL * LOWORD(a7);
  converted_vector = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 4));
  converted_vector_2 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 8));
  scaled_value_2 = (float)*(int *)a6;
  *a3 = 1.0;
  saved_hiword_result = hiword_result;
  converted_vector_3 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0];
  converted_vector_4 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_2), f32)[0];
  saved_scaled_value = scaled_value_2;
  saved_converted_vector_3 = converted_vector_3;
  saved_converted_vector_2 = converted_vector_4;
  if ( (int)dword_140404A6C[loword_result + 20074623] > 0 )
  {
    record_byte_offset = 0;
    integer_sum = 0;
    record_byte_offset_4 = 0;
    do
    {
      masked_bits = *(_QWORD *)&dword_140404A6C[loword_result + 20074615];
      masked_bits_2 = *(_QWORD *)&dword_140404A6C[loword_result + 20074631];
      loaded_word = 3 * *(_DWORD *)(integer_sum + masked_bits_2);
      weighted_sum = scaled_value_2 + *(float *)(masked_bits + 4 * loaded_word);
      weighted_sum_2 = converted_vector_3 + *(float *)(masked_bits + 4 * loaded_word + 4);
      weighted_sum_3 = converted_vector_4 + *(float *)(masked_bits + 4 * loaded_word + 8);
      packed_word_bits = 3 * *(_DWORD *)(integer_sum + masked_bits_2 + 4);
      scaled_value_3 = weighted_sum_3 * input_value;
      scaled_value_13 = weighted_sum * input_value;
      weighted_sum_4 = scaled_value_2 + *(float *)(masked_bits + 4 * packed_word_bits);
      weighted_sum_5 = converted_vector_3 + *(float *)(masked_bits + 4 * packed_word_bits + 4);
      weighted_sum_6 = converted_vector_4 + *(float *)(masked_bits + 4 * packed_word_bits + 8);
      LODWORD(packed_word_bits) = *(_DWORD *)(integer_sum + masked_bits_2 + 8);
      saved_weighted_sum_3 = weighted_sum * input_value;
      packed_word_bits_2 = 3 * (int)packed_word_bits;
      scaled_value_11 = weighted_sum_2 * input_value;
      weighted_sum_7 = converted_vector_4 + *(float *)(masked_bits + 4 * packed_word_bits_2 + 8);
      weighted_sum_8 = scaled_value_2 + *(float *)(masked_bits + 4 * packed_word_bits_2);
      weighted_sum_9 = converted_vector_3 + *(float *)(masked_bits + 4 * packed_word_bits_2 + 4);
      LODWORD(packed_word_bits_2) = *(_DWORD *)(integer_sum + masked_bits_2 + 12);
      unused_written_slot_5 = weighted_sum_2 * input_value;
      scaled_index = 3 * (int)packed_word_bits_2;
      unused_written_slot_4 = weighted_sum_7 * input_value;
      weighted_sum_10 = scaled_value_2 + *(float *)(masked_bits + 4 * scaled_index);
      weighted_sum_11 = converted_vector_3 + *(float *)(masked_bits + 4 * scaled_index + 4);
      weighted_sum_12 = converted_vector_4 + *(float *)(masked_bits + 4 * scaled_index + 8);
      unused_written_slot_3 = weighted_sum_9 * input_value;
      product_difference = (float)(weighted_sum_9 * input_value) - (float)(weighted_sum_2 * input_value);
      product_difference_19 = (float)(weighted_sum_7 * input_value) - scaled_value_3;
      scaled_value_4 = weighted_sum_10 * input_value;
      scaled_value_5 = weighted_sum_11 * input_value;
      scaled_value_6 = weighted_sum_12 * input_value;
      unused_written_slot_7 = weighted_sum_5 * input_value;
      product_difference_2 = (float)(weighted_sum_5 * input_value) - (float)(weighted_sum_2 * input_value);
      unused_written_slot_8 = weighted_sum_6 * input_value;
      product_difference_3 = (float)(weighted_sum_6 * input_value) - scaled_value_3;
      scaled_value_12 = weighted_sum_4 * input_value;
      product_difference_4 = (float)(weighted_sum_4 * input_value) - (float)(weighted_sum * input_value);
      saved_weighted_sum_2 = weighted_sum_8 * input_value;
      product_difference_5 = (float)(weighted_sum_8 * input_value) - (float)(weighted_sum * input_value);
      saved_weighted_sum = scaled_value_3;
      unused_written_slot_6 = scaled_value_3;
      product_difference_6 = (float)(product_difference * product_difference_3) - (float)(product_difference_19 * product_difference_2);
      weighted_sum_24 = scaled_value_4;
      unused_written_slot_9 = scaled_value_5;
      unused_written_slot_10 = scaled_value_6;
      product_difference_7 = (float)(product_difference_19 * product_difference_4) - (float)(product_difference_5 * product_difference_3);
      rol4_result = (float)(product_difference_5 * product_difference_2) - (float)(product_difference * product_difference_4);
      square_root = fsqrt((float)((float)(product_difference_7 * product_difference_7) + (float)(product_difference_6 * product_difference_6)) + (float)(rol4_result * rol4_result));
      if ( square_root == 0.0 )
      {
        normal = 0.0;
        scaled_ratio_2 = 0.0;
        unused_written_slot = 0.0;
        scaled_ratio_3 = 0.0;
        unused_written_slot_2 = 0.0;
        scaled_ratio = 0.0;
      }
      else
      {
        scaled_ratio = (float)(1.0 / square_root) * rol4_result;
        scaled_ratio_2 = (float)(1.0 / square_root) * product_difference_6;
        scaled_ratio_3 = (float)(1.0 / square_root) * product_difference_7;
        normal = scaled_ratio_2;
        unused_written_slot_2 = scaled_ratio;
        unused_written_slot = scaled_ratio_3;
      }
      if ( sr_collision_line_triangle((float *)&point, &normal, &a7, a4, a5, &saved_weighted_sum_3, &scaled_value_12, &saved_weighted_sum_2) )
      {
        input_value_2 = a7;
        if ( a7 < *a3 )
        {
          comparison_operand = frame_word_at_20;
          *a1 = point;
          a1[2] = frame_word_at_24;
          a1[1] = comparison_operand;
          *a2 = scaled_ratio_2;
          a2[1] = scaled_ratio_3;
          a2[2] = scaled_ratio;
          *a3 = input_value_2;
          masked_bits_3 = *(_QWORD *)&dword_140404A6C[loword_result + 20074633];
          g_151A848F4 = iteration_count;
          g_151A848EC = *(_DWORD *)(masked_bits_3 + record_byte_offset);
        }
      }
      component_delta = scaled_value_4 - scaled_value_13;
      component_delta_2 = scaled_value_5 - scaled_value_11;
      product_difference_8 = (float)(component_delta_2 * product_difference_19) - (float)((float)(scaled_value_6 - saved_weighted_sum) * product_difference);
      product_difference_9 = (float)((float)(scaled_value_6 - saved_weighted_sum) * product_difference_5) - (float)(component_delta * product_difference_19);
      product_difference_10 = (float)(component_delta * product_difference) - (float)(component_delta_2 * product_difference_5);
      square_root_2 = fsqrt((float)((float)(product_difference_9 * product_difference_9) + (float)(product_difference_8 * product_difference_8)) + (float)(product_difference_10 * product_difference_10));
      if ( square_root_2 == 0.0 )
      {
        normal = 0.0;
        scaled_ratio_4 = 0.0;
        unused_written_slot = 0.0;
        scaled_ratio_5 = 0.0;
        unused_written_slot_2 = 0.0;
        scaled_ratio_6 = 0.0;
      }
      else
      {
        scaled_ratio_4 = (float)(1.0 / square_root_2) * product_difference_8;
        scaled_ratio_5 = (float)(1.0 / square_root_2) * product_difference_9;
        scaled_ratio_6 = (float)(1.0 / square_root_2) * product_difference_10;
        normal = scaled_ratio_4;
        unused_written_slot = scaled_ratio_5;
        unused_written_slot_2 = scaled_ratio_6;
      }
      if ( sr_collision_line_triangle((float *)&point, &normal, &a7, from, a5, &saved_weighted_sum_3, &saved_weighted_sum_2, &weighted_sum_24) )
      {
        input_value_3 = a7;
        if ( a7 < *a3 )
        {
          comparison_operand_2 = frame_word_at_20;
          *a1 = point;
          a1[2] = frame_word_at_24;
          a1[1] = comparison_operand_2;
          *a2 = scaled_ratio_4;
          a2[1] = scaled_ratio_5;
          a2[2] = scaled_ratio_6;
          *a3 = input_value_3;
          masked_bits_4 = *(_QWORD *)&dword_140404A6C[loword_result + 20074633];
          g_151A848F4 = iteration_count;
          g_151A848EC = *(_DWORD *)(masked_bits_4 + record_byte_offset);
        }
      }
      input_value = a8;
      integer_sum = record_byte_offset_4 + 16;
      scaled_value_2 = saved_scaled_value;
      ++iteration_count;
      converted_vector_3 = saved_converted_vector_3;
      record_byte_offset += 4;
      converted_vector_4 = saved_converted_vector_2;
      a4 = from;
      record_byte_offset_4 += 16;
    }
    while ( iteration_count < (int)dword_140404A6C[loword_result + 20074623] );
    scaled_value = *a3;
    LOWORD(hiword_result) = saved_hiword_result;
  }
  iteration_count_2 = 0;
  if ( (int)dword_140404A6C[loword_result + 20074651] > 0 )
  {
    loword_result_2 = 1;
    record_byte_offset_2 = 0;
    LODWORD(rol4_result) = 1;
    record_byte_offset_3 = 0;
    do
    {
      if ( ((unsigned __int16)loword_result_2 & (unsigned __int16)hiword_result & 0x3FF) == 0 )
      {
        masked_bits_5 = *(_QWORD *)&dword_140404A6C[loword_result + 20074653];
        saved_converted_vector = converted_vector_3;
        weighted_sum_13 = converted_vector_4 + *(float *)(masked_bits_5 + record_byte_offset_3 + 8);
        weighted_sum_14 = saved_converted_vector_3 + *(float *)(masked_bits_5 + record_byte_offset_3 + 40);
        weighted_sum_15 = converted_vector_3 + *(float *)(masked_bits_5 + record_byte_offset_3 + 16);
        weighted_sum_16 = converted_vector_3 + *(float *)(masked_bits_5 + record_byte_offset_3 + 28);
        weighted_sum_17 = saved_converted_vector_2 + *(float *)(masked_bits_5 + record_byte_offset_3 + 32);
        weighted_sum_18 = converted_vector_4 + *(float *)(masked_bits_5 + record_byte_offset_3 + 20);
        weighted_sum_19 = (float)(saved_converted_vector + *(float *)(masked_bits_5 + record_byte_offset_3 + 4)) * input_value;
        weighted_sum_20 = (float)(scaled_value_2 + *(float *)(masked_bits_5 + record_byte_offset_3 + 24)) * input_value;
        weighted_sum_21 = scaled_value_2 + *(float *)(masked_bits_5 + record_byte_offset_3 + 12);
        weighted_sum_22 = (float)(scaled_value_2 + *(float *)(masked_bits_5 + record_byte_offset_3)) * input_value;
        weighted_sum_24 = (float)(scaled_value_2 + *(float *)(masked_bits_5 + record_byte_offset_3 + 36)) * input_value;
        weighted_sum_23 = saved_converted_vector_2 + *(float *)(masked_bits_5 + record_byte_offset_3 + 44);
        saved_weighted_sum_3 = weighted_sum_22;
        scaled_value_7 = weighted_sum_15 * input_value;
        unused_written_slot_10 = weighted_sum_23 * input_value;
        scaled_value_8 = weighted_sum_16 * input_value;
        scaled_value_9 = weighted_sum_17 * input_value;
        component_delta_3 = scaled_value_7 - weighted_sum_19;
        scaled_value_10 = weighted_sum_18 * input_value;
        saved_weighted_sum = weighted_sum_19;
        unused_written_slot_5 = weighted_sum_19;
        scaled_value_11 = weighted_sum_13 * input_value;
        unused_written_slot_6 = weighted_sum_13 * input_value;
        unused_written_slot_9 = weighted_sum_14 * input_value;
        product_difference_11 = scaled_value_10 - (float)(weighted_sum_13 * input_value);
        scaled_value_12 = weighted_sum_21 * input_value;
        product_difference_12 = (float)(weighted_sum_21 * input_value) - weighted_sum_22;
        saved_weighted_sum_2 = weighted_sum_20;
        component_delta_4 = weighted_sum_20 - weighted_sum_22;
        unused_written_slot_7 = scaled_value_7;
        unused_written_slot_8 = scaled_value_10;
        component_delta_5 = scaled_value_8 - weighted_sum_19;
        unused_written_slot_3 = scaled_value_8;
        unused_written_slot_4 = scaled_value_9;
        product_difference_13 = scaled_value_9 - (float)(weighted_sum_13 * input_value);
        product_difference_14 = (float)(component_delta_5 * product_difference_11) - (float)(product_difference_13 * component_delta_3);
        product_difference_19 = (float)(component_delta_4 * component_delta_3) - (float)(component_delta_5 * product_difference_12);
        product_difference_15 = (float)(product_difference_13 * product_difference_12) - (float)(component_delta_4 * product_difference_11);
        square_root_3 = fsqrt((float)((float)(product_difference_15 * product_difference_15) + (float)(product_difference_14 * product_difference_14)) + (float)(product_difference_19 * product_difference_19));
        if ( square_root_3 == 0.0 )
        {
          normal = 0.0;
          scaled_ratio_8 = 0.0;
          unused_written_slot = 0.0;
          scaled_ratio_9 = 0.0;
          unused_written_slot_2 = 0.0;
          scaled_ratio_7 = 0.0;
        }
        else
        {
          scaled_ratio_7 = (float)(1.0 / square_root_3) * product_difference_19;
          scaled_ratio_8 = (float)(1.0 / square_root_3) * product_difference_14;
          scaled_ratio_9 = (float)(1.0 / square_root_3) * product_difference_15;
          normal = scaled_ratio_8;
          unused_written_slot_2 = scaled_ratio_7;
          unused_written_slot = scaled_ratio_9;
        }
        if ( sr_collision_line_triangle((float *)&point, &normal, &a7, a4, a5, &saved_weighted_sum_3, &scaled_value_12, &saved_weighted_sum_2) )
        {
          input_value_4 = a7;
          if ( a7 < *a3 )
          {
            comparison_operand_3 = frame_word_at_20;
            *a1 = point;
            a1[2] = frame_word_at_24;
            a1[1] = comparison_operand_3;
            *a2 = scaled_ratio_8;
            a2[1] = scaled_ratio_9;
            a2[2] = scaled_ratio_7;
            *a3 = input_value_4;
            g_151A848F4 = iteration_count_2 | 0x10000;
            g_151A848EC = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[loword_result + 20074633] + record_byte_offset_2);
          }
        }
        if ( sr_collision_line_triangle((float *)&point, &normal, &a7, from, a5, &saved_weighted_sum_3, &saved_weighted_sum_2, &weighted_sum_24) )
        {
          input_value_5 = a7;
          if ( a7 < *a3 )
          {
            comparison_operand_4 = frame_word_at_20;
            *a1 = point;
            a1[2] = frame_word_at_24;
            a1[1] = comparison_operand_4;
            *a2 = scaled_ratio_8;
            a2[1] = scaled_ratio_9;
            a2[2] = scaled_ratio_7;
            *a3 = input_value_5;
            g_151A848F4 = iteration_count_2 | 0x10000;
            g_151A848EC = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[loword_result + 20074633] + record_byte_offset_2);
          }
        }
        component_delta_6 = scaled_value_8 - saved_weighted_sum;
        component_delta_7 = scaled_value_7 - saved_weighted_sum;
        component_delta_8 = scaled_value_9 - scaled_value_11;
        product_difference_16 = (float)(component_delta_7 * component_delta_8) - (float)((float)(scaled_value_10 - scaled_value_11) * component_delta_6);
        product_difference_17 = (float)(component_delta_6 * product_difference_12) - (float)(component_delta_7 * component_delta_4);
        product_difference_18 = (float)((float)(scaled_value_10 - scaled_value_11) * component_delta_4) - (float)(component_delta_8 * product_difference_12);
        square_root_4 = fsqrt((float)((float)(product_difference_18 * product_difference_18) + (float)(product_difference_16 * product_difference_16)) + (float)(product_difference_17 * product_difference_17));
        if ( square_root_4 == 0.0 )
        {
          normal = 0.0;
          scaled_ratio_10 = 0.0;
          unused_written_slot = 0.0;
          scaled_ratio_11 = 0.0;
          unused_written_slot_2 = 0.0;
          scaled_ratio_12 = 0.0;
        }
        else
        {
          scaled_ratio_10 = (float)(1.0 / square_root_4) * product_difference_16;
          scaled_ratio_11 = (float)(1.0 / square_root_4) * product_difference_18;
          scaled_ratio_12 = (float)(1.0 / square_root_4) * product_difference_17;
          normal = scaled_ratio_10;
          unused_written_slot = scaled_ratio_11;
          unused_written_slot_2 = scaled_ratio_12;
        }
        if ( sr_collision_line_triangle((float *)&point, &normal, &a7, from, a5, &saved_weighted_sum_3, &saved_weighted_sum_2, &scaled_value_12) )
        {
          input_value_6 = a7;
          if ( a7 < *a3 )
          {
            comparison_operand_5 = frame_word_at_20;
            *a1 = point;
            a1[2] = frame_word_at_24;
            a1[1] = comparison_operand_5;
            *a2 = scaled_ratio_10;
            a2[1] = scaled_ratio_11;
            a2[2] = scaled_ratio_12;
            *a3 = input_value_6;
            g_151A848F4 = iteration_count_2 | 0x10000;
            g_151A848EC = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[loword_result + 20074633] + record_byte_offset_2);
          }
        }
        collision_line_triangle_result = sr_collision_line_triangle((float *)&point, &normal, &a7, from, a5, &saved_weighted_sum_3, &weighted_sum_24, &saved_weighted_sum_2);
        LOWORD(hiword_result) = saved_hiword_result;
        if ( collision_line_triangle_result )
        {
          input_value_7 = a7;
          if ( a7 < *a3 )
          {
            comparison_operand_6 = frame_word_at_20;
            *a1 = point;
            a1[2] = frame_word_at_24;
            a1[1] = comparison_operand_6;
            *a2 = scaled_ratio_10;
            a2[1] = scaled_ratio_11;
            a2[2] = scaled_ratio_12;
            *a3 = input_value_7;
            g_151A848F4 = iteration_count_2 | 0x10000;
            g_151A848EC = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[loword_result + 20074633] + record_byte_offset_2);
          }
        }
      }
      ++iteration_count_2;
      input_value = a8;
      record_byte_offset_3 += 48;
      scaled_value_2 = saved_scaled_value;
      record_byte_offset_2 += 4;
      converted_vector_3 = saved_converted_vector_3;
      converted_vector_4 = saved_converted_vector_2;
      a4 = from;
      rol4_result = COERCE_FLOAT(__ROL4__(LODWORD(rol4_result), 1));
      loword_result_2 = LOWORD(rol4_result);
    }
    while ( iteration_count_2 < (int)dword_140404A6C[loword_result + 20074651] );
    scaled_value = *a3;
  }
  return scaled_value < 1.0;
}
#undef normal
#undef unused_written_slot
#undef unused_written_slot_2
#undef point
#undef frame_word_at_20
#undef frame_word_at_24
#undef rol4_result
#undef saved_converted_vector_2
#undef saved_scaled_value
#undef scaled_value_11
#undef saved_weighted_sum
#undef product_difference_19
#undef saved_weighted_sum_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef saved_weighted_sum_3
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef scaled_value_12
#undef unused_written_slot_7
#undef unused_written_slot_8
#undef weighted_sum_24
#undef unused_written_slot_9
#undef unused_written_slot_10
#undef scaled_value_13
#undef record_byte_offset_4
#undef saved_hiword_result
#undef from
#undef saved_converted_vector_3

//----- (00000001400DF5B0) ----------------------------------------------------
_BOOL8            sub_1400DF5B0(float *a1, float *a2, int a3, int a4)
{
  __int64 scaled_index;
  __int64 packed_word_bits;
  __int64 record_word_offset;
  unsigned int *state_address;
  __int64 scaled_index_2;
  float combined_products;
  float combined_products_2;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 table_value;
  __int64 integer_sum;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float component_delta_4;
  float component_delta_5;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DF5B0[256];
#define normal (*(float (*)[2])(void *)(sr_frame_1400DF5B0 + 0)) /* [rsp+48h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400DF5B0 + 8)) /* [rsp+50h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1400DF5B0 + 16)) /* [rsp+58h] */
#define weighted_sum_6 (*(float (*))(void *)(sr_frame_1400DF5B0 + 20)) /* [rsp+5Ch] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400DF5B0 + 24)) /* [rsp+60h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400DF5B0 + 32)) /* [rsp+68h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400DF5B0 + 48)) /* [rsp+78h] */
#define point (*(unsigned int (*))(void *)(sr_frame_1400DF5B0 + 64)) /* [rsp+88h] */
#define frame_word_at_68 (*(__int64 (*))(void *)(sr_frame_1400DF5B0 + 68)) /* [rsp+8Ch] */
#define t (*(__int64 (*))(void *)(sr_frame_1400DF5B0 + 240)) /* [rsp+138h] */

  *(unsigned int *)&world_unknown_151a84898 = 1065353216;
  scaled_index = a4 + 15432LL * a3;
  packed_word_bits = (int)dword_140404A6C[scaled_index + 358300580];
  if ( (int)packed_word_bits >= (int)dword_140404A6C[scaled_index + 358300584] )
    return 0;
  record_word_offset = 5144LL * a3;
  state_address = &dword_140404A6C[3 * record_word_offset + 358300589 + 3 * packed_word_bits];
  do
  {
    scaled_index_2 = record_word_offset + (int)*state_address;
    combined_products = *(float *)&dword_140404A6C[3 * record_word_offset + 358297508 + 3 * (int)*(state_address - 1)];
    combined_products_2 = *(float *)&dword_140404A6C[3 * record_word_offset + 358297509 + 3 * (int)*(state_address - 1)];
    LODWORD(float_buffer_2[0]) = dword_140404A6C[3 * record_word_offset + 358297507 + 3 * (int)*(state_address - 1)];
    float_buffer_2[1] = combined_products;
    weighted_sum = *(float *)&dword_140404A6C[3 * scaled_index_2 + 358297509];
    weighted_sum_2 = *(float *)&dword_140404A6C[3 * scaled_index_2 + 358297507];
    weighted_sum_3 = *(float *)&dword_140404A6C[3 * scaled_index_2 + 358297508];
    table_value = (int)state_address[1];
    float_buffer[2] = weighted_sum;
    integer_sum = record_word_offset + table_value;
    component_delta = weighted_sum - combined_products_2;
    float_buffer[1] = weighted_sum_3;
    component_delta_2 = weighted_sum_3 - combined_products;
    float_buffer[0] = weighted_sum_2;
    component_delta_3 = weighted_sum_2 - float_buffer_2[0];
    float_buffer_2[2] = combined_products_2;
    weighted_sum_4 = *(float *)&dword_140404A6C[3 * integer_sum + 358297509];
    weighted_sum_5 = *(float *)&dword_140404A6C[3 * integer_sum + 358297507];
    weighted_sum_6 = *(float *)&dword_140404A6C[3 * integer_sum + 358297508];
    unused_written_slot_2 = weighted_sum_4;
    component_delta_4 = weighted_sum_4 - combined_products_2;
    saved_weighted_sum = weighted_sum_5;
    component_delta_5 = weighted_sum_5 - float_buffer_2[0];
    product_difference = (float)((float)(weighted_sum_6 - combined_products) * component_delta) - (float)(component_delta_4 * component_delta_2);
    product_difference_2 = (float)(component_delta_4 * component_delta_3) - (float)(component_delta_5 * component_delta);
    product_difference_3 = (float)(component_delta_5 * component_delta_2) - (float)((float)(weighted_sum_6 - combined_products) * component_delta_3);
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      normal[0] = 0.0;
      scaled_ratio = 0.0;
      unused_written_slot = 0.0;
      scaled_ratio_3 = 0.0;
      scaled_ratio_2 = 0.0;
    }
    else
    {
      scaled_ratio = product_difference * (float)(1.0 / square_root);
      scaled_ratio_2 = product_difference_3 * (float)(1.0 / square_root);
      normal[0] = scaled_ratio;
      scaled_ratio_3 = product_difference_2 * (float)(1.0 / square_root);
      unused_written_slot = scaled_ratio_2;
    }
    normal[1] = scaled_ratio_3;
    if ( sr_collision_line_triangle((float *)&point, normal, (float *)&t, a1, a2, float_buffer_2, float_buffer, &saved_weighted_sum)
      && *(float *)&t < (world_unknown_151a84898) )
    {
      g_151A84880 = point;
      *(_QWORD *)&ragdoll_unknown_height = frame_word_at_68;
      g_151A8488C = scaled_ratio;
      g_151A84890 = scaled_ratio_3;
      g_151A84894 = scaled_ratio_2;
      *(unsigned int *)&world_unknown_151a84898 = t;
    }
    LODWORD(packed_word_bits) = packed_word_bits + 1;
    state_address += 3;
  }
  while ( (int)packed_word_bits < (int)dword_140404A6C[scaled_index + 358300584] );
  return (world_unknown_151a84898) < 1.0;
}
#undef normal
#undef unused_written_slot
#undef saved_weighted_sum
#undef weighted_sum_6
#undef unused_written_slot_2
#undef float_buffer
#undef float_buffer_2
#undef point
#undef frame_word_at_68
#undef t

//----- (00000001400DF8C0) ----------------------------------------------------
_BOOL8            sub_1400DF8C0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        int a9)
{
  float source_component_y;
  float source_component_z;
  float scaled_value;
  float source_component_y_2;
  float source_component_z_2;
  float scaled_value_2;
  float component_delta;
  float component_delta_2;
  float scaled_value_3;
  float component_delta_3;
  float product_difference;
  float source_component_y_3;
  float component_delta_4;
  float scaled_value_4;
  float product_difference_2;
  float product_difference_3;
  float scaled_value_5;
  float source_component_z_3;
  float scaled_value_6;
  float source_component_y_4;

  if ( a9 )
  {
    if ( !(unsigned int)sr_collision_segment_plane(a1, a2, a3, a4, a5, a6) )
      return 0;
  }
  else if ( !(unsigned int)sr_collision_line_plane(a1, a2, a3, a4, a5, a6) )
  {
    return 0;
  }
  source_component_y = a6[1];
  source_component_z = a6[2];
  scaled_value = *a6;
  source_component_y_2 = a1[1];
  source_component_z_2 = a1[2];
  scaled_value_2 = *a1;
  if ( (float)((float)((float)((float)((float)((float)(source_component_y_2 - source_component_y) * (float)(a7[2] - source_component_z))
                                     - (float)((float)(source_component_z_2 - source_component_z) * (float)(a7[1] - source_component_y)))
                             * *a2)
                     + (float)((float)((float)((float)(source_component_z_2 - source_component_z) * (float)(*a7 - scaled_value))
                                     - (float)((float)(*a1 - scaled_value) * (float)(a7[2] - source_component_z)))
                             * a2[1]))
             + (float)((float)((float)((float)(*a1 - scaled_value) * (float)(a7[1] - source_component_y))
                             - (float)((float)(source_component_y_2 - source_component_y) * (float)(*a7 - scaled_value)))
                     * a2[2])) < 0.0 )
    return 0;
  component_delta = source_component_y_2 - a7[1];
  component_delta_2 = a8[2] - a7[2];
  component_delta_3 = source_component_z_2 - a7[2];
  product_difference = *a8 - *a7;
  component_delta_4 = a8[1] - a7[1];
  scaled_value_4 = component_delta_3 * product_difference;
  product_difference_2 = (float)(component_delta * component_delta_2) - (float)(component_delta_3 * component_delta_4);
  product_difference_3 = scaled_value_2 - *a7;
  scaled_value_5 = product_difference_3 * component_delta_4;
  source_component_z_3 = a2[2];
  scaled_value_6 = product_difference_3 * component_delta_2;
  source_component_y_4 = a2[1];
  if ( (float)((float)((float)(product_difference_2 * *a2) + (float)((float)(scaled_value_4 - scaled_value_6) * source_component_y_4))
             + (float)((float)(scaled_value_5 - (float)(component_delta * product_difference)) * source_component_z_3)) < 0.0 )
    return 0;
  scaled_value_3 = *a8;
  source_component_y_3 = a8[1];
  return (float)((float)((float)((float)((float)((float)(source_component_y_2 - source_component_y_3) * (float)(source_component_z - a8[2]))
                                       - (float)((float)(source_component_z_2 - a8[2]) * (float)(source_component_y - source_component_y_3)))
                               * *a2)
                       + (float)((float)((float)((float)(source_component_z_2 - a8[2]) * (float)(scaled_value - scaled_value_3))
                                       - (float)((float)(scaled_value_2 - scaled_value_3) * (float)(source_component_z - a8[2])))
                               * source_component_y_4))
               + (float)((float)((float)((float)(scaled_value_2 - scaled_value_3) * (float)(source_component_y - source_component_y_3))
                               - (float)((float)(source_component_y_2 - source_component_y_3) * (float)(scaled_value - scaled_value_3)))
                       * source_component_z_3)) >= 0.0;
}

