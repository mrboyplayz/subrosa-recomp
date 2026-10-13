/* Practice-only death controls. Server-owned spawning is unchanged. */
#include "frame.h"
#include "human.h"
#include <string.h>

extern int sr_DrawMenuButton(const char *label);
extern int sub_140053840(float *position, float *rotation, int player);
extern int SDL_SetRelativeMouseMode(int enabled);
#define word(i) dword_140404A6C[i]
#define scalar(i) (*(float *)&word(i))
#define menu_open word(280649838)
#define camera_subject word(284021982)
#define death_camera_ticks word(284021983)
static int death_menu_active, free_camera;
static float spawn_position[3];
static int spawn_position_valid;

void practice_remember_spawn(const float position[3])
{
    memcpy(spawn_position, position, sizeof(spawn_position));
    spawn_position_valid = 1;
    death_menu_active = free_camera = 0;
}

int practice_player_dead(void)
{
    if (!game_connected || game_type != 0 || replay_active || !word(283831309) ||
        local_player < 0 || local_player >= PLAYER_CAPACITY || !player_active(local_player)) return 0;
    int human = player_human(local_player);
    return human < 0 || human >= 256 || !world_humans[human].active || world_humans[human].unknown_3c <= 0;
}

static int practice_respawn(void)
{
    float position[3], rotation[9] = {1,0,0, 0,1,0, 0,0,1};
    memcpy(position, spawn_position_valid ? spawn_position : (float *)&word(179992855), sizeof(position));
    int human = sub_140053840(position, rotation, local_player);
    if (human < 0 || human >= 256) return 0;
    player_human(local_player) = human;
    /* The Practice spawner copies these appearance fields after creating a human. */
    word(7166 * human + 280658445) = word(3597 * local_player + 71859821);
    word(7166 * human + 280658446) = word(3597 * local_player + 71859822);
    word(7166 * human + 280658447) = word(3597 * local_player + 71859823);
    word(7166 * human + 280658449) = word(3597 * local_player + 71859826);
    camera_subject = human;
    death_camera_ticks = 180;
    menu_open = word(283831311) = 0;
    free_camera = death_menu_active = 0;
    SDL_SetRelativeMouseMode(1);
    return 1;
}

int practice_death_menu(void)
{
    const unsigned char *keys = (void *)&word(284024765);
    const unsigned char *previous = (void *)&word(284024637);
    if (!practice_player_dead()) { death_menu_active = free_camera = 0; return 0; }
    if (!death_menu_active) {
        death_menu_active = 1;
        menu_open = 1;
        SDL_SetRelativeMouseMode(0);
        memcpy(&word(284024388), &word(284024502), 3 * sizeof(float));
        scalar(284024393) = scalar(284024394) = 0.0f;
    }
    if (keys[21] && !previous[21]) { practice_respawn(); return 1; } /* R */
    if (keys[30] && !previous[30]) free_camera = 1; /* 1 */
    if (!free_camera) {
        scalar(70087067) = 392.0f; scalar(70087068) = 250.0f;
        scalar(70087069) = 240.0f; scalar(70087070) = 32.0f;
        word(70087074) = 41; word(70087076) = 0;
        if (sr_DrawMenuButton("Respawn")) { practice_respawn(); return 1; }
        scalar(70087068) = 290.0f;
        if (sr_DrawMenuButton("Freecam")) free_camera = 1;
    }
    if (free_camera) {
        camera_subject = (unsigned)-1;
        death_camera_ticks = 0;
        menu_open = 0;
        SDL_SetRelativeMouseMode(1);
    }
    return 1;
}
