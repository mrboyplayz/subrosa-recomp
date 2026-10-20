#include <emmintrin.h>
void sr_event_bullet(uint32_t,uint32_t *,uint32_t *,uint32_t);
void sr_event_bullet_hit(uint32_t,uint32_t,uint32_t *,uint32_t *);
long long sr_event_message(uint32_t,__m128i *,uint32_t,uint32_t);
void sr_event_block_update(int,int,int,int,uint32_t);
long long sr_event_sound(uint32_t,uint32_t *,float,float);
long long sr_event_item_sound(uint32_t,uint32_t,float,float);
void sr_world_event_block_gone(int,int,int,int,uint32_t,uint32_t);
void sr_event_block_hit(int,int,int,int,uint32_t,uint32_t,uint32_t *,uint32_t *);
long long sr_event_corporation_door(uint32_t,uint32_t);
void sr_event_mission_update(int,int);
void sr_event_mission_text_line(int,int,uint32_t,int);
void sr_event_mission_text(int,int);
void sr_event_vehicle_removed(uint32_t,uint32_t,uint32_t,uint32_t *,uint32_t *);
void sr_event_player_update(int);
long long sr_event_player_finance(int);
void sr_event_type21(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t *);
long long sr_event_stock_prices(void);

#define event_bullet(t,p,v,b) sr_event_bullet((t),(uint32_t *)(void *)(p),(uint32_t *)(void *)(v),(b))
#define event_bullet_hit(a,b,p,v) sr_event_bullet_hit((a),(b),(uint32_t *)(void *)(p),(uint32_t *)(void *)(v))
#define event_message(k,t,s,v) sr_event_message((k),(__m128i *)(void *)(t),(s),(v))
#define event_block_update(a,b,c,d,e) sr_event_block_update((int)a,(int)b,(int)c,(int)d,e)
#define event_sound(s,p,v,t) sr_event_sound((s),(uint32_t *)(void *)(p),(v),(t))
#define event_item_sound sr_event_item_sound
#undef event_block_parts
#define event_block_parts(a,b,c,d,e,f) sr_world_event_block_gone((int)a,(int)b,(int)c,(int)d,e,f)
#define event_block_hit(a,b,c,d,e,f,p,v) sr_event_block_hit((int)(a),(int)(b),(int)(c),(int)(d),(e),(f),(uint32_t *)(void *)(p),(uint32_t *)(void *)(v))
#define event_corporation_door sr_event_corporation_door
#define event_mission_update sr_event_mission_update
#define event_mission_text_line sr_event_mission_text_line
#define event_mission_text sr_event_mission_text
#define event_vehicle_removed(a,b,c,p,v) sr_event_vehicle_removed((a),(b),(c),(uint32_t *)(void *)(p),(uint32_t *)(void *)(v))
#define event_player_update sr_event_player_update
#define event_player_finance sr_event_player_finance
#define event_type21(a,b,c,d,p) sr_event_type21((a),(b),(c),(d),(uint32_t *)(void *)(p))
#define event_stock_prices sr_event_stock_prices
