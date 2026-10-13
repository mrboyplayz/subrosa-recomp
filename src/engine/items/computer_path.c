#include "items.h"
#include "../disk.h"

void computer_format_drive_path(char *out, int item, int drive)
{
    uint32_t disk = computer_resolve_drive(item, drive);
    if (disk == UINT32_MAX) {
        out[0] = 0;
        return;
    }
    crt_sprintf(out, "%c:\\", (uint32_t)drive + 'A');
    int depth = computer_drive_depth(item, drive);
    if (depth < 1)
        return;

    int component = 1;
    do {
        char *end = out;
        while (*end != 0)
            end++;
        const char *name = disk_directory_name(disk, computer_drive_directory(item, drive, component));
        do {
            *end++ = *name;
        } while (*name++ != 0);
        depth = computer_drive_depth(item, drive);
        if (component < depth) {
            end = out;
            while (*end != 0)
                end++;
            end[0] = '\\';
            end[1] = 0;
            depth = computer_drive_depth(item, drive);
        }
        component++;
    } while (component <= depth);
}
