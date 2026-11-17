/* World asset loaders: block/*.sbl block tables. */
#ifndef SR_ENGINE_WORLD_ASSETS_H
#define SR_ENGINE_WORLD_ASSETS_H

/* 0x1400E6E50: format block/%s.sbl, read it, and fill the global block
 * tables. Accepts file versions 1-2; version 2 adds the block lights. */
void sr_block_sbl_load(const char *a1);

/* 0x1400D62A0: write data/%s/city2.sbc (file version 12) from the global
 * city state. */
void sr_city_sbc_save(const char *city_name);

/* 0x140026830: read building/%s.sbb into the record at `building`, then run
 * the name-matching pass 0x140027690. Accepts file versions 12-14; a3 != 0
 * loads only the header and the version 13+ words. */
void sr_building_sbb_load(void *building, const char *building_name, int a3);

#endif
