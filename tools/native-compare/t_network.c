/* Native comparison for the reconstructed peer-socket routines:
 * sr_net_close_socket (0x14007C080) and sr_net_open_socket (0x14007C0C0).
 *
 * The originals are thin over the winsock thunks, so the suite binds the
 * winsock imports to recording stubs and compares the recorded calls and
 * the touched record fields instead of real sockets. Peer index, bind
 * branch, connect-target presence, port and target bytes are varied over
 * the record's byte extent plus the surroundings; both builds must agree
 * line for line. */
// NC_WRAPPERS: 14007C080 14007C0C0
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "nc.h"

#ifdef NC_NATIVE
#define close_socket(p) ((void (*)(int))NC_ADDR(0x14007C080))(p)
#define open_socket(p, port, bind, addr) \
    ((long long (*)(int, unsigned short, int, const unsigned char *))NC_ADDR(0x14007C0C0))(p, port, bind, addr)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14007C080(int);
long long sub_14007C0C0(int, unsigned short, int, unsigned char *);
#define close_socket(p) sub_14007C080(p)
#define open_socket(p, port, bind, addr) sub_14007C0C0(p, port, bind, (unsigned char *)addr)
#else
#include "network.h"
#define close_socket sr_net_close_socket
#define open_socket sr_net_open_socket
#endif

/* The recorded winsock stubs: each appends "name(args)" to a log; the
   suite compares the log between builds. */
static char log_text[4096];
static size_t log_len;

static void log_line(const char *format, ...)
{
    char line[256];
    va_list args;
    va_start(args, format);
    int n = vsnprintf(line, sizeof line, format, args);
    va_end(args);
    if (n > 0 && log_len + (size_t)n < sizeof log_text) {
        memcpy(log_text + log_len, line, (size_t)n);
        log_len += (size_t)n;
    }
}

static const char *import_log(void)
{
    log_text[log_len] = 0;
    return log_text;
}

static void log_reset(void)
{
    log_len = 0;
    log_text[0] = 0;
}

static int64_t record_socket(int af, int type, int protocol)
{
    log_line("socket(%d,%d,%d)", af, type, protocol);
    return 0x1A2B3C4DLL;
}

static int64_t record_htons(int64_t port)
{
    /* Byte swap, the real htons of a little-endian host. */
    unsigned short swapped = (unsigned short)(((unsigned short)port << 8) | ((unsigned short)port >> 8));
    log_line("htons(%u)", (unsigned)port);
    return swapped;
}

static int64_t record_bind(int64_t socket, int64_t address, int64_t length)
{
    log_line("bind(%llx,%llx,%lld)", (unsigned long long)socket, (unsigned long long)address, (long long)length);
    return 0;
}

static int64_t record_ioctlsocket(int64_t socket, int64_t command, int64_t argument)
{
    log_line("ioctlsocket(%llx,%llx,%llx)", (unsigned long long)socket, (unsigned long long)command,
             (unsigned long long)argument);
    return 0;
}

static int64_t record_closesocket(int64_t socket)
{
    log_line("closesocket(%llx)", (unsigned long long)socket);
    return 0;
}

/* The winsock thunks: closesocket #3, htons #9, socket #23 (WSOCK32.dll).
   The two also referenced below the state region are bound elsewhere. */
#ifdef NC_NATIVE
#define closesocket_thunk ((int64_t (*)(int64_t))NC_ADDR(0x140198FD7))
#define htons_thunk ((int64_t (*)(int64_t))NC_ADDR(0x140198FF5))
#define socket_thunk ((int64_t (*)(int64_t, int64_t, int64_t))NC_ADDR(0x14019902B))
#else
#define closesocket_thunk closesocket_sr
#define htons_thunk htons_sr
#define socket_thunk socket_sr
#endif

/* Real implementations behind the bound imports. */
int64_t closesocket_sr(int64_t socket) { return closesocket_thunk(socket); }
int64_t htons_sr(int64_t port) { return htons_thunk(port); }
int64_t socket_sr(int64_t af, int64_t type, int64_t protocol) { return socket_thunk(af, type, protocol); }

/* The peer-socket record of peer 0 and the sockaddr-in-like scratch the
 * calls share: the state that changes across the open/close pair. */
#define PEER_RECORD &SR_GLOBAL(uint8_t, 0x15B1D5CC0ULL)
#define PEER_STATE  &SR_GLOBAL(uint8_t, 0x15B1D5CE4ULL)
#define PEER_WORDS  &SR_GLOBAL(int32_t, 0x15B1D5CD0ULL)
#define PEER_SIZE   0x20u
#define FROM_PORT   &SR_GLOBAL(uint32_t, 0x15B1D5CE8ULL)
#define SOCK_STATE  &SR_GLOBAL(uint8_t, 0x18539D3E4ULL)
#define SOCK_SIZE   0x18u

int main(void)
{
    static const int peers[] = {0, 1, 2, 5};
    nc_map_image();
    nc_bind_import("WSOCK32.dll", "#3", (void *)record_closesocket);
    nc_bind_import("WSOCK32.dll", "#23", (void *)record_socket);
    nc_bind_import("WSOCK32.dll", "#9", (void *)record_htons);
    nc_bind_import("WS2_32.dll", "bind", (void *)record_bind);
    nc_bind_import("WS2_32.dll", "ioctlsocket", (void *)record_ioctlsocket);
    nc_save(PEER_RECORD, PEER_SIZE);
    nc_save(PEER_STATE, PEER_SIZE);
    nc_save(PEER_WORDS, PEER_SIZE);
    nc_save(FROM_PORT, 4);
    nc_save(SOCK_STATE, SOCK_SIZE);
    for (int n = 0; n < nc_cases(3000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        log_reset();
        int peer = peers[n % 4];
        unsigned char target[3];
        if (n % 9 == 0) {
            /* A connect target that overlaps the record itself. */
            target[0] = target[1] = target[2] = 0;
        } else {
            target[0] = (unsigned char)n;
            target[1] = (unsigned char)(n >> 8);
            target[2] = (unsigned char)(n >> 16);
        }
        unsigned short port = (unsigned short)nc_rand();
        int branch = n % 3;      /* 0: bind path, 1: no-bind path, 2: bind fail */
        if (n % 2) {
            close_socket(peer);
            nc_line("close %d peer %d  %016llx", n, peer,
                    (unsigned long long)nc_hash(PEER_RECORD, PEER_SIZE));
            nc_line("  %s", import_log());
        } else {
            long long result = open_socket(peer, port, branch != 1, target);
            nc_line("open %d peer %d port %u branch %d -> %llx  %016llx %016llx %016llx %016llx %016llx", n, peer,
                    port, branch, (unsigned long long)result,
                    (unsigned long long)nc_hash(PEER_RECORD, PEER_SIZE),
                    (unsigned long long)nc_hash(PEER_STATE, PEER_SIZE),
                    (unsigned long long)nc_hash(PEER_WORDS, PEER_SIZE),
                    (unsigned long long)nc_hash(FROM_PORT, 4),
                    (unsigned long long)nc_hash(SOCK_STATE, SOCK_SIZE));
            nc_line("  %s", import_log());
        }
    }
    return 0;
}
