#include "sr_binary.h"
#include "sr_formats.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct SrVec4 {
    float x;
    float y;
    float z;
    float w;
} SrVec4;

int sr_parse_sbv(const char *path) {
    SrReader reader;
    uint32_t version;
    uint32_t point_count;
    SrVec4 *points;

    if (!sr_open(&reader, path)) {
        perror(path);
        return 1;
    }
    if (!sr_read_u32(&reader, &version) || !sr_read_u32(&reader, &point_count)) {
        sr_close(&reader);
        return 1;
    }
    if (point_count > 100000) {
        fprintf(stderr, "%s: unreasonable .sbv point count %u\n", path, point_count);
        sr_close(&reader);
        return 1;
    }

    points = (SrVec4 *)calloc(point_count, sizeof(*points));
    if (!points) {
        sr_close(&reader);
        return 1;
    }
    for (uint32_t i = 0; i < point_count; i++) {
        if (!sr_read_f32(&reader, &points[i].x) ||
            !sr_read_f32(&reader, &points[i].y) ||
            !sr_read_f32(&reader, &points[i].z) ||
            !sr_read_f32(&reader, &points[i].w)) {
            free(points);
            sr_close(&reader);
            return 1;
        }
    }

    printf("%s .sbv\n", sr_basename(path));
    printf("  version: %u\n", version);
    printf("  point count candidate: %u\n", point_count);
    for (uint32_t i = 0; i < point_count && i < 4; i++) {
        printf("  p%u: %.4f %.4f %.4f %.4f\n", i, points[i].x, points[i].y, points[i].z, points[i].w);
    }
    printf("  next offset: 0x%lx\n", sr_tell(&reader));

    free(points);
    sr_close(&reader);
    return 0;
}
