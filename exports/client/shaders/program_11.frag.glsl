#version 330 core

uniform sampler2D tex_hdrcolor;
uniform sampler2D tex_hdrbloom;

in vec2 texcoord;

out vec4 fragcolor;

vec3 converttosrgb3f(vec3 linearcolor)
  {
  bvec3 cutoff=lessThan(linearcolor,vec3(0.0031308));
  vec3 higher=vec3(1.055)*pow(linearcolor,vec3(1.0/2.4))-vec3(0.055);
  vec3 lower=linearcolor*vec3(12.92);

  return(mix(higher,lower,cutoff));
  }

vec3 converttolinear3f(vec3 srgbcolor)
  {
  bvec3 cutoff=lessThan(srgbcolor,vec3(0.04045));
  vec3 higher=pow((srgbcolor+vec3(0.055))/vec3(1.055),vec3(2.4));
  vec3 lower=srgbcolor/vec3(12.92);

  return(mix(higher,lower,cutoff));
  }
  
void main()
  {
  vec4 color;
  float exposure;
  
  exposure=1.0;
  
  color.rgb=texture(tex_hdrcolor,texcoord).rgb;
  //color.rgb=vec3(1.0)-exp(-color.rgb*exposure);  
  //color.rgb*=exposure;
  //color.rgb=vec3(color.rgb)/(color.rgb+vec3(1.0));
  //color.rgb=converttosrgb3f(color.rgb);
  //color.rgb+=texture(tex_hdrbloom,texcoord

  color.a=1.0;
  fragcolor=color;
  }
