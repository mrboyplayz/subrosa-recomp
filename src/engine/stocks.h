/* Corporation stocks and team money, one of each per corporation (the
   team number is the corporation's index, 0 to 5). */
#ifndef SR_ENGINE_STOCKS_H
#define SR_ENGINE_STOCKS_H

#include <stdint.h>
#include "memory.h"

/* 0x19021F0C0, 0x18 bytes each. A new world sets every price to 100. */
typedef struct Stock {
    int32_t shares;                      /* shares the players hold */
    float price;
    uint8_t pad_08[0x14 - 0x08];
    int32_t cash_paid;                   /* paid out of the stocks into missions so far */
} Stock;

/* 0x16D482320, 0x14 bytes each. */
typedef struct TeamFunds {
    int32_t money;                       /* spent when the team buys items */
    int32_t credit;                      /* how far below 0 money may go; game type 4: the manager's corporate rating */
    uint8_t pad_08[0x0C - 0x08];
    int32_t intel_state;                 /* items.h mission_team_intel_state */
    uint8_t pad_10[0x14 - 0x10];
} TeamFunds;

_Static_assert(sizeof(Stock) == 0x18, "Stock size");
_Static_assert(sizeof(TeamFunds) == 0x14, "TeamFunds size");

#define world_stocks     (&SR_GLOBAL(Stock, 0x19021F0C0ULL))
#define world_team_funds (&SR_GLOBAL(TeamFunds, 0x16D482320ULL))

/* The player buys count of their team's shares at the price, as many as
   take them up to 10000, when their money is more than the cost. A player
   with no team (-1) cannot; any other team number is not checked.
   0x1401189F0 */
void stocks_buy(int player, int count);

/* The player sells count of their team's shares, if they hold that many,
   for 95% (98% in game type 3) of the price less what the corporation's
   active missions have drawn beyond what the stocks paid in. 0x14011AF80 */
void stocks_sell(int player, int count);

/* A tenth of the team's money (a fifth when it is in debt) goes to its
   players' corporate ratings, the manager getting half of it and the rest
   split between the others (all of it each when the team has one player);
   the team's money is then 0. Nothing happens to an empty team.
   0x140194C10 */
void corporation_share_team_money(int team);

#endif
