/* Texts of items shared with the clients. */
#include "item_text.h"
#include "item.h"
#include "frame.h"
#include "items/items.h"

static int32_t first_free_text(void)
{
    for (int32_t k = 0; k < ITEM_TEXT_CAPACITY; k++)
        if (item_texts[k].active == 0)
            return k;
    return -1;
}

uint32_t computer_line_link(int item, int line)
{
    const char *text = computer_line(item, line);
    const uint8_t *colors = computer_line_colors(item, line);
    int64_t scanned = 0;
    while (text[scanned] != 0)
        scanned++;
    int32_t length = (int32_t)scanned;
    if (length > 63)
        length = 63;

    /* The line's record, if unchanged, is kept. */
    WorldItem *owner = &world_items[item];
    if ((owner->link_mask[(int64_t)line >> 5] >> (line & 31)) & 1) {
        int32_t record = owner->links[line];
        ItemText *old = &item_texts[record];
        if (old->length == length) {
            int same = 1;
            for (int32_t n = 0; n < length && same; n++)
                same = old->text[n] == text[n] && old->colors[n] == colors[n];
            if (same)
                return (uint32_t)record;
        }
        old->active = 0;
    }

    int32_t record = first_free_text();
    if (record == -1)
        return 0xFFFFFFFFu;
    ItemText *shared = &item_texts[record];
    shared->length = length;
    shared->active = 1;
    shared->active_high = 0;
    shared->tick = game_tick;
    shared->kind = 1;
    shared->item = item;
    shared->line = line;
    __builtin_memcpy(shared->text, text, (size_t)(int64_t)length);
    __builtin_memcpy(shared->colors, colors, (size_t)(int64_t)length);
    item_register_link(item, (uint32_t)record, line);
    return (uint32_t)record;
}
