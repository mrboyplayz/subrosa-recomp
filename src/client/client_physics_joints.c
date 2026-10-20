#include "shared_client.h"

//----- (000000014001BF70) ----------------------------------------------------
__int64            sr_physics_solve_joint(int a1)
{
  extern void physics_solve_joint(int bond);
  physics_solve_joint(a1);
  return 0;
}
#undef unused_macro_alias
#undef unused_macro_alias_2

//----- (000000014001C780) ----------------------------------------------------
__int64            sr_physics_prepare_joint(int a1)
{
  extern void physics_prepare_joint(int bond);
  physics_prepare_joint(a1);
  return a1;
}

//----- (000000014001CBB0) ----------------------------------------------------
__int64            sr_physics_solve_point_velocity(int a1)
{
  extern void physics_solve_point_velocity(int constraint);
  physics_solve_point_velocity(a1);
  return 0;
}

