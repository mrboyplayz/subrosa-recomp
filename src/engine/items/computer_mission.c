/* The mission application's three screens and padded text rows. */
#include "items.h"
#include "../disk.h"
#include "../arith.h"

/* Copy one character at a time: the source can overlap the screen, and a
   NUL pads the rest of the row with spaces. Colours beyond width remain. */
char *computer_write_padded_line(int item, int line, const char *text,
                                 uint8_t color, int width)
{
    char *out = computer_line(item, line);
    uint8_t *colors = computer_line_colors(item, line);
    int written = 0;
    for (; written < width; written++) {
        char ch = *text;
        if (ch != 0)
            text++;
        else
            ch = ' ';
        out[written] = ch;
        colors[written] = color;
    }
    out[written] = 0;
    /* The native return is the base of the screen table, not this row. */
    return computer_line(0, 0);
}

static void share_mission_screen(int item)
{
    for (int line = 0; line < 24; line++)
        computer_line_link(item, line);
}

void computer_draw_mission_menu(int item)
{
    int team = computer_team(item);
    if (team == -1) {
        computer_mission_submenu(item) = 0;
        return;
    }

    char text[512];
    for (int line = 0; line < 24; line++) {
        if (line == 1) {
            computer_write_padded_line(item, line, "MISSION SELECT  ", 15, 16);
            continue;
        }
        if (line < 3 || line > 12) {
            computer_line(item, line)[0] = 0;
            continue;
        }

        uint32_t document = (uint32_t)line - 5;
        if (line == 3) {
            int intel = mission_team_intel_state(team);
            const char *label = "NO INTEL AVAILABLE";
            if (intel > 0 && intel <= 8)
                label = "REQUEST INTEL";
            else if (intel == 11)
                label = "INTEL FAXED";
            else if (intel == 0)
                label = "INTEL REQUESTED";
            crt_sprintf(text, label);
        } else if (line == 4) {
            crt_sprintf(text, "UPLOAD FILE");
        } else if (document <= 6) {
            if (mission_document_known(document))
                crt_sprintf(text, "%d. PROJECT %s                ", document + 1,
                            mission_document_name(document));
            else
                crt_sprintf(text, "%d. UNKNOWN                   ", document + 1);
            text[24] = 0;
            /* The status follows a 24-column project label. Keep the
               native unbounded append, including the NUL byte. */
            char *end = text;
            while (*end != 0)
                end++;
            const char *status = mission_document_team_suffix(document, team);
            do {
                *end++ = *status;
            } while (*status++ != 0);
        } else {
            crt_sprintf(text, "EXIT");
        }
        uint8_t color = (uint32_t)computer_mission_document(item) == document ? 232 : 15;
        computer_write_padded_line(item, line, text, color, 32);
    }
    share_mission_screen(item);
}

void computer_draw_mission_document(int item)
{
    int team = computer_team(item);
    if (team == -1 || computer_mission_document(item) < 0) {
        computer_mission_submenu(item) = 0;
        return;
    }

    char title[512];
    for (int line = 0; line < 24; line++) {
        if (line == 0) {
            int document = computer_mission_document(item);
            if (mission_document_known(document))
                crt_sprintf(title, "PROJECT %s", mission_document_name(document));
            else
                crt_sprintf(title, "UNKNOWN                     ");
            computer_write_padded_line(item, line, title, 15, 20);
        } else if (line == 3) {
            computer_write_padded_line(item, line, "STATUS", 15, 20);
        } else if (line >= 4 && line <= 7 &&
                   line - 4 < mission_document_status_count(computer_mission_document(item), team)) {
            computer_write_padded_line(item, line,
                mission_document_status_line(computer_mission_document(item), team, line - 4), 15, 60);
        } else if (line == 12) {
            uint8_t color = computer_mission_scroll(item) == 0 ? 184 : 15;
            computer_write_padded_line(item, line, "BACK", color, 16);
        } else {
            computer_line(item, line)[0] = 0;
        }
    }
    share_mission_screen(item);
}

void computer_draw_mission_upload(int item)
{
    char text[512];
    if (computer_mission_connect_timer(item) > 0) {
        for (int line = 0; line < 24; line++) {
            if (line == 0) {
                crt_sprintf(text, "UPLOADING");
                computer_write_padded_line(item, line, text, 240, 16);
            } else if (line == 1) {
                int progress = subtract_int(255, computer_mission_connect_timer(item)) >> 4;
                for (int column = 0; column < 16; column++)
                    text[column] = column > progress ? ' ' : 127;
                text[16] = 0;
                computer_write_padded_line(item, line, text, 240, 16);
            } else {
                computer_line(item, line)[0] = 0;
            }
        }
    } else {
        for (int line = 0; line < 24; line++) {
            if (line == 0) {
                crt_sprintf(text, "UPLOAD FILE");
                computer_write_padded_line(item, line, text, 240, 20);
            } else if (line >= 4 && line <= 19) {
                int selection = computer_mission_selection(item);
                int entry = add_int(line - 4, (int32_t)((uint32_t)selection & ~15u));
                if (entry < computer_mission_file_count(item)) {
                    int file = computer_mission_file(item, entry);
                    crt_sprintf(text, " %s", disk_file_name(item_disk_index(item), file));
                    uint8_t color = entry == computer_mission_selection(item) ? 184 : 15;
                    computer_write_padded_line(item, line, text, color, 16);
                } else if (entry == computer_mission_file_count(item)) {
                    uint8_t color = entry == computer_mission_selection(item) ? 184 : 15;
                    computer_write_padded_line(item, line, " CANCEL", color, 16);
                } else {
                    computer_line(item, line)[0] = 0;
                }
            } else {
                computer_line(item, line)[0] = 0;
            }
        }
    }
    share_mission_screen(item);
}
