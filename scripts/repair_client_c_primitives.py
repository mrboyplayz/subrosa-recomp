"""C implementations for five previously assembly-backed native helpers."""
from repair_client_menu_actions import pinned_pe, region, check

PORTS={
0x15d7e0:b'''char *sub_14015D7E0(char *Block,int source_channels,int channels,int width,int height)
{
  if(channels==source_channels)return Block;
  if((unsigned)(channels-1)>3)
    sub_14023E640((char *)L"req_comp >= 1 && req_comp <= 4",(char *)L"C:\\\\visualc2010\\\\code\\\\csl03\\\\stb/stb_image.h",0x6a4);
  if(channels<0 || width<0 || (width && channels>INT32_MAX/width) || height<0)
    goto outofmem;
  int row_bytes=width*channels;
  if(row_bytes<0 || (height && row_bytes>INT32_MAX/height))goto outofmem;
  unsigned char *out=(void *)(uintptr_t)j__malloc_base(height*row_bytes);
  if(!out)goto outofmem;
  if(source_channels<1 || source_channels>4 || channels<1 || channels>4){
    sub_14023E640((char *)L"0",(char *)L"C:\\\\visualc2010\\\\code\\\\csl03\\\\stb/stb_image.h",0x6c1);
    free(Block);free(out);
    *(const char **)(*(_QWORD *)(__readgsqword(0x58)+8LL*dword_140404A6C[19064470])+16)="unsupported";
    return NULL;
  }
  for(int y=0;y<height;y++){
    const unsigned char *in=(const unsigned char *)Block+(int64_t)width*source_channels*y;
    unsigned char *row=out+(int64_t)row_bytes*y;
    for(int x=0;x<width;x++,in+=source_channels,row+=channels){
      unsigned r=in[0],g=source_channels<3?r:in[1],b=source_channels<3?r:in[2];
      unsigned alpha=source_channels==2?in[1]:source_channels==4?in[3]:255;
      if(channels<3){row[0]=(unsigned char)((77*r+150*g+29*b)>>8);if(channels==2)row[1]=(unsigned char)alpha;}
      else {row[0]=(unsigned char)r;row[1]=(unsigned char)g;row[2]=(unsigned char)b;if(channels==4)row[3]=(unsigned char)alpha;}
    }
  }
  free(Block);return (char *)out;
outofmem:
  free(Block);
  *(const char **)(*(_QWORD *)(__readgsqword(0x58)+8LL*dword_140404A6C[19064470])+16)="outofmem";
  return NULL;
}
''',
0x243770:b'''int strcmp_sr(char *Str1,char *Str2)
{
  const unsigned char *a=(const unsigned char *)Str1,*b=(const unsigned char *)Str2;
  while(*a==*b){if(!*a)return 0;a++;b++;}
  return *a<*b?-1:1;
}
''',
0x243f84:b'''int abs(int Number)
{
  uint32_t sign=0u-(uint32_t)(Number<0);
  return (int32_t)(((uint32_t)Number^sign)-sign);
}
''',
0x254ccc:b'''char *strnlen_sr(__m128i *a1,unsigned __int64 a2)
{
  const unsigned char *bytes=(const unsigned char *)a1;uint64_t length=0;
  while(length<a2 && bytes[length])length++;
  return (char *)(uintptr_t)length;
}
''',
0x254f48:b'''__int64 sub_140254F48(__m128i *a1,unsigned __int64 a2)
{
  const unsigned char *bytes=(const unsigned char *)a1;uint64_t length=0;
  while(length<a2){uint16_t word;memcpy(&word,bytes+length*2,2);if(!word)break;length++;}
  return (int64_t)length;
}
'''}


def repair(source):
    pe=pinned_pe()
    check(pe,0x243f84,'8bc19933c22bc2c3')
    check(pe,0x2437cf,'481bc04883c801c3')
    for rva,definition in PORTS.items():
        a,b,body=region(source,rva)
        if b'/* recovered in client_native_gaps.s */' not in body and b'{' not in body:
            raise ValueError('C primitive source inventory changed')
        marker=body[:body.index(b'\n')].replace(b'\r',b'')
        source=source[:a]+marker+b'\n'+definition+source[b:]
    return source,{'recovered_native_c_primitive_definitions':len(PORTS)}
