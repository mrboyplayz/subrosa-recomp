/* The bond of a joint between two bones of a human: 0x140055FA0. */
#include <string.h>
#include "nc.h"
#include "human.h"
#include "physics.h"

#ifdef NC_NATIVE
#define joint(h, p, c, a) ((int (*)(int, int, int, const float *))NC_ADDR(0x140055FA0))(h, p, c, a)
#else
#define joint human_create_joint_bond
#endif

#define USED 80

int main(void)
{
    nc_map_image();
    nc_save(human_skeleton, sizeof(HumanSkeletonBone) * HUMAN_BONE_COUNT);
    int cases = nc_cases(3000);
    for (int n = 0; n < cases; n++) {
        float anchor[3];
        nc_seed(n);
        nc_restore();
        int human = (int)nc_rand_below(WORLD_HUMAN_CAPACITY);
        int parent = (int)nc_rand_below(HUMAN_BONE_COUNT);
        int child = 1 + (int)nc_rand_below(HUMAN_BONE_COUNT - 1);
        WorldHuman *h = &world_humans[human];
        for (int b = 0; b < HUMAN_BONE_COUNT; b++)
            h->bones[b].body = (int32_t)nc_rand_below(PHYSICS_BODY_CAPACITY);
        h->bond_count = (int32_t)nc_rand_below(40);
        for (int k = 0; k < 3; k++) {
            anchor[k] = nc_float(-1.0f, 1.0f);
            human_skeleton[child - 1].unknown_28[k] = nc_float(-1.0f, 1.0f);
        }
        int full = nc_chance(6);
        for (int b = 0; b <= USED; b++) {
            memset(&physics_bonds[b], 0x5A, sizeof(PhysicsBond));
            memset(&physics_constraints[b], 0x3C, sizeof(PhysicsConstraint));
        }
        for (int b = 0; b < (full ? PHYSICS_BOND_CAPACITY : USED); b++)
            physics_bonds[b].active = full || nc_chance(70);
        if (!full)
            physics_bonds[USED].active = 0;       /* the latest the search can end */
        else if (nc_chance(50))
            physics_bonds[PHYSICS_BOND_CAPACITY - 1].active = 0;   /* only the last is free */

        int bond = joint(human, parent, child, anchor);
        nc_line("bond %d count %d list %016llx", bond, h->bond_count,
                (unsigned long long)nc_hash(h->bonds, sizeof h->bonds));
        if (bond == PHYSICS_BOND_CAPACITY - 1)
            nc_line("last %016llx", (unsigned long long)nc_hash(&physics_bonds[bond], sizeof(PhysicsBond)));
        if (bond >= 0 && bond <= USED) {
            nc_bytes("head", &physics_bonds[bond], 0x38);
            nc_floats("points", physics_bonds[bond].local_point, 6);
            nc_bytes("tail", (uint8_t *)&physics_bonds[bond] + 0x50, sizeof(PhysicsBond) - 0x50);
            nc_line("constraint %016llx",
                    (unsigned long long)nc_hash(&physics_constraints[bond], sizeof(PhysicsConstraint)));
        }
        if (full)
            for (int b = 0; b < PHYSICS_BOND_CAPACITY; b++)
                physics_bonds[b].active = 0;
    }
    return 0;
}
