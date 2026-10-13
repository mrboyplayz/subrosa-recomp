/* Linking an item's line of text to a record: 0x140050F90 (with the item
 * link registration 0x1400C3BA0 it calls, in both builds). */
#include <string.h>
#include "nc.h"
#include "frame.h"
#include "item.h"

#ifdef NC_NATIVE
#define link_line(i, l) ((uint32_t (*)(int, int))NC_ADDR(0x140050F90))(i, l)
#else
#define link_line item_link_text_line
#endif

#define RECORDS 64

int main(void)
{
    nc_map_image();
    nc_save(&item_link_records[ITEM_LINK_RECORD_CAPACITY - 8], sizeof(ItemLinkRecord) * 8);
    int cases = nc_cases(5000);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        nc_restore();
        int item = (int)nc_rand_below(WORLD_ITEM_CAPACITY);
        int line = (int)nc_rand_below(64);
        WorldItem *w = &world_items[item];
        memset(w, 0, sizeof *w);
        char *text = item_text_line(item, line);
        uint8_t *colours = item_text_colours(item, line);
        int length = nc_chance(10) ? 64 + (int)nc_rand_below(80) : (int)nc_rand_below(64);
        for (int k = 0; k < length; k++) {
            text[k] = (char)('A' + nc_rand_below(4));
            colours[k] = (uint8_t)nc_rand_below(3);
        }
        text[length] = 0;
        if (length > 63 && line < 63)
            memset(item_text_line(item, line + 1) + (length - 64) + 1, 0, 1);   /* the scan ends somewhere */

        int full = nc_chance(5);
        for (int r = 0; r < RECORDS; r++) {
            ItemLinkRecord *rec = &item_link_records[r];
            memset(rec, 0x33, sizeof *rec);
            rec->used = full || nc_chance(60);
        }
        if (full)
            for (int r = RECORDS; r < ITEM_LINK_RECORD_CAPACITY; r++)
                item_link_records[r].used = r != ITEM_LINK_RECORD_CAPACITY - 1 || nc_chance(50);

        if (nc_chance(70)) {                  /* the line already has a record */
            int r = (int)nc_rand_below(RECORDS);
            ItemLinkRecord *rec = &item_link_records[r];
            item_link_mask_word(item, line >> 5) |= 1u << (line & 31);
            item_link_value(item, line) = (uint32_t)r;
            rec->used = 1;
            int same = length > 63 ? 63 : length;
            rec->length = nc_chance(80) ? same : (int)nc_rand_below(64);
            memcpy(rec->text, text, 64);
            memcpy(rec->colours, colours, 64);
            if (nc_chance(30) && same > 0) {
                int at = (int)nc_rand_below((uint32_t)same);
                if (nc_chance(50))
                    rec->text[at] ^= 1;
                else
                    rec->colours[at] ^= 1;
            }
        }
        item_link_peer_count = (int)nc_rand_below(4);
        game_tick = (int32_t)nc_rand();

        uint32_t result = link_line(item, line);
        nc_line("result %08x item %016llx records %016llx last %d", result,
                (unsigned long long)nc_hash(w, sizeof *w),
                (unsigned long long)nc_hash(item_link_records, sizeof(ItemLinkRecord) * RECORDS),
                item_link_records[ITEM_LINK_RECORD_CAPACITY - 1].used);
        for (int p = 0; p < 4; p++)
            nc_line("peer %d %08x %08x", p, item_peer_link_mask(p, item, 0), item_peer_link_mask(p, item, 1));
        nc_line("local %08x %08x", item_local_link_mask(item, 0), item_local_link_mask(item, 1));
    }
    return 0;
}
