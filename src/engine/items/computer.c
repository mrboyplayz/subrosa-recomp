/* Computer (39): its states, the cipher hint, and where the items attached
   to it sit. Part of the item update, 0x1400CC610. */
#include "items.h"
#include "../disk.h"

/* An item attached to a computer sits along the computer's second row, then
   along its third. position holds the computer's position on entry. */
void computer_place_child(WorldItem *child, const WorldItem *computer, float position[3])
{
    const float *r = child->rotation;
    float along = item_type_mount_offset_y(ITEM_COMPUTER);
    float x = r[3] * along + position[0];
    float y = r[4] * along + position[1];
    float z = r[5] * along + position[2];
    child->position[0] = x;
    child->position[1] = y;
    child->position[2] = z;
    along = item_type_mount_offset_z(computer->type);
    x = r[6] * along + x;
    z = r[8] * along + z;
    y = r[7] * along + y;
    position[0] = x;
    position[1] = y;
    position[2] = z;
}

/* Reveals a random letter of the cipher: one whose entry is in use and not
   revealed yet; after 1000 tries the last one drawn. */
static void reveal_letter(int i)
{
    int pick = crt_rand() % 26;
    for (int tries = 0; tries < 1000; ) {
        int32_t letter = computer_letter(i, pick);
        if (computer_letter_count(i, letter) != 0 && computer_letter_revealed(i, letter) == -1)
            break;
        pick = crt_rand() % 26;
        tries++;
    }
    computer_letter_revealed(i, computer_letter(i, pick)) = pick;
}

/* One row of the letter list: for letters first .. first + count - 1, the
   letter (colour 12 when selected, else 15) and how often it occurs in two
   digits (colour 0x8F, the tens blank below 10), four columns a letter. */
static void draw_letter_row(int i, int line, int first, int count)
{
    char *row = computer_line(i, line);
    uint8_t *colors = computer_line_colors(i, line);
    for (int k = 0; k < count; k++) {
        int letter = first + k;
        int32_t times = computer_letter_count(i, letter);
        int32_t tens = times / 10;
        char *cell = row + 4 * k;
        uint8_t *cell_colors = colors + 4 * k;
        cell[0] = (char)('A' + letter);
        cell_colors[0] = computer_cipher_selected(i) == letter ? 12 : 15;
        cell_colors[1] = 0x8F;
        cell[1] = times >= 10 ? (char)((uint8_t)tens + '0') : ' ';
        cell[2] = (char)((uint8_t)times - (uint8_t)(tens * 10) + '0');
        cell_colors[2] = 0x8F;
        cell[3] = ' ';
    }
    row[4 * count] = 0;
}

/* The row below: the letter each has been found to stand for, or a blank. */
static void draw_revealed_row(int i, int line, int first, int count)
{
    char *row = computer_line(i, line);
    for (int k = 0; k < count; k++) {
        int32_t revealed = computer_letter_revealed(i, first + k);
        row[4 * k] = revealed == -1 ? ' ' : (char)((uint8_t)revealed + 'A');
        row[4 * k + 1] = ' ';
        row[4 * k + 2] = ' ';
        row[4 * k + 3] = ' ';
    }
    row[4 * count] = 0;
}

void computer_draw_letter_counts(int i)
{
    draw_letter_row(i, 17, 0, 15);
    computer_line_link(i, 17);
    draw_revealed_row(i, 18, 0, 15);
    computer_line_link(i, 18);
    computer_line_link(i, 19);
    draw_letter_row(i, 20, 15, 11);
    computer_line_link(i, 20);
    draw_revealed_row(i, 21, 15, 11);
    computer_line_link(i, 21);
}

void computer_new_line(int i)
{
    __builtin_memset(computer_line_colors(i, computer_current_line(i)), 15, 63);
    computer_line_link(i, computer_current_line(i));
    int32_t line = computer_current_line(i);
    int32_t top = computer_top_line(i);
    if ((int32_t)(((uint32_t)line + 10u) & 31) == top)
        computer_top_line(i) = (int32_t)(((uint32_t)top + 1u) & 31);
    line = (int32_t)(((uint32_t)line + 1u) & 31);
    computer_current_line(i) = line;
    world_item_change_count(i)++;
    computer_cursor(i) = line << 6;
}

static int is_capital(char c)
{
    return (uint8_t)(c - 'A') <= 'Z' - 'A';
}

void computer_draw_cipher(int i)
{
    for (int row = 0; row < 5; row++) {
        int line = 2 + 3 * row;
        int n;

        /* Enciphered: each capital through the cipher, in colour 15, or 12
           where it is the selected cipher letter; anything else as it is. */
        char *coded = computer_line(i, line);
        uint8_t *colors = computer_line_colors(i, line);
        for (n = 0; n < 62; n++) {
            char c = computer_cipher_text(i, row)[n];
            if (c == 0)
                break;
            if (is_capital(c)) {
                colors[n] = 15;
                coded[n] = (char)((uint8_t)computer_letter(i, c - 'A') + 'A');
                if (computer_cipher_selected(i) == computer_letter(i, c - 'A'))
                    colors[n] = 12;
            } else {
                coded[n] = c;
            }
        }
        coded[n] = 0;
        computer_line_link(i, line);

        /* Decoded: the letters revealed so far, blanks for the rest. */
        char *decoded = computer_line(i, line + 1);
        for (n = 0; n < 62; n++) {
            char c = computer_cipher_text(i, row)[n];
            if (c == 0)
                break;
            char shown = c;
            if (is_capital(c)) {
                int32_t revealed = computer_letter_revealed(i, computer_letter(i, c - 'A'));
                shown = revealed == -1 ? ' ' : (char)((uint8_t)revealed + 'A');
            }
            decoded[n] = shown;
        }
        decoded[n] = 0;
        computer_line_link(i, line + 1);
    }
    computer_draw_letter_counts(i);
}

void computer_update(int i)
{
    int32_t state = computer_state(i);
    if (state == 0) {
        computer_update_disk_job(i);
        state = computer_state(i);
    }
    if (state == 1 && computer_hint_countdown(i) > 0) {
        int32_t left = computer_hint_countdown(i) - 1;
        computer_hint_countdown(i) = left;
        if (left == 0) {
            reveal_letter(i);
            computer_draw_cipher(i);
            computer_line_1_first_char(i) = 0;
            computer_line_link(i, 1);
            state = computer_state(i);
        }
    }
    if (state == 2) {
        computer_update_program(i);
        state = computer_state(i);
    }
    if (state == 3)
        computer_update_snake(i);
}

/* Resume queued terminal keys, or an Enter key when there are none. The
   key handler can change the count; the native checks it after each key. */
static void computer_run_queued_keys(int item)
{
    if (computer_key_queue_count(item) != 0) {
        for (int k = 0; k < computer_key_queue_count(item); k++)
            computer_process_key(item, computer_key_queue(item, k));
        computer_key_queue_count(item) = 0;
    } else {
        computer_process_key(item, 8);
    }
}

/* The terminal's pending COPY or directory listing, four ticks between
   listed entries. Completion resumes the queued input. 0x1400C3ED0 */
void computer_update_disk_job(int item)
{
    int32_t delay = computer_job_delay(item);
    if (delay <= 0)
        return;
    computer_job_delay(item) = delay - 1;
    if (computer_job_delay(item) != 0)
        return;

    if (computer_job_kind(item) == 0) {
        int32_t disk = (int32_t)computer_resolve_drive(item, computer_job_drive(item));
        if (disk == -1) {
            crt_sprintf(computer_line(item, computer_current_line(item)), "DISK ERROR");
        } else {
            disk_append_file(disk, computer_job_directory(item), computer_job_filename(item),
                             computer_job_content(item));
            /* Even a full disk prints the native success message. */
            crt_sprintf(computer_line(item, computer_current_line(item)), "  1 FILE(S) COPIED.");
        }
        computer_new_line(item);
        computer_run_queued_keys(item);
    }
    /* COPY's key handler can start a listing in the same tick. */
    if (computer_job_kind(item) == 1) {
        int32_t disk = (int32_t)computer_resolve_drive(item, computer_job_drive(item));
        if (disk == -1) {
            crt_sprintf(computer_line(item, computer_current_line(item)), "DISK ERROR");
            computer_new_line(item);
        } else {
            int32_t directories = disk_directory_count(disk);
            int found = 0;
            while (computer_job_next_directory(item) < directories) {
                int32_t next = computer_job_next_directory(item);
                if (disk_directory(disk, next).parent == computer_job_directory(item)) {
                    char *row = computer_line(item, computer_current_line(item));
                    crt_sprintf(row, "%s            ", disk_directory(disk, next).name);
                    row[11] = 0;
                    char *end = row;
                    while (*end != 0)
                        end++;
                    __builtin_memcpy(end, "<DIR>", 6);
                    computer_new_line(item);
                    computer_line(item, computer_current_line(item))[0] = 0;
                    computer_job_next_directory(item)++;
                    computer_job_delay(item) = 4;
                    found = 1;
                    break;
                }
                computer_job_next_directory(item)++;
            }
            if (!found) {
                while (computer_job_next_file(item) < disk_file_count(disk)) {
                    int32_t next = computer_job_next_file(item);
                    if (disk_file(disk, next).directory == computer_job_directory(item)) {
                        crt_sprintf(computer_line(item, computer_current_line(item)), "%s",
                                    disk_file_name(disk, next));
                        computer_new_line(item);
                        computer_line(item, computer_current_line(item))[0] = 0;
                        computer_job_next_file(item)++;
                        computer_job_delay(item) = 4;
                        break;
                    }
                    computer_job_next_file(item)++;
                }
            }
        }
        if (computer_job_delay(item) == 0) {
            computer_new_line(item);
            computer_line(item, computer_current_line(item))[0] = 0;
            computer_command_first_char(item) = 0;
            computer_run_queued_keys(item);
        }
    }
}

/* Mission menu, document viewing and file upload (computer state 2).
   0x1400C8500. Screen callbacks can alter the fields read by later stages. */
void computer_update_program(int item)
{
    int32_t team = computer_team(item);
    if (team == -1 || item_disk_index(item) == -1)
        return;
    int32_t timer = computer_mission_connect_timer(item);
    if (timer > 0) {
        timer--;
        computer_mission_connect_timer(item) = timer;
        if (computer_mission_action(item) == 1 && ((uint32_t)timer & 15u) == 0) {
            computer_draw_mission_upload(item);
            timer = computer_mission_connect_timer(item);
        }
        if (timer == 0) {
            uint32_t action = (uint32_t)computer_mission_action(item);
            if (action == 0) {
                computer_draw_mission_menu(item);
            } else if (action == 1) {
                int found = 0;
                computer_mission_submenu(item) = 0;
                for (int document = 0; document < 7; document++) {
                    int disk = item_disk_index(item);
                    int file = computer_mission_file(item, computer_mission_selection(item));
                    if (disk_file(disk, file).content == mission_document_content(document)) {
                        mission_decode_document(document, team);
                        found = 1;
                        computer_mission_document(item) = document;
                        computer_mission_submenu(item) = 1;
                        computer_mission_scroll(item) = 0;
                    }
                }
                if (!found)
                    computer_draw_mission_menu(item);
                if (computer_mission_submenu(item) == 1)
                    computer_draw_mission_document(item);
            }
        }
    } else if ((((uint32_t)item ^ (uint32_t)game_tick) & 15u) == 0) {
        uint32_t menu = (uint32_t)computer_mission_submenu(item);
        if (menu == 0) {
            computer_draw_mission_menu(item);
            menu = (uint32_t)computer_mission_submenu(item);
        }
        if (menu == 1) {
            computer_draw_mission_document(item);
            menu = (uint32_t)computer_mission_submenu(item);
        }
        if (menu == 2)
            computer_draw_mission_upload(item);
    }
}
