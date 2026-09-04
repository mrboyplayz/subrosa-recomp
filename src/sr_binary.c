#include "sr_binary.h"

#include <string.h>

int sr_open(SrReader *reader, const char *path) {
    reader->file = fopen(path, "rb");
    reader->path = path;
    return reader->file != NULL;
}

void sr_close(SrReader *reader) {
    if (reader->file) {
        fclose(reader->file);
    }
    reader->file = NULL;
}

long sr_tell(SrReader *reader) {
    return ftell(reader->file);
}

int sr_read_exact(SrReader *reader, void *dst, size_t size) {
    return fread(dst, 1, size, reader->file) == size;
}

int sr_read_u16(SrReader *reader, uint16_t *out) {
    uint8_t b[2];
    if (!sr_read_exact(reader, b, sizeof(b))) {
        return 0;
    }
    *out = (uint16_t)b[0] | ((uint16_t)b[1] << 8);
    return 1;
}

int sr_read_u32(SrReader *reader, uint32_t *out) {
    uint8_t b[4];
    if (!sr_read_exact(reader, b, sizeof(b))) {
        return 0;
    }
    *out = (uint32_t)b[0] |
           ((uint32_t)b[1] << 8) |
           ((uint32_t)b[2] << 16) |
           ((uint32_t)b[3] << 24);
    return 1;
}

int sr_read_f32(SrReader *reader, float *out) {
    uint32_t bits;
    if (!sr_read_u32(reader, &bits)) {
        return 0;
    }
    memcpy(out, &bits, sizeof(bits));
    return 1;
}

int sr_skip(SrReader *reader, size_t bytes) {
    return fseek(reader->file, (long)bytes, SEEK_CUR) == 0;
}

const char *sr_basename(const char *path) {
    const char *slash = strrchr(path, '/');
    const char *backslash = strrchr(path, '\\');
    const char *base = slash > backslash ? slash : backslash;
    return base ? base + 1 : path;
}
