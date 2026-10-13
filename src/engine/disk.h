/* The computer's disks: 256 directory entries and 256 file entries.
   Records start at 0x181FEEBC8, 0x2828 bytes apart. */
#ifndef SR_ENGINE_DISK_H
#define SR_ENGINE_DISK_H
#include "memory.h"
#include <stdint.h>

typedef struct DiskDirectory {
    char name[12];
    uint32_t parent;
} DiskDirectory;

typedef struct DiskFile {
    uint32_t content;
    char name[16];
    uint32_t directory;
} DiskFile;

#define DISK_ENTRY_CAPACITY 256
#define disk_directory_count(d) SR_GLOBAL(int32_t, 0x181FEEBC8ULL + 0x2828ULL * (uint64_t)(int64_t)(d))
#define disk_directory(d, n) SR_GLOBAL(DiskDirectory, 0x181FEEBCCULL + 0x2828ULL * (uint64_t)(int64_t)(d) + 16ULL * (uint64_t)(int64_t)(n))
#define disk_directory_name(d, n) ((const char *)&SR_GLOBAL(uint8_t, 0x181FEEBCCULL + 0x2828ULL * (uint64_t)(int64_t)(d) + 16ULL * (uint64_t)(int64_t)(n)))
#define disk_file_count(d) SR_GLOBAL(int32_t, 0x181FEFBCCULL + 0x2828ULL * (uint64_t)(int64_t)(d))
#define disk_file(d, n) SR_GLOBAL(DiskFile, 0x181FEFBD0ULL + 0x2828ULL * (uint64_t)(int64_t)(d) + 24ULL * (uint64_t)(int64_t)(n))
/* Byte view retains the original's unbounded name copy, including writes
   across the name field. The caller normally supplies a short filename. */
#define disk_file_name(d, n) ((char *)&SR_GLOBAL(uint8_t, 0x181FEFBD4ULL + 0x2828ULL * (uint64_t)(int64_t)(d) + 24ULL * (uint64_t)(int64_t)(n)))

_Static_assert(sizeof(DiskDirectory) == 16, "DiskDirectory size");
_Static_assert(sizeof(DiskFile) == 24, "DiskFile size");

/* Drive 0 is the first attached disk; drive 2 is the computer's own disk.
   Other drive numbers, or an empty drive 0, return UINT32_MAX. 0x14004C960 */
uint32_t computer_resolve_drive(int item, int drive);
/* Appends a file and returns its index, or UINT32_MAX at capacity. The
   original does not check a negative count or truncate a filename.
   0x140080690 */
uint32_t disk_append_file(int disk, uint32_t directory, const char *name, uint32_t content);
#endif
