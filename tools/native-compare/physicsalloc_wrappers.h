/* The original body entry point carries mass as a raw stack word. */
uint64_t sr_physics_find_free_bond(void);
uint64_t sr_physics_create_body(uint32_t,uint32_t *,uint32_t *,uint32_t *,uint32_t,uint32_t *);
uint64_t sr_physics_create_body_bond(uint32_t,uint32_t,uint32_t *,uint32_t *);
uint64_t sr_physics_create_rotation_bond(uint32_t,uint32_t);
uint64_t sr_physics_create_point(uint32_t,uint32_t *,uint32_t *,float,uint32_t);

static uint64_t wrapped_body(uint32_t type,const float *p,const float *r,const float *v,float mass,const float *inertia)
{
    uint32_t word;
    memcpy(&word,&mass,sizeof word);
    return sr_physics_create_body(type,(uint32_t *)(void *)p,(uint32_t *)(void *)r,(uint32_t *)(void *)v,word,(uint32_t *)(void *)inertia);
}
#define physics_find_free_bond sr_physics_find_free_bond
#define physics_create_body wrapped_body
#define physics_create_body_bond(b,o,p,q) sr_physics_create_body_bond(b,o,(uint32_t *)(void *)p,(uint32_t *)(void *)q)
#define physics_create_rotation_bond sr_physics_create_rotation_bond
#define physics_create_point(k,p,v,m,b) sr_physics_create_point(k,(uint32_t *)(void *)p,(uint32_t *)(void *)v,m,b)
