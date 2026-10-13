#include "shared_client.h"

//----- (00000001400EE400) ----------------------------------------------------
__int64            sub_1400EE400(int a1, __int64 a2, float a3)
{
  __int64 v3;
  __int64 result;
  int v5;
  __int64 v6;
  signed int v7;
  void *v8;
  float v9;
  __int64 v10;
  sr_wave_spec sr_spec;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EE400[32];
#define v13 (*(unsigned int (*))(void *)(sr_frame_1400EE400 + 0)) /* [rsp+80h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1400EE400 + 24)) /* [rsp+98h] */

  v3 = a1;
  result = crt_chdir("sound");
  v5 = result;
  if ( (unsigned int)v3 <= 0xFFF )
  {
    v6 = 8 * v3;
    v7 = 0;
    dword_140404A6C[v6 + 18165777] = 0;
    void *sr_stream = sr_wave_file((const char *)(uintptr_t)a2,"rb");
    result = (uintptr_t)sr_wave_load(sr_stream,1,&sr_spec,(unsigned char **)&v14,&v13);
    if ( result )
    {
      if ( sr_spec.channels == 1 )
      {
        result = (unsigned int)sr_spec.freq;
        if ( sr_spec.freq > 0 )
        {
          v8 = *(void **)&dword_140404A6C[v6 + 18165779];
          dword_140404A6C[v6 + 18165777] = 1;
          *(float *)&dword_140404A6C[v6 + 18165783] = a3;
          dword_140404A6C[v6 + 18165778] = (int)(float)((float)(v13 >> 1) * (float)(48000.0 / (float)sr_spec.freq));
          free(v8);
          v9 = 0.0;
          *(_QWORD *)&dword_140404A6C[v6 + 18165779] = sr_path_malloc((int)(4 * dword_140404A6C[v6 + 18165778]));
          if ( (int)dword_140404A6C[v6 + 18165778] > 0 )
          {
            v10 = 0;
            do
            {
              ++v7;
              *(float *)(v10 + *(_QWORD *)&dword_140404A6C[v6 + 18165779]) = (float)*(__int16 *)(v14 + 2LL * (int)v9)
                                                                           * 0.000030517578;
              v10 += 4;
              v9 = fminf(v9 + (float)(1.0 / (float)(48000.0 / (float)sr_spec.freq)), (float)(int)((v13 >> 1) - 1));
            }
            while ( v7 < (int)dword_140404A6C[v6 + 18165778] );
          }
          sr_wave_free((unsigned char *)(uintptr_t)v14);
        }
      }
    }
  }
  if ( !v5 )
    return crt_chdir("..");
  return result;
}
#undef v13
#undef v14
