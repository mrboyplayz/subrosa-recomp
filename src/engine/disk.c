#include <string.h>
#include "disk.h"

uint32_t disk_create(uint32_t value)
{
    for (uint32_t index = 0; index < DISK_CAPACITY; index++) {
        DiskRecord *disk = &disk_records[index];
        if (disk->used) continue;
        memset((uint8_t *)disk + sizeof disk->used, 0, sizeof *disk - sizeof disk->used);
        disk->used = 1;
        disk->unknown_04 = value;
        return index;
    }
    return UINT32_MAX;
}
