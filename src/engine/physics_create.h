/* Making bodies and the bonds that hold two bodies together. */
#ifndef SR_ENGINE_PHYSICS_CREATE_H
#define SR_ENGINE_PHYSICS_CREATE_H

#include "physics.h"

/* Takes the first free body, clears it and sets it up: type, place,
   rotation, velocity (left zero for a null pointer), mass, the inertia
   about its three axes with their inverses (0 for an inertia that is not
   above 0) and the least of the three. Returns the
   body, or -1 when all 8192 are taken. 0x14005CF80 */
int physics_create_body(int type, const float position[3], const float rotation[9], const float velocity[3],
                        float mass, const float inertia[3]);

/* A lasting bond (type 8) that holds two bodies at the same orientation,
   stiffness 1/16 and damping 1/8, with its constraint cleared. Returns the
   bond, or -1 when all are taken. 0x14004E5B0 */
int physics_create_rotation_bond(int body, int other_body);

/* A lasting bond (type 7) that holds a point of one body to a point of
   another (each given in its body's axes), stiffness 1/4 and damping 3/8.
   0x14004E430 */
int physics_create_point_bond(int body, int other_body, const float local_point[3], const float other_local_point[3]);

#endif
