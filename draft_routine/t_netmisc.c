#include <string.h>
#include "nc.h"
#include "net_misc.h"

/* Mocking the socket wrappers for the harness */
static int mock_socket = 0;
static int mock_bind = 0;
static int mock_ioctlsocket = 0;
static int mock_sendto = 0;
static int mock_closesocket = 0;

void nc_bind_socket_mock(int s, const void *name, int namelen) {
    mock_bind = 0; 
}

int main(void)
{
    nc_map_image();
    
    for (int i = 0; i < nc_cases(200); i++)
    {
        int sock_idx = nc_rand_below(10);
        int target_idx = nc_rand_below(10);
        uint32_t port = nc_rand();
        uint16_t tport = (uint16_t)nc_rand();
        
        nc_line("case %d", i);
        
        int r1 = sr_net_create_nonblocking_socket(sock_idx);
        nc_line("r1 %d", r1);
        
        int r2 = sr_net_create_bind_socket(sock_idx);
        nc_line("r2 %d", r2);
        
        int r3 = sr_net_send_packet(sock_idx, target_idx, port, tport);
        nc_line("r3 %d", r3);
        
        sr_net_flush_outgoing(target_idx, tport, NULL);
        
        int r4 = sr_net_close_socket(sock_idx);
        nc_line("r4 %d", r4);
    }
    
    return 0;
}
