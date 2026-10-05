#version 330 core

uniform mat4 modelviewprojectionmatrix;

layout(location=0) in vec3 position_in;

out vec3 wsposition;

void main()
  {
  wsposition=position_in;
  
  gl_Position=modelviewprojectionmatrix*vec4(position_in,1.0);
  }