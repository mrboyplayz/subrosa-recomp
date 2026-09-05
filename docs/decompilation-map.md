# Client Decompilation Map

These names are analysis hypotheses retained from the local IDA database, not
recovered original symbols. Find a function by address in
`exports/client/manifest.json`, or search its name in `exports/client/subrosa.c`.
Individual files use a 16-digit address prefix followed by the sanitized name.

| Area | Address | Candidate name |
| --- | --- | --- |
| Application entry | `0x140001330` | `app_main_utf8_candidate` |
| Frame loop | `0x140096440` | `game_frame_update_candidate` |
| Camera/input state | `0x14009FE00` | `gameplay_mouse_camera_state_candidate` |
| Camera uniforms | `0x14014B2A0` | `render_cache_camera_uniforms_candidate` |
| Player profile | `0x1400EAA00` | `player_load_profile_config_candidate` |
| Event polling | `0x14007CC30` | `input_poll_events_candidate` |
| Keyboard state | `0x14007CA90` | `input_get_keyboard_state_candidate` |
| Relative mouse | `0x14007CBC0` | `input_get_relative_mouse_state_candidate` |
| HUD/menu prompt | `0x140086000` | `ui_draw_hud_menu_prompt_candidate` |
| Options menu | `0x1400FEB50` | `ui_build_options_menu_candidate` |
| UI base assets | `0x140078610` | `ui_load_base_assets_candidate` |
| Button | `0x14006F1F0` | `ui_button_candidate` |
| Text entry | `0x140070060` | `ui_text_entry_candidate` |
| Combo box | `0x14006F8D0` | `ui_combo_box_candidate` |
| Integer slider | `0x140071440` | `ui_int_slider_candidate` |
| Checkbox | `0x140071910` | `ui_checkbox_candidate` |
| Buildings | `0x140026830` | `asset_load_building_sbb_candidate` |
| Blocks | `0x1400E6E50` | `asset_load_block_sbl_candidate` |
| City loading | `0x1400D5A50` | `asset_load_city_sbc_candidate` |
| City saving | `0x1400D62A0` | `asset_save_city_sbc_candidate` |
| Character configuration | `0x1400E8580` | `asset_load_character_cmc_candidate` |
| Item sets | `0x14013EC80` | `asset_scan_itemsets_sis_candidate` |
| Vehicles | `0x140192EC0` | `asset_load_vehicle_sbv_candidate` |

These are navigation starting points, not complete subsystem boundaries. Follow
their calls and shared data references to recover the remaining behavior. The
dedicated-server binary has a different address map and is indexed separately.
