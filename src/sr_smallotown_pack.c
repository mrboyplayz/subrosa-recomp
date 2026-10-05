#include "recovered/world_files.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned char *read_file(const char *path, size_t *size) {
    FILE *file = fopen(path, "rb");
    if (!file) return NULL;
    if (fseek(file, 0, SEEK_END) != 0) { fclose(file); return NULL; }
    long length = ftell(file);
    if (length < 0 || fseek(file, 0, SEEK_SET) != 0) { fclose(file); return NULL; }
    unsigned char *data = (unsigned char *)malloc((size_t)length ? (size_t)length : 1);
    if (!data || fread(data, 1, (size_t)length, file) != (size_t)length) {
        free(data); fclose(file); return NULL;
    }
    fclose(file);
    *size = (size_t)length;
    return data;
}

static int write_file(const char *path, const void *data, size_t size) {
    FILE *file = fopen(path, "wb");
    if (!file) return 0;
    int ok = fwrite(data, 1, size, file) == size;
    if (fclose(file) != 0) ok = 0;
    return ok;
}

static int set_name(unsigned char *dst, size_t capacity, const char *name) {
    size_t length = strlen(name);
    if (length >= capacity) return 0;
    memset(dst, 0, capacity);
    memcpy(dst, name, length);
    return 1;
}

static int pack_building(const char *source, const char *block_index_path, const char *destination) {
    size_t source_size = 0;
    unsigned char *source_data = read_file(source, &source_size);
    SrBuildingFile *building = NULL;
    SrWorldError error = {0};
    int ok = source_data && sr_building_decode(source_data, source_size, &building, &error);
    free(source_data);
    if (!ok) {
        fprintf(stderr, "Could not decode source building %s at 0x%zx: %s\n", source,
            error.offset, error.message);
        return 0;
    }
    if (building->dimensions[0] < 4 ||
        building->dimensions[1] < 4 || building->dimensions[2] < 1) {
        fprintf(stderr, "Source prefab does not match the expected simple-lot fixture\n");
        sr_building_free(building);
        return 0;
    }
    if (!set_name(building->name, sizeof(building->name), "smallotown_shell")) {
        fprintf(stderr, "Building name is too long\n");
        sr_building_free(building);
        return 0;
    }

    FILE *index_file = fopen(block_index_path, "r");
    if (!index_file) {
        perror(block_index_path);
        sr_building_free(building);
        return 0;
    }
    char line[256];
    if (!fgets(line, sizeof(line), index_file)) {
        fprintf(stderr, "Empty block index: %s\n", block_index_path);
        fclose(index_file);
        sr_building_free(building);
        return 0;
    }
    uint32_t block_count = 0;
    while (fgets(line, sizeof(line), index_file)) ++block_count;
    if (ferror(index_file) || !block_count || block_count > 29u * 29u * 29u) {
        fprintf(stderr, "Invalid block count in %s: %u\n", block_index_path, block_count);
        fclose(index_file);
        sr_building_free(building);
        return 0;
    }
    rewind(index_file);
    fgets(line, sizeof(line), index_file); /* header */

    free(building->tables[1].names);
    building->tables[1].names = calloc(block_count, sizeof(*building->tables[1].names));
    if (!building->tables[1].names) {
        fprintf(stderr, "Could not allocate block resource table\n");
        fclose(index_file);
        sr_building_free(building);
        return 0;
    }
    building->tables[1].count = block_count;
    free(building->cells);
    building->dimensions[0] = 28;
    building->dimensions[1] = 28;
    building->dimensions[2] = 28;
    building->cell_count = (size_t)29 * 29 * 28;
    building->cells = calloc(building->cell_count, sizeof(*building->cells));
    if (!building->cells) {
        fprintf(stderr, "Could not allocate split building cells\n");
        fclose(index_file);
        sr_building_free(building);
        return 0;
    }

    for (uint32_t i = 0; i < block_count; ++i) {
        char name[64];
        unsigned x, y, z, patches;
        if (!fgets(line, sizeof(line), index_file) ||
            sscanf(line, "%63[^,],%u,%u,%u,%u", name, &x, &y, &z, &patches) != 5 ||
            x >= 28 || y >= 28 || z >= 28 || !patches || patches > 9 ||
            !set_name(building->tables[1].names[i], 64, name)) {
            fprintf(stderr, "Invalid split-block index row %u in %s\n", i + 1, block_index_path);
            fclose(index_file);
            sr_building_free(building);
            return 0;
        }
        size_t cell_index = ((size_t)z * 29 + y) * 29 + x;
        SrBuildingCell *cell = &building->cells[cell_index];
        cell->words[0] = i;
        cell->words[1] = 0x80000000u;
    }
    fclose(index_file);

    unsigned char *encoded = NULL;
    size_t encoded_size = 0;
    memset(&error, 0, sizeof(error));
    ok = sr_building_encode(building, &encoded, &encoded_size, &error);
    if (!ok) fprintf(stderr, "Could not encode building at 0x%zx: %s\n", error.offset, error.message);
    else ok = write_file(destination, encoded, encoded_size);
    if (!ok && encoded) fprintf(stderr, "Could not write building %s\n", destination);
    free(encoded);
    sr_building_free(building);
    return ok;
}

static int replace_one_city_building(const char *source, const char *destination, const char *old_name) {
    size_t source_size = 0;
    unsigned char *source_data = read_file(source, &source_size);
    SrCityFile *city = NULL;
    SrWorldError error = {0};
    int ok = source_data && sr_city_decode(source_data, source_size, &city, &error);
    free(source_data);
    if (!ok) {
        fprintf(stderr, "Could not decode source city %s at 0x%zx: %s\n", source,
            error.offset, error.message);
        return 0;
    }
    SrCityBuilding *target = NULL;
    for (uint32_t i = 0; i < city->building_count; ++i) {
        if (strncmp((const char *)city->buildings[i].name, old_name, 64) == 0) {
            target = &city->buildings[i];
            break;
        }
    }
    if (!target) {
        fprintf(stderr, "No city placement named '%s' was found\n", old_name);
        sr_city_free(city);
        return 0;
    }
    if (!set_name(target->name, sizeof(target->name), "smallotown_shell")) {
        fprintf(stderr, "City building name is too long\n");
        sr_city_free(city);
        return 0;
    }
    unsigned char *encoded = NULL;
    size_t encoded_size = 0;
    memset(&error, 0, sizeof(error));
    ok = sr_city_encode(city, &encoded, &encoded_size, &error);
    if (!ok) fprintf(stderr, "Could not encode city at 0x%zx: %s\n", error.offset, error.message);
    else ok = write_file(destination, encoded, encoded_size);
    if (!ok && encoded) fprintf(stderr, "Could not write city %s\n", destination);
    free(encoded);
    sr_city_free(city);
    return ok;
}

int main(int argc, char **argv) {
    if (argc != 7) {
        fprintf(stderr, "Usage: %s <source-emptylot.sbb> <blocks-index.csv> <output.sbb> "
            "<source-city.sbc> <output-city.sbc> <replace-building-name>\n", argv[0]);
        return 2;
    }
    if (!pack_building(argv[1], argv[2], argv[3])) return 1;
    if (!replace_one_city_building(argv[4], argv[5], argv[6])) return 1;
    puts("Wrote split-block Smallotown prefab and substituted one existing city placement.");
    return 0;
}
