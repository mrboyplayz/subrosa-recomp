#include "net_transport.h"
#include "arith.h"

static void prepare_udp_socket(int socket)
{
    net_local_port = (uint16_t)net_configured_port;
    net_socket_handle(socket) = (int32_t)net_socket_create(2, 2, 17);
    net_socket_address.family = 2;
    net_socket_address.address = 0;
    net_socket_address.port = (uint16_t)net_host_to_port(net_local_port);
    net_socket_address_size = 16;
}

static uint64_t enable_nonblocking_socket(int socket)
{
    uint32_t nonblocking = 1;
    uint64_t result = net_socket_ioctl(net_socket_handle(socket), 0x8004667EULL, &nonblocking);
    net_socket_enabled(socket) = 1;
    return result;
}

uint64_t net_open_udp(int socket)
{
    prepare_udp_socket(socket);
    return enable_nonblocking_socket(socket);
}

uint64_t net_bind_udp(int socket)
{
    prepare_udp_socket(socket);
    uint64_t result = net_socket_bind(net_socket_handle(socket), &net_socket_address, 16);
    if ((uint32_t)result == 0)
        result = enable_nonblocking_socket(socket);
    return result;
}

uint64_t net_close_udp(int socket)
{
    uint64_t result = net_socket_close(net_socket_handle(socket));
    net_socket_enabled(socket) = 0;
    return result;
}

uint32_t net_packet_transfer(int stream, void *data, int count, int size)
{
    NetPacketStream *packet = &net_packet_stream(stream);
    if (packet->bit > 0) {
        packet->position = add_int(packet->position, 1);
        packet->bit = 0;
    }
    int position = packet->position;
    int bytes = multiply_int(size, count);
    if (add_int(position, bytes) >= 65536)
        return 0;
    if (packet->reading)
        net_copy_bytes(data, packet->data + (int64_t)position, (uint64_t)(int64_t)bytes);
    else
        net_copy_bytes(packet->data + (int64_t)position, data, (uint64_t)(int64_t)bytes);
    /* The original reloads the position after the copy. */
    packet->position = add_int(packet->position, bytes);
    return 1;
}

static void send_udp_bytes(uint32_t address, uint16_t port, const void *data, const int32_t *length)
{
    net_socket_address.address = (uint32_t)net_host_to_address(address);
    net_socket_address.port = (uint16_t)net_host_to_port(port);
    net_udp_send(net_socket_handle(net_selected_socket), data, (uint32_t)*length, 0,
                 &net_socket_address, (uint32_t)net_socket_address_size);
}

void net_send_packet(uint32_t address, uint16_t port, uint64_t steam_peer)
{
    int remaining = net_send_position;
    if (net_send_bit > 0) {
        remaining = add_int(remaining, 1);
        net_send_bit = 0;
        net_send_position = add_int(net_send_position, 1);
    }
    if (remaining <= 1200) {
        if (address != 0) {
            if (net_socket_enabled(net_selected_socket))
                /* Position is reloaded after both byte-order callbacks. */
                send_udp_bytes(address, port, net_send_buffer, &net_send_position);
        } else {
            net_steam_send(steam_peer, net_send_buffer, (uint32_t)remaining);
        }
        return;
    }

    NetPacketStream *scratch = &net_packet_stream(0);
    scratch->reading = 0;
    uint32_t reading = 0;
    int fragments = (remaining >> 10) + 1;
    for (int index = 0; index < fragments; index++) {
        scratch->bit = 0;
        scratch->length = 0;
        if (reading != 0) {
            __builtin_memcpy(&net_fragment_magic, scratch->data, 4);
            net_next_fragment_id = (uint16_t)(scratch->data[4] | (uint16_t)scratch->data[5] << 8);
        } else {
            __builtin_memcpy(scratch->data, &net_fragment_magic, 4);
            uint16_t id = net_next_fragment_id;
            __builtin_memcpy(scratch->data + 4, &id, 2);
            scratch->data[6] = (uint8_t)index;
        }
        uint8_t total = scratch->data[7];
        if (reading == 0)
            total = (uint8_t)fragments;
        scratch->position = 8;
        scratch->data[7] = total;

        int chunk = remaining > 1024 ? 1024 : remaining;
        remaining = remaining > 1024 ? subtract_int(remaining, 1024) : 0;
        net_packet_transfer(0, net_send_buffer + (int64_t)index * 1024, 1, chunk);
        if (address != 0)
            send_udp_bytes(address, port, scratch->data, &scratch->position);
        else
            net_steam_send(steam_peer, scratch->data, (uint32_t)scratch->position);
        reading = (uint32_t)scratch->reading;
    }
    net_next_fragment_id++;
}

uint32_t net_accept_fragment(int length)
{
    NetPacketStream *scratch = &net_packet_stream(0);
    net_copy_bytes(scratch->data, net_receive_buffer, (uint64_t)(int64_t)length);
    uint32_t index = scratch->data[6];
    uint8_t total = scratch->data[7];
    scratch->reading = 1;
    scratch->position = 8;
    scratch->bit = 0;
    scratch->length = length;
    if (index >= 16 || total > 16)
        return 0;

    uint16_t id = (uint16_t)(scratch->data[4] | (uint16_t)scratch->data[5] << 8);
    int slot = net_fragment_head;
    while (slot != net_fragment_tail && net_fragment_slot(slot).id != id)
        slot = (slot + 1) & 63;
    if (slot == net_fragment_tail) {
        NetFragmentSlot *created = &net_fragment_slot(slot);
        created->id = id;
        created->received = 0;
        created->length = 0;
        net_fragment_tail = (net_fragment_tail + 1) & 63;
        if (net_fragment_head == net_fragment_tail)
            net_fragment_head = (net_fragment_head + 1) & 63;
    }
    NetFragmentSlot *record = &net_fragment_slot(slot);
    int bytes = subtract_int(length, 8);
    net_copy_bytes(record->data + (uint64_t)index * 1024, scratch->data + 8,
                   (uint64_t)(int64_t)bytes);
    int end = add_int(bytes, (int32_t)(index << 10));
    if (record->length < end)
        record->length = end;
    record->received |= 1u << index;
    uint32_t wanted = (1u << total) - 1;
    if ((record->received & wanted) != wanted)
        return 0;
    net_receive_position = 4;
    net_receive_bit = 0;
    net_copy_bytes(net_receive_buffer, record->data, (uint64_t)(int64_t)record->length);
    return (uint32_t)record->length;
}

uint32_t net_receive_packet(void)
{
    int32_t received;
    for (;;) {
        received = 0;
        net_socket_address.address = 0;
        if (net_socket_enabled(net_selected_socket)) {
            received = (int32_t)net_udp_receive(net_socket_handle(net_selected_socket),
                net_receive_buffer, 65536, 0, &net_socket_address, &net_socket_address_size);
            net_remote_address = (uint32_t)net_address_to_host(net_socket_address.address);
            net_remote_port = (uint16_t)net_port_to_host(net_socket_address.port);
            net_remote_steam_peer = 0;
        }
        if (received <= 0) {
            int32_t steam_length = 0;
            if ((uint32_t)net_steam_receive(&net_remote_steam_peer, net_receive_buffer,
                                           &steam_length, 65536) == 0)
                break;
            received = steam_length;
            net_remote_address = 0;
            net_remote_port = 0;
            if (received <= 0)
                break;
        }
        uint32_t magic = net_regular_magic;
        /* The native compares unsigned packet bytes to signed marker bytes. */
        if (net_receive_buffer[0] != (int8_t)magic ||
            net_receive_buffer[1] != (int8_t)(magic >> 8) ||
            net_receive_buffer[2] != (int8_t)(magic >> 16))
            continue;
        if (net_receive_buffer[3] == (int8_t)(magic >> 24)) {
            net_receive_position = 4;
            net_receive_bit = 0;
            break;
        }
        if (net_receive_buffer[3] == (int8_t)(net_fragment_magic >> 24)) {
            uint32_t assembled = net_accept_fragment(received);
            if (assembled != 0) {
                net_receive_length = (int32_t)assembled;
                return assembled;
            }
        }
    }
    net_receive_length = received;
    return (uint32_t)received;
}
