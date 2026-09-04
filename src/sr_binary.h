#ifndef SR_BINARY_H
#define SR_BINARY_H

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

typedef struct SrReader {
    FILE *file;
    const char *path;
} SrReader;

int sr_open(SrReader *reader, const char *path);
void sr_close(SrReader *reader);
long sr_tell(SrReader *reader);
int sr_read_exact(SrReader *reader, void *dst, size_t size);
int sr_read_u16(SrReader *reader, uint16_t *out);
int sr_read_u32(SrReader *reader, uint32_t *out);
int sr_read_f32(SrReader *reader, float *out);
int sr_skip(SrReader *reader, size_t bytes);
const char *sr_basename(const char *path);

#endif
