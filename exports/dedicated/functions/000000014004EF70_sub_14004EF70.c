/* Address: 0x14004ef70 | Name: sub_14004EF70 | Size: 188 bytes */
__int64 __fastcall sub_14004EF70(FILE *Stream, int a2)
{
  int Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    fwrite(&Buffer, 4u, 1u, Stream);
    fwrite(&dword_174ABEEC0, 4u, 3u, Stream);
    fwrite(&dword_174ABEECC, 4u, 3u, Stream);
    return 1;
  }
  else
  {
    fread(&Buffer, 4u, 1u, Stream);
    if ( Buffer == 1 )
    {
      fread(&dword_174ABEEC0, 4u, 3u, Stream);
      fread(&dword_174ABEECC, 4u, 3u, Stream);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

