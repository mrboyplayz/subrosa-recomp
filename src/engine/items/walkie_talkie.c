/* Walkie-talkie (26): the per-channel lists, and the talk flag. Part of the
   item update, 0x1400CC610. */
#include "items.h"

/* Files the walkie-talkie in its channel's list (the lists are emptied at
   the start of every item update). */
void walkie_talkie_file(int i)
{
    uint32_t channel = (uint32_t)item_team(i) & (WALKIE_TALKIE_CHANNELS - 1);
    int32_t count = walkie_talkie_list_count(channel);
    if (count < WALKIE_TALKIE_LIST_CAPACITY) {
        walkie_talkie_list_entry(channel, count) = i;
        walkie_talkie_list_count(channel)++;
    }
}

void walkie_talkie_update(int i)
{
    walkie_talkie_transmitting(i) = 0;
    if (item_input_flags(i) & 1)
        walkie_talkie_transmitting(i) = 1;
}
