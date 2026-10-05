/* Adapted from RosaServer structs.h, MIT, Copyright (c) 2020 jdbool.
   Revision and license: docs/rosaserver-reference.md, docs/RosaServer-LICENSE.txt. */
#ifndef SR_SERVER_ENTITIES_H
#define SR_SERVER_ENTITIES_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
#define SR_SERVER_ASSERT static_assert
extern "C" {
#else
#define SR_SERVER_ASSERT _Static_assert
#endif

enum { SR_SERVER_MAX_PLAYERS = 256 };
typedef struct { int32_t type, a, b, c, d; char text[64]; } SrServerAction;
typedef struct { int32_t id; char text[64]; int32_t unknown; } SrServerMenuButton;
typedef struct {
    int32_t active;
    char name[32];
    int32_t unknown_24[2];
    uint32_t subRosaID, phoneNumber;
    int32_t isAdmin;
    uint32_t adminAttempts, accountID;
    uint8_t unknown_40[8];
    int32_t isReady, money, teamMoney, budget, corporateRating, criminalRating;
    uint8_t unknown_60[0x24];
    uint32_t team, teamSwitchTimer;
    int32_t stocks, unknown_90[2], spawnTimer, humanID;
    float gearX, leftRightInput, gearY, forwardBackInput, viewYawDelta;
    float viewPitch, freeLookYaw, freeLookPitch, viewYaw;
    uint8_t unknown_c4[0x20];
    float viewPitchDelta;
    uint8_t unknown_e8[0x38];
    uint32_t inputFlags, lastInputFlags;
    uint8_t unknown_128[0xc];
    int32_t zoomLevel;
    uint8_t unknown_138[0x20];
    int32_t inputType;
    uint8_t unknown_15c[8];
    int32_t menuTab;
    uint8_t unknown_168[0x4c];
    int32_t numActions, lastNumActions;
    uint8_t unknown_1bc[0xc];
    SrServerAction actions[64];
    uint8_t unknown_16c8[0x44c];
    int32_t numMenuButtons;
    SrServerMenuButton menuButtons[32];
    uint8_t unknown_2418[0x900];
    int32_t isBot, isZombie;
    uint8_t unknown_2d20[0x18];
    int32_t botHasDestination;
    float botDestination[3];
    uint8_t unknown_2d48[0xa64];
    int32_t gender, skinColor, hairColor, hair, eyeColor, model, suitColor;
    int32_t tieColor, unknown_37cc, head, necklace;
    uint8_t unknown_37d8[0x5c];
} SrServerPlayer;

typedef struct {
    int32_t active, playerID, humanID, receivingItemID, transmittingItemID;
    int32_t unknown_14[3];
    float distance, volume;
} SrServerEarShot;

typedef struct {
    uint32_t address, port;
    int32_t unknown_08[3], adminVisible, playerID, unknown_1c;
    int32_t bandwidth, timeoutTime;
    uint8_t unknown_28[0x24];
    int32_t numReceivedEvents;
    uint8_t unknown_50[0xc];
    SrServerEarShot earShots[8];
    int32_t spectatingHumanID;
    uint8_t unknown_1a0[0x2e040];
} SrServerConnection;

SR_SERVER_ASSERT(sizeof(SrServerAction) == 84, "Action stride");
SR_SERVER_ASSERT(sizeof(SrServerMenuButton) == 72, "Menu button stride");
SR_SERVER_ASSERT(sizeof(SrServerPlayer) == 14388, "Dedicated player stride");
SR_SERVER_ASSERT(offsetof(SrServerPlayer, inputFlags) == 0x120, "Input offset");
SR_SERVER_ASSERT(offsetof(SrServerPlayer, actions) == 0x1c8, "Action offset");
SR_SERVER_ASSERT(offsetof(SrServerPlayer, menuButtons) == 0x1b18, "Menu offset");
SR_SERVER_ASSERT(offsetof(SrServerPlayer, gender) == 0x37ac, "Appearance offset");
SR_SERVER_ASSERT(sizeof(SrServerEarShot) == 40, "Earshot stride");
SR_SERVER_ASSERT(sizeof(SrServerConnection) == 188896, "Connection stride");
SR_SERVER_ASSERT(offsetof(SrServerConnection, earShots) == 0x5c, "Earshot offset");

/* C adaptations of RosaServer helpers; invalid IDs return NULL instead of
   indexing outside the pool. Arrays/counts are supplied by the host runtime. */
SrServerPlayer *sr_server_connection_player(const SrServerConnection *connection,
    SrServerPlayer *players, size_t player_count);
SrServerConnection *sr_server_player_connection(int32_t player_id,
    SrServerConnection *connections, size_t connection_count);
SrServerAction *sr_server_player_action(SrServerPlayer *player, unsigned index);
SrServerMenuButton *sr_server_player_menu_button(SrServerPlayer *player, unsigned index);
SrServerEarShot *sr_server_connection_earshot(SrServerConnection *connection, unsigned index);
int sr_server_connection_received_event(const SrServerConnection *connection,
    int32_t event_index, uint16_t current_event_count);
void sr_server_format_address(uint32_t address, char output[16]);

#ifdef __cplusplus
}
#endif
#undef SR_SERVER_ASSERT
#endif
