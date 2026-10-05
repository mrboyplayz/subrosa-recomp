/* Address: 0x1400917c0 | Name: sub_1400917C0 | Size: 182 bytes */
__int64 __fastcall sub_1400917C0(__int64 a1, int a2)
{
  int Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C(&Buffer, 4, 1, a1);
    sub_14020CE0C(&dword_140404A6C[160857229], 4, 3, a1);
    sub_14020CE0C(&dword_140404A6C[160857232], 4, 3, a1);
    return 1;
  }
  else
  {
    fread(&Buffer, 4, 1, a1);
    if ( Buffer == 1 )
    {
      fread(&dword_140404A6C[160857229], 4, 3, a1);
      fread(&dword_140404A6C[160857232], 4, 3, a1);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

