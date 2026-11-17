/* DRAFT, NOT COMPILED, NOT VERIFIED.
 * Recovered from src/client/client_terminal.c and assembly.
 * 
 * To finish: move into src/engine/terminal.c, rewire wrappers in
 * src/client/client_terminal.c, add t_terminalextra.c + .mutations,
 * prove identical, then mutate.
 */
#include <stdint.h>
#include <string.h>
#include "memory.h"
#include "item.h"
#include "frame.h"

/* Forward declarations for unported callees */
extern uintptr_t item_register_link(int item, uint32_t link, int32_t slot);
extern void sub_1400C7890(int item);      /* 0x1400C7890 */
extern void sub_1400C7FC0(int item);      /* 0x1400C7FC0 */
extern void sub_1400C86D0(int item);      /* 0x1400C86D0 */
extern void sub_1400C8E10(int item);      /* 0x1400C8E10 */
extern void sub_1400C92B0(int item);      /* 0x1400C92B0 */
extern void sub_140195FB0(int index, int type); /* 0x140195FB0 */

/* 0x14004CCB0: Terminal item record mapping.
   Handles internal buffers and state updates for terminal text. */
void terminal_record_update(int item, int mode, void *data)
{
    int32_t scaled_index = -1;
    int item_offset = 1760 * item;

    if (mode == 2) {
        scaled_index = SR_GLOBAL(int32_t, 0x182BBB4B4ULL + 1760ULL * item);
    } else if (mode == 0) {
        if (SR_GLOBAL(int32_t, 0x182BBB1B4ULL + 1760ULL * item) <= 0)
            return;
        int32_t mid_idx = SR_GLOBAL(int32_t, 0x182BBB1B8ULL + 1760ULL * item);
        scaled_index = SR_GLOBAL(int32_t, 0x182BBB4B4ULL + 1760ULL * mid_idx);
    } else {
        return;
    }

    if (scaled_index == -1) return;

    if (data) {
        int32_t *chain = (int32_t *)data;
        int32_t chain_buf[8];
        int count = 0;
        int32_t current = 0;
        
        while (count < 8) {
            // Accesses a table at 0x181FEEDB8 + 2570 * scaled_index + 4 * current
            current = SR_GLOBAL(int32_t, 0x181FEEDB8ULL + 2570ULL * scaled_index + 4ULL * current);
            if (current == 0) break;
            chain_buf[count++] = current;
        }

        int32_t *state_ptr = (int32_t *)&g_182BBC57C + (item_offset * 4 + 72 * mode);
        uint32_t val1 = *(uint32_t *)state_ptr;
        uint32_t val2 = *(uint32_t *)((char *)state_ptr + 8); // not used in decompiler logic clearly
        
        *state_ptr = 0;
        *(uint32_t *)((char *)state_ptr + 8) = 0;

        for (int i = 0; i < count; i++) {
            int32_t loaded = *state_ptr; // This logic in decompiler looks like it increments *state_ptr
            *state_ptr = loaded + 1;
            // g_140404A6C[1760 * item + 278847174 + 18 * mode + loaded] = chain_buf[count - 1 - i]
            SR_GLOBAL(int32_t, 0x182BBC584ULL + 1760ULL * item + 18ULL * mode + loaded) = chain_buf[count - 1 - i];
        }
    } else {
        // data is null, store as qword
        SR_GLOBAL(uint64_t, 0x182BBC584ULL + 18ULL * mode + 1760ULL * item) = (uint64_t)(uintptr_t)data;
    }
}

/* 0x1400584B0: Item link registration and buffer management.
   Manages memory offsets and links for item records. */
void *item_register_buffer(int item, void *buffer)
{
    int32_t item_offset = 1760 * item;
    uint32_t rol4 = 1;
    
    // Clearing flags/buffers
    for (int i = 0; i < 4; i++) {
        uint32_t mask = rol4;
        uint8_t *record_bytes = (uint8_t *)&SR_GLOBAL(int32_t, 0x182BBB2F0ULL + 1760ULL * item);
        
        // This block is highly repetitive, likely iterating bits
        // Simplified representation of the logic:
        for (int b = 0; b < 16; b++) {
            if ((mask & (1 << b)) != 0) {
                int32_t idx = ((int32_t *)record_bytes)[b];
                SR_GLOBAL(int32_t, 0x1857BD740ULL + 39ULL * idx) = 0;
            }
        }
        rol4 = (rol4 << 16) | (rol4 >> (32 - 16)); // Rotate
    }

    SR_GLOBAL(uint64_t, 0x182BBB2F0ULL + 1760ULL * item) = 0;

    // Find end of buffer
    int len = 0;
    uint8_t *src = (uint8_t *)buffer;
    while (len < 1024 && src[len]) len++;

    if (len > 1023) len = 1023;

    // Copy buffer to record
    memcpy(&SR_GLOBAL(uint32_t, 0x182BBB4E8ULL + 1760ULL * item), buffer, len);
    SR_GLOBAL(uint8_t, 0x182BBB8E4ULL + 1760ULL * item + 7) = 0;

    int shifted_bits = len >> 6;
    for (int i = 0; i <= shifted_bits; i++) {
        int link = 0;
        int count = 0;
        uint32_t *search_ptr = &g_1857BD740;
        
        while (search_ptr[0]) {
            link++;
            count++;
            search_ptr = (uint32_t *)((char *)search_ptr + 156);
            if ((uintptr_t)search_ptr >= (uintptr_t)&g_185A2D740) break;
        }

        if (link != -1) {
            uint64_t base_offset = 39ULL * count;
            SR_GLOBAL(uint64_t, 0x1857BD740ULL + base_offset) = 1;
            SR_GLOBAL(uint32_t, 0x1857BD748ULL + base_offset) = game_tick;
            SR_GLOBAL(uint32_t, 0x1857BD747ULL + base_offset) = 0;
            SR_GLOBAL(uint32_t, 0x1857BD74CULL + base_offset) = item;
            SR_GLOBAL(uint32_t, 0x1857BD750ULL + base_offset) = i;
            SR_GLOBAL(uint32_t, 0x1857BD754ULL + base_offset) = 64;

            uint64_t link_offset = 39ULL * link;
            uint8_t *buf_ptr = (uint8_t *)&SR_GLOBAL(uint32_t, 0x182BBB4E8ULL + 1760ULL * item + (i * 16));
            memcpy(&SR_GLOBAL(uint64_t, 0x1857BD75CULL + link_offset), buf_ptr, 16);
            memcpy(&SR_GLOBAL(uint64_t, 0x1857BD76CULL + link_offset), buf_ptr + 16, 16);
            memcpy(&SR_GLOBAL(uint64_t, 0x1857BD77CULL + link_offset), buf_ptr + 32, 16);
            
            item_register_link(item, link, 0xFFFFFFFF);
        }
    }
    return (void *)0; // Simplified return
}

/* 0x14008F050: Periodic update for terminal item memory mapping. */
void terminal_buffer_sync(void)
{
    uint32_t *state_ptr = &g_1857BD750;
    void *source_buffer = &g_1857BD75C;

    for (int i = 0; i < 0x4000; i++) {
        if (state_ptr[-4] && !state_ptr[-3]) {
            int32_t scaled_index = state_ptr[-2];
            if (scaled_index == 1) {
                int32_t byte_count = state_ptr[2];
                if (byte_count > 63) {
                    byte_count = 63;
                    state_ptr[2] = 63;
                }
                int32_t item_id = state_ptr[0];
                uint64_t shift = (110ULL * item_id + state_ptr[1]) << 6;
                
                memcpy(&g_182BBB4F4 + shift, source_buffer, byte_count);
                ((uint8_t *)&g_182BBB4F4)[shift + byte_count] = 0;
                memcpy(&g_182BBBCF4 + shift, (uint8_t *)source_buffer + 64, byte_count);
                
                SR_GLOBAL(int32_t, 0x182BBB4C0ULL + 1760ULL * item_id) = 0;
            } else if (scaled_index != 0) {
                uint64_t rec_base = 1760ULL * state_ptr[0];
                int32_t shift = state_ptr[1] << 6;
                memcpy(&SR_GLOBAL(uint32_t, 0x182BBB4E8ULL + rec_base) + shift, source_buffer, state_ptr[2]);
                SR_GLOBAL(uint8_t, 0x182BBB8E4ULL + rec_base + 7) = 0;
                SR_GLOBAL(int32_t, 0x182BBB4C0ULL + rec_base) = 0;
            }
            state_ptr[-3] = 1;
        }
        state_ptr += 39;
        source_buffer = (uint8_t *)source_buffer + 156;
    }
}

/* 0x1400C8500: Terminal event handler for specific item conditions. */
void terminal_event_handler(int item)
{
    int32_t rec_base = 1760 * item;
    int32_t table_val = SR_GLOBAL(int32_t, 0x182BBC7D8ULL + 1760ULL * item);
    int32_t link_idx = SR_GLOBAL(int32_t, 0x182BBB4B4ULL + 1760ULL * item);

    if (table_val == -1 || link_idx == -1) return;

    int32_t timer = SR_GLOBAL(int32_t, 0x182BBC7E4ULL + 1760ULL * item);
    if (timer <= 0) {
        if (((uint8_t)item ^ (uint8_t)(game_tick & 0xF)) == 0) {
            int32_t state = SR_GLOBAL(int32_t, 0x182BBC7E8ULL + 1760ULL * item);
            if (state == 0) {
                sub_1400C7890(item);
                state = SR_GLOBAL(int32_t, 0x182BBC7E8ULL + 1760ULL * item);
            }
            if (state == 1) {
                sub_1400C7FC0(item);
                state = SR_GLOBAL(int32_t, 0x182BBC7E8ULL + 1760ULL * item);
            }
            if (state == 2) {
                sub_1400C86D0(item);
            }
        }
    } else {
        int32_t new_timer = timer - 1;
        SR_GLOBAL(int32_t, 0x182BBC7E4ULL + 1760ULL * item) = new_timer;
        int is_flag = (SR_GLOBAL(int32_t, 0x182BBC7E0ULL + 1760ULL * item) == 1);
        
        if (is_flag && (new_timer & 0xF) == 0) {
            sub_1400C86D0(item);
            new_timer = SR_GLOBAL(int32_t, 0x182BBC7E4ULL + 1760ULL * item);
        }

        if (new_timer == 0) {
            int32_t type_val = SR_GLOBAL(int32_t, 0x182BBC7E0ULL + 1760ULL * item);
            if (type_val == 1) {
                int selection = 0;
                for (int i = 0; i < 7; i++) {
                    int32_t slot_val = SR_GLOBAL(int32_t, 0x182BBC800ULL + 1760ULL * item + 4 * SR_GLOBAL(int32_t, 0x182BBC7F4ULL + 1760ULL * item + 4 * SR_GLOBAL(int32_t, 0x182BBC7F4ULL + 1760ULL * item + 4 * i))); // simplified
                    if (slot_val == SR_GLOBAL(uint32_t, 0x16B2CCA30ULL + i * 34653)) {
                        sub_140195FB0(i, table_val);
                        selection = 1;
                        SR_GLOBAL(int32_t, 0x182BBC7ECULL + 1760ULL * item) = i;
                        SR_GLOBAL(int32_t, 0x182BBC7E8ULL + 1760ULL * item) = 1;
                        SR_GLOBAL(int32_t, 0x182BBC7F0ULL + 1760ULL * item) = 0;
                    }
                }
                if (!selection) sub_1400C7890(item);
                if (SR_GLOBAL(int32_t, 0x182BBC7E8ULL + 1760ULL * item) == 1) sub_1400C7FC0(item);
            } else {
                sub_1400C7890(item);
            }
        }
    }
}

/* 0x1400C9820: Terminal snake/game logic update. */
void terminal_snake_update(int item)
{
    int32_t rec_base = 1760 * item;
    if (SR_GLOBAL(int32_t, 0x182BBC7F0ULL + 1760ULL * item) == 0 && 
        --SR_GLOBAL(int32_t, 0x182BBC7ECULL + 1760ULL * item) <= 0) 
    {
        if (SR_GLOBAL(int32_t, 0x182BBC7E4ULL + 1760ULL * item)) {
            int32_t val = SR_GLOBAL(int32_t, 0x182BBC7E8ULL + 1760ULL * item);
            int32_t shift = 16 - ((val >> 1) & 0xFFFFFFFC);
            if (shift < 4) shift = 4;
            SR_GLOBAL(int32_t, 0x182BBC7ECULL + 1760ULL * item) = shift;

            int32_t offset = (SR_GLOBAL(int32_t, 0x182BBC7F8ULL + 1760ULL * item) & 0x3F);
            int32_t cur_len = SR_GLOBAL(int32_t, 0x182BBC800ULL + 880ULL * item + 2 * offset);
            int32_t cur_width = SR_GLOBAL(int32_t, 0x182BBC804ULL + 880ULL * item + 2 * offset);
            uint32_t type = SR_GLOBAL(uint32_t, 0x182BBC7F4ULL + 1760ULL * item);
            
            SR_GLOBAL(uint32_t, 0x182BBC7F8ULL + 1760ULL * item) = (type + 1) & 0x3F;
            
            if (type == 1) {
                if (cur_width + 1 < 22) cur_width = cur_width + 1; else cur_width = 0;
            } else if (type == 2) {
                if (--cur_len < 0) cur_len = 30;
            } else if (type == 3 && --cur_width < 0) {
                cur_width = 21;
            } else if (type == 0) {
                if (cur_len + 1 < 31) cur_len = cur_len + 1; else cur_len = 0;
            }

            SR_GLOBAL(int32_t, 0x182BBC800ULL + 220ULL * item + (type & 0x3F)) = cur_len;
            SR_GLOBAL(int32_t, 0x182BBC804ULL + 220ULL * item + (type & 0x3F)) = cur_width;

            // State flags and final calls
            uint64_t flag_addr = 0x182BBCA00ULL + (cur_len + 32 * (220ULL * item + cur_width));
            if (SR_GLOBAL(uint8_t, flag_addr) == 4) {
                SR_GLOBAL(uint8_t, flag_addr) = 0;
                SR_GLOBAL(int32_t, 0x182BBC7E0ULL + 1760ULL * item) += 5;
                --SR_GLOBAL(int32_t, 0x182BBC7E4ULL + 1760ULL * item);
                if (SR_GLOBAL(int32_t, 0x182BBC7E4ULL + 1760ULL * item) <= 0) {
                    SR_GLOBAL(int32_t, 0x182BBC7ECULL + 1760ULL * item) = 32;
                    SR_GLOBAL(int32_t, 0x182BBC7E4ULL + 1760ULL * item) = 0;
                }
                // ... further state updates from decompiler ...
            }
            sub_1400C8E10(item);
        } else {
            sub_1400C92B0(item);
        }
    }
}
