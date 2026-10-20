// NC_WRAPPERS: 14004E160 14004E2E0
#include <string.h>
#include "nc.h"
#include "physics.h"

#ifdef NC_NATIVE
#define distance_bond(b,o,p,q,d) ((uint64_t (*)(uint32_t,uint32_t,const float *,const float *,uint32_t))NC_ADDR(0x14004E160))(b,o,p,q,d)
#define level_bond(b,p,q) ((uint64_t (*)(uint32_t,const float *,const float *))NC_ADDR(0x14004E2E0))(b,p,q)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_physics_create_distance_bond(uint32_t,uint32_t,const float *,const float *,uint32_t);
long long sr_physics_create_level_bond(uint32_t,const float *,const float *);
#define distance_bond sr_physics_create_distance_bond
#define level_bond sr_physics_create_level_bond
#else
static uint64_t distance_bond(uint32_t b,uint32_t o,const float *p,const float *q,uint32_t d) {
    float f;memcpy(&f,&d,4);return physics_create_distance_bond(b,o,p,q,f);
}
#define level_bond physics_create_level_bond
#endif
int main(void)
{
    static const int holes[]={0,1,2,17,1023,1024,16383,16384};
    nc_map_image();
    for(int op=0;op<2;op++) for(int n=0;n<nc_cases(600);n++) {
        nc_seed(n+op*100000);
        int first=n%3?holes[(n/3)%8]:(int)nc_rand_below(PHYSICS_BOND_CAPACITY+1);
        int slot=first==PHYSICS_BOND_CAPACITY?first-1:first;
        memset(physics_bonds,0xA5,PHYSICS_BOND_CAPACITY*sizeof(PhysicsBond));
        memset(physics_constraints,0x5A,PHYSICS_BOND_CAPACITY*sizeof(PhysicsConstraint));
        for(int k=0;k<PHYSICS_BOND_CAPACITY;k++)
            physics_bonds[k].active=k<first?(int32_t)(nc_rand()|1):0;
        float values[16];
        for(int k=0;k<16;k++) {uint32_t bits=(uint32_t)nc_rand();memcpy(values+k,&bits,4);}
        const float *p=values,*q=values+8;
        switch(n%9) {
        case 1:p=physics_bonds[slot].world_point+2;break;
        case 2:q=physics_bonds[slot].local_point;break;
        case 3:p=physics_constraints[slot].offset_a;break;
        case 4:q=physics_constraints[slot].offset_b;break;
        case 5:p=physics_bonds[slot].world_point;q=p+1;break;
        case 6:p=physics_bonds[slot].point_weight;break;
        case 7:q=physics_bonds[slot].other_local_point+1;break;
        case 8:q=op?physics_bonds[slot].world_point+2:physics_bonds[slot].local_point+1;break;
        }
        if(first==PHYSICS_BOND_CAPACITY) p=q=NULL;
        uint32_t body=(uint32_t)nc_rand(),other=(uint32_t)nc_rand(),distance=(uint32_t)nc_rand();
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result=op?level_bond(body,p,q):distance_bond(body,other,p,q,distance);
        nc_line("anchor %d %d %016llx %08x %016llx %016llx %016llx",op,n,
            (unsigned long long)result,nc_get_mxcsr(),
            (unsigned long long)nc_hash(physics_bonds,PHYSICS_BOND_CAPACITY*sizeof(PhysicsBond)),
            (unsigned long long)nc_hash(physics_constraints,PHYSICS_BOND_CAPACITY*sizeof(PhysicsConstraint)),
            (unsigned long long)nc_hash(values,sizeof(values)));
    }
    return 0;
}
