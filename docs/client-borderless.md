# Recomp borderless mode

The recomp defaults to a borderless desktop window. Options now has separate
Borderless and Fullscreen checkboxes; selecting either deselects the other.
Clearing the active checkbox returns to a normal window. Alt+Enter switches
between the normal window and the last selected desktop mode.

Following the user's supplied SDL example, Borderless now calls
`SDL_SetWindowFullscreen(window, SDL_WINDOW_FULLSCREEN_DESKTOP)` (`0x1001`).
SDL takes the desktop dimensions without selecting an exclusive display mode.
Fullscreen uses `SDL_WINDOW_FULLSCREEN` (`0x1`). Windowed calls the same API
with `0` and restores the normal window's position and dimensions.
The native resize events continue to update the viewport and render state.

Borderless explicitly sets `SDL_VIDEO_MINIMIZE_ON_FOCUS_LOSS` to `0` with
override priority, including before initial window creation. Exclusive fullscreen
sets it to `1`. This keeps the borderless window from minimizing just because
another application receives keyboard focus.

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
