// NC_WRAPPERS: 14007C040 14007C080 14007C0C0 14007C1C0 14007C3A0
/* Network socket helpers verification. 
 * Since these call winsock imports, they are marked DRAFT, NOT VERIFIED.
 * The suite provides the necessary prototypes and invokes them with 
 * various inputs to check for crashes and basic logic.
 */
#include <string.h>
#include <winsock2.h>
#include "nc.h"

/* Draft prototypes */
int sr_net_cleanup_pending(void);
int sr_net_close_socket(int peer);
int sr_net_open_socket(int peer, uint16_t port, int bind_enabled, uint8_t *remote_ip);
int sr_net_recv_packet(int peer, int packet_idx);
int sr_net_reassemble_fragments(int peer, int packet_idx);

static void run_case(int n)
{
    nc_seed((uint64_t)n * 123 + 456);
    int peer = (int)nc_rand_below(100);
    uint16_t port = (uint16_t)nc_rand();
    int bind_enabled = (n % 2 == 0);
    uint8_t remote_ip[4];
    for (int i = 0; i < 4; i++) remote_ip[i] = (uint8_t)nc_rand();
    
    nc_restore();
    
    // Test cleanup
    int res_cleanup = sr_net_cleanup_pending();
    nc_line("cleanup n%d res%d", n, res_cleanup);
    
    // Test open
    int res_open = sr_net_open_socket(peer, port, bind_enabled, remote_ip);
    nc_line("open n%d peer%d port%d res%d", n, peer, port, res_open);
    
    // Test close
    int res_close = sr_net_close_socket(peer);
    nc_line("close n%d peer%d res%d", n, peer, res_close);
    
    // Test recv (might fail due to no real network)
    int p_idx = (int)nc_rand_below(100);
    int res_recv = sr_net_recv_packet(peer, p_idx);
    nc_line("recv n%d peer%d pidx%d res%d", n, peer, p_idx, res_recv);
    
    // Test reassemble
    int res_reassemble = sr_net_reassemble_fragments(peer, p_idx);
    nc_line("reassemble n%d peer%d pidx%d res%d", n, peer, p_idx, res_reassemble);
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(200); n++)
        run_case(n);
    return 0;
}
