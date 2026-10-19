#include <emmintrin.h>
void sub_140051230(uint32_t,uint32_t *,uint32_t *,uint32_t);
void sub_1400512D0(uint32_t,uint32_t,uint32_t *,uint32_t *);
long long sub_140051480(uint32_t,__m128i *,uint32_t,uint32_t);
void sub_140051560(int,int,int,int,uint32_t);
long long sub_1400515E0(uint32_t,uint32_t *,float,float);
long long sub_140051650(uint32_t,uint32_t,float,float);
void sub_1400516B0(int,int,int,int,uint32_t,uint32_t);
void sub_140051730(int,int,int,int,uint32_t,uint32_t,uint32_t *,uint32_t *);
long long sub_1400518B0(uint32_t,uint32_t);
void sub_1400519F0(int,int);
void sub_140051B00(int,int,uint32_t,int);
void sub_140051BD0(int,int);
void sub_140051CF0(uint32_t,uint32_t,uint32_t,uint32_t *,uint32_t *);
void sub_140051DC0(int);
long long sub_140051F50(int);
void sub_140051FF0(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t *);
long long sub_140052090(void);

#define event_bullet(t,p,v,b) sub_140051230((t),(uint32_t *)(void *)(p),(uint32_t *)(void *)(v),(b))
#define event_bullet_hit(a,b,p,v) sub_1400512D0((a),(b),(uint32_t *)(void *)(p),(uint32_t *)(void *)(v))
#define event_message(k,t,s,v) sub_140051480((k),(__m128i *)(void *)(t),(s),(v))
#define event_block_update(a,b,c,d,e) sub_140051560((int)a,(int)b,(int)c,(int)d,e)
#define event_sound(s,p,v,t) sub_1400515E0((s),(uint32_t *)(void *)(p),(v),(t))
#define event_item_sound sub_140051650
#undef event_block_parts
#define event_block_parts(a,b,c,d,e,f) sub_1400516B0((int)a,(int)b,(int)c,(int)d,e,f)
#define event_block_hit(a,b,c,d,e,f,p,v) sub_140051730((int)(a),(int)(b),(int)(c),(int)(d),(e),(f),(uint32_t *)(void *)(p),(uint32_t *)(void *)(v))
#define event_corporation_door sub_1400518B0
#define event_mission_update sub_1400519F0
#define event_mission_text_line sub_140051B00
#define event_mission_text sub_140051BD0
#define event_vehicle_removed(a,b,c,p,v) sub_140051CF0((a),(b),(c),(uint32_t *)(void *)(p),(uint32_t *)(void *)(v))
#define event_player_update sub_140051DC0
#define event_player_finance sub_140051F50
#define event_type21(a,b,c,d,p) sub_140051FF0((a),(b),(c),(d),(uint32_t *)(void *)(p))
#define event_stock_prices sub_140052090
