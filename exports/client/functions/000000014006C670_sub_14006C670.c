/* Address: 0x14006c670 | Name: sub_14006C670 | Size: 267 bytes */
// CRC32-style UI label ID helper. Lazily builds 256-entry table with polynomial 0xEDB88320 and returns bitwise-not final CRC.
__int64 __fastcall sub_14006C670(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int8 *v2; // r9
  int v3; // r10d
  int *v4; // r11
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned __int8 v10; // r8
  __int64 v11; // rax

  v2 = a1;
  if ( !MEMORY[0x144980DC0][0] )
  {
    v3 = 0;
    v4 = MEMORY[0x144980DC0];
    do
    {
      ++v4;
      v5 = (unsigned int)v3 >> 1;
      v6 = -(v3++ & 1) & 0xEDB88320;
      v7 = v5 ^ v6;
      LOBYTE(v5) = v7;
      v7 >>= 1;
      v8 = ((((v7 ^ -(v5 & 1) & 0xEDB88320) >> 1) ^ -(((unsigned __int8)v7 ^ -(v5 & 1) & 0x20) & 1) & 0xEDB88320) >> 1)
         ^ -(((unsigned __int8)((v7 ^ -(v5 & 1) & 0xEDB88320) >> 1)
            ^ -(((unsigned __int8)v7 ^ -(v5 & 1) & 0x20) & 1)
            & 0x20)
           & 1)
         & 0xEDB88320;
      v9 = (((v8 >> 1) ^ -(v8 & 1) & 0xEDB88320) >> 1)
         ^ -(((unsigned __int8)(v8 >> 1) ^ -(v8 & 1) & 0x20) & 1)
         & 0xEDB88320;
      *(v4 - 1) = (((v9 >> 1) ^ -(v9 & 1) & 0xEDB88320) >> 1)
                ^ -(((unsigned __int8)(v9 >> 1) ^ -(v9 & 1) & 0x20) & 1)
                & 0xEDB88320;
    }
    while ( v3 < 256 );
  }
  v10 = *a1;
  if ( *a1 )
  {
    do
    {
      ++v2;
      v11 = v10;
      v10 = *v2;
      a2 = (a2 >> 8) ^ MEMORY[0x144980DC0][v11 ^ (unsigned __int8)a2];
    }
    while ( *v2 );
  }
  return ~a2;
}

