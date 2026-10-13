/* What a player says: to everyone, or through their human to those near it
 * and into a phone or walkie-talkie in its hands. Checked against the
 * original machine code at 0x1401164B0.
 */
#include "player.h"
#include "events.h"
#include "frame.h"
#include "human.h"
#include "items/items.h"

#define GAME_STATE_RESTARTING 3          /* RosaServer STATE_RESTARTING: between rounds */

void player_say(int index, int action)
{
    Player *player = &world_players[index];
    const PlayerAction *said = &player->actions[action];
    int human = player->human;
    int hand;

    if (game_state == GAME_STATE_RESTARTING || human == -1 || world_humans[human].old_health <= 0) {
        event_message(EVENT_MESSAGE_PLAYER, said->text, index, said->b);
        return;
    }
    event_message(EVENT_MESSAGE_HUMAN, said->text, human, said->b);

    for (hand = 0; hand < 2; hand++) {
        const HumanHand *held = &world_humans[human].hands[hand];
        int item;

        if (held->count <= 0)
            continue;
        item = held->items[0];
        /* A phone in the first hand carries it to the phone it is
           connected to, if that one is connected back. */
        if (hand == 0 && world_items[item].type == ITEM_CELL_PHONE) {
            int other = item_phone_connected(item);

            if (other != -1 && item_phone_connected(other) == item)
                event_message(EVENT_MESSAGE_ITEM, said->text, other, said->b);
        }
        /* A walkie-talkie in either hand carries it to every other one on
           its channel. */
        if (world_items[item].type == ITEM_WALKIE_TALKIE) {
            int channel = item_team(item);
            int count = walkie_talkie_list_count(channel);
            int n;

            for (n = 0; n < count; n++)
                if (walkie_talkie_list_entry(channel, n) != item)
                    event_message(EVENT_MESSAGE_ITEM, said->text, walkie_talkie_list_entry(channel, n), said->b);
        }
    }
}
