/* World asset loaders: block/*.sbl block tables. */
#ifndef SR_ENGINE_WORLD_ASSETS_H
#define SR_ENGINE_WORLD_ASSETS_H

/* 0x1400E6E50: format block/%s.sbl, read it, and fill the global block
 * tables. Accepts file versions 1-2; version 2 adds the block lights. */
void sr_block_sbl_load(const char *a1);

#endif
