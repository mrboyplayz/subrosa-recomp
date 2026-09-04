#ifndef SR_RUNTIME_H
#define SR_RUNTIME_H

#include <stdint.h>

typedef struct SrVec2 {
    float x;
    float y;
} SrVec2;

typedef struct SrVec3 {
    float x;
    float y;
    float z;
} SrVec3;

typedef struct SrMat4 {
    float m[16];
} SrMat4;

typedef struct SrInputSnapshot {
    uint8_t keyboard[323];
    int mouse_x;
    int mouse_y;
    int relative_x;
    int relative_y;
    uint32_t mouse_buttons;
    int wheel_delta;
} SrInputSnapshot;

typedef struct SrCameraUniforms {
    int clipplane;
    int ooresolution;
    int viewposition;
    int viewdirection;
    int lightdirection;
    int modelviewprojectionmatrix;
    int viewmatrix;
    int projectionmatrix;
    int modelviewmatrix;
} SrCameraUniforms;

typedef struct SrCameraState {
    SrVec3 position;
    SrVec3 direction;
    SrVec3 light_direction;
    SrMat4 view;
    SrMat4 projection;
    SrMat4 modelview;
    SrMat4 modelviewprojection;
    SrVec2 inverse_resolution;
} SrCameraState;

typedef struct SrPlayerProfile {
    int gender;
    int head;
    int skin_color;
    int hair_color;
    int hairstyle;
    int eye_color;
    int invert_mouse;
    int advanced_inventory;
    int max_players;
} SrPlayerProfile;

typedef enum SrMenuPage {
    SR_MENU_GAME = 0,
    SR_MENU_PLAYERS = 1,
    SR_MENU_ADMIN = 2,
    SR_MENU_OPTIONS = 3
} SrMenuPage;

typedef struct SrUiState {
    SrMenuPage page;
    int fullscreen;
    int vsync;
    int frame_smoothing;
    int sprite_models;
    int sound_volume;
    int selected_audio_output;
    int selected_audio_input;
} SrUiState;

void sr_input_snapshot_clear(SrInputSnapshot *input);
void sr_player_profile_defaults(SrPlayerProfile *profile);
void sr_ui_state_defaults(SrUiState *ui);
void sr_camera_state_set_resolution(SrCameraState *camera, int width, int height);
void sr_camera_uniforms_invalidate(SrCameraUniforms *uniforms);

#endif
