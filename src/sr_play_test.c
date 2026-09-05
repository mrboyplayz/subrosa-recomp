#include "sr_play.h"
#include <math.h>
#include <stdio.h>
#define CHECK(x) do {if(!(x)) {fprintf(stderr,"Failed line %d: %s\n",__LINE__,#x);return 1;}} while(0)
int main(void) {
    SrPlay s; sr_play_reset(&s);
    for(int i=0;i<100;i++) sr_play_step(&s,1,0,0,0,.01f);
    CHECK(fabsf(s.z-10)<.01f);
    s.x=-12;s.z=15;
    for(int i=0;i<500;i++) sr_play_step(&s,1,0,1,0,.01f);
    CHECK(s.z>12.7f);
    sr_play_reset(&s);sr_play_step(&s,0,0,0,1,.01f);CHECK(s.y>1.7f);
    for(int i=0;i<200;i++) sr_play_step(&s,0,0,0,0,.01f);
    CHECK(s.y==1.7f);
    s.x=0;s.z=-10;s.pitch=atan2f(-.2f,9);sr_play_shoot(&s);CHECK(s.hits==1 && s.ammo==11);
    sr_play_shoot(&s);CHECK(s.ammo==11);
    sr_play_reload(&s);for(int i=0;i<130;i++) sr_play_step(&s,0,0,0,0,.01f);CHECK(s.ammo==12);
    s.x=-3;s.z=11;sr_play_interact(&s);CHECK(s.carrying);
    s.x=3;s.z=-13;sr_play_interact(&s);CHECK(s.delivered && !s.carrying);
    sr_play_reset(&s);s.x=-12;s.z=0;s.yaw=atan2f(7,17);s.pitch=atan2f(-.2f,hypotf(7,17));
    sr_play_shoot(&s);CHECK(s.hits==0); /* Building between muzzle and left target. */
    sr_play_reset(&s);sr_play_interact(&s);CHECK(!s.carrying && !s.delivered);
    for(int i=0;i<2000;i++)sr_play_step(&s,-1,0,1,0,.01f);
    CHECK(s.z<=21.6f);
    sr_play_reset(&s);for(int i=0;i<100;i++)sr_play_step(&s,1,1,0,0,.01f);
    CHECK(fabsf(hypotf(s.x,s.z-14)-4)<.01f);
    puts("PASS: movement, collision, jump, shooting, cooldown, reload, delivery");return 0;
}
