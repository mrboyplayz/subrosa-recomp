// NC_WRAPPERS: 140001000
#include "nc.h"
#include "startup.h"
#ifdef NC_NATIVE
#define CALL(address, name, signature, ...) ((uint64_t (*) signature)NC_ADDR(address))(__VA_ARGS__)
#else
#ifdef NC_CLIENT_WRAPPERS
__int64 sub_140001000(void);
int startup_clearerr_rewind(FILE *stream, int second);
#define startup_fatal_error sub_140001000
#endif
#define CALL(address, name, signature, ...) ((uint64_t)name(__VA_ARGS__))
#endif
/* The whole exe's import table lives in mapped image memory; the message box
   slot 0x14026E4D0 is overwritten with a recording stub in both builds. */
static uint32_t recorded_flags, recorded_window;
static const char *recorded_title, *recorded_text;
static int __stdcall message_box_stub(unsigned int flags, const char *title, const char *message, void *window)
{
    recorded_flags = flags;
    recorded_title = title;
    recorded_text = message;
    recorded_window = (uint32_t)(uintptr_t)window;
    return (int)nc_rand();
}
/* Recording stub for the stdio clear-error-and-rewind's CRT helpers: the
   state query's slot is overwritten so a stray call reports itself instead
   of faulting (the routine itself has no native suite, see main). */
static uint64_t recorded_clearerr_args;
static int recorded_state, recorded_putback;
static int putback_seen;
static void __cdecl clearerr_stub(FILE *stream, int second, unsigned int flag)
{
    recorded_clearerr_args = ((uint64_t)(uint32_t)flag << 32) | (uint32_t)second;
}
static int __cdecl state_stub(FILE *stream)
{
    return ((int (__cdecl *)(FILE *))NC_ADDR(0x14020BB2C))(stream);
}
static int __cdecl putback_stub(int value, FILE *stream)
{
    putback_seen = 1;
    recorded_putback = value;
    return ((int (__cdecl *)(int, FILE *))NC_ADDR(0x14020CFB8))(value, stream);
}
int main(void)
{
    /* The original's box is SDL's: the slot calls the import through the
       shared trampoline, so bind the import in both builds and let the same
       stub record the call. The arguments reach the stub unchanged. */
    nc_bind_import("SDL2.dll", "SDL_ShowSimpleMessageBox", message_box_stub);
    nc_map_image();
    nc_redirect(0x140198F95, message_box_stub);
    /* State the box call touches in the mapped image: the slot and the
     * recording side. */
    nc_save(NC_ADDR(0x14026E4D0), 8);
    int cases = nc_cases(400);
    for (int n = 0; n < cases; ++n) {
        recorded_flags = 0xDEADBEEF;
        recorded_window = 0xDEADBEEF;
        recorded_title = recorded_text = (const char *)0;
        uint64_t result = CALL(0x140001000, startup_fatal_error, (void), );
        nc_line("case %d result %016llx flags %08x window %08x title %s text %s",
                n, (unsigned long long)result, recorded_flags, recorded_window,
                recorded_title ? recorded_title : "(null)",
                recorded_text ? recorded_text : "(null)");
    }

    /* The stdio clear-error-and-rewind (0x1400012C0) has no native suite:
       its CRT helpers cannot run without full CRT initialization — the
       state query 0x14020BB2C enters the never-initialized SDL-owned lock
       0x1403022C0 and faults in the harness in both builds, and with the
       stream's lock taken the paired unlock walks the heap while the CRT
       lock count is disabled. The port is a straight pass-through to the
       same three helpers the original reaches. */
    return 0;
}
