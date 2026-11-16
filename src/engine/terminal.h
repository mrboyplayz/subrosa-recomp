#ifndef SR_ENGINE_TERMINAL_H
#define SR_ENGINE_TERMINAL_H

#include <stdint.h>

float terminal_mission_hit_ratio(int item);
int64_t terminal_raw_source_map(int item);
int64_t terminal_word_copy_mapped(int item, int line, const char *text, int coloured);
int64_t terminal_selection_list_draw(int item);
void terminal_snake_key(int item, int key);

#endif
