#version 330 core

uniform vec3 viewposition;
uniform vec3 objposition;
uniform vec3 lightdirection;
uniform mat3 objorientation;

uniform mat4 modelviewprojectionmatrix;

layout(location=0) in vec3 position_in;
layout(location=1) in vec2 vertextexcoord;
layout(location=2) in vec3 vertexnormal;
layout(location=3) in vec4 texcoordoffset;

out vec3 lightvec;
out vec3 viewvec;
out vec3 normalvec;
out vec2 texcoord;

void main()
  {
  vec3 position;

  position=objorientation[0].xyz*position_in.x+objorientation[1].xyz*position_in.y+objorientation[2].xyz*position_in.z;
  viewvec=viewposition-(position+objposition);  
  
  normalvec=objorientation[0].xyz*vertexnormal.x+objorientation[1].xyz*vertexnormal.y+objorientation[2].xyz*vertexnormal.z;
  lightvec=lightdirection;

  texcoord=vertextexcoord;
  if (texcoord.x>=16.0 && texcoord.x<17.0)
    texcoord.x=texcoordoffset.x;    
  if (texcoord.x>=17.0 && texcoord.x<18.0)
    texcoord.x=texcoordoffset.y;    
  if (texcoord.x>=18.0 && texcoord.x<19.0)
    texcoord.x=texcoordoffset.z;    
  if (texcoord.x>=19.0 && texcoord.x<20.0)
    texcoord.x=texcoordoffset.w;    
  gl_Position=modelviewprojectionmatrix*vec4(position_in,1.0);
  }