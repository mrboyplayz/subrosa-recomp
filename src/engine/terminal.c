/* The computer item's terminal: the share of mission slots whose owner
   matches the slot, a word copied between the raw record text and a screen
   line through the letter-to-slot table, the selection list rows (numbers
   and letters around the selected slot), and the snake game's keys.

   One 0x1B80-byte record per item in the flat state region. The computer
   tables in item.h hold the slot pointers, the per-slot numbers and the
   per-slot owners; the screen lines and their colour rows are
   item_text_line and item_text_colours. The accessors below cover the
   terminal's remaining words. */
#include <stdint.h>
#include <string.h>

#include "item.h"
#include "memory.h"

/* The game's own toupper (0x14023ACB8), declared plain so the call is not
    a dllimport reference to the CRT's. */
int toupper(int C);

/* The slot the terminal's cursor is on, one before item_computer_countdown. */
#define terminal_selected_slot(i) SR_GLOBAL(int32_t, 0x182BBCBE8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))
/* The letter-to-slot table: for a typed letter, the slot it names. */
#define terminal_letter_slot(i, letter) \
    SR_GLOBAL(uint32_t, 0x182BBC8E4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 4ULL * (uint64_t)(int64_t)(letter))
/* The snake's heading (16 left, 17 up, 18 right, 19 down as keys). */
#define terminal_snake_direction(i) SR_GLOBAL(int32_t, 0x182BBC7F4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))

/* 0x1400C58E0: over the twenty-six mission slots, counts the slots whose
   mission is present (its number above zero) and, of those, the ones whose
   owner matches the slot. A present mission with no owner (-1) still
   counts. Returns the matched share, or 1.0 when nothing counts. */
float terminal_mission_hit_ratio(int item)
{
    int total = 0;
    int hits = 0;
    for (int slot = 0; slot < 26; slot++) {
        int counted = total + 1;
        if (item_computer_used(item, slot) <= 0)
            counted = total;
        uint32_t owner = (uint32_t)item_computer_owner(item, (int32_t)item_computer_slot(item, slot));
        if (owner == (uint32_t)slot)
            ++hits;
        else if (owner != UINT32_MAX)
            ++counted;
        total = counted;
    }
    if (total <= 0)
        return 1.0f;
    return (float)hits / (float)total;
}

/* 0x1400C5610: copies up to 62 characters of `text` into screen line `line`
   of the item's record (the raw-record and coloured paths write the same
   line), stopping at the terminating zero. Letters name slots through the
   letter-to-slot table: the coloured path writes the slot's letter with
   colour 15 (12 when the slot is the selected one); the other path writes
   the owner at that slot (a space when there is none). Other characters are
   written unchanged. Returns the number of characters copied. */
int64_t terminal_word_copy_mapped(int item, int line, const char *text, int coloured)
{
    char *out = item_text_line(item, line);
    uint8_t *colours = item_text_colours(item, line);
    int64_t i = 0;
    int count = 0;
    do {
        int64_t c = (signed char)text[i];
        if (!(uint8_t)c)
            break;
        uint8_t letter_offset = (uint8_t)(c - 65);
        if (coloured) {
            if (letter_offset > 0x19u) {
                out[i] = (char)c;
            } else {
                uint32_t slot = terminal_letter_slot(item, (int)c);
                out[i] = (char)(uint8_t)(slot + 65);
                colours[i] = (uint8_t)((uint32_t)terminal_selected_slot(item) == slot ? 12 : 15);
            }
        } else {
            if (letter_offset <= 0x19u) {
                uint32_t owner = (uint32_t)item_computer_owner(item, (int32_t)terminal_letter_slot(item, (int)c));
                c = owner == UINT32_MAX ? 32 : (owner + 65) & 0xFF;
            }
            out[i] = (char)c;
        }
        ++count;
        ++i;
    } while (i < 62);
    out[count] = 0;
    return count;
}

/* 0x1400C5360: draws the selection list into the record's screen lines.
   Line 17: the letters A-O with the fifteen numbers beside them; line 18:
   the owners at those slots; line 20: P0-P10 with the next eleven numbers;
   line 21: the owners there. Line 19 is sent unchanged. The row the cursor
   is on takes colour 12, the rest 15, with 0x8F beside the digits. Each
   line is sent to a link record (item_link_text_line) after its terminator;
   the last call's record is returned. */
int64_t terminal_selection_list_draw(int item)
{
    char *line17 = item_text_line(item, 17);
    char *line18 = item_text_line(item, 18);
    char *line20 = item_text_line(item, 20);
    char *line21 = item_text_line(item, 21);
    uint8_t *colours17 = item_text_colours(item, 17);
    uint8_t *colours20 = item_text_colours(item, 20);

    for (int i = 0; i < 15; i++) {
        int value = item_computer_used(item, i);
        line17[4 * i + 0] = (char)(i + 65);
        line17[4 * i + 1] = (char)(value < 10 ? 32 : value / 10 + 48);
        line17[4 * i + 2] = (char)(value % 10 + 48);
        line17[4 * i + 3] = 32;
        colours17[4 * i + 0] = (uint8_t)(terminal_selected_slot(item) != i ? 15 : 12);
        colours17[4 * i + 1] = (char)-113;
        colours17[4 * i + 2] = (char)-113;
    }
    line17[60] = 0;
    item_link_text_line(item, 17);

    for (int i = 0; i < 15; i++) {
        uint32_t letter = (uint32_t)item_computer_owner(item, i);
        line18[4 * i + 0] = (char)(letter == UINT32_MAX ? 32 : letter + 65);
        line18[4 * i + 1] = 32;
        line18[4 * i + 2] = 32;
        line18[4 * i + 3] = 32;
    }
    line18[60] = 0;
    item_link_text_line(item, 18);
    item_link_text_line(item, 19);

    for (int i = 0; i < 11; i++) {
        int value = item_computer_used(item, 15 + i);
        line20[4 * i + 0] = (char)(i + 80);
        line20[4 * i + 1] = (char)(value < 10 ? 32 : value / 10 + 48);
        line20[4 * i + 2] = (char)(value % 10 + 48);
        line20[4 * i + 3] = 32;
        colours20[4 * i + 0] = (uint8_t)(terminal_selected_slot(item) != i + 15 ? 15 : 12);
        colours20[4 * i + 1] = (char)-113;
        colours20[4 * i + 2] = (char)-113;
    }
    line20[44] = 0;
    item_link_text_line(item, 20);

    for (int i = 0; i < 11; i++) {
        uint32_t letter = (uint32_t)item_computer_owner(item, 15 + i);
        line21[4 * i + 0] = (char)(letter == UINT32_MAX ? 32 : letter + 65);
        line21[4 * i + 1] = 32;
        line21[4 * i + 2] = 32;
        line21[4 * i + 3] = 32;
    }
    line21[44] = 0;
    return item_link_text_line(item, 21);
}

/* 0x1400C9120: a key on the snake terminal. With the extension bit, only
   Ctrl-X exits: the mode is cleared, the first byte of every screen line,
   and 63 colour bytes of each (the image's 0x0F vector), are reset, and all
   twenty-four lines are sent. Otherwise the arrow keys turn the snake,
   refusing the reversal of its heading. */
void terminal_snake_key(int item, int key)
{
    if ((key & 0x100) != 0) {
        if (toupper((unsigned char)key) == 88) {
            item_computer_state(item) = 0;
            for (int line = 0; line < 24; line++) {
                item_text_line(item, line)[0] = 0;
                memset(item_text_colours(item, line), 0x0F, 63);
                item_link_text_line(item, line);
            }
        }
    } else {
        switch (key) {
        case 19:
            if (terminal_snake_direction(item) != 2)
                terminal_snake_direction(item) = 0;
            break;
        case 18:
            if (terminal_snake_direction(item))
                terminal_snake_direction(item) = 2;
            break;
        case 17:
            if (terminal_snake_direction(item) != 3)
                terminal_snake_direction(item) = 1;
            break;
        default:
            if (key == 16 && terminal_snake_direction(item) != 1)
                terminal_snake_direction(item) = 3;
            break;
        }
    }
}
