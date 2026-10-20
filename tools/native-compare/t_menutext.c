// NC_WRAPPERS: 140074C50 140074CE0
#include <string.h>
#include "nc.h"
#include "menu.h"
#include "text.h"

#ifdef NC_NATIVE
#define hit(w,x) ((uint64_t (*)(int,float))NC_ADDR(0x140074C50))(w,x)
#define prefix(w,n) ((float (*)(int,int))NC_ADDR(0x140074CE0))(w,n)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_menu_text_hit_index(int,float);
float sr_menu_text_prefix_width(int,int);
#define hit sr_menu_text_hit_index
#define prefix sr_menu_text_prefix_width
#else
#define hit menu_text_hit_index
#define prefix menu_text_prefix_width
#endif

int main(void)
{
    static const int fonts[]={0,1,7,-1};
    static const int limits[]={-1,0,1,2,63,127,255,256,1000};
    nc_map_image();
    for(int op=0;op<2;op++) for(int n=0;n<nc_cases(8000);n++) {
        nc_set_mxcsr(0x1f80);nc_seed(n+op*100000);
        int index=(int)nc_rand_below(MENU_WIDGET_CAPACITY);
        MenuWidget *widget=&menu_widgets[index];
        memset(widget,0xa5,sizeof(*widget));
        int font=fonts[n%4];
        float *widths=(float *)(text_font_bytes(font)+TEXT_FONT_ADVANCES);
        for(int k=0;k<256;k++) widths[k]=nc_float(-3,3);
        for(int k=0;k<260;k++) menu_text_buffer[k]=(unsigned char)(1+nc_rand_below(255));
        int length=n%19==0?0:(int)nc_rand_below(257);
        menu_text_buffer[length]=0;
        menu_text_limit=limits[n/4%9];
        widget->font=font;widget->text_size=nc_float(-100,100);widget->password=n%3;
        float x=nc_float(-500,500);
        int count=limits[n/36%9];
        if(n%17==0) {
            menu_text_buffer[0]='A';menu_text_buffer[1]=0;
            widths['A']=1.0f;widths['*']=2.0f;widget->text_size=1.0f;
            static const uint32_t positions[]={0,0x3f7fffff,0x3f800000,0x3f800001,0x7fc12345,0x7fa12345};
            memcpy(&x,positions+n/17%6,4);menu_text_limit=1;count=1;
        }
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result=0;float value=0;
        if(op==0) result=hit(index,x);else value=prefix(index,count);
        uint32_t status=nc_get_mxcsr();
        nc_line("menutext %d %d %016llx %08x %016llx %016llx %016llx",op,n,
            (unsigned long long)result,status,(unsigned long long)nc_hash(widget,sizeof(*widget)),
            (unsigned long long)nc_hash(widths,1024),(unsigned long long)nc_hash(menu_text_buffer,260));
        nc_floats("width",&value,1);
    }
    return 0;
}
