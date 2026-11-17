// NC_WRAPPERS: 14004CCB0 1400584B0 14008F050 1400C8500 1400C9820
/* Terminal extra routines: buffer sync, link registration, and event handlers.
   Covers various internal terminal state transitions, buffer mappings, 
   and the snake game logic. */
#include <string.h>
#include "nc.h"
#include "memory.h"
#include "item.h"
#include "frame.h"

/* Prototypes for the draft routines */
void terminal_record_update(int item, int mode, void *data);
void *item_register_buffer(int item, void *buffer);
void terminal_buffer_sync(void);
void terminal_event_handler(int item);
void terminal_snake_update(int item);

#ifdef NC_NATIVE
static void wrapper_record_update(int item, int mode, void *data) {
    ((void (*)(int, int, void *))NC_ADDR(0x14004CCB0))(item, mode, data);
}
static void wrapper_register_buffer(int item, void *buffer) {
    ((void *(*)(int, void *))NC_ADDR(0x1400584B0))(item, buffer);
}
static void wrapper_buffer_sync(void) {
    ((void (*)(void))NC_ADDR(0x14008F050))();
}
static void wrapper_event_handler(int item) {
    ((void (*)(int))NC_ADDR(0x1400C8500))(item);
}
static void wrapper_snake_update(int item) {
    ((void (*)(int))NC_ADDR(0x1400C9820))(item);
}
#else
static void wrapper_record_update(int item, int mode, void *data) {
    terminal_record_update(item, mode, data);
}
static void wrapper_register_buffer(int item, void *buffer) {
    item_register_buffer(item, buffer);
}
static void wrapper_buffer_sync(void) {
    terminal_buffer_sync();
}
static void wrapper_event_handler(int item) {
    terminal_event_handler(item);
}
static void wrapper_snake_update(int item) {
    terminal_snake_update(item);
}
#endif

static void run_case(int op, int n) {
    nc_seed((uint64_t)op * 1000000 + n);
    int item = nc_rand_below(1024);
    
    switch (op) {
        case 0: {
            int mode = nc_rand_below(3);
            int32_t data[8];
            for(int i=0; i<8; i++) data[i] = nc_rand();
            wrapper_record_update(item, mode, (void*)data);
            nc_line("op0 item%d mode%d", item, mode);
            break;
        }
        case 1: {
            uint8_t buf[1024];
            for(int i=0; i<1024; i++) buf[i] = nc_rand();
            wrapper_register_buffer(item, buf);
            nc_line("op1 item%d", item);
            break;
        }
        case 2: {
            wrapper_buffer_sync();
            nc_line("op2");
            break;
        }
        case 3: {
            wrapper_event_handler(item);
            nc_line("op3 item%d", item);
            break;
        }
        case 4: {
            wrapper_snake_update(item);
            nc_line("op4 item%d", item);
            break;
        }
    }
}

int main(void) {
    nc_map_image();
    for (int op = 0; op < 5; op++) {
        for (int n = 0; n < nc_cases(200); n++) {
            run_case(op, n);
        }
    }
    return 0;
}
