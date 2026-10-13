/* The local player's keys and mouse buttons turned into player actions.
 * Checked against the original machine code at 0x140116B00, 0x140116A40,
 * 0x14009EA20 and 0x1400A1640.
 */
#include <string.h>
#include "player.h"
#include "human.h"
#include "world.h"
#include "items/items.h"

/* Keys down now and in the previous frame, by SDL scancode (0x14009F050
   copies the first into the second every frame). */
#define key_down(scancode)       SR_GLOBAL(uint8_t, 0x183F7C960ULL + (scancode))
#define key_was_down(scancode)   SR_GLOBAL(uint8_t, 0x183F7C760ULL + (scancode))
#define key_pressed(scancode)    (key_down(scancode) && !key_was_down(scancode))
#define key_released(scancode)   (!key_down(scancode) && key_was_down(scancode))
enum {
    SCANCODE_E = 8,
    SCANCODE_R = 21,
    SCANCODE_1 = 30,                     /* 1 to 5: 30 to 34 */
    SCANCODE_RIGHT = 79,
    SCANCODE_LEFT = 80,
    SCANCODE_DOWN = 81,
    SCANCODE_UP = 82,
    SCANCODE_LCTRL = 224,
    SCANCODE_LSHIFT = 225,
};

/* This frame's key presses and releases (SDL key events), at most 32. */
typedef struct KeyEvent {
    int32_t released;                    /* 0: pressed, 1: let go */
    int32_t used;                        /* set by whatever takes the key */
    int32_t scancode;
    int32_t keycode;                     /* SDL keycode: the character of a printable key */
    uint32_t modifiers;                  /* SDL KMOD_* */
} KeyEvent;
#define key_event_count          SR_GLOBAL(int32_t, 0x18329CC4CULL)
#define key_events               (&SR_GLOBAL(KeyEvent, 0x18329CC50ULL))
#define KMOD_SHIFT               0x0003
#define KMOD_CTRL                0x00C0
/* The character a key gives with Shift, by the character it gives without
   ('1' gives '!'). */
extern int32_t dword_1402B29D0[128];
#define shifted_characters       dword_1402B29D0
#define mouse_left_down          SR_GLOBAL(int32_t, 0x183F7C750ULL)
#define mouse_right_down         SR_GLOBAL(int32_t, 0x183F7C754ULL)
#define mouse_left_was_down      SR_GLOBAL(int32_t, 0x183F7C6B0ULL)
#define mouse_right_was_down     SR_GLOBAL(int32_t, 0x183F7C6B4ULL)

/* The config file's "manualhands": 1 lets Shift pick the hand. */
#define option_manual_hands      SR_GLOBAL(int32_t, 0x151E46200ULL)
/* The word just past the item table. No code in the original writes it
   (a world reset clears it), so in practice it is always 0; when set, the
   keys and buttons here are ignored. */
#define input_blocked            SR_GLOBAL(int32_t, 0x18329B180ULL)
/* Q (the key bound at 0x18329DEE0, Q by default) held since it was
   pressed, this frame and the previous one; kept by 0x14009F050. */
#define key_q_held               SR_GLOBAL(int32_t, 0x18329CC38ULL)
#define key_q_was_held           SR_GLOBAL(int32_t, 0x18329CC3CULL)
/* A left click something else (a menu) has already used; cleared when the
   button comes up. */
#define left_click_used          SR_GLOBAL(int32_t, 0x18329CC2CULL)
/* The left button went down while nothing else had it: held, it keeps
   PLAYER_INPUT_PRIMARY on. */
#define left_click_armed         SR_GLOBAL(int32_t, 0x18329CC48ULL)
/* 0 whisper, 1 talk, 2 yell. */
#define chat_volume              SR_GLOBAL(int32_t, 0x183E93544ULL)

static PlayerAction *next_action(Player *player)
{
    return &player->actions[player->num_actions];
}

static int advance(Player *player)
{
    player->num_actions = (player->num_actions + 1) & 63;
    return player->num_actions;
}

int player_queue_inventory_action(int index, int what, int hand, int argument)
{
    Player *player = &world_players[index];

    next_action(player)->type = PLAYER_ACTION_INVENTORY;
    next_action(player)->a = what;
    next_action(player)->b = hand;
    next_action(player)->c = argument;
    return advance(player);
}

int player_queue_chat(int index, const char *text)
{
    Player *player = &world_players[index];
    size_t length = strlen(text) & 63;

    next_action(player)->type = PLAYER_ACTION_CHAT;
    next_action(player)->a = (int32_t)length;
    memcpy(next_action(player)->text, text, length);
    next_action(player)->b = chat_volume;
    return advance(player);
}

void player_read_hand_keys(int index, int human)
{
    Player *player = &world_players[index];
    int held = -1, hand = 0, armed;

    if (human == -1)
        return;
    if (world_humans[human].hands[0].count > 0)
        held = world_humans[human].hands[0].items[0];

    /* Which hand: with manual hands Shift picks it (0 or 1); otherwise 3,
       or 2 with Shift. */
    if (!input_blocked)
        hand = key_down(SCANCODE_LSHIFT) != 0;
    if (!option_manual_hands)
        hand = key_down(SCANCODE_LSHIFT) ? 2 : 3;
    if (input_blocked)
        return;

    if (key_released(SCANCODE_R))
        player_queue_inventory_action(index, PLAYER_INVENTORY_KEY_R, hand, hand ^ 1);
    if (key_pressed(SCANCODE_E))
        player_queue_inventory_action(index, PLAYER_INVENTORY_KEY_E, hand, hand ^ 1);

    /* Number keys pick a slot when they are let go, unless they dial the
       phone in the first hand. */
    if (held == -1 || !item_is_phone(world_items[held].type) || item_phone_status(held) != PHONE_DIALLING)
        for (int k = 0; k < 5; k++)
            if (key_released(SCANCODE_1 + k))
                player_queue_inventory_action(index, PLAYER_INVENTORY_SLOT_1 + k, hand, 0);

    /* Q held and let go; a right click while it is held cancels it. */
    if (key_q_held) {
        if (mouse_right_down) {
            if (!mouse_right_was_down)
                key_q_held = 0;
        }
    } else if (key_q_was_held) {
        player_queue_inventory_action(index, PLAYER_INVENTORY_KEY_Q, hand, -1);
    }

    /* A fresh left click arms, unless it was used elsewhere or Q is held. */
    if (left_click_used || key_q_held) {
        armed = left_click_armed;
    } else {
        if (!mouse_left_down) {
            left_click_armed = 0;
            return;
        }
        armed = left_click_armed;
        if (!mouse_left_was_down)
            armed = 1;
        left_click_armed = armed;
    }
    if (!mouse_left_down) {
        left_click_armed = 0;
        return;
    }
    if (armed)
        player->input_flags |= PLAYER_INPUT_PRIMARY;
}

static void queue_computer_key(Player *player, int computer, int32_t key)
{
    next_action(player)->type = PLAYER_ACTION_COMPUTER_KEY;
    next_action(player)->a = computer;
    next_action(player)->b = key;
    advance(player);
}

void player_type_on_computer(int index, int computer)
{
    Player *player = &world_players[index];
    int i;

    if (mouse_right_down)
        return;
    for (i = 0; i < key_event_count; i++) {
        KeyEvent *key = &key_events[i];
        int32_t c;

        if (key->released)
            continue;
        c = key->keycode;
        if ((uint32_t)c - 'a' <= 'z' - 'a') {
            queue_computer_key(player, computer,
                               (c - 'a' + 'A') | (key->modifiers & KMOD_CTRL ? PLAYER_COMPUTER_KEY_CTRL : 0));
            key->used = 1;
        } else if ((uint32_t)c - '!' <= '_' - '!') {
            queue_computer_key(player, computer, key->modifiers & KMOD_SHIFT ? shifted_characters[c & 0x7F] : c);
            key->used = 1;
        }
        if (c == ' ') {
            key->used = 1;
            queue_computer_key(player, computer, ' ');
        }
        if (c == '\r') {
            queue_computer_key(player, computer, PLAYER_COMPUTER_KEY_ENTER);
            key->used = 1;
        } else if (c == '\b') {
            queue_computer_key(player, computer, PLAYER_COMPUTER_KEY_BACKSPACE);
            key->used = 1;
        }
        switch (key->scancode) {
        case SCANCODE_LCTRL:
            key->used = 1;
            break;
        case SCANCODE_UP:
            queue_computer_key(player, computer, PLAYER_COMPUTER_KEY_UP);
            key->used = 1;
            break;
        case SCANCODE_DOWN:
            queue_computer_key(player, computer, PLAYER_COMPUTER_KEY_DOWN);
            key->used = 1;
            break;
        case SCANCODE_LEFT:
            queue_computer_key(player, computer, PLAYER_COMPUTER_KEY_LEFT);
            key->used = 1;
            break;
        case SCANCODE_RIGHT:
            queue_computer_key(player, computer, PLAYER_COMPUTER_KEY_RIGHT);
            key->used = 1;
            break;
        }
    }
}
