#ifndef SR_WORLD_FILES_H
#define SR_WORLD_FILES_H

#include <stddef.h>
#include <stdint.h>

typedef struct { size_t offset; char message[128]; } SrWorldError;
typedef struct { uint32_t count; unsigned char (*names)[64]; } SrNameTable;
typedef struct { float position[3], uv[2]; } SrBlockPoint;
typedef struct {
    /* Native loader reads six words before any control point: degrees,
       subdivision counts, material slot and patch flags, in disk order. */
    uint32_t prefix[6];
    SrBlockPoint control[16];
} SrBlockPatch;
typedef struct { float corners[8][3]; uint32_t faces[6], flags; } SrBlockSolid;
typedef struct {
    uint32_t version, header[9], patch_count, solid_count;
    SrBlockPatch *patches;
    SrBlockSolid *solids;
} SrBlockFile;

/* words[] uses the original memory order, not the file's first-three order. */
typedef struct { uint32_t words[6]; uint16_t materials[16]; uint32_t flags; } SrBuildingCell;
typedef struct { float position[3]; uint32_t value; } SrBuildingPoint;
typedef struct { uint32_t count; SrBuildingPoint *points; } SrBuildingPath;
typedef struct {
    uint32_t version;
    unsigned char name[64];
    uint32_t dimensions[3], v13_fields[3];
    SrNameTable tables[4];
    size_t cell_count;
    SrBuildingCell *cells;
    uint32_t extension_tag, path_count;
    SrBuildingPath *paths;
} SrBuildingFile;

typedef struct { uint32_t words[3]; } SrCityTriple;
typedef struct { uint32_t words[5]; unsigned char name[32]; } SrCityArea;
typedef struct { unsigned char name[64]; uint32_t words[4]; } SrCityBuilding;
typedef struct { unsigned char names[8][64]; } SrCityVariant;
typedef struct { unsigned char name[64]; uint32_t count; SrCityVariant *variants; } SrCityGroup;
typedef struct {
    uint32_t header[4], legacy_words[512];
    uint16_t legacy_cells[4096];
    uint32_t words[512], extra[512];
} SrCityChunk;
typedef struct {
    uint32_t version;
    SrNameTable names;
    uint32_t triple_count, area_count, building_count, group_count, chunk_count, final_count;
    SrCityTriple *triples, *final_triples;
    SrCityArea *areas;
    SrCityBuilding *buildings;
    SrCityGroup *groups;
    SrCityChunk *chunks;
} SrCityFile;

/* Decoders own independent allocations; no buffer view or original EXE needed.
   Outputs start NULL and remain NULL on failure. Encoders return allocated bytes.
   Free successful outputs with the matching destructor / free(encoded_bytes). */
int sr_block_decode(const void *data, size_t size, SrBlockFile **out, SrWorldError *error);
int sr_building_decode(const void *data, size_t size, SrBuildingFile **out, SrWorldError *error);
int sr_city_decode(const void *data, size_t size, SrCityFile **out, SrWorldError *error);
int sr_block_encode(const SrBlockFile *file, unsigned char **data, size_t *size, SrWorldError *error);
int sr_building_encode(const SrBuildingFile *file, unsigned char **data, size_t *size, SrWorldError *error);
int sr_city_encode(const SrCityFile *file, unsigned char **data, size_t *size, SrWorldError *error);
void sr_block_free(SrBlockFile *file);
void sr_building_free(SrBuildingFile *file);
void sr_city_free(SrCityFile *file);
const SrBuildingCell *sr_building_cell(const SrBuildingFile *file, uint32_t x, uint32_t y, uint32_t z);

#endif
