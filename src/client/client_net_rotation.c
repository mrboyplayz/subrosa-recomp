#include "shared_client.h"
#include "../engine/net_bits.h"

//----- (0000000140114D40) ----------------------------------------------------
__int64            sr_net_encode_rotation_13bit(_DWORD *a1, float *a2)
{
  double absolute_quaternion_y;
  double absolute_quaternion_z;
  double absolute_quaternion_x;
  bool y_is_smaller_than_x;
  bool y_equals_x;
  double largest_xy_magnitude;
  double absolute_quaternion_w;
  __int64 largest_component_index;
  bool z_fits_xy_maximum;
  double largest_xyz_magnitude;
  __int64 component_order_index;
  __int64 encoded_component_count;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140114D40[64];
#define unused_stack_word (*(__int64 (*))(void *)(sr_frame_140114D40 + 0)) /* [rsp+0h] */
#define quaternion (*(__m128 (*))(void *)(sr_frame_140114D40 + 32)) /* [rsp+20h] */
#define unused_frame_cookie (*(__int64 (*))(void *)(sr_frame_140114D40 + 56)) /* [rsp+38h] */

  sr_math_quat_from_mat3(SR_VEC_LANES(128, quaternion, f32), a2);
  absolute_quaternion_y = fabs(SR_VEC_LANES(128, quaternion, f32)[1]);
  absolute_quaternion_z = fabs(SR_VEC_LANES(128, quaternion, f32)[2]);
  absolute_quaternion_x = fabs(SR_VEC_LANES(128, quaternion, f32)[0]);
  y_is_smaller_than_x = absolute_quaternion_y < absolute_quaternion_x;
  y_equals_x = absolute_quaternion_y == absolute_quaternion_x;
  largest_xy_magnitude = fmax(absolute_quaternion_y, absolute_quaternion_x);
  absolute_quaternion_w = fabs(SR_VEC_LANES(128, quaternion, f32)[3]);
  largest_component_index = !y_is_smaller_than_x && !y_equals_x;
  z_fits_xy_maximum = absolute_quaternion_z <= largest_xy_magnitude;
  largest_xyz_magnitude = fmax(absolute_quaternion_z, largest_xy_magnitude);
  if ( !z_fits_xy_maximum )
    largest_component_index = 2;
  if ( absolute_quaternion_w > largest_xyz_magnitude )
    largest_component_index = 3;
  if ( SR_VEC_LANES(128, quaternion, f32)[largest_component_index] < 0.0 )
    quaternion = _mm_xor_ps(quaternion, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
  component_order_index = dword_140301DC8;
  encoded_component_count = 1;
  *a1 = largest_component_index;
  if ( (_DWORD)component_order_index != (_DWORD)largest_component_index )
  {
    encoded_component_count = 2;
    a1[1] = (int)(SR_VEC_LANES(128, quaternion, f32)[component_order_index] * 5791.911644699011);
  }
  if ( dword_140301DCC != (_DWORD)largest_component_index )
    a1[encoded_component_count++] = (int)(SR_VEC_LANES(128, quaternion, f32)[dword_140301DCC] * 5791.911644699011);
  if ( dword_140301DD0 != (_DWORD)largest_component_index )
    a1[encoded_component_count++] = (int)(SR_VEC_LANES(128, quaternion, f32)[dword_140301DD0] * 5791.911644699011);
  if ( dword_140301DD4 != (_DWORD)largest_component_index )
    a1[encoded_component_count] = (int)(SR_VEC_LANES(128, quaternion, f32)[dword_140301DD4] * 5791.911644699011);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_stack_word
#undef quaternion
#undef unused_frame_cookie

//----- (0000000140114E90) ----------------------------------------------------
__int64            sr_net_encode_rotation(_DWORD *a1, float *a2, char a3)
{
  __int64 encoded_component_count;
  double quantization_limit;
  double absolute_quaternion_y;
  double absolute_quaternion_z;
  double absolute_quaternion_x;
  bool y_is_smaller_than_x;
  bool y_equals_x;
  double largest_xy_magnitude;
  double absolute_quaternion_w;
  __int64 largest_component_index;
  bool z_fits_xy_maximum;
  double largest_xyz_magnitude;
  __int64 component_order_index;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140114E90[64];
#define unused_stack_word (*(__int64 (*))(void *)(sr_frame_140114E90 + 0)) /* [rsp+0h] */
#define quaternion (*(__m128 (*))(void *)(sr_frame_140114E90 + 32)) /* [rsp+20h] */
#define unused_frame_cookie (*(__int64 (*))(void *)(sr_frame_140114E90 + 56)) /* [rsp+38h] */

  encoded_component_count = 1;
  quantization_limit = (double)(1 << (a3 - 1)) - 1.0;
  sr_math_quat_from_mat3(SR_VEC_LANES(128, quaternion, f32), a2);
  absolute_quaternion_y = fabs(SR_VEC_LANES(128, quaternion, f32)[1]);
  absolute_quaternion_z = fabs(SR_VEC_LANES(128, quaternion, f32)[2]);
  absolute_quaternion_x = fabs(SR_VEC_LANES(128, quaternion, f32)[0]);
  y_is_smaller_than_x = absolute_quaternion_y < absolute_quaternion_x;
  y_equals_x = absolute_quaternion_y == absolute_quaternion_x;
  largest_xy_magnitude = fmax(absolute_quaternion_y, absolute_quaternion_x);
  absolute_quaternion_w = fabs(SR_VEC_LANES(128, quaternion, f32)[3]);
  largest_component_index = !y_is_smaller_than_x && !y_equals_x;
  z_fits_xy_maximum = absolute_quaternion_z <= largest_xy_magnitude;
  largest_xyz_magnitude = fmax(absolute_quaternion_z, largest_xy_magnitude);
  if ( !z_fits_xy_maximum )
    largest_component_index = 2;
  if ( absolute_quaternion_w > largest_xyz_magnitude )
    largest_component_index = 3;
  if ( SR_VEC_LANES(128, quaternion, f32)[largest_component_index] < 0.0 )
    quaternion = _mm_xor_ps(quaternion, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
  component_order_index = dword_140301DE8;
  *a1 = largest_component_index;
  if ( (_DWORD)component_order_index != (_DWORD)largest_component_index )
  {
    encoded_component_count = 2;
    a1[1] = (int)(SR_VEC_LANES(128, quaternion, f32)[component_order_index] * 0.7071067811865476 * quantization_limit);
  }
  if ( dword_140301DEC != (_DWORD)largest_component_index )
    a1[encoded_component_count++] = (int)(SR_VEC_LANES(128, quaternion, f32)[dword_140301DEC] * 0.7071067811865476 * quantization_limit);
  if ( dword_140301DF0 != (_DWORD)largest_component_index )
    a1[encoded_component_count++] = (int)(SR_VEC_LANES(128, quaternion, f32)[dword_140301DF0] * 0.7071067811865476 * quantization_limit);
  if ( dword_140301DF4 != (_DWORD)largest_component_index )
    a1[encoded_component_count] = (int)(SR_VEC_LANES(128, quaternion, f32)[dword_140301DF4] * 0.7071067811865476 * quantization_limit);
  return 0; /* the function has no caller */
}
#undef unused_stack_word
#undef quaternion
#undef unused_frame_cookie

