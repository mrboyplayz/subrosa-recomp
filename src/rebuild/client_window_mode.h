#ifndef SR_CLIENT_WINDOW_MODE_H
#define SR_CLIENT_WINDOW_MODE_H

/* Recomp UI extension: 0 = windowed, 1 = borderless, 2 = SDL fullscreen. */
extern unsigned sr_recomp_window_mode;
extern unsigned sr_borderless_selected, sr_fullscreen_selected;
void sr_recomp_window_load(void);
int sr_recomp_window_set(void *window, unsigned mode, int save);
int sr_recomp_window_toggle(void *window, unsigned fullscreen_flags);

#endif
