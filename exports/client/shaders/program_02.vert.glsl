#version 330 core

uniform vec3 viewposition;
uniform vec3 lightdirection;

uniform mat4 modelviewprojectionmatrix;

layout(location=0) in vec3 invertex;
layout(location=1) in vec2 intexcoord;
layout(location=2) in vec3 innormal;

out vec2 texcoord;
out vec3 lightvec;
out vec3 viewvec;
out vec3 normalvec;

void main()
  {
  viewvec=viewposition-invertex;
  normalvec=innormal;
  lightvec=lightdirection;

  texcoord=intexcoord;
  gl_Position=modelviewprojectionmatrix*vec4(invertex,1.0);
  }