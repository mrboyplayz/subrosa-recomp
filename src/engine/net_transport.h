/* Game packet transport: shared UDP sockets, Steam peers and fragments.
   The packet bit codecs stay in net_bits.c. */
#ifndef SR_ENGINE_NET_TRANSPORT_H
#define SR_ENGINE_NET_TRANSPORT_H
#include "memory.h"
#include <stddef.h>

typedef struct NetSocketAddress {
    uint16_t family;
    uint16_t port;                 /* network byte order */
    uint32_t address;              /* network byte order */
    uint8_t padding[8];
} NetSocketAddress;

typedef struct NetPacketStream {
    int32_t position;
    int32_t bit;
    int32_t length;
    int32_t reading;
    uint8_t data[65536];
} NetPacketStream;

typedef struct NetFragmentSlot {
    uint32_t id;
    uint32_t received;
    int32_t length;
    uint8_t data[65536];
} NetFragmentSlot;

_Static_assert(sizeof(NetSocketAddress) == 16, "network sockaddr size");
_Static_assert(sizeof(NetPacketStream) == 0x10010, "packet stream stride");
_Static_assert(sizeof(NetFragmentSlot) == 0x1000C, "fragment slot stride");

#define net_selected_socket SR_GLOBAL(int32_t, 0x18539D3A0ULL)
#define net_socket_enabled(i) SR_GLOBAL(int32_t, 0x18539D3A4ULL + 4ULL * (uint64_t)(int64_t)(i))
#define net_socket_handle(i) SR_GLOBAL(int32_t, 0x18539D3C4ULL + 4ULL * (uint64_t)(int64_t)(i))
#define net_socket_address SR_GLOBAL(NetSocketAddress, 0x18539D3E4ULL)
#define net_socket_address_size SR_GLOBAL(int32_t, 0x18539D3F4ULL)
#define net_local_port SR_GLOBAL(uint16_t, 0x18539D3F8ULL)
#define net_configured_port SR_GLOBAL(int32_t, 0x151E45940ULL)
#define net_send_position SR_GLOBAL(int32_t, 0x18539D3FCULL)
#define net_send_bit SR_GLOBAL(int32_t, 0x18539D400ULL)
#define net_send_buffer (&SR_GLOBAL(uint8_t, 0x18539D404ULL))
#define net_remote_address SR_GLOBAL(uint32_t, 0x1853AD404ULL)
#define net_remote_port SR_GLOBAL(uint16_t, 0x1853AD408ULL)
#define net_remote_steam_peer SR_GLOBAL(uint64_t, 0x1853AD410ULL)
#define net_receive_length SR_GLOBAL(int32_t, 0x1853AD418ULL)
#define net_receive_position SR_GLOBAL(int32_t, 0x1853AD41CULL)
#define net_receive_bit SR_GLOBAL(int32_t, 0x1853AD420ULL)
#define net_receive_buffer (&SR_GLOBAL(uint8_t, 0x1853AD424ULL))
#define net_next_fragment_id SR_GLOBAL(uint16_t, 0x1853BD424ULL)
#define net_fragment_head SR_GLOBAL(int32_t, 0x1853BD428ULL)
#define net_fragment_tail SR_GLOBAL(int32_t, 0x1853BD42CULL)
#define net_fragment_slot(i) SR_GLOBAL(NetFragmentSlot, 0x1853BD430ULL + 0x1000CULL * (uint64_t)(int64_t)(i))
#define net_packet_stream(i) SR_GLOBAL(NetPacketStream, 0x185A2D7E0ULL + 0x10010ULL * (uint64_t)(int64_t)(i))

extern uint32_t net_regular_magic __asm__("dword_1402B2658");
extern uint32_t net_fragment_magic __asm__("unk_1402B26C0");

/* These are the original transport/CRT boundaries, with readable names.
   Socket handles are loaded as signed 32-bit words in the original. */
extern uint64_t net_socket_create(int64_t family, int64_t type, int64_t protocol) __asm__("socket_sr");
extern uint64_t net_socket_bind(int64_t socket, NetSocketAddress *address, uint64_t size) __asm__("bind_sr");
extern uint64_t net_socket_ioctl(int64_t socket, uint64_t command, uint32_t *argument) __asm__("ioctlsocket_sr");
extern uint64_t net_socket_close(int64_t socket) __asm__("closesocket_sr");
extern uint64_t net_host_to_address(uint64_t value) __asm__("htonl_sr");
extern uint64_t net_host_to_port(uint64_t value) __asm__("htons_sr");
extern uint64_t net_address_to_host(uint64_t value) __asm__("ntohl_sr");
extern uint64_t net_port_to_host(uint64_t value) __asm__("ntohs_sr");
extern uint64_t net_udp_receive(int64_t socket, void *data, uint64_t capacity, uint64_t flags,
                                NetSocketAddress *from, int32_t *from_size) __asm__("recvfrom_sr");
extern uint64_t net_udp_send(int64_t socket, const void *data, uint64_t length, uint64_t flags,
                             NetSocketAddress *to, uint32_t to_size) __asm__("sendto_sr");
extern uint64_t net_steam_receive(uint64_t *peer, void *data, int32_t *length, uint32_t capacity) __asm__("sub_140198C60");
extern uint64_t net_steam_send(uint64_t peer, const void *data, uint32_t length) __asm__("sub_140198DC0");
extern void *net_copy_bytes(void *out, const void *in, uint64_t length) __asm__("sub_1401FC920");

uint64_t net_open_udp(int socket);
uint64_t net_bind_udp(int socket);
uint64_t net_close_udp(int socket);
uint32_t net_packet_transfer(int stream, void *data, int count, int size);
void net_send_packet(uint32_t address, uint16_t port, uint64_t steam_peer);
uint32_t net_accept_fragment(int length);
uint32_t net_receive_packet(void);
#endif
