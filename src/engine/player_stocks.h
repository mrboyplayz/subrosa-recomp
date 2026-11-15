/* Players buying their corporation's stock. */
#ifndef SR_ENGINE_PLAYER_STOCKS_H
#define SR_ENGINE_PLAYER_STOCKS_H
#include "memory.h"

/* A player holds at most this many shares. */
#define PLAYER_SHARE_LIMIT 10000

/* Buys up to count shares of the stock of the player's team, capped at the
 * share limit, when the player's cash is strictly more than their price.
 * The cash left is truncated to whole units. No team (-1): nothing.
 * 0x1401189F0 */
void player_buy_shares(int player, int32_t count);
#endif
