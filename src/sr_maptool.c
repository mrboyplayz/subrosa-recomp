#include "recovered/world_files.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAPTOOL_MAX_FILE ((size_t)128 * 1024 * 1024)

static int read_file(const char *path, unsigned char **data, size_t *size) {
    FILE *file = fopen(path, "rb");
    if (!file) {
        perror(path);
        return 0;
    }
    if (fseek(file, 0, SEEK_END) != 0) {
        fclose(file);
        fprintf(stderr, "%s: cannot seek input file\n", path);
        return 0;
    }
    long length = ftell(file);
    if (length < 0 || (unsigned long)length > MAPTOOL_MAX_FILE) {
        fclose(file);
        fprintf(stderr, "%s: file size is invalid or exceeds 128 MiB\n", path);
        return 0;
    }
    rewind(file);
    unsigned char *buffer = (unsigned char *)malloc(length ? (size_t)length : 1);
    if (!buffer) {
        fclose(file);
        fprintf(stderr, "%s: out of memory\n", path);
        return 0;
    }
    size_t read = fread(buffer, 1, (size_t)length, file);
    int failed = ferror(file) || read != (size_t)length;
    fclose(file);
    if (failed) {
        free(buffer);
        fprintf(stderr, "%s: failed to read complete file\n", path);
        return 0;
    }
    *data = buffer;
    *size = read;
    return 1;
}

static const char *extension(const char *path) {
    const char *slash = strrchr(path, '/');
    const char *backslash = strrchr(path, '\\');
    const char *base = path;
    if (slash && slash + 1 > base) base = slash + 1;
    if (backslash && backslash + 1 > base) base = backslash + 1;
    const char *dot = strrchr(base, '.');
    return dot ? dot : "";
}

static int extension_is(const char *actual, const char *expected) {
    while (*actual && *expected) {
        if (tolower((unsigned char)*actual) != tolower((unsigned char)*expected)) return 0;
        ++actual;
        ++expected;
    }
    return *actual == '\0' && *expected == '\0';
}

static void print_error(const char *path, const SrWorldError *error) {
    fprintf(stderr, "%s: invalid or unsupported native file at 0x%zx: %s\n",
        path, error->offset, error->message[0] ? error->message : "decode failed");
}

static int inspect_block(const char *path, const unsigned char *data, size_t size) {
    SrBlockFile *file = NULL;
    SrWorldError error = {0};
    if (!sr_block_decode(data, size, &file, &error)) {
        print_error(path, &error);
        return 1;
    }
    printf("%s: SBL version=%u patches=%u solids=%u bytes=%zu\n",
        path, file->version, file->patch_count, file->solid_count, size);
    sr_block_free(file);
    return 0;
}

static int inspect_building(const char *path, const unsigned char *data, size_t size) {
    SrBuildingFile *file = NULL;
    SrWorldError error = {0};
    if (!sr_building_decode(data, size, &file, &error)) {
        print_error(path, &error);
        return 1;
    }
    printf("%s: SBB version=%u dimensions=%ux%ux%u cells=%zu tables=%u,%u,%u,%u paths=%u bytes=%zu\n",
        path, file->version, file->dimensions[0], file->dimensions[1], file->dimensions[2],
        file->cell_count, file->tables[0].count, file->tables[1].count,
        file->tables[2].count, file->tables[3].count, file->path_count, size);
    sr_building_free(file);
    return 0;
}

static int inspect_city(const char *path, const unsigned char *data, size_t size) {
    SrCityFile *file = NULL;
    SrWorldError error = {0};
    if (!sr_city_decode(data, size, &file, &error)) {
        print_error(path, &error);
        return 1;
    }
    printf("%s: SBC version=%u names=%u triples=%u areas=%u buildings=%u groups=%u chunks=%u final=%u bytes=%zu\n",
        path, file->version, file->names.count, file->triple_count, file->area_count,
        file->building_count, file->group_count, file->chunk_count, file->final_count, size);
    sr_city_free(file);
    return 0;
}

static void print_fixed_string(const unsigned char *bytes, size_t capacity) {
    size_t length = 0;
    while (length < capacity && bytes[length]) ++length;
    fwrite(bytes, 1, length, stdout);
}

static int dump_building(const char *path, const unsigned char *data, size_t size) {
    SrBuildingFile *file = NULL;
    SrWorldError error = {0};
    if (!sr_building_decode(data, size, &file, &error)) {
        print_error(path, &error);
        return 1;
    }
    printf("%s: building ", path);
    print_fixed_string(file->name, sizeof(file->name));
    printf(" dimensions=%ux%ux%u\n", file->dimensions[0], file->dimensions[1], file->dimensions[2]);
    for (unsigned table = 0; table < 4; ++table) {
        printf("  table[%u] (%u):", table, file->tables[table].count);
        for (uint32_t i = 0; i < file->tables[table].count; ++i) {
            printf("\n    [%u] ", i);
            print_fixed_string(file->tables[table].names[i], 64);
        }
        putchar('\n');
    }
    size_t shown = 0;
    for (size_t i = 0; i < file->cell_count && shown < 12; ++i) {
        const SrBuildingCell *cell = &file->cells[i];
        int nonzero = cell->flags != 0;
        for (unsigned j = 0; j < 6; ++j) nonzero |= cell->words[j] != 0;
        for (unsigned j = 0; j < 16; ++j) nonzero |= cell->materials[j] != 0;
        if (!nonzero) continue;
        printf("  cell[%zu] words=", i);
        for (unsigned j = 0; j < 6; ++j) printf("%s%08x", j ? "," : "", cell->words[j]);
        printf(" materials=");
        for (unsigned j = 0; j < 16; ++j) printf("%s%u", j ? "," : "", cell->materials[j]);
        printf(" flags=%08x\n", cell->flags);
        ++shown;
    }
    sr_building_free(file);
    return 0;
}

static int dump_city(const char *path, const unsigned char *data, size_t size) {
    SrCityFile *file = NULL;
    SrWorldError error = {0};
    if (!sr_city_decode(data, size, &file, &error)) {
        print_error(path, &error);
        return 1;
    }
    printf("%s: city version=%u\n", path, file->version);
    for (uint32_t i = 0; i < file->names.count; ++i) {
        printf("  name[%u] ", i);
        print_fixed_string(file->names.names[i], 64);
        putchar('\n');
    }
    for (uint32_t i = 0; i < file->area_count && i < 24; ++i) {
        printf("  area[%u] words=%08x,%08x,%08x,%08x,%08x name=", i,
            file->areas[i].words[0], file->areas[i].words[1], file->areas[i].words[2],
            file->areas[i].words[3], file->areas[i].words[4]);
        print_fixed_string(file->areas[i].name, 32);
        putchar('\n');
    }
    for (uint32_t i = 0; i < file->building_count && i < 32; ++i) {
        printf("  building[%u] name=", i);
        print_fixed_string(file->buildings[i].name, 64);
        printf(" words=%08x,%08x,%08x,%08x\n", file->buildings[i].words[0],
            file->buildings[i].words[1], file->buildings[i].words[2], file->buildings[i].words[3]);
    }
    for (uint32_t i = 0; i < file->chunk_count && i < 12; ++i) {
        SrCityChunk *chunk = &file->chunks[i];
        printf("  chunk[%u] header=%08x,%08x,%08x,%08x\n", i,
            chunk->header[0], chunk->header[1], chunk->header[2], chunk->header[3]);
        const uint32_t *values = file->version >= 11 ? chunk->words : chunk->legacy_words;
        size_t nonzero = 0;
        uint32_t minimum = UINT32_MAX, maximum = 0;
        for (unsigned j = 0; j < 512; ++j) {
            if (!values[j]) continue;
            ++nonzero;
            if (values[j] < minimum) minimum = values[j];
            if (values[j] > maximum) maximum = values[j];
        }
        printf("    payload words: nonzero=%zu range=%08x..%08x", nonzero,
            nonzero ? minimum : 0, nonzero ? maximum : 0);
        if (file->version < 11) {
            nonzero = 0;
            minimum = UINT32_MAX;
            maximum = 0;
            for (unsigned j = 0; j < 4096; ++j) {
                uint16_t value = chunk->legacy_cells[j];
                if (!value) continue;
                ++nonzero;
                if (value < minimum) minimum = value;
                if (value > maximum) maximum = value;
            }
            printf(" cells: nonzero=%zu range=%u..%u", nonzero,
                nonzero ? minimum : 0, nonzero ? maximum : 0);
        }
        putchar('\n');
    }
    sr_city_free(file);
    return 0;
}

static uint32_t read_u32le(const unsigned char *data) {
    return (uint32_t)data[0] | (uint32_t)data[1] << 8 | (uint32_t)data[2] << 16 | (uint32_t)data[3] << 24;
}

static int inspect_csx(const char *path, const unsigned char *data, size_t size) {
    if (size < 12 || read_u32le(data) != UINT32_C(0xc5f17e01)) {
        fprintf(stderr, "%s: not a recognized CSX bundle (bad magic/header)\n", path);
        return 1;
    }
    uint32_t table_offset = read_u32le(data + 4);
    uint32_t entry_count = read_u32le(data + 8);
    if (table_offset < 12 || table_offset > size || entry_count > (size - table_offset) / 64) {
        fprintf(stderr, "%s: invalid CSX lookup table bounds\n", path);
        return 1;
    }
    printf("%s: CSX entries=%u table=0x%x bytes=%zu\n", path, entry_count, table_offset, size);
    uint32_t kind_counts[5] = {0};
    size_t payload_bytes[5] = {0};
    for (uint32_t i = 0; i < entry_count; ++i) {
        const unsigned char *entry = data + table_offset + (size_t)i * 64;
        uint32_t type = entry[0];
        uint32_t offset = read_u32le(entry + 4);
        uint32_t length = read_u32le(entry + 8);
        const char *kind = type == 1 ? "SBL" : type == 2 ? "SBB" : type == 4 ? "PNG" : "???";
        if ((type != 1 && type != 2 && type != 4) || entry[1] != 0 || entry[2] != 0x5a || entry[3] != 0x58) {
            fprintf(stderr, "%s: unsupported CSX entry header at index %u\n", path, i);
            return 1;
        }
        if (offset > table_offset || length > table_offset - offset) {
            fprintf(stderr, "%s: CSX entry %u points outside payload region\n", path, i);
            return 1;
        }
        printf("  [%u] %-3s ", i, kind);
        size_t name_length = 0;
        while (name_length < 52 && entry[12 + name_length]) ++name_length;
        fwrite(entry + 12, 1, name_length, stdout);
        printf(" offset=0x%x size=%u\n", offset, length);
        unsigned bucket = type;
        ++kind_counts[bucket];
        payload_bytes[bucket] += length;
    }
    printf("  totals: %u SBL (%zu bytes), %u SBB (%zu bytes), %u PNG (%zu bytes)\n",
        kind_counts[1], payload_bytes[1], kind_counts[2], payload_bytes[2], kind_counts[4], payload_bytes[4]);
    return 0;
}

static int dump_csx_resource(const char *archive_path, const unsigned char *data, size_t size, const char *resource_name) {
    if (size < 12 || read_u32le(data) != UINT32_C(0xc5f17e01)) {
        fprintf(stderr, "%s: not a recognized CSX bundle\n", archive_path);
        return 1;
    }
    uint32_t table_offset = read_u32le(data + 4);
    uint32_t entry_count = read_u32le(data + 8);
    if (table_offset < 12 || table_offset > size || entry_count > (size - table_offset) / 64) {
        fprintf(stderr, "%s: invalid CSX lookup table bounds\n", archive_path);
        return 1;
    }
    for (uint32_t i = 0; i < entry_count; ++i) {
        const unsigned char *entry = data + table_offset + (size_t)i * 64;
        size_t name_length = 0;
        while (name_length < 52 && entry[12 + name_length]) ++name_length;
        if (strlen(resource_name) != name_length || memcmp(entry + 12, resource_name, name_length) != 0) continue;
        uint32_t type = entry[0];
        uint32_t offset = read_u32le(entry + 4);
        uint32_t length = read_u32le(entry + 8);
        if (offset > table_offset || length > table_offset - offset) {
            fprintf(stderr, "%s: CSX resource points outside payload region\n", archive_path);
            return 1;
        }
        if (type == 2) return dump_building(resource_name, data + offset, length);
        if (type == 1) return inspect_block(resource_name, data + offset, length);
        fprintf(stderr, "%s: requested resource is not an SBB or SBL entry\n", resource_name);
        return 2;
    }
    fprintf(stderr, "%s: no matching CSX resource named '%s'\n", archive_path, resource_name);
    return 1;
}

static int roundtrip(const char *path, const unsigned char *data, size_t size) {
    const char *suffix = extension(path);
    SrWorldError error = {0};
    unsigned char *encoded = NULL;
    size_t encoded_size = 0;
    int decoded = 0;
    int encoded_ok = 0;

    if (extension_is(suffix, ".sbl")) {
        SrBlockFile *file = NULL;
        decoded = sr_block_decode(data, size, &file, &error);
        if (decoded) encoded_ok = sr_block_encode(file, &encoded, &encoded_size, &error);
        sr_block_free(file);
    } else if (extension_is(suffix, ".sbb")) {
        SrBuildingFile *file = NULL;
        decoded = sr_building_decode(data, size, &file, &error);
        if (decoded) encoded_ok = sr_building_encode(file, &encoded, &encoded_size, &error);
        sr_building_free(file);
    } else if (extension_is(suffix, ".sbc")) {
        SrCityFile *file = NULL;
        decoded = sr_city_decode(data, size, &file, &error);
        if (decoded) encoded_ok = sr_city_encode(file, &encoded, &encoded_size, &error);
        sr_city_free(file);
    } else {
        fprintf(stderr, "%s: expected .sbl, .sbb, or .sbc\n", path);
        return 2;
    }
    if (!decoded || !encoded_ok) {
        print_error(path, &error);
        free(encoded);
        return 1;
    }

    if (size == encoded_size && memcmp(data, encoded, size) == 0) {
        printf("%s: decode/encode round-trip is byte-identical (%zu bytes)\n", path, size);
        free(encoded);
        return 0;
    }
    size_t limit = size < encoded_size ? size : encoded_size;
    size_t offset = 0;
    while (offset < limit && data[offset] == encoded[offset]) ++offset;
    printf("%s: round-trip differs (input=%zu bytes output=%zu bytes first_difference=0x%zx)\n",
        path, size, encoded_size, offset);
    free(encoded);
    return 1;
}

int main(int argc, char **argv) {
    const char *command = "inspect";
    const char *path = NULL;
    if (argc == 2) path = argv[1];
    else if (argc == 4 && strcmp(argv[1], "dump") == 0) {
        command = "dump-resource";
        path = argv[2];
    }
    else if (argc == 3 && (strcmp(argv[1], "inspect") == 0 || strcmp(argv[1], "roundtrip") == 0 || strcmp(argv[1], "dump") == 0)) {
        command = argv[1];
        path = argv[2];
    } else {
        fprintf(stderr, "Usage: sr_maptool [inspect|roundtrip|dump] <file.sbl|file.sbb|file.sbc|file.csx>\n");
        return 2;
    }
    unsigned char *data = NULL;
    size_t size = 0;
    if (!read_file(path, &data, &size)) return 2;

    int result;
    if (strcmp(command, "roundtrip") == 0) result = roundtrip(path, data, size);
    else if (strcmp(command, "dump-resource") == 0 && extension_is(extension(path), ".csx")) result = dump_csx_resource(path, data, size, argv[3]);
    else if (strcmp(command, "dump-resource") == 0) {
        fprintf(stderr, "Usage: sr_maptool dump <file.csx> <resource-name>\n");
        result = 2;
    }
    else if (extension_is(extension(path), ".csx")) result = inspect_csx(path, data, size);
    else if (strcmp(command, "dump") == 0 && extension_is(extension(path), ".sbb")) result = dump_building(path, data, size);
    else if (strcmp(command, "dump") == 0 && extension_is(extension(path), ".sbc")) result = dump_city(path, data, size);
    else if (strcmp(command, "dump") == 0) {
        fprintf(stderr, "%s: dump supports .sbb and .sbc\n", path);
        result = 2;
    }
    else if (extension_is(extension(path), ".sbl")) result = inspect_block(path, data, size);
    else if (extension_is(extension(path), ".sbb")) result = inspect_building(path, data, size);
    else if (extension_is(extension(path), ".sbc")) result = inspect_city(path, data, size);
    else {
        fprintf(stderr, "%s: expected .sbl, .sbb, or .sbc\n", path);
        result = 2;
    }
    free(data);
    return result;
}
