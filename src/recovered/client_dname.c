#include <stdint.h>
#include <string.h>

uint32_t sr_client_dname_length(const void *self) {
    uint32_t value;
    memcpy(&value, (const unsigned char *)self + 12, 4);
    return value;
}

uint32_t sr_client_dname_status(const void *self) {
    uint32_t value;
    memcpy(&value, (const unsigned char *)self + 12, 4);
    return value;
}

uint8_t sr_client_dname_last_char(const void *self) {
    uint32_t status;
    memcpy(&status, (const unsigned char *)self + 8, 4);
    return status == 1 ? 32 : 0;
}

char *sr_client_dname_copy(const void *self, char *destination, char *end) {
    uint32_t status;
    memcpy(&status, (const unsigned char *)self + 8, 4);
    if (status != 1) return destination;
    /* The native entry subtracts the low 32 address bits and compares the
       result as signed. Keep its register widths, including wraparound. */
    int32_t available = (int32_t)((uint32_t)(uintptr_t)end - (uint32_t)(uintptr_t)destination);
    int32_t count = available < 4 ? available : 4;
    static const unsigned char spelling[4] = {32, 63, 63, 32};
    for (uint64_t i = 0; i < (uint32_t)count; ++i)
        destination[i] = spelling[i];
    return (char *)((uintptr_t)destination + (intptr_t)count);
}
