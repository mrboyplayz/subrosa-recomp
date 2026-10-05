#version 330 core

uniform sampler2D tex_color;
uniform samplerCube tex_cubemap;

uniform vec3 lightambient;
uniform vec3 lightdiffuse;

in vec2 texcoord;
in vec3 lightvec;
in vec3 viewvec;
in vec3 normalvec;
  
out vec4 glfragcolor;

void main()
  {
  int count;
  vec3 lightnormal;
  vec3 viewnormal;
  vec3 reflectvec;
  vec3 position;
  vec4 color;
  vec3 texcolor;
  vec3 normal;
  float scale,scale2;
  float rho,k;
  float height;
  float shine;
  float dist;

  lightnormal=normalize(lightvec);
  viewnormal=normalize(viewvec);

  texcolor=texture(tex_color,texcoord).rgb;
  shine=texture(tex_color,texcoord).a;
  normal=normalize(normalvec);
  
  color.rgb=texcolor*vec3(0.25)*lightambient;
  
  //reflectvec=reflect(lightnormal,normal);
  //reflectvec=normalize(reflectvec);
  //scale=dot(reflectvec,viewnormal);
  //scale=ss
  
  reflectvec=reflect(-viewnormal,normal);
  reflectvec=normalize(reflectvec);

  scale=(length(viewvec)-32.0)*0.125*0.125*0.75;
  if (scale<0.0)
    scale=0.0;
  if (scale>1.0)
    scale=1.0;
    
    
  scale2=1.0-abs(dot(viewnormal,normal));
  scale2=pow(scale2,3.0);
  scale2=0.5+scale2*0.5;
  if (scale2>1.0)
    scale2=1.0;
  if (scale2+scale>1.0)
    scale=1.0-scale2;
  
  
  reflectvec.y=-reflectvec.y;
  reflectvec.z=-reflectvec.z;
  if (gl_FrontFacing)
	color.rgb=texture(tex_cubemap,reflectvec).rgb;  
  else
    color.rgb=vec3(0.0625*0.5);

  color.rgb=color.rgb*vec3(scale2)+lightambient*vec3(scale*0.5);
	
  scale2+=scale;
  
  if (!gl_FrontFacing)
    scale2*=0.25;

  color.a=scale2;

  glfragcolor=color;
  }