/* Use the host CRT and Win32 directly, independently of reconstructed imports. */
#ifndef SR_CLIENT_DEBUG_CONSOLE
#define SR_CLIENT_DEBUG_CONSOLE
#endif
#include "client_debug_console.h"
#include <windows.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

static CRITICAL_SECTION sr_debug_lock;
static HANDLE sr_debug_output, sr_debug_file = INVALID_HANDLE_VALUE;
static HANDLE sr_debug_stop_event, sr_debug_worker;
static ULONGLONG sr_debug_started, sr_debug_stage_started;
static const char *sr_debug_current_stage = "Starting Recomp";
static unsigned long sr_debug_ticks, sr_debug_completed;
static LONG sr_debug_ready, sr_debug_exception_seen;
static LONG sr_debug_bad_body_seen;
static PVOID sr_debug_exception_handler;

static void sr_debug_write(const char *message)
{
    char line[2048];
    DWORD written;
    ULONGLONG elapsed = GetTickCount64() - sr_debug_started;
    int length = snprintf(line, sizeof line, "[%6llu.%03llu] [thread %lu] %s\r\n",
        (unsigned long long)(elapsed / 1000),
        (unsigned long long)(elapsed % 1000), GetCurrentThreadId(), message);
    if (length < 0) return;
    if ((size_t)length >= sizeof line) length = sizeof line - 1;
    if (sr_debug_output && sr_debug_output != INVALID_HANDLE_VALUE)
        WriteFile(sr_debug_output, line, (DWORD)length, &written, NULL);
    if (sr_debug_file != INVALID_HANDLE_VALUE)
        WriteFile(sr_debug_file, line, (DWORD)length, &written, NULL);
}

void sr_debug_log(const char *format, ...)
{
    char message[1536];
    va_list arguments;
    if (!InterlockedCompareExchange(&sr_debug_ready, 0, 0)) return;
    va_start(arguments, format);
    vsnprintf(message, sizeof message, format, arguments);
    va_end(arguments);
    message[sizeof message - 1] = 0;
    EnterCriticalSection(&sr_debug_lock);
    sr_debug_write(message);
    LeaveCriticalSection(&sr_debug_lock);
}

void sr_debug_stage(const char *stage)
{
    if (!InterlockedCompareExchange(&sr_debug_ready, 0, 0)) return;
    EnterCriticalSection(&sr_debug_lock);
    sr_debug_current_stage = stage; /* All callers supply string literals. */
    sr_debug_stage_started = GetTickCount64();
    sr_debug_write(stage);
    LeaveCriticalSection(&sr_debug_lock);
}

void sr_debug_tick_stage(const char *stage)
{
    if (!InterlockedCompareExchange(&sr_debug_ready, 0, 0)) return;
    EnterCriticalSection(&sr_debug_lock);
    sr_debug_current_stage = stage;
    sr_debug_stage_started = GetTickCount64();
    if (sr_debug_ticks <= 4) sr_debug_write(stage);
    LeaveCriticalSection(&sr_debug_lock);
}

void sr_debug_tick_begin(void)
{
    if (!InterlockedCompareExchange(&sr_debug_ready, 0, 0)) return;
    EnterCriticalSection(&sr_debug_lock);
    ++sr_debug_ticks;
    LeaveCriticalSection(&sr_debug_lock);
    if (sr_debug_ticks <= 4 || sr_debug_ticks % 300 == 0)
        sr_debug_log("Simulation tick %lu beginning (%lu completed)",
            sr_debug_ticks, sr_debug_completed);
    sr_debug_tick_stage("Physics: integrate body positions and rotations (0x116210)");
}

void sr_debug_tick_end(void)
{
    if (!InterlockedCompareExchange(&sr_debug_ready, 0, 0)) return;
    EnterCriticalSection(&sr_debug_lock);
    ++sr_debug_completed;
    LeaveCriticalSection(&sr_debug_lock);
    if (sr_debug_completed <= 4 || sr_debug_completed % 300 == 0)
        sr_debug_log("Physics tick %lu completed", sr_debug_completed);
    sr_debug_tick_stage("Simulation: remaining tick work / world rendering");
}

void sr_debug_check_bodies(const unsigned int *bodies, unsigned int count, const char *where)
{
    unsigned int active = 0;
    if (!InterlockedCompareExchange(&sr_debug_ready, 0, 0) ||
            sr_debug_bad_body_seen || sr_debug_ticks > 4) return;
    for (unsigned int body = 0; body < count; ++body) {
        const unsigned int *record = bodies + 47 * body;
        if (!record[0]) continue;
        ++active;
        for (unsigned int field = 6; field < 30; ++field) {
            if (field >= 24 && field < 27) continue;
            if ((record[field] & 0x7f800000u) != 0x7f800000u) continue;
            sr_debug_bad_body_seen = 1;
            sr_debug_log("INVALID PHYSICS: body %u, %s word %u = 0x%08x (NaN/infinity), %s, tick %lu",
                body, field < 9 ? "position" : field < 12 ? "velocity" :
                field < 15 ? "velocity delta" : field < 24 ? "rotation" : "angular velocity", field,
                record[field], where, sr_debug_ticks);
            sr_debug_log("This value was only observed; simulation state was not changed.");
            return;
        }
    }
    if (sr_debug_ticks <= 1) sr_debug_log("Body check: %u active bodies have finite transforms/velocities, %s", active, where);
}

static DWORD WINAPI sr_debug_watchdog(LPVOID unused)
{
    (void)unused;
    while (WaitForSingleObject(sr_debug_stop_event, 5000) == WAIT_TIMEOUT) {
        char message[1024];
        EnterCriticalSection(&sr_debug_lock);
        snprintf(message, sizeof message,
            "STATUS: %s | in this step %.1fs | physics ticks %lu started, %lu completed",
            sr_debug_current_stage,
            (double)(GetTickCount64() - sr_debug_stage_started) / 1000.0,
            sr_debug_ticks, sr_debug_completed);
        sr_debug_write(message);
        LeaveCriticalSection(&sr_debug_lock);
    }
    return 0;
}

static void sr_debug_address(const char *label, const void *address)
{
    HMODULE module;
    char path[MAX_PATH];
    if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
            GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            (LPCSTR)address, &module) && GetModuleFileNameA(module, path, sizeof path)) {
        sr_debug_log("%s %p (%s + 0x%llx)", label, address, path,
            (unsigned long long)((uintptr_t)address - (uintptr_t)module));
    } else sr_debug_log("%s %p", label, address);
}

static LONG CALLBACK sr_debug_exception(EXCEPTION_POINTERS *exception)
{
    DWORD code = exception->ExceptionRecord->ExceptionCode;
    void *frames[24];
    unsigned short count;
    /* Debugger traps, C++ exceptions and other first-chance notifications are
       not crashes. Observe hardware failures and let normal handling proceed. */
    if (code != EXCEPTION_ACCESS_VIOLATION && code != EXCEPTION_IN_PAGE_ERROR &&
        code != EXCEPTION_ILLEGAL_INSTRUCTION && code != EXCEPTION_INT_DIVIDE_BY_ZERO &&
        code != EXCEPTION_FLT_DIVIDE_BY_ZERO)
        return EXCEPTION_CONTINUE_SEARCH;
    if (InterlockedCompareExchange(&sr_debug_exception_seen, 1, 0))
        return EXCEPTION_CONTINUE_SEARCH;
    /* Avoid waiting on another thread's logger lock during an exception. */
    if (!TryEnterCriticalSection(&sr_debug_lock)) return EXCEPTION_CONTINUE_SEARCH;
    sr_debug_log("EXCEPTION 0x%08lx during: %s (physics %lu started, %lu completed)",
        code, sr_debug_current_stage, sr_debug_ticks, sr_debug_completed);
    sr_debug_address("Fault instruction:", exception->ExceptionRecord->ExceptionAddress);
    if ((code == EXCEPTION_ACCESS_VIOLATION || code == EXCEPTION_IN_PAGE_ERROR) &&
        exception->ExceptionRecord->NumberParameters >= 2)
        sr_debug_log("Memory operation %llu (0=read, 1=write, 8=execute), address %p",
            (unsigned long long)exception->ExceptionRecord->ExceptionInformation[0],
            (void *)exception->ExceptionRecord->ExceptionInformation[1]);
    count = CaptureStackBackTrace(0, 24, frames, NULL);
    for (unsigned short i = 0; i < count; ++i)
        sr_debug_address("Stack:", frames[i]);
    if (sr_debug_file != INVALID_HANDLE_VALUE) FlushFileBuffers(sr_debug_file);
    LeaveCriticalSection(&sr_debug_lock);
    return EXCEPTION_CONTINUE_SEARCH;
}

void sr_debug_console_start(void)
{
    char path[MAX_PATH], executable[MAX_PATH];
    InitializeCriticalSection(&sr_debug_lock);
    sr_debug_started = sr_debug_stage_started = GetTickCount64();
    if (!GetConsoleWindow()) AllocConsole();
    SetConsoleTitleA("Sub Rosa Recomp - Debug Console");
    /* A debugger/launcher may leave stdout redirected even after AllocConsole. */
    sr_debug_output = CreateFileA("CONOUT$", GENERIC_READ | GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
    if (sr_debug_output == INVALID_HANDLE_VALUE)
        sr_debug_output = GetStdHandle(STD_OUTPUT_HANDLE);
    sr_debug_file = CreateFileA("subrosa-recomp-debug.log", GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, NULL,
        CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    sr_debug_stop_event = CreateEventA(NULL, TRUE, FALSE, NULL);
    InterlockedExchange(&sr_debug_ready, 1);
    sr_debug_log("Sub Rosa Recomp diagnostics started. Times are seconds since launch.");
    if (GetModuleFileNameA(NULL, executable, sizeof executable))
        sr_debug_log("Executable: %s", executable);
    if (sr_debug_file != INVALID_HANDLE_VALUE &&
            GetFullPathNameA("subrosa-recomp-debug.log", sizeof path, path, NULL))
        sr_debug_log("Log file: %s (replaced each launch)", path);
    else if (sr_debug_file == INVALID_HANDLE_VALUE)
        sr_debug_log("Could not open the log file; console output is still available.");
    sr_debug_exception_handler = AddVectoredExceptionHandler(1, sr_debug_exception);
    if (sr_debug_stop_event)
        sr_debug_worker = CreateThread(NULL, 0, sr_debug_watchdog, NULL, 0, NULL);
    if (!sr_debug_worker) sr_debug_log("Periodic status thread unavailable.");
}

void sr_debug_console_stop(unsigned long result)
{
    if (!InterlockedCompareExchange(&sr_debug_ready, 0, 0)) return;
    sr_debug_log("Recomp returned with exit code %lu. Last step: %s", result,
        sr_debug_current_stage);
    if (sr_debug_stop_event) SetEvent(sr_debug_stop_event);
    if (sr_debug_worker) WaitForSingleObject(sr_debug_worker, INFINITE);
    if (sr_debug_exception_handler) RemoveVectoredExceptionHandler(sr_debug_exception_handler);
    InterlockedExchange(&sr_debug_ready, 0);
    if (sr_debug_file != INVALID_HANDLE_VALUE) {
        FlushFileBuffers(sr_debug_file);
        CloseHandle(sr_debug_file);
    }
    if (sr_debug_worker) CloseHandle(sr_debug_worker);
    if (sr_debug_stop_event) CloseHandle(sr_debug_stop_event);
    /* Keep the console attached until process exit. */
}

/* Test aid: SUBROSA_AUTOSTART=practice presses the named menu button once, 30 frames in and not
   before SUBROSA_AUTOSTART_AFTER_MS milliseconds (the menu ignores the press until Steam has answered). */
int sr_debug_autostart(const char *what)
{
    static int calls, done;
    static DWORD first;
    const char *wanted = getenv("SUBROSA_AUTOSTART"), *after = getenv("SUBROSA_AUTOSTART_AFTER_MS");
    if (done || !wanted || _stricmp(wanted, what)) return 0;
    if (!first) first = GetTickCount() | 1;
    if (++calls < 30) return 0;
    if (after && GetTickCount() - first < (DWORD)atoi(after)) return 0;
    done = 1;
    sr_debug_log("Autostart: %s", what);
    return 1;
}

/* Game mode asked for by SUBROSA_AUTOSTART=world or round (4 or 3), until it has been started. */
int sr_debug_autostart_mode(void)
{
    static int mode = -1;
    if (mode < 0) {
        const char *wanted = getenv("SUBROSA_AUTOSTART");
        mode = !wanted ? 0 : !_stricmp(wanted, "world") ? 4 : !_stricmp(wanted, "round") ? 3 : 0;
    }
    return mode;
}

/* Test aid: SUBROSA_FRAME_DUMP=<folder> saves the back buffer as frame_NNNNN.bmp before
   every SUBROSA_FRAME_DUMP_EVERY-th swap (default 300). Reads pixels only. */
void sr_debug_frame(void)
{
    static int state, every = 300;
    static unsigned long frame;
    static char folder[MAX_PATH];
    static void (APIENTRY *read_pixels)(int, int, int, int, unsigned, unsigned, void *);
    static void (APIENTRY *get_integer)(unsigned, int *);
    static void (APIENTRY *pixel_store)(unsigned, int);
    static void (APIENTRY *read_buffer)(unsigned);
    int viewport[4] = {0}, alignment = 4;
    char path[MAX_PATH + 32];
    if (!state) {
        const char *value = getenv("SUBROSA_FRAME_DUMP"), *step = getenv("SUBROSA_FRAME_DUMP_EVERY");
        HMODULE gl = GetModuleHandleA("opengl32.dll");
        state = -1;
        if (!value || !*value || !gl) { if (value) sr_debug_log("Frame dump: opengl32 not loaded"); return; }
        snprintf(folder, sizeof folder, "%s", value);
        if (step && atoi(step) > 0) every = atoi(step);
        read_pixels = (void *)GetProcAddress(gl, "glReadPixels");
        get_integer = (void *)GetProcAddress(gl, "glGetIntegerv");
        pixel_store = (void *)GetProcAddress(gl, "glPixelStorei");
        read_buffer = (void *)GetProcAddress(gl, "glReadBuffer");
        if (read_pixels && get_integer && pixel_store && read_buffer) state = 1;
        sr_debug_log("Frame dump: folder=%s every=%d gl=%p ready=%d", folder, every, (void *)gl, state);
    }
    if (state < 0 || ++frame % (unsigned long)every) return;
    get_integer(0x0BA2, viewport);
    if (viewport[2] <= 0 || viewport[3] <= 0 || viewport[2] > 8192 || viewport[3] > 8192) return;
    size_t size = (size_t)viewport[2] * viewport[3] * 4;
    unsigned char *pixels = malloc(size);
    if (!pixels) return;
    get_integer(0x0D05, &alignment);
    pixel_store(0x0D05, 4);
    read_buffer(0x0405);
    read_pixels(0, 0, viewport[2], viewport[3], 0x80E1, 0x1401, pixels);
    pixel_store(0x0D05, alignment);
    snprintf(path, sizeof path, "%s/frame_%05lu.bmp", folder, frame / every);
    FILE *file = fopen(path, "wb");
    if (!file && frame / every < 3) sr_debug_log("Frame dump: cannot write %s", path);
    if (file) {
        BITMAPFILEHEADER head = {0};
        BITMAPINFOHEADER info = {0};
        head.bfType = 0x4D42;
        head.bfOffBits = sizeof head + sizeof info;
        head.bfSize = head.bfOffBits + (DWORD)size;
        info.biSize = sizeof info;
        info.biWidth = viewport[2];
        info.biHeight = viewport[3];
        info.biPlanes = 1;
        info.biBitCount = 32;
        info.biSizeImage = (DWORD)size;
        fwrite(&head, sizeof head, 1, file);
        fwrite(&info, sizeof info, 1, file);
        fwrite(pixels, size, 1, file);
        fclose(file);
    }
    free(pixels);
}
