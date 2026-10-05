#version 330 core

uniform sampler2D tex_color;
uniform sampler2D tex_shadowmap;
uniform sampler2D tex_material;
uniform samplerCube tex_cubemap;
uniform sampler2DArray tex_atlas_color;
uniform sampler2DArray tex_atlas_material;

uniform vec3 lightambient;
uniform vec3 lightdiffuse;

uniform vec2 ooresolution;

uniform int isreflection;
uniform vec3 planeposition;
uniform vec3 planenormal;

in vec3 texcoord;
in vec3 lightvec;
in vec3 viewvec;
in vec3 normalvec;
in vec3 wsposition;

out vec4 glfragcolor;

#define PI 3.1415926

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

vec3 fresnel_factor(in vec3 f0,in float product)
  {
  return mix(f0,vec3(1.0),pow(1.01-product,5.0));
  }
  
float D_GGX(in float roughness,in float NdH)
  {
  float m=roughness*roughness;
  float m2=m*m;
  float d=(NdH*m2-NdH)*NdH+1.0;
  
  return m2/(PI*d*d);
  }

float G_schlick(in float roughness,in float NdV,in float NdL)
  {
  float k=roughness*roughness*0.5;
  float V=NdV*(1.0-k)+k;
  float L=NdL*(1.0-k)+k;
  
  return(0.25/(V*L));
  }

vec3 cooktorrance_specular(in float NdL,in float NdV,in float NdH,in vec3 specular,in float roughness)
  {
  float D=D_GGX(roughness,NdH);
  float G=G_schlick(roughness,NdV,NdL);
  float rim=1.0;//mix(1.0-roughness*0.0*0.9,1.0,NdV);

  return((1.0/rim)*specular*G*D);
  }
  
vec3 pbr(in vec3 albedo,in float metallic,in float roughness,float shadow,in vec3 viewnormal,in vec3 lightnormal,in vec3 halfnormal,in vec3 normal)
  {
  vec3 fres;
  float NdL;
  float NdV;
  float NdH;
  float HdV;
  float g;
  vec3 specfresnel;
  vec3 specref;
  vec3 diffref;
  vec3 reflectnormal;
  vec3 env;
  vec3 color;

  albedo=converttolinear3f(albedo);
 
  fres=vec3(0.02);
  fres=mix(fres,albedo,metallic);
  
  NdL=max(0.001,dot(normal,lightnormal));
  NdV=max(0.001,dot(normal,viewnormal));
  NdH=max(0.001,dot(normal,halfnormal));
  HdV=max(0.001,dot(halfnormal,viewnormal));
  
  specfresnel=fresnel_factor(fres,HdV);
  specref=cooktorrance_specular(NdL,NdV,NdH,specfresnel,roughness);
  specref*=vec3(NdL);
  
  g=1.0-NdL;
  g=pow(g,1.0+roughness*3.0);
  g=1.0-g;
  g*=(1.0-roughness*0.375);  
  
  diffref=(vec3(1.0)-specfresnel)*g;//(1.0/PI)*

  reflectnormal=reflect(-viewnormal,normal);
  reflectnormal.yz=-reflectnormal.yz;

  specref*=lightdiffuse*shadow;
  diffref*=lightdiffuse*shadow;
  env=textureLod(tex_cubemap,reflectnormal,7.0).rgb;
  
  env=converttolinear3f(env);

  diffref+=env*0.75;
  diffref*=1.5;
  
  env=textureLod(tex_cubemap,reflectnormal,roughness*roughness*8.0).rgb;

  env=converttolinear3f(env);
  specfresnel=fresnel_factor(fres,NdV)*(1.0-roughness*0.5);

  specref+=env*0.75*specfresnel;
  
  color=diffref*mix(albedo,vec3(0.0),metallic)+specref;
  
  color=converttosrgb3f(color);
  
  return(color);
  }
  
void main()
  {
  int count;
  vec3 lightnormal;
  vec3 viewnormal;
  vec3 halfnormal;
  vec3 reflectvec;
  vec4 color;
  vec4 color2;
  vec3 texcolor;
  vec3 material;
  vec4 normal;
  vec3 position;
  float scale,scale2;
  float rho,k;
  float height;
  vec2 shadowmaptexcoord;
  float shadow;
  float occlusion;
  float shine;
  float specpow;
  float dist;
  float metallic;
  float roughness;  
  float overlayalpha;
  
  if (isreflection==1)
    {
    position=wsposition-planeposition;
    if (dot(position,planenormal)<0.0)
      discard;
    }

  shadowmaptexcoord=gl_FragCoord.xy*ooresolution;
  shadow=texture(tex_shadowmap,shadowmaptexcoord).r;
  occlusion=0.5;//texture(tex_shadowmap,shadowmaptexcoord).g;
  if (isreflection==1)
    {
    shadow=0.5;
    occlusion=0.5;
    }

  lightnormal=normalize(lightvec);
  viewnormal=normalize(viewvec);
  halfnormal=normalize(viewnormal+lightnormal);
  
  overlayalpha=texture(tex_atlas_color,texcoord).a;
  //if (overlayalpha<0.5)
  //  overlayalpha=0.0;
  //else
  //  overlayalpha=1.0;
  //overlayalpha*=overlayalpha;

  texcolor=texture(tex_color,texcoord.xy).rgb;
  texcolor=mix(texcolor,texture(tex_atlas_color,texcoord).rgb,overlayalpha);
  //texcolor=texcolor*vec3(1.0-overlayalpha)+texture(tex_atlas_color,texcoord).rgb;
  normal.xyz=normalize(normalvec);
  
  material=converttolinear3f(texture(tex_material,texcoord.xy).rgb);
  material=mix(material,texture(tex_atlas_material,texcoord).rgb,overlayalpha);
  color.rgb=pbr(texcolor,material.r,material.g,shadow,viewnormal,lightnormal,halfnormal,normal.xyz);

  color.a=1.0;

  glfragcolor=color;
  }