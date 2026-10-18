/* Bullet lifetimes: 0x14002CE50. */
#include <string.h>
#include "nc.h"
#include "bullet.h"

#ifdef NC_NATIVE
#define expire() ((void (*)(void))NC_ADDR(0x14002CE50))()
#else
#define expire world_expire_bullets
#endif

#define SPAN 48

int main(void)
{
    nc_map_image();
    int cases = nc_cases(5000);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        int32_t count = nc_chance(5) ? -(int)nc_rand_below(3) : (int)nc_rand_below(SPAN - 4);
        world_bullet_count = count;
        for (int i = 0; i < SPAN; i++) {
            Bullet *b = &world_bullets[i];
            uint32_t *words = (uint32_t *)(void *)b;
            for (size_t k = 0; k < sizeof *b / 4; k++)
                words[k] = (uint32_t)nc_rand();
            switch (nc_rand_below(6)) {
            case 0: b->lifetime = 1; break;                                  /* expires now */
            case 1: b->lifetime = (int)nc_rand_below(4) - 2; break;           /* already due */
            case 2: b->lifetime = 0xFFFF + (int)nc_rand_below(3); break;      /* around never */
            case 3: b->lifetime = (int32_t)nc_rand(); break;
            default: b->lifetime = 2 + (int)nc_rand_below(600); break;
            }
        }
        expire();
        nc_line("count %d bullets %016llx", world_bullet_count,
                (unsigned long long)nc_hash(world_bullets, sizeof(Bullet) * SPAN));
        for (int i = 0; i < count && i < SPAN; i++)
            nc_line("%d %08x %08x", i, (uint32_t)world_bullets[i].type, (uint32_t)world_bullets[i].lifetime);
    }
    return 0;
}
