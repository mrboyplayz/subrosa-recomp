/* C adaptations of RosaServer api.cpp, MIT, Copyright (c) 2020 jdbool. */
#include "server_entities.h"
#include <stdio.h>

SrServerPlayer *sr_server_connection_player(const SrServerConnection *connection,
    SrServerPlayer *players, size_t player_count) {
    if (!connection || !players || connection->playerID < 0 ||
        (size_t)connection->playerID >= player_count) return NULL;
    return &players[connection->playerID];
}

SrServerConnection *sr_server_player_connection(int32_t player_id,
    SrServerConnection *connections, size_t connection_count) {
    if (!connections || player_id < 0 || player_id >= SR_SERVER_MAX_PLAYERS) return NULL;
    for (size_t i = 0; i < connection_count; ++i)
        if (connections[i].playerID == player_id) return &connections[i];
    return NULL;
}

SrServerAction *sr_server_player_action(SrServerPlayer *player, unsigned index) {
    return player && index < 64 ? &player->actions[index] : NULL;
}

SrServerMenuButton *sr_server_player_menu_button(SrServerPlayer *player, unsigned index) {
    return player && index < 32 ? &player->menuButtons[index] : NULL;
}

SrServerEarShot *sr_server_connection_earshot(SrServerConnection *connection, unsigned index) {
    return connection && index < 8 ? &connection->earShots[index] : NULL;
}

int sr_server_connection_received_event(const SrServerConnection *connection,
    int32_t event_index, uint16_t current_event_count) {
    if (!connection || event_index < 0 || event_index >= UINT16_MAX) return 0;
    int32_t through_event = event_index + 1;
    /* Retains RosaServer's event-counter wrap behavior. */
    return current_event_count < through_event || connection->numReceivedEvents >= through_event;
}

void sr_server_format_address(uint32_t address, char output[16]) {
    if (!output) return;
    snprintf(output, 16, "%u.%u.%u.%u", (unsigned)(address >> 24),
        (unsigned)((address >> 16) & 255), (unsigned)((address >> 8) & 255),
        (unsigned)(address & 255));
}
