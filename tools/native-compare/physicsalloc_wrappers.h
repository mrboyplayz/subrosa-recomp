/* The original body entry point carries mass as a raw stack word. */
uint64_t sub_1400A4440(void);
uint64_t sub_14005CF80(uint32_t,uint32_t *,uint32_t *,uint32_t *,uint32_t,uint32_t *);
uint64_t sub_14004E430(uint32_t,uint32_t,uint32_t *,uint32_t *);
uint64_t sub_14004E5B0(uint32_t,uint32_t);
uint64_t sub_14005CBB0(uint32_t,uint32_t *,uint32_t *,float,uint32_t);

static uint64_t wrapped_body(uint32_t type,const float *p,const float *r,const float *v,float mass,const float *inertia)
{
    uint32_t word;
    memcpy(&word,&mass,sizeof word);
    return sub_14005CF80(type,(uint32_t *)(void *)p,(uint32_t *)(void *)r,(uint32_t *)(void *)v,word,(uint32_t *)(void *)inertia);
}
#define physics_find_free_bond sub_1400A4440
#define physics_create_body wrapped_body
#define physics_create_body_bond(b,o,p,q) sub_14004E430(b,o,(uint32_t *)(void *)p,(uint32_t *)(void *)q)
#define physics_create_rotation_bond sub_14004E5B0
#define physics_create_point(k,p,v,m,b) sub_14005CBB0(k,(uint32_t *)(void *)p,(uint32_t *)(void *)v,m,b)
