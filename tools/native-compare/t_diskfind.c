// NC_WRAPPERS: 140080820
#include <string.h>
#include "nc.h"
#include "disk.h"

#ifdef NC_NATIVE
#define find(disk, directory, name) \
    ((uint64_t (*)(int, int, const char *))NC_ADDR(0x140080820))(disk, (int)(directory), name)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140080820(int, int, long long);
#define find(disk, directory, name) ((uint64_t)sub_140080820(disk, (int)(directory), (long long)(name)))
#else
#define find(disk, directory, name) ((uint64_t)disk_find_file(disk, directory, name))
#endif

/* Names from a small alphabet so entries repeat; length 16 runs into the
   directory word, as the original's unbounded compare does. */
static void random_name(char *out, int length)
{
    static const char letters[] = "ab\x80z";
    for (int k = 0; k < length; ++k) out[k] = letters[nc_rand_below(4)];
    if (length < 16) out[length] = 0;
}

int main(void)
{
    static const int counts[] = {0, 1, 2, 3, 8, 40, 255, 256, -1};
    static const uint32_t directories[] = {0, 1, 2, 0xFFFFFFFFu};
    nc_map_image();
    for (int n = 0; n < nc_cases(1200); ++n) {
        nc_seed(n);
        int disk = (int)nc_rand_below(DISK_CAPACITY);
        int count = counts[n % 9];
        *disk_file_count(disk) = count;
        int filled = count < 0 ? 4 : count;
        for (int e = 0; e < filled; ++e) {
            DiskFile *file = disk_file(disk, e);
            file->content = (uint32_t)nc_rand();
            file->directory = directories[nc_rand_below(4)];
            random_name(file->name, (int)nc_rand_below(17));
        }
        char query[40];
        memset(query, 0, sizeof query);
        int mode = (int)nc_rand_below(5);
        if (mode <= 2 && filled > 0) {
            /* An existing entry's name, as stored, or cut short or extended. */
            int e = (int)nc_rand_below((uint32_t)filled);
            memcpy(query, disk_file(disk, e)->name, 20);
            query[20] = 0;
            size_t length = strlen(query);
            if (mode == 1 && length) query[length - 1] = 0;
            if (mode == 2) { query[length] = 'a'; query[length + 1] = 0; }
        } else {
            random_name(query, (int)nc_rand_below(16));
        }
        uint32_t directory = directories[nc_rand_below(4)];
        uint64_t result = find(disk, directory, query);
        nc_line("find %d disk %d count %d directory %08x result %016llx", n, disk, count, directory,
                (unsigned long long)result);
    }
    return 0;
}
