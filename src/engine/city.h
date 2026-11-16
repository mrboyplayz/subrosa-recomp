/* The city block's .sbl table: one block's slice of the tables the world
 * asset loader fills, written back out to buildblock/<name>.sbl.
 * See city.h. */
#ifndef SR_ENGINE_CITY_H
#define SR_ENGINE_CITY_H

/* 0x140027230: read buildblock/<name>.sbl and fill block <block>'s slice of
 * the global block tables (the regions at 0x1ABC89C00 that the renderer's
 * draw pass reads). The file's version word must be 1; the read callback
 * slot 0x1862AE008 supplies every read. */
void city_block_table_load(const char *name, int block);

#endif
