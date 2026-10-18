#ifndef SR_SPAWN_CONSOLE_H
#define SR_SPAWN_CONSOLE_H
int spawn_console_open(void);
int spawn_console_event(const void *event);
void spawn_console_draw(void);
int spawn_console_relative_mode(int enabled);
unsigned spawn_console_mouse_state(int *x, int *y);
#endif
