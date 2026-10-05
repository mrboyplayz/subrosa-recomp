/* Address: 0x1400505b0 | Name: sub_1400505B0 | Size: 675 bytes */
__int64 __fastcall sub_1400505B0(int a1, float a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rdx
  _DWORD *v5; // rax
  unsigned int v6; // edx
  float v7; // xmm2_4

  v2 = 188896LL * a1;
  v3 = 0;
  v4 = 0;
  v5 = (_DWORD *)((char *)&unk_160F299BC + v2);
  while ( *v5 )
  {
    ++v3;
    ++v4;
    v5 += 10;
    if ( v4 >= 8 )
    {
      v6 = -1;
      v7 = 65536.0;
      if ( (float)(*(float *)((char *)&unk_160F29960 + v2 + 84)
                 / (float)(*(float *)((char *)&unk_160F29960 + v2 + 88) + 0.0099999998)) < 65536.0 )
      {
        v6 = 0;
        v7 = *(float *)((char *)&unk_160F29960 + v2 + 124)
           / (float)(*(float *)((char *)&unk_160F29960 + v2 + 128) + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 124)
                      / (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 128) + 0.0099999998)) )
      {
        v6 = 1;
        v7 = *(float *)((char *)&unk_160F29960 + v2 + 164)
           / (float)(*(float *)((char *)&unk_160F29960 + v2 + 168) + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 124)
                      / (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 128) + 0.0099999998)) )
      {
        v6 = 2;
        v7 = *(float *)((char *)&unk_160F29960 + v2 + 204)
           / (float)(*(float *)((char *)&unk_160F29960 + v2 + 208) + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 124)
                      / (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 128) + 0.0099999998)) )
      {
        v6 = 3;
        v7 = *(float *)((char *)&unk_160F29960 + v2 + 244)
           / (float)(*(float *)((char *)&unk_160F29960 + v2 + 248) + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 124)
                      / (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 128) + 0.0099999998)) )
      {
        v6 = 4;
        v7 = *(float *)((char *)&unk_160F29960 + v2 + 284)
           / (float)(*(float *)((char *)&unk_160F29960 + v2 + 288) + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 124)
                      / (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 128) + 0.0099999998)) )
      {
        v6 = 5;
        v7 = *(float *)((char *)&unk_160F29960 + v2 + 324)
           / (float)(*(float *)((char *)&unk_160F29960 + v2 + 328) + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 124)
                      / (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 128) + 0.0099999998)) )
      {
        v6 = 6;
        v7 = *(float *)((char *)&unk_160F29960 + v2 + 364)
           / (float)(*(float *)((char *)&unk_160F29960 + v2 + 368) + 0.0099999998);
      }
      if ( v7 <= (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 124)
                       / (float)(*(float *)((char *)&unk_160F29960 + 40 * (int)v6 + v2 + 128) + 0.0099999998)) )
      {
        if ( v6 != -1 )
          goto LABEL_21;
      }
      else
      {
        v6 = 7;
        v7 = *(float *)((char *)&unk_160F29960 + v2 + 404)
           / (float)(*(float *)((char *)&unk_160F29960 + v2 + 408) + 0.0099999998);
LABEL_21:
        if ( v7 > a2 )
          return v6;
      }
      return 0xFFFFFFFFLL;
    }
  }
  return v3;
}

