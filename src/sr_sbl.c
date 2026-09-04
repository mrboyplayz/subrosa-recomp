#include "sr_binary.h"
#include "sr_formats.h"

#include <stdint.h>
#include <stdio.h>

typedef struct SrSblHeader {
    uint32_t version;
    uint32_t fields[10];
} SrSblHeader;

int sr_parse_sbl(const char *path) {
    SrReader reader;
    SrSblHeader header;
    if (!sr_open(&reader, path)) {
        perror(path);
        return 1;
    }
    if (!sr_read_u32(&reader, &header.version)) {
        sr_close(&reader);
        return 1;
    }
    if (header.version < 1 || header.version > 2) {
        fprintf(stderr, "%s: unsupported .sbl version %u\n", path, header.version);
        sr_close(&reader);
        return 1;
    }
    for (size_t i = 0; i < 10; i++) {
        if (!sr_read_u32(&reader, &header.fields[i])) {
            sr_close(&reader);
            return 1;
        }
    }

    printf("%s .sbl\n", sr_basename(path));
    printf("  version: %u\n", header.version);
    printf("  entry count candidate: %u\n", header.fields[6]);
    printf("  header fields:");
    for (size_t i = 0; i < 10; i++) {
        printf(" %u", header.fields[i]);
    }
    printf("\n  body offset: 0x%lx\n", sr_tell(&reader));
    sr_close(&reader);
    return 0;
}
