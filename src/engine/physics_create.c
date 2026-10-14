/* Object creation preserves the order of the original scalar stores: an
 * input vector can refer to the record being initialized. */
#include <string.h>
#include "physics.h"
#include "arith.h"

static void copy_words(float *destination, const float *source, int count)
{
    for (int i = 0; i < count; ++i) {
        uint32_t word;
        memcpy(&word, source + i, sizeof(word));
        memcpy(destination + i, &word, sizeof(word));
    }
}

uint32_t physics_find_free_bond(void)
{
    for (uint32_t i = 0; i < PHYSICS_BOND_CAPACITY; ++i)
        if (!physics_bonds[i].active) return i;
    return UINT32_MAX;
}

uint32_t physics_create_body(uint32_t type, const float position[3],
                             const float rotation[9], const float velocity[3],
                             float mass, const float inertia[3])
{
    uint32_t index;
    for (index = 0; index < PHYSICS_BODY_CAPACITY; ++index)
        if (!physics_bodies[index].active) break;
    if (index == PHYSICS_BODY_CAPACITY) return UINT32_MAX;

    PhysicsBody *body = &physics_bodies[index];
    memset((uint8_t *)body + 4, 0, sizeof(*body) - 4);
    body->mass = mass;
    body->active = 1;
    body->type = (int32_t)type;
    const float defaults[3] = {0.5f, 0.25f, 0.5f};
    memcpy(body->unknown_a0 + 12, defaults, sizeof(defaults));
    copy_words(body->position, position, 3);
    copy_words(body->rotation, rotation, 9);
    if (velocity) copy_words(body->velocity, velocity, 3);
    copy_words(body->unknown_84, inertia, 3);
    for (int i = 0; i < 3; ++i) {
        float moment = body->unknown_84[i];
        body->inverse_inertia[i] = moment > 0.0f ? 1.0f / moment : 0.0f;
    }
    /* Keep the selected word in an integer register. MINSS would flush a
     * selected subnormal when DAZ is enabled; the native COMISS/MOV does not. */
    uint32_t least;
    memcpy(&least, &body->unknown_84[0], 4);
    memcpy(&body->unknown_9c, &least, 4);
    for (int i = 1; i < 3; ++i) {
        uint32_t next;
        memcpy(&next, &body->unknown_84[i], 4);
        if (_mm_comigt_ss(_mm_castsi128_ps(_mm_cvtsi32_si128((int32_t)least)),
                         _mm_castsi128_ps(_mm_cvtsi32_si128((int32_t)next)))) {
            least = next;
            memcpy(&body->unknown_9c, &least, 4);
        }
    }
    return index;
}

static void initialize_body_bond(uint32_t index, uint32_t body, uint32_t other,
                                 int type, float stiffness, float damping)
{
    PhysicsBond *bond = &physics_bonds[index];
    memset((uint8_t *)bond + 4, 0, sizeof(*bond) - 4);
    bond->active = 1;
    bond->type = type;
    bond->lifetime = 65536;
    bond->pass_mask = 0;
    bond->other_body = (int32_t)other;
    bond->body = (int32_t)body;
    bond->unknown_a0 = -1;
    bond->stiffness = stiffness;
    bond->damping = damping;
    memset(&physics_constraints[index], 0, sizeof(PhysicsConstraint));
}

uint32_t physics_create_body_bond(uint32_t body, uint32_t other,
                                  const float point[3], const float other_point[3])
{
    uint32_t index = physics_find_free_bond();
    if (index == UINT32_MAX) return index;
    initialize_body_bond(index, body, other, PHYSICS_BOND_BODIES, 0.25f, 0.375f);
    copy_words(physics_bonds[index].local_point, point, 3);
    copy_words(physics_bonds[index].other_local_point, other_point, 3);
    return index;
}

uint32_t physics_create_rotation_bond(uint32_t body, uint32_t other)
{
    uint32_t index = physics_find_free_bond();
    if (index == UINT32_MAX) return index;
    initialize_body_bond(index, body, other, PHYSICS_BOND_ROTATION, 0.0625f, 0.125f);
    return index;
}

uint32_t physics_create_point(uint32_t kind, const float position[3],
                              const float velocity[3], float mass, uint32_t vehicle)
{
    int32_t index = physics_point_count;
    if (index >= PHYSICS_POINT_CAPACITY) return UINT32_MAX;
    PhysicsPoint *point = &physics_points[index];
    memset((uint8_t *)point + 4, 0, sizeof(*point) - 4);
    point->unknown_0 = (int32_t)kind;
    point->lifetime = 65536;
    copy_words(point->position, position, 3);
    copy_words(point->previous_position, position, 3);
    if (velocity) copy_words(point->velocity, velocity, 3);
    point->mass = mass;
    const uint32_t gravity_bits = 993158992;
    memcpy(&point->gravity, &gravity_bits, sizeof(gravity_bits));
    point->unknown_10 = 0x3F800000;
    if (vehicle != UINT32_MAX) point->vehicles[point->vehicle_count++] = (int32_t)vehicle;
    physics_point_count = add_int(index, 1);
    return (uint32_t)index;
}
