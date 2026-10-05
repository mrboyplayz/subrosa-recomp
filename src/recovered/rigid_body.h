#ifndef SR_RECOVERED_RIGID_BODY_H
#define SR_RECOVERED_RIGID_BODY_H
#include "../rebuild/suitium_types.h"

enum { SR_RIGID_BODY_COUNT = 8192 };
typedef struct {
    uint32_t active, kind, unknown_08;
    int32_t owner_id;
    uint32_t unknown_10;
    float mass;
    SrCVector3 position, velocity;
    uint32_t unknown_30[3];
    SrCOrientation orientation;
    uint32_t unknown_60[9];
    SrCVector3 scale, reciprocal_scale;
    float minimum_scale;
    uint32_t unknown_a0[3];
    float parameter_ac, parameter_b0, parameter_b4;
    uint32_t unknown_b8;
} SrRigidBody;

_Static_assert(sizeof(SrRigidBody) == 188, "Original rigid-body array stride");
_Static_assert(offsetof(SrRigidBody, position) == 24, "Position offset");
_Static_assert(offsetof(SrRigidBody, orientation) == 60, "Orientation offset");
_Static_assert(offsetof(SrRigidBody, scale) == 132, "Scale offset");
_Static_assert(offsetof(SrRigidBody, parameter_ac) == 172, "Parameter offset");

/* Original 0x14005CF80. Inputs must reference valid external storage; velocity
   alone may be NULL. The full pool returns -1 without changing its contents. */
int32_t sr_rigid_body_create(SrRigidBody bodies[SR_RIGID_BODY_COUNT], uint32_t kind,
    const SrCVector3 *position, const SrCOrientation *orientation,
    const SrCVector3 *velocity, float mass, const SrCVector3 *scale);
#endif
