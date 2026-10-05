/* Address: 0x1400e4030 | Name: sub_1400E4030 | Size: 172 bytes */
void __fastcall sub_1400E4030(__int64 (__fastcall *a1)(const char *))
{
  if ( unk_140404090 )
  {
    unk_140404098 = (double (__fastcall *)(_QWORD))a1("glActiveTexture");
    unk_1404040A0 = a1("glSampleCoverage");
    unk_1404040A8 = a1("glCompressedTexImage3D");
    unk_1404040B0 = a1("glCompressedTexImage2D");
    unk_1404040B8 = a1("glCompressedTexImage1D");
    unk_1404040C0 = a1("glCompressedTexSubImage3D");
    unk_1404040C8 = a1("glCompressedTexSubImage2D");
    unk_1404040D0 = a1("glCompressedTexSubImage1D");
    unk_1404040D8 = a1("glGetCompressedTexImage");
  }
}

