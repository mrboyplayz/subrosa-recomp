/* A human struck by a vehicle.
 *
 * Every bone but the feet is swept as a capsule against the vehicle's hull.
 * A hit makes a contact between the bone and the vehicle's body; a hit hard
 * enough on the trunk, head or legs takes 120 off the human's life, and the
 * blow that ends it is recorded and scored against the vehicle's driver.
 */
#include "arith.h"
#include "collision.h"
#include "frame.h"
#include "human.h"
#include "physics.h"
#include "world.h"

/* ---- client entry points ---------------------------------------------------- */

/* The hull sweep (collision_sweep_vehicle) and contact creation
   (physics_add_contact) are engine code; they are called through the
   client's entry points so the comparison with the original can replace
   them with recording stubs. */
extern long long sub_140037220(int vehicle, float *from, float *to, float radius);
extern long long sub_1400052C0(int body_a, int body_b, unsigned int *offset_a, unsigned int *offset_b,
                               unsigned int *normal, float depth, unsigned int friction_bits, float depth_scale,
                               unsigned int stiffness_bits);
/* Still recompiled code: scoring of a kill (killer, victim, 100) and of a
   kill within the killer's own team (killer, 100)? Meaning not settled. */
extern void sub_140116D80(int player, int other_player, int amount);
extern long long sub_14011B7F0(int player, int amount);

/* ---- state ------------------------------------------------------------------- */

/* The player who last drove a vehicle, -1: none. Vehicle + 0x14 */
#define vehicle_player(vehicle) SR_GLOBAL(int32_t, 0x15F2D9214ULL + 0x5168ULL * (uint64_t)(int64_t)(vehicle))
/* A field of the player (0x3834 bytes each) compared between killer and
   victim (their team?). 0x151620CE4 */
#define player_unknown_151620ce4(player) SR_GLOBAL(int32_t, 0x151620CE4ULL + 0x3834ULL * (uint64_t)(int64_t)(player))
/* Copied into the event of a fatal blow. Meaning not settled. 0x183E9362C */
#define game_unknown_183e9362c SR_GLOBAL(int32_t, 0x183E9362CULL)

#define WORLD_EVENT_9 9                  /* a human killed by a vehicle */

enum { HUMAN_BONE_SHIN = 11, HUMAN_BONE_FOOT_LEFT = 12, HUMAN_BONE_FOOT_RIGHT = 15 };

/* The blow that ended the human's life: its event and the driver's score. */
static void record_fatal_blow(WorldHuman *h, int vehicle)
{
    int driver;

    if (game_connected) {
        int32_t count = world_event_count;
        WorldEvent *event = &world_events[count];

        world_event_count = (count + 1) & 0xFFFF;
        event->type = WORLD_EVENT_9;
        event->tick = game_tick;
        event->a = game_unknown_183e9362c;
        for (int k = 0; k < 3; k++)
            ((uint32_t *)(void *)event->vector_a)[k] = h->position[k];
        ((uint32_t *)(void *)event)[0x30 / 4] = 0x3F800000;
        ((uint32_t *)(void *)event)[0x34 / 4] = 0x3F000000;
    }
    driver = vehicle_player(vehicle);
    if (driver != -1 && h->player != -1)
        sub_140116D80(driver, h->player, 100);
    if (h->player != -1 && driver != -1 && player_unknown_151620ce4(driver) == player_unknown_151620ce4(h->player))
        sub_14011B7F0(driver, 100);
}

void human_collide_vehicle(int human, int vehicle)
{
    WorldHuman *h = &world_humans[human];

    for (int i = 0; i < HUMAN_BONE_COUNT; i++) {
        const HumanSkeletonBone *shape = &human_skeleton[i];
        HumanBone *bone = &h->bones[i];
        const float *axis;
        const PhysicsBody *hull;
        float from[3], to[3], offset[3], hull_offset[3], radius, length, reach;
        float rx, ry, rz, vx, vy, vz, threshold;
        int hull_body;

        if (i == HUMAN_BONE_FOOT_LEFT || i == HUMAN_BONE_FOOT_RIGHT)
            continue;
        /* The bone's capsule; a shin's starts an eighth of its length up
           from the middle, so the ankle end is left out. */
        length = shape->length;
        axis = &bone->rotation[3 * shape->axis_row];
        reach = length * -0.5f;
        if (i == HUMAN_BONE_SHIN || i == HUMAN_BONE_SHIN + 3)
            reach = length * -0.125f;
        from[0] = axis[0] * reach + bone->position[0];
        from[1] = axis[1] * reach + bone->position[1];
        from[2] = axis[2] * reach + bone->position[2];
        reach = length * 0.5f;
        to[2] = axis[2] * reach + bone->position[2];
        to[0] = axis[0] * reach + bone->position[0];
        to[1] = axis[1] * reach + bone->position[1];
        radius = shape->radius;
        if (!(unsigned int)sub_140037220(vehicle, from, to, radius))
            continue;

        hull_body = physics_vehicles[vehicle].body;
        for (int k = 0; k < 3; k++) {
            offset[k] = collision_hit.point[k] - physics_bodies[bone->body].position[k];
            hull_offset[k] = collision_hit.point[k] - physics_bodies[hull_body].position[k];
        }
        sub_1400052C0(bone->body, hull_body, (unsigned int *)(void *)offset, (unsigned int *)(void *)hull_offset,
                      (unsigned int *)(void *)collision_hit.normal, radius - collision_hit.distance, 0x3ECCCCCDu,
                      0.03125f, 0x3D800000u);

        /* Not the vehicle the human belongs to, and not an arm below the
           shoulder. */
        if (vehicle == h->last_vehicle || (i != 7 && i > 4 && i < 10))
            continue;
        /* How fast the hull moves into the bone at the hit. */
        hull = &physics_bodies[physics_vehicles[vehicle].body];
        ry = collision_hit.point[1] - hull->position[1];
        rz = collision_hit.point[2] - hull->position[2];
        rx = collision_hit.point[0] - hull->position[0];
        vx = ((hull->angular_velocity[2] * ry - hull->angular_velocity[1] * rz) + hull->velocity[0]) - bone->velocity[0];
        vz = ((hull->angular_velocity[1] * rx - hull->angular_velocity[0] * ry) + hull->velocity[2]) - bone->velocity[2];
        vy = ((hull->angular_velocity[0] * rz - hull->angular_velocity[2] * rx) + hull->velocity[1]) - bone->velocity[1];
        threshold = 0.2f;
        if ((unsigned int)(i - 10) <= 1 || (unsigned int)(i - 13) <= 1)
            threshold = 0.33333334f;
        if (h->immortal)
            continue;
        if (!((vy * collision_hit.normal[1] + vx * collision_hit.normal[0]) + vz * collision_hit.normal[2] > threshold))
            continue;
        h->old_health = subtract_int(h->old_health, 120);
        if ((uint32_t)add_int(h->old_health, 119) > 119)
            continue;
        record_fatal_blow(h, vehicle);
    }
}
