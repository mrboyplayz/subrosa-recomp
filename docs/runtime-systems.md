# Runtime Systems Pass 1

Survey date: 2026-09-04

This pass covers camera/render uniforms, players/profile config, input, and UI/menu code.

## Frame Hub

`game_frame_update_candidate` at `0x140096440` is the current main frame hub.

Evidence:

- Called from `app_main_utf8_candidate`.
- Calls `input_poll_events_candidate`.
- Calls `render_cache_camera_uniforms_candidate`.
- Calls `ui_draw_hud_menu_prompt_candidate`.
- Calls `ui_build_options_menu_candidate`.
- Calls `gameplay_mouse_camera_state_candidate`.
- Contains strings such as `generating`, `connecting`, `client2.csk`, `Back`, `Female`, `Male`, `Head`, `Eyes`, `Hair`.

## Input

Candidate functions:

- `input_get_keyboard_state_candidate` at `0x14007CA90`
- `input_get_mouse_state_candidate` at `0x14007CB30`
- `input_get_relative_mouse_state_candidate` at `0x14007CBC0`
- `input_poll_events_candidate` at `0x14007CC30`

Recovered behavior:

- Keyboard snapshot copies `323` bytes from `SDL_GetKeyboardState(NULL)`.
- Event pump consumes `SDL_PollEvent`.
- Event pump tracks wheel delta from SDL event type `1027`.
- Key down/up events use SDL event types `768` and `769`.
- Alt+Enter toggles fullscreen through SDL window flags.
- Window events recalculate a centered 16:9 viewport area and mark resize state dirty.

## Camera And Rendering

Candidate function:

- `render_cache_camera_uniforms_candidate` at `0x14014B2A0`

Recovered behavior:

- Compiles/caches several GLSL programs.
- Resolves uniform slots for:
  - `clipplane`
  - `ooresolution`
  - `viewposition`
  - `viewdirection`
  - `flags`
  - `lightdirection`
  - `isreflection`
  - `planeposition`
  - `planenormal`
  - `modelviewprojectionmatrix`
  - `modelviewmatrix`
  - `projectionmatrix`
  - `viewmatrix`
  - texture samplers such as `tex_color`, `tex_shadowmap`, `tex_material`, `tex_cubemap`, `tex_atlas_color`, and `tex_atlas_material`
- Sets `ooresolution` to `1 / window_width` and `1 / window_height`.
- Binds sampler uniforms to texture units `0..5` depending on shader.

`gameplay_mouse_camera_state_candidate` at `0x14009FE00` is a likely gameplay/menu/camera input bridge. It calls `SDL_GetRelativeMouseState` and `SDL_SetRelativeMouseMode` and contains menu strings such as `Return to Game`, `Invite`, `Mute Player`, `Admin`, `Options`, and `Exit Game`.

## Player/Profile Config

Candidate function:

- `player_load_profile_config_candidate` at `0x1400EAA00`

Recovered behavior:

- Called from application startup.
- Reads or creates `config.txt`.
- Handles settings keys:
  - `screenwidth=`
  - `screenheight=`
  - `colordepth=`
  - `depthbits=`
  - `stencilbits=`
  - `fullscreen=`
  - `joystick=`
  - `invertmouse=`
  - `maxnumofplayers=`
  - `playergender=`
  - `playerhead=`
  - `playerskincolor=`
  - `playerhaircolor=`
  - `playerhairstyle=`
  - `playereyecolor=`

## UI

Candidate functions:

- `ui_button_candidate` at `0x14006F1F0`
- `ui_checkbox_candidate` at `0x140071910`
- `ui_int_slider_candidate` at `0x140071440`
- `ui_combo_box_candidate` at `0x14006F8D0`
- `ui_text_entry_candidate` at `0x140070060`
- `ui_load_base_assets_candidate` at `0x140078610`
- `ui_reload_mouse_texture_candidate` at `0x140079140`
- `ui_draw_hud_menu_prompt_candidate` at `0x140086000`
- `ui_build_options_menu_candidate` at `0x1400FEB50`

Recovered behavior:

- The UI is immediate-mode: each control hashes its label with CRC32 and allocates/reuses one of 1,024 widget slots.
- Widget records have a 488-byte stride in the original binary.
- Visible labels are copied until a null byte or `##`, matching common hidden-ID label behavior.
- The layout cursor advances by widget width/height plus `4.0` pixels after each control.
- Recovered widget type codes include:
  - button: `0`
  - checkbox: `1`
  - select/value setter: `2`
  - text entry: `5`
  - combo box: `10`
  - integer slider: `11`
- Base UI assets include `texture/mouse01.png`, `font/%s.ttf`, `font/%s.png`, and `font/%s.csv`.
- HUD/menu text includes phone dialing instructions, `Press Tab for Menu`, player list/menu strings, and cash/transaction messages.
- Options menu controls include:
  - `Back`
  - `Fullscreen`
  - `V-Sync`
  - `Frame Smoothing`
  - `Sprite Models`
  - `Invert Mouse`
  - `Use advanced inventory`
  - `Sound Volume`
  - `Audio Output`
  - `Audio Input`

## Recovered C

`src/sr_runtime.h` and `src/sr_runtime.c` contain initial clean-room structs and helpers for:

- input snapshots
- camera uniform slots
- camera state
- player profile settings
- UI option state

`src/sr_ui_original.h` and `src/sr_ui_original.c` contain a closer C reconstruction of the original immediate-mode UI widget system and the recovered options menu.

These are scaffolding for reconstructed runtime code, not raw Hex-Rays output.
