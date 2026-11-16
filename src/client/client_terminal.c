#include "shared_client.h"
#include "terminal.h"

/* 0x1400C5750: maps 5 lines of raw source into screen lines and their mapped
   counterparts. Each raw line is mapped twice: once as a coloured display
   line (colour 15, 12 for selected) and once as a plain line (with owners).
   The mapped output for the second pass goes into item_unknown_3b4.
   Tail-calls terminal_selection_list_draw. */
int64_t terminal_raw_source_map(int item)
{
    char *raw_source = item_record_text_chunk(item, 0);
    int line = 3;

    for (int i = 0; i < 5; i++) {
        char *screen_line = item_text_line(item, line - 1);
        uint8_t *screen_colours = item_text_colours(item, line - 1);
        int char_idx = 0;

        while (char_idx < 62 && raw_source[char_idx]) {
            unsigned char c = (unsigned char)raw_source[char_idx];
            if (c - 'A' > 25) {
                screen_line[char_idx] = (char)c;
            } else {
                uint32_t slot = (uint32_t)SR_GLOBAL(int32_t, 0x182BBCB68ULL + 0x1B80ULL * (uint64_t)(int64_t)item + 4ULL * (uint64_t)(int64_t)c);
                screen_line[char_idx] = (char)(slot + 'A');
                screen_colours[char_idx] = (uint8_t)(SR_GLOBAL(int32_t, 0x182BBCBE8ULL + 0x1B80ULL * (uint64_t)(int64_t)item) == (int32_t)slot ? 12 : 15);
            }
            char_idx++;
        }
        screen_line[char_idx] = 0;
        item_link_text_line(item, line - 1);

        char *mapped_line = &SR_GLOBAL(char, 0x182BBB534ULL + 0x1B80ULL * (uint64_t)(int64_t)item + 64ULL * (uint64_t)(int64_t)i);
        int map_idx = 0;
        while (map_idx < 62 && raw_source[map_idx]) {
            unsigned char c = (unsigned char)raw_source[map_idx];
            if (c - 'A' > 25) {
                mapped_line[map_idx] = (char)c;
            } else {
                uint32_t slot = (uint32_t)SR_GLOBAL(int32_t, 0x182BBCB68ULL + 0x1B80ULL * (uint64_t)(int64_t)item + 4ULL * (uint64_t)(int64_t)c);
                uint32_t mapped_slot = (uint32_t)SR_GLOBAL(int32_t, 0x182BBC8E4ULL + 0x1B80ULL * (uint64_t)(int64_t)item + 4ULL * (uint64_t)(int64_t)slot);
                mapped_line[map_idx] = (char)(mapped_slot == (uint32_t)-1 ? 32 : mapped_slot + 'A');
            }
            map_idx++;
        }
        mapped_line[map_idx] = 0;
        item_link_text_line(item, line);

        line += 3;
        raw_source += 16;
    }

    return terminal_selection_list_draw(item);
}

/* 0x1400C3E00: zeroes a 63-byte colour row at record+0x404+64*cursor, sends
   the line, updates the ring cursor (0x3F4/0x3F8/0x3FC), and bumps the change
   counter (0x18A78860). */
int64_t terminal_clear_line_and_bump(int item)
{
    extern const uint8_t xmmword_140279200[16];
    int cursor = SR_GLOBAL(int32_t, 0x182BBB4E8ULL + 0x1B80ULL * (uint64_t)(int64_t)item);
    uint8_t *colours = &SR_GLOBAL(uint8_t, 0x182BBC404ULL + 0x1B80ULL * (uint64_t)(int64_t)item + 64ULL * (uint64_t)(int64_t)cursor);
    
    memset(colours, xmmword_140279200[0], 63);
    item_link_text_line(item, cursor);

    int cursor_prev = cursor;
    int cursor_next = SR_GLOBAL(int32_t, 0x182BBB4ECULL + 0x1B80ULL * (uint64_t)(int64_t)item);
    
    if (((cursor_prev + 10) & 0x1F) == cursor_next) {
        SR_GLOBAL(int32_t, 0x182BBB4ECULL + 0x1B80ULL * (uint64_t)(int64_t)item) = (cursor_next + 1) & 0x1F;
    }
    
    int new_cursor = (cursor_prev + 1) & 0x1F;
    SR_GLOBAL(int32_t, 0x182BBB4E8ULL + 0x1B80ULL * (uint64_t)(int64_t)item) = new_cursor;
    
    SR_GLOBAL(int32_t, 0x18A78860)++;
    
    int64_t result = (int64_t)(new_cursor << 6);
    SR_GLOBAL(int32_t, 0x182BBB4F0ULL + 0x1B80ULL * (uint64_t)(int64_t)item) = (int32_t)result;
    
    return result;
}
