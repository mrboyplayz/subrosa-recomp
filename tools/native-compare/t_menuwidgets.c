// NC_WRAPPERS: 140070380 14006F1F0 14006F5A0 140071910
#include <string.h>
#include "nc.h"
#include "menu.h"
#include "text_helpers.h"

#ifdef NC_NATIVE
#define allocate(id,x,y,w,h,s) ((uint64_t (*)(uint32_t,float,float,float,float,uint32_t))NC_ADDR(0x140070380))(id,x,y,w,h,s)
#define button(t) ((uint64_t (*)(const unsigned char *))NC_ADDR(0x14006F1F0))(t)
#define selectable(t,p,o) ((uint64_t (*)(const unsigned char *,int32_t *,uint32_t))NC_ADDR(0x14006F5A0))(t,p,o)
#define toggle(t,p) ((uint64_t (*)(const unsigned char *,uint32_t *))NC_ADDR(0x140071910))(t,p)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140070380(uint32_t,float,float,float,uint32_t,uint32_t);
long long sr_DrawMenuButton(unsigned char *);
long long sr_DrawMenuButtonSelectable(unsigned char *,int32_t *,int);
long long sr_DrawMenuToggle(unsigned char *,uint32_t *);
static uint64_t allocate(uint32_t id,float x,float y,float w,float h,uint32_t s) {
    uint32_t bits; memcpy(&bits,&h,4); return sub_140070380(id,x,y,w,bits,s);
}
#define button sr_DrawMenuButton
#define selectable sr_DrawMenuButtonSelectable
#define toggle sr_DrawMenuToggle
#else
#define allocate menu_allocate_widget
#define button menu_button
#define selectable menu_selectable
#define toggle menu_toggle
#endif

static void fill(void *out,size_t length) {
    unsigned char *p=out;
    for(size_t i=0;i<length;i++) p[i]=(unsigned char)nc_rand();
}
static void normalize(float *values,size_t count) {
    for(size_t i=0;i<count;i++) {
        uint32_t word; memcpy(&word,&values[i],4);
        if((word&0x7fffffff)>0x7f800000) {
            word=0x7fc00000; memcpy(&values[i],&word,4);
        }
    }
}
static uint64_t widgets_hash(int slot) {
    static MenuWidget copy[MENU_WIDGET_CAPACITY];
    memcpy(copy,menu_widgets,sizeof(copy));
    if(slot>=0) { normalize(copy[slot].local,4); normalize(copy[slot].screen,4); }
    return nc_hash(copy,sizeof(copy));
}
static uint64_t layout_hash(void) {
    MenuLayout copy=*menu_layout;
    normalize(&copy.x,4); normalize(&copy.row_height,1);
    return nc_hash(&copy,sizeof(copy));
}
int main(void) {
    static const int holes[]={0,1,2,17,1023,1024};
    static const uint32_t keys[]={0,1,2,510,511,512,UINT32_MAX};
    static const int grid_positions[]={0,1,15,16,17,-1};
    unsigned char *label=NC_ADDR(0x15104B100);
    uint32_t *value=NC_ADDR(0x15104B000);
    nc_map_image();
    for(int operation=0;operation<4;operation++)
    for(int n=0;n<nc_cases(1000);n++) {
        nc_seed((uint64_t)n+operation*100000);
        fill(menu_widgets,sizeof(MenuWidget)*MENU_WIDGET_CAPACITY);
        fill(menu_layout,sizeof(MenuLayout));
        fill(NC_ADDR(0x151041DC0),2048);
        fill(NC_ADDR(0x15104A9C0),0x498);
        fill(NC_ADDR(0x150F61168),40);
        int length=n%9==0?255:(int)nc_rand_below(250);
        for(int k=0;k<length;k++) label[k]=(unsigned char)(1+nc_rand_below(255));
        label[length]=0;
        if(n%7==0 && length>3) {label[1]='#';label[2]='#';}
        menu_parent=n%5==0?-1:(n%5==1?255:(n%5==2?-2:1));
        *menu_parent_x(menu_parent)=nc_float(-1000,1000);
        *menu_parent_y(menu_parent)=nc_float(-1000,1000);
        *menu_parent_scroll(menu_parent)=nc_float(-1000,1000);
        menu_layout->x=nc_float(-1000,1000);menu_layout->y=nc_float(-1000,1000);
        menu_layout->width=nc_float(-500,500);menu_layout->height=nc_float(-500,500);
        menu_layout->next_alignment=n%16|((n/16%2)<<8);
        menu_layout->next_active=n%3==0;
        menu_layout->next_disabled=n%4==0;
        menu_layout->next_shortcut=keys[n%7];
        menu_layout->next_unknown_100=n%3?0:nc_rand();
        menu_layout->next_attachment=n%2?0:nc_rand();
        menu_layout->next_keyboard_focus=n%2;
        menu_layout->vertical=n%2;
        menu_grid_enabled=n%3!=0;
        menu_grid_column=grid_positions[n%6];menu_grid_row=grid_positions[n/6%6];
        menu_active_parent=n%2?menu_parent:12345;
        if(menu_layout->next_shortcut<512 && n%3==0)
            *menu_shortcut_slot(menu_layout->next_shortcut)=-1;
        for(int k=0;k<256;k++) text_label_crc_table[k]=n%11?0:(uint32_t)nc_rand();
        uint32_t id=operation?((uint32_t (*)(unsigned char *,uint32_t))NC_ADDR(0x14006C670))
            (label,((uint32_t)menu_parent<<8)+(menu_layout->id_seed<<16)):(uint32_t)nc_rand();
        int first=holes[n%6],target=first;
        for(int k=0;k<MENU_WIDGET_CAPACITY;k++) {
            menu_widgets[k].status=k<first?(n%3==0?-1:3):0;
            menu_widgets[k].id=id^0x12345678;
        }
        if(n%3==1) {
            menu_widgets[1].status=1;menu_widgets[1].id=id;
            menu_widgets[17].status=2;menu_widgets[17].id=id;
            target=17;
        } else if(n%3==2) {
            menu_widgets[1023].status=1;menu_widgets[1023].id=id;
            if(!(menu_layout->next_alignment&256)) target=1023;
        }
        menu_widgets[900].status=3;menu_widgets[900].id=id;
        if(target>=MENU_WIDGET_CAPACITY) target=-1;
        if(target>=0) menu_widgets[target].pending=n%4?nc_rand()|1:0;
        menu_active_widget=n%4==0?target:12345;
        menu_hovered_widget=n%5?target:12345;
        menu_keyboard_widget=n%4?12345:target;
        menu_keyboard_trigger=n%7!=0;
        menu_input_blocked=n%8==0;menu_click=n%6!=0;
        menu_input_mode=n%5-1;
        menu_input_source=n%2?(uint32_t)menu_parent:12345;
        *value=(uint32_t)nc_rand();
        /* Include the original return register, all state, and the untouched
           records. The fixed in-image value pointer is stable across runs. */
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result;
        if(operation==0) result=allocate(id,menu_layout->x,menu_layout->y,
            menu_layout->width,menu_layout->height,menu_layout->style);
        else if(operation==1) result=button(label);
        else if(operation==2) result=selectable(label,(int32_t *)value,(uint32_t)n*1234567);
        else result=toggle(label,value);
        uint32_t status=nc_get_mxcsr();
        nc_line("menu %d %d %016llx %08x %08x %08x %08x %08x %08x",operation,n,
            (unsigned long long)result,*value,status,menu_active_widget,menu_keyboard_widget,
            menu_grid_column,menu_grid_row);
        nc_line("state %016llx %016llx %016llx %016llx %016llx",
            (unsigned long long)widgets_hash(target),(unsigned long long)layout_hash(),
            (unsigned long long)nc_hash(NC_ADDR(0x151041DC0),2048),
            (unsigned long long)nc_hash(NC_ADDR(0x15104A9C0),0x498),
            (unsigned long long)nc_hash(text_label_crc_table,1024));
    }
    return 0;
}
