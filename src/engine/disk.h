/* Disk allocation, 1,024 records at 0x181FEEBC0. The meaning of the
 * caller-supplied word at +4 is not established by the allocator alone. */
#ifndef SR_ENGINE_DISK_H
#define SR_ENGINE_DISK_H
#include "memory.h"
#include "world.h"
#define DISK_CAPACITY 1024
#define DISK_ENTRY_CAPACITY 256
typedef struct DiskRecord {
    int32_t used;
    uint32_t unknown_04;
    uint8_t contents[0x2828 - 8];
} DiskRecord;
_Static_assert(sizeof(DiskRecord) == 0x2828, "disk record stride");
#define disk_records (&SR_GLOBAL(DiskRecord, 0x181FEEBC0ULL))
/* First free record, cleared after its used flag. UINT32_MAX when full.
 * 0x140050EF0 */
uint32_t disk_create(uint32_t value);

typedef struct DiskFile {
    uint32_t content;
    char name[16];
    uint32_t directory;
} DiskFile;
_Static_assert(sizeof(DiskFile) == 24, "disk file stride");
static inline int32_t *disk_file_count(int disk)
{
    return &SR_GLOBAL(int32_t, 0x181FEFBCCULL + (int64_t)disk * 0x2828);
}
static inline DiskFile *disk_file(int disk, int entry)
{
    return &SR_GLOBAL(DiskFile, 0x181FEFBD0ULL + (int64_t)disk * 0x2828 + (int64_t)entry * 24);
}
/* Byte access preserves the original unbounded filename copy. */
static inline char *disk_file_name(int disk, int entry)
{
    return &SR_GLOBAL(char, 0x181FEFBD4ULL + (int64_t)disk * 0x2828 + (int64_t)entry * 24);
}
static inline uint32_t *item_disk_index(int item)
{
    return &SR_GLOBAL(uint32_t, 0x182BBB4B4ULL + (int64_t)item * sizeof(WorldItem));
}
uint32_t disk_for_item_drive(int item, int drive); /* 0x14004C960 */
/* Appends an entry, copying through the source's NUL with no truncation;
 * callers must supply storage for that native behavior. 0x140080690 */
uint32_t disk_add_file(int disk, uint32_t directory, const char *name, uint32_t content);
#endif
