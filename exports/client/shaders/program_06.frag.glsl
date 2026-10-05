#version 330 core

uniform sampler2D tex_depth;

uniform vec4 atmoconstant;
uniform vec3 atmowavelength;
uniform vec2 ooresolution;
uniform vec3 worldposition;

uniform int numofsamples;

in vec3 lightvec;
in vec3 viewvec;

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

vec4 converttosrgb4f(vec4 linearcolor)
  {
  bvec4 cutoff=lessThan(linearcolor,vec4(0.0031308));
  vec4 higher=vec4(1.055)*pow(linearcolor,vec4(1.0/2.4))-vec4(0.055);
  vec4 lower=linearcolor*vec4(12.92);

  return (mix(higher,lower,cutoff));
  }

vec4 converttolinear4f(vec4 srgbcolor)
  {
  bvec4 cutoff=lessThan(srgbcolor,vec4(0.04045));
  vec4 higher=pow((srgbcolor+vec4(0.055))/vec4(1.055),vec4(2.4));
  vec4 lower=srgbcolor/vec4(12.92);

  return (mix(higher,lower,cutoff));
  }

float raydistancesphere(in vec3 position,in vec3 direction,in float radius)
  {
  float scale;
  float a,b2;

  scale=dot(position,direction);
  b2=dot(position,position)-scale*scale;
  a=sqrt(radius*radius-b2);
  a-=scale;

  return (a);
  }

float raydistancesphere2(in vec3 position,in vec3 direction,in float radius)
  {
  float scale;
  float a,b2;

  scale=-dot(position,direction);
  if (scale<0.0)
    return(0.0);
  b2=dot(position,position)-scale*scale;
  if (b2>radius*radius)
    return(0.0);

  a=sqrt(radius*radius-b2);
  a=scale-a;

  return(a);
  }  

void atmosphericscattering4(inout vec4 color,in vec3 position,in vec3 viewnormal,in vec3 lightnormal)
  {
  int count;
  vec3 rayposition;
  vec3 inscatter;
  vec3 mieinscatter;
  vec3 rayleigh;
  vec3 mie;
  vec3 attenuation;
  vec3 outscatter;
  vec3 mieoutscatter;
  vec3 worldvec;
  vec3 ext;
  float viewlength;
  float raylength;
  float phase;
  float miephase;
  float miecoef;
  float dist;
  float height;
  float density;
  float miedensity;  
  float oosamples;
  float lengthtemp;
  float g;
  float totaloutscatter;
  float scale;
  
  worldvec=worldposition;
  
  oosamples=1.0/numofsamples;
  
  miecoef=1.0;
  
  viewlength=length(position);
  phase=dot(viewnormal,lightnormal);
  g=0.1;
  miephase=0.0;//(3.0*((1.0-g*g)*(1.0+phase*phase)))/(((2.0+g*g)*pow(1.0+g*g-2.0*g*phase,1.5))*(8.0*3.14159265359));  
  
  phase=3.0/(16.0*3.14159265359)*(1.0+phase*phase);
  
  outscatter=1.0*viewlength*oosamples*atmowavelength*vec3(atmoconstant.x);
  mieoutscatter=viewlength*oosamples*vec3(atmoconstant.x);
  inscatter=1.0*1.0*viewlength*oosamples*phase*atmowavelength*vec3(atmoconstant.x);
  mieinscatter=1.5*viewlength*oosamples*miephase*vec3(atmoconstant.x);
  
  dist=1.0;
  
  color.rgb=vec3(0.0);
  if (viewlength>4.0)
    {
    scale=dot(viewnormal,lightnormal)-0.9998;
    scale=max(scale,0.0)*262144.0;
    scale=min(scale,16.0);
    color.rgb=vec3(scale);
    }  
  
  totaloutscatter=1.0;

  for (count=0;count<numofsamples;count++)
    {
    rayposition=worldvec+viewnormal*viewlength*dist;

    raylength=raydistancesphere(rayposition,lightnormal,atmoconstant.w+atmoconstant.z);
    
    height=(length(rayposition)-atmoconstant.w)/atmoconstant.z;
    height=1.0-height;
    height=clamp(height,0.0,1.0);
    height*=height;

    density=height*8.0;
	
    rayleigh=6.0*exp(-raylength*density*0.25*atmoconstant.x*atmowavelength);
      
    color.rgb*=exp(-outscatter*density);
    
    ext=atmowavelength*vec3(atmoconstant.x)*0.5;
    color.rgb+=(1.0-exp(-viewlength*oosamples*ext*density))*((rayleigh*phase*atmowavelength*vec3(atmoconstant.x))/ext);
    
    dist-=oosamples;
    }

  //outscatter=1.0*atmowavelength*atmoconstant.x;
  
  color.a=totaloutscatter;
  }
  
void main()
  {
  vec4 color;
  vec3 viewnormal;
  vec3 lightnormal;
  vec3 position;
  vec2 depthmaptexcoord;
  float fragdepth;

  //depthmaptexcoord=gl_FragCoord.xy*ooresolution;
  depthmaptexcoord.x=(gl_FragCoord.x+0.125)*ooresolution.x;
  depthmaptexcoord.y=(gl_FragCoord.y+0.125)*ooresolution.y;

  viewnormal=normalize(viewvec);
  lightnormal=normalize(lightvec);

  color.rgb=texture(tex_depth,depthmaptexcoord).rgb;
  color.a=0.0;
  fragdepth=color.r*65536.0+color.g*256.0+color.b;

  if (fragdepth>65536.0)
    {
    fragdepth=raydistancesphere2(worldposition,viewnormal,atmoconstant.w);
    if (fragdepth<=0.0)    	
	  fragdepth=raydistancesphere(worldposition,viewnormal,atmoconstant.w+atmoconstant.z);
    
    //if (fragdepth>12.0)
    //  fragdepth=12.0;
    }
  else
    fragdepth*=atmoconstant.y;//*10.0;

  position=viewnormal*vec3(fragdepth);
  atmosphericscattering4(color,position,viewnormal,lightnormal);
  //color=converttosrgb4f(color);
  color.rgb=converttosrgb3f(color.rgb);

  fragcolor=color;
  }