#include "world_files.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMIT_BYTES ((size_t)128 * 1024 * 1024)
typedef struct {
    const unsigned char *input;
    unsigned char *output;
    size_t size, offset, capacity, allocated;
    int writing;
    SrWorldError *error;
} Stream;

static int fail(Stream *s, const char *message) {
    if (s->error && !s->error->message[0]) {
        s->error->offset = s->offset;
        snprintf(s->error->message, sizeof(s->error->message), "%s", message);
    }
    return 0;
}

static int bytes(Stream *s, void *data, size_t n) {
    if (!n) return 1;
    if (!data) return fail(s, "Missing array storage");
    if (s->offset > LIMIT_BYTES || n > LIMIT_BYTES - s->offset)
        return fail(s, "File exceeds 128 MiB resource limit");
    if (s->writing) {
        size_t needed = s->offset + n;
        if (needed > s->capacity) {
            size_t capacity = s->capacity ? s->capacity : 256;
            while (capacity < needed) capacity *= 2;
            void *next = realloc(s->output, capacity);
            if (!next) return fail(s, "Out of memory");
            s->output = next; s->capacity = capacity;
        }
        memcpy(s->output + s->offset, data, n);
    } else {
        if (s->offset > s->size || n > s->size - s->offset)
            return fail(s, "Truncated field or record");
        memcpy(data, s->input + s->offset, n);
    }
    s->offset += n;
    return 1;
}

static int word(Stream *s, uint32_t *v) {
    unsigned char b[4];
    if (s->writing) for (unsigned i = 0; i < 4; ++i) b[i] = (unsigned char)(*v >> (8*i));
    if (!bytes(s, b, 4)) return 0;
    if (!s->writing) *v = (uint32_t)b[0] | (uint32_t)b[1]<<8 | (uint32_t)b[2]<<16 | (uint32_t)b[3]<<24;
    return 1;
}
static int words(Stream *s, uint32_t *v, size_t n) {
    for (size_t i = 0; i < n; ++i) if (!word(s, &v[i])) return 0;
    return 1;
}
static int shorts(Stream *s, uint16_t *v, size_t n) {
    for (size_t i = 0; i < n; ++i) {
        unsigned char b[2];
        if (s->writing) { b[0] = (unsigned char)v[i]; b[1] = (unsigned char)(v[i] >> 8); }
        if (!bytes(s, b, 2)) return 0;
        if (!s->writing) v[i] = (uint16_t)(b[0] | (uint16_t)b[1]<<8);
    }
    return 1;
}
static int floats(Stream *s, float *v, size_t n) {
    _Static_assert(sizeof(float) == 4, "32-bit float storage required");
    for (size_t i = 0; i < n; ++i) {
        uint32_t bits = 0;
        if (s->writing) memcpy(&bits, &v[i], 4);
        if (!word(s, &bits)) return 0;
        if (!s->writing) memcpy(&v[i], &bits, 4);
    }
    return 1;
}

static int array(Stream *s, void **pointer, size_t count, size_t stride, size_t disk_min) {
    if (count > INT32_MAX || count > LIMIT_BYTES / stride)
        return fail(s, "Invalid or oversized record count");
    if (s->writing) return !count || *pointer ? 1 : fail(s, "Missing array storage");
    if (s->offset > s->size || (disk_min && count > (s->size - s->offset) / disk_min))
        return fail(s, "Record count exceeds remaining file");
    if (count * stride > LIMIT_BYTES - s->allocated)
        return fail(s, "Decoded data exceeds 128 MiB resource limit");
    s->allocated += count * stride;
    *pointer = count ? calloc(count, stride) : NULL;
    return !count || *pointer ? 1 : fail(s, "Out of memory");
}

/* Pass storage through a void* temporary instead of aliasing typed pointers. */
#define ARRAY(s, p, count, disk_min) do { \
    void *storage = (p); \
    if (!array((s), &storage, (count), sizeof(*(p)), (disk_min))) return 0; \
    if (!(s)->writing) (p) = storage; \
} while (0)

static int names(Stream *s, SrNameTable *table) {
    if (!word(s, &table->count)) return 0;
    ARRAY(s, table->names, table->count, 64);
    return bytes(s, table->names, (size_t)table->count * 64);
}

static int block_codec(Stream *s, SrBlockFile *f) {
    if (!word(s, &f->version)) return 0;
    if (f->version < 1 || f->version > 2) return fail(s, "Unsupported block version (expected 1-2)");
    if (!words(s, f->header, 9) || !word(s, &f->patch_count)) return 0;
    ARRAY(s, f->patches, f->patch_count, 344);
    for (uint32_t i = 0; i < f->patch_count; ++i) {
        SrBlockPatch *p = &f->patches[i];
        if (!words(s, p->prefix, 4)) return 0;
        for (unsigned j = 0; j < 16; ++j)
            if (!floats(s, p->control[j].position, 3) || !floats(s, p->control[j].uv, 2)) return 0;
        if (!words(s, p->suffix, 2)) return 0;
    }
    if (f->version == 2) {
        if (!word(s, &f->solid_count)) return 0;
        ARRAY(s, f->solids, f->solid_count, 124);
        for (uint32_t i = 0; i < f->solid_count; ++i) {
            SrBlockSolid *solid = &f->solids[i];
            for (unsigned j = 0; j < 8; ++j) if (!floats(s, solid->corners[j], 3)) return 0;
            if (!words(s, solid->faces, 6) || !word(s, &solid->flags)) return 0;
        }
    } else if (s->writing && f->solid_count) return fail(s, "Version 1 cannot store solids");
    return 1;
}

static int building_codec(Stream *s, SrBuildingFile *f) {
    if (!word(s, &f->version)) return 0;
    if (f->version < 12 || f->version > 14) return fail(s, "Unsupported building version (expected 12-14)");
    if (!bytes(s, f->name, 64) || !words(s, f->dimensions, 3)) return 0;
    if (f->dimensions[0] > 63 || f->dimensions[1] > 63 || f->dimensions[2] > 192)
        return fail(s, "Building dimensions exceed original 64x64x192 storage");
    if (f->version >= 13) {
        if (!words(s, f->v13_fields, 3)) return 0;
    } else if (!s->writing) {
        f->v13_fields[0] = 4; f->v13_fields[1] = 0; f->v13_fields[2] = 4;
    }
    for (unsigned i = 0; i < 4; ++i) if (!names(s, &f->tables[i])) return 0;
    size_t count = ((size_t)f->dimensions[0] + 1) * ((size_t)f->dimensions[1] + 1) * f->dimensions[2];
    if (s->writing && f->cell_count != count) return fail(s, "Cell count disagrees with dimensions");
    if (!s->writing) f->cell_count = count;
    ARRAY(s, f->cells, count, 60);
    for (size_t i = 0; i < count; ++i) {
        SrBuildingCell *c = &f->cells[i];
        if (!word(s, &c->words[1]) || !word(s, &c->words[2]) || !word(s, &c->words[0]) ||
            !words(s, c->words + 3, 3) || !shorts(s, c->materials, 16) || !word(s, &c->flags)) return 0;
    }
    if (f->version == 14) {
        if (!word(s, &f->extension_tag)) return 0;
        if (f->extension_tag != 1) return fail(s, "Unsupported building extension tag");
        if (!word(s, &f->path_count)) return 0;
        ARRAY(s, f->paths, f->path_count, 4);
        for (uint32_t i = 0; i < f->path_count; ++i) {
            SrBuildingPath *path = &f->paths[i];
            if (!word(s, &path->count)) return 0;
            if (path->count > 64) return fail(s, "Path exceeds original 64-point storage");
            ARRAY(s, path->points, path->count, 16);
            for (uint32_t j = 0; j < path->count; ++j)
                if (!floats(s, path->points[j].position, 3) || !word(s, &path->points[j].value)) return 0;
        }
    } else if (s->writing && f->path_count) return fail(s, "Paths require building version 14");
    return 1;
}

static int city_codec(Stream *s, SrCityFile *f) {
    if (!word(s, &f->version)) return 0;
    if (f->version < 7 || f->version > 12) return fail(s, "Unsupported city version (expected 7-12)");
    if (f->version >= 10) { if (!names(s, &f->names)) return 0; }
    else if (s->writing && f->names.count) return fail(s, "City names require version 10+");
    if (!word(s, &f->triple_count)) return 0;
    ARRAY(s, f->triples, f->triple_count, 12);
    for (uint32_t i = 0; i < f->triple_count; ++i) if (!words(s, f->triples[i].words, 3)) return 0;
    if (!word(s, &f->area_count)) return 0;
    ARRAY(s, f->areas, f->area_count, 52);
    for (uint32_t i = 0; i < f->area_count; ++i)
        if (!words(s, f->areas[i].words, 5) || !bytes(s, f->areas[i].name, 32)) return 0;
    if (!word(s, &f->building_count)) return 0;
    ARRAY(s, f->buildings, f->building_count, 80);
    for (uint32_t i = 0; i < f->building_count; ++i)
        if (!bytes(s, f->buildings[i].name, 64) || !words(s, f->buildings[i].words, 4)) return 0;
    if (f->version >= 11) {
        if (!word(s, &f->group_count)) return 0;
        ARRAY(s, f->groups, f->group_count, f->version == 11 ? 576 : 68);
        for (uint32_t i = 0; i < f->group_count; ++i) {
            SrCityGroup *group = &f->groups[i];
            if (!bytes(s, group->name, 64)) return 0;
            if (f->version == 12) { if (!word(s, &group->count)) return 0; }
            else if (!s->writing) group->count = 1;
            else if (group->count != 1) return fail(s, "Version 11 groups have exactly one variant");
            if (group->count > 32) return fail(s, "Group exceeds original 32-variant storage");
            ARRAY(s, group->variants, group->count, 512);
            for (uint32_t j = 0; j < group->count; ++j)
                if (!bytes(s, group->variants[j].names, 512)) return 0;
        }
    } else if (s->writing && f->group_count) return fail(s, "City groups require version 11+");
    if (f->version >= 8) {
        if (!word(s, &f->chunk_count)) return 0;
        size_t minimum = 16 + (f->version >= 11 ? 2048 : 10240) + (f->version >= 10 ? 2048 : 0);
        ARRAY(s, f->chunks, f->chunk_count, minimum);
        for (uint32_t i = 0; i < f->chunk_count; ++i) {
            SrCityChunk *chunk = &f->chunks[i];
            if (!words(s, chunk->header, 4)) return 0;
            if (f->version >= 11) {
                if (!words(s, chunk->words, 512)) return 0;
            } else {
                if (!words(s, chunk->legacy_words, 512) || !shorts(s, chunk->legacy_cells, 4096)) return 0;
            }
            if (f->version >= 10 && !words(s, chunk->extra, 512)) return 0;
        }
    } else if (s->writing && f->chunk_count) return fail(s, "City chunks require version 8+");
    if (f->version >= 9) {
        if (!word(s, &f->final_count)) return 0;
        ARRAY(s, f->final_triples, f->final_count, 12);
        for (uint32_t i = 0; i < f->final_count; ++i) if (!words(s, f->final_triples[i].words, 3)) return 0;
    } else if (s->writing && f->final_count) return fail(s, "City final triples require version 9+");
    return 1;
}

void sr_block_free(SrBlockFile *f) {
    if (!f) return;
    free(f->patches); free(f->solids); free(f);
}
void sr_building_free(SrBuildingFile *f) {
    if (!f) return;
    for (unsigned i = 0; i < 4; ++i) free(f->tables[i].names);
    if (f->paths) for (uint32_t i = 0; i < f->path_count; ++i) free(f->paths[i].points);
    free(f->paths); free(f->cells); free(f);
}
void sr_city_free(SrCityFile *f) {
    if (!f) return;
    free(f->names.names); free(f->triples); free(f->areas); free(f->buildings);
    if (f->groups) for (uint32_t i = 0; i < f->group_count; ++i) free(f->groups[i].variants);
    free(f->groups); free(f->chunks); free(f->final_triples); free(f);
}

static int start(Stream *s, const void *data, size_t size, SrWorldError *error, int writing) {
    memset(s, 0, sizeof(*s));
    if (error) memset(error, 0, sizeof(*error));
    s->input = data; s->size = size; s->error = error; s->writing = writing;
    if (!writing && (!data || size > LIMIT_BYTES)) return fail(s, "Invalid input buffer or size");
    return 1;
}

#define API(name, type, codec) \
int sr_##name##_decode(const void *data, size_t size, type **out, SrWorldError *error) { \
    Stream s; \
    if (out) *out = NULL; \
    if (!start(&s, data, size, error, 0) || !out) return 0; \
    type *f = calloc(1, sizeof(*f)); \
    if (!f) return fail(&s, "Out of memory"); \
    if (!codec(&s, f)) { sr_##name##_free(f); return 0; } \
    if (s.offset != size) { sr_##name##_free(f); return fail(&s, "Unparsed trailing bytes"); } \
    *out = f; return 1; \
} \
int sr_##name##_encode(const type *f, unsigned char **data, size_t *size, SrWorldError *error) { \
    Stream s; start(&s, NULL, 0, error, 1); \
    if (data) *data = NULL; \
    if (size) *size = 0; \
    if (!f || !data || !size) return fail(&s, "Invalid output arguments"); \
    type copy = *f; \
    if (!codec(&s, &copy)) { free(s.output); return 0; } \
    *data = s.output; *size = s.offset; return 1; \
}

API(block, SrBlockFile, block_codec)
API(building, SrBuildingFile, building_codec)
API(city, SrCityFile, city_codec)

const SrBuildingCell *sr_building_cell(const SrBuildingFile *f, uint32_t x, uint32_t y, uint32_t z) {
    if (!f || !f->cells || x > f->dimensions[0] || y > f->dimensions[1] || z >= f->dimensions[2]) return NULL;
    size_t index = ((size_t)z * ((size_t)f->dimensions[1]+1) + y) * ((size_t)f->dimensions[0]+1) + x;
    return index < f->cell_count ? &f->cells[index] : NULL;
}
