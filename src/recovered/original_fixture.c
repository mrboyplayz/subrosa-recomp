#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <bcrypt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "original_fixture.h"

static int pinned_hash(const unsigned char *data, size_t size) {
    static const unsigned char expected[32] = {
        0xe9,0x50,0x04,0x22,0x58,0x2b,0x7e,0x55,0x0b,0xe2,0x5f,0x6b,0x31,0xe8,0xcd,0xf0,
        0x0b,0x72,0x8a,0xe7,0x33,0xd5,0x44,0x48,0x68,0xc8,0x99,0x82,0xc1,0x52,0x6c,0x5e
    };
    BCRYPT_ALG_HANDLE algorithm = NULL;
    BCRYPT_HASH_HANDLE hash = NULL;
    unsigned char actual[32];
    int ok = BCryptOpenAlgorithmProvider(&algorithm, BCRYPT_SHA256_ALGORITHM, NULL, 0) >= 0;
    if (ok) ok = BCryptCreateHash(algorithm, &hash, NULL, 0, NULL, 0, 0) >= 0;
    if (ok) ok = BCryptHashData(hash, (PUCHAR)data, (ULONG)size, 0) >= 0;
    if (ok) ok = BCryptFinishHash(hash, actual, sizeof(actual), 0) >= 0;
    if (ok) ok = memcmp(actual, expected, sizeof(actual)) == 0;
    if (hash) BCryptDestroyHash(hash);
    if (algorithm) BCryptCloseAlgorithmProvider(algorithm, 0);
    return ok;
}

static int copy_rva(SrOriginalFixture *f, const unsigned char *file, size_t size,
                    uint32_t rva, uint32_t count) {
    const IMAGE_DOS_HEADER *dos = (const IMAGE_DOS_HEADER *)file;
    if (size < sizeof(*dos) || dos->e_magic != IMAGE_DOS_SIGNATURE || dos->e_lfanew < 0 ||
        (size_t)dos->e_lfanew + sizeof(IMAGE_NT_HEADERS64) > size) return 0;
    const IMAGE_NT_HEADERS64 *nt = (const IMAGE_NT_HEADERS64 *)(file + dos->e_lfanew);
    if (nt->Signature != IMAGE_NT_SIGNATURE || nt->FileHeader.Machine != IMAGE_FILE_MACHINE_AMD64)
        return 0;
    const IMAGE_SECTION_HEADER *section = IMAGE_FIRST_SECTION(nt);
    if ((const unsigned char *)(section + nt->FileHeader.NumberOfSections) > file + size) return 0;
    for (unsigned i = 0; i < nt->FileHeader.NumberOfSections; ++i) {
        if (rva < section[i].VirtualAddress) continue;
        uint64_t offset = (uint64_t)rva - section[i].VirtualAddress;
        if (offset + count > section[i].SizeOfRawData) continue;
        offset += section[i].PointerToRawData;
        if (offset + count > size) return 0;
        memcpy(f->base + rva, file + offset, count);
        return 1;
    }
    return 0;
}

int sr_original_fixture_open(SrOriginalFixture *f, const char *path) {
    f->base = NULL;
    FILE *input = fopen(path, "rb");
    if (!input) { perror(path); return 0; }
    if (fseek(input, 0, SEEK_END)) { fclose(input); return 0; }
    long length = ftell(input);
    if (length <= 0 || length > 64 * 1024 * 1024 || fseek(input, 0, SEEK_SET)) {
        fclose(input); return 0;
    }
    unsigned char *file = malloc((size_t)length);
    if (!file) { fclose(input); return 0; }
    int ok = fread(file, 1, (size_t)length, input) == (size_t)length;
    fclose(input);
    if (!ok || !pinned_hash(file, (size_t)length)) {
        fprintf(stderr, "Refusing original-code tests: executable SHA256 does not match the reviewed build.\n");
        free(file); return 0;
    }
    /* Preserve RIP/base-relative offsets without committing the enormous BSS.
       Only these audited leaf functions, constants and test-state pages exist. */
    f->base = VirtualAlloc(NULL, 0x44000000ULL, MEM_RESERVE, PAGE_NOACCESS);
    static const struct { uint32_t rva, size; } pages[] = {
        {0x0000b000,0x1000}, {0x000a3000,0x1000}, {0x00278000,0x1000},
        {0x11620000,0x390000}, {0x4329b000,0x1000}, {0x4329e000,0x710000},
        {0x43ebf000,0x1000}, {0x43f79000,0x5000}
    };
    ok = f->base != NULL;
    for (unsigned i = 0; ok && i < sizeof(pages)/sizeof(pages[0]); ++i)
        ok = VirtualAlloc(f->base + pages[i].rva, pages[i].size, MEM_COMMIT, PAGE_READWRITE) != NULL;
    if (ok) ok = copy_rva(f, file, (size_t)length, 0xb5f0, 94) &&
                 copy_rva(f, file, (size_t)length, 0xa3770, 497) &&
                 copy_rva(f, file, (size_t)length, 0x2785e8, 8) &&
                 copy_rva(f, file, (size_t)length, 0x278620, 8);
    free(file);
    DWORD old;
    if (ok) ok = VirtualProtect(f->base + 0xb000, 0x1000, PAGE_EXECUTE_READ, &old) &&
                 VirtualProtect(f->base + 0xa3000, 0x1000, PAGE_EXECUTE_READ, &old) &&
                 VirtualProtect(f->base + 0x278000, 0x1000, PAGE_READONLY, &old);
    if (ok) ok = FlushInstructionCache(GetCurrentProcess(), f->base + 0xb000, 0x1000) &&
                 FlushInstructionCache(GetCurrentProcess(), f->base + 0xa3000, 0x1000);
    if (!ok) { fprintf(stderr, "Cannot allocate original-code fixture: %lu\n", GetLastError()); sr_original_fixture_close(f); }
    return ok;
}

void sr_original_fixture_close(SrOriginalFixture *f) {
    if (f->base) VirtualFree(f->base, 0, MEM_RELEASE);
    f->base = NULL;
}

float sr_original_angle(SrOriginalFixture *f, float a, float b) {
    float (*fn)(float, float);
    void *address = f->base + 0xb5f0;
    _Static_assert(sizeof(fn) == sizeof(address), "x64 code pointers required");
    memcpy(&fn, &address, sizeof(fn));
    return fn(a, b);
}

void sr_original_spectator(SrOriginalFixture *f, int player) {
    void (*fn)(int);
    void *address = f->base + 0xa3770;
    memcpy(&fn, &address, sizeof(fn));
    fn(player);
}

void sr_fixture_write32(SrOriginalFixture *f, uint32_t rva, uint32_t value) {
    memcpy(f->base + rva, &value, sizeof(value));
}
uint32_t sr_fixture_read32(const SrOriginalFixture *f, uint32_t rva) {
    uint32_t value;
    memcpy(&value, f->base + rva, sizeof(value));
    return value;
}
