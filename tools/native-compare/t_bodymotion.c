// NC_WRAPPERS: 14012B220
#include <string.h>
#include "nc.h"
#include "physics.h"

static int modify_next;
static void rotation(float *matrix,float *momentum,float *angular,float *inertia)
{
    intptr_t index=((uintptr_t)matrix-(uintptr_t)physics_bodies
                    -offsetof(PhysicsBody,rotation))/sizeof(PhysicsBody);
    uint64_t args[]={(uintptr_t)matrix,(uintptr_t)momentum,(uintptr_t)angular,(uintptr_t)inertia};
    nc_call("rotation",4,args);
    nc_floats("at rotation",physics_bodies[index].position,6);
    /* A callee can affect bodies that the loop has not reached yet. */
    if(modify_next && index+1<PHYSICS_BODY_CAPACITY) {
        physics_bodies[index+1].active=1;
        physics_bodies[index+1].settled=(index%3==0);
    }
    memcpy(angular,momentum,12);
    memcpy(matrix,inertia,12);
}
static uint64_t pool_hash(void)
{
    static PhysicsBody copy[PHYSICS_BODY_CAPACITY];
    memcpy(copy,physics_bodies,sizeof(copy));
    for(int i=0;i<PHYSICS_BODY_CAPACITY;i++)
        for(int k=0;k<6;k++) {
            uint32_t bits;memcpy(&bits,(char *)copy[i].position+4*k,4);
            if((bits&0x7fffffff)>0x7f800000) {
                bits=0x7fc00000;memcpy((char *)copy[i].position+4*k,&bits,4);
            }
        }
    return nc_hash(copy,sizeof(copy));
}
int main(void)
{
    nc_map_image();nc_redirect(0x14012B2D0,rotation);
    for(int n=0;n<nc_cases(1000);n++) {
        nc_seed(n);modify_next=n%2;
        for(size_t i=0;i<sizeof(PhysicsBody)*PHYSICS_BODY_CAPACITY;i+=4) {
            uint32_t word=(uint32_t)nc_rand();
            memcpy((char *)physics_bodies+i,&word,4);
        }
        for(int i=0;i<PHYSICS_BODY_CAPACITY;i++) {
            PhysicsBody *body=&physics_bodies[i];
            body->active=i<4 || i==17 || i==8190 || i==8191 || i==n%PHYSICS_BODY_CAPACITY;
            if(body->active) body->active=n%2?-1:1;
            body->settled=i%3==1?(int32_t)(nc_rand()|1):0;
            for(int k=0;k<3;k++) {
                body->position[k]=nc_float(-1e6f,1e6f);
                body->velocity[k]=nc_float(-100,100);
            }
        }
        if(n%3==0) physics_bodies[PHYSICS_BODY_CAPACITY-1].settled=0;
        /* Avoid a callback cascading all 8,192 bodies: every third body
           stops it. Inactive and settled endpoints still remain visible. */
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
#ifdef NC_NATIVE
        ((void (*)(void))NC_ADDR(0x14012B220))();
#elif defined(NC_CLIENT_WRAPPERS)
        extern void sr_physics_integrate_bodies(void);sr_physics_integrate_bodies();
#else
        physics_integrate_bodies();
#endif
        uint32_t status=nc_get_mxcsr();
        nc_line("bodymotion %d %08x %016llx",n,status,(unsigned long long)pool_hash());
    }
    return 0;
}
