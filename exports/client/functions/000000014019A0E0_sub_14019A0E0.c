/* Address: 0x14019a0e0 | Name: sub_14019A0E0 | Size: 186 bytes */
__int64 __fastcall sub_14019A0E0(__int64 a1)
{
  int v1; // eax
  int v3; // [rsp+30h] [rbp-18h]

  v3 = 8 * *(_DWORD *)(a1 + 24);
  v1 = sub_14019A020(*(_DWORD *)(a1 + 32));
  return v3
       - ((unsigned int)(*(_DWORD *)(a1 + 32) >> (v1 - 15) > dword_14027E098[(*(_DWORD *)(a1 + 32) >> (v1 - 15) >> 12)
                                                                           - 8])
        + (*(_DWORD *)(a1 + 32) >> (v1 - 15) >> 12)
        - 8
        + 8 * (v1 + 1));
}

