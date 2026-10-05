#ifndef SR_SERVER_IMAGE_H
#define SR_SERVER_IMAGE_H
#include <windows.h>
#include <stdint.h>
#include <string.h>

/* Reconstructed from dedicated 0x1400F1F60. Header bounds checks reject malformed
   test images; section matching retains the original 32-bit RVA end addition. */
static inline int sr_server_image_readonly(const void *image, size_t size, uintptr_t address) {
    IMAGE_DOS_HEADER dos;
    if (!image || size < sizeof(dos)) return 0;
    memcpy(&dos, image, sizeof(dos));
    if (dos.e_magic != IMAGE_DOS_SIGNATURE || dos.e_lfanew < 0) return 0;
    size_t nt_offset = (size_t)dos.e_lfanew;
    if (nt_offset > size || size - nt_offset < sizeof(DWORD) + sizeof(IMAGE_FILE_HEADER)) return 0;
    const unsigned char *bytes = image;
    DWORD signature;
    IMAGE_FILE_HEADER file;
    memcpy(&signature, bytes + nt_offset, sizeof(signature));
    memcpy(&file, bytes + nt_offset + sizeof(signature), sizeof(file));
    if (signature != IMAGE_NT_SIGNATURE) return 0;
    size_t optional_offset = nt_offset + sizeof(signature) + sizeof(file);
    if (file.SizeOfOptionalHeader < sizeof(WORD) || file.SizeOfOptionalHeader > size - optional_offset) return 0;
    WORD magic;
    memcpy(&magic, bytes + optional_offset, sizeof(magic));
    if (magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC) return 0;
    size_t sections = optional_offset + file.SizeOfOptionalHeader;
    if (file.NumberOfSections > (size - sections) / sizeof(IMAGE_SECTION_HEADER)) return 0;
    uintptr_t rva = address - (uintptr_t)image;
    for (unsigned i = 0; i < file.NumberOfSections; ++i) {
        IMAGE_SECTION_HEADER section;
        memcpy(&section, bytes + sections + i * sizeof(section), sizeof(section));
        uint32_t end = section.VirtualAddress + section.Misc.VirtualSize;
        if (rva >= section.VirtualAddress && rva < end)
            return (section.Characteristics & IMAGE_SCN_MEM_WRITE) == 0;
    }
    return 0;
}

extern IMAGE_DOS_HEADER __ImageBase;
static inline int sr_server_current_image_readonly(uintptr_t address) {
    /* The Windows loader guarantees the current module has mapped PE headers. */
    const unsigned char *base = (const unsigned char *)&__ImageBase;
    const IMAGE_NT_HEADERS64 *nt = (const IMAGE_NT_HEADERS64 *)(base + __ImageBase.e_lfanew);
    return sr_server_image_readonly(base, nt->OptionalHeader.SizeOfImage, address);
}
#endif
