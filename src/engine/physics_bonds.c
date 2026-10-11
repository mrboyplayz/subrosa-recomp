/* Bond lifetimes and contacts. See physics.h. */
#include <string.h>
#include "physics.h"

/* Removes bond from a list of bond indices: each occurrence is replaced by
   the last entry and the list shortened, as the original does. */
static void remove_from_list(int32_t *count, int32_t *entries, int bond)
{
    int index = 0;

    if (*count <= 0)
        return;
    do {
        if (entries[index] == bond) {
            int last = *count;
            *count = last - 1;
            entries[index] = entries[last - 1];
        } else {
            index++;
        }
    } while (index < *count);
}

void physics_remove_bond(int index)
{
    PhysicsBond *bond;
    /* The point and vehicle lists run on past their declared arrays. */
    const int32_t *points, *vehicles;

    if ((uint32_t)index > PHYSICS_BOND_CAPACITY - 1)
        return;
    bond = &physics_bonds[index];
    points = (const int32_t *)(const void *)((const uint8_t *)bond + 0x18);
    vehicles = (const int32_t *)(const void *)((const uint8_t *)bond + 0x98);
    for (int k = 0; k < bond->point_count; k++) {
        if (points[k] != -1) {
            PhysicsPoint *point = &physics_points[points[k]];
            remove_from_list(&point->bond_count, point->bonds, index);
        }
    }
    for (int k = 0; k < bond->vehicle_count; k++) {
        PhysicsVehicle *vehicle = &physics_vehicles[vehicles[k]];
        remove_from_list(&vehicle->bond_count, vehicle->bonds, index);
    }
    bond->active = 0;
}

void physics_expire_bonds(void)
{
    for (int index = 0; index < PHYSICS_BOND_CAPACITY; index++) {
        PhysicsBond *bond = &physics_bonds[index];
        int ticks;

        if (!bond->active)
            continue;
        ticks = bond->lifetime;
        if (ticks < 0x10000)
            bond->lifetime = --ticks;
        if (ticks > 0)
            continue;
        physics_remove_bond(index);
    }
}

int physics_add_contact(int body_a, int body_b, const float offset_a[3], const float offset_b[3],
                        const float normal[3], float depth, float friction, float depth_scale, float stiffness)
{
    int index = 0;
    PhysicsBond *bond;
    PhysicsConstraint *constraint;
    float mass_a, mass_b, inverse;

    while (physics_bonds[index].active) {
        if (++index >= PHYSICS_BOND_CAPACITY)
            return -1;
    }
    bond = &physics_bonds[index];
    memset((uint8_t *)bond + 4, 0, sizeof *bond - 4);
    bond->active = 1;
    bond->type = PHYSICS_CONSTRAINT_BODY_BODY_CONTACT;
    bond->lifetime = 0;
    bond->pass_mask = 0;

    /* Everything but body_a is cleared, then both bodies are set. */
    constraint = &physics_constraints[index];
    memset((uint8_t *)constraint + 2, 0, sizeof *constraint - 2);
    constraint->body_a = (uint16_t)body_a;
    constraint->body_b = (uint16_t)body_b;
    memcpy(constraint->offset_a, offset_a, sizeof constraint->offset_a);
    memcpy(constraint->offset_b, offset_b, sizeof constraint->offset_b);
    memcpy(constraint->bias, normal, sizeof constraint->bias);
    constraint->depth = depth * depth_scale;
    constraint->stiffness = stiffness;
    constraint->friction = friction;

    mass_a = physics_bodies[body_a].mass;
    mass_b = physics_bodies[body_b].mass;
    inverse = 1.0f / (mass_b + mass_a);
    constraint->share_a = mass_b * inverse;
    constraint->share_b = mass_a * inverse;
    return index;
}

uintptr_t physics_add_world_contact(int16_t body, const float offset[3], const float normal[3],
                                    float depth, float friction, float depth_scale, float stiffness)
{
    int index = 0;
    while (physics_bonds[index].active) {
        if (++index >= PHYSICS_BOND_CAPACITY)
            return (uintptr_t)&physics_bonds[PHYSICS_BOND_CAPACITY];
    }
    PhysicsBond *bond = &physics_bonds[index];
    memset((uint8_t *)bond + 4, 0, sizeof *bond - 4);
    float scaled_depth = depth * depth_scale;
    bond->active = 1;
    bond->type = PHYSICS_CONSTRAINT_BODY_CONTACT;
    bond->lifetime = 0;
    bond->pass_mask = 0;
    PhysicsConstraint *constraint = &physics_constraints[index];
    memset((uint8_t *)constraint + 2, 0, sizeof *constraint - 2);
    constraint->body_a = (uint16_t)body;
    for (int axis = 0; axis < 3; axis++)
        constraint->offset_a[axis] = offset[axis];
    for (int axis = 0; axis < 3; axis++)
        constraint->bias[axis] = normal[axis];
    constraint->stiffness = stiffness;
    constraint->friction = friction;
    constraint->depth = scaled_depth;
    /* Retain the native return: the last normal word, or the end pointer
       above when no bond is free. */
    uint32_t result;
    memcpy(&result, &constraint->bias[2], sizeof result);
    return result;
}
