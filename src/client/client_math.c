#include "shared_client.h"
#include "../engine/math3d.h"

//----- (000000014000B5F0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sr_math_angle_difference(double a1, float a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern float math_angle_difference(float a, float b);
  /* a arrives as float bits in the low lane; callers read lane 0 of the result. */
  return _mm_set_ss(math_angle_difference(*(float *)&a1, a2));
}

// 14000B5F0: inconsistent variable size for 'xmm0_8.8'

//----- (000000014006EC40) ----------------------------------------------------
__int64            sr_math_triangle_normal(float *a1, float *a2, float *a3, float *a4)
{
  extern void math_triangle_normal(float out[3], const float a[3], const float b[3], const float c[3]);
  math_triangle_normal(a1, a2, a3, a4);
  return 0;
}

//----- (0000000140079D60) ----------------------------------------------------
__int64            sr_math_mat4_multiply_vec4(_OWORD *a1, __int64 a2, float *a3)
{
  extern void math_mat4_multiply_vec4(float out[4], const float m[16], const float v[4]);
  math_mat4_multiply_vec4((float *)a1, (const float *)a2, a3);
  return 0;
}
#undef unused_macro_alias
#undef unused_macro_alias_2

//----- (0000000140079F00) ----------------------------------------------------
__int64            sr_math_mat4_ortho(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  extern void math_mat4_ortho(float out[16], float left, float right, float bottom, float top,
                              float z_near, float z_far);
  math_mat4_ortho((float *)a1, a2, a3, a4, a5, a6, a7);
  return 0;
}

//----- (000000014007A010) ----------------------------------------------------
__int64            sr_math_mat3_multiply(__int64 a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat3_multiply(float out[9], const float a[9], const float b[9]);
  math_mat3_multiply((float *)a1, (const float *)a2, (const float *)a3);
  return 0;
}

//----- (000000014007A0E0)
__int64 sr_math_mat4_multiply(_OWORD *a1,__int64 a2,__int64 a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat4_multiply(float out[16], const float a[16], const float b[16]);
  math_mat4_multiply((float *)a1, (const float *)a2, (const float *)a3);
  return a3 + 48; /* value the original leaves in RAX */
}

//----- (000000014007A240) ----------------------------------------------------
__int64            sr_math_vec3_normalize(__int64 a1, float *a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_vec3_normalize(float out[3], const float v[3]);
  math_vec3_normalize((float *)a1, a2);
  return 0;
}

//----- (000000014007ABA0) ----------------------------------------------------
float            sr_math_point_segment_distance(float *a1, float *a2, float *a3)
{
  extern float math_point_segment_distance(const float a[3], const float b[3], const float p[3]);
  return math_point_segment_distance(a1, a2, a3);
}

//----- (000000014007AE70) ----------------------------------------------------
_UNKNOWN **           sr_math_mat3_multiply_transposed(float *a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat3_multiply_transposed(float out[9], const float a[9], const float b[9]);
  math_mat3_multiply_transposed(a1, a2, a3);
  return 0;
}

//----- (000000014007B0F0) ----------------------------------------------------
void            sr_math_vec3_multiply_mat3(float *a1, float *a2, float *a3)
{
  extern void math_vec3_multiply_mat3(float out[3], const float v[3], const float m[9]);
  math_vec3_multiply_mat3(a1, a2, a3);
}

//----- (000000014007B2A0) ----------------------------------------------------
void            sr_math_mat3_rotate_rows(__int64 a1, float *a2, double a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat3_rotate_rows(float matrix[9], const float axis[3], float angle);
  /* The angle arrives as float bits in the low lane of a double. */
  math_mat3_rotate_rows((float *)a1, a2, *(float *)&a3);
}
//----- (000000014007B4D0) ----------------------------------------------------
void            sr_math_vec3_rotate(float *a1, float *a2, double a3)
{
  extern void math_vec3_rotate(float v[3], const float axis[3], float angle);
  math_vec3_rotate(a1, a2, *(float *)&a3);
}

//----- (0000000140105770) ----------------------------------------------------
__int64 sr_math_mat3_multiply_copy(__int64 output, __int64 left, __int64 right)
{
  math_mat3_multiply((float *)output, (const float *)left, (const float *)right);
  return 0; /* compatibility result discarded by reviewed callers */
}

//----- (0000000140105840) ----------------------------------------------------
__int64 sr_math_mat4_multiply_copy(_OWORD *output, __int64 left, __int64 right)
{
  math_mat4_multiply((float *)output, (const float *)left, (const float *)right);
  return 0; /* compatibility result discarded by reviewed callers */
}

//----- (0000000140105930) ----------------------------------------------------
_UNKNOWN **           sr_math_quat_multiply(float *a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). No caller uses the result. */
  extern void math_quat_multiply(float out[4], const float a[4], const float b[4]);
  math_quat_multiply(a1, a2, a3);
  return (_UNKNOWN **)a1;
}

//----- (000000014010E370) ----------------------------------------------------
void            sr_math_quat_from_mat3(float *a1, float *a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void math_quat_from_mat3(float *, const float *);
  math_quat_from_mat3(a1, a2);
}

//----- (000000014011C080) ----------------------------------------------------
_UNKNOWN **           sr_math_mat3_multiply_transposed_alt(float *a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void math_mat3_multiply_transposed(float *, const float *, const float *);
  math_mat3_multiply_transposed(a1, a2, a3);
  return (_UNKNOWN **)a1;
}

//----- (000000014011C300) ----------------------------------------------------
float            sr_math_quat_to_axis_angle(__int64 a1, float *a2)
{
  double acos_result;

  sr_math_vec3_normalize(a1, a2);
  acos_result = acos(fminf(fmaxf(a2[3], -1.0), 1.0));
  return acos_result + acos_result;
}

//----- (000000014011C340) ----------------------------------------------------
_UNKNOWN **           sr_math_mat3_from_quat(float *a1, float *a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void math_mat3_from_quat(float *, const float *);
  math_mat3_from_quat(a1, a2);
  return (_UNKNOWN **)a1;
}

//----- (000000014011C490) ----------------------------------------------------
void            sr_math_quat_to_rotation_vector(float *a1, float *a2)
{
  double acos_result;
  float component_sum;
  float scaled_value;
  float scaled_value_2;

  sr_math_vec3_normalize((__int64)a1, a2);
  acos_result = acos(fminf(fmaxf(a2[3], -1.0), 1.0));
  component_sum = acos_result + acos_result;
  *(float *)&acos_result = component_sum * *a1;
  scaled_value = component_sum * a1[1];
  scaled_value_2 = component_sum * a1[2];
  *a1 = *(float *)&acos_result;
  a1[1] = scaled_value;
  a1[2] = scaled_value_2;
}

