/* Bounds in corporation and world-region records. The surrounding record
   layouts are not recovered yet. */
#ifndef SR_ENGINE_AREA_BOUNDS_H
#define SR_ENGINE_AREA_BOUNDS_H
#include "memory.h"

typedef struct AreaBounds {
    float lower[3];
    float upper[3];
} AreaBounds;

static inline AreaBounds *corporation_interior_bounds(int corporation)
{
    return &SR_GLOBAL(AreaBounds, 0x183EBFD60ULL + (int64_t)corporation * 0x5BC4);
}
static inline AreaBounds *corporation_vault_bounds(int corporation)
{
    return &SR_GLOBAL(AreaBounds, 0x183EBFD78ULL + (int64_t)corporation * 0x5BC4);
}
static inline AreaBounds *world_region_bounds(int region)
{
    return &SR_GLOBAL(AreaBounds, 0x1760C5678ULL + (int64_t)region * 0xDB0C);
}

/* Lower bounds inclusive, upper bounds exclusive, each expanded by margin.
   The corporation interior checks x/z only. Upper-bound NaNs pass, while
   lower-bound NaNs fail, as the original COMISS branches do. */
int corporation_contains_point(const float point[3], int corporation, float margin); /* 0x14011B8F0 */
int corporation_vault_contains_point(const float point[3], int corporation, float margin); /* 0x14011B960 */
int world_region_contains_point(int region, const float point[3], float margin); /* 0x14011B9F0 */

/* Camera origin and its right/up/back axes, at 0x183F7C544. These are the
   visibility-test inputs, distinct from the renderer's uploaded matrices. */
typedef struct AreaView {
    float origin[3];
    float right[3];
    float up[3];
    float back[3];
} AreaView;
#define area_view (&SR_GLOBAL(AreaView, 0x183F7C544ULL))

/* Five planes through the camera: behind the back-facing normal and inside
   its four side planes. An unordered plane distance passes. 0x14011BAD0 */
int area_view_contains_point(const float point[3]);

#endif
