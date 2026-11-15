/* Round mode update. See round_update.h. */
#include <stdlib.h>
#include <string.h>
#include "round_update.h"
#include "round_settings.h"
#include "events.h"
#include "world.h"
#include "arith.h"
#include "area_bounds.h"

/* Existing client boundaries, with their original prototypes. */
extern void sr_math_mat3_rotate_rows(float matrix[9], const float axis[3], float angle);
extern long long sr_CreateItem(int type, float *position, unsigned *velocity, float *rotation);
extern long long sr_CreateVehicle(int type, float *position, unsigned *velocity, unsigned *rotation, unsigned a5);
extern long long sr_item_phone_changed(unsigned item);
extern void sr_event_mission_update(int corporation, int mission);
extern void sr_event_player_update(int player);
extern long long sr_ResetGame(long long a1, long long a2, long long a3);   /* ignores its arguments */
extern long long sub_140053840(float *position, float *rotation, int player); /* the player's new human */
extern long long sub_1400F0160(int stage);       /* round-over announcement */
extern long long sub_1400F3E60(void);            /* the round ends */
extern long long sub_140117020(int player);      /* after spawning */
extern long long sub_140117340(int player);      /* the game is about to reset */
extern long long sub_14012CEB0(int a1, unsigned a2, int a3, int a4, int a5, float a6);
extern long long sub_14012E960(int a1);
extern long long sub_14005E520(void);
extern void crt_sprintf(char *out, char *format, ...);

/* The first row of an identity matrix, {1, 0, 0, 0}. */
extern const float identity_row[4] __asm__("xmmword_140278D30");
/* "Monsota", "Goldmen", "Megacorp", ... */
extern char *corporation_names[] __asm__("off_1402B2890");

#define HALF_PI 1.5707964f
#define PI 3.1415927f

static void identity_rotation(float m[9])
{
    memcpy(&m[0], identity_row, 16);
    memcpy(&m[4], identity_row, 16);
    m[8] = 1.0f;
}

/* The lower-inclusive, upper-exclusive tests of the original's COMISS
   branches: a NaN coordinate or lower bound fails, a NaN upper bound
   passes, except where the original uses an ordered "above". */
static int at_least(float v, float lower) { return v >= lower; }
static int below(float v, float upper)    { return !(v >= upper); }

static int item_is_valuable(int item)
{
    int32_t type = world_items[item].type;
    return type == 17 || (uint32_t)type - 19u <= 5;
}

/* ---- lobby ------------------------------------------------------------- */

static void spawn_player(int player, int team)
{
    const float *spawn = corporation_spawn_position(team);
    float spawn_x = spawn[0], spawn_y = spawn[1], spawn_z = spawn[2];
    float position[3];
    float rotation[9];
    position[0] = (float)((int32_t)(uint8_t)rand() - 127) * 0.0234375f + spawn_x;
    int32_t second = (uint8_t)rand();
    position[1] = spawn_y - 0.25f;
    position[2] = (float)(second - 127) * 0.0234375f + spawn_z;
    float angle = corporation_angle(player_team(player)) + HALF_PI;
    identity_rotation(rotation);
    sr_math_mat3_rotate_rows(rotation, &rotation[3], angle);

    int32_t suit_limit = player_suit_color(player);
    team = player_team(player);
    player_model(player) = 1;
    if (suit_limit <= 2)
        player_suit_color(player) = team;
    if (team == 0)
        player_tie_color(player) = 2;
    else if (team == 1)
        player_tie_color(player) = 9;
    else if (team == 2)
        player_tie_color(player) = 8;

    int32_t human = (int32_t)sub_140053840(position, rotation, player);
    player_human(player) = human;
    player_unknown_164(player) = 0;
    human_unknown_98(human) = angle;
    sr_event_player_update(player);
    sub_140117020(player);
}

/* The first free parking spot, marked used, or -1. */
static int take_spot(int corporation)
{
    int32_t count = corporation_spot_count(corporation);
    for (int spot = 0; spot < count; ++spot) {
        if (!corporation_spot_used(corporation, spot)) {
            corporation_spot_used(corporation, spot) = 1;
            return spot;
        }
    }
    return -1;
}

static void refill_round_records(void)
{
    for (int i = 0; i < ROUND_RECORD_COUNT; ++i) {
        int32_t *r = round_record(i);
        if (r[0] && (rand() & 7) == 0)
            r[0] = 0;
    }
    for (int i = 0; i < ROUND_RECORD_COUNT; ++i) {
        int32_t *r = round_record(i);
        if (r[0])
            continue;
        uint32_t pick = (uint32_t)rand() & 0xF;
        int32_t type;
        if (pick < 2)
            type = 7;
        else if (pick < 6)
            type = 0;
        else if (pick < 10)
            type = 15;
        else if (pick < 13)
            type = 9;
        else if (pick < 15)
            type = 6;
        else
            type = (rand() & 0xF) == 0 ? 5 : 4;
        r[0] = 1;
        r[1] = type;
        r[3] = round_record_type_value(type);
        r[2] = rand() % 6;
    }
}

static void set_up_corporation(int c)
{
    int spot = take_spot(c);
    int32_t vehicle = -1;
    if (spot != -1)
        vehicle = (int32_t)sr_CreateVehicle(0, corporation_spot_position(c, spot), NULL,
                                            (unsigned *)corporation_spot_rotation(c, spot), 0);
    int32_t record = (int32_t)sub_14012CEB0(0, 0, 0, 0, 0, 0.0f);
    unknown_15fd16260_7c(record) = 0;
    unknown_15fd16260_8(record) = vehicle;
    vehicle_unknown_3648(vehicle) = record;
    if (corporation_member_count(c) > 4) {
        spot = take_spot(c);
        if (spot != -1)
            sr_CreateVehicle(9, corporation_spot_position(c, spot), NULL,
                             (unsigned *)corporation_spot_rotation(c, spot), 0);
    }

    /* Two phones on the desk, numbers 1111 * (c + 1) and one more. */
    float angle = corporation_angle(c) - HALF_PI;
    const float *desk = corporation_phone_position(c);
    float desk_x = desk[0], desk_y = desk[1], desk_z = desk[2];
    float rotation[9];
    float position[3];
    identity_rotation(rotation);
    sr_math_mat3_rotate_rows(rotation, &rotation[3], angle);
    sr_math_mat3_rotate_rows(rotation, &rotation[3], PI);
    float x = rotation[6] * 7.75f + desk_x;
    float y = rotation[7] * 7.75f + desk_y;
    float z = rotation[8] * 7.75f + desk_z;
    position[0] = x;
    position[1] = y;
    position[2] = z;
    int32_t phone = (int32_t)sr_CreateItem(25, position, NULL, rotation);
    if (phone != -1) {
        item_unknown_278(phone) = 0;
        item_unknown_160(phone) = 1111 * (c + 1);
        sr_item_phone_changed((unsigned)phone);
    }
    position[0] = rotation[0] * 0.5f + x;
    position[1] = rotation[1] * 0.5f + y;
    position[2] = rotation[2] * 0.5f + z;
    phone = (int32_t)sr_CreateItem(25, position, NULL, rotation);
    if (phone != -1) {
        item_unknown_278(phone) = 1;
        item_unknown_160(phone) = 1111 * c + 1112;
        sr_item_phone_changed((unsigned)phone);
    }
}

static void set_up_round(void)
{
    sub_14012E960(128);
    refill_round_records();
    sub_14005E520();
    for (int c = 0; c < CORPORATION_COUNT; ++c) {
        int32_t manager = corporation_manager(c);
        if (manager != -1) {
            char text[96];
            crt_sprintf(text, "%s Manager: %s", corporation_names[c], player_name(manager));
            event_message(0, text, (uint32_t)-1, 0);
        }
    }
    for (int c = 0; c < CORPORATION_COUNT; ++c)
        set_up_corporation(c);
}

/* Every player of a corporation with a human sits in a vehicle. */
static int everyone_aboard(void)
{
    int aboard = 1;
    for (int c = 0; c < CORPORATION_COUNT; ++c)
        for (int p = 0; p < PLAYER_CAPACITY; ++p)
            if (player_active(p) && player_team(p) == c) {
                int32_t human = player_human(p);
                if (human != -1 && human_vehicle(human) == -1)
                    aboard = 0;
            }
    return aboard;
}

static void lobby_update(void)
{
    int32_t timer = round_timer;
    int on_teams = 0;
    int ready = 1;
    for (int p = 0; p < PLAYER_CAPACITY; ++p) {
        if (!player_active(p) || player_is_bot(p))
            continue;
        int32_t team = player_team(p);
        if ((uint32_t)team <= 2)
            ++on_teams;
        ready = player_ready(p) ? ready : 0;
        if (timer < 5400 && player_human(p) == -1 && team != -1 && team < 3) {
            spawn_player(p, team);
            timer = round_timer;
        }
    }
    int all_ready = on_teams ? ready : 0;
    if (timer == round_door_close_tick)
        for (int c = 0; c < CORPORATION_COUNT; ++c)
            event_corporation_door((uint32_t)c, 0);

    int32_t remaining = subtract_int(timer, 1);
    round_timer = remaining;
    if (!on_teams) {
        if ((uint32_t)remaining - 5401u <= 1498)
            remaining = 6900;
        round_timer = remaining;
    }
    int set_up = remaining == 5400;
    if (all_ready && remaining > 5400) {
        round_timer = 5400;
        set_up = 1;
    }
    if (set_up) {
        set_up_round();
        remaining = round_timer;
    }

    if (remaining < 5400 && everyone_aboard()) {
        remaining = subtract_int(remaining, 7);
        round_timer = remaining;
    }
    if (remaining <= 0) {
        for (int c = 0; c < CORPORATION_COUNT; ++c) {
            for (int m = 0; m < CORPORATION_MISSIONS; ++m)
                if (corporation_mission_active(c, m))
                    sr_event_mission_update(c, m);
            event_corporation_door((uint32_t)c, 1);
            corporation_door_open(c) = 1;
        }
        game_state = 2;
        round_timer = multiply_int(3600, round_settings->round_minutes);
    }
}

/* ---- round ------------------------------------------------------------- */

/* Interior x/z test as the item check writes it: corporations 0 and 1 end
   with an ordered "upper above z", corporation 2 with the exclusive test. */
static int item_in_interior(float x, float z, int c, int ordered_upper)
{
    const AreaBounds *b = corporation_interior_bounds(c);
    if (!at_least(x, b->lower[0]) || !below(x, b->upper[0]) || !at_least(z, b->lower[2]))
        return 0;
    return ordered_upper ? b->upper[2] > z : below(z, b->upper[2]);
}

static int valuables_outside_interiors(void)
{
    for (int i = 0; i < 1024; ++i) {
        if (!world_items[i].active || !item_is_valuable(i))
            continue;
        float x = world_items[i].position[0], z = world_items[i].position[2];
        int inside = item_in_interior(x, z, 0, 1);
        if (item_in_interior(x, z, 1, 1))
            inside = 1;
        if (!item_in_interior(x, z, 2, 0) && !inside)
            return 1;
    }
    return 0;
}

static int humans_in_own_interiors(void)
{
    for (int c = 0; c < CORPORATION_COUNT; ++c) {
        const AreaBounds *b = corporation_interior_bounds(c);
        for (int p = 0; p < PLAYER_CAPACITY; ++p) {
            if (!player_active(p) || player_team(p) != c)
                continue;
            int32_t human = player_human(p);
            if (human == -1)
                continue;
            float x = human_floats(human, 0x80)[0], z = human_floats(human, 0x80)[2];
            if (!at_least(x, b->lower[0]) || !below(x, b->upper[0])
                || !at_least(z, b->lower[2]) || !below(z, b->upper[2]))
                return 0;
        }
    }
    return 1;
}

static int valuables_in_vaults(void)
{
    int all = 1;
    for (int i = 0; i < 1024; ++i) {
        if (!world_items[i].active || !item_is_valuable(i))
            continue;
        const float *v = world_items[i].position;
        int c;
        for (c = 0; c < CORPORATION_COUNT; ++c) {
            const AreaBounds *b = corporation_vault_bounds(c);
            if (at_least(v[0], b->lower[0]) && below(v[0], b->upper[0])
                && at_least(v[1], b->lower[1]) && below(v[1], b->upper[1])
                && at_least(v[2], b->lower[2]) && below(v[2], b->upper[2]))
                break;
        }
        if (c == CORPORATION_COUNT)
            all = 0;
    }
    return all;
}

/* Opens a corporation's door once none of its players has a human. */
static void open_door_when_empty(int c)
{
    if (corporation_door_open(c))
        return;
    for (int p = 0; p < PLAYER_CAPACITY; ++p)
        if (player_active(p) && player_team(p) == c && player_human(p) != -1)
            return;
    event_corporation_door((uint32_t)c, 1);
    corporation_door_open(c) = 1;
}

static void round_running_update(void)
{
    int32_t elapsed = add_int(game_state_time, 1);
    int32_t remaining = round_timer = subtract_int(round_timer, 1);
    game_state_time = add_int(game_state_time, 1);
    if (round_timer == 3600 * (round_timer / 3600)) {
        for (int p = 0; p < PLAYER_CAPACITY; ++p) {
            int32_t left = player_unknown_6c(p);
            player_unknown_68(p) = 0;
            if (left > 0)
                player_unknown_6c(p) = left - 1;
            player_unknown_70(p) = 0;
        }
    }
    if (elapsed >= 7200 && valuables_outside_interiors() && humans_in_own_interiors()) {
        remaining = subtract_int(remaining, 9);
        round_timer = remaining;
    }
    for (int c = 0; c < CORPORATION_COUNT; ++c)
        open_door_when_empty(c);

    if (valuables_in_vaults()) {
        if (remaining > 60)
            remaining = 60;
        round_timer = remaining;
    }
    int nobody_alive = 1;
    for (int p = 0; p < PLAYER_CAPACITY; ++p)
        if (player_active(p) && !player_is_bot(p) && player_human(p) != -1)
            nobody_alive = 0;
    if (nobody_alive && remaining > 60) {
        round_timer = 60;
    } else if (remaining <= 0) {
        sub_1400F3E60();
        game_state = 3;
        round_timer = round_over_ticks;
    }
}

/* ---- round over -------------------------------------------------------- */

static const int32_t announcement_ticks[] = {1250, 1200, 1080, 960, 840, 720, 600, 480, 360, 240, 120};

/* The richest player of a corporation becomes its manager: by bank account
   when weekly, otherwise by cash plus shares at the corporation's price. */
static void choose_manager(int c, int32_t *weekly)
{
    int32_t best = 0;
    int32_t best_player = -1;
    float price = event_stocks[c].price;
    for (int p = 0; p < PLAYER_CAPACITY; ++p) {
        if (!player_active(p) || player_team(p) != c)
            continue;
        if (*weekly == 1) {
            int32_t account = player_account(p);
            if (account == -1)
                continue;
            int32_t money = account_money(account);
            if (best < money) {
                best = money;
                best_player = p;
            }
        } else {
            float worth = (float)player_shares(p) * price + (float)player_money(p);
            if (!((float)best >= worth)) {
                best = truncate_float(worth);
                best_player = p;
            }
        }
    }
    if (best_player != -1)
        player_is_manager(best_player) = 1;
    if (corporation_manager(c) != best_player) {
        corporation_manager(c) = best_player;
        corporation_unknown_58bc(c) = 0;
        *weekly = round_weekly;
    }
}

static void round_over_update(void)
{
    int32_t timer = round_timer = subtract_int(round_timer, 1);
    for (int stage = 0; stage < 11; ++stage) {
        if (timer == announcement_ticks[stage]) {
            sub_1400F0160(stage - 1);
            timer = round_timer;
        }
    }
    if (timer > 0)
        return;
    for (int p = 0; p < PLAYER_CAPACITY; ++p)
        if (player_active(p))
            player_is_manager(p) = 0;
    int32_t weekly = round_weekly;
    for (int c = 0; c < CORPORATION_COUNT; ++c)
        choose_manager(c, &weekly);
    for (int p = 0; p < PLAYER_CAPACITY; ++p)
        if (player_active(p) && !player_is_bot(p))
            sub_140117340(p);
    sr_ResetGame(0, 0, 0);
}

/* 0x1400F6C50 */
void round_update(void)
{
    for (int p = 0; p < PLAYER_CAPACITY; ++p)
        if (player_active(p) && player_unknown_88(p) > 0)
            --player_unknown_88(p);
    if (game_state == 1)
        lobby_update();
    else if (game_state == 2)
        round_running_update();
    else if (game_state == 3)
        round_over_update();
}
