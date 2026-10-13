/* Native comparison harness: image mapping, recording and output. See nc.h. */
#include "nc.h"

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#ifndef NC_GAME_EXE
#error "NC_GAME_EXE (path of the installed subrosa.exe) must be defined"
#endif

/* ---- imports ---------------------------------------------------------- */

typedef struct { const char *dll, *name; void *target; } Binding;
static Binding bindings[64];
static int binding_count;

void nc_bind_import(const char *dll, const char *name, void *target)
{
    if (binding_count < (int)(sizeof bindings / sizeof bindings[0]))
        bindings[binding_count++] = (Binding){dll, name, target};
}

static void import_trap(const char *name)
{
    fflush(stdout);
    printf("trap: unbound import %s\n", name);
    fflush(stdout);
    ExitProcess(3);
}

/* mov rcx, imm64 ; mov rax, imm64 ; jmp rax */
static void *make_thunk(unsigned char **cursor, const void *argument, const void *target)
{
    unsigned char *p = *cursor;
    p[0] = 0x48; p[1] = 0xB9; memcpy(p + 2, &argument, 8);
    p[10] = 0x48; p[11] = 0xB8; memcpy(p + 12, &target, 8);
    p[20] = 0xFF; p[21] = 0xE0;
    *cursor = p + 32;
    return p;
}

/* ---- image ------------------------------------------------------------ */

void nc_map_image(void)
{
    FILE *file = fopen(NC_GAME_EXE, "rb");
    if (!file) {
        printf("cannot open %s\n", NC_GAME_EXE);
        exit(2);
    }
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    fseek(file, 0, SEEK_SET);
    unsigned char *raw = malloc((size_t)size);
    if (fread(raw, 1, (size_t)size, file) != (size_t)size)
        exit(2);
    fclose(file);

    IMAGE_DOS_HEADER *dos = (IMAGE_DOS_HEADER *)raw;
    IMAGE_NT_HEADERS64 *nt = (IMAGE_NT_HEADERS64 *)(raw + dos->e_lfanew);
    if (nt->OptionalHeader.ImageBase != NC_IMAGE_BASE) {
        printf("unexpected image base\n");
        exit(2);
    }
    unsigned char *image = VirtualAlloc((void *)NC_IMAGE_BASE, nt->OptionalHeader.SizeOfImage,
                                        MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    if (image != (unsigned char *)NC_IMAGE_BASE) {
        printf("cannot reserve the image at 0x%llx (error %lu)\n", NC_IMAGE_BASE, GetLastError());
        exit(2);
    }
    memcpy(image, raw, nt->OptionalHeader.SizeOfHeaders);
    IMAGE_SECTION_HEADER *section = IMAGE_FIRST_SECTION(nt);
    for (int i = 0; i < nt->FileHeader.NumberOfSections; i++, section++) {
        DWORD n = section->SizeOfRawData < section->Misc.VirtualSize || !section->Misc.VirtualSize
                      ? section->SizeOfRawData : section->Misc.VirtualSize;
        memcpy(image + section->VirtualAddress, raw + section->PointerToRawData, n);
    }

    /* Imports: bound targets or traps. */
    unsigned char *thunks = VirtualAlloc(NULL, 1 << 20, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    unsigned char *cursor = thunks;
    IMAGE_DATA_DIRECTORY dir = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];
    for (IMAGE_IMPORT_DESCRIPTOR *d = (void *)(image + dir.VirtualAddress); d->Name; d++) {
        const char *dll = (const char *)(image + d->Name);
        uint64_t *names = (uint64_t *)(image + (d->OriginalFirstThunk ? d->OriginalFirstThunk : d->FirstThunk));
        uint64_t *slots = (uint64_t *)(image + d->FirstThunk);
        for (; *names; names++, slots++) {
            char *label = malloc(160);
            if (*names & IMAGE_ORDINAL_FLAG64)
                snprintf(label, 160, "%s!#%llu", dll, (unsigned long long)(*names & 0xFFFF));
            else
                snprintf(label, 160, "%s!%s", dll, ((IMAGE_IMPORT_BY_NAME *)(image + *names))->Name);
            void *target = NULL;
            for (int b = 0; b < binding_count; b++) {
                const char *bang = strchr(label, '!');
                if (!_strnicmp(label, bindings[b].dll, (size_t)(bang - label)) && !strcmp(bang + 1, bindings[b].name))
                    target = bindings[b].target;
            }
            *slots = (uint64_t)(uintptr_t)(target ? target : make_thunk(&cursor, label, import_trap));
        }
    }
    free(raw);
}

void nc_redirect(uint64_t address, void *target)
{
    unsigned char *p = (unsigned char *)(uintptr_t)address;
    p[0] = 0x48; p[1] = 0xB8; memcpy(p + 2, &target, 8);
    p[10] = 0xFF; p[11] = 0xE0;
    FlushInstructionCache(GetCurrentProcess(), p, 12);
}

/* ---- saved state ------------------------------------------------------- */

typedef struct { void *address; size_t size; void *copy; } Saved;
static Saved saved[256];
static int saved_count;

void nc_save(void *address, size_t size)
{
    void *copy = malloc(size);
    memcpy(copy, address, size);
    saved[saved_count++] = (Saved){address, size, copy};
}

void nc_restore(void)
{
    for (int i = 0; i < saved_count; i++)
        memcpy(saved[i].address, saved[i].copy, saved[i].size);
}

/* ---- floating point ----------------------------------------------------- */

uint32_t nc_get_mxcsr(void)
{
    uint32_t value;
    __asm__ volatile("stmxcsr %0" : "=m"(value));
    return value;
}

void nc_set_mxcsr(uint32_t value)
{
    __asm__ volatile("ldmxcsr %0" : : "m"(value));
}

/* ---- generator ---------------------------------------------------------- */

static uint64_t state = 0x9E3779B97F4A7C15ULL;

void nc_seed(uint64_t seed)
{
    /* splitmix64 only adds a constant to its state per draw, so the state
       must be scrambled: seed * constant would make seed n the stream of
       seed 0 shifted by n draws, and fixtures whose draw counts depend on
       the values drawn then fall back into step and repeat the same case. */
    uint64_t z = seed + 0x632BE59BD9B4E019ULL;
    z = (z ^ (z >> 33)) * 0xFF51AFD7ED558CCDULL;
    z = (z ^ (z >> 33)) * 0xC4CEB9FE1A85EC53ULL;
    state = z ^ (z >> 33);
}

uint64_t nc_rand(void)
{
    /* splitmix64 */
    uint64_t z = (state += 0x9E3779B97F4A7C15ULL);
    z = (z ^ (z >> 30)) * 0xBF58476D1CE4E5B9ULL;
    z = (z ^ (z >> 27)) * 0x94D049BB133111EBULL;
    return z ^ (z >> 31);
}

uint32_t nc_rand_below(uint32_t n) { return n ? (uint32_t)(nc_rand() % n) : 0; }
int nc_chance(int percent) { return (int)nc_rand_below(100) < percent; }

float nc_float_plain(float lo, float hi)
{
    double u = (double)(nc_rand() >> 11) / 9007199254740992.0;
    return (float)(lo + (hi - lo) * u);
}

float nc_float(float lo, float hi)
{
    static const uint32_t edges[] = {0x00000000, 0x80000000, 0x00000001, 0x00800000, 0x3F800000, 0xBF800000,
                                     0x7F7FFFFF, 0xFF7FFFFF, 0x7F800000, 0xFF800000, 0x7FC00000, 0x33800000};
    if (nc_chance(4)) {
        float f;
        uint32_t bits = edges[nc_rand_below(sizeof edges / sizeof edges[0])];
        memcpy(&f, &bits, 4);
        return f;
    }
    return nc_float_plain(lo, hi);
}

/* ---- output ------------------------------------------------------------- */

void nc_line(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    putchar('\n');
}

void nc_bytes(const char *label, const void *data, size_t size)
{
    const unsigned char *p = data;
    printf("%s", label);
    for (size_t i = 0; i < size; i++)
        printf("%s%02x", i % 4 ? "" : " ", p[i]);
    putchar('\n');
}

void nc_floats(const char *label, const float *values, size_t count)
{
    printf("%s", label);
    for (size_t i = 0; i < count; i++) {
        uint32_t bits;
        memcpy(&bits, &values[i], 4);
        if ((bits & 0x7F800000) == 0x7F800000 && (bits & 0x007FFFFF))
            printf(" nan");
        else
            printf(" %08x", bits);
    }
    putchar('\n');
}

uint64_t nc_hash(const void *data, size_t size)
{
    const unsigned char *p = data;
    uint64_t h = 0xCBF29CE484222325ULL;
    for (size_t i = 0; i < size; i++)
        h = (h ^ p[i]) * 0x100000001B3ULL;
    return h;
}

void nc_call(const char *name, int count, const uint64_t *args)
{
    printf("call %s", name);
    for (int i = 0; i < count; i++)
        printf(" %llx", (unsigned long long)args[i]);
    putchar('\n');
}

int nc_cases(int fallback)
{
    const char *text = getenv("CASES");
    return text && atoi(text) > 0 ? atoi(text) : fallback;
}
