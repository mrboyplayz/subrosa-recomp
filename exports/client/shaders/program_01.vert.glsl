#version 330 core

uniform mat4 modelviewprojectionmatrix;

uniform vec3 viewposition;
uniform vec3 lightdirection;
uniform vec4 clipplane;

layout(location=0) in vec3 invertex;
layout(location=1) in vec3 intexcoord;
layout(location=2) in vec3 innormal;

out vec2 texcoord;
flat out int texlevel;
out vec3 lightvec;
out vec3 viewvec;
out vec3 normalvec;
out vec3 wsposition;

void main()
  {
  wsposition=invertex;
  
  gl_ClipDistance[0]=dot(vec4(wsposition,1.0),clipplane);

  viewvec=viewposition-invertex;
  
  normalvec=innormal;
  lightvec=lightdirection;

  texcoord=intexcoord.xy;
  texlevel=int(intexcoord.z);
  gl_Position=modelviewprojectionmatrix*vec4(invertex,1.0);
  }