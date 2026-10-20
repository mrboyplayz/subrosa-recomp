// NC_WRAPPERS: 140071640 1400764B0
#include <string.h>
#include "nc.h"
#include "menu.h"
#include "text.h"

#ifdef NC_NATIVE
#define label(t) ((void (*)(const unsigned char *))NC_ADDR(0x140071640))(t)
#define label_at(t,x,y,s,f) ((void (*)(const unsigned char *,float,float,float,int))NC_ADDR(0x1400764B0))(t,x,y,s,f)
#elif defined(NC_CLIENT_WRAPPERS)
void sr_menu_label(char *);
void sr_menu_label_at(char *,float,float,float,char);
#define label(t) sr_menu_label((char *)(t))
#define label_at(t,x,y,s,f) sr_menu_label_at((char *)(t),x,y,s,f)
#else
#define label(t) menu_label(t)
#define label_at(t,x,y,s,f) menu_label_at(t,x,y,s,f)
#endif
static void normalize(void *p)
{
    uint32_t bits;memcpy(&bits,p,4);
    if((bits&0x7fffffff)>0x7f800000) {bits=0x7fc00000;memcpy(p,&bits,4);}
}
int main(void)
{
    static const int counts[]={-1,0,1,2,1023,1024,1025};
    static const int lengths[]={0,1,15,63,127,255,256,257,511};
    size_t bytes=1027*sizeof(MenuTextRecord);
    unsigned char *records=(unsigned char *)menu_label_record(UINT32_MAX);
    static unsigned char copy[1027*sizeof(MenuTextRecord)];
    nc_map_image();
    for(int op=0;op<2;op++) for(int n=0;n<nc_cases(3000);n++) {
        nc_set_mxcsr(0x1f80);nc_seed(n+op*100000);
        memset(records,0xa5,bytes);
        for(size_t k=0;k<sizeof(MenuLayout);k+=4) {uint32_t v=(uint32_t)nc_rand();memcpy((char *)menu_layout+k,&v,4);}
        menu_layout->x=nc_float(-1000,1000);menu_layout->y=nc_float(-1000,1000);
        menu_layout->font_size=nc_float(-100,100);menu_layout->vertical=n%2;
        int font=n%4;menu_layout->unknown_d4=font;
        float *advances=(float *)(text_font_bytes(font)+TEXT_FONT_ADVANCES);
        for(int k=-128;k<128;k++) advances[k]=nc_float(-2,2);
        renderer_fonts[font].loaded=n%3==0?0:-1;
        menu_parent=n%3==0?-1:n%3==1?0:255;
        *menu_parent_x(menu_parent)=nc_float(-1000,1000);
        *menu_parent_y(menu_parent)=nc_float(-1000,1000);
        *menu_parent_scroll(menu_parent)=nc_float(-1000,1000);
        int index=counts[n%7],length=lengths[n/7%9];
        if(index<0 && length>127) length=127;
        menu_text_record_count=(uint32_t)index;
        unsigned char source[600];
        for(int k=0;k<length;k++) source[k]=(unsigned char)(1+nc_rand_below(255));
        source[length]=0;
        const unsigned char *input=source;
        if(n%11==0 && index>=0 && index<1024 && length<=127) {
            input=menu_label_record(index)->label+16;
            memcpy((void *)input,source,(size_t)length+1);
        }
        if(index>=1024) input=NULL;
        float x=nc_float(-1000,1000),y=nc_float(-1000,1000),size=nc_float(-100,100);
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        if(op) label_at(input,x,y,size,n%16);else label(input);
        uint32_t status=nc_get_mxcsr();
        memcpy(copy,records,bytes);
        if(index<1024) {
            MenuTextRecord *record=(MenuTextRecord *)(copy+(index+1)*sizeof(MenuTextRecord));
            normalize(&record->local[0]);normalize(&record->local[1]);
            normalize(&record->screen[0]);normalize(&record->screen[1]);
        }
        MenuLayout layout=*menu_layout;
        normalize(&layout.x);normalize(&layout.y);
        nc_line("labels %d %d %08x %08x %016llx %016llx",op,n,menu_text_record_count,status,
            (unsigned long long)nc_hash(copy,bytes),(unsigned long long)nc_hash(&layout,sizeof(layout)));
    }
    return 0;
}
