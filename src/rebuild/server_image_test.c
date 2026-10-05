#include "server_image.h"
#include <stdio.h>
#define CHECK(x) do { if (!(x)) { fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #x); return 1; } } while (0)
int main(void) {
    unsigned char image[1024] = {0};
    IMAGE_DOS_HEADER dos = {0};
    IMAGE_NT_HEADERS64 nt = {0};
    IMAGE_SECTION_HEADER sections[2] = {0};
    dos.e_magic = IMAGE_DOS_SIGNATURE;
    dos.e_lfanew = 64;
    nt.Signature = IMAGE_NT_SIGNATURE;
    nt.FileHeader.SizeOfOptionalHeader = sizeof(nt.OptionalHeader);
    nt.FileHeader.NumberOfSections = 2;
    nt.OptionalHeader.Magic = IMAGE_NT_OPTIONAL_HDR64_MAGIC;
    sections[0].VirtualAddress = 512;
    sections[0].Misc.VirtualSize = 128;
    sections[1].VirtualAddress = 640;
    sections[1].Misc.VirtualSize = 128;
    sections[1].Characteristics = IMAGE_SCN_MEM_WRITE;
    memcpy(image, &dos, sizeof(dos));
    memcpy(image + 64, &nt, sizeof(nt));
    memcpy(image + 64 + sizeof(nt), sections, sizeof(sections));
    for (unsigned i = 0; i < sizeof(image); ++i)
        CHECK(sr_server_image_readonly(image, sizeof(image), (uintptr_t)(image + i)) == (i >= 512 && i < 640));
    CHECK(!sr_server_image_readonly(image, 63, (uintptr_t)(image + 512)));
    CHECK(!sr_server_image_readonly(image, 128, (uintptr_t)(image + 512)));
    CHECK(!sr_server_image_readonly(image, sizeof(image), (uintptr_t)image - 1));
    image[0] = 0;
    CHECK(!sr_server_image_readonly(image, sizeof(image), (uintptr_t)(image + 512)));
    CHECK(sr_server_current_image_readonly((uintptr_t)&sr_server_current_image_readonly));
    static int writable;
    CHECK(!sr_server_current_image_readonly((uintptr_t)&writable));
    puts("PASS: 1024 PE section boundary checks, malformed headers and relocated current image.");
    return 0;
}
