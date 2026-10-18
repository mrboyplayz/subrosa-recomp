#include "spawn_console.h"
#include "frame.h"
#include "human.h"
#include "renderer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int64_t sr_CreateItem(int, float *, unsigned *, float *);
extern int64_t sr_CreateVehicle(int, float *, unsigned *, unsigned *, unsigned);
extern void sr_text_draw_recovered(char *, float, float, float, unsigned,
                                    float, float, float, float, const uint64_t *);
extern void SDL_StartTextInput(void);
extern void SDL_StopTextInput(void);
extern int SDL_SetRelativeMouseMode(int);
extern int SDL_GetRelativeMouseMode(void);
extern unsigned SDL_GetRelativeMouseState(int *, int *);
extern int SDL_ShowCursor(int);
extern int SDL_GetWindowGrab(void *);
extern void SDL_SetWindowGrab(void *, int);
extern int SDL_CaptureMouse(int);

#define menu_open SR_GLOBAL(int, 0x18329CC24ULL)
#define game_running SR_GLOBAL(int, 0x183EBFAA0ULL)
enum { LINE_SIZE = 128, LOG_LINES = 64, HISTORY_LINES = 16 };
static int opened, saved_menu, log_count, scroll, history_count, history_cursor;
static char command[LINE_SIZE], history[HISTORY_LINES][LINE_SIZE];
static char output[LOG_LINES][LINE_SIZE];
static int saved_relative, saved_cursor, saved_grab;
static void *console_window;

int spawn_console_relative_mode(int enabled)
{
    return SDL_SetRelativeMouseMode(opened ? 0 : enabled);
}

unsigned spawn_console_mouse_state(int *x, int *y)
{
    unsigned buttons = SDL_GetRelativeMouseState(x, y);
    if (!opened) return buttons;
    if (x) *x = 0;
    if (y) *y = 0;
    return 0;
}

static char ascii_lower(char c) { return c >= 'A' && c <= 'Z' ? c + ('a' - 'A') : c; }

int spawn_console_open(void) { return opened; }

static int visible_rows(void)
{
    int rows = (int)((renderer_canvas_height * 0.5f - 60) / 20);
    return rows > 0 ? rows : 1;
}

static void scroll_output(int64_t lines)
{
    int maximum = log_count - visible_rows();
    if (maximum < 0) maximum = 0;
    int64_t target = scroll + lines;
    scroll = target < 0 ? 0 : target > maximum ? maximum : (int)target;
}

static void print_line(const char *line)
{
    if (log_count == LOG_LINES) {
        memmove(output, output + 1, sizeof(output) - sizeof(output[0]));
        --log_count;
    }
    snprintf(output[log_count++], LINE_SIZE, "%s", line);
    scroll = 0;
}

/* Names are part of the native type records, not asset filenames. */
static const char *type_name(int vehicle, int id)
{
    return &SR_GLOBAL(char, vehicle ? 0x192E9A694ULL + 0x185C0ULL * id
                                    : 0x182A7E1B0ULL + 0x13D0ULL * id);
}

static void normalize(const char *input, char out[LINE_SIZE])
{
    unsigned n = 0;
    for (; *input && n < LINE_SIZE - 1; ++input)
        if ((*input >= 'a' && *input <= 'z') || (*input >= 'A' && *input <= 'Z') ||
            (*input >= '0' && *input <= '9')) out[n++] = ascii_lower(*input);
    out[n] = 0;
}

static int find_type(int vehicle, const char *query)
{
    char key[LINE_SIZE], name[LINE_SIZE], *end;
    long id = strtol(query, &end, 10);
    int count = vehicle ? 18 : 46;
    if (*query && !*end) return id >= 0 && id < count && *type_name(vehicle, (int)id) ? (int)id : -1;
    normalize(query, key);
    if (!strcmp(key, "phone")) strcpy(key, "cellphone");
    if (!strcmp(key, "gun")) strcpy(key, "m16");
    if (!strcmp(key, "mag") || !strcmp(key, "magazine")) strcpy(key, "m16magazine");
    if (vehicle && (!strcmp(key, "car") || !strcmp(key, "sedan"))) strcpy(key, "towncar");
    size_t length = strlen(key);
    if (length > 3 && length + 5 < LINE_SIZE && !strcmp(key + length - 3, "mag")) strcat(key, "azine");
    for (int i = 0; i < count; ++i) {
        normalize(type_name(vehicle, i), name);
        if (*name && !strcmp(key, name)) return i;
    }
    return -1;
}

static void list_types(int vehicle)
{
    char line[LINE_SIZE];
    for (int i = 0; i < (vehicle ? 18 : 46); ++i) {
        const char *name = type_name(vehicle, i);
        if (!*name) continue;
        snprintf(line, sizeof(line), "%s %d: %.70s", vehicle ? "vehicle" : "item", i, name);
        print_line(line);
    }
}

static void execute(void)
{
    char line[LINE_SIZE], text[LINE_SIZE];
    snprintf(text, sizeof(text), "%s", command);
    for (char *p = text; *p; ++p) *p = ascii_lower(*p);
    if (!strcmp(text, "clear")) { log_count = 0; return; }
    if (!strcmp(text, "help")) {
        print_line("spawn item <name or id> | spawn car <name or id>");
        print_line("items | cars | clear | help");
        return;
    }
    if (!strcmp(text, "items") || !strcmp(text, "list items")) { list_types(0); return; }
    if (!strcmp(text, "cars") || !strcmp(text, "vehicles") || !strcmp(text, "list vehicles")) { list_types(1); return; }
    int vehicle = 0;
    const char *query;
    if (!strncmp(text, "spawn item ", 11)) query = text + 11;
    else if (!strncmp(text, "spawn vehicle ", 14)) { vehicle = 1; query = text + 14; }
    else if (!strncmp(text, "spawn car ", 10)) { vehicle = 1; query = text + 10; }
    else if (!strcmp(text, "spawn car")) { vehicle = 1; query = "car"; }
    else { print_line("Unknown command. Type help."); return; }
    int id = find_type(vehicle, query);
    if (id < 0) { print_line("Unknown type. Use items or cars for names and IDs."); return; }
    if (!game_running || !game_connected || replay_active || local_player < 0 ||
        local_player >= PLAYER_CAPACITY || !player_active(local_player)) {
        print_line("Spawning requires a local game (Practice), not a remote server or replay."); return;
    }
    int human = player_human(local_player);
    if (human < 0 || human >= WORLD_HUMAN_CAPACITY || !world_humans[human].active ||
        world_humans[human].unknown_3c <= 0) {
        print_line("Respawn your character before spawning objects."); return;
    }
    float position[3], rotation[9] = {1,0,0, 0,1,0, 0,0,1};
    memcpy(position, world_humans[human].bones[HUMAN_BONE_PELVIS].position, sizeof(position));
    /* Keep large vehicles clear of the character and let gravity settle them. */
    position[0] += vehicle ? 6.0f : 1.5f;
    position[1] += vehicle ? 2.0f : 0.5f;
    int spawned = vehicle ? (int)sr_CreateVehicle(id, position, NULL, (unsigned *)rotation, 0)
                          : (int)sr_CreateItem(id, position, NULL, rotation);
    if (spawned < 0) print_line("Spawn failed: object pool is full.");
    else {
        snprintf(line, sizeof(line), "Spawned %.70s (#%d) beside you.", type_name(vehicle, id), spawned);
        print_line(line);
    }
}

static void toggle(void)
{
    opened = !opened;
    if (opened) {
        console_window = SR_GLOBAL(void *, 0x160FC47C8ULL);
        saved_relative = SDL_GetRelativeMouseMode();
        saved_cursor = SDL_ShowCursor(-1);
        saved_grab = console_window ? SDL_GetWindowGrab(console_window) : 0;
        saved_menu = menu_open;
        menu_open = 1;
        memset(&SR_GLOBAL(unsigned char, 0x183F7C960ULL), 0, 323);
        memset(&SR_GLOBAL(unsigned char, 0x1510419C0ULL), 0, 323);
        SDL_SetRelativeMouseMode(0);
        if (console_window) SDL_SetWindowGrab(console_window, 0);
        SDL_CaptureMouse(0);
        SDL_ShowCursor(1);
        SDL_StartTextInput();
        if (!log_count) print_line("Debug console");
    } else {
        menu_open = saved_menu;
        SDL_StopTextInput();
        SDL_SetRelativeMouseMode(saved_relative);
        if (console_window) SDL_SetWindowGrab(console_window, saved_grab);
        SDL_ShowCursor(saved_cursor);
        SDL_GetRelativeMouseState(NULL, NULL);
    }
}

int spawn_console_event(const void *event)
{
    const unsigned char *bytes = event;
    uint32_t type, key;
    memcpy(&type, bytes, 4);
    memcpy(&key, bytes + 16, 4);
    if (type == 768 && key == 53) {
        if (!bytes[13]) toggle();
        return 1;
    }
    if (!opened) return 0;
    if (type == 1027) {
        int32_t wheel_y;
        uint32_t direction;
        memcpy(&wheel_y, bytes + 20, 4);
        memcpy(&direction, bytes + 24, 4);
        /* SDL_MOUSEWHEEL_FLIPPED reverses the reported wheel direction. */
        scroll_output((int64_t)wheel_y * (direction == 1 ? -3 : 3));
        return 1;
    }
    if (type == 771) {
        size_t length = strlen(command);
        for (int i = 12; i < 44 && bytes[i] && length < LINE_SIZE - 1; ++i)
            if (bytes[i] >= 32 && bytes[i] < 127 && bytes[i] != '`' && bytes[i] != '~')
                command[length++] = (char)bytes[i];
        command[length] = 0;
    }
    if (type == 768) {
        size_t length = strlen(command);
        if (key == 41) toggle();
        else if (key == 42 && length) command[length - 1] = 0;
        else if (key == 40 && length) {
            if (history_count == HISTORY_LINES) {
                memmove(history, history + 1, sizeof(history) - sizeof(history[0]));
                --history_count;
            }
            strcpy(history[history_count++], command);
            history_cursor = history_count;
            print_line(command);
            execute();
            command[0] = 0;
        } else if (key == 82 && history_cursor > 0) strcpy(command, history[--history_cursor]);
        else if (key == 81) {
            if (history_cursor < history_count) ++history_cursor;
            strcpy(command, history_cursor == history_count ? "" : history[history_cursor]);
        } else if (key == 75) scroll_output(visible_rows());
        else if (key == 78) scroll_output(-visible_rows());
    }
    return (type >= 768 && type <= 775) || (type >= 1024 && type <= 1027);
}

static void draw_text(char *text, float y, float green)
{
    /* The native text renderer interprets slash directives; pass text as /s. */
    uint64_t args[] = {(uint64_t)(uintptr_t)text};
    sr_text_draw_recovered("/s", 16, y, 16, 0, 0.85f, green, 0.9f, 1, args);
}

void spawn_console_draw(void)
{
    if (!opened) return;
    camera_begin_2d();
    float height = renderer_canvas_height * 0.5f;
    renderer_draw_flat_rect(0, 0, renderer_canvas_width, height, 0, 0.035f, 0.04f, 0.045f, 0.97f);
    int rows = visible_rows();
    scroll_output(0);
    int end = log_count - scroll, start = end > rows ? end - rows : 0;
    for (int i = start; i < end; ++i) draw_text(output[i], 12.0f + (i - start) * 20, 0.9f);
    char prompt[LINE_SIZE + 4];
    /* Show the tail of long commands instead of overflowing the canvas. */
    int visible = (int)((renderer_canvas_width - 48) / 16);
    if (visible < 1) visible = 1;
    size_t length = strlen(command);
    snprintf(prompt, sizeof(prompt), "> %s_", command + (length > (size_t)visible ? length - visible : 0));
    draw_text(prompt, height - 28, 1.0f);
}
