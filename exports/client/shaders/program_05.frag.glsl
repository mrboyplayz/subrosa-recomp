#version 330 core

uniform usampler2D tex_mask;

uniform int land_usemask;

in vec3 viewvec;
in vec2 texcoordmask;

out vec4 fragcolor;

void main()
  {
  uint mask;
  uint maskx,maskz;  
  vec4 color;
  float fragdepth;
  
  if (land_usemask==1)
    {
    maskx=uint(texcoordmask.s*4.0*1024.0);
    maskz=uint(texcoordmask.t*4.0*1024.0);
    maskx=maskx&3u;
    maskz=maskz&3u;
    mask=texture(tex_mask,texcoordmask).r;
    
    maskz=maskz*4u;
    mask=mask&(1u<<(maskz+maskx));
    if (mask==0u)
      discard;
    }  

  fragdepth=length(viewvec);
  color.rgb=vec3(fragdepth*0.0000152587890625,fragdepth*0.00390625,fragdepth);
  color.rgb=fract(color.rgb);
  color.rgb*=256.0;
  color.rgb=floor(color.rgb);
  color.rgb/=255.0;

  color.a=1.0;

  fragcolor=color;
  }