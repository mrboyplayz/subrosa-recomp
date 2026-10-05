/* Address: 0x14025bb10 | Name: ?get_global_action_nolock@@YAPEAP6AXH@ZH@Z | Size: 60 bytes */
unsigned int *__fastcall get_global_action_nolock(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return &dword_140404A6C[19065815];
  v2 = v1 - 4;
  if ( v2 )
  {
    v3 = v2 - 9;
    if ( !v3 )
      return &dword_140404A6C[19065821];
    v4 = v3 - 6;
    if ( !v4 )
      return &dword_140404A6C[19065817];
    if ( v4 != 1 )
      return nullptr;
  }
  return &dword_140404A6C[19065819];
}

