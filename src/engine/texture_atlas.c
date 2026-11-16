#include "crt.h"
#include "texture_atlas.h"
#include "gl.h"

/* Still in src/client/. */
extern int sr_texture_load_pixels(char *path);
/* CRT memset (sub_1401FCD30, still in src/client/). */
extern void *crt_memset(void *destination, unsigned char value, unsigned long long size);

/* The GL entry points of the init: the generator lives in the client's
 * pointer block, the parameter and image calls in the compatibility table
 * inside the shared state region (filled by the loaders at startup). */
extern void (*glGenTextures)(GLsizei count, GLuint *textures); /* 0x140404060 */
#define glTexParameteri SR_GL_STATE_SLOT(0x144980D00ULL, void (*)(GLenum, GLint, GLint))
#define glTexImage2D SR_GL_STATE_SLOT(0x144980D18ULL, \
    void (*)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *))
#define GL_UNSIGNED_BYTE 0x1401
#define GL_CLAMP_TO_EDGE 0x812F
#define GL_LINEAR 0x2601

/* The atlas holds at most 4096 entries; the packer scans 8 columns per row. */
static const int32_t atlas_max_entries = 4096;
static const int32_t pack_columns = 8;

int texture_atlas_init(unsigned int a1, unsigned int a2)
{
    /* The original stores the arguments in this order (a2 is width). */
    SR_GLOBAL(int32_t, 0x1A7971DA0ULL) = (int32_t)a1;
    SR_GLOBAL(int32_t, 0x1A7971DA4ULL) = (int32_t)a2;
    SR_GLOBAL(int32_t, 0x1A7971DD0ULL) = 0;
    free((void *)(uintptr_t)texture_atlas_pixels);
    texture_atlas_pixels = (uint64_t)(uintptr_t)crt_malloc(4 * (size_t)a1 * (size_t)a2);
    crt_memset((void *)(uintptr_t)texture_atlas_pixels, 0xFF, 4 * (size_t)a1 * (size_t)a2);
    glGenTextures(1, SR_GLOBAL(GLuint *, 0x1A7971DC0ULL));
    glBindTexture(GL_TEXTURE_2D, SR_GLOBAL(GLuint, 0x1A7971DC0ULL));
    glTexParameteri(GL_TEXTURE_2D, 0x2802, 0x812F); /* GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE */
    glTexParameteri(GL_TEXTURE_2D, 0x2803, 0x812F); /* GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE */
    glTexParameteri(GL_TEXTURE_2D, 0x2800, 0x2601); /* GL_TEXTURE_WRAP_S, GL_LINEAR */
    glTexParameteri(GL_TEXTURE_2D, 0x2801, 0x2601); /* GL_TEXTURE_MIN_FILTER, GL_LINEAR */
    glTexImage2D(GL_TEXTURE_2D, 0, 0x1908, (GLsizei)a1, (GLsizei)a2, 0, 0x1908,
                 GL_UNSIGNED_BYTE, (const void *)(uintptr_t)texture_atlas_pixels);
    return 0;
}

int texture_atlas_load(int atlas, const char *path)
{
    /* The slot of this atlas: 12 dwords of header, 4096 entries of 12 dwords
     * each, then 7 more (196,664 bytes per slot, see renderer.h). The used
     * count is the 13th dword and the entries start at the 16th. */
    int32_t *slot = &SR_GLOBAL(int32_t, 0x1A7971DA0ULL) + (int64_t)atlas * (196664 / 4);
    int32_t *used_count = slot + 12;
    int32_t *entries = slot + 15;

    /* The packer's state: the next free slot word (0x1B0037420), a copy of
     * it (0x1B0037424), and the column words it scans (0x1B0037428). */
    int32_t next_free_word = *texture_atlas_next_free;
    int32_t next_free_word_2 = *texture_atlas_next_free_2;
    int32_t *slot_texture = slot;
    int32_t texture_word = *slot_texture;

    /* The 8192-dword frame scratch: entry heights while the entries are
     * read, then the taken column words while a place is searched. In the
     * original this is the emulated stack frame at rsp+40h. */
    uint32_t scratch[8192];

    int64_t record_word_offset = 49166LL * atlas;
    if (*used_count < atlas_max_entries && sr_texture_load_pixels((char *)path)) {
        int32_t saved_slot_word = next_free_word;
        int32_t saved_slot_word_2 = next_free_word_2;
        int32_t entry_index_result = *used_count;
        if (texture_word > 0)
            crt_memset((void *)(uintptr_t)scratch, 0, 4LL * (unsigned int)texture_word);
        int32_t count = *used_count;
        if (count > 0) {
            int64_t entry_offset = 0;
            unsigned int remaining = (unsigned int)count;
            int32_t *entry = entries;
            do {
                int32_t width = *(entry - 2);
                int32_t limit = width + *entry;
                if (width < limit) {
                    int32_t element = width;
                    do {
                        if (element >= 0 && width < texture_word) {
                            int32_t height_word = slot_texture[entry_offset + 16] + slot_texture[entry_offset + 14];
                            if (scratch[element] < (uint32_t)height_word)
                                scratch[element] = (uint32_t)height_word;
                        }
                        ++width;
                        ++element;
                    } while (width < limit);
                }
                entry_offset += 12;
                entry += 12;
                --remaining;
            } while (remaining);
        }
        int32_t column = 0;
        int32_t column_sync = 0;
        int32_t saved_slot_word_3 = saved_slot_word;
        int32_t row = saved_slot_word_2;
        int32_t region_width = saved_slot_word + 2;
        int32_t region_height = saved_slot_word_2 + 2;
        int32_t row_limit = (int32_t)SR_GLOBAL(int32_t, 0x1A7971DA4ULL) - region_height;
        if (row_limit >= 0) {
            int64_t scan_start = 0;
            while (2) {
                int32_t first = column;
                for (uint32_t *taken = &scratch[scan_start]; ; ++taken) {
                    if (first >= (int)(column + region_width)) {
                        int64_t entry_byte_offset = record_word_offset * 4 + 48LL * count;
                        float top = (float)(int)(row + 1 + saved_slot_word_2);
                        *(unsigned int *)((unsigned char *)&slot[433435866 - 12] + entry_byte_offset) =
                            (unsigned int)column;
                        *(unsigned int *)((unsigned char *)&slot[433435867 - 12] + entry_byte_offset) =
                            (unsigned int)row;
                        *(unsigned int *)((unsigned char *)&slot[433435868 - 12] + entry_byte_offset) =
                            (unsigned int)region_width;
                        *(unsigned int *)((unsigned char *)&slot[433435869 - 12] + entry_byte_offset) =
                            (unsigned int)region_height;
                        ++*used_count;
                        return (unsigned int)entry_index_result;
                    }
                    if (row < (int32_t)*taken)
                        break;
                    ++first;
                }
                int32_t next_column = column + 1;
                int32_t column_limit = texture_word - region_width;
                int32_t next_row = row + 1;
                if ((int)(column + 1) <= column_limit)
                    next_row = row;
                column = 0;
                row = next_row;
                int64_t next_scan_start = scan_start + 1;
                if (next_column <= column_limit)
                    column = next_column;
                scan_start = 0;
                column_sync = column;
                if (next_column <= column_limit)
                    scan_start = next_scan_start;
                if (row <= row_limit)
                    continue;
                break;
            }
        }
    }
    return (unsigned int)-1;
}
