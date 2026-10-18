/* Standalone command/input regression test; no SDL or graphics context needed. */
#include <assert.h>
#include "../src/engine/spawn_console.c"

unsigned int dword_140404A6C[487416165];
static int item_calls, vehicle_calls, last_type, fail_spawn;
int64_t sr_CreateItem(int type, float *p, unsigned *v, float *r)
{ (void)p; (void)v; (void)r; ++item_calls; last_type = type; return fail_spawn ? -1 : 5; }
int64_t sr_CreateVehicle(int type, float *p, unsigned *v, unsigned *r, unsigned color)
{ (void)p; (void)v; (void)r; (void)color; ++vehicle_calls; last_type = type; return 6; }
void SDL_StartTextInput(void) {}
void SDL_StopTextInput(void) {}
static int mouse_relative = 1, mouse_cursor, mouse_grab = 1, mouse_capture = 1;
int SDL_SetRelativeMouseMode(int mode) { mouse_relative = mode; return 0; }
int SDL_GetRelativeMouseMode(void) { return mouse_relative; }
unsigned SDL_GetRelativeMouseState(int *x, int *y) { if (x) *x = 12; if (y) *y = -8; return 1; }
int SDL_ShowCursor(int show) { if (show >= 0) mouse_cursor = show; return mouse_cursor; }
int SDL_GetWindowGrab(void *window) { (void)window; return mouse_grab; }
void SDL_SetWindowGrab(void *window, int grab) { (void)window; mouse_grab = grab; }
int SDL_CaptureMouse(int capture) { mouse_capture = capture; return 0; }
void camera_begin_2d(void) {}
void renderer_draw_flat_rect(float x,float y,float w,float h,int f,float r,float g,float b,float a)
{ (void)x;(void)y;(void)w;(void)h;(void)f;(void)r;(void)g;(void)b;(void)a; }
void sr_text_draw_recovered(char *t,float x,float y,float s,unsigned f,float r,float g,float b,float a,const uint64_t *v)
{ (void)t;(void)x;(void)y;(void)s;(void)f;(void)r;(void)g;(void)b;(void)a;(void)v; }

static void run(const char *text) { snprintf(command, sizeof(command), "%s", text); execute(); }
static void key_event(unsigned key, int repeat)
{
    unsigned char event[56] = {0};
    unsigned type = 768;
    memcpy(event, &type, 4); memcpy(event + 16, &key, 4); event[13] = (unsigned char)repeat;
    spawn_console_event(event);
}

static int wheel_event(int delta, unsigned direction)
{
    unsigned char event[56] = {0};
    unsigned type = 1027;
    memcpy(event, &type, 4);
    memcpy(event + 20, &delta, 4);
    memcpy(event + 24, &direction, 4);
    return spawn_console_event(event);
}

int main(void)
{
    strcpy((char *)type_name(0, 3), "M-16");
    strcpy((char *)type_name(0, 4), "M-16 Magazine");
    strcpy((char *)type_name(0, 25), "Cell Phone");
    strcpy((char *)type_name(1, 0), "Town Car");
    assert(find_type(0, "phone") == 25);
    assert(find_type(0, "M16") == 3);
    assert(find_type(0, "m16_mag") == 4);
    assert(find_type(0, "-1") == -1);
    assert(find_type(0, "46") == -1);
    assert(find_type(1, "18") == -1);
    assert(find_type(0, "not-an-item") == -1);
    char long_name[128]; memset(long_name, 'a', 127); memcpy(long_name + 124, "mag", 4);
    assert(find_type(0, long_name) == -1);
    run("spawn item phone"); assert(!item_calls);
    game_running = game_connected = 1; local_player = 0;
    player_active(0) = 1; player_human(0) = 0;
    world_humans[0].active = 1; world_humans[0].unknown_3c = 100;
    run("spawn item phone"); assert(item_calls == 1 && last_type == 25);
    run("spawn item gun"); assert(item_calls == 2 && last_type == 3);
    run("spawn item mag"); assert(item_calls == 3 && last_type == 4);
    run("spawn car"); assert(vehicle_calls == 1 && last_type == 0);
    replay_active = 1; run("spawn item 3"); assert(item_calls == 3); replay_active = 0;
    game_connected = 0; run("spawn car"); assert(vehicle_calls == 1); game_connected = 1;
    world_humans[0].unknown_3c = 0; run("spawn item 3"); assert(item_calls == 3);
    world_humans[0].unknown_3c = 100; fail_spawn = 1;
    run("spawn item 3"); assert(strstr(output[log_count - 1], "full"));
    SR_GLOBAL(void *, 0x160FC47C8ULL) = (void *)1;
    menu_open = 0; key_event(53, 0); assert(opened && menu_open);
    assert(!mouse_relative && mouse_cursor && !mouse_grab && !mouse_capture);
    spawn_console_relative_mode(1); assert(!mouse_relative);
    int dx, dy;
    assert(!spawn_console_mouse_state(&dx, &dy) && !dx && !dy);
    key_event(53, 1); assert(opened);
    strcpy(command, "help"); key_event(40, 0); assert(!command[0]);
    key_event(82, 0); assert(!strcmp(command, "help"));
    key_event(81, 0); assert(!command[0]);
    renderer_canvas_height = 640;
    for (int i = 0; i < 40; ++i) print_line("scroll test");
    strcpy(command, "spawn item phone");
    assert(wheel_event(1, 0) && scroll == 3);
    assert(!strcmp(command, "spawn item phone"));
    wheel_event(-1, 0); assert(scroll == 0);
    wheel_event(-1, 1); assert(scroll == 3);
    wheel_event(100, 0); assert(scroll == log_count - visible_rows());
    wheel_event(-100, 0); assert(scroll == 0);
    key_event(75, 0); assert(scroll == visible_rows());
    key_event(78, 0); assert(scroll == 0);
    run("clear"); wheel_event(1, 0); assert(scroll == 0);
    key_event(41, 0); assert(!opened && !menu_open);
    assert(!wheel_event(1, 0));
    assert(mouse_relative && !mouse_cursor && mouse_grab);
    assert(spawn_console_mouse_state(&dx, &dy) == 1 && dx == 12 && dy == -8);
    mouse_relative = 0; mouse_cursor = 1; mouse_grab = 0;
    menu_open = 1; key_event(53, 0); key_event(53, 0); assert(menu_open);
    assert(!mouse_relative && mouse_cursor && !mouse_grab);
    puts("spawn console: all tests passed");
    return 0;
}
