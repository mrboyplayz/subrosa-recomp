# Recomp borderless mode

The recomp defaults to a borderless desktop window. Options now has separate
Borderless and Fullscreen checkboxes; selecting either deselects the other.
Clearing the active checkbox returns to a normal window. Alt+Enter switches
between the normal window and the last selected desktop mode.

Borderless is an ordinary window without a frame, placed at the display's origin and sized to the
display (2026-10-08). It no longer calls `SDL_SetWindowFullscreen(window, SDL_WINDOW_FULLSCREEN_DESKTOP)`:
with OpenGL the driver presents SDL's "fullscreen desktop" window exclusively, so Borderless behaved like
real fullscreen (mode-switch flicker on Alt+Tab, other windows could not be drawn over it). The window is
one row taller than the display (1920x1081 on a 1080p screen); a frameless OpenGL window that matches the
display exactly gets the same exclusive treatment. The game's 16:9 fit still renders 1920x1080.
Fullscreen uses `SDL_WINDOW_FULLSCREEN` (`0x1`). Windowed clears SDL fullscreen and restores the normal
window's frame, position and dimensions. The native resize events continue to update the viewport.

The native code still turns a maximized window into the preferred desktop mode (window event 8 in the
event pump) and toggles on Alt+Enter; both go through `sr_recomp_window_toggle`.

Borderless explicitly sets `SDL_VIDEO_MINIMIZE_ON_FOCUS_LOSS` to `0` with
override priority, including before initial window creation. Exclusive fullscreen
sets it to `1`.

SDL references:
https://wiki.libsdl.org/SDL2/SDL_SetWindowFullscreen and
https://wiki.libsdl.org/SDL2/SDL_HINT_VIDEO_MINIMIZE_ON_FOCUS_LOSS.

Preferences are saved in `recomp-window.ini` beside the recomp EXE:

```ini
[Window]
Mode=1
FullscreenMode=1
```

Mode 0 is windowed, 1 is desktop borderless, and 2 is exclusive fullscreen. FullscreenMode retains
the Alt+Enter destination while Mode is 0. Missing or invalid settings default
to borderless. The original game's EXE and its configuration format are unchanged.

Implementation: `src/rebuild/client_window_mode.c`, its public header,
`scripts/extend_client_borderless.py`, the prepare hook, and the link dependency.
The extension runs after native SDL ABI repair and keeps the recovered startup
window helper intact. Checkbox values have persistent storage because the menu
renderer retains pointers to them after the Options builder returns.

Validation: `scripts/test_client_borderless.py` covers three display modes,
32 toggle cycles, SDL desktop versus exclusive flags, focus-loss hint policy,
a negative monitor origin, normal-window restoration, SDL failures,
invalid input, and actual INI persistence. Native event and startup fixtures
remain separate from the recomp-specific extension.
