#include "area_bounds.h"

static int contains_point(const AreaBounds *bounds, const float point[3], float margin, int step)
{
    for (int axis = 0; axis < 3; axis += step) {
        if (!(point[axis] >= bounds->lower[axis] - margin))
            return 0;
        if (point[axis] >= margin + bounds->upper[axis])
            return 0;
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

int area_view_contains_point(const float point[3])
{
    const AreaView *view = area_view;
    float x = point[0] - view->origin[0];
    float y = point[1] - view->origin[1];
    float z = point[2] - view->origin[2];
    float bx = view->back[0], by = view->back[1], bz = view->back[2];
    if ((y * by + x * bx) + z * bz > 0.0f)
        return 0;

    /* Keep each multiplication separate. Distributing this scale across a
       subtraction changes rounding at the side planes. */
    const float scale = 0.70709997f;
    bx = bx * scale;
    by = by * scale;
    bz = bz * scale;
    float rx = view->right[0] * scale;
    float ry = view->right[1] * scale;
    float rz = view->right[2] * scale;
    if (((bx - rx) * x + (by - ry) * y) + (bz - rz) * z > 0.0f)
        return 0;
    if (((ry + by) * y + (rx + bx) * x) + (rz + bz) * z > 0.0f)
        return 0;

    float ux = view->up[0] * scale;
    float uy = view->up[1] * scale;
    float uz = view->up[2] * scale;
    if (((bx - ux) * x + (by - uy) * y) + (bz - uz) * z > 0.0f)
        return 0;
    if (((uy + by) * y + (ux + bx) * x) + (uz + bz) * z > 0.0f)
        return 0;
    return 1;
}
