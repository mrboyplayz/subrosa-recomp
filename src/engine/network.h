/* Reconstructed networking routines, ported from the original executable. */
#ifndef SR_ENGINE_NETWORK_H
#define SR_ENGINE_NETWORK_H

#include <stdint.h>

#include "memory.h"

/* The winsock sockaddr_in, as the original lays it out (winsock.h). */
typedef struct SockaddrIn {
    uint16_t family;       /* AF_INET */
    uint16_t port;         /* network byte order */
    uint32_t address;      /* network byte order */
    uint8_t zero[8];       /* padding */
} SockaddrIn;

/* Per-peer socket record (stride 1048782 dwords), 0x140404A6C-relative
 * (dword indexes 112673941..112673952; byte offsets 0x1B2CD54 up):
 *   112673944: SOCKET handle
 *   112673941: 0 = not bound / open, 1 = open and non-blocking
 *   112673945: family (low half) and network-byte-order port (high half),
 *              the start of the sockaddr_in the calls pass
 *   112673946: sockaddr_in address, network byte order (and the recvfrom
 *              scratch for the peer address read back)
 *   112673949: sizeof(sockaddr_in) (recvfrom's optlen)
 *   112673950: the port the peer was opened for
 *   112673951: recvfrom's peer address, network byte order
 *   112673952: recvfrom's peer port, network byte order */
#define SR_NET_PEER_STRIDE 1048782u
#define SR_NET_PEER_OPEN     112673941u
#define SR_NET_PEER_HANDLE   112673944u
#define SR_NET_PEER_FAMILY   112673945u
#define SR_NET_PEER_ADDRESS  112673946u
#define SR_NET_PEER_LENGTH   112673949u
#define SR_NET_PEER_PORT     112673950u
#define SR_NET_PEER_FROM     112673951u
#define SR_NET_PEER_FROMPORT 112673952u

/* The record for one peer's field (the address-named accessors keep the
 * rest of the code off raw indexes). */
unsigned int *sr_net_peer_record(int peer, unsigned int field);

/* socket(2, 2, 17): AF_INET, SOCK_DGRAM, IPPROTO_UDP, and the non-blocking
 * FIONBIO command of ioctlsocket (winsock.h). */
#define SR_NET_AF_INET  2u
#define SR_NET_SOCK_DGRAM 2u
#define SR_NET_IPPROTO_UDP 17u
#define SR_NET_FIONBIO 0x8004667EuLL

/* Close a peer's socket and mark the record closed. */
void sr_net_close_socket(int peer); /* 0x14007C080 */

/* Open a UDP socket for a peer and record it. The sockaddr is filled in
 * regardless of bind; `bind` (when bind_socket is nonzero) leaves the
 * record open and non-blocking, `connect` (connect_address, a remote target
 * address) leaves it closed until a successful connect marks it open. The
 * original stores the ioctlsocket result in both branches. */
int64_t sr_net_open_socket(int peer, uint16_t port, int bind_socket,
                           const unsigned char *connect_address); /* 0x14007C0C0 */

/* The game-wide UDP scratch the master-socket routines share (0x18539D3E4):
 * a sockaddr_in (family, network-byte-order port, address, sizeof) with the
 * port echo (0x18539D3F8), the socket-handle slot base (0x140404A6C), the
 * sizeof the scratch holds (0x18539D3F4), and the open flags one past each
 * handle slot. */
#define SR_NET_MASTER_FAMILY 0x18539D3E4ULL
#define SR_NET_MASTER_LENGTH 0x18539D3F4ULL
#define SR_NET_MASTER_PORT   0x18539D3F8ULL

/* Open the master-server listener socket for one of the game's ports. */
int64_t sr_net_master_listen(int peer); /* 0x14008EAD0 */
/* The same, but the sockaddr_in is bound first; the non-blocking ioctl and
 * the open flag only follow a bind that returned 0. */
int64_t sr_net_master_bind(int peer); /* 0x14008EB80 */

#endif
