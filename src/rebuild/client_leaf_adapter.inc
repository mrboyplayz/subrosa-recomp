/* Adapt verified isolated leaf behavior to the export's address names.
   This file is appended after all exported globals have been declared. */
void CHtmlStream__Abort(CHtmlStream *self, uintptr_t payload, uintptr_t failure, uintptr_t call_id) {
    uintptr_t table, target;
    memcpy(&table, self, 8);
    memcpy(&target, (void *)(table + 8), 8);
    ((void (*)(CHtmlStream *, uintptr_t, uintptr_t, uintptr_t))target)(self, payload, failure, call_id);
}

uint32_t sub_140205C34(const void *object) {
    return sr_client_u32_at_16(object);
}

char initialize_global_variables(void) {
    return (char)sr_client_initialize_global_variables(
        &dword_140404A6C[19065667], &off_140302420);
}

uint32_t sub_140247CFC(void) {
    return sr_client_zero_callback();
}

size_t sub_1400012A0(FILE *stream, void *destination, int count) {
    return fread_sr(destination, 1, (size_t)count, stream);
}

uint32_t sub_1402370D4(void) {
    return sr_client_initialize_timezone(&dword_140404A6C[19064597],
        &dword_140404A6C[19064598], &dword_140404A6C[19064599],
        (uintptr_t *)&dword_140404A6C[19064601], (uintptr_t)sr_mem_140302270);
}

uint64_t sr_client_static_tls(void) {
    static _Thread_local _Alignas(8) unsigned char storage[24];
    return (uint64_t)(uintptr_t)storage;
}
