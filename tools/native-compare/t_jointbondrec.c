/* Recording a human's joint bond in the child bone: 0x1400B5410. The bond
 * creation it calls (0x140055FA0) is a recording stub in both builds that
 * logs its arguments and returns a controlled bond id, so what is compared
 * is the record's own work: the arguments passed, the bond word stored at
 * the child bone (stride 0x138, one human 0x6FF8), the -1 skip path, and
 * the value returned. */
#include <string.h>
#include "nc.h"
#include "human.h"
#include "physics.h"

#ifdef NC_NATIVE
#define record(h, p, c, a) ((int (*)(int, int, int, const float *))NC_ADDR(0x1400B5410))(h, p, c, a)
#else
#define record human_record_joint_bond
#endif

static int stub_bond;

static int create_stub(int human, int parent, int child, const float *anchor)
{
    uint64_t args[3];
    args[0] = (uint32_t)human;
    args[1] = (uint32_t)parent;
    args[2] = (uint32_t)child;
    nc_call("create_joint_bond", 3, args);
    nc_floats("anchor", anchor, 3);
    return stub_bond;
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x140055FA0, (void *)create_stub);
    /* The record writes one word at human * 0x6FF8 + joint * 0x138 + 0x340
       from the humans' base; a few cases sit just outside the array. */
    nc_save((unsigned char *)world_humans - 3 * sizeof(WorldHuman),
            sizeof(WorldHuman) * (WORLD_HUMAN_CAPACITY + 6));
    int cases = nc_cases(1500);
    for (int n = 0; n < cases; n++) {
        float anchor[3];
        nc_seed(n);
        nc_restore();
        int human = (int)nc_rand_below(WORLD_HUMAN_CAPACITY + 4) - 2;
        int parent = (int)nc_rand_below(HUMAN_BONE_COUNT + 2) - 1;
        int joint = (int)nc_rand_below(HUMAN_BONE_COUNT + 4) - 2;
        for (int k = 0; k < 3; k++)
            anchor[k] = nc_float(-1.0f, 1.0f);
        if (nc_chance(18))
            stub_bond = -1;                        /* the record's skip path */
        else if (nc_chance(50))
            stub_bond = (int)nc_rand_below(PHYSICS_BOND_CAPACITY);
        else
            stub_bond = (int)nc_rand();            /* a wild 32-bit word */
        int32_t *stored = &world_humans[human].bones[joint].bond;
        *stored = (int32_t)nc_rand();              /* a word the record replaces */

        unsigned int result = (unsigned int)record(human, parent, joint, anchor);
        nc_line("case %d human %d parent %d joint %d stub %d", n, human, parent, joint, stub_bond);
        nc_line("returned %08x", result);
        nc_bytes("stored", stored, 4);
        nc_line("record %016llx",
                (unsigned long long)nc_hash(&world_humans[human], sizeof(WorldHuman)));
    }
    return 0;
}
