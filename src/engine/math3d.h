/* Vector and matrix helpers shared by physics, animation and rendering.
 *
 * Matrices are 3x3 or 4x4 arrays of float in row order. Every function gives
 * the same result, bit for bit, as the routine of the original executable
 * named next to it; the order of the floating-point operations is part of
 * that and must not be rearranged.
 */
#ifndef SR_ENGINE_MATH3D_H
#define SR_ENGINE_MATH3D_H

#include <stdint.h>

/* Sine and cosine of angle radians, from the original's own C runtime routine
   (0x1401F8AC0): another library's results differ in the last bit. */
void math_sine_cosine(float angle, float *sine, float *cosine);

/* Quaternions are x, y, z, w. out = a * b (Hamilton product: b's rotation
   first, then a's). out may be a or b. 0x140105930 */
void math_quat_multiply(float out[4], const float a[4], const float b[4]);

/* The quaternion of a rotation matrix, taken from its largest diagonal
   element. 0x14010E370 */
void math_quat_from_mat3(float q[4], const float m[9]);

/* The rotation matrix of a unit quaternion. 0x14011C340 */
void math_mat3_from_quat(float m[9], const float q[4]);

/* out = v scaled to length 1, or zero when v has no length. 0x14007A240 */
void math_vec3_normalize(float out[3], const float v[3]);

/* a - b for two angles in radians, taking the short way round when they lie
   on opposite sides of the +-pi seam. 0x14000B5F0 */
float math_angle_difference(float a, float b);

/* out = a * b. out may be a or b. 0x14007A010 */
void math_mat3_multiply(float out[9], const float a[9], const float b[9]);

/* out = b * transpose(a). out may be a or b. 0x14007AE70 */
void math_mat3_multiply_transposed(float out[9], const float a[9], const float b[9]);

/* Transpose as raw words, preserving all float bits; any overlap is valid.
   0x14007CA00 */
void math_mat3_transpose(float out[9], const float matrix[9]);

extern int32_t dword_1402B3840[];
#define math_fixed_sine dword_1402B3840
/* Rotate signed 16.16 coordinates using the original 65,536-angle table.
   Each product rounds separately, and final sums wrap at 32 bits.
   Returns the zero-extended new y word. 0x14007D0B0 */
uint32_t math_fixed_vec2_rotate(int32_t vector[2], uint16_t angle);

/* out = a * b. out may be a or b. 0x14007A0E0 */
void math_mat4_multiply(float out[16], const float a[16], const float b[16]);

/* Turns each row of a rotation matrix about a unit axis by angle radians and
   rescales the row to length 1. 0x14007B2A0 */
void math_mat3_rotate_rows(float matrix[9], const float axis[3], float angle);

/* Turns v about a unit axis by angle radians, in place. 0x14007B4D0 */
void math_vec3_rotate(float v[3], const float axis[3], float angle);

/* out = v * m, v taken as a row vector. out may be v. 0x14007B0F0 */
void math_vec3_multiply_mat3(float out[3], const float v[3], const float m[9]);

/* out = m * v, v taken as a column vector. out may be v. 0x140079D60 */
void math_mat4_multiply_vec4(float out[4], const float m[16], const float v[4]);

/* Unit normal of the triangle a, b, c: (c - a) x (b - a) normalized as
   math_vec3_normalize() does. 0x14006EC40 */
void math_triangle_normal(float out[3], const float a[3], const float b[3], const float c[3]);

/* Distance from point p to the segment from a to b. 0x14007ABA0 */
float math_point_segment_distance(const float a[3], const float b[3], const float p[3]);

/* Orthographic projection mapping the box [left, right] x [bottom, top] x
   [-z_near, -z_far] to the unit cube, laid out like glOrtho's matrix transposed
   (translation in elements 12-14). 0x140079F00 */
void math_mat4_ortho(float out[16], float left, float right, float bottom, float top,
                     float z_near, float z_far);

/* Two axes across a unit direction, as bullets and decals orient themselves:
   side is world x crossed with the direction (world y instead when the
   direction's y is under 0.707 or not a number), up is the direction crossed
   with side; each is made length 1. (Inline in the original's callers.) */
void math_frame_across(const float direction[3], float side[3], float up[3]);

/* A hash-based noise generator shared by several effects: the next value,
   0 to 2^31 - 1. Its seed (0x1602E12C0) advances by one per call. */
int32_t math_noise_next(void);

#endif
