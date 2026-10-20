#include "shared_client.h"
#include "../engine/physics.h"

//----- (000000014012B2D0) ----------------------------------------------------
void sr_physics_integrate_rotation(unsigned int *a1, float *a2, float *a3, float *a4)
{
  extern void physics_integrate_rotation(float rotation[9], const float angular_momentum[3],
                                         float angular_velocity[3], const float inverse_inertia[3]);
  /* src/engine/physics_rotation.c */
  physics_integrate_rotation((float *)a1, a2, a3, a4);
}

