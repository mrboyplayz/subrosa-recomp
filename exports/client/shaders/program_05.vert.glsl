#version 330 core

uniform mat4 modelviewprojectionmatrix;
uniform mat4 modelviewmatrix;

uniform int islandscape;

//uniform int isreflection;
//uniform vec4 reflectplane;

layout(location=0) in vec3 position_in;

out vec3 viewvec;
out vec2 texcoordmask;

void main()
  {
  vec4 wsposition;

  wsposition=modelviewmatrix*vec4(position_in,1.0);
  viewvec=wsposition.xyz;
  
  texcoordmask.s=(position_in.x*0.125+512.0)*0.00048828125;
  texcoordmask.t=(position_in.z*0.125+512.0)*0.00048828125;    
  
  //if (isreflection)
  //  {
  //  gl_ClipDistance[0]=dot(wsposition,clipplane);
  //  }
    
  gl_Position=modelviewprojectionmatrix*vec4(position_in,1.0);
  }