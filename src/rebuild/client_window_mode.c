#include <windows.h>
#include <stdio.h>
#include <wchar.h>
#include "client_window_mode.h"

typedef struct { int x, y, w, h; } sr_display_rect;
extern int SDL_GetWindowDisplayIndex(void *);
extern int SDL_GetDisplayBounds(int, sr_display_rect *);
extern void SDL_GetWindowPosition(void *, int *, int *);
extern void SDL_GetWindowSize(void *, int *, int *);
extern void SDL_SetWindowPosition(void *, int, int);
extern void SDL_SetWindowSize(void *, int, int);
extern void SDL_SetWindowBordered(void *, int);
extern void SDL_SetWindowResizable(void *, int);
extern int SDL_SetWindowFullscreen(void *, unsigned);
extern int SDL_SetHintWithPriority(const char *, const char *, int);

enum { SDL_WINDOW_FULLSCREEN = 0x1u, SDL_WINDOW_FULLSCREEN_DESKTOP = 0x1001u };
enum { SDL_HINT_OVERRIDE = 2 };

unsigned sr_recomp_window_mode = 1;
unsigned sr_borderless_selected = 1, sr_fullscreen_selected;
static unsigned sr_preferred_full_mode = 1;
static wchar_t sr_settings_path[MAX_PATH];
static void *sr_tracked_window;
static int sr_window_x = 16, sr_window_y = 16;
static int sr_window_w = 1280, sr_window_h = 720;
static unsigned sr_applied_mode;

void sr_recomp_window_load(void)
{
    SDL_SetHintWithPriority("SDL_VIDEO_MINIMIZE_ON_FOCUS_LOSS", "0", SDL_HINT_OVERRIDE);
    DWORD n = GetModuleFileNameW(NULL, sr_settings_path, MAX_PATH);
    if (!n || n >= MAX_PATH) { sr_settings_path[0] = 0; return; }
    wchar_t *slash = wcsrchr(sr_settings_path, L'\\');
    if (!slash || (size_t)(slash - sr_settings_path) + 20 >= MAX_PATH) {
        sr_settings_path[0] = 0; return;
    }
    wcscpy(slash + 1, L"recomp-window.ini");
    unsigned mode = GetPrivateProfileIntW(L"Window", L"Mode", 1, sr_settings_path);
    sr_recomp_window_mode = mode <= 2 ? mode : 1;
    unsigned preferred = GetPrivateProfileIntW(L"Window", L"FullscreenMode", 1, sr_settings_path);
    sr_preferred_full_mode = preferred == 2 ? 2 : 1;
    if (sr_recomp_window_mode) sr_preferred_full_mode = sr_recomp_window_mode;
}

int sr_recomp_window_set(void *window, unsigned mode, int save)
{
    sr_display_rect bounds;
    if (!window || mode > 2) return -1;
    int display = SDL_GetWindowDisplayIndex(window);
    if (display < 0 || SDL_GetDisplayBounds(display, &bounds) || bounds.w <= 0 || bounds.h <= 0)
        return -1;
    if (sr_tracked_window != window) {
        sr_tracked_window = window;
        sr_applied_mode = 0;
        SDL_GetWindowPosition(window, &sr_window_x, &sr_window_y);
        SDL_GetWindowSize(window, &sr_window_w, &sr_window_h);
        /* Keep the normal window's title bar and edges reachable on return. */
        if (sr_window_w > bounds.w * 3 / 4) sr_window_w = bounds.w * 3 / 4;
        if (sr_window_h > bounds.h * 3 / 4) sr_window_h = bounds.h * 3 / 4;
    } else if (!sr_applied_mode && mode) {
        SDL_GetWindowPosition(window, &sr_window_x, &sr_window_y);
        SDL_GetWindowSize(window, &sr_window_w, &sr_window_h);
    }
    SDL_SetHintWithPriority("SDL_VIDEO_MINIMIZE_ON_FOCUS_LOSS", mode == 2 ? "1" : "0", SDL_HINT_OVERRIDE);
    /* Let SDL manage desktop sizing and restoration, as in the supplied example. */
    unsigned fullscreen_flags = mode == 1 ? SDL_WINDOW_FULLSCREEN_DESKTOP :
                                mode == 2 ? SDL_WINDOW_FULLSCREEN : 0;
    if (SDL_SetWindowFullscreen(window, fullscreen_flags)) return -1;
    if (mode == 0) {
        SDL_SetWindowBordered(window, 1);
        SDL_SetWindowResizable(window, 1);
        SDL_SetWindowPosition(window, sr_window_x, sr_window_y);
        SDL_SetWindowSize(window, sr_window_w, sr_window_h);
    }
    sr_applied_mode = sr_recomp_window_mode = mode;
    sr_borderless_selected = mode == 1;
    sr_fullscreen_selected = mode == 2;
    if (mode) sr_preferred_full_mode = mode;
    if (save && sr_settings_path[0]) {
        wchar_t value[2] = { (wchar_t)(L'0' + mode), 0 };
        WritePrivateProfileStringW(L"Window", L"Mode", value, sr_settings_path);
        value[0] = (wchar_t)(L'0' + sr_preferred_full_mode);
        WritePrivateProfileStringW(L"Window", L"FullscreenMode", value, sr_settings_path);
    }
    return 0;
}

int sr_recomp_window_toggle(void *window, unsigned fullscreen_flags)
{
    return sr_recomp_window_set(window, fullscreen_flags ? sr_preferred_full_mode : 0, 1);
}
