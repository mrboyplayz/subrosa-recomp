/* A player's team: changing it, and the damage for hurting a teammate.
 * Checked against the original machine code at 0x140138430 and
 * 0x14011B7F0.
 */
#include "player.h"
#include "corporation.h"
#include "events.h"
#include "frame.h"
#include "stocks.h"

/* Still in the client: the human is hurt by amount on a body part (part
   3 takes it off health and blood directly). */
extern long long sub_1400A9760(int human, unsigned part, long long unused, int amount);

#define CORPORATIONS 6
#define TEAM_NONE 17
#define GAME_TYPE_WORLD 4                /* RosaServer's game types: 3 round, 4 world, 5 eliminator */
#define GAME_TYPE_ELIMINATOR 5
#define TEAM_DAMAGE_PART 3

/* Counted up whenever the human's appearance changes, so its model is
   rebuilt. */
#define human_appearance_version(h) SR_GLOBAL(int32_t, 0x18399DAE0ULL + 4ULL * (uint64_t)(int64_t)(h))
/* The share of team damage a player takes back, in percent (RosaServer:
   Round::teamDamage). */
#define team_damage_percent SR_GLOBAL(int32_t, 0x183EBFCE8ULL)

/* Each corporation's suit and tie colours. */
static const int32_t team_suit_colors[CORPORATIONS] = { 6, 10, 11, 2, 1, 2 };
static const int32_t team_tie_colors[CORPORATIONS] = { 2, 9, 8, 3, 7, 1 };

/* Suit colours 3, 7 and 8 are bought (in a clothes shop) and are kept
   when the team changes. */
static int bought_suit(int32_t color)
{
    return color == 3 || color == 7 || color == 8;
}

void player_set_team(int index, int team)
{
    Player *player;
    int human;

    if (index == -1)
        return;
    player = &world_players[index];
    if (player->team == team)
        return;

    if ((uint32_t)player->team < CORPORATIONS && world_corporations[player->team].manager == index) {
        if (game_type == GAME_TYPE_WORLD)
            corporation_share_team_money(player->team);
        world_corporations[player->team].manager = -1;
    }

    human = player->human;
    player->team = team;
    if ((uint32_t)team < CORPORATIONS) {
        player->model = 1;
        if (!bought_suit(player->suit_color))
            player->suit_color = team_suit_colors[team];
        player->tie_color = team_tie_colors[team];
    }
    if (team == TEAM_NONE) {
        player->model = 0;
        if (!bought_suit(player->suit_color))
            player->suit_color = 0;
        player->tie_color = 0;
    }

    if (human != -1) {
        human_appearance_version(human)++;
        world_humans[human].model = player->model;
        world_humans[human].suit_color = player->suit_color;
        world_humans[human].tie_color = player->tie_color;
    }
}

void player_take_team_damage(int index, int damage)
{
    Player *player;

    if ((uint32_t)index > 255)
        return;
    player = &world_players[index];
    if (player->is_god_mode || damage <= 0 || game_type == GAME_TYPE_WORLD || game_type == GAME_TYPE_ELIMINATOR)
        return;

    /* (The original also formats "%s(%d) team damage: %d" with the name,
       phone number and damage into a buffer it never uses.) */
    if (player->human != -1)
        sub_1400A9760(player->human, TEAM_DAMAGE_PART, 0,
                      (int32_t)((uint32_t)damage * (uint32_t)team_damage_percent) / 100);
    event_update_player(index);
    event_update_player_finance(index);
}
