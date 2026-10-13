#include "arith.h"
#include "world.h"
#include "disk.h"

/* The disk index shared by the computer and disk item types, +0x334. */
#include "items/items.h"

uint32_t computer_resolve_drive(int item, int drive)
{
    if (drive == 2)
        return (uint32_t)item_disk_index(item);
    if (drive != 0 || world_items[item].child_count <= 0)
        return UINT32_MAX;
    return (uint32_t)item_disk_index(world_items[item].children[0]);
}

uint32_t disk_append_file(int disk, uint32_t directory, const char *name, uint32_t content)
{
    int32_t count = disk_file_count(disk);
    if (count >= DISK_ENTRY_CAPACITY)
        return UINT32_MAX;
    disk_file(disk, count).content = content;
    char *out = disk_file_name(disk, disk_file_count(disk));
    char next;
    do {
        next = *name++;
        *out++ = next;
    } while (next != 0);
    /* The copy can alias disk storage. Reload the count after it. */
    disk_file(disk, disk_file_count(disk)).directory = directory;
    count = disk_file_count(disk);
    disk_file_count(disk) = add_int(count, 1);
    return (uint32_t)count;
}
