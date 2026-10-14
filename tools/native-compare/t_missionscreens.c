/* Padded rows and mission screens, with real restored row/text-link helpers.
   The only callback is a recorded host formatter, identical in both images. */
#include "peload.h"
#include <xmmintrin.h>
#include "mission_fixture.h"
#ifdef ENGINE
MS char *computer_write_padded_line(int,int,const char*,uint8_t,int);
MS void computer_draw_mission_menu(int);
MS void computer_draw_mission_document(int);
MS void computer_draw_mission_upload(int);
#endif
#define G(t,a) (*(t *)D(a))
static uint8_t *items, *texts, *changes, *disks;
static uint32_t rs = 864213u, formats, case_number;
static int active_item;
static const int ids[] = {0, 13, 257, 900, 1023};
static uint32_t rnd(void) { rs = rs * 1664525u + 1013904223u; return rs; }
static void put(void *p, int off, uint32_t value) { memcpy((uint8_t *)p + off, &value, 4); }
static uint32_t get(void *p, int off) { uint32_t v; memcpy(&v, (uint8_t *)p + off, 4); return v; }
static uint8_t *it(int i) { return items + (size_t)i * 0x1B80; }
static uint64_t hash(const void *p, size_t n) {
    const uint8_t *b = p; uint64_t h = 14695981039346656037ULL;
    for (size_t k = 0; k < n; k++) h = (h ^ b[k]) * 1099511628211ULL;
    return h;
}
static MS int format_text(char *out, const char *fmt, uint64_t first, const char *second)
{
    formats++;
    int result;
    if (strstr(fmt, "%d") && strstr(fmt, "%s")) {
        printf("format %s number=%d text=%s\n", fmt, (int)first, second);
        result = sprintf(out, fmt, (int)first, second);
    } else if (strstr(fmt, "%d")) {
        printf("format %s number=%d\n", fmt, (int)first);
        result = sprintf(out, fmt, (int)first);
    } else if (strstr(fmt, "%s")) {
        printf("format %s text=%s\n", fmt, (const char *)(uintptr_t)first);
        result = sprintf(out, fmt, (const char *)(uintptr_t)first);
    } else {
        printf("format %s\n", fmt);
        result = sprintf(out, "%s", fmt);
    }
    /* Controlled side effects expose native cached arguments and reloads.
       Production formatting normally has no such side effects. */
    if (case_number % 29 == 0 && formats == 1) {
        uint8_t *p = it(active_item);
        put(p, 0x1658, 2);
        if ((int32_t)get(p, 0x166C) >= 0) put(p, 0x166C, (get(p, 0x166C) + 1) % 7);
        put(p, 0x1664, 300); put(p, 0x1674, 17); put(p, 0x334, 1);
    }
    return result;
}
static void setup(int c)
{
    case_number = c; formats = 0; active_item = ids[c % 5];
    for (int n = 0; n < 5; n++) {
        uint8_t *p = it(ids[n]);
        for (int k = 0; k < 0x1B80; k += 4) put(p, k, rnd());
        for (int row = 0; row < 32; row++) p[0x374 + 64 * row + 63] = 0;
        for (int k = 0; k < 64; k++) put(p, 0x178 + 4 * k, rnd() % 80);
        put(p, 0x1658, (c + n) % 11 == 0 ? UINT32_MAX : (uint32_t)(c + n) % 6);
        static const int selections[] = {INT32_MIN, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 16, 31, 32, 47, INT32_MAX};
        put(p, 0x166C, selections[(c / 5 + n) % 17]);
        put(p, 0x1670, (c + n) % 3 == 0 ? 0 : rnd());
        static const int timers[] = {INT32_MIN, -1, 0, 1, 15, 16, 17, 31, 32, 254, 255, 256, 257, 300, INT32_MAX};
        put(p, 0x1664, timers[(c / 5 + n) % 15]);
        put(p, 0x1674, (c + n) % 65);
        static const int counts[] = {-1, 0, 1, 15, 16, 17, 31, 32, 48, 64};
        put(p, 0x167C, counts[(c / 5 + n) % 10]);
        for (int k = 0; k < 80; k++) put(p, 0x1680 + 4 * k, rnd() % 256);
        put(p, 0x334, (c + n) % 3);
    }
    for (int d = 0; d < 3; d++) for (int k = 0; k < 256; k++) {
        char *name = (char *)disks + 0x2828 * d + 0x100C + 24 * k;
        int length = (c + d + k) % 16;
        for (int j = 0; j < length; j++) name[j] = 'A' + (d + k + j) % 26;
        name[length] = 0;
    }
    setup_mission_records(c);
    for (int k = 0; k < 256 * 0x9C; k += 4) put(texts, k, rnd());
    for (int k = 0; k < 256; k++) { put(texts, k * 0x9C, rnd() % 2); put(texts, k * 0x9C + 24, rnd() % 64); }
    for (int k = 0; k < 4096; k += 4) put(changes, k, rnd());
    G(uint32_t, 0x183EBFD34ULL) = rnd();
}
static void state(const char *kind, int c, uint32_t csr)
{
    printf("%s %d formats=%u csr=%08x items", kind, c, formats, csr);
    for (int k = 0; k < 5; k++) printf(" %016llx", (unsigned long long)hash(it(ids[k]), 0x1B80));
    printf(" texts=%016llx changes=%016llx\n", (unsigned long long)hash(texts, 256 * 0x9C), (unsigned long long)hash(changes, 4096));
}
static void padded_cases(int cases)
{
    static const int widths[] = {INT32_MIN, -17, -1, 0, 1, 15, 16, 20, 32, 60, 63, 64, 65, 96};
    static const int rows[] = {-1, 0, 1, 12, 23, 31};
    for (int c = 0; c < cases; c++) {
        setup(c); int row = rows[(c / 5) % 6], width = widths[(c / 30) % 14];
        char source[128]; int length = c % 120;
        for (int j = 0; j < length; j++) source[j] = (char)(1 + (c + j) % 255);
        source[length] = 0;
        uint8_t *p = it(active_item); char *out = (char *)p + 0x374 + 64 * row;
        const char *text = source;
        switch (c % 5) { case 1: text = out; break; case 2: text = out + 1; break;
            case 3: text = out - 1; break; case 4: text = (const char *)p + 0xB74 + 64 * row; break; }
        uint8_t color = (uint8_t)rnd(); char *result;
        printf("padded %d item=%d row=%d width=%d\n", c, active_item, row, width);
        _mm_setcsr(0x1F80);
#if defined(ENGINE) && !defined(MISSION_WRAPPERS)
        result = computer_write_padded_line(active_item, row, text, color, width);
#else
        result = ((MS char *(*)(int,int,const char*,uint8_t,int))F(0x1400C6AB0ULL))(active_item, row, text, color, width);
#endif
        uint32_t csr = _mm_getcsr(); printf("return-offset=%lld\n", (long long)(result - (char *)D(0x182BBB4F4ULL)));
        state("padded-state", c, csr);
    }
}
static void screen_cases(int cases, int which)
{
    static const char *names[] = {"menu", "document", "upload"};
    static const uint64_t addresses[] = {0x1400C7890ULL, 0x1400C7FC0ULL, 0x1400C86D0ULL};
    for (int c = 0; c < cases; c++) {
        setup(c);
        /* Document screens accept only valid project indices or the native
           negative exit paths. Menu highlighting also covers out-of-range. */
        if (which == 1 && (int32_t)get(it(active_item), 0x166C) >= 0)
            put(it(active_item), 0x166C, get(it(active_item), 0x166C) % 7);
        printf("%s %d item=%d\n", names[which], c, active_item); _mm_setcsr(0x1F80);
#if defined(ENGINE) && !defined(MISSION_WRAPPERS)
        if (which == 0) computer_draw_mission_menu(active_item);
        else if (which == 1) computer_draw_mission_document(active_item);
        else computer_draw_mission_upload(active_item);
#else
        ((MS void (*)(int))F(addresses[which]))(active_item);
#endif
        uint32_t csr = _mm_getcsr(); state(names[which], c, csr);
        /* A second draw shares unchanged rows through the real link table. */
        if (c % 37 == 1) {
            _mm_setcsr(0x1F80);
#if defined(ENGINE) && !defined(MISSION_WRAPPERS)
            if (which == 0) computer_draw_mission_menu(active_item);
            else if (which == 1) computer_draw_mission_document(active_item);
            else computer_draw_mission_upload(active_item);
#else
            ((MS void (*)(int))F(addresses[which]))(active_item);
#endif
            csr = _mm_getcsr(); state("repeat", c, csr);
        }
    }
}
int main(int argc, char **argv)
{
    init_image(argc, argv); setvbuf(stdout, NULL, _IOFBF, 1 << 20);
    items = D(0x182BBB180ULL); texts = D(0x1857BD740ULL); changes = D(0x18329B1E0ULL); disks = D(0x181FEEBC8ULL);
    memset(items, 0, 1024 * 0x1B80); memset(texts, 0, 16384 * 0x9C);
    hook(0x140158AB0ULL, format_text);
    int cases = argc > 3 ? atoi(argv[3]) : 1000;
    padded_cases(cases); for (int which = 0; which < 3; which++) screen_cases(cases, which);
    printf("whole-items=%016llx texts=%016llx\n", (unsigned long long)hash(items, 1024 * 0x1B80), (unsigned long long)hash(texts, 16384 * 0x9C));
    fprintf(stderr, "[%s] %d cases per routine\n", img_name, cases); return 0;
}
