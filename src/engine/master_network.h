/* Master-server client: master authentication, the info fetch and the
 * inbound packet pump. Original routines live at 0x14006BED0, 0x1400A3F30
 * and 0x14011C760 in the executable.
 *
 * State the three routines share lives in the flat game region and in the
 * inbound packet cursor (packet_in_*) that the whole network stack reads
 * through sr_net_read_bytes/sr_net_write_bytes.
 */
#ifndef SR_ENGINE_MASTER_NETWORK_H
#define SR_ENGINE_MASTER_NETWORK_H

/* Master authentication state machine: sends the steam ticket or the
 * master round state, then consumes 72/73 replies. */
void sr_master_authenticate(void);

/* Fetch the master server address from www.crypticsea.com and parse the
 * reply: returns 1 when g_master_server_ip/g_master_server_port were set. */
int sr_connect_master_server(void);

/* Pump inbound packets: recvfrom (or the replay shim) until a packet of a
 * recognized kind arrives; returns its length. */
int sr_pump_inbound_packets(void);

#endif
