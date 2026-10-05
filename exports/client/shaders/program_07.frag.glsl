#version 330 core

uniform sampler2D tex_color;

uniform vec2 ooresolution;
uniform vec2 sampledir;
uniform vec4 blurfilter;
uniform vec4 blurfilter2;

out vec4 fragcolor;

void main()
  {
  vec4 color;
  vec2 fragtexcoord;
  vec2 texcoord;

  fragtexcoord=gl_FragCoord.xy*ooresolution;

  texcoord=fragtexcoord;
  color.rgb=texture(tex_color,texcoord).rgb*blurfilter.r;

  texcoord=fragtexcoord-sampledir;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter.g;
  texcoord=fragtexcoord+sampledir;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter.g;

  texcoord=fragtexcoord-sampledir*2.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter.b;
  texcoord=fragtexcoord+sampledir*2.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter.b;

  texcoord=fragtexcoord-sampledir*3.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter.a;
  texcoord=fragtexcoord+sampledir*3.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter.a;

  texcoord=fragtexcoord-sampledir*4.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter2.r;
  texcoord=fragtexcoord+sampledir*4.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter2.r;

  texcoord=fragtexcoord-sampledir*5.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter2.g;
  texcoord=fragtexcoord+sampledir*5.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter2.g;

  texcoord=fragtexcoord-sampledir*6.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter2.b;
  texcoord=fragtexcoord+sampledir*6.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter2.b;

  texcoord=fragtexcoord-sampledir*7.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter2.a;
  texcoord=fragtexcoord+sampledir*7.0;
  color.rgb+=texture(tex_color,texcoord).rgb*blurfilter2.a;

  color.a=1.0;

  fragcolor=color;
  }
