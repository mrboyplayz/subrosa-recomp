#ifndef SR_CLIENT_RESOURCE_LAYOUT_H
#define SR_CLIENT_RESOURCE_LAYOUT_H

#include <stddef.h>
#include <stdint.h>

/* Checked original RVA 0x67971DA0; 0x140068FC0 indexes 0x30038-byte records.
   Sandium's first-field names are useful, but its CSTexture padding describes
   word count as bytes. Keep the native stride explicit here. */
typedef struct SrAtlasEntry {
    int32_t x, y, width, height;
    float uv[8];
} SrAtlasEntry;

typedef struct SrClientAtlas {
    int32_t width, height;
    uint8_t reserved_8[24];
    uint32_t gl_texture;
    uint32_t reserved_36;
    void *upload_buffer;
    int32_t entry_count;
    uint32_t reserved_52;
    SrAtlasEntry entries[4096];
} SrClientAtlas;

/* Checked native PCM register entry 0x140069930 and WAV loader 0x1400EE400.
   The unreviewed reserved words remain unnamed. */
typedef struct SrSoundResource {
    int32_t loaded;
    int32_t sample_count;
    float *samples;
    uint8_t reserved_16[8];
    float reference_distance;
    uint8_t reserved_28[4];
} SrSoundResource;

_Static_assert(sizeof(void *) == 8, "Windows x64 resource ABI");
_Static_assert(sizeof(SrAtlasEntry) == 48, "Native atlas entry stride");
_Static_assert(offsetof(SrClientAtlas, gl_texture) == 32, "Native texture ID");
_Static_assert(offsetof(SrClientAtlas, upload_buffer) == 40, "Native scratch pointer");
_Static_assert(offsetof(SrClientAtlas, entry_count) == 48, "Native slot count");
_Static_assert(offsetof(SrClientAtlas, entries) == 56, "Native entry array");
_Static_assert(sizeof(SrClientAtlas) == 0x30038, "Native atlas stride");
_Static_assert(sizeof(SrSoundResource) == 32, "Native sound stride");
_Static_assert(offsetof(SrSoundResource, samples) == 8, "Native sound samples");
_Static_assert(offsetof(SrSoundResource, reference_distance) == 24, "Native attenuation field");

#endif
