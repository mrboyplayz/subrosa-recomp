/* Item states for a tick: 0x1400CC610. Its callees are recording stubs in
 * both builds; some of them change state the routine reads afterwards. */
#include <string.h>
#include "nc.h"
#include "frame.h"
#include "human.h"
#include "item.h"
#include "physics.h"

#ifdef NC_NATIVE
#define item_tick() ((void (*)(void))NC_ADDR(0x1400CC610))()
#else
#define item_tick item_tick_states
#endif

#define HUMANS 256
#define VEHICLES 512
#define EVENTS 64

static const int interesting[] = {13, 14, 15, 16, 17, 18, 19, 25, 26, 27, 30, 33, 36, 38, 39, 40, 45, 1, 5, 8};

/* ---- stubs ------------------------------------------------------------------ */

static uint64_t stub_args[2];

static void log1(const char *name, int a) { stub_args[0] = (uint32_t)a; nc_call(name, 1, stub_args); }

int rand(void)
{
    int value = (int)nc_rand_below(32768);
    nc_line("call rand -> %d", value);
    return value;
}

static void held_tick(int item, int human)
{
    stub_args[0] = (uint32_t)item;
    stub_args[1] = (uint32_t)human;
    nc_call("held", 2, stub_args);
}
static void sync_item(int item) { log1("sync", item); }
static void grenade_off(int item) { log1("grenade", item); }
static void gun_tick(int item)
{
    log1("gun", item);
    if (nc_chance(20))                       /* the routine reads the type again afterwards */
        world_items[item].type = interesting[nc_rand_below(sizeof interesting / sizeof interesting[0])];
}
static void computer_call(const char *name, int item)
{
    log1(name, item);
    if (nc_chance(50))
        item_computer_state(item) = (int32_t)nc_rand_below(5);
}
static void computer_setup(int item) { computer_call("computer_setup", item); }
static void computer_c5750(int item) { computer_call("computer_c5750", item); }
static void computer_c8500(int item) { computer_call("computer_c8500", item); }
static void computer_c9820(int item) { computer_call("computer_c9820", item); }
static void computer_50f90(int item, int value)
{
    stub_args[0] = (uint32_t)item;
    stub_args[1] = (uint32_t)value;
    nc_call("computer_50f90", 2, stub_args);
}

/* ---- inputs ----------------------------------------------------------------- */

static int crowded;                 /* most items type 26 in two lists: lists overflow */

static void fill_item(int i)
{
    WorldItem *item = &world_items[i];
    memset(item, 0, sizeof *item);
    item->active = nc_chance(80);
    item->type = nc_chance(85) ? interesting[nc_rand_below(sizeof interesting / sizeof interesting[0])]
                               : (int)nc_rand_below(50);
    int32_t lifetimes[] = {0, 1, 2, 100, 17999, 18000, 18001, 0xFFFE, 0xFFFF, 0x10000, 0x20000, -1};
    item->lifetime = lifetimes[nc_rand_below(sizeof lifetimes / sizeof lifetimes[0])];
    item->holder = nc_chance(30) ? (int)nc_rand_below(HUMANS) : -1;
    item->parent = nc_chance(25) ? (int)nc_rand_below(WORLD_ITEM_CAPACITY) : -1;
    item->slot = (int)nc_rand_below(8) - 1;
    item->child_count = nc_chance(10) ? (int)nc_rand_below(3) : 0;
    for (int k = 0; k < 3; k++) {
        item->position[k] = nc_float(-20.0f, 20.0f);
        item->previous_position[k] = nc_float(-20.0f, 20.0f);
    }
    for (int k = 0; k < 9; k++)
        item->rotation[k] = nc_float(-1.0f, 1.0f);
    item_input(i) = (uint32_t)nc_rand_below(4) | (nc_chance(5) ? 0x100u : 0u);
    item_previous_input(i) = (uint32_t)nc_rand_below(4);
    int32_t timers[] = {0, 1, 2, 3, 239, 240, 241, 255, 256, 100, -1};
    item_timer(i) = timers[nc_rand_below(sizeof timers / sizeof timers[0])];
    item_charges(i) = (int)nc_rand_below(4) - 1;
    item_player(i) = (int)nc_rand_below(10) - 1;
    item_call_state(i) = nc_chance(5) ? (int)nc_rand_below(9) - 2 : (int)nc_rand_below(5);
    item_call_partner(i) = nc_chance(50) ? -1 : (int)nc_rand_below(WORLD_ITEM_CAPACITY);
    item_phone_number(i) = 1000 + (int)nc_rand_below(12);
    int32_t ticks[] = {0, 1, 358, 359, 360, 766, 767, 768};
    item_call_ticks(i) = ticks[nc_rand_below(sizeof ticks / sizeof ticks[0])];
    item_call_number(i) = (int)nc_rand_below(2000);
    item_dialled_number(i) = nc_chance(50) ? 1000 + (int)nc_rand_below(14) : (int)nc_rand_below(1000);
    item_unknown_368(i) = (uint32_t)nc_rand();
    if (crowded && nc_chance(70)) {
        item->active = 1;
        item->type = 26;
        item_unknown_368(i) = (uint32_t)nc_rand_below(2) | ((uint32_t)nc_rand() & ~0x7Fu);
    }
    item_unknown_36c(i) = (int32_t)nc_rand_below(100);
    item_unknown_3b4(i) = (uint8_t)nc_rand();
    world_item_vehicle(i) = nc_chance(10) ? (int)nc_rand_below(1000) - 100 : (int)nc_rand_below(VEHICLES);
    item_computer_state(i) = (int)nc_rand_below(5);
    item_computer_countdown(i) = (int)nc_rand_below(4) - 1;
    for (int k = 0; k < 26; k++) {
        item_computer_slot(i, k) = (int)nc_rand_below(32);
        item_computer_used(i, k) = nc_chance(30);
        item_computer_owner(i, k) = nc_chance(30) ? -1 : (int)nc_rand_below(26);
    }
    for (int k = 26; k < 32; k++) {
        item_computer_used(i, k) = nc_chance(30);
        item_computer_owner(i, k) = nc_chance(30) ? -1 : (int)nc_rand_below(26);
    }
}

static void fill_human(int h)
{
    WorldHuman *human = &world_humans[h];
    human->active = nc_chance(70);
    human->player = (int)nc_rand_below(40) - 1;
    human->vehicle = nc_chance(50) ? -1 : (int)nc_rand_below(VEHICLES);
    human->unknown_3c = (int)nc_rand_below(14) - 2;
    human->bleeding = nc_chance(50);
    human->unknown_6ddc = (int)nc_rand_below(100);
    float *at = (float *)human->unknown_80;
    for (int k = 0; k < 3; k++)
        at[k] = nc_float(-20.0f, 20.0f) * (nc_chance(90) ? 0.15f : 1.0f);
    SR_GLOBAL(int32_t, 0x18329E31CULL + 0x6FF8ULL * (uint64_t)h) = (int)nc_rand_below(120);
    SR_GLOBAL(int32_t, 0x18329E320ULL + 0x6FF8ULL * (uint64_t)h) = nc_chance(60) ? 0 : (int)nc_rand_below(300);
    SR_GLOBAL(int32_t, 0x18329E328ULL + 0x6FF8ULL * (uint64_t)h) = (int)nc_rand_below(270);
}

static void report(void)
{
    nc_line("items %016llx", (unsigned long long)nc_hash(world_items, sizeof(WorldItem) * WORLD_ITEM_CAPACITY));
    nc_line("lists %016llx", (unsigned long long)nc_hash(item_type26_lists, sizeof(ItemList) * 128));
    nc_line("humans %016llx", (unsigned long long)nc_hash(world_humans, sizeof(WorldHuman) * HUMANS));
    nc_line("vehicles %016llx", (unsigned long long)nc_hash(physics_vehicles, sizeof(PhysicsVehicle) * VEHICLES));
    nc_line("events %d %016llx", world_event_count, (unsigned long long)nc_hash(world_events, sizeof(WorldEvent) * EVENTS));
    nc_line("changes %016llx", (unsigned long long)nc_hash(&world_item_change_count(0), 4 * WORLD_ITEM_CAPACITY));
    nc_line("mxcsr %08x", nc_get_mxcsr());
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x14023B1B0, (void *)rand);
    nc_redirect(0x1401380F0, (void *)held_tick);
    nc_redirect(0x1400CF670, (void *)gun_tick);
    nc_redirect(0x140051940, (void *)sync_item);
    nc_redirect(0x1400C3ED0, (void *)computer_setup);
    nc_redirect(0x1400C5750, (void *)computer_c5750);
    nc_redirect(0x140050F90, (void *)computer_50f90);
    nc_redirect(0x1400C8500, (void *)computer_c8500);
    nc_redirect(0x1400C9820, (void *)computer_c9820);
    nc_redirect(0x1400A70B0, (void *)grenade_off);

    int cases = nc_cases(200);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        crowded = nc_chance(10);
        for (int i = 0; i < WORLD_ITEM_CAPACITY; i++)
            fill_item(i);
        for (int h = 0; h < HUMANS; h++)
            fill_human(h);
        for (int i = 0; i < WORLD_ITEM_CAPACITY; i++)
            if (world_items[i].type == 27 && world_items[i].holder != -1 && nc_chance(50))
                world_humans[world_items[i].holder].vehicle = world_item_vehicle(i);   /* its holder drives it */
        /* First aid near ties: two eligible humans at the same distance
           from a kit (offsets with x and y swapped, all on a 1/16 grid). */
        for (int i = 0; i < WORLD_ITEM_CAPACITY && nc_chance(98); i++) {
            WorldItem *kit = &world_items[i];
            if (!kit->active || kit->type != 14)
                continue;
            int a = (int)nc_rand_below(HUMANS - 1), b = a + 1 + (int)nc_rand_below((uint32_t)(HUMANS - 1 - a));
            float ox = (float)((int)nc_rand_below(32) - 16) / 16.0f, oy = (float)((int)nc_rand_below(32) - 16) / 16.0f;
            float oz = (float)((int)nc_rand_below(16) - 8) / 16.0f;
            for (int k = 0; k < 3; k++)
                kit->position[k] = (float)((int)nc_rand_below(64)) / 16.0f;
            item_input(i) |= 1;
            int pair[2] = {a, b};
            for (int m = 0; m < 2; m++) {
                WorldHuman *h = &world_humans[pair[m]];
                float *at = (float *)h->unknown_80;
                h->active = 1;
                h->unknown_3c = 5;
                at[0] = kit->position[0] + (m ? oy : ox);
                at[1] = kit->position[1] + (m ? ox : oy);
                at[2] = kit->position[2] + oz;
            }
        }
        for (int v = 0; v < VEHICLES; v++) {
            physics_vehicles[v].active = nc_chance(30);
            vehicle_unknown_20(v) = (int)nc_rand_below(3);
            vehicle_unknown_24(v) = (int)nc_rand_below(40);
        }
        for (int t = 0; t < 50; t++) {
            item_type_is_gun(t) = nc_chance(15);
            item_type_unknown_524(t) = nc_float(-1.0f, 1.0f);
        }
        memset(world_events, 0, sizeof(WorldEvent) * EVENTS);
        memset(&world_item_change_count(0), 0, 4 * WORLD_ITEM_CAPACITY);
        world_event_count = (int)nc_rand_below(8);
        game_tick = nc_chance(50) ? (int)nc_rand_below(8) * 32 : (int)nc_rand();
        game_connected = nc_chance(70);
        game_state = nc_chance(70) ? 2 : (uint32_t)nc_rand_below(4);
        game_type = (int)nc_rand_below(8);
        item_type39_child_offset = nc_float(-1.0f, 1.0f);
        item_event_ring = (int)nc_rand_below(100);
        item_event_ring_back = (int)nc_rand_below(100);

        nc_set_mxcsr(0x1F80);
        item_tick();
        report();
    }
    return 0;
}
