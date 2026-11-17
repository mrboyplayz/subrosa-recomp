#include "net_misc.h"
#include "../engine/memory.h"
#include <string.h>

/* Externs for socket wrappers used in the original binary */
extern int socket_sr(int af, int type, int protocol);
extern int bind_sr(int s, const void *name, int namelen);
extern int ioctlsocket_sr(int s, long cmd, unsigned long *argp);
extern int sendto_sr(int s, const void *buf, int len, int flags, const void *to, int tolen);
extern int closesocket_sr(int s);
extern int htonl_sr(uint32_t hostlong);
extern uint16_t htons_sr(uint16_t hostshort);
extern void sub_14015AFD0(int a1, void *buf, int a3, int len);
extern void sub_140198fef(int a1);
extern void sub_140198ff5(int a1);
extern void sub_140198dc0(void *a1, void *a2, int a3);

/* 0x14008EAD0 */
int sr_net_create_nonblocking_socket(int socket_idx)
{
    uint32_t local_port = SR_GLOBAL(uint32_t, 0x151E45940);
    SR_GLOBAL(uint16_t, 0x18539D3F8) = (uint16_t)local_port;

    int sock = socket_sr(2, 2, 17);
    SR_GLOBAL(int, 0x18539D3A0 + socket_idx * 4) = sock;

    SR_GLOBAL(uint16_t, 0x18539D3E4) = 2;
    SR_GLOBAL(uint32_t, 0x18539D3E8) = 0;
    SR_GLOBAL(uint16_t, 0x18539D3E6) = htons_sr((uint16_t)local_port);
    SR_GLOBAL(uint32_t, 0x18539D3F4) = 16;

    unsigned long argp = 1;
    int result = ioctlsocket_sr(sock, 0x8004667E, &argp);
    SR_GLOBAL(int, 0x18539D3A0 + socket_idx * 4 + 4) = 1;

    return result;
}

/* 0x14008EB80 */
int sr_net_create_bind_socket(int socket_idx)
{
    uint32_t local_port = SR_GLOBAL(uint32_t, 0x151E45940);
    SR_GLOBAL(uint16_t, 0x18539D3F8) = (uint16_t)local_port;

    int sock = socket_sr(2, 2, 17);
    SR_GLOBAL(int, 0x18539D3A0 + socket_idx * 4) = sock;

    SR_GLOBAL(uint16_t, 0x18539D3E4) = 2;
    SR_GLOBAL(uint32_t, 0x18539D3E8) = 0;
    SR_GLOBAL(uint16_t, 0x18539D3E6) = htons_sr((uint16_t)local_port);
    SR_GLOBAL(uint32_t, 0x18539D3F4) = 16;

    int result = bind_sr(sock, (void *)0x18539D3E4, 16);
    if (result == 0)
    {
        unsigned long argp = 1;
        result = ioctlsocket_sr(sock, 0x8004667E, &argp);
        SR_GLOBAL(int, 0x18539D3A0 + socket_idx * 4 + 4) = 1;
    }
    return result;
}

/* 0x1400805E0 */
int sr_net_close_socket(int socket_idx)
{
    int sock = SR_GLOBAL(int, 0x18539D3A0 + socket_idx * 4);
    int result = closesocket_sr(sock);
    SR_GLOBAL(int, 0x18539D3A0 + socket_idx * 4 + 4) = 0;
    return result;
}

/* 0x14007C660 */
int sr_net_send_packet(int socket_idx, int target_idx, uint32_t port, uint16_t target_port)
{
    int *packet_record = (int *)(0x140000000 + 0x204B0000 + target_idx * 16387 * 4); 
    // Note: the offset in decompiled C was 135184966, which is 0x08110006.
    // 0x140404A6C + 0x08110006 * 4 = 0x140404A6C + 0x20440018 = 0x160844A84.
    // Let's use the disassembled offsets relative to 0x140000000.
    
    uint32_t *frag_state = (uint32_t *)(0x140000000 + 0x207B5380);
    if (*frag_state > 0)
    {
        SR_GLOBAL(int, 0x1607B5380)++;
        SR_GLOBAL(uint32_t, 0x1607B5384) = 0;
    }
    
    int byte_count = SR_GLOBAL(int, 0x1607B5380);
    if (byte_count > 1400)
    {
        if (byte_count <= 0x10000)
        {
            int fragments = (byte_count >> 9) + (byte_count >> 31) + 1;
            if (fragments > 0)
            {
                int sock = SR_GLOBAL(int, 0x18539D3A0 + socket_idx * 4);
                void *source_buffer = (void *)(0x140000000 + 0x1B1D5CD8 + target_idx * 16387 * 4); // Approximate
                
                for (int i = 0; i < fragments; i++)
                {
                    SR_GLOBAL(uint32_t, 0x1608353EC) = (uint32_t)0; // placeholder
                    SR_GLOBAL(uint16_t, 0x1608353F0) = (uint16_t)0; // placeholder
                    SR_GLOBAL(uint64_t, 0x1608353E0) = 8;
                    SR_GLOBAL(uint8_t, 0x1608353EF) = 102;
                    SR_GLOBAL(uint8_t, 0x1608353F2) = (uint8_t)i;
                    SR_GLOBAL(uint8_t, 0x1608353F3) = (uint8_t)fragments;
                    
                    int send_len = (byte_count <= 1400) ? byte_count : 1400;
                    memcpy((void *)0x1608353F4, source_buffer, send_len);
                    SR_GLOBAL(uint64_t, 0x1608353E0) += send_len;
                    
                    if (byte_count <= 1400) byte_count = 0;
                    else {
                        byte_count -= 1400;
                        SR_GLOBAL(uint64_t, 0x1608353E0) = 1408;
                    }
                    
                    uint32_t n_port = htonl_sr(port);
                    uint16_t n_tport = htons_sr(target_port);
                    SR_GLOBAL(uint32_t, 0x18539D3A0 + 0) = n_port; // Placeholder for socket record
                    SR_GLOBAL(uint16_t, 0x18539D3E6) = n_tport;
                    
                    sendto_sr(sock, (void *)0x1608353EC, (int)SR_GLOBAL(uint64_t, 0x1608353E0), 0, (void *)0x18539D3E4, 16);
                    
                    source_buffer = (char *)source_buffer + 1400;
                }
            }
            SR_GLOBAL(uint16_t, 0x160B1D5CEE + target_idx * 16387 * 4)++; // Approximate
        }
    }
    else
    {
        int sock = SR_GLOBAL(int, 0x18539D3A0 + socket_idx * 4);
        SR_GLOBAL(uint8_t, 0x1608353EF) = 80;
        SR_GLOBAL(uint32_t, 0x18539D3A0 + 12) = htonl_sr(port); // Approximate
        SR_GLOBAL(uint16_t, 0x18539D3E6) = htons_sr(target_port);
        
        return sendto_sr(sock, (void *)0x1608353F4, byte_count, 0, (void *)0x18539D3E4, 16);
    }
    return 0;
}

/* 0x140130350 */
void sr_net_flush_outgoing(int target_idx, uint16_t target_port, void *context)
{
    int out_byte = SR_GLOBAL(int, 0x18539D3FC);
    int out_bit = SR_GLOBAL(int, 0x18539D400);
    
    if (out_bit > 0)
    {
        out_byte++;
        SR_GLOBAL(int, 0x18539D400) = 0;
        SR_GLOBAL(int, 0x18539D3FC) = out_byte;
    }
    
    if (out_byte > 1200)
    {
        int fragments = (out_byte >> 10) + 1;
        int element_index = 0;
        
        for (int i = 0; i < fragments; i++)
        {
            SR_GLOBAL(uint32_t, 0x185A2D7E4) = 0;
            if (SR_GLOBAL(uint32_t, 0x185A2D7EC) != 0)
            {
                SR_GLOBAL(uint32_t, 0x185A2D7F0) = SR_GLOBAL(uint32_t, 0x185A2D7F0); // placeholder
            }
            else
            {
                SR_GLOBAL(uint32_t, 0x185A2D7F0) = 0; // placeholder
            }
            
            SR_GLOBAL(uint32_t, 0x185A2D7E0) = 8;
            uint8_t hibyte = (SR_GLOBAL(uint32_t, 0x185A2D7EC) == 0) ? fragments : (uint8_t)0;
            SR_GLOBAL(uint8_t, 0x185A2D7F7) = hibyte;
            
            int saved_out_byte = out_byte;
            if (out_byte > 1024) out_byte = 1024;
            out_byte -= 1024;
            if (saved_out_byte <= 1024) out_byte = 0;
            
            sub_14015AFD0(0, (void *)(0x140000000 + 0x289301094 + 256 * element_index), 1, saved_out_byte > 1024 ? 1024 : saved_out_byte);
            
            if (target_idx)
            {
                uint32_t n_port = htonl_sr(target_idx);
                uint16_t n_tport = htons_sr(target_port);
                SR_GLOBAL(uint32_t, 0x18539D3E8) = n_port;
                SR_GLOBAL(uint16_t, 0x18539D3E6) = n_tport;
                sendto_sr(SR_GLOBAL(int, 0x18539D3A0), (void *)0x185A2D7F0, (int)SR_GLOBAL(uint32_t, 0x185A2D7E0), 0, (void *)0x18539D3E4, 16);
            }
            else
            {
                sub_140198dc0(context, (void *)0x185A2D7F0, (int)SR_GLOBAL(uint32_t, 0x185A2D7E0));
            }
            element_index++;
        }
        SR_GLOBAL(uint16_t, 0x1853BD424)++;
    }
    else if (target_idx)
    {
        if (SR_GLOBAL(int, 0x18539D3A0 + 4))
        {
            uint32_t n_port = htonl_sr(target_idx);
            uint16_t n_tport = htons_sr(target_port);
            SR_GLOBAL(uint32_t, 0x18539D3E8) = n_port;
            SR_GLOBAL(uint16_t, 0x18539D3E6) = n_tport;
            sendto_sr(SR_GLOBAL(int, 0x18539D3A0), (void *)0x18539D404, out_byte, 0, (void *)0x18539D3E4, 16);
        }
    }
    else
    {
        sub_140198dc0(context, (void *)0x18539D404, out_byte);
    }
}
