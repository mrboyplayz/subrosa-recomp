#ifndef SR_CLIENT_DEBUG_CONSOLE_H
#define SR_CLIENT_DEBUG_CONSOLE_H

/* Native diagnostics are enabled in the client build, and absent from isolated
   equivalence fixtures. They observe progress without changing game state. */
#ifdef SR_CLIENT_DEBUG_CONSOLE
void sr_debug_console_start(void);
void sr_debug_console_stop(unsigned long result);
void sr_debug_log(const char *format, ...);
void sr_debug_stage(const char *stage);
void sr_debug_tick_begin(void);
void sr_debug_tick_stage(const char *stage);
void sr_debug_tick_end(void);
void sr_debug_check_bodies(const unsigned int *bodies, unsigned int count, const char *where);
void sr_debug_frame(void);
int sr_debug_autostart(const char *what);
int sr_debug_autostart_mode(void);
#define SR_DEBUG_START() sr_debug_console_start()
#define SR_DEBUG_STOP(result) sr_debug_console_stop((unsigned long)(result))
#define SR_DEBUG_LOG(...) sr_debug_log(__VA_ARGS__)
#define SR_DEBUG_STAGE(stage) sr_debug_stage(stage)
#define SR_DEBUG_TICK_BEGIN() sr_debug_tick_begin()
#define SR_DEBUG_TICK_STAGE(stage) sr_debug_tick_stage(stage)
#define SR_DEBUG_TICK_END() sr_debug_tick_end()
#define SR_DEBUG_CHECK_BODIES(bodies, count, where) sr_debug_check_bodies(bodies, count, where)
#define SR_DEBUG_FRAME() sr_debug_frame()
#define SR_DEBUG_AUTOSTART(what) sr_debug_autostart(what)
#define SR_DEBUG_AUTOSTART_MODE() sr_debug_autostart_mode()
#else
#define SR_DEBUG_START() ((void)0)
#define SR_DEBUG_STOP(result) ((void)0)
#define SR_DEBUG_LOG(...) ((void)0)
#define SR_DEBUG_STAGE(stage) ((void)0)
#define SR_DEBUG_TICK_BEGIN() ((void)0)
#define SR_DEBUG_TICK_STAGE(stage) ((void)0)
#define SR_DEBUG_TICK_END() ((void)0)
#define SR_DEBUG_CHECK_BODIES(bodies, count, where) ((void)0)
#define SR_DEBUG_FRAME() ((void)0)
#define SR_DEBUG_AUTOSTART(what) 0
#define SR_DEBUG_AUTOSTART_MODE() 0
#endif
#endif
