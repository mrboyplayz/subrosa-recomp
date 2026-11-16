/* Reconstructed networking routines, ported from the original executable.
 *
 * These are the peer-socket management entry points: the game keeps one
 * record per peer in the shared state region (the socket handle, the bound
 * address, and bookkeeping flags), and the network layer reaches it through
 * these routines.
 */
#include <stdint.h>
#include <string.h>

#include "network.h"
#include "memory.h"
#include "arith.h"

/* The winsock thunks of the recompiled client, still in src/client/. */
extern int64_t socket_sr(int64_t, int64_t, int64_t);
extern int64_t htons_sr(int64_t);
extern int64_t bind_sr(int64_t, int64_t, int64_t);
extern int64_t ioctlsocket_sr(int64_t, int64_t, int64_t);
extern int64_t closesocket_sr(int64_t);

unsigned int *sr_net_peer_record(int peer, unsigned int field)
{
    /* The records live at dword index peer * 1048782 from 0x140404A6C. */
    return &dword_140404A6C[peer * SR_NET_PEER_STRIDE + field];
}

/* Close a peer's socket and mark the record closed. 0x14007C080 */
void sr_net_close_socket(int peer)
{
    unsigned int handle = *sr_net_peer_record(peer, SR_NET_PEER_HANDLE);
    *sr_net_peer_record(peer, SR_NET_PEER_OPEN) = 0;
    closesocket_sr((int64_t)handle);
}

/* Open a UDP socket for a peer and record it. The sockaddr_in is filled in
   regardless of bind; the bind branch (a3 nonzero) leaves the record open
   and non-blocking, the connect branch (a4, a remote target address) leaves
   it closed until a successful connect elsewhere marks it open. The
   original stores the ioctlsocket result in both branches. 0x14007C0C0 */
int64_t sr_net_open_socket(int peer, uint16_t port, int bind_socket,
                           const unsigned char *connect_address)
{
    int64_t result;
    int64_t handle = socket_sr(2, 2, 17);
    unsigned int *family = sr_net_peer_record(peer, SR_NET_PEER_FAMILY);
    *family = (*family & 0xFFFF0000u) | SR_NET_AF_INET;
    *sr_net_peer_record(peer, SR_NET_PEER_HANDLE) = (unsigned int)handle;
    *sr_net_peer_record(peer, SR_NET_PEER_PORT) =
        (*sr_net_peer_record(peer, SR_NET_PEER_PORT) & 0xFFFF0000u) | port;
    *sr_net_peer_record(peer, SR_NET_PEER_ADDRESS) = 0;
    *family = (*family & 0xFFFFu) | ((unsigned int)htons_sr((int64_t)port) << 16);
    *sr_net_peer_record(peer, SR_NET_PEER_LENGTH) = sizeof(SockaddrIn);
    if (bind_socket == 0 ||
        (result = bind_sr((int64_t)*sr_net_peer_record(peer, SR_NET_PEER_HANDLE),
                          (int64_t)sr_net_peer_record(peer, SR_NET_PEER_FAMILY),
                          sizeof(SockaddrIn)),
         (unsigned int)result == 0))
    {
        if (connect_address) {
            unsigned char *target = (unsigned char *)sr_net_peer_record(peer, SR_NET_PEER_ADDRESS);
            /* Keep the original's three ordered byte copies, including a
               connect_address that overlaps the record. */
            for (int k = 0; k < 3; k++)
                memcpy(&target[k], &connect_address[k], 1);
        }
        unsigned int nonblocking = 1;
        result = ioctlsocket_sr((int64_t)*sr_net_peer_record(peer, SR_NET_PEER_HANDLE),
                                SR_NET_FIONBIO, (int64_t)&nonblocking);
        *sr_net_peer_record(peer, SR_NET_PEER_OPEN) = 1;
    }
    return result;
}

/* Open the master-server listener socket for one of the game's ports: a UDP
   socket recorded at 0x140404A6C[peer], a sockaddr_in built from the port in
   0x18539D3F8 (set from 0x151E45940), then the non-blocking ioctl. The
   original stores the ioctl result and marks the record open
   unconditionally. 0x14008EAD0 */
int64_t sr_net_master_listen(int peer)
{
    uint16_t port = (uint16_t)SR_GLOBAL(uint16_t, 0x18539D3F8ULL);
    int64_t handle = socket_sr(2, 2, 17);
    SR_GLOBAL(uint32_t, 0x140404A6CULL + 4 * (unsigned)peer) = (unsigned int)handle;
    SR_GLOBAL(uint16_t, SR_NET_MASTER_FAMILY) = SR_NET_AF_INET;
    SR_GLOBAL(uint32_t, SR_NET_MASTER_FAMILY + 4) = 0;
    SR_GLOBAL(uint16_t, SR_NET_MASTER_FAMILY + 2) =
        (uint16_t)htons_sr((int64_t)port);
    SR_GLOBAL(uint32_t, SR_NET_MASTER_LENGTH) = sizeof(SockaddrIn);
    int64_t nonblocking = 1;
    int64_t result = ioctlsocket_sr(handle, SR_NET_FIONBIO, (int64_t)&nonblocking);
    SR_GLOBAL(uint32_t, 0x140404A6CULL + 4 * (unsigned)peer + 4) = 1;
    return result;
} /* 0x14008EAD0 */

/* The same as sr_net_master_listen, but the sockaddr_in is bound first: the
   non-blocking ioctl and the open flag only follow a bind that returned 0,
   and the bind result is the return value otherwise. 0x14008EB80 */
int64_t sr_net_master_bind(int peer)
{
    uint16_t port = (uint16_t)SR_GLOBAL(uint16_t, 0x18539D3F8ULL);
    int64_t handle = socket_sr(2, 2, 17);
    SR_GLOBAL(uint32_t, 0x140404A6CULL + 4 * (unsigned)peer) = (unsigned int)handle;
    SR_GLOBAL(uint16_t, SR_NET_MASTER_FAMILY) = SR_NET_AF_INET;
    SR_GLOBAL(uint32_t, SR_NET_MASTER_FAMILY + 4) = 0;
    SR_GLOBAL(uint16_t, SR_NET_MASTER_FAMILY + 2) =
        (uint16_t)htons_sr((int64_t)port);
    SR_GLOBAL(uint32_t, SR_NET_MASTER_LENGTH) = sizeof(SockaddrIn);
    int64_t result = bind_sr(handle, (int64_t)&SR_GLOBAL(uint8_t, SR_NET_MASTER_FAMILY),
                             sizeof(SockaddrIn));
    if ((unsigned int)result == 0) {
        int64_t nonblocking = 1;
        result = ioctlsocket_sr(handle, SR_NET_FIONBIO, (int64_t)&nonblocking);
        SR_GLOBAL(uint32_t, 0x140404A6CULL + 4 * (unsigned)peer + 4) = 1;
    }
    return result;
} /* 0x14008EB80 */
