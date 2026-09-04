#include "sr_binary.h"
#include "sr_formats.h"

#include <stdint.h>
#include <stdio.h>

int sr_parse_sbc(const char *path) {
    SrReader reader;
    uint32_t version;
    uint32_t preview[19];
    if (!sr_open(&reader, path)) {
        perror(path);
        return 1;
    }
    if (!sr_read_u32(&reader, &version)) {
        sr_close(&reader);
        return 1;
    }
    for (size_t i = 0; i < 19; i++) {
        if (!sr_read_u32(&reader, &preview[i])) {
            sr_close(&reader);
            return 1;
        }
    }

    printf("%s .sbc\n", sr_basename(path));
    printf("  version: %u\n", version);
    printf("  first fields:");
    for (size_t i = 0; i < 19; i++) {
        printf(" %u", preview[i]);
    }
    printf("\n  known writer emits version 12; shipped sample may be version 10\n");
    sr_close(&reader);
    return 0;
}
