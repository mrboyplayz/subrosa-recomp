#include "shared_client.h"
#include "../engine/disk.h"

//----- (000000014008EC40) ----------------------------------------------------
float            sr_math_curve_point(int degree, float t, float point0, float point1, float point2, float point3)
{
  extern float math_curve_point(int degree, float t, float point0, float point1, float point2, float point3);
  return math_curve_point(degree, t, point0, point1, point2, point3);
}

//----- (0000000140187180) ----------------------------------------------------
float            sr_math_curve_point_route(int degree, float t, float point0, float point1, float point2, float point3)
{
  extern float math_curve_point(int degree, float t, float point0, float point1, float point2, float point3);
  return math_curve_point(degree, t, point0, point1, point2, point3);
}

//----- (00000001401872F0) ----------------------------------------------------
float            sr_math_curve_derivative(int degree, float t, float point0, float point1, float point2, float point3)
{
  extern float math_curve_derivative(int degree, float t, float point0, float point1, float point2, float point3);
  return math_curve_derivative(degree, t, point0, point1, point2, point3);
}
