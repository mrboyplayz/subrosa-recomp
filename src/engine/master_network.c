/* Master-server client: authentication, the server-info fetch and the
 * inbound packet pump.
 *
 * Ported from 0x14006BED0 (sr_master_authenticate), 0x1400A3F30
 * (sr_connect_master_server) and 0x14011C760 (sr_pump_inbound_packets).
 */
#include <stdint.h>
#include <string.h>

#include "master_network.h"
#include "crt.h"
#include "memory.h"
#include "net_bits.h"

/* ---- original routines this module calls (still in src/client/) ------- */
extern void sub_140198D20(void *call_id_stage); /* Steam register, 0x140198D20 */
extern uint32_t sub_140198F9B(void); /* SDL_GetTicks thunk, 0x140198F9B */
extern void sub_140198FA1(int64_t milliseconds);
extern int64_t sub_140130350(uint32_t address, uint16_t port, int flags);
extern int64_t sub_14011BD70(int length);
extern int64_t sub_14011C760(void);
extern int64_t sub_140198C60(uint64_t *out, void *buffer, int *written, unsigned int size);
extern void sub_1401F8694(void) __attribute__((noreturn));
/* crt_chdir: declared in crt.h as long long crt_chdir(char *path) */

/* The winsock thunks of the recompiled client, still in src/client/
 * (see src/engine/network.c for the same pattern). */
extern int64_t socket_sr(int64_t family, int64_t type, int64_t protocol);
extern int64_t closesocket_sr(int64_t socket);
extern int64_t connect_sr(int64_t socket, const void *name, int64_t namelen);
extern int64_t ioctlsocket_sr(int64_t socket, int64_t command, void *argument);
extern int64_t getsockopt_sr(int64_t socket, int64_t level, int64_t name,
                             void *value, void *length);
extern int64_t _WSAFDIsSet_sr(int64_t socket, const void *set);
extern int64_t select_sr(int nfds, void *readfds, void *writefds, void *exceptfds,
                         void *timeout);
extern int64_t send_sr(int64_t socket, const void *buffer, int64_t length, int flags);
extern int64_t recv_sr(int64_t socket, void *buffer, int64_t length, int flags);
extern int64_t recvfrom_sr(int64_t socket, void *buffer, int64_t length, int flags,
                           void *from, void *from_length);
extern void *sub_140199031(char *name); /* gethostbyname, 0x140199031 */
extern void *sub_14019903D(char *name, char *proto); /* getservbyname, 0x14019903D */
extern int64_t htons_sr(int64_t value);
extern int64_t ntohl_sr(int64_t value);
extern int64_t ntohs_sr(int64_t value);
extern uint32_t inet_addr_sr(char *text);
extern int crt_sprintf(char *buffer, const char *format, ...);
extern int crt_sscanf(const char *text, const char *format, ...);

/* ---- state ------------------------------------------------------------- */
#define master_state       SR_GLOBAL(int32_t, 0x16B165F40ULL)
#define master_timestamp   SR_GLOBAL(uint32_t, 0x16B165F44ULL)
#define master_round_state SR_GLOBAL(uint32_t, 0x1603612F4ULL)
#define master_round_epoch SR_GLOBAL(uint32_t, 0x1603612E4ULL)
#define master_round_port  SR_GLOBAL(uint32_t, 0x1603612F0ULL)
#define master_steam_ready SR_GLOBAL(int32_t, 0x1829F8BC0ULL)
#define master_ticket_sent SR_GLOBAL(int32_t, 0x1829F8BD0ULL)
#define master_blob_ready  SR_GLOBAL(int32_t, 0x1829F8FD8ULL)
#define master_blob_length SR_GLOBAL(int32_t, 0x1829F8BD4ULL)
#define master_blob        (&SR_GLOBAL(uint8_t, 0x1829F8BD8ULL))
#define master_server_ip   SR_GLOBAL(uint32_t, 0x18329C1E0ULL)
#define master_server_port SR_GLOBAL(uint16_t, 0x18329C1E4ULL)
#define master_rooms       (&SR_GLOBAL(uint8_t, 0x18329C1E8ULL))
#define sound_dir_name     (&SR_GLOBAL(uint8_t, 0x182A7D140ULL))
#define texture_dir_name   (&SR_GLOBAL(uint8_t, 0x182A7D340ULL))
#define master_ticket_stage (&SR_GLOBAL(uint8_t, 0x1401880C0ULL))
#define packet_in  (&SR_GLOBAL(uint8_t, 0x1853AD424ULL))
#define packet_from (&SR_GLOBAL(int32_t, 0x18539D3A0ULL))
#define packet_from_length (&SR_GLOBAL(int32_t, 0x18539D3E4ULL))
#define packet_sender (&SR_GLOBAL(uint32_t, 0x18539D3E8ULL))
#define packet_sender_address SR_GLOBAL(uint32_t, 0x1853AD404ULL)
#define packet_sender_port SR_GLOBAL(uint32_t, 0x1853AD408ULL)
#define packet_steam_slot  SR_GLOBAL(uint64_t, 0x1853AD410ULL)
#define packet_out_data (&SR_GLOBAL(uint8_t, 0x18539D404ULL))
#define STREAM_SLOT_HANDLE(slot) dword_140404A6C[(slot) + 289301070]
#define STREAM_SLOT_SOCKET(slot) dword_140404A6C[(slot) + 289301078]

extern int32_t dword_1402B2658;
extern char byte_1402B26C3;

/* The Steam ticket staging routine is itself in .text at 0x1401880C0, and
 * the authenticate routine passes that code address to the Steam register
 * call (the callback later writes the ticket there). */
#define SR_STEAM_TICKET_STAGE 0x1401880C0ULL

#define MASTER_SERVER_HOST "www.crypticsea.com"
#define MASTER_SERVER_PATH \
    "GET /anewzero/serverinfo.php HTTP/1.1\r\nHost:www.crypticsea.com\r\n\r\n"

/* ---- 0x14006BED0 ------------------------------------------------------ */

/* The inline byte/word reads are the packet stream's own reader: the
 * starting position is checked, then a positive bit cursor is aligned to
 * the next byte. A failed read leaves the cursor and the kind byte alone. */
static int packet_read_byte(int32_t *cursor, int32_t *bit, int32_t *kind)
{
    int32_t position = *cursor;
    if (position >= NET_BUFFER_SIZE || position + 1 > net_read_length)
        return 0;
    if (*bit > 0) {
        *cursor = position + 1;
        *bit = 0;
        position++;
    }
    *kind = packet_in[position];
    *cursor = position + 1;
    return 1;
}

static int packet_read_word(uint32_t *out, int32_t *cursor, int32_t *bit)
{
    int32_t position = *cursor;
    if (position >= NET_BUFFER_SIZE || position + 4 > net_read_length)
        return 0;
    if (*bit > 0) {
        position++;
        *cursor = position;
        *bit = 0;
    }
    memcpy(out, packet_in + position, sizeof *out);
    *cursor = position + 4;
    return 1;
}

static void master_send_poll(uint32_t kind, const void *field, int element_size, int count)
{
    net_write_position = 5;
    net_write_bit = 0;
    memcpy(packet_out_data, &dword_1402B2658, 4);
    packet_sender_port = kind;
    net_write_bytes(field, element_size, count);
    sub_140130350(master_server_ip, master_server_port, 0);
}

void sr_master_authenticate(void)
{
    int32_t state = master_state;
    if (state > 1)
        return;
    if (state == 0) {
        if (master_round_state != 0) {
            master_state = 1;
        } else {
            if (master_steam_ready == 0)
                return;
            if (master_ticket_sent == 0) {
                master_blob_ready = 0;
                sub_140198D20((void *)(uintptr_t)SR_STEAM_TICKET_STAGE);
                master_ticket_sent = 1;
            }
        }
    }
    /* The original compares the difference against 1000 as an unsigned
       32-bit subtraction of the low words. */
    if ((uint32_t)sub_140198F9B() - master_timestamp > 1000) {
        master_timestamp = (uint32_t)sub_140198F9B();
        state = master_state;
        if (state != 0)
            goto send_state;
        if (master_blob_ready != 0 && master_blob_length < 1024) {
            master_send_poll(72, master_ticket_stage, 1, 32);
            net_write_bytes(&master_blob_length, 4, 1);
            net_write_bytes(master_blob, 1, master_blob_length);
            sub_140130350(master_server_ip, master_server_port, 0);
            state = master_state;
            goto send_state;
        }
        return;
    send_state:
        if (state == 1) {
            master_send_poll(73, &master_round_epoch, 4, 1);
            net_write_bytes(&master_round_state, 4, 1);
            sub_140130350(master_server_ip, master_server_port, 0);
        }
    }

    while (sub_14011C760() > 0) {
        int32_t cursor = net_read_position;
        int32_t bit = net_read_bit;
        int32_t kind = 0;
        if (!packet_read_byte(&cursor, &bit, &kind))
            break;
        net_read_position = cursor;
        net_read_bit = bit;
        if (kind == 72) {
            uint32_t round_state = master_round_state;
            packet_read_word(&master_round_epoch, &cursor, &bit);
            if (packet_read_word(&round_state, &cursor, &bit))
                master_round_state = round_state;
            if (round_state != 0) {
                packet_read_word(&master_round_port, &cursor, &bit);
                master_state = 1;
            } else {
                master_state = -1;
            }
            crt_chdir((char *)texture_dir_name);
            crt_chdir((char *)sound_dir_name);
            master_timestamp = (uint32_t)sub_140198F9B() - 1000;
        } else if (kind == 73) {
            /* The original reads the epoch word into a register and only
               compares it with 1; it never stores master_round_epoch here.
               A failed read compares the leftover frame word, so the port's
               zero there is a documented limit (the reset path). */
            uint32_t epoch = 0;
            packet_read_word(&epoch, &cursor, &bit);
            if (epoch == 1) {
                packet_read_word(&master_round_port, &cursor, &bit);
                master_state = 2;
            } else {
                master_round_state = 0;
                master_state = 0;
            }
        } else {
            continue;
        }
    }
}
