// NC_WRAPPERS: 140089430 14008A110 14008B050
/* The end-of-round corporation screens draw every corporation name, money
 * readout and player row in that corporation's colour. This suite compares
 * the arguments the original routines (native build) and the recompiled
 * client (port build) hand the text call 0x14006D930.
 *
 * 0x14006D930 is variadic: format in rcx, x/y/size in xmm1-3, flags at
 * [rsp+20h], red/green/blue/alpha at [rsp+28h/30h/38h/40h], then the format's
 * arguments from [rsp+48h]. Both builds have that address overwritten with the
 * same recorder, so a differing colour, flag or argument shows up as a
 * differing line.
 *
 * In the port build the recompiled client reaches sr_text_draw_recovered
 * (client_ui.c) instead; that is replaced here by a thunk that copies its
 * argument-slot pointer onto the stack where the original keeps the same
 * values, then jumps to the recorded original. Both builds therefore reach
 * the recorder with the same frame.
 *
 * The corporation colour table dword_1402B2830/34/38 is set to distinct
 * markers per corporation and channel, so a transposed channel is caught.
 *
 * Coverage: every corporation heading, money readout, bonus, total and winner
 * banner, and every player row (name, badge number and cash). Six players are
 * planted so the row loops run: each player record's text starts at
 * 0x151620C64 with a stride of 0x3834, the scanner includes a player whose
 * "linked" word is zero, and the corporation, badge, cash, total and dimming
 * words sit at fixed small offsets from that base.
 *
 * Two things are replaced by stand-ins in both builds and are outside the
 * comparison: the original's own sprintf (0x140158AB0), which faults without
 * its runtime's setup, and the per-row icon draw (0x14006D300) and the
 * mouse-over handler (0x140117820). Neither carries a colour. */
#include <stdio.h>
#include <string.h>
#include "nc.h"
#include "memory.h"

/* The screens exist only as client entry points (the port build has no engine
 * routine for them yet), so this suite runs with --client-wrappers. */
#ifdef NC_NATIVE
#define screen1() ((void (*)(void))NC_ADDR(0x140089430))()
#define screen2() ((void (*)(void))NC_ADDR(0x14008A110))()
#define screen3() ((void (*)(void))NC_ADDR(0x14008B050))()
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140089430(void);
long long sub_14008A110(void);
long long sub_14008B050(void);
#define screen1() ((void)sub_140089430())
#define screen2() ((void)sub_14008A110())
#define screen3() ((void)sub_14008B050())
#else
#error "t_teamscreens needs --client-wrappers: the screens are client entry points only"
#endif

char *fmt;
uint32_t flags_word, colour[4], arg0, arg1;
int recording, calls;

void report(void)
{
    if (!recording) return;
    float c0, c1, c2, c3;
    memcpy(&c0, &colour[0], 4); memcpy(&c1, &colour[1], 4);
    memcpy(&c2, &colour[2], 4); memcpy(&c3, &colour[3], 4);
    /* Only the arguments the format consumes are meaningful: the slots past
       them hold whatever the caller left there, and the original and the port
       are free to differ in that dead space. */
    int used = 0;
    for (const char *p = fmt; p[0] && p[1]; p++)
        if (p[0] == '/' && strchr("iuxXlLfbchsI", p[1])) { used++; p++; }
    printf("%d \"%s\" flags %02x rgb %.4f %.4f %.4f a %.4f used %d",
           calls, fmt, flags_word, c0, c1, c2, c3, used);
    if (used > 0) printf(" arg0 %u", arg0);
    if (used > 1) printf(" arg1 %u", arg1);
    printf("\n");
    fflush(stdout);
    calls++;
}

/* Saves the volatile registers, records the caller's stack words, restores. */
__attribute__((naked)) void recorder(void)
{
    __asm__("pushfq");
    __asm__("pushq %rax");
    __asm__("pushq %rcx");
    __asm__("pushq %rdx");
    __asm__("pushq %rsi");
    __asm__("pushq %rdi");
    __asm__("pushq %r8");
    __asm__("pushq %r9");
    __asm__("pushq %r10");
    __asm__("pushq %r11");
    __asm__("subq $0x108, %rsp");
    /* 10 pushes (0x50) + 0x108 + return address (8): the caller's rsp+0x20 is
       at rsp+0x180. */
    __asm__("movl 0x180(%rsp), %eax");
    __asm__("movl %eax, flags_word(%rip)");
    __asm__("movl 0x188(%rsp), %eax");
    __asm__("movl %eax, colour+0(%rip)");
    __asm__("movl 0x190(%rsp), %eax");
    __asm__("movl %eax, colour+4(%rip)");
    __asm__("movl 0x198(%rsp), %eax");
    __asm__("movl %eax, colour+8(%rip)");
    __asm__("movl 0x1a0(%rsp), %eax");
    __asm__("movl %eax, colour+12(%rip)");
    __asm__("movl 0x1a8(%rsp), %eax");
    __asm__("movl %eax, arg0(%rip)");
    __asm__("movl 0x1b0(%rsp), %eax");
    __asm__("movl %eax, arg1(%rip)");
    __asm__("movq %rcx, fmt(%rip)");
    __asm__("call report");
    __asm__("addq $0x108, %rsp");
    __asm__("popq %r11");
    __asm__("popq %r10");
    __asm__("popq %r9");
    __asm__("popq %r8");
    __asm__("popq %rdi");
    __asm__("popq %rsi");
    __asm__("popq %rdx");
    __asm__("popq %rcx");
    __asm__("popq %rax");
    __asm__("popfq");
    __asm__("ret");
}

#ifdef NC_CLIENT_WRAPPERS
/* The recompiled client's entry to the text layer. Its layout matches the
 * original's for every argument except the last: the original receives the
 * format's arguments in consecutive stack slots, the recompiled call receives
 * a pointer to them. Copy those slots into place, then jump to the recorded
 * original so both builds present the recorder with the same frame. */
__attribute__((naked)) void sr_text_draw_recovered(void)
{
    __asm__("movq 0x50(%rsp), %rax");      /* the argument-slot pointer */
    __asm__("testq %rax, %rax");
    __asm__("jz 1f");
    __asm__("movq 0(%rax), %rdx");
    __asm__("movq %rdx, 0x50(%rsp)");
    __asm__("movq 8(%rax), %rdx");
    __asm__("movq %rdx, 0x58(%rsp)");
    __asm__("1:");
    __asm__("movq text_draw_target(%rip), %rax");
    __asm__("jmp *%rax");
}
void *text_draw_target;

/* client_ui.c's float/bit helpers, which the wrappers call. */
unsigned sr_text_float_bits(float value) { unsigned bits; memcpy(&bits, &value, 4); return bits; }
/* The recompiled client's per-row icon draw, replaced by the same no-op the
 * native build is given at that address, so neither build runs it. */
long long sr_CSDrawAtlasEntry(int a, int b, float c, float d, float e, float f,
                              char g, int h, int i, int j, int k)
{
    (void)a; (void)b; (void)c; (void)d; (void)e; (void)f;
    (void)g; (void)h; (void)i; (void)j; (void)k;
    return 0;
}
float sr_text_bits_float(unsigned bits) { float value; memcpy(&value, &bits, 4); return value; }
#endif

void noop(void) { }

/* The original's sprintf (0x140158AB0) is its own CRT; calling it without
 * that runtime's initialisation faults. Both builds get this stand-in, so the
 * formatted text is out of scope here (the arguments are recorded separately)
 * and only the colour, flags and argument slots are compared. */
int sprintf_stub(char *out, const char *format, ...)
{
    (void)format;
    strcpy(out, "12-3456");
    return 7;
}


/* The originals reach a few Windows imports on their fallback paths; a harness
   with no window to talk to answers them with a stand-in. */
unsigned long stub_last_error(void) { return 0; }

int main(void)
{
    nc_bind_import("KERNEL32.dll", "GetLastError", (void *)stub_last_error);
    nc_map_image();
    nc_redirect(0x14006D930, (void *)recorder);
    nc_redirect(0x140158AB0, (void *)sprintf_stub);
#ifdef NC_CLIENT_WRAPPERS
    text_draw_target = (void *)(uintptr_t)0x14006D930;
#endif
    for (int t = 0; t < 3; t++) {
        float r = 0.125f * (float)(t + 1), g = 0.25f * (float)(t + 1), b = 0.5f * (float)(t + 1);
        memcpy(&SR_GLOBAL(uint32_t, 0x1402B2830ULL + 12ULL * t), &r, 4);
        memcpy(&SR_GLOBAL(uint32_t, 0x1402B2834ULL + 12ULL * t), &g, 4);
        memcpy(&SR_GLOBAL(uint32_t, 0x1402B2838ULL + 12ULL * t), &b, 4);
    }
    printf("markers: team0 0.125/0.25/0.5  team1 0.25/0.5/1  team2 0.375/0.75/1.5\n");
    fflush(stdout);
    SR_GLOBAL(uint64_t, 0x140404050ULL) = (uint64_t)(uintptr_t)noop;   /* glBindTexture */
    nc_redirect(0x14006CFF0, (void *)noop);   /* textured rect */
    /* The sort is left running: the row loop walks the order it produces, so
       stubbing it would leave nothing to iterate. */
    nc_redirect(0x14006D300, (void *)noop);   /* atlas-entry draw */
    nc_redirect(0x140117820, (void *)noop);   /* click handling */
    SR_GLOBAL(int32_t, 0x183EBFAACULL) = 3;   /* game_type = round */
    SR_GLOBAL(int32_t, 0x183EBFCCCULL) = 3;   /* game_state = round over */
    SR_GLOBAL(int32_t, 0x183EBFCB0ULL) = 1;
    SR_GLOBAL(int32_t, 0x183EBFCC4ULL) = 5;   /* the round's last phase */
    SR_GLOBAL(int32_t, 0x19021F0CCULL) = 30;
    SR_GLOBAL(int32_t, 0x19021F0E4ULL) = 10;
    SR_GLOBAL(int32_t, 0x19021F0FCULL) = 5;
    SR_GLOBAL(int32_t, 0x183F7AE14ULL) = 7;
    SR_GLOBAL(int32_t, 0x183F7AE18ULL) = 3;
    /* Players, so the row loops run. */
    for (int player = 0; player < 6; player++) {
        unsigned char *record = &SR_GLOBAL(unsigned char, 0x151620C64ULL) + (size_t)0x3834 * player;
        int32_t active = 1, linked = 0, team = player % 3, cash = 100 + 7 * player;
        int32_t total = 1000 + 11 * player, dim = player & 1;
        memcpy(record - 0x4, &active, 4);
        memcpy(record + 0x2D14, &linked, 4);   /* the scan takes linked == 0 */
        memcpy(record + 0x80, &team, 4);
        int32_t badge = 12345;
        memcpy(record + 0x2C, &badge, 4);
        memcpy(record + 0x48, &cash, 4);
        memcpy(record + 0x60, &total, 4);
        memcpy(record + 0x44, &dim, 4);
        for (int k = 0; k < 8; k++) record[k] = (unsigned char)('A' + player);
        record[8] = 0;
    }
    /* Each corporation's share divisor, so the money readout runs. */
    for (int team = 0; team < 3; team++) {
        int32_t divisor = 2;
        memcpy(&SR_GLOBAL(int32_t, 0x19021F0CCULL + 24ULL * team + 4), &divisor, 4);
    }
    recording = 1;
    printf("--- 0x140089430\n"); fflush(stdout);
    screen1();
    calls = 0;
    printf("--- 0x14008A110\n"); fflush(stdout);
    screen2();
    calls = 0;
    printf("--- 0x14008B050\n"); fflush(stdout);
    screen3();
    printf("calls %d\n", calls);
    fflush(stdout);
    return 0;
}
