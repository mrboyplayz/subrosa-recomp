/* Address: 0x14007b7e0 | Name: sub_14007B7E0 | Size: 395 bytes */
__int64 __fastcall sub_14007B7E0(float a1, float a2, float a3, float a4)
{
  float v4; // xmm8_4

  v4 = a2 + a4;
  if ( dword_140404A6C[137297765] )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))&dword_140404A6C[18215071])(
             (unsigned int)(int)(float)((float)((float)((float)(int)dword_140404A6C[137297761] * a1)
                                              * (float)(1.0 / *(float *)&dword_140404A6C[438291414]))
                                      + (float)(int)dword_140404A6C[137297763]),
             (unsigned int)(int)(float)((float)((float)((float)(*(float *)&dword_140404A6C[438291415] - v4)
                                                      * (float)(int)dword_140404A6C[137297762])
                                              * (float)(1.0 / *(float *)&dword_140404A6C[438291415]))
                                      + (float)(int)dword_140404A6C[137297764]),
             (unsigned int)(int)(float)((float)((float)(int)dword_140404A6C[137297761] * a3)
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
             (unsigned int)(int)(float)((float)((float)(int)dword_140404A6C[137297762] * a4)
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291415])));
  else
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))&dword_140404A6C[18215071])(
             (unsigned int)(int)(float)((float)((float)(int)dword_140404A6C[137297755] * a1)
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
             (unsigned int)(int)(float)((float)((float)(*(float *)&dword_140404A6C[438291415] - v4)
                                              * (float)(int)dword_140404A6C[137297756])
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291415])),
             (unsigned int)(int)(float)((float)((float)(int)dword_140404A6C[137297755] * a3)
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
             (unsigned int)(int)(float)((float)((float)(int)dword_140404A6C[137297756] * a4)
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291415])));
}

