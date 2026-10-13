/* Players: making and removing them. Checked against the original machine
 * code at 0x14005CCF0 and 0x1400802F0.
 */
#include <string.h>
#include "player.h"
#include "bot.h"
#include "corporation.h"
#include "events.h"
#include "frame.h"
#include "human.h"
#include "stocks.h"

extern int rand(void);                   /* the original's own, 0x14023B1B0 */

/* Still in the client: */
extern long long sub_1400F3B30(int player);              /* takes the player off the corporations' member lists */

#define TEAM_NONE 17
#define GAME_STATE_LOBBY 1                /* game_state 1: waiting between rounds */
#define START_MONEY 50000

int player_create(void)
{
    int index;
    Player *player;

    for (index = 0; index < MAX_PLAYERS; index++)
        if (!world_players[index].active)
            break;
    if (index == MAX_PLAYERS)
        return -1;

    player = &world_players[index];
    memset((uint8_t *)player + sizeof player->active, 0, sizeof *player - sizeof player->active);
    player->account = -1;
    player->active = 1;
    player->team = TEAM_NONE;
    player->human = -1;
    player->money = START_MONEY;
    for (int slot = 0; slot < 8; slot++)
        player->inventory[slot].count = 0;
    player->menu_tab = 0;
    if (game_state == GAME_STATE_LOBBY && game_type == 3)
        player->menu_tab = 2;
    player->human_124 = 1.0f;

    rand();                              /* drawn and thrown away */
    player->features[0] = (PlayerFeature){ { 0.046875f, 0.046875f, -0.15f }, { 1.0f, 1.0f, 1.0f } };
    player->features[1] = (PlayerFeature){ { -0.046875f, 0.046875f, -0.15f }, { 1.0f, 1.0f, 1.0f } };

    player->head = rand() % 5;
    player->skin_color = rand() % 6;
    if ((rand() & 3) != 3)               /* three times in four */
        player->skin_color = 2;
    player->hair_color = rand() % 6;
    player->hair = rand() % 9;
    player->eye_color = rand() % 8;
    bot_route_start(index) = -1;
    return index;
}

void player_delete(int index)
{
    Player *player = &world_players[index];

    if (!player->is_bot) {
        sub_1400F3B30(index);
        stocks_sell(index, player->stocks);
        /* The original sells a second time for every valid player (its test
           is index <= 255, unsigned): 0 shares, but the money still goes
           through a float again. */
        if ((unsigned)index <= 0xFF)
            stocks_sell(index, player->stocks);

        for (int c = 0; c < 6; c++) {
            Corporation *corporation = &world_corporations[c];
            if (corporation->manager != index)
                continue;
            if (game_type == 4)
                corporation_share_team_money(c);
            corporation->manager = -1;
            corporation->barred_count = 0;
        }

        if (player->account != -1) {
            Account *account = &world_accounts[player->account];
            account->money = player->money;
            account->corporate_rating = player->corporate_rating;
            account->criminal_rating = player->criminal_rating;
            account->spawn_timer = player->spawn_timer;
        }
    }

    /* The human stays in the world without a player, keeping the account. */
    if (player->human != -1) {
        WorldHuman *human = &world_humans[player->human];
        if (human->player == index) {
            human->account = player->account;
            human->player = -1;
        }
    }
    player->active = 0;
    event_update_player(index);
}

char *player_clean_name(int index)
{
    char *name = world_players[index].name;
    char *last;
    int k;

    for (k = 0; k < 31; k++)
        if (name[k] == '/')
            name[k] = ' ';
    name[31] = 0;

    /* Leading spaces: shift the name left by one, up to and including its
       end, until it starts with something else. */
    while (name[0] == ' ')
        for (k = 0; k < 31 && name[k] != 0; k++)
            name[k] = name[k + 1];

    k = (int)strlen(name) - 1;
    last = &name[k];
    while (k >= 0 && *last == ' ') {
        *last-- = 0;
        k--;
    }

    if (name[0] == 0) {
        strcpy(name, "Noname");
        last = NULL;
    }
    name[31] = 0;
    return last;
}
