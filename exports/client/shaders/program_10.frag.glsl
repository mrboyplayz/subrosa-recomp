#version 330 core

uniform samplerCube tex_color;

uniform float texlod;

in vec3 viewvec;
in vec3 upvec;

out vec4 fragcolor;

#define PI 3.1415926

void main()
  {
  int countx,county;
  int numofsamples;
  vec4 color;
  vec3 frontnormal;
  vec3 rightnormal;
  vec3 upnormal;
  vec3 sampledir;
  vec3 accum;
  float sinx,siny;
  float opacity;
  float total;
  float maxangle;
  float lod;
  
  maxangle=PI*0.03125;
  //if (texlod>=7.0)
  //  maxangle=0.0;
  lod=texlod;
  //if (lod>7.0)
  //  lod=7.0;
  
  frontnormal=normalize(viewvec);
  frontnormal.yz=-frontnormal.yz;
  rightnormal=normalize(cross(frontnormal,upvec));
  upnormal=normalize(cross(rightnormal,frontnormal));
  
  accum=vec3(0.0);
  
  total=0.0;

  numofsamples=2;
  for (county=-numofsamples;county<=numofsamples;county++)
    {
    siny=sin(float(county)*maxangle/(float(numofsamples)));
    for (countx=-numofsamples;countx<=numofsamples;countx++)
      {
      sinx=sin(float(countx)*maxangle/(float(numofsamples)));

      sampledir=frontnormal;
      sampledir+=upnormal*siny;
      sampledir+=rightnormal*sinx;
      
      opacity=cos(float(county)*PI*0.375/(float(numofsamples)))*cos(float(countx)*PI*0.375/(float(numofsamples)));
      
      accum+=textureLod(tex_color,sampledir,lod).rgb*opacity;
      total+=opacity;
      }
    }

  color.rgb=accum/total;
  //color.rgb=texture(tex_color,frontnormal).rgb;
  
  color.a=1.0;

  fragcolor=color;
  }