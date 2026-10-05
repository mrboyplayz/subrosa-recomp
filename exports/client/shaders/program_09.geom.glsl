#version 330 core

layout(triangles_adjacency) in;
layout(triangle_strip,max_vertices=18) out;

uniform mat4 modelviewprojectionmatrix;
uniform mat4 modelmatrix;
uniform vec3 lightdirection;
uniform float shadowlength;

void main()  
  {
  vec4 position;
  vec3 normal[3];
  vec3 edgenormal[3];
  vec4 shadowvert[6];
  bool faceslight,edgefaceslight; 
  vec3 lightvec;
  
  normal[0]=cross(gl_in[4].gl_Position.xyz-gl_in[0].gl_Position.xyz,gl_in[2].gl_Position.xyz-gl_in[0].gl_Position.xyz);
  normal[1]=cross(gl_in[0].gl_Position.xyz-gl_in[2].gl_Position.xyz,gl_in[4].gl_Position.xyz-gl_in[2].gl_Position.xyz);
  normal[2]=cross(gl_in[2].gl_Position.xyz-gl_in[4].gl_Position.xyz,gl_in[0].gl_Position.xyz-gl_in[4].gl_Position.xyz);
  faceslight=false;
  if (dot(normal[0],lightdirection)>=0.0 || dot(normal[1],lightdirection)>=0.0 || dot(normal[2],lightdirection)>=0.0)
    faceslight=true;
    
  if (faceslight==false)
    {
    lightvec=lightdirection*vec3(-shadowlength);

    shadowvert[0]=modelviewprojectionmatrix*gl_in[0].gl_Position;
    shadowvert[1]=modelviewprojectionmatrix*gl_in[2].gl_Position;
    shadowvert[2]=modelviewprojectionmatrix*gl_in[4].gl_Position;

    position=gl_in[0].gl_Position;
    position.xyz+=lightvec;
    shadowvert[3]=modelviewprojectionmatrix*position;

    position=gl_in[2].gl_Position;
    position.xyz+=lightvec;
    shadowvert[4]=modelviewprojectionmatrix*position;

    position=gl_in[4].gl_Position;
    position.xyz+=lightvec;
    shadowvert[5]=modelviewprojectionmatrix*position;

    edgenormal[0]=cross(gl_in[2].gl_Position.xyz-gl_in[0].gl_Position.xyz,gl_in[1].gl_Position.xyz-gl_in[0].gl_Position.xyz);
    edgenormal[1]=cross(gl_in[0].gl_Position.xyz-gl_in[1].gl_Position.xyz,gl_in[2].gl_Position.xyz-gl_in[1].gl_Position.xyz);    
    edgenormal[2]=cross(gl_in[1].gl_Position.xyz-gl_in[2].gl_Position.xyz,gl_in[0].gl_Position.xyz-gl_in[2].gl_Position.xyz);

    edgefaceslight=false;    
    if (dot(edgenormal[0],lightdirection)>=0.0 || dot(edgenormal[1],lightdirection)>=0.0 || dot(edgenormal[2],lightdirection)>=0.0)
      edgefaceslight=true;

    if (edgefaceslight==true)  
      {
      gl_Position=shadowvert[1];
      EmitVertex();  
      gl_Position=shadowvert[0];
      EmitVertex();  
      gl_Position=shadowvert[4];
      EmitVertex();  
      gl_Position=shadowvert[3];
      EmitVertex();  
      EndPrimitive();
      }

    edgenormal[0]=cross(gl_in[4].gl_Position.xyz-gl_in[2].gl_Position.xyz,gl_in[3].gl_Position.xyz-gl_in[2].gl_Position.xyz);
    edgenormal[1]=cross(gl_in[2].gl_Position.xyz-gl_in[3].gl_Position.xyz,gl_in[4].gl_Position.xyz-gl_in[3].gl_Position.xyz);
    edgenormal[2]=cross(gl_in[3].gl_Position.xyz-gl_in[4].gl_Position.xyz,gl_in[2].gl_Position.xyz-gl_in[4].gl_Position.xyz);
    
    edgefaceslight=false;    
    if (dot(edgenormal[0],lightdirection)>=0.0 || dot(edgenormal[1],lightdirection)>=0.0 || dot(edgenormal[2],lightdirection)>=0.0)
      edgefaceslight=true;

    if (edgefaceslight==true)  
      {
      gl_Position=shadowvert[2];
      EmitVertex();  
      gl_Position=shadowvert[1];
      EmitVertex();  
      gl_Position=shadowvert[5];
      EmitVertex();  
      gl_Position=shadowvert[4];
      EmitVertex();  
      EndPrimitive();  
      }

    edgenormal[0]=cross(gl_in[0].gl_Position.xyz-gl_in[4].gl_Position.xyz,gl_in[5].gl_Position.xyz-gl_in[4].gl_Position.xyz);
    edgenormal[1]=cross(gl_in[4].gl_Position.xyz-gl_in[5].gl_Position.xyz,gl_in[0].gl_Position.xyz-gl_in[5].gl_Position.xyz);
    edgenormal[2]=cross(gl_in[5].gl_Position.xyz-gl_in[0].gl_Position.xyz,gl_in[4].gl_Position.xyz-gl_in[0].gl_Position.xyz);

    edgefaceslight=false;    
    if (dot(edgenormal[0],lightdirection)>=0.0 || dot(edgenormal[1],lightdirection)>=0.0 || dot(edgenormal[2],lightdirection)>=0.0)
      edgefaceslight=true;

    if (edgefaceslight==true)  
      {
      gl_Position=shadowvert[0];
      EmitVertex();  
      gl_Position=shadowvert[2];
      EmitVertex();  
      gl_Position=shadowvert[3];
      EmitVertex();  
      gl_Position=shadowvert[5];
      EmitVertex();  
      EndPrimitive();  
      }
    
    gl_Position=shadowvert[0];
    EmitVertex();  
    gl_Position=shadowvert[1];
    EmitVertex();  
    gl_Position=shadowvert[2];
    EmitVertex();
    EndPrimitive();  

    gl_Position=shadowvert[3];
    EmitVertex();  
    gl_Position=shadowvert[5];
    EmitVertex();  
    gl_Position=shadowvert[4];
    EmitVertex();
    EndPrimitive();
    }      
  }
  