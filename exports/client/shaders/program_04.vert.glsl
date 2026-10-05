#version 330 core

#define MAX_BONES_PER_VERTEX   4
#define MAX_BONES             16

uniform vec3 boneorgposition[MAX_BONES];
uniform vec3 boneposition[MAX_BONES];
uniform mat3 boneorientation[MAX_BONES];

layout(location=0) in vec3 vertexposition;
layout(location=1) in vec2 vertextexcoord;
layout(location=2) in vec3 vertexnormal;
layout(location=3) in vec4 texcoordoffset;
layout(location=4) in ivec4 inboneid;
layout(location=5) in vec4 inboneweight;

out vec3 vs_position_out;
out vec2 vs_texcoord_out;
out vec3 vs_normal_out;

void main()
  {
  int count;
  int bonenum;
  ivec4 boneid;
  vec4 boneweight;
  vec3 position;
  vec3 pos;
  vec3 normal;
  vec3 nor;
  vec2 texcoord;
  
  boneid=inboneid;
  boneweight=inboneweight;
  
  position=vec3(0.0);
  normal=vec3(0.0);
  
  for (count=0;count<MAX_BONES_PER_VERTEX;count++)
    {
    if (boneweight.x>0.0)
      {
      bonenum=boneid.x;
      
      pos=vertexposition-boneorgposition[bonenum];
      pos=boneorientation[bonenum][0].xyz*pos.x+boneorientation[bonenum][1].xyz*pos.y+boneorientation[bonenum][2].xyz*pos.z;
      nor=boneorientation[bonenum][0].xyz*vertexnormal.x+boneorientation[bonenum][1].xyz*vertexnormal.y+boneorientation[bonenum][2].xyz*vertexnormal.z;
      pos+=boneposition[bonenum];
      
      position+=pos*vec3(boneweight.x);
      normal+=nor*vec3(boneweight.x);
      }
    
    boneid.xyzw=boneid.yzwx;
    boneweight.xyzw=boneweight.yzwx;
    }
  
  texcoord=vertextexcoord;
  //if (texcoord.x>=16.0 && texcoord.x<17.0)
  //  texcoord.x=texcoordoffset.x;    
  //if (texcoord.x>=17.0 && texcoord.x<18.0)
  //  texcoord.x=texcoordoffset.y;    
  //if (texcoord.x>=18.0 && texcoord.x<19.0)
  //  texcoord.x=texcoordoffset.z;    
  //if (texcoord.x>=19.0 && texcoord.x<20.0)
  //  texcoord.x=texcoordoffset.w;    

  vs_normal_out=normal;
  vs_texcoord_out=texcoord;  
  vs_position_out=position;
  }
