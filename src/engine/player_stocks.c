#include "player_stocks.h"
#include "arith.h"
#include "events.h"
#include "frame.h"

#define player_money(p)  player_field(p, 0x4C)
#define player_shares(p) player_field(p, 0x8C)

void player_buy_shares(int player, int32_t count)
{
    int32_t team = player_team(player);
    if (team == -1) return;
    int32_t held = player_shares(player);
    if (held >= PLAYER_SHARE_LIMIT)
        count = 0;
    else if (add_int(held, count) >= PLAYER_SHARE_LIMIT)
        count = subtract_int(PLAYER_SHARE_LIMIT, held);
    EventStock *stock = &event_stocks[team];
    float money = (float)player_money(player);
    float cost = (float)count * stock->price;
    /* An unordered comparison buys nothing. */
    if (money > cost) {
        stock->shares = add_int(stock->shares, count);
        player_money(player) = truncate_float(money - cost);
        player_shares(player) = add_int(held, count);
    }
}
