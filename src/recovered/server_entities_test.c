#include "server_entities.h"
#include <stdio.h>
#include <string.h>
#define CHECK(x) do { if (!(x)) { fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #x); return 1; } } while (0)

int main(void) {
    static SrServerPlayer players[256];
    static SrServerConnection connections[3];
    char address[16];
    connections[0].playerID = -1;
    connections[1].playerID = 255;
    connections[2].playerID = 0;
    CHECK(sr_server_connection_player(&connections[0], players, 256) == NULL);
    CHECK(sr_server_connection_player(&connections[1], players, 256) == &players[255]);
    CHECK(sr_server_connection_player(&connections[1], players, 255) == NULL);
    CHECK(sr_server_connection_player(NULL, players, 256) == NULL);
    CHECK(sr_server_player_connection(255, connections, 3) == &connections[1]);
    CHECK(sr_server_player_connection(255, connections, 1) == NULL);
    CHECK(sr_server_player_connection(-1, connections, 3) == NULL);
    CHECK(sr_server_player_action(players, 63) == &players[0].actions[63]);
    CHECK(sr_server_player_action(players, 64) == NULL);
    CHECK(sr_server_player_menu_button(players, 31) == &players[0].menuButtons[31]);
    CHECK(sr_server_player_menu_button(players, 32) == NULL);
    CHECK(sr_server_connection_earshot(connections, 7) == &connections[0].earShots[7]);
    CHECK(sr_server_connection_earshot(connections, 8) == NULL);
    connections[0].numReceivedEvents = 10;
    CHECK(sr_server_connection_received_event(connections, 9, 12));
    CHECK(!sr_server_connection_received_event(connections, 10, 12));
    CHECK(sr_server_connection_received_event(connections, 10, 0));
    CHECK(!sr_server_connection_received_event(connections, -1, 12));
    CHECK(!sr_server_connection_received_event(connections, INT32_MAX, 12));
    sr_server_format_address(0x7f000001u, address);
    CHECK(strcmp(address, "127.0.0.1") == 0);
    sr_server_format_address(UINT32_MAX, address);
    CHECK(strcmp(address, "255.255.255.255") == 0);
    puts("PASS: RosaServer-derived entity access, bounds, event wrap and address helpers.");
    return 0;
}
