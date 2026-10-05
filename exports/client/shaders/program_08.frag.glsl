#version 330 core

uniform sampler2D tex_normal;
uniform sampler2D tex_detail;
uniform sampler2D tex_color;
uniform sampler2D tex_shadow;
uniform usampler2D tex_mask;

uniform vec3 lightambient;
uniform vec3 lightdiffuse;

uniform int land_usemask;

in vec2 texcoord0;
in vec2 texcoord1;
in vec2 texcoordmask;
in vec3 lightvec;
in vec3 viewvec;
in vec3 normalvec;

out vec4 fragcolor;

vec3 converttosrgb3f(vec3 linearcolor)
  {
  bvec3 cutoff=lessThan(linearcolor,vec3(0.0031308));
  vec3 higher=vec3(1.055)*pow(linearcolor,vec3(1.0/2.4))-vec3(0.055);
  vec3 lower=linearcolor*vec3(12.92);

  return (mix(higher,lower,cutoff));
  }

vec3 converttolinear3f(vec3 srgbcolor)
  {
  bvec3 cutoff=lessThan(srgbcolor,vec3(0.04045));
  vec3 higher=pow((srgbcolor+vec3(0.055))/vec3(1.055),vec3(2.4));
  vec3 lower=srgbcolor/vec3(12.92);

  return (mix(higher,lower,cutoff));
  }
  
void main()
  {
  uint mask;
  uint maskx,maskz;
  vec4 color;
  vec4 normal;
  vec3 lightnormal;
  vec3 viewnormal;
  vec3 reflectvec;
  vec2 shadowmaptexcoord;
  float scale;
  float shine;
  float rho,k;
  float shadow;
  
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
  
  shadowmaptexcoord=gl_FragCoord.xy*vec2(1.0/textureSize(tex_shadow,0));  
  shadow=texture(tex_shadow,shadowmaptexcoord).r;
  
  rho=3.0;
  k=(1.0+rho)/rho;
  
  lightnormal=normalize(lightvec);
  viewnormal=normalize(viewvec);
  
  normal=texture(tex_normal,texcoord0);
  normal.xyz-=0.5;
  normal.xyz=normalize(normal.xyz);
  
  //normal.xyz=normalize(normalvec);    
  
  scale=dot(normal.xyz,lightnormal);
  scale=max(scale,0.0);
  scale=0.25+scale*0.75;
  scale=k*(1.0-1.0/(1.0+rho*scale));  
  
  color.rgb=converttolinear3f(texture(tex_detail,texcoord1).rgb);
  //color.rgb*=vec3(0.5,0.25,0.125);
  color.rgb*=converttolinear3f(texture(tex_color,texcoord0).rgb);
  color.rgb=color.rgb*lightambient*(0.375+dot(normal.xyz,lightnormal)*0.125)+color.rgb*lightdiffuse*scale*shadow*0.625;
  //color.rgb*=scale;aa
  
  shine=0.0625+(1.0-texture(tex_detail,texcoord1.st).r)*0.5;
  scale=abs(dot(viewnormal,normal.xyz));
  scale=1.0-scale;
  scale*=scale;
  scale*=scale;
  shine=shine+(1.0-shine)*scale;
  shine*=0.25;

  reflectvec=reflect(lightnormal,normal.xyz);
  reflectvec=normalize(reflectvec);
  scale=dot(reflectvec,viewnormal);
  scale=max(scale,0.0);
  scale=pow(scale,2.0);
  scale=scale*shine;
  color.rgb+=scale*shadow*lightdiffuse;    
  
  color.rgb=converttosrgb3f(color.rgb);

  color.a=1.0;  
    
  fragcolor=color;
  }