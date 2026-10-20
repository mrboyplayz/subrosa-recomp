#include "shared_client.h"
#include "../engine/physics.h"
#include "../engine/physics_kernels.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014002D370) ----------------------------------------------------
float *           sr_collision_triangle_weights(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  extern void collision_triangle_weights(float *weights, const float *point, const float *a, const float *b,
                                         const float *c);
  /* src/engine/collision.c; the original returns a5 (a leftover register). */
  collision_triangle_weights(a1, a2, a3, a4, a5);
  return a5;
}

//----- (0000000140035690) ----------------------------------------------------
__int64            sr_collision_sphere_triangle(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        float *a7,
        float *a8,
        float *a9)
{
  extern int collision_sphere_triangle(float *point, float *normal, float *distance, const float *from, const float *to,
                                       float radius, const float *a, const float *b, const float *c);
  float radius;
  /* src/engine/collision.c; the radius arrives as float bits in a stack slot. */
  memcpy(&radius, &a6, sizeof radius);
  return collision_sphere_triangle(a1, a2, a3, a4, a5, radius, a7, a8, a9);
}

//----- (0000000140035B70) ----------------------------------------------------
__int64            sr_collision_sphere_triangle_face(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        float *a8,
        float *a9)
{
  extern int collision_sphere_triangle_face(float *point, float *normal, float *distance, const float *from,
                                            const float *to, float radius, const float *a, const float *b,
                                            const float *c);
  /* src/engine/collision.c */
  return collision_sphere_triangle_face(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

//----- (0000000140035E50) ----------------------------------------------------
__int64            sr_collision_sweep_train(int a1, float *a2, float *a3, float a4)
{
  extern int collision_sweep_train(int vehicle, const float *from, const float *to, float radius);
  /* src/engine/collision.c */
  return collision_sweep_train(a1, a2, a3, a4);
}

//----- (0000000140037220) ----------------------------------------------------
__int64            sr_collision_sweep_vehicle(int a1, float *a2, float *a3, float a4)
{
  extern int collision_sweep_vehicle(int vehicle, const float *from, const float *to, float radius);
  /* src/engine/collision.c */
  return collision_sweep_vehicle(a1, a2, a3, a4);
}

//----- (00000001400779F0) ----------------------------------------------------
__int64            sr_collision_line_plane(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  extern int collision_line_plane(float *point, const float *normal, float *t, const float *from, const float *to,
                                  const float *plane_point);
  /* src/engine/collision.c */
  return collision_line_plane(a1, a2, a3, a4, a5, a6);
}

//----- (0000000140077FA0) ----------------------------------------------------
_BOOL8            sr_collision_line_triangle(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
  extern int collision_line_triangle(float *point, const float *normal, float *t, const float *from, const float *to,
                                     const float *a, const float *b, const float *c);
  /* src/engine/collision.c */
  return collision_line_triangle(a1, a2, a3, a4, a5, a6, a7, a8);
}

//----- (00000001400D6890) ----------------------------------------------------
_BOOL8            sr_collision_segment_segment(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float a8)
{
  extern int collision_segment_segment(float *on_a, float *on_b, float *distance, const float *a0, const float *a1,
                                       const float *b0, const float *b1, float radius);
  /* src/engine/collision.c */
  return collision_segment_segment(a1, a2, a3, a4, a5, a6, a7, a8);
}

//----- (00000001400DF380) ----------------------------------------------------
__int64            sr_collision_ray_sphere(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float a7)
{
  extern int collision_ray_sphere(float *point, float *normal, float *fraction, const float *from, const float *to,
                                  const float *centre, float radius);
  /* src/engine/collision.c */
  return collision_ray_sphere(a1, a2, a3, a4, a5, a6, a7);
}

//----- (00000001400DFB70) ----------------------------------------------------
__int64            sr_collision_ray_vehicle(int a1, float *a2, float *a3, int a4)
{
  extern int collision_ray_vehicle(int vehicle, const float *from, const float *to, int wheels);
  /* src/engine/collision.c */
  return collision_ray_vehicle(a1, a2, a3, a4);
}
