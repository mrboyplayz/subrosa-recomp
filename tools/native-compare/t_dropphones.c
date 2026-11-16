/* Putting out of use every phone with one of two numbers derived from a
 * base: type-25 items only, partners cleared (state, partner, number, and a
 * recorded change) before the item's own fields and lifetime. Phones are
 * each other's partners in many cases, so the order of the walk matters; a
 * partner of -1 or of an item that is not a phone is included; bases make
 * 1111 * base wrap. The fields every item can touch and the event record are
 * hashed after each call. */
// NC_WRAPPERS: 1400F3D10
#include <string.h>
#include "nc.h"
#include "frame.h"
#include "item.h"

#ifdef NC_NATIVE
#define drop(b) ((void (*)(int))NC_ADDR(0x1400F3D10))(b)
#elif defined(NC_CLIENT_WRAPPERS)
void sub_1400F3D10(int);
#define drop sub_1400F3D10
#else
#define drop item_drop_phones_of_number
#endif

#define USED 48

static uint64_t items_hash(void)
{
    uint32_t words[USED * 6];
    int w = 0;
    for (int i = 0; i < USED; i++) {
        words[w++] = (uint32_t)world_items[i].active;
        words[w++] = (uint32_t)world_items[i].lifetime;
        words[w++] = (uint32_t)item_call_partner(i);
        words[w++] = (uint32_t)item_call_number(i);
        words[w++] = (uint32_t)item_call_state(i);
        words[w++] = (uint32_t)world_item_change_count(i);
    }
    return nc_hash(words, sizeof words);
}

int main(void)
{
    static const int32_t bases[] = {0, 1, 2, 7, 100, -1, -2, 0x7FFFFFFF, INT32_MIN, 1934, 1932};
    nc_map_image();
    nc_save(&world_events[0xFFF0], sizeof(WorldEvent) * 16);
    nc_save(&world_events[0], sizeof(WorldEvent) * 16);
    for (int n = 0; n < nc_cases(3000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        int32_t base = bases[n % 11];
        uint32_t first = (uint32_t)base * 1111u + 1111u, second = first + 1;
        for (int i = 0; i < 1024; i++) {
            world_items[i].active = 0;
            world_items[i].type = (int32_t)nc_rand();
        }
        for (int i = 0; i < USED; i++) {
            world_items[i].active = nc_chance(80);
            world_items[i].type = nc_chance(85) ? 25 : (int32_t)nc_rand_below(40);
            uint32_t pick = nc_rand_below(6);
            item_phone_number(i) = (int32_t)(pick == 0 ? first : pick == 1 ? second : pick == 2 ? first + 2
                                             : pick == 3 ? 0 : (uint32_t)nc_rand());
            item_call_partner(i) = nc_chance(25) ? -1 : (int32_t)nc_rand_below(USED);
            item_call_number(i) = (int32_t)nc_rand();
            item_call_state(i) = (int32_t)nc_rand();
            world_items[i].lifetime = (int32_t)nc_rand();
            world_item_change_count(i) = (int32_t)nc_rand_below(1000);
            item_unknown_278(i) = (int32_t)nc_rand();
        }
        /* an item may have been removed but still be a partner's partner */
        game_connected = nc_chance(70);
        game_tick = (int32_t)nc_rand();
        world_event_count = nc_chance(15) ? 0xFFF8 + (int)nc_rand_below(8) : (int)nc_rand_below(8);
        drop(base);
        int start = world_event_count & 0xFFFF;
        nc_line("n%d base %d count %08x items %016llx events %016llx", n, base, world_event_count,
                (unsigned long long)items_hash(),
                (unsigned long long)nc_hash(&world_events[start > 16 ? 0 : 0], sizeof(WorldEvent) * 16)
                ^ (unsigned long long)nc_hash(&world_events[0xFFF0], sizeof(WorldEvent) * 16));
    }
    return 0;
}
