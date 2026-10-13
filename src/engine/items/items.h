/* Item types and the behaviour of each, one file per type (or per family of
   types that share one routine in the original). The per-tick update that
   calls them is ../item_tick.c (0x1400CC610). */
#ifndef SR_ENGINE_ITEMS_H
#define SR_ENGINE_ITEMS_H

#include "../item_tick.h"
#include "../bullets.h"
#include "../item_text.h"

/* Item type indices, with the names the game gives them (set up at
   0x1401402C0 by copying them into WorldItemType + 0x30). */
enum ItemType {
    ITEM_AUTO_5 = 0,
    ITEM_AK47 = 1,
    ITEM_AK47_MAGAZINE = 2,
    ITEM_M16 = 3,
    ITEM_M16_MAGAZINE = 4,
    ITEM_MAGNUM = 5,
    ITEM_45_BULLETS = 6,
    ITEM_MP5 = 7,
    ITEM_MP5_MAGAZINE = 8,
    ITEM_UZI = 9,
    ITEM_UZI_MAGAZINE = 10,
    ITEM_9MM = 11,
    ITEM_9MM_MAGAZINE = 12,
    ITEM_GRENADE = 13,
    ITEM_BANDAGE = 14,
    ITEM_BRIEFCASE = 15,
    ITEM_OPEN_BRIEFCASE = 16,
    ITEM_CASH = 17,
    ITEM_CASH_2 = 18,                    /* also named "Cash" */
    ITEM_BLACK_DISK = 19,
    ITEM_GREEN_DISK = 20,
    ITEM_BLUE_DISK = 21,
    ITEM_WHITE_DISK = 22,
    ITEM_GOLD_DISK = 23,
    ITEM_RED_DISK = 24,
    ITEM_CELL_PHONE = 25,
    ITEM_WALKIE_TALKIE = 26,
    ITEM_KEY = 27,
    ITEM_DOOR = 28,
    ITEM_NEWSPAPER = 29,
    ITEM_BURGER = 30,
    ITEM_DESK = 31,
    ITEM_LAMP = 32,
    ITEM_PAY_PHONE = 33,
    ITEM_MEMO = 34,
    ITEM_SOCCER_BALL = 35,
    ITEM_ROPE = 36,
    ITEM_BOX = 37,
    ITEM_BIG_BOX = 38,
    ITEM_COMPUTER = 39,
    ITEM_ARCADE = 40,
    ITEM_TABLE = 41,
    ITEM_TABLETEST2 = 42,
    ITEM_CUBEWALL = 43,
    ITEM_BOTTLE = 44,
    ITEM_WATERMELON = 45,
};

/* ---- fields of single types ------------------------------------------------ */

/* Phones call one another, as RosaServer's phone fields (connectedPhone,
   phoneNumber, displayPhoneNumber, enteredPhoneNumber). */
#define item_phone_connected(i) ITEM_FIELD(int32_t, 0x15C, i)   /* the other phone, -1: none */
#define item_phone_number(i) ITEM_FIELD(int32_t, 0x160, i)
#define item_phone_caller_ring_timer(i) ITEM_FIELD(int32_t, 0x164, i)       /* time in the current state */
#define item_phone_display_number(i) ITEM_FIELD(int32_t, 0x168, i)     /* the number shown */
#define item_phone_entered_number(i) ITEM_FIELD(int32_t, 0x16C, i)     /* the number dialled; a call is placed from 1000 */
#define item_phone_status(i) ITEM_FIELD(int32_t, 0x27C, i)
#define item_phone_texture(i) ITEM_FIELD(int32_t, 0x278, i)
enum {
    PHONE_IDLE = 0,
    PHONE_DIALLING = 1,
    PHONE_RINGING = 2,                   /* both phones; the caller holds the callee in connected */
    PHONE_IN_CALL = 3,
    PHONE_BUSY = 4,                      /* the number called was in a call; ends after 360 ticks */
};
/* Sound types the phones play, as event 19 (a sound at an item, RosaServer's
   createEventSoundItem: a = sound type, b = item, floatA = volume, floatB =
   pitch). Which sound each is follows from when it plays. */
#define sound_phone_busy SR_GLOBAL(int32_t, 0x183E93694ULL)
#define sound_phone_ring SR_GLOBAL(int32_t, 0x183E93668ULL)

/* Walkie-talkies are filed every tick by their channel, the low seven bits
   of item + 0x368: 128 lists of up to 256 item indices. +0x36C is set while
   bit 0 of item_input_flags is (the talk button?). */
#define item_team(i) ITEM_FIELD(int32_t, 0x368, i)
#define walkie_talkie_transmitting(i) ITEM_FIELD(int32_t, 0x36C, i)
#define walkie_talkie_list_count(c) SR_GLOBAL(int32_t, 0x1816760A0ULL + 0x404ULL * (uint64_t)(c))
#define walkie_talkie_list_entry(c, n) SR_GLOBAL(int32_t, 0x1816760A4ULL + 0x404ULL * (uint64_t)(c) + 4ULL * (uint64_t)(int64_t)(n))
#define WALKIE_TALKIE_CHANNELS 128
#define WALKIE_TALKIE_LIST_CAPACITY 256

/* Of a vehicle (keys belong to one, world_item_vehicle): cleared while the
   key's holder sits in it (RosaServer: isLocked), and that human's player
   (RosaServer: unk3). */
#define vehicle_is_locked(v) SR_GLOBAL(int32_t, 0x15F2D9220ULL + 0x5168ULL * (uint64_t)(int64_t)(v))
#define vehicle_keyholder_player(v) SR_GLOBAL(int32_t, 0x15F2D9224ULL + 0x5168ULL * (uint64_t)(int64_t)(v))

/* The computer: a state (0 starting, 1 the cipher, 2 and 3 programs), and a
   countdown whose end reveals one random letter of the cipher: the letter
   table at +0x1868 (26 entries, the cipher of each letter) indexes how
   often each cipher letter occurs (+0x1968) and the letters revealed
   (+0x19E8, -1: not yet). */
#define computer_state(i) ITEM_FIELD(int32_t, 0x165C, i)
#define computer_hint_countdown(i) ITEM_FIELD(int32_t, 0x1A6C, i)
#define computer_letter(i, n) SR_GLOBAL(int32_t, 0x182BBC9E8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 4ULL * (uint64_t)(int64_t)(n))
#define computer_letter_count(i, n) SR_GLOBAL(int32_t, 0x182BBCAE8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 4ULL * (uint64_t)(int64_t)(n))
#define computer_letter_revealed(i, n) SR_GLOBAL(int32_t, 0x182BBCB68ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 4ULL * (uint64_t)(int64_t)(n))
/* The screen (RosaServer: computerLines[32][64] at +0x374, and
   computerLineColors[32][64] at +0xB74). */
#define computer_line(i, line) ((char *)&SR_GLOBAL(uint8_t, 0x182BBB4F4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 64ULL * (uint64_t)(int64_t)(line)))
#define computer_line_colors(i, line) ((uint8_t *)&SR_GLOBAL(uint8_t, 0x182BBBCF4ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 64ULL * (uint64_t)(int64_t)(line)))
#define computer_line_1_first_char(i) (computer_line(i, 1)[0])
/* The terminal's text cursor (RosaServer: computerCurrentLine, computerTopLine,
   computerCursor): the line written next, the first line shown (the screen
   shows ten lines), and the cursor's place, line * 64 + column. */
#define computer_current_line(i) ITEM_FIELD(int32_t, 0x368, i)
#define computer_top_line(i) ITEM_FIELD(int32_t, 0x36C, i)
#define computer_cursor(i) ITEM_FIELD(int32_t, 0x370, i)
/* The cipher: five lines of plain text, 64 bytes each, at +0x1660 (shown
   enciphered through computer_letter, and decoded as far as letters are
   revealed), and the cipher letter selected (shown in colour 12). */
#define computer_cipher_text(i, row) ((const char *)&SR_GLOBAL(uint8_t, 0x182BBC7E0ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 64ULL * (uint64_t)(int64_t)(row)))
#define computer_cipher_selected(i) ITEM_FIELD(int32_t, 0x1A68, i)

/* The computer's snake game (SNAKE.EXE, state 3). It shares the memory
   of the cipher text from +0x1660. The board is 22 rows of 32 cells at
   +0x1880 (31 columns used); the snake is a ring of 64 cells at +0x1680,
   from the tail index to the head index. */
#define snake_score(i) ITEM_FIELD(int32_t, 0x1660, i)
#define snake_food_left(i) ITEM_FIELD(int32_t, 0x1664, i)
#define snake_level(i) ITEM_FIELD(int32_t, 0x1668, i)
#define snake_delay(i) ITEM_FIELD(int32_t, 0x166C, i)       /* ticks to the next move */
#define snake_over(i) ITEM_FIELD(int32_t, 0x1670, i)        /* it ran into something */
#define snake_direction(i) ITEM_FIELD(int32_t, 0x1674, i)
#define snake_head(i) ITEM_FIELD(int32_t, 0x1678, i)
#define snake_tail(i) ITEM_FIELD(int32_t, 0x167C, i)
#define snake_cell_x(i, k) SR_GLOBAL(int32_t, 0x182BBC800ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 8ULL * (uint64_t)(int64_t)(k))
#define snake_cell_y(i, k) SR_GLOBAL(int32_t, 0x182BBC804ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 8ULL * (uint64_t)(int64_t)(k))
#define snake_board(i, x, y) SR_GLOBAL(uint8_t, 0x182BBCA00ULL + 0x1B80ULL * (uint64_t)(int64_t)(i) + 32ULL * (uint64_t)(int64_t)(y) + (uint64_t)(int64_t)(x))
enum { SNAKE_EMPTY = 0, SNAKE_BODY = 2, SNAKE_HEAD = 3, SNAKE_FOOD = 4 };
enum { SNAKE_RIGHT = 0, SNAKE_DOWN = 1, SNAKE_LEFT = 2, SNAKE_UP = 3 };   /* x + 1, y + 1, x - 1, y - 1 */

/* The grenade: the player who pulled the pin (-1 when thrown back in), set
   from the holder. Meaning not fully settled. */
#define grenade_primer(i) ITEM_FIELD(int32_t, 0x20, i)

/* The arcade: a frame counter 0..255 and a value set to 64 every tick. */
#define arcade_current_line(i) ITEM_FIELD(int32_t, 0x368, i)
#define arcade_top_line(i) ITEM_FIELD(int32_t, 0x36C, i)

/* Of a human, raised by a burger: maxStamina (by 16, to 255) and the field
   at +0x14 (by 8, to 105; RosaServer: unk2; set to 105 at spawn, 0x1400539ED,
   and read nowhere else with an absolute address); burgerEatCooldown holds
   300 ticks between burgers. */
#define human_burger_level(h) SR_GLOBAL(int32_t, 0x18329E31CULL + 0x6FF8ULL * (uint64_t)(int64_t)(h))
#define human_burger_cooldown(h) SR_GLOBAL(int32_t, 0x18329E320ULL + 0x6FF8ULL * (uint64_t)(int64_t)(h))
#define human_max_stamina(h) SR_GLOBAL(int32_t, 0x18329E328ULL + 0x6FF8ULL * (uint64_t)(int64_t)(h))
/* RosaServer: Human.pos (WorldHuman.position), oldHealth
   (WorldHuman.old_health, below 10 a bandage raises it to 10) and progressBar
   (WorldHuman.progress_bar, a bandage's progress). */
#define human_position(h) (&SR_GLOBAL(float, 0x18329E388ULL + 0x6FF8ULL * (uint64_t)(int64_t)(h)))
#define human_old_health(h) (world_humans[h].old_health)
#define human_progress_bar(h) (world_humans[h].progress_bar)

/* Guns (RosaServer: ItemType.fireRate, bulletType, bulletVelocity,
   bulletSpread; Item.mass, triggerTicks). */
#define item_type_fire_rate(t) SR_GLOBAL(int32_t, 0x182A7E198ULL + 0x13D0ULL * (uint64_t)(int64_t)(t))   /* ticks per bullet */
#define item_type_bullet_type(t) SR_GLOBAL(int32_t, 0x182A7E19CULL + 0x13D0ULL * (uint64_t)(int64_t)(t))
#define item_type_bullet_velocity(t) SR_GLOBAL(float, 0x182A7E1A8ULL + 0x13D0ULL * (uint64_t)(int64_t)(t))
#define item_type_bullet_spread(t) SR_GLOBAL(float, 0x182A7E1ACULL + 0x13D0ULL * (uint64_t)(int64_t)(t))
#define item_mass(i) ITEM_FIELD(float, 0x18, i)
#define item_trigger_ticks(i) ITEM_FIELD(int32_t, 0x14C, i)

/* ---- routines of the original not ported yet (still in src/client) ------- */

/* Team damage done by a player: reported in the chat ("%s(%d) team damage:
   %d") and taken off the player's human, outside game types 4 and 5.
   0x14011B7F0 */
extern int64_t player_team_damage(int player, int damage) __asm__("sub_14011B7F0");
/* In the world game (type 4), an attack by one player on another raises the
   attacker's criminal rating (RosaServer: criminalRating), up to 1023.
   0x140116D80 */
extern void player_raise_criminal_rating(int attacker, int victim, int amount) __asm__("sub_140116D80");
/* RosaServer: Player.team. */
#define player_team(p) player_field(p, 0x84)
/* Computer disk jobs and mission application, restored from 0x1400C3ED0
   and 0x1400C8500. The disk-job return register is unused by callers. */
void computer_update_disk_job(int item);
void computer_update_program(int item);

/* Computer/disk item storage. RosaServer names +0x1658 computerTeam,
   +0x1664 computerMissionConnectTimer and +0x1668 computerMissionSubMenu.
   Other job fields are named from the work they perform here. */
#define item_disk_index(i) ITEM_FIELD(int32_t, 0x334, i)
#define computer_job_kind(i) ITEM_FIELD(int32_t, 0x1518, i)
#define computer_job_delay(i) ITEM_FIELD(int32_t, 0x151C, i)
#define computer_job_drive(i) ITEM_FIELD(int32_t, 0x1520, i)
#define computer_job_directory(i) ITEM_FIELD(uint32_t, 0x1524, i)
#define computer_job_next_directory(i) ITEM_FIELD(int32_t, 0x1528, i)
#define computer_job_next_file(i) ITEM_FIELD(int32_t, 0x152C, i)
#define computer_job_filename(i) ((char *)&ITEM_FIELD(uint8_t, 0x1530, i))
#define computer_job_content(i) ITEM_FIELD(uint32_t, 0x1550, i)
#define computer_key_queue_count(i) ITEM_FIELD(int32_t, 0x1554, i)
#define computer_key_queue(i, k) ITEM_FIELD(int32_t, 0x1558ULL + 4ULL * (uint64_t)(int64_t)(k), i)
#define computer_command_first_char(i) ITEM_FIELD(char, 0x13B4, i)
#define computer_team(i) ITEM_FIELD(int32_t, 0x1658, i)
#define computer_mission_action(i) ITEM_FIELD(int32_t, 0x1660, i)
#define computer_mission_connect_timer(i) ITEM_FIELD(int32_t, 0x1664, i)
#define computer_mission_submenu(i) ITEM_FIELD(int32_t, 0x1668, i)
#define computer_mission_document(i) ITEM_FIELD(int32_t, 0x166C, i)
#define computer_mission_scroll(i) ITEM_FIELD(int32_t, 0x1670, i)
#define computer_mission_selection(i) ITEM_FIELD(int32_t, 0x1674, i)
#define computer_mission_file_count(i) ITEM_FIELD(int32_t, 0x167C, i)
#define computer_mission_file(i, n) ITEM_FIELD(int32_t, 0x1680ULL + 4ULL * (uint64_t)(int64_t)(n), i)
#define mission_document_content(n) SR_GLOBAL(uint32_t, 0x16B2CCA30ULL + 0x21D74ULL * (uint64_t)(int64_t)(n))

/* Mission screen storage: project records are 0x21D74 bytes apart, with
   each team's status occupying 0x86C bytes. Names follow display usage. */
#define mission_team_intel_state(t) SR_GLOBAL(int32_t, 0x16D48232CULL + 20ULL * (uint64_t)(int64_t)(t))
#define mission_document_known(n) SR_GLOBAL(int32_t, 0x16B2AAF28ULL + 0x21D74ULL * (uint64_t)(int64_t)(n))
#define mission_document_name(n) ((const char *)&SR_GLOBAL(uint8_t, 0x16B2CCC50ULL + 0x21D74ULL * (uint64_t)(int64_t)(n)))
#define mission_document_team_suffix(n, t) ((const char *)&SR_GLOBAL(uint8_t, 0x16B2AB75CULL + 0x21D74ULL * (uint64_t)(int64_t)(n) + 0x86CULL * (uint64_t)(int64_t)(t)))
#define mission_document_status_count(n, t) SR_GLOBAL(int32_t, 0x16B2AAF58ULL + 0x21D74ULL * (uint64_t)(int64_t)(n) + 0x86CULL * (uint64_t)(int64_t)(t))
#define mission_document_status_line(n, t, line) ((const char *)&SR_GLOBAL(uint8_t, 0x16B2AAF5CULL + 0x21D74ULL * (uint64_t)(int64_t)(n) + 0x86CULL * (uint64_t)(int64_t)(t) + 256ULL * (uint64_t)(int64_t)(line)))

/* Restored mission screens and padded row helper. */
void computer_draw_mission_menu(int item);
void computer_draw_mission_document(int item);
void computer_draw_mission_upload(int item);
char *computer_write_padded_line(int item, int line, const char *text, uint8_t color, int width);
/* Current directory path on drive A or C. 0x1400C6B30 */
void computer_format_drive_path(char *out, int item, int drive);
#define computer_drive_depth(i, d) ITEM_FIELD(int32_t, 0x13FCULL + 72ULL * (uint64_t)(int64_t)(d), i)
#define computer_drive_directory(i, d, n) ITEM_FIELD(int32_t, 0x1400ULL + 72ULL * (uint64_t)(int64_t)(d) + 4ULL * (uint64_t)(int64_t)(n), i)

/* Boundaries still implemented by the client: terminal keys and decoding. */
extern int computer_process_key(int item, int key) __asm__("sub_1400C6D90");
extern void mission_decode_document(int document, int team) __asm__("sub_140195FB0");

/* The original's sprintf (the C runtime's, with its legacy options).
   0x140158AB0 */
extern void crt_sprintf(char *buffer, const char *format, ...) __asm__("sub_140158AB0");
/* The C runtime's rand, the original's own. 0x14023B1B0 */
extern int crt_rand(void) __asm__("rand");

/* ---- shared helpers ------------------------------------------------------ */

/* A bit of item_input_flags that is set now and was clear a tick ago. */
static inline int item_pressed(int item, uint32_t bit)
{
    return (item_input_flags(item) & bit) && !(item_last_input_flags(item) & bit);
}

/* ---- the types ------------------------------------------------------------ */

/* gun.c: every gun type. */
void gun_update(int item);

/* phone.c: Cell Phone and Pay Phone. */
int item_is_phone(int32_t type);
void phone_update(int item);

/* walkie_talkie.c */
void walkie_talkie_file(int item);
void walkie_talkie_update(int item);

/* key.c */
void key_update(int item);

/* computer.c: its tick, and where items attached to it sit. */
void computer_update(int item);
/* Draws the cipher's lines on the screen (rows 2, 5, ... 14 enciphered,
   the row below each decoded), then its letter list. 0x1400C5750 */
void computer_draw_cipher(int item);
/* The cipher's letter list on lines 17 to 21: each letter with how often it
   occurs (two digits), the selected one in colour 12, and below it the
   letter it stands for once revealed. 0x1400C5360 */
void computer_draw_letter_counts(int item);
/* The terminal's new line: the current line is coloured 15 and shared, the
   screen scrolls when the cursor would leave it, and the cursor goes to the
   start of the next line (of 32, round). 0x1400C3E00 */
void computer_new_line(int item);
/* computer_snake.c: one tick of the snake game (state 3). 0x1400C9820 */
void computer_update_snake(int item);
/* computer_snake.c: the snake's screen. 0x1400C8E10 */
void snake_draw(int item);
/* computer_snake.c: a new level of the snake game. 0x1400C92B0 */
void snake_start_level(int item);
void computer_place_child(WorldItem *child, const WorldItem *computer, float position[3]);

/* briefcase.c: opening and closing, and where cash inside sits. */
void briefcase_toggle(int item);
void briefcase_place_child(const WorldItem *child, float position[3]);

/* grenade.c, bandage.c, burger.c, arcade.c. Bandage and burger return
   whether a use was spent. */
void grenade_update(int item);
/* The blast (RosaServer: grenadeExplosion). 0x1400A70B0 */
void grenade_explode(int item);
int bandage_update(int item, int held_down);
int burger_update(int item, int held_down, int was_held_down);
void arcade_update(int item);

#endif
