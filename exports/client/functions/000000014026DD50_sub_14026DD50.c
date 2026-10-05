/* Address: 0x14026dd50 | Name: sub_14026DD50 | Size: 167 bytes */
void __fastcall sub_14026DD50()
{
  qword_140301EF8 = (__int64)&off_140279B18;
  if ( (byte_140301F00 & 1) != 0 )
    SteamAPI_UnregisterCallback(&qword_140301EF8);
  qword_140301ED8 = (__int64)&off_140279AC8;
  if ( (byte_140301EE0 & 1) != 0 )
    SteamAPI_UnregisterCallback(&qword_140301ED8);
  off_140301EB8 = &off_140279A78;
  if ( (byte_140301EC0 & 1) != 0 )
    SteamAPI_UnregisterCallback(&off_140301EB8);
  off_140301E90 = &off_140279A58;
  if ( qword_140301EA0 )
  {
    SteamAPI_UnregisterCallResult(&off_140301E90);
    qword_140301EA0 = 0;
  }
}

