/* An item's lines of text and the records they are sent in (0x140050F90).
   See item.h. */
#include <string.h>
#include "frame.h"
#include "item.h"

uint32_t item_allocate_text_record(int item, uint32_t line, int length)
{
    uint32_t index = 0;
    while (item_link_records[index].used)
        if (++index >= ITEM_LINK_RECORD_CAPACITY)
            return UINT32_MAX;
    if (length > 64) length = 64;
    ItemLinkRecord *record = &item_link_records[index];
    record->item = item;
    record->length = length;
    record->line = (int32_t)line;
    record->tick = game_tick;
    record->used = 1;
    record->unknown_4 = 0;
    record->unknown_8 = 0;
    memmove(record->text, item_record_text_chunk(item, line), (size_t)length);
    return index;
}

uint32_t item_link_text_line(int item, int line)
{
    const char *text = item_text_line(item, line);
    const uint8_t *colours = item_text_colours(item, line);
    int64_t n = -1;
    do
        n++;
    while (text[n]);                     /* (the original's own strlen, not limited to the line) */
    int32_t length = (int32_t)n > 63 ? 63 : (int32_t)n;

    if ((item_link_mask_word(item, line >> 5) >> (line & 31)) & 1) {
        int32_t index = (int32_t)item_link_value(item, line);
        ItemLinkRecord *old = &item_link_records[index];
        if (old->length == length) {
            int64_t k = 0;
            if (length <= 0)
                return (uint32_t)index;
            while (old->text[k] == text[k] && old->colours[k] == colours[k])
                if (++k >= length)
                    return (uint32_t)index;
        }
        old->used = 0;
    }

    int32_t index = 0;
    while (item_link_records[index].used)
        if (++index >= ITEM_LINK_RECORD_CAPACITY)
            return UINT32_MAX;
    ItemLinkRecord *r = &item_link_records[index];
    r->length = length;
    r->used = 1;
    r->unknown_4 = 0;
    r->tick = game_tick;
    r->unknown_8 = 1;
    r->item = item;
    r->line = line;
    memmove(r->text, text, (size_t)length);
    memmove(r->colours, colours, (size_t)length);
    item_register_link(item, (uint32_t)index, line);
    return (uint32_t)index;
}
