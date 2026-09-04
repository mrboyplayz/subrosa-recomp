#include "sr_runtime.h"

#include <string.h>

void sr_input_snapshot_clear(SrInputSnapshot *input) {
    memset(input, 0, sizeof(*input));
}

void sr_player_profile_defaults(SrPlayerProfile *profile) {
    memset(profile, 0, sizeof(*profile));
    profile->gender = 0;
    profile->head = 0;
    profile->skin_color = 0;
    profile->hair_color = 0;
    profile->hairstyle = 0;
    profile->eye_color = 0;
    profile->invert_mouse = 0;
    profile->advanced_inventory = 0;
    profile->max_players = 32;
}

void sr_ui_state_defaults(SrUiState *ui) {
    memset(ui, 0, sizeof(*ui));
    ui->page = SR_MENU_GAME;
    ui->fullscreen = 0;
    ui->vsync = 1;
    ui->frame_smoothing = 0;
    ui->sprite_models = 1;
    ui->sound_volume = 100;
    ui->selected_audio_output = 0;
    ui->selected_audio_input = 0;
}

void sr_camera_state_set_resolution(SrCameraState *camera, int width, int height) {
    camera->inverse_resolution.x = width > 0 ? 1.0f / (float)width : 0.0f;
    camera->inverse_resolution.y = height > 0 ? 1.0f / (float)height : 0.0f;
}

void sr_camera_uniforms_invalidate(SrCameraUniforms *uniforms) {
    int *slots = (int *)uniforms;
    size_t count = sizeof(*uniforms) / sizeof(*slots);
    for (size_t i = 0; i < count; i++) {
        slots[i] = -1;
    }
}
