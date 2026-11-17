#ifndef NET_MISC_H
#define NET_MISC_H

#include <stdint.h>

/* 0x14008EAD0 */
int sr_net_create_nonblocking_socket(int socket_idx);

/* 0x14008EB80 */
int sr_net_create_bind_socket(int socket_idx);

/* 0x1400805E0 */
int sr_net_close_socket(int socket_idx);

/* 0x14007C660 */
int sr_net_send_packet(int socket_idx, int target_idx, uint32_t port, uint16_t target_port);

/* 0x140130350 */
void sr_net_flush_outgoing(int target_idx, uint16_t target_port, void *context);

#endif
