/* DRAFT, NOT VERIFIED. Network socket helpers.
 * These routines likely call real winsock (closesocket, socket, bind, ioctlsocket, recvfrom, sendto).
 * Since scripting every socket import is impractical, they are marked NOT VERIFIED.
 * The suite must cover these in the landing stage.
 *
 * To finish: move into src/engine/net_sockets.c (+ .h), rewire wrappers in client_network.c,
 * add t_netsockets.c + .mutations, prove plain and --client-wrappers.
 * Then mutate.
 */
#include <string.h>
#include <winsock2.h>
#include "memory.h"
#include "net_bits.h"

/* Thunks for winsock imports (declared in shared_client.h, used as engine ports) */
extern int closesocket_sr(int s);                      /* 0x140198FD7 */
extern int socket_sr(int af, int type, int protocol);   /* 0x14019902B */
extern int bind_sr(int s, const struct sockaddr *name, int namelen); /* 0x140198FD1 */
extern int ioctlsocket_sr(int s, long cmd, void *argp); /* 0x140198FE3 */
extern int recvfrom_sr(int s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen); /* 0x140199013 */
extern int sendto_sr(int s, const char *buf, int len, int flags, const struct sockaddr *to, int tolen); /* 0x140199025 */
extern uint32_t htonl_sr(uint32_t hostlong);           /* 0x140198FEF */
extern uint16_t htons_sr(uint16_t hostshort);          /* 0x140198FF5 */
extern uint32_t ntohl_sr(uint32_t netlong);            /* 0x140199001 */
extern uint16_t ntohs_sr(uint16_t netshort);           /* 0x140199007 */
extern void *crt_memcpy(void *dest, const void *src, size_t n); /* 0x1401FC920 */

/* Global state addresses recovered from disassembly/names.tsv */
#define g_160FC4824 SR_GLOBAL(uint32_t, 0x160FC4824ULL) /* network_cleanup_pending? */
#define g_1607B538C SR_GLOBAL(uint8_t, 0x1607B538CULL)  /* frag_buffer_base */
#define g_15B1D5CF8 SR_GLOBAL(uint8_t, 0x15B1D5CF8ULL)  /* frag_track_base */
#define g_15B1D5D00 SR_GLOBAL(uint32_t, 0x15B1D5D00ULL) /* frag_size_base */
#define g_15B1D5D04 SR_GLOBAL(uint8_t, 0x15B1D5D04ULL)  /* frag_data_base */
#define g_15B1D5CEC SR_GLOBAL(uint16_t, 0x15B1D5CECULL) /* frag_count_base */

/* Internal state offsets for the peer socket structure (from 0x140404A6C) */
#define SOCKET_OFFSET 112673944
#define STATUS_OFFSET 112673941
#define ADDR_OFFSET   112673945
#define BUFFER_OFFSET 112673946
#define LEN_OFFSET    112673949
#define PEER_ID_OFFSET 112673942
#define EXTRA_OFFSET  112673951
#define EXTRA_2_OFFSET 112673952

/* Packet record offset for buffer storage (from 0x140404A6C) */
#define PACKET_OFFSET 135184968
#define PACKET_S_OFFSET 135184965 /* status/cursor */
#define PACKET_L_OFFSET 135184966 /* length */
#define PACKET_R_OFFSET 135184967 /* return value/size */

/* 0x14007C040 */
int sr_net_cleanup_pending(void)
{
    int result = 0;
    if (g_160FC4824) {
        result = ((int (*)(void))0x140199049)(); /* calls WSACleanup */
        g_160FC4824 = 0;
    }
    return result;
}

/* 0x14007C080 */
int sr_net_close_socket(int peer)
{
    uint64_t base = (uint64_t)peer * 1048782ULL;
    int socket = (int)SR_GLOBAL(uint32_t, SR_STATE_BASE + base + SOCKET_OFFSET);
    int result = closesocket_sr(socket);
    SR_GLOBAL(uint32_t, SR_STATE_BASE + base + STATUS_OFFSET) = 0;
    return result;
}

/* 0x14007C0C0 */
int sr_net_open_socket(int peer, uint16_t port, int bind_enabled, uint8_t *remote_ip)
{
    uint64_t base = (uint64_t)peer * 1048782ULL;
    int socket = socket_sr(2, 2, 17); 
    
    SR_GLOBAL(uint16_t, SR_STATE_BASE + base + ADDR_OFFSET) = 2; 
    SR_GLOBAL(uint32_t, SR_STATE_BASE + base + SOCKET_OFFSET) = socket;
    SR_GLOBAL(uint16_t, SR_STATE_BASE + base + ADDR_OFFSET + 0x14) = port; 
    SR_GLOBAL(uint32_t, SR_STATE_BASE + base + ADDR_OFFSET + 0x0F) = 0; 
    
    uint16_t net_port = htons_sr(port);
    SR_GLOBAL(uint16_t, SR_STATE_BASE + base + ADDR_OFFSET + 0x0D) = net_port;
    SR_GLOBAL(uint32_t, SR_STATE_BASE + base + ADDR_OFFSET + 0x1B) = 16;
    
    if (bind_enabled) {
        struct sockaddr_in addr;
        addr.sin_family = AF_INET;
        addr.sin_port = net_port;
        addr.sin_addr.s_addr = 0;
        if (bind_sr(socket, (const struct sockaddr *)&addr, 16) != 0) {
            return -1;
        }
    }
    
    if (remote_ip) {
        SR_GLOBAL(uint8_t, SR_STATE_BASE + base + PEER_ID_OFFSET) = remote_ip[0];
        SR_GLOBAL(uint8_t, SR_STATE_BASE + base + PEER_ID_OFFSET + 1) = remote_ip[1];
        SR_GLOBAL(uint8_t, SR_STATE_BASE + base + PEER_ID_OFFSET + 2) = remote_ip[2];
        SR_GLOBAL(uint8_t, SR_STATE_BASE + base + PEER_ID_OFFSET + 3) = 0;
    }
    
    int optval = 1;
    ioctlsocket_sr(socket, 0x8004667E, &optval);
    SR_GLOBAL(uint32_t, SR_STATE_BASE + base + STATUS_OFFSET) = 1;
    return 0;
}

/* 0x14007C1C0 */
int sr_net_recv_packet(int peer, int packet_idx)
{
    uint64_t base = (uint64_t)peer * 1048782ULL;
    SR_GLOBAL(uint32_t, SR_STATE_BASE + base + BUFFER_OFFSET) = 0;
    
    int socket = (int)SR_GLOBAL(uint32_t, SR_STATE_BASE + base + SOCKET_OFFSET);
    uint8_t *packet_buf = (uint8_t *)SR_GLOBAL(uint32_t, SR_STATE_BASE + 16387ULL * packet_idx + PACKET_OFFSET);
    
    struct sockaddr_in from;
    int fromlen = 16;
    int bytes_received = recvfrom_sr(socket, (char *)packet_buf, 0x10000, 0, (struct sockaddr *)&from, &fromlen);
    
    if (bytes_received <= 0) return bytes_received;
    
    uint8_t *peer_id_expected = (uint8_t *)SR_GLOBAL(uint32_t, SR_STATE_BASE + base + PEER_ID_OFFSET);
    if (packet_buf[0] == peer_id_expected[0] && 
        packet_buf[1] == peer_id_expected[1] && 
        packet_buf[2] == peer_id_expected[2]) 
    {
        if (packet_buf[3] == 0x50) { 
            uint32_t val = ntohl_sr(SR_GLOBAL(uint32_t, SR_STATE_BASE + base + BUFFER_OFFSET));
            uint16_t port = ntohs_sr(SR_GLOBAL(uint16_t, SR_STATE_BASE + base + ADDR_OFFSET + 0x10));
            
            SR_GLOBAL(uint32_t, SR_STATE_BASE + base + EXTRA_OFFSET) = val;
            SR_GLOBAL(uint16_t, SR_STATE_BASE + base + EXTRA_2_OFFSET) = port;
            
            SR_GLOBAL(uint32_t, SR_STATE_BASE + 16387ULL * packet_idx + PACKET_S_OFFSET) = 4;
            SR_GLOBAL(uint32_t, SR_STATE_BASE + 16387ULL * packet_idx + PACKET_R_OFFSET) = bytes_received;
            return bytes_received;
        }
        if (packet_buf[3] == 0x66) { 
            uint32_t val = ntohl_sr(SR_GLOBAL(uint32_t, SR_STATE_BASE + base + BUFFER_OFFSET));
            uint16_t port = ntohs_sr(SR_GLOBAL(uint16_t, SR_STATE_BASE + base + ADDR_OFFSET + 0x10));
            
            SR_GLOBAL(uint32_t, SR_STATE_BASE + base + EXTRA_OFFSET) = val;
            SR_GLOBAL(uint16_t, SR_STATE_BASE + base + EXTRA_2_OFFSET) = port;
            
            SR_GLOBAL(uint32_t, SR_STATE_BASE + 16387ULL * packet_idx + PACKET_S_OFFSET) = 4;
            SR_GLOBAL(uint32_t, SR_STATE_BASE + 16387ULL * packet_idx + PACKET_R_OFFSET) = bytes_received;
            
            int reassembled = sr_net_reassemble_fragments(peer, packet_idx);
            if (reassembled) return reassembled;
        }
    }
    
    SR_GLOBAL(uint32_t, SR_STATE_BASE + base + BUFFER_OFFSET) = 0;
    return recvfrom_sr(socket, (char *)packet_buf, 0x10000, 0, (struct sockaddr *)&from, &fromlen);
}

/* 0x14007C3A0 */
int sr_net_reassemble_fragments(int peer, int packet_idx)
{
    uint64_t packet_base = SR_STATE_BASE + 16387ULL * packet_idx + PACKET_S_OFFSET;
    
    if (SR_GLOBAL(uint32_t, SR_STATE_BASE + 16387ULL * packet_idx + PACKET_L_OFFSET) > 0) {
        SR_GLOBAL(uint32_t, packet_base)++;
        SR_GLOBAL(uint32_t, SR_STATE_BASE + 16387ULL * packet_idx + PACKET_L_OFFSET) = 0;
    }
    
    uint32_t cursor = SR_GLOBAL(uint32_t, packet_base);
    if (cursor + 2 >= 0x10000) return 0;
    
    uint64_t peer_off = (uint64_t)peer * 0x400338ULL;
    uint64_t frag_track_base = 0x140000000ULL + 0x207B538CULL;
    uint64_t frag_data_base = 0x140000000ULL + 0x1B1D5D04ULL;
    uint64_t frag_count_base = 0x140000000ULL + 0x1B1D5CECULL;
    uint64_t frag_status_base = 0x140000000ULL + 0x1B1D5CFCULL;
    
    uint16_t frag_id = SR_GLOBAL(uint16_t, frag_track_base + peer_off + (uint64_t)packet_idx * 0x1000CULL + cursor);
    SR_GLOBAL(uint32_t, packet_base) = cursor + 2;
    
    uint8_t frag_type = SR_GLOBAL(uint8_t, SR_STATE_BASE + 16387ULL * packet_idx + PACKET_OFFSET + cursor + 2);
    
    if (frag_type >= 0x10) return 0;
    
    int found_idx = -1;
    for (int i = 0; i < 64; i++) {
        if (SR_GLOBAL(uint16_t, frag_track_base + peer_off + (uint64_t)i * 0x1000CULL + 0) == frag_id) {
            found_idx = i;
            break;
        }
    }
    
    if (found_idx == -1) {
        found_idx = SR_GLOBAL(uint32_t, frag_count_base + peer_off);
        SR_GLOBAL(uint16_t, frag_track_base + peer_off + (uint64_t)found_idx * 0x1000CULL + 0) = frag_id;
        SR_GLOBAL(uint32_t, frag_count_base + peer_off) = (found_idx + 1) & 0x3F;
    }
    
    int bytes_to_copy = SR_GLOBAL(uint32_t, SR_STATE_BASE + 16387ULL * packet_idx + PACKET_R_OFFSET) - cursor;
    uint64_t dest = frag_data_base + peer_off + (uint64_t)found_idx * 0x1000CULL + (frag_type * 1400);
    crt_memcpy((void *)dest, (void *)(SR_STATE_BASE + 16387ULL * packet_idx + PACKET_OFFSET + cursor), bytes_to_copy);
    
    int current_size = SR_GLOBAL(uint32_t, frag_data_base + peer_off + (uint64_t)found_idx * 0x1000CULL + (frag_type * 1400 + 0x400)); // This offset is a guess
    if (current_size < (frag_type * 1400 + bytes_to_copy)) {
        SR_GLOBAL(uint32_t, frag_data_base + peer_off + (uint64_t)found_idx * 0x1000CULL + 0x400) = frag_type * 1400 + bytes_to_copy;
    }
    
    SR_GLOBAL(uint32_t, frag_status_base + peer_off + (uint64_t)found_idx * 0x1000CULL) |= (1 << frag_type);
    
    // Check if all fragments before frag_type are present
    uint32_t status = SR_GLOBAL(uint32_t, frag_status_base + peer_off + (uint64_t)found_idx * 0x1000CULL);
    if ((status & ((1 << frag_type) - 1)) != ((1 << frag_type) - 1)) {
        return 0;
    }
    
    int total_size = SR_GLOBAL(uint32_t, frag_data_base + peer_off + (uint64_t)found_idx * 0x1000CULL + 0x400);
    crt_memcpy((void *)(SR_STATE_BASE + 16387ULL * packet_idx + PACKET_OFFSET), (void *)(frag_data_base + peer_off + (uint64_t)found_idx * 0x1000CULL), total_size);
    
    SR_GLOBAL(uint32_t, SR_STATE_BASE + 16387ULL * packet_idx + PACKET_R_OFFSET) = total_size;
    SR_GLOBAL(uint32_t, SR_STATE_BASE + 16387ULL * packet_idx + PACKET_S_OFFSET) = 4;
    
    return total_size;
}
