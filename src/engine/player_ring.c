/* The players' speech ring: see player_ring.h. */
#include "player_ring.h"

/* Posts spoken text into a player's ring: the type word, the length capped
   at 64 by masking, the message bytes copied forward like the original's,
   then the channel selector. Returns the next write cursor, wrapped to the
   ring's 64 slots by masking the old cursor's low byte. 0x140116A40 */
int player_ring_text(int player, const unsigned char *text)
{
    PlayerRingSlot *slot;
    int length, index, result;

    length = 0;
    while (text[length])
        length++;
    length &= 0x3F;
    index = *player_ring_cursor(player);
    slot = &player_ring_slots(player)[index];
    slot->type = 1;
    slot->count = length;
    for (int k = 0; k < length; k++)
        slot->payload[k] = text[k];
    slot->channel = player_ring_selected_channel;
    result = ((uint8_t)index + 1) & 0x3F;
    *player_ring_cursor(player) = result;
    return result;
}

/* Posts three values into a player's ring on the same terms: type 3, the
   values in the count, channel and value words, then the next write
   cursor. 0x140116B00 */
int player_ring_values(int player, unsigned int count, unsigned int channel, unsigned int value)
{
    PlayerRingSlot *slot;
    int index, result;

    index = *player_ring_cursor(player);
    slot = &player_ring_slots(player)[index];
    slot->type = 3;
    slot->count = (int32_t)count;
    slot->channel = (int32_t)channel;
    slot->value = (int32_t)value;
    result = ((uint8_t)index + 1) & 0x3F;
    *player_ring_cursor(player) = result;
    return result;
}
