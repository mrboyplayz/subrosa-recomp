#version 330 core

uniform mat4 modelviewprojectionmatrix;

uniform vec3 lightdirection;

layout(location=0) in vec3 position_in;
layout(location=1) in vec3 viewvec_in;

out vec3 lightvec;
out vec3 viewvec;

void main()
  {
  lightvec=lightdirection;
  viewvec=viewvec_in;
  gl_Position=modelviewprojectionmatrix*vec4(position_in,1.0);
  }