#version 330 core

uniform sampler2D tex_color;

uniform mat4 texturematrix;

uniform vec3 waterangle;

uniform int flags;

in vec3 wsposition;

out vec4 fragcolor;

#define PI 3.1415926
#define TILESIZE 0.25
#define WAVESIZE 0.125

float rand(vec2 n)
  { 
	return(fract(sin(dot(floor(n),vec2(12.9898,4.1414)))*43758.5453));
  }

void main()
  {
  vec4 color;
  vec4 position;
  float height;
  
  //texcoord=gl_FragCoord.xy/textureSize(tex_color,0);
  //color.rgb=texture(tex_color,texcoord).rgb;
  position=texturematrix*vec4(wsposition,1.0);
  
  height=min(0.5-abs(0.5-fract(wsposition.x*TILESIZE)),WAVESIZE);
  height=min(height,min(0.5-abs(0.5-fract(wsposition.z*TILESIZE)),WAVESIZE));
  
  //if ((flags&1)==1)
  //height=smoothstep(0.0,WAVESIZE,height)*0.0625;
  //else
  height*=(0.0625/WAVESIZE);
  
  //height*=0.25;
  height*=2.0;
  height=cos(rand(wsposition.xz*vec2(TILESIZE))*PI*2.0+waterangle.x)*height;
  
  position.y-=height;
  
  //position.y+=fract(sin(dot(gl_FragCoord.xy,vec2(12.9898453)
  color.rgb=textureProj(tex_color,position).rgb;
  
  height=0.75+height*0.5;
  color.rgb*=height;
  color.rgb*=1.5;
 
  color.a=1.0;

  fragcolor=color;
  }