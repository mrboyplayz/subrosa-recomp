/* Players (RosaServer: Player): 256 records of 0x3834 bytes at 0x151620C60,
 * one per connected person or bot. Field names follow RosaServer where it
 * has them. Accounts (RosaServer: Account) keep what outlives a connection.
 */
#ifndef SR_ENGINE_PLAYER_H
#define SR_ENGINE_PLAYER_H

#include <stdint.h>
#include "memory.h"

#define MAX_PLAYERS 256

/* One inventory slot of the player's human as saved when the human goes
   (player_save_inventory): how many entries and three words each, an item
   type first and then two words that depend on it. */
typedef struct PlayerInventorySlot {
    int32_t count;
    int32_t entries[8][3];
} PlayerInventorySlot;

/* A pair of appearance offsets and scales the new human copies (to
   WorldHuman +0x6C80); left and right, mirrored in x. */
typedef struct PlayerFeature {
    float offset[3];
    float scale[3];
} PlayerFeature;

/* Something the player asks the server to do (RosaServer: Action), queued
   in a ring of 64. */
typedef struct PlayerAction {
    int32_t type;                        /* PLAYER_ACTION_* */
    int32_t a, b, c, d;
    char text[64];
} PlayerAction;

enum {
    PLAYER_ACTION_CHAT = 1,              /* a: length of text (0..63), b: volume (0 whisper, 1 talk, 2 yell) */
    PLAYER_ACTION_COMPUTER_KEY = 2,      /* a: the computer (item type 39), b: the key, PLAYER_COMPUTER_KEY_* */
    PLAYER_ACTION_INVENTORY = 3,         /* a: PLAYER_INVENTORY_*, b: hand, c: depends on a */
};

/* A key typed on a computer: a printable character (letters in capitals,
   plus 0x100 with Ctrl held), or one of these. */
enum {
    PLAYER_COMPUTER_KEY_BACKSPACE = 8,
    PLAYER_COMPUTER_KEY_ENTER = 10,
    PLAYER_COMPUTER_KEY_UP = 16,
    PLAYER_COMPUTER_KEY_DOWN = 17,
    PLAYER_COMPUTER_KEY_LEFT = 18,
    PLAYER_COMPUTER_KEY_RIGHT = 19,
    PLAYER_COMPUTER_KEY_CTRL = 0x100,
};

/* What a PLAYER_ACTION_INVENTORY does, by the key that sends it. */
enum {
    PLAYER_INVENTORY_KEY_R = 1,
    PLAYER_INVENTORY_KEY_Q = 2,          /* Q held and let go */
    PLAYER_INVENTORY_SLOT_1 = 3,         /* number keys 1 to 5: slots 1 to 5 (3..7) */
    PLAYER_INVENTORY_KEY_E = 8,
};

#define PLAYER_INPUT_PRIMARY 0x1         /* left mouse button */

typedef struct Player {
    int32_t active;
    char name[32];
    uint8_t pad_24[0x2C - 0x24];
    uint32_t sub_rosa_id;
    uint32_t phone_number;
    int32_t is_admin;
    uint32_t admin_attempts;
    int32_t account;                     /* Account, -1: none */
    uint8_t pad_40[0x4C - 0x40];
    int32_t money;
    int32_t team_money;
    int32_t budget;
    int32_t corporate_rating;
    int32_t criminal_rating;
    int32_t is_god_mode;                 /* takes no team damage */
    int32_t pad_64;
    int32_t items_bought;                /* RosaServer: for the buy limit */
    int32_t vehicles_bought;
    int32_t withdrawn_bills;
    uint8_t pad_74[0x84 - 0x74];
    int32_t team;                        /* corporation, 17: none */
    int32_t team_switch_timer;
    int32_t stocks;
    int32_t is_round_manager;
    int32_t pad_94;
    int32_t spawn_timer;
    int32_t human;                       /* WorldHuman, -1: none */
    uint8_t pad_a0[0x120 - 0xA0];
    uint32_t input_flags;                /* PLAYER_INPUT_* */
    uint32_t last_input_flags;
    uint8_t pad_128[0x140 - 0x128];
    float human_124;                     /* copied to WorldHuman +0x124 when the player's human is made
                                            (1.0 for a human without a player); meaning not known yet */
    uint8_t pad_144[0x164 - 0x144];
    int32_t menu_tab;                    /* 0: none, 1-19 shop, 2x base */
    int32_t menu_tab_building;
    uint8_t pad_16c[0x1B4 - 0x16C];
    int32_t num_actions;                 /* where the next action goes in actions[], 0..63, wrapping */
    int32_t last_num_actions;
    uint8_t pad_1bc[0x1C8 - 0x1BC];
    PlayerAction actions[64];
    uint8_t pad_16c8[0x17F4 - 0x16C8];
    PlayerInventorySlot inventory[8];    /* slots 0 to 6 are used */
    uint8_t pad_1b14[0x2D18 - 0x1B14];   /* RosaServer numMenuButtons, menuButtons */
    int32_t is_bot;
    int32_t is_zombie;
    uint8_t pad_2d20[0x36EC - 0x2D20];   /* bot state: see bot.h */
    PlayerFeature features[2];
    uint8_t pad_371c[0x37AC - 0x371C];
    int32_t gender;
    int32_t skin_color;
    int32_t hair_color;
    int32_t hair;
    int32_t eye_color;
    int32_t model;                       /* 0 casual, 1 suit */
    int32_t suit_color;
    int32_t tie_color;                   /* 0: no tie */
    int32_t sunglasses;
    int32_t head;
    int32_t necklace;
    uint8_t pad_37d8[0x3834 - 0x37D8];
} Player;

typedef struct Account {
    uint8_t pad_0[0x3C];
    int32_t money;
    int32_t corporate_rating;
    int32_t criminal_rating;
    int32_t spawn_timer;
    uint8_t pad_4c[0x70 - 0x4C];
} Account;

_Static_assert(sizeof(Player) == 0x3834, "Player size");
_Static_assert(__builtin_offsetof(Player, phone_number) == 0x30, "Player layout");
_Static_assert(__builtin_offsetof(Player, items_bought) == 0x68, "Player layout");
_Static_assert(__builtin_offsetof(Player, human) == 0x9C, "Player layout");
_Static_assert(__builtin_offsetof(Player, menu_tab) == 0x164, "Player layout");
_Static_assert(__builtin_offsetof(Player, actions) == 0x1C8, "Player layout");
_Static_assert(sizeof(PlayerAction) == 0x54, "PlayerAction size");
_Static_assert(__builtin_offsetof(Player, inventory) == 0x17F4, "Player layout");
_Static_assert(__builtin_offsetof(Player, is_bot) == 0x2D18, "Player layout");
_Static_assert(__builtin_offsetof(Player, features) == 0x36EC, "Player layout");
_Static_assert(__builtin_offsetof(Player, head) == 0x37D0, "Player layout");
_Static_assert(sizeof(Account) == 0x70, "Account size");

#define world_players  (&SR_GLOBAL(Player, 0x151620C60ULL))
#define world_accounts (&SR_GLOBAL(Account, 0x160361348ULL))

/* Takes the first free player slot and sets up a new player: no account,
   no human, no team, 50000 money and a random face and hair. Returns the
   slot, -1 when all 256 are taken. 0x14005CCF0 */
int player_create(void);

/* Removes a player: unless it is a bot, takes it off its corporation's
   lists and gives up any corporation it manages, and saves its money,
   ratings and spawn timer to its account; lets its human go, frees the
   slot and tells the clients. 0x1400802F0 */
void player_delete(int player);

/* Tidies the name a player joined with: '/' becomes a space, it is cut to
   31 characters and leading and trailing spaces go; an empty name becomes
   "Noname". Returns its last character, NULL when it is "Noname".
   0x140091E60 */
char *player_clean_name(int player);

/* player_input.c */

/* Queues an inventory action. Returns the new num_actions. 0x140116B00 */
int player_queue_inventory_action(int player, int what, int hand, int argument);

/* Queues a chat message at the current chat volume; only the first 63
   characters are sent and no terminator is copied. Returns the new
   num_actions. 0x140116A40 */
int player_queue_chat(int player, const char *text);

/* The local player's keys and mouse buttons for this frame, when they have
   a human: inventory keys become actions, the left button sets
   PLAYER_INPUT_PRIMARY. 0x14009EA20 */
void player_read_hand_keys(int player, int human);

/* The local player types on the computer in their first hand: unless the
   right mouse button is held, each key pressed this frame that means
   something there (letters, other printable characters, shifted with
   Shift, space, Enter, Backspace, the arrows) becomes a
   PLAYER_ACTION_COMPUTER_KEY action and is marked used; so is Left Ctrl.
   0x1400A1640 */
void player_type_on_computer(int player, int computer);

/* The player joins team (0-5 a corporation, 17 none). A manager leaving
   gives up the corporation (in game type 4 sharing out its money first);
   joining a corporation puts on its suit and tie, joining none takes them
   off, except for bought suit colours (3, 7, 8). The player's human, if
   any, gets the new clothes. Nothing happens for player -1 or the same
   team. 0x140138430 */
void player_set_team(int player, int team);

/* For hurting a teammate: unless the player is in god mode or the game
   type is 4 or 5, the player's own human takes damage times the round's
   team damage percent (body part 3), and the player's events 7 and 8 are
   recorded. Players above 255 are ignored. 0x14011B7F0 */
void player_take_team_damage(int player, int damage);

/* player_inventory.c */

/* Keeps what the player's human carries in slots 0 to 6 in the player's
   inventory: guns and magazines (types up to 14) with whether a magazine
   is in and its rounds (one more for a round in the chamber), cash (type
   18) with its bills, and car keys (type 27) whose car is not wrecked: in
   game type 4 the car itself goes into saved_cars, otherwise its type and
   colour are kept. The slots are emptied first even without a human.
   0x140117340 */
void player_save_inventory(int player);

/* Gives the player's new human the items kept by player_save_inventory,
   made at its pelvis. A car key gets the car made again from saved_cars in
   game type 4; otherwise teams 0 to 2 get a new car from their
   corporation's parking (no car, no key). 0x140117020 */
void player_restore_inventory(int player);

/* The local player mutes or unmutes player (0 to 255): the flag flips, and
   the player's phone number is added to (if not there and fewer than
   1,024) or removed from the muted list. 0x140117820 */
void player_toggle_mute(uint32_t player);

/* car_shop.c */

/* The player buys car `choice` (numbered from 1) of the car shop they have
   open (menu_tab_building), if they have a human, fewer than 3 cars bought
   and the price: the car is made at the shop's spawn point (up to 7 times
   4 units back along it, by sales so far), the key goes into the first body
   slot that takes it, the price comes off their money, events 7 (and in
   game type 3, 8) are recorded and the shop's last car takes the bought
   one's place. 0x1400EFD20 */
void player_buy_car(int player, int choice);

/* player_chat.c */

/* Says the text of the player's action (a chat action, at its volume):
   while the game is restarting (game state 3) or without a living human,
   to everyone as the player; otherwise through the human, and on into a
   phone in its first hand that is connected both ways and to every other
   walkie-talkie on the channel of one in either hand. 0x1401164B0 */
void player_say(int player, int action);

#endif
