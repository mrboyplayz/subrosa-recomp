#version 330 core

layout(location=0) in vec3 vertexposition;

void main()  
  {
  gl_Position=vec4(vertexposition,1.0);
  }