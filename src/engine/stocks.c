/* Buying and selling stocks, sharing out a team's money. Checked against the
 * original machine code at 0x1401189F0, 0x14011AF80 and 0x140194C10.
 */
#include "stocks.h"
#include "corporation.h"
#include "frame.h"
#include "player.h"

#define CORPORATIONS 6
#define MAX_SHARES 10000                  /* a player holds at most this many */
#define GAME_TYPE_ROUND 3                 /* sells stocks for 98% instead of 95% */

/* 32-bit sums that wrap, as the original's do. */
static int32_t wrap_add(int32_t a, int32_t b) { return (int32_t)((uint32_t)a + (uint32_t)b); }
static int32_t wrap_sub(int32_t a, int32_t b) { return (int32_t)((uint32_t)a - (uint32_t)b); }

void stocks_buy(int index, int count)
{
    Player *player = &world_players[index];
    float money, cost;

    if (player->team == -1)
        return;
    if (player->stocks >= MAX_SHARES)
        count = 0;
    else if (wrap_add(player->stocks, count) >= MAX_SHARES)
        count = wrap_sub(MAX_SHARES, player->stocks);

    money = (float)player->money;
    cost = (float)count * world_stocks[player->team].price;
    if (money > cost) {
        world_stocks[player->team].shares = wrap_add(world_stocks[player->team].shares, count);
        player->money = (int32_t)(money - cost);
        player->stocks = wrap_add(player->stocks, count);
    }
}

void stocks_sell(int index, int count)
{
    Player *player = &world_players[index];
    int team = player->team;
    Stock *stock;
    float price, rate;

    if ((uint32_t)team >= CORPORATIONS || player->stocks < count)
        return;
    stock = &world_stocks[team];

    /* Each share is worth less by its part of what the missions drew
       beyond what the stocks paid in. */
    price = stock->price;
    for (int m = 0; m < 16; m++) {
        const CorporationMission *mission = &world_corporations[team].missions[m];
        int32_t drawn;

        if (!mission->active || mission->provided_cash <= 0 || stock->shares <= 0)
            continue;
        drawn = wrap_sub(mission->provided_cash, stock->cash_paid);
        price -= (float)(drawn < 0 ? 0 : drawn) / (float)stock->shares;
    }

    rate = game_type == GAME_TYPE_ROUND ? 0.98f : 0.95f;
    stock->shares = wrap_sub(stock->shares, count);
    player->stocks = wrap_sub(player->stocks, count);
    player->money = (int32_t)(rate * price * (float)count + (float)player->money);
}

void corporation_share_team_money(int team)
{
    int members = 0, share, other_share;

    for (int p = 0; p < MAX_PLAYERS; p++)
        if (world_players[p].active && world_players[p].team == team)
            members++;
    if (!members)
        return;

    share = world_team_funds[team].money / 10;
    if (share < 0)
        share *= 2;
    other_share = share;
    if (members > 1) {
        share /= 2;
        other_share = share / (members - 1);
    }

    for (int p = 0; p < MAX_PLAYERS; p++) {
        Player *player = &world_players[p];

        if (player->active && player->team == team)
            player->corporate_rating = wrap_add(player->corporate_rating,
                                                world_corporations[team].manager == p ? share : other_share);
    }
    world_team_funds[team].money = 0;
}
