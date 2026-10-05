/* Address: 0x1401e22f0 | Name: sub_1401E22F0 | Size: 240 bytes */
void *__fastcall sub_1401E22F0(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // [rsp+20h] [rbp-18h]
  void *v6; // [rsp+28h] [rbp-10h]

  if ( (a1 == 48000 || a1 == 24000 || a1 == 16000 || a1 == 12000 || a1 == 8000) && (a2 == 1 || a2 == 2) )
  {
    v4 = sub_1401E2280(a2);
    v6 = (void *)sub_1401A6AA0(v4);
    if ( v6 )
    {
      v5 = sub_1401E23F0(v6, a1, a2);
      if ( a3 )
        *a3 = v5;
      if ( v5 )
      {
        sub_1401A6AC0(v6);
        return nullptr;
      }
      return v6;
    }
    else
    {
      if ( a3 )
        *a3 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a3 )
      *a3 = -1;
    return nullptr;
  }
}

