#include "area_bounds.h"

/* Native COMISS/JB rejects unordered lower bounds, while COMISS/JAE
 * accepts unordered upper bounds. Keep each comparison's early exit. */
static int contains_point(const AreaBounds *bounds, const float point[3], float margin, int step)
{
    for (int axis = 0; axis < 3; axis += step) {
        if (!(point[axis] >= bounds->lower[axis] - margin)) return 0;
        if (point[axis] >= margin + bounds->upper[axis]) return 0;
    }
    return 1;
}

int corporation_contains_point(const float point[3], int corporation, float margin)
{
    return contains_point(corporation_interior_bounds(corporation), point, margin, 2);
}

int corporation_vault_contains_point(const float point[3], int corporation, float margin)
{
    return contains_point(corporation_vault_bounds(corporation), point, margin, 1);
}

int world_region_contains_point(int region, const float point[3], float margin)
{
    return contains_point(world_region_bounds(region), point, margin, 1);
}
