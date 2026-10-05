#version 330 core

uniform sampler2D tex_color;
uniform sampler2D tex_shadowmap;
uniform samplerCube tex_cubemap;

uniform vec2 ooresolution;

uniform vec3 lightambient;
uniform vec3 lightdiffuse;

uniform int flags;

in vec3 lightvec;
in vec3 viewvec;
in vec3 normalvec;
in vec2 texcoord;

out vec4 fragcolor;

#define PI 3.1415926


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
  //if ((debugflags&2)==2)
  //  rim=mix(1.0-roughness*1.0*0.9,1.0,NdV);

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
 
  //if ((flags&1)==1)
  albedo=pow(albedo,vec3(2.2));
 
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
  env=textureLod(tex_cubemap,reflectnormal,9.0).rgb;
  //if ((flags&1)==1)
  //env=pow(env,vec3(2.2));  
  //diffref+=textureLod(tex_cubemap,reflectnormal,9.0).rgb*0.5;
  diffref+=env*0.75;
  diffref*=1.5;
  
  env=textureLod(tex_cubemap,reflectnormal,roughness*roughness*8.0).rgb;
  //if ((flags&1)==1)
  env=pow(env,vec3(2.2));  
  specfresnel=fresnel_factor(fres,NdV)*(1.0-roughness*0.5);
  //if ((flags&1)==0)
   
  specref+=env*0.5*specfresnel;
  
  color=diffref*mix(albedo,vec3(0.0),metallic)+specref;

  color=pow(color,vec3(1.0/2.2));
  
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
  vec3 ambientcolor;
  vec3 diffusecolor;
  vec4 normal;
  float scale;
  float rho,k;
  float height;
  vec2 shadowmaptexcoord;
  float shadow;
  float occlusion;
  float shine;
  float fresnel;
  float metallic;
  float roughness;

  shadowmaptexcoord=gl_FragCoord.xy*ooresolution;
  shadow=texture(tex_shadowmap,shadowmaptexcoord).r;
  occlusion=0.5;//texture(tex_shadowmap,shadowmaptexcoord).g;

  lightnormal=normalize(lightvec);
  viewnormal=normalize(viewvec);
  halfnormal=normalize(viewnormal+lightnormal);

  ambientcolor=texture(tex_color,texcoord).rgb;
  shine=texture(tex_color,texcoord).a;
  diffusecolor=ambientcolor;
  
  normal.xyz=normalize(normalvec);
  
  if ((flags&16)==16)
    {


  scale=abs(dot(viewnormal,normal.xyz));
  scale=1.0-scale;
  scale*=scale;
  shine=shine+(1.0-shine)*scale;
  
  color.rgb=vec3(0.0);
  scale=dot(lightnormal,normal.xyz);
  if ((flags&1)==0)
  color.rgb=ambientcolor*vec3(1.5)*occlusion*lightambient*vec3(scale*0.125+0.875);
  reflectvec.x=normal.x;
  reflectvec.y=-normal.y;
  reflectvec.z=-normal.z;
  if ((flags&1)==1)
  color.rgb=ambientcolor*vec3(2.0)*textureLod(tex_cubemap,reflectvec,9.0).rgb;
  
  scale=max(scale,0.0);
  scale=shadow*scale;//*0.25;
  color.rgb+=diffusecolor*lightdiffuse*vec3(scale);

  scale=dot(normal.xyz,viewnormal);
  if (scale>=0.0)
    scale=1.0-scale;
  else
    scale=0.0;
  scale=max(scale,0.0);

  scale=pow(scale,2.0);

  if ((flags&2)==2)
  color.rgb+=lightdiffuse*vec3(scale*1.0)*textureLod(tex_cubemap,reflectvec,9.0).rgb;
  
  
  reflectvec=reflect(lightnormal,normal.xyz);
  reflectvec=normalize(reflectvec);
  scale=dot(reflectvec,viewnormal);
  scale=max(scale,0.0);
  scale=pow(scale,32.0);
  scale=shadow*scale*shine;
  
  
  reflectvec=reflect(viewnormal,normal.xyz);
  reflectvec.x=-reflectvec.x;
  reflectvec=normalize(reflectvec);
  //scale=clamp(reflectvec.y+0.25,0.25,1.0);
  scale=0.125;
  if ((flags&4)==4)
    color.rgb=mix(textureLod(tex_cubemap,reflectvec,0.0).rgb,color.rgb,scale);

    }
  else
    {
  metallic=0.5;  
  roughness=0.125;
  if (shine<0.5)
    {
  metallic=0.0;  
  roughness=0.5;
    }
  color.rgb=pbr(ambientcolor,metallic,roughness,shadow,viewnormal,lightnormal,halfnormal,normal.xyz);
  
  }

  color.a=1.0;

  fragcolor=color;
  }