#include "disk.h"
#include "arith.h"

uint32_t disk_for_item_drive(int item, int drive)
{
    if (drive == 2) return *item_disk_index(item);
    if (drive != 0) return UINT32_MAX;
    if (world_items[item].child_count <= 0) return UINT32_MAX;
    return *item_disk_index(world_items[item].children[0]);
}

uint32_t disk_add_file(int disk, uint32_t directory, const char *name, uint32_t content)
{
    int32_t *count = disk_file_count(disk);
    int32_t index = *count;
    if (index >= DISK_ENTRY_CAPACITY) return UINT32_MAX;
    disk_file(disk, index)->content = content;
    char *out = disk_file_name(disk, *count);
    char byte;
    do {
        byte = *name++;
        *out++ = byte;
    } while (byte);
    disk_file(disk, *count)->directory = directory;
    uint32_t result = (uint32_t)*count;
    *count = add_int(*count, 1);
    return result;
}

uint32_t disk_find_file(int disk, uint32_t directory, const char *name)
{
    int32_t count = *disk_file_count(disk);
    for (int32_t index = 0; index < count; index++) {
        if (disk_file(disk, index)->directory != directory) continue;
        const unsigned char *entry = (const unsigned char *)disk_file_name(disk, index);
        const unsigned char *text = (const unsigned char *)name;
        int difference;
        for (size_t k = 0;; k++) {
            difference = entry[k] - text[k];
            if (difference || !text[k]) break;
        }
        if (!difference) return (uint32_t)index;
    }
    return UINT32_MAX;
}
