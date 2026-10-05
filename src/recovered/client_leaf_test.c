#include "client_leaf.h"
#include <assert.h>
#include <string.h>

struct FakeObject {
    void (**vtable)(void *);
    unsigned char bytes[24];
};

static int abort_calls;
static void dummy(void *self) { (void)self; }
static void abort_callback(void *self) {
    assert(self != NULL);
    ++abort_calls;
}

int main(void) {
    void (*methods[2])(void *) = {dummy, abort_callback};
    struct FakeObject object = {methods, {0}};
    sr_client_virtual_abort(&object);
    assert(abort_calls == 1);

    unsigned char field[24] = {0};
    const uint32_t value = 0xfedcba98u;
    memcpy(field + 16, &value, sizeof(value));
    assert(sr_client_u32_at_16(field) == value);
    assert(sr_client_zero_callback() == 0);
    void *slot = NULL;
    assert(sr_client_initialize_global_variables(&slot, field) == 1);
    assert(slot == field);

    FILE *file = tmpfile();
    assert(file != NULL);
    assert(fwrite("abcde", 1, 5, file) == 5);
    rewind(file);
    char output[8] = {0};
    assert(sr_client_fread_bytes(file, output, 3) == 3);
    assert(memcmp(output, "abc", 3) == 0);
    assert(sr_client_fread_bytes(file, output, 4) == 2);
    fclose(file);
    return 0;
}
