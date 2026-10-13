/* Finding unused physics records. */
#include "physics.h"

int physics_free_bond(void)
{
    for (int i = 0; i < PHYSICS_BOND_CAPACITY; i++)
        if (!physics_bonds[i].active)
            return i;
    return -1;
}
