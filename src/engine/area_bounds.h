/* Bounds used by the point-membership queries. These are views of the
 * original tables; the surrounding record layouts remain unrecovered. */
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
/* This query's 0xDB0C table stride differs from the block-parts table. */
static inline AreaBounds *world_region_bounds(int region)
{
    return &SR_GLOBAL(AreaBounds, 0x1760C5678ULL + (int64_t)region * 0xDB0C);
}
int corporation_contains_point(const float point[3], int corporation, float margin); /* 0x14011B8F0; x/z only */
int corporation_vault_contains_point(const float point[3], int corporation, float margin); /* 0x14011B960 */
int world_region_contains_point(int region, const float point[3], float margin); /* 0x14011B9F0 */
#endif
