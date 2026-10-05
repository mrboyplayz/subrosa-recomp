#version 330 core

uniform mat4 modelviewprojectionmatrix;

uniform vec3 lightdirection;
uniform vec3 viewposition;

layout(location=0) in vec3 position_in;
layout(location=1) in vec3 normal_in;

out vec2 texcoord0;
out vec2 texcoord1;
out vec2 texcoordmask;
out vec3 lightvec;
out vec3 viewvec;
out vec3 normalvec;

void main()
  {
  lightvec=lightdirection;
  viewvec=position_in-viewposition;
  normalvec=normal_in;

  texcoord0.s=(position_in.x*0.125+512.0)*0.00048828125;
  texcoord0.t=1.0-(position_in.z*0.125+512.0)*0.00048828125;
  texcoord1.s=position_in.x*0.0625*0.5;
  texcoord1.t=1.0-position_in.z*0.0625*0.5;
  
  texcoordmask.s=(position_in.x*0.125+512.0)*0.00048828125;
  texcoordmask.t=(position_in.z*0.125+512.0)*0.00048828125;
  
  gl_Position=modelviewprojectionmatrix*vec4(position_in,1.0);
  }