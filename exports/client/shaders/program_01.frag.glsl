#version 330 core

uniform sampler2DArray tex_color;
uniform sampler2D tex_shadowmap;
uniform sampler2DArray tex_material;
uniform samplerCube tex_cubemap;

uniform vec3 lightambient;
uniform vec3 lightdiffuse;

uniform vec2 ooresolution;

uniform int isreflection;
uniform vec3 planeposition;
uniform vec3 planenormal;

uniform int flags;

in vec2 texcoord;
flat in int texlevel;
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
  //albedo=pow(albedo,vec3(2.2));
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
  //env=textureLod(tex_cubemap,vec3(0.0,-1.0,0.0),7.0).rgb;
  //if ((flags&1)==1)
  //env=pow(env,vec3(2.2));  
  env=converttolinear3f(env);
  
  //diffref+=textureLod(tex_cubemap,reflectnormal,9.0).rgb*0.5;
  diffref+=env*0.75;
  diffref*=1.5;
  
  env=textureLod(tex_cubemap,reflectnormal,roughness*roughness*8.0).rgb;
  //if ((flags&1)==1)
  //env=pow(env,vec3(2.2));  
  env=converttolinear3f(env);
  specfresnel=fresnel_factor(fres,NdV)*(1.0-roughness*0.5);
  //if ((flags&1)==0)
  //specref+=env*metallic*0.25;//*specfresnel;
  //else
  specref+=env*0.75*specfresnel;
  
  color=diffref*mix(albedo,vec3(0.0),metallic)+specref;

  //if ((debugflags&16)==16)
  //color.rgb+=albedo*(vec3(1.0)-specfresnel)*textureLod(tex_cubemap,reflectnormal,7.0).rgb*0.5;//*lightambient;
  
  //color.rgb=color.rgb/(color.rgb+vec3(1.0));
  //if ((flags&1)==1)
  //color=pow(color,vec3(1.0/2.2));
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
  vec4 color3;
  vec3 texcolor;
  vec4 normal;
  vec3 position;
  float scale,scale2;
  float rho,k;
  float height;
  vec2 shadowmaptexcoord;
  float shadow;
  float occlusion;
  float shine;
  float shine2;
  float dist;
  float metallic;
  float roughness;  
  
  if (isreflection==1)
    {
    position=wsposition-planeposition;
    if (dot(position,planenormal)<0.0)
      discard;
    }
    
  shadowmaptexcoord=gl_FragCoord.xy*ooresolution;
  shadow=texture(tex_shadowmap,shadowmaptexcoord).r;
  occlusion=0.5;//texture(tex_shadowmap,shadowmaptexcoord).g;

  lightnormal=normalize(lightvec);
  viewnormal=normalize(viewvec);
  halfnormal=normalize(viewnormal+lightnormal);
  
  color=texture(tex_color,vec3(texcoord.xy,texlevel));

  texcolor=color.rgb;
  shine=color.a;

  normal.xyz=normalize(normalvec);
  
  color2=texture(tex_material,vec3(texcoord.xy,texlevel));

  color2.rgb=converttolinear3f(color2.rgb);
  metallic=color2.r;
  roughness=color2.g;
  color.rgb=pbr(texcolor,metallic,roughness,shadow,viewnormal,lightnormal,halfnormal,normal.xyz);
  
  if (shine>0.0)
    {
    color3.rgb=color.rgb;
	
    scale2=1.0-abs(dot(-viewnormal,normal.xyz));
    scale2=pow(scale2,2.5);  
    scale2=0.5+scale2*(1.0-0.5);    

    reflectvec=reflect(-viewnormal,normal.xyz);
    
    //if ((flags&1)==1)
    //reflectvec=(reflectvec-viewnormal)*vec3(1.25)+viewnormal;
    
    //reflectvec.x=-reflectvec.x;
    reflectvec.y=-reflectvec.y;
    reflectvec.z=-reflectvec.z;
    reflectvec=normalize(reflectvec);
      
    color2.rgb=texture(tex_cubemap,reflectvec).rgb;
    
    color2.rgb=color2.rgb*vec3(scale2)+lightambient*vec3((1.0-scale2)*0.5);
    
      
    shine2=(shine-0.5)*2.0;
    //shine+=0.5;
    //shine=min(shine,1.0);
    //shine=1.0;
    //color.rgb=vec3(0.125);
    //color.rgb=mix(color.rgb,vec3(0.25),shine2);
    //color.rgb=mix(color.rgb,color2.rgb,shine2);

    color.rgb=mix(color.rgb,color2.rgb,shine);
    //color.rgb=mix(color.rgb,color3.rgb,1.0-shine);

    //color.rgb=vec3(0.0,1.0,1.0);
    }
  
  //color.rgb=vec3(0.0,1.0,1.0);
  color.a=1.0;

  glfragcolor=color;
  }