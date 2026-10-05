/* Address: 0x14014b2a0 | Name: render_cache_camera_uniforms_candidate | Size: 4330 bytes */
// Candidate shader/camera uniform cache: resolves viewposition/viewdirection/matrices/light/sampler uniforms and sets inverse resolution.
__int64 render_cache_camera_uniforms_candidate()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v4; // [rsp+0h] [rbp-58h] BYREF
  float v5; // [rsp+20h] [rbp-38h] BYREF
  float v6; // [rsp+24h] [rbp-34h]
  __int64 v7; // [rsp+30h] [rbp-28h]

  MEMORY[0x1515B0BC0][0] = 0;
  if ( (unsigned int)sub_14004C4E0(0, MEMORY[0x1402F61E0], MEMORY[0x1402F6460], 0) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515ACFC0]);
    MEMORY[0x1515AD05C] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "clipplane");
    MEMORY[0x1515ACFD4] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "ooresolution");
    MEMORY[0x1515ACFD8] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "viewposition");
    MEMORY[0x1515ACFE0] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "flags");
    MEMORY[0x1515ACFE8] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "lightdirection");
    MEMORY[0x1515ACFEC] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "isreflection");
    MEMORY[0x1515ACFF0] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "planeposition");
    MEMORY[0x1515ACFF4] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "planenormal");
    MEMORY[0x1515ACFF8] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "modelviewprojectionmatrix");
    MEMORY[0x1515ACFFC] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "lightambient");
    MEMORY[0x1515AD000] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "lightdiffuse");
    MEMORY[0x1515AD004] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "tex_color");
    MEMORY[0x1515AD008] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "tex_shadowmap");
    MEMORY[0x1515AD00C] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "tex_material");
    MEMORY[0x1515AD010] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "tex_cubemap");
    MEMORY[0x1515AD014] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "tex_atlas_color");
    MEMORY[0x1515AD018] = unk_140404288((unsigned int)MEMORY[0x1515ACFC0], "tex_atlas_material");
    v5 = 1.0 / (float)(int)MEMORY[0x182A7D55C];
    v6 = 1.0 / (float)SHIDWORD(MEMORY[0x182A7D55C]);
    unk_140404330((unsigned int)MEMORY[0x1515ACFD4], 1, &v5);
    unk_140404308((unsigned int)MEMORY[0x1515AD004], 0);
    unk_140404308((unsigned int)MEMORY[0x1515AD008], 1);
    unk_140404308((unsigned int)MEMORY[0x1515AD00C], 2);
    unk_140404308((unsigned int)MEMORY[0x1515AD010], 3);
    unk_140404308((unsigned int)MEMORY[0x1515AD014], 4);
    unk_140404308((unsigned int)MEMORY[0x1515AD018], 5);
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(1, MEMORY[0x1402F7BB0], MEMORY[0x1402F7E60], 0) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515AD0B0]);
    MEMORY[0x1515AD14C] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "clipplane");
    MEMORY[0x1515AD0C4] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "ooresolution");
    MEMORY[0x1515AD0C8] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "viewposition");
    MEMORY[0x1515AD0D8] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "lightdirection");
    MEMORY[0x1515AD0DC] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "isreflection");
    MEMORY[0x1515AD0E0] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "planeposition");
    MEMORY[0x1515AD0E4] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "planenormal");
    MEMORY[0x1515AD0E8] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "modelviewprojectionmatrix");
    MEMORY[0x1515AD0EC] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "lightambient");
    MEMORY[0x1515AD0F0] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "lightdiffuse");
    MEMORY[0x1515AD0F4] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "tex_color");
    MEMORY[0x1515AD0F8] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "tex_shadowmap");
    MEMORY[0x1515AD0FC] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "tex_material");
    MEMORY[0x1515AD100] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "tex_cubemap");
    MEMORY[0x1515AD104] = unk_140404288((unsigned int)MEMORY[0x1515AD0B0], "flags");
    v5 = 1.0 / (float)(int)MEMORY[0x182A7D55C];
    v6 = 1.0 / (float)SHIDWORD(MEMORY[0x182A7D55C]);
    unk_140404330((unsigned int)MEMORY[0x1515AD0C4], 1, &v5);
    unk_140404308((unsigned int)MEMORY[0x1515AD0F4], 0);
    unk_140404308((unsigned int)MEMORY[0x1515AD0F8], 1);
    unk_140404308((unsigned int)MEMORY[0x1515AD0FC], 2);
    unk_140404308((unsigned int)MEMORY[0x1515AD100], 3);
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(2, MEMORY[0x1402F97BF], MEMORY[0x1402F99AF], 0) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515AD1A0]);
    MEMORY[0x1515AD1B4] = unk_140404288((unsigned int)MEMORY[0x1515AD1A0], "ooresolution");
    MEMORY[0x1515AD1B8] = unk_140404288((unsigned int)MEMORY[0x1515AD1A0], "viewposition");
    MEMORY[0x1515AD1C8] = unk_140404288((unsigned int)MEMORY[0x1515AD1A0], "lightdirection");
    MEMORY[0x1515AD1D8] = unk_140404288((unsigned int)MEMORY[0x1515AD1A0], "modelviewprojectionmatrix");
    MEMORY[0x1515AD1DC] = unk_140404288((unsigned int)MEMORY[0x1515AD1A0], "lightambient");
    MEMORY[0x1515AD1E0] = unk_140404288((unsigned int)MEMORY[0x1515AD1A0], "lightdiffuse");
    MEMORY[0x1515AD1E4] = unk_140404288((unsigned int)MEMORY[0x1515AD1A0], "tex_color");
    MEMORY[0x1515AD1E8] = unk_140404288((unsigned int)MEMORY[0x1515AD1A0], "tex_cubemap");
    v5 = 1.0 / (float)(int)MEMORY[0x182A7D55C];
    v6 = 1.0 / (float)SHIDWORD(MEMORY[0x182A7D55C]);
    unk_140404330((unsigned int)MEMORY[0x1515AD1B4], 1, &v5);
    unk_140404308((unsigned int)MEMORY[0x1515AD1E4], 0);
    unk_140404308((unsigned int)MEMORY[0x1515AD1E8], 1);
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(3, MEMORY[0x1402F9FD0], MEMORY[0x1402FA480], 0) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515AD290]);
    MEMORY[0x1515AD2A4] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "ooresolution");
    MEMORY[0x1515AD2A8] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "viewposition");
    MEMORY[0x1515AD2AC] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "objposition");
    MEMORY[0x1515AD2B0] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "objorientation");
    MEMORY[0x1515AD2B4] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "modelviewprojectionmatrix");
    MEMORY[0x1515AD2B8] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "lightdirection");
    MEMORY[0x1515AD2BC] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "lightambient");
    MEMORY[0x1515AD2C0] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "lightdiffuse");
    MEMORY[0x1515AD2C4] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "viewdirection");
    MEMORY[0x1515AD2D4] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "tex_color");
    MEMORY[0x1515AD2D8] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "tex_shadowmap");
    MEMORY[0x1515AD2DC] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "tex_cubemap");
    MEMORY[0x1515AD2E0] = unk_140404288((unsigned int)MEMORY[0x1515AD290], "flags");
    v5 = 1.0 / (float)(int)MEMORY[0x182A7D55C];
    v6 = 1.0 / (float)SHIDWORD(MEMORY[0x182A7D55C]);
    unk_140404330((unsigned int)MEMORY[0x1515AD2A4], 1, &v5);
    unk_140404308((unsigned int)MEMORY[0x1515AD2D4], 0);
    unk_140404308((unsigned int)MEMORY[0x1515AD2D8], 1);
    unk_140404308((unsigned int)MEMORY[0x1515AD2DC], 2);
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(4, MEMORY[0x1402FB8A0], MEMORY[0x1402FC010], 0) )
  {
    unk_140404538((unsigned int)MEMORY[0x1515AD380], 3, off_140301DB0, 35980);
    unk_1404042D0((unsigned int)MEMORY[0x1515AD380]);
    unk_1404042E0((unsigned int)MEMORY[0x1515AD380]);
    MEMORY[0x1515AD3B4] = unk_140404288((unsigned int)MEMORY[0x1515AD380], "boneorgposition");
    MEMORY[0x1515AD3B8] = unk_140404288((unsigned int)MEMORY[0x1515AD380], "boneposition");
    MEMORY[0x1515AD3BC] = unk_140404288((unsigned int)MEMORY[0x1515AD380], "boneorientation");
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(5, MEMORY[0x1402FC070], MEMORY[0x1402FC310], 0) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515AD470]);
    MEMORY[0x1515AD484] = unk_140404288((unsigned int)MEMORY[0x1515AD470], "modelviewprojectionmatrix");
    MEMORY[0x1515AD488] = unk_140404288((unsigned int)MEMORY[0x1515AD470], "modelviewmatrix");
    MEMORY[0x1515AD510] = unk_140404288((unsigned int)MEMORY[0x1515AD470], "land_usemask");
    MEMORY[0x1515AD518] = unk_140404288((unsigned int)MEMORY[0x1515AD470], "tex_mask");
    unk_140404308((unsigned int)MEMORY[0x1515AD518], 0);
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(6, MEMORY[0x1402FC620], MEMORY[0x1402FC780], 0) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515AD560]);
    MEMORY[0x1515AD574] = unk_140404288((unsigned int)MEMORY[0x1515AD560], "atmoconstant");
    MEMORY[0x1515AD578] = unk_140404288((unsigned int)MEMORY[0x1515AD560], "atmowavelength");
    MEMORY[0x1515AD57C] = unk_140404288((unsigned int)MEMORY[0x1515AD560], "worldposition");
    MEMORY[0x1515AD580] = unk_140404288((unsigned int)MEMORY[0x1515AD560], "ooresolution");
    MEMORY[0x1515AD584] = unk_140404288((unsigned int)MEMORY[0x1515AD560], "lightdirection");
    MEMORY[0x1515AD588] = unk_140404288((unsigned int)MEMORY[0x1515AD560], "modelviewprojectionmatrix");
    MEMORY[0x1515AD58C] = unk_140404288((unsigned int)MEMORY[0x1515AD560], "numofsamples");
    unk_140404340((unsigned int)MEMORY[0x1515AD574], 1, &unk_1402F61B8);
    unk_140404338((unsigned int)MEMORY[0x1515AD578], 1, &unk_1402F61C8);
    unk_140404308((unsigned int)MEMORY[0x1515AD58C], 4);
    v5 = 1.0 / (float)(int)MEMORY[0x182A7D55C];
    v6 = 1.0 / (float)SHIDWORD(MEMORY[0x182A7D55C]);
    unk_140404330((unsigned int)MEMORY[0x1515AD580], 1, &v5);
    MEMORY[0x1515AD594] = unk_140404288((unsigned int)MEMORY[0x1515AD560], "tex_depth");
    unk_140404308((unsigned int)MEMORY[0x1515AD594], 0);
    MEMORY[0x1515AD604] = unk_140404288((unsigned int)MEMORY[0x1515AD560], "flags");
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(7, MEMORY[0x1402FDEB0], MEMORY[0x1402FDF70], 0) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515AD650]);
    MEMORY[0x1515AD664] = unk_140404288((unsigned int)MEMORY[0x1515AD650], "ooresolution");
    MEMORY[0x1515AD668] = unk_140404288((unsigned int)MEMORY[0x1515AD650], "sampledir");
    MEMORY[0x1515AD66C] = unk_140404288((unsigned int)MEMORY[0x1515AD650], "blurfilter");
    MEMORY[0x1515AD670] = unk_140404288((unsigned int)MEMORY[0x1515AD650], "blurfilter2");
    MEMORY[0x1515AD674] = unk_140404288((unsigned int)MEMORY[0x1515AD650], "modelviewprojectionmatrix");
    MEMORY[0x1515AD684] = unk_140404288((unsigned int)MEMORY[0x1515AD650], "tex_color");
    v5 = 1.0 / (float)(int)MEMORY[0x182A7D55C];
    v6 = 1.0 / (float)SHIDWORD(MEMORY[0x182A7D55C]);
    unk_140404330((unsigned int)MEMORY[0x1515AD664], 1, &v5);
    unk_140404308((unsigned int)MEMORY[0x1515AD684], 0);
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(8, MEMORY[0x1402FE670], MEMORY[0x1402FE9A0], 0) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515AD740]);
    MEMORY[0x1515AD754] = unk_140404288((unsigned int)MEMORY[0x1515AD740], "lightdirection");
    MEMORY[0x1515AD758] = unk_140404288((unsigned int)MEMORY[0x1515AD740], "lightambient");
    MEMORY[0x1515AD75C] = unk_140404288((unsigned int)MEMORY[0x1515AD740], "lightdiffuse");
    MEMORY[0x1515AD760] = unk_140404288((unsigned int)MEMORY[0x1515AD740], "viewposition");
    MEMORY[0x1515AD764] = unk_140404288((unsigned int)MEMORY[0x1515AD740], "modelviewprojectionmatrix");
    MEMORY[0x1515AD7E0] = unk_140404288((unsigned int)MEMORY[0x1515AD740], "land_usemask");
    MEMORY[0x1515AD774] = unk_140404288((unsigned int)MEMORY[0x1515AD740], "tex_normal");
    MEMORY[0x1515AD778] = unk_140404288((unsigned int)MEMORY[0x1515AD740], "tex_detail");
    MEMORY[0x1515AD77C] = unk_140404288((unsigned int)MEMORY[0x1515AD740], "tex_color");
    MEMORY[0x1515AD7F4] = unk_140404288((unsigned int)MEMORY[0x1515AD740], "tex_mask");
    MEMORY[0x1515AD7F8] = unk_140404288((unsigned int)MEMORY[0x1515AD740], "tex_shadow");
    unk_140404308((unsigned int)MEMORY[0x1515AD774], 0);
    unk_140404308((unsigned int)MEMORY[0x1515AD778], 1);
    unk_140404308((unsigned int)MEMORY[0x1515AD77C], 2);
    unk_140404308((unsigned int)MEMORY[0x1515AD7F4], 3);
    unk_140404308((unsigned int)MEMORY[0x1515AD7F8], 4);
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(9, MEMORY[0x1402FF460], MEMORY[0x1402FF4E0], MEMORY[0x1402FF550]) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515AD830]);
    MEMORY[0x1515AD844] = unk_140404288((unsigned int)MEMORY[0x1515AD830], "modelmatrix");
    MEMORY[0x1515AD848] = unk_140404288((unsigned int)MEMORY[0x1515AD830], "modelviewprojectionmatrix");
    MEMORY[0x1515AD84C] = unk_140404288((unsigned int)MEMORY[0x1515AD830], "lightdirection");
    MEMORY[0x1515AD850] = unk_140404288((unsigned int)MEMORY[0x1515AD830], "shadowlength");
    MEMORY[0x1515AD854] = unk_140404288((unsigned int)MEMORY[0x1515AD830], "projectionmatrix");
    MEMORY[0x1515AD858] = unk_140404288((unsigned int)MEMORY[0x1515AD830], "viewmatrix");
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(10, MEMORY[0x1403006E0], MEMORY[0x140300830], 0) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515AD920]);
    MEMORY[0x1515AD944] = unk_140404288((unsigned int)MEMORY[0x1515AD920], "modelviewprojectionmatrix");
    MEMORY[0x1515AD954] = unk_140404288((unsigned int)MEMORY[0x1515AD920], "texlod");
    MEMORY[0x1515AD964] = unk_140404288((unsigned int)MEMORY[0x1515AD920], "tex_color");
    unk_140404308((unsigned int)MEMORY[0x1515AD964], 0);
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(11, MEMORY[0x140300DD0], MEMORY[0x140300EC0], 0) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515ADA10]);
    MEMORY[0x1515ADA44] = unk_140404288((unsigned int)MEMORY[0x1515ADA10], "tex_hdrcolor");
    MEMORY[0x1515ADA48] = unk_140404288((unsigned int)MEMORY[0x1515ADA10], "tex_hdrbloom");
    unk_140404308((unsigned int)MEMORY[0x1515ADA44], 0);
    unk_140404308((unsigned int)MEMORY[0x1515ADA48], 1);
    unk_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(12, MEMORY[0x1403012A0], MEMORY[0x140301390], 0) )
  {
    unk_1404042E0((unsigned int)MEMORY[0x1515ADB00]);
    MEMORY[0x1515ADB94] = unk_140404288((unsigned int)MEMORY[0x1515ADB00], "modelviewprojectionmatrix");
    MEMORY[0x1515ADBE8] = unk_140404288((unsigned int)MEMORY[0x1515ADB00], "texturematrix");
    MEMORY[0x1515ADBEC] = unk_140404288((unsigned int)MEMORY[0x1515ADB00], "waterangle");
    MEMORY[0x1515ADBA4] = unk_140404288((unsigned int)MEMORY[0x1515ADB00], "flags");
    MEMORY[0x1515ADBA8] = unk_140404288((unsigned int)MEMORY[0x1515ADB00], "tex_color");
    unk_140404308((unsigned int)MEMORY[0x1515ADBA8], 0);
    unk_1404042E0(0);
  }
  v0 = -1;
  do
    ++v0;
  while ( MEMORY[0x1515B0BC0][v0] );
  if ( v0 )
  {
    v1 = MEMORY[0x14020B8D8]("shaderoutput.txt", "wb");
    v2 = v1;
    if ( v1 )
    {
      sub_1400920F0(v1, MEMORY[0x1515B0BC0]);
      sub_14020B9E8(v2);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v7);
}

