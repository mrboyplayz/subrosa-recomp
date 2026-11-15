// NC_WRAPPERS: 1401189F0
#include <limits.h>
#include "nc.h"
#include "player_stocks.h"
#include "events.h"
#include "frame.h"

#ifdef NC_NATIVE
#define buy(player, count) ((void (*)(int, int))NC_ADDR(0x1401189F0))(player, count)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1401189F0(int, int);
#define buy(player, count) ((void)sub_1401189F0(player, count))
#else
#define buy(player, count) player_buy_shares(player, count)
#endif

static int32_t pick(const int32_t *values, int count)
{
    return nc_chance(15) ? (int32_t)nc_rand() : values[nc_rand_below((uint32_t)count)];
}

int main(void)
{
    static const int32_t teams[] = {-1, 0, 1, 2, 3, 4, 5, -2};
    static const int32_t held[] = {0, 1, 5000, 9989, 9990, 9999, 10000, 10001, -5, INT_MIN, INT_MAX - 3};
    static const int32_t counts[] = {0, 1, 10, 100, 1000, -10, INT_MAX, INT_MIN};
    static const int32_t money[] = {0, 1, 99, 100, 101, 250, 1000000, -100, INT_MAX, INT_MIN};
    static const float prices[] = {0.0f, 1.0f, 10.0f, 2.5f, 0.1f, 1e-30f, 3e38f, -4.0f};
    nc_map_image();
    for (int n = 0; n < nc_cases(4000); ++n) {
        nc_seed(n);
        int player = (int)nc_rand_below(PLAYER_CAPACITY);
        int32_t team = teams[nc_rand_below(8)];
        player_team(player) = team;
        player_field(player, 0x8C) = pick(held, 11);
        player_field(player, 0x4C) = pick(money, 10);
        for (int t = -2; t < 6; ++t) {
            event_stocks[t].shares = (int32_t)nc_rand();
            event_stocks[t].price = nc_chance(60) ? prices[nc_rand_below(8)] : nc_float(-50.0f, 500.0f);
            event_stocks[t].unknown_08 = (int32_t)nc_rand();
        }
        int32_t count = pick(counts, 8);
        /* Exact ties: the cash equals the price of the shares bought. */
        if (team >= 0 && nc_chance(15)) {
            event_stocks[team].price = 2.0f;
            player_field(player, 0x8C) = 0;
            count = 50;
            player_field(player, 0x4C) = 100;
        }
        buy(player, count);
        nc_line("buy %d player %d team %d count %d money %08x shares %08x stocks %016llx", n, player, team,
                count, (uint32_t)player_field(player, 0x4C), (uint32_t)player_field(player, 0x8C),
                (unsigned long long)nc_hash(&event_stocks[-2], 8 * sizeof(EventStock)));
    }
    return 0;
}
