#include "shared_client.h"
#include "../engine/collision.h"

//----- (0000000140077C80) ----------------------------------------------------
_BOOL8 sr_collision_line_quad(float *point, float *normal, float *fraction,
                               float *from, float *to, float *a, float *b, float *c, float *d)
{
  return collision_line_quad(point, normal, fraction, from, to, a, b, c, d);
}

//----- (0000000140078230) ----------------------------------------------------
_BOOL8 sr_collision_segment_triangle(float *point, float *normal, float *fraction,
                                      float *from, float *to, float *a, float *b, float *c)
{
  return collision_segment_triangle(point, normal, fraction, from, to, a, b, c);
}

