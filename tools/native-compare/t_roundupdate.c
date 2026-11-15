// NC_WRAPPERS: 1400F6C50
#include <math.h>
#include <stdarg.h>
#include <string.h>
#include "nc.h"
#include "round_update.h"
#include "round_settings.h"
#include "area_bounds.h"
#include "events.h"
#include "world.h"

#ifdef NC_NATIVE
#define update() ((long long (*)(void))NC_ADDR(0x1400F6C50))()
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1400F6C50(void);
#define update() sub_1400F6C50()
#else
#define update() round_update()
#endif

/* Every callee except the matrix rotation (0x14007B2A0, pure math, real in
   both builds) is a recording stub. Return values come from the generator,
   so both builds see the same ones in the same order. */
static void log_floats(const char *label, const float *v, int n)
{
    nc_floats(label, v, (size_t)n);
}

static int32_t pick_index(int32_t limit, int percent_failure)
{
    return nc_chance(percent_failure) ? -1 : (int32_t)nc_rand_below((uint32_t)limit);
}

int rand(void)
{
    int value = (int)(nc_rand() & 0x7FFF);
    nc_line("rand %d", value);
    return value;
}

long long sub_140053840(float *position, float *rotation, int player)
{
    nc_line("create human for %d", player);
    log_floats("position", position, 3);
    log_floats("rotation", rotation, 9);
    return pick_index(256, 10);
}

void sr_event_player_update(int player) { nc_line("player update %d", player); }
long long sub_140117020(int player) { nc_line("after spawn %d", player); return 0; }
long long sub_140117340(int player) { nc_line("before reset %d", player); return 0; }
long long sub_14012E960(int a) { nc_line("14012E960 %d", a); return 0; }
long long sub_14005E520(void) { nc_line("14005E520"); return 0; }
long long sub_1400F3E60(void) { nc_line("round ends"); return 0; }
long long sr_ResetGame(long long a, long long b, long long c) { (void)a; (void)b; (void)c; nc_line("reset game"); return 0; }
void sr_event_mission_update(int corporation, int mission) { nc_line("mission update %d %d", corporation, mission); }
long long sr_item_phone_changed(unsigned item) { nc_line("phone changed %u", item); return 0; }

static const int32_t announcement_ticks[] = {1250, 1200, 1080, 960, 840, 720, 600, 480, 360, 240, 120, 0, 1};
long long sub_1400F0160(int stage)
{
    nc_line("announce %d at %d", stage, round_timer);
    /* The routine reads the timer again after each announcement. */
    if (nc_chance(15))
        round_timer = announcement_ticks[nc_rand_below(sizeof(announcement_ticks) / sizeof(announcement_ticks[0]))];
    return 0;
}

void crt_sprintf(char *out, char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    vsnprintf(out, 96, format, ap);
    va_end(ap);
    nc_line("sprintf %s", out);
}

long long sr_CreateVehicle(int type, float *position, unsigned *velocity, unsigned *rotation, unsigned a5)
{
    nc_line("create vehicle %d %d %u", type, velocity != NULL, a5);
    log_floats("position", position, 3);
    log_floats("rotation", (const float *)rotation, 9);
    return pick_index(512, 15);
}

long long sub_14012CEB0(int a1, unsigned a2, int a3, int a4, int a5, float a6)
{
    nc_line("14012CEB0 %d %u %d %d %d", a1, a2, a3, a4, a5);
    log_floats("a6", &a6, 1);
    return pick_index(256, 10);
}

long long sr_CreateItem(int type, float *position, unsigned *velocity, float *rotation)
{
    nc_line("create item %d %d", type, velocity != NULL);
    log_floats("position", position, 3);
    log_floats("rotation", rotation, 9);
    /* A callee may scribble on the buffers it was given. */
    if (nc_chance(10)) {
        position[0] = nc_float(-50, 50);
        rotation[0] = nc_float(-1, 1);
    }
    return pick_index(1024, 15);
}

/* ---- scenario ------------------------------------------------------------ */

static float coordinate(void)
{
    return nc_chance(3) ? NAN : nc_float_plain(-300.0f, 300.0f);
}

static void random_box(AreaBounds *b)
{
    for (int k = 0; k < 3; ++k) {
        b->lower[k] = nc_float_plain(-200.0f, 150.0f);
        b->upper[k] = b->lower[k] + nc_float_plain(1.0f, 60.0f);
        if (nc_chance(2)) b->lower[k] = NAN;
        if (nc_chance(2)) b->upper[k] = NAN;
    }
}

/* A point inside, on an edge of, or outside a box. */
static void place(float out[3], const AreaBounds *b)
{
    for (int k = 0; k < 3; ++k) {
        switch (nc_rand_below(6)) {
        case 0: out[k] = b->lower[k]; break;
        case 1: out[k] = b->upper[k]; break;
        case 2: out[k] = coordinate(); break;
        default: out[k] = b->lower[k] + (b->upper[k] - b->lower[k]) * nc_float_plain(0.0f, 0.999f); break;
        }
    }
}

/* A point strictly inside a box (all bounds finite at this point). */
static void place_inside(float out[3], const AreaBounds *b)
{
    for (int k = 0; k < 3; ++k)
        out[k] = b->lower[k] + (b->upper[k] - b->lower[k]) * nc_float_plain(0.01f, 0.99f);
}

static const int32_t lobby_timers[] = {5402, 5401, 5400, 5399, 5393, 6900, 6899, 6901, 7000, 1, 0, -1, 7, 8, 100, 4000};
static const int32_t running_timers[] = {3601, 7201, 3600, 61, 60, 62, 70, 69, 1, 0, 10, 9, 216001, 2};
static const int32_t valuable_types[] = {17, 19, 20, 21, 22, 23, 24, 18, 25, 16, 0};

#define ITEMS 1024
#define HUMANS 256
#define EVENT_SLOTS 12

static int active_items[16], active_item_count;

static void set_up_case(int n, int *event_start)
{
    int phase = (int)nc_rand_below(20);
    int nan_heavy = nc_chance(20);
    if (nan_heavy)
        phase = 10;   /* the running round */
    game_state = phase < 8 ? 1 : phase < 15 ? 2 : phase < 19 ? 3 : (nc_chance(50) ? 0 : 4);
    game_connected = nc_chance(85);
    game_tick = (int32_t)nc_rand();
    game_state_time = nc_chance(40) ? 7199 + (int32_t)nc_rand_below(3) - 1 : (int32_t)nc_rand_below(20000);
    round_settings->round_minutes = nc_chance(10) ? (int32_t)nc_rand() : 1 + (int32_t)nc_rand_below(60);
    round_weekly = nc_chance(40) ? 1 : nc_chance(50) ? 0 : 2;
    round_over_ticks = (int32_t)nc_rand_below(2000);
    if (game_state == 1)
        round_timer = nc_chance(70) ? lobby_timers[nc_rand_below(sizeof(lobby_timers) / 4)] : (int32_t)nc_rand_below(9000) - 100;
    else if (game_state == 2)
        round_timer = nc_chance(70) ? running_timers[nc_rand_below(sizeof(running_timers) / 4)] : (int32_t)nc_rand_below(300000);
    else if (nc_chance(30))
        round_timer = 1;    /* the round-over phase ends this tick */
    else
        round_timer = nc_chance(70) ? announcement_ticks[nc_rand_below(sizeof(announcement_ticks) / 4)] + 1 : (int32_t)nc_rand_below(1400) - 50;
    round_door_close_tick = nc_chance(30) ? round_timer : (int32_t)nc_rand_below(9000);

    *event_start = nc_chance(10) ? 65535 - (int32_t)nc_rand_below(4) : (int32_t)nc_rand_below(65536);
    world_event_count = *event_start;
    for (int k = 0; k < EVENT_SLOTS; ++k) {
        WorldEvent *e = &world_events[(*event_start + k) & 0xFFFF];
        for (size_t b = 0; b < sizeof(*e); ++b) ((unsigned char *)e)[b] = (unsigned char)nc_rand();
    }

    /* Corporations. */
    for (int c = 0; c < CORPORATION_COUNT; ++c) {
        random_box(corporation_interior_bounds(c));
        if (nan_heavy)
            for (int k = 0; k < 3; ++k) {
                AreaBounds *box = corporation_interior_bounds(c);
                if (isnan(box->lower[k])) box->lower[k] = -10.0f;
                if (isnan(box->upper[k])) box->upper[k] = box->lower[k] + 20.0f;
            }
        random_box(corporation_vault_bounds(c));
        corporation_angle(c) = nc_float(-4.0f, 4.0f);
        for (int k = 0; k < 3; ++k) {
            corporation_phone_position(c)[k] = nc_float_plain(-200.0f, 200.0f);
            corporation_spawn_position(c)[k] = nc_float_plain(-200.0f, 200.0f);
        }
        corporation_member_count(c) = (int32_t)nc_rand_below(9);
        corporation_door_open(c) = nc_chance(40);
        corporation_manager(c) = nc_chance(30) ? -1 : (int32_t)nc_rand_below(256);
        corporation_unknown_58bc(c) = (int32_t)nc_rand();
        for (int m = 0; m < CORPORATION_MISSIONS; ++m)
            corporation_mission_active(c, m) = nc_chance(25) ? (int32_t)nc_rand() | 1 : 0;
        corporation_spot_count(c) = (int32_t)nc_rand_below(7) - 1;
        for (int s = 0; s < 6; ++s) {
            corporation_spot_used(c, s) = nc_chance(50);
            for (int k = 0; k < 3; ++k) corporation_spot_position(c, s)[k] = nc_float_plain(-100, 100);
            for (int k = 0; k < 9; ++k) corporation_spot_rotation(c, s)[k] = nc_float_plain(-1, 1);
        }
        event_stocks[c].price = nc_chance(5) ? NAN : nc_float(-20.0f, 200.0f);
    }
    for (int i = 0; i < ROUND_RECORD_COUNT; ++i)
        for (int k = 0; k < 4; ++k)
            round_record(i)[k] = k == 0 ? nc_chance(50) : (int32_t)nc_rand();

    /* Humans and items. */
    for (int h = -1; h < HUMANS; ++h) {
        human_vehicle(h) = nc_chance(50) ? -1 : (int32_t)nc_rand_below(512);
        human_unknown_98(h) = nc_float(-4, 4);
    }
    for (int i = 0; i < ITEMS; ++i) {
        world_items[i].active = 0;
        item_unknown_160(i) = (int32_t)nc_rand();
        item_unknown_278(i) = (int32_t)nc_rand();
    }
    /* Some cases lean on unordered comparisons: NaN item heights, and
       (after everything is placed) a NaN upper z bound for the third
       corporation's interior, with the speed-up conditions likely. */
    if (nan_heavy)
        game_state_time = 7200 + (int32_t)nc_rand_below(10);
    active_item_count = (int)nc_rand_below(6);
    for (int k = 0; k < active_item_count; ++k) {
        int i = (int)nc_rand_below(ITEMS);
        active_items[k] = i;
        world_items[i].active = 1;
        world_items[i].type = valuable_types[nc_rand_below(sizeof(valuable_types) / 4)];
        int c = nan_heavy && nc_chance(60) ? 2 : (int)nc_rand_below(CORPORATION_COUNT);
        if (nan_heavy && c == 2)
            place_inside(world_items[i].position, corporation_interior_bounds(2));
        else
            place(world_items[i].position, nc_chance(50) ? corporation_vault_bounds(c) : corporation_interior_bounds(c));
        if (nan_heavy && nc_chance(15))
            world_items[i].position[2] = NAN;
    }
    for (int v = -1; v < 512; ++v)
        vehicle_unknown_3648(v) = (int32_t)nc_rand();
    for (int r = -1; r < 256; ++r) {
        unknown_15fd16260_7c(r) = (int32_t)nc_rand();
        unknown_15fd16260_8(r) = (int32_t)nc_rand();
    }
    for (int a = 0; a < 64; ++a)
    {
        /* Few distinct balances, so equal balances and zero are common. */
        static const int32_t balances[] = {0, 0, 500, 500, 1000, -1};
        account_money(a) = nc_chance(25) ? (int32_t)nc_rand_below(100000) - 1000
                                         : balances[nc_rand_below(sizeof(balances) / 4)];
    }

    /* Players: most slots empty; a handful on teams, some bots. */
    int everyone_ready = nc_chance(40), aboard = nc_chance(30), at_home = nan_heavy || nc_chance(40), dead = nc_chance(15);
    for (int p = 0; p < PLAYER_CAPACITY; ++p) {
        player_active(p) = 0;
        player_unknown_68(p) = (int32_t)nc_rand();
        player_unknown_6c(p) = (int32_t)nc_rand_below(5) - 1;
        player_unknown_70(p) = (int32_t)nc_rand();
        player_unknown_88(p) = (int32_t)nc_rand_below(4) - 1;
        player_is_manager(p) = (int32_t)nc_rand();
    }
    int count = (int)nc_rand_below(10);
    for (int k = 0; k < count; ++k) {
        int p = (int)nc_rand_below(PLAYER_CAPACITY);
        player_active(p) = nc_chance(90) ? 1 : (int32_t)nc_rand() | 1;
        player_is_bot(p) = nc_chance(20);
        static const int32_t teams[] = {0, 1, 2, 0, 1, 2, -1, 3, 4};
        int32_t team = teams[nc_rand_below(sizeof(teams) / 4)];
        player_team(p) = team;
        player_ready(p) = everyone_ready || nc_chance(50);
        player_money(p) = nc_chance(10) ? (int32_t)nc_rand() : (int32_t)nc_rand_below(200000);
        player_shares(p) = (int32_t)nc_rand_below(1000);
        player_account(p) = nc_chance(20) ? -1 : (int32_t)nc_rand_below(nc_chance(50) ? 4 : 64);
        player_unknown_164(p) = (int32_t)nc_rand();
        player_model(p) = (int32_t)nc_rand_below(4);
        player_suit_color(p) = (int32_t)nc_rand_below(6) - 1;
        player_tie_color(p) = (int32_t)nc_rand_below(10);
        int32_t human = dead || nc_chance(30) ? -1 : (int32_t)nc_rand_below(HUMANS);
        player_human(p) = human;
        if (human != -1) {
            human_vehicle(human) = aboard ? (int32_t)nc_rand_below(512) : -1;
            if ((uint32_t)team < 3 && nan_heavy)
                place_inside(human_floats(human, 0x80), corporation_interior_bounds(team));
            else if ((uint32_t)team < 3 && (at_home || nc_chance(30)))
                place(human_floats(human, 0x80), corporation_interior_bounds(team));
            else
                for (int k = 0; k < 3; ++k) human_floats(human, 0x80)[k] = coordinate();
        }
        int len = 1 + (int)nc_rand_below(20);
        char *name = player_name(p);
        for (int i = 0; i < len; ++i) name[i] = (char)('a' + nc_rand_below(26));
        name[len] = 0;
    }
    if (nan_heavy && nc_chance(70))
        corporation_interior_bounds(2)->upper[2] = NAN;
    (void)n;
}

static void report(int n, int event_start)
{
    nc_line("end %d state %u timer %d time %d events %d", n, game_state, round_timer, game_state_time, world_event_count);
    uint64_t h = 0;
    for (int p = 0; p < PLAYER_CAPACITY; ++p) {
        h ^= nc_hash(&player_field(p, 0), 0x170) * (uint64_t)(p + 1);
        h ^= nc_hash(&player_field(p, 0x37B0), 0x28) * (uint64_t)(p + 7);
    }
    nc_line("players %016llx", (unsigned long long)h);
    h = 0;
    for (int c = 0; c < CORPORATION_COUNT; ++c) {
        h ^= nc_hash(&corporation_int(c, 0), 0x5BC4) * (uint64_t)(c + 1);
        nc_line("corporation %d door %d manager %d 58bc %d", c, corporation_door_open(c),
                corporation_manager(c), corporation_unknown_58bc(c));
    }
    nc_line("corporations %016llx", (unsigned long long)h);
    nc_line("records %016llx", (unsigned long long)nc_hash(round_record(0), 16 * ROUND_RECORD_COUNT));
    for (int k = 0; k < EVENT_SLOTS; ++k) {
        WorldEvent *e = &world_events[(event_start + k) & 0xFFFF];
        nc_line("event %d %016llx", k, (unsigned long long)nc_hash(e, sizeof(*e)));
    }
    h = 0;
    for (int i = 0; i < ITEMS; ++i)
        h ^= ((uint64_t)(uint32_t)item_unknown_160(i) << 32 | (uint32_t)item_unknown_278(i)) * (uint64_t)(i + 1);
    for (int x = -1; x < HUMANS; ++x)
        h ^= (uint64_t)*(uint32_t *)&human_unknown_98(x) * (uint64_t)(x + 3) << 3;
    for (int v = -1; v < 512; ++v)
        h ^= (uint64_t)(uint32_t)vehicle_unknown_3648(v) * (uint64_t)(v + 5) << 5;
    for (int r = -1; r < 256; ++r)
        h ^= ((uint64_t)(uint32_t)unknown_15fd16260_7c(r) << 32 | (uint32_t)unknown_15fd16260_8(r)) * (uint64_t)(r + 9);
    nc_line("other %016llx", (unsigned long long)h);
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x14023B1B0, (void *)rand);
    nc_redirect(0x140053840, (void *)sub_140053840);
    nc_redirect(0x140051DC0, (void *)sr_event_player_update);
    nc_redirect(0x140117020, (void *)sub_140117020);
    nc_redirect(0x140117340, (void *)sub_140117340);
    nc_redirect(0x14012E960, (void *)sub_14012E960);
    nc_redirect(0x14005E520, (void *)sub_14005E520);
    nc_redirect(0x1400F3E60, (void *)sub_1400F3E60);
    nc_redirect(0x140127910, (void *)sr_ResetGame);
    nc_redirect(0x1400519F0, (void *)sr_event_mission_update);
    nc_redirect(0x140051940, (void *)sr_item_phone_changed);
    nc_redirect(0x1400F0160, (void *)sub_1400F0160);
    nc_redirect(0x140158AB0, (void *)crt_sprintf);
    nc_redirect(0x14005BCA0, (void *)sr_CreateVehicle);
    nc_redirect(0x14012CEB0, (void *)sub_14012CEB0);
    nc_redirect(0x140054130, (void *)sr_CreateItem);
    nc_save(&corporation_int(0, 0), 3 * 0x5BC4);
    nc_save(round_record(0), 16 * ROUND_RECORD_COUNT);
    for (int t = 0; t < 16; ++t)
        round_record_type_value(t) = 1000 + 37 * t;

    for (int n = 0; n < nc_cases(4096); ++n) {
        nc_restore();
        nc_seed((uint64_t)n * 2654435761u + 17);
        int event_start;
        set_up_case(n, &event_start);
        nc_line("case %d state %u timer %d", n, game_state, round_timer);
        update();
        report(n, event_start);
    }
    return 0;
}
