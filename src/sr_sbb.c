#include "sr_binary.h"
#include "sr_formats.h"

#include <stdint.h>
#include <stdio.h>

typedef struct SrSbbHeader {
    uint32_t version;
    char name_blob[64];
    uint32_t dim_x;
    uint32_t dim_y;
    uint32_t dim_z;
    uint32_t v13_field_0;
    uint32_t v13_field_1;
    uint32_t v13_field_2;
} SrSbbHeader;

static int sr_sbb_read_header(SrReader *reader, SrSbbHeader *header) {
    if (!sr_read_u32(reader, &header->version)) {
        return 0;
    }
    if (header->version < 12 || header->version > 14) {
        fprintf(stderr, "%s: unsupported .sbb version %u\n", reader->path, header->version);
        return 0;
    }
    if (!sr_read_exact(reader, header->name_blob, sizeof(header->name_blob))) {
        return 0;
    }
    if (!sr_read_u32(reader, &header->dim_x) ||
        !sr_read_u32(reader, &header->dim_y) ||
        !sr_read_u32(reader, &header->dim_z)) {
        return 0;
    }
    header->v13_field_0 = 4;
    header->v13_field_1 = 4;
    header->v13_field_2 = 4;
    if (header->version >= 13) {
        if (!sr_read_u32(reader, &header->v13_field_0) ||
            !sr_read_u32(reader, &header->v13_field_1) ||
            !sr_read_u32(reader, &header->v13_field_2)) {
            return 0;
        }
    }
    return 1;
}

int sr_parse_sbb(const char *path) {
    SrReader reader;
    SrSbbHeader header;
    if (!sr_open(&reader, path)) {
        perror(path);
        return 1;
    }
    if (!sr_sbb_read_header(&reader, &header)) {
        sr_close(&reader);
        return 1;
    }

    printf("%s .sbb\n", sr_basename(path));
    printf("  version: %u\n", header.version);
    printf("  dimensions: %u x %u x %u\n", header.dim_x, header.dim_y, header.dim_z);
    printf("  v13 fields: %u, %u, %u\n", header.v13_field_0, header.v13_field_1, header.v13_field_2);
    printf("  body offset: 0x%lx\n", sr_tell(&reader));
    sr_close(&reader);
    return 0;
}
