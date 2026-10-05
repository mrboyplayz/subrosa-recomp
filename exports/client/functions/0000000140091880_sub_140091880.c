/* Address: 0x140091880 | Name: sub_140091880 | Size: 786 bytes */
__int64 sub_140091880()
{
  int v0; // ebp
  const char *v1; // rdi
  __int64 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+24h] [rbp-34h] BYREF
  const char *v20; // [rsp+28h] [rbp-30h]
  _QWORD v21[5]; // [rsp+30h] [rbp-28h]

  v0 = 0;
  v21[0] = "OpenGL ES-CL ";
  v1 = "OpenGL ES-CM ";
  v20 = "OpenGL ES-CM ";
  v21[1] = "OpenGL ES ";
  v21[2] = 0;
  v2 = qword_140302FA8(7938);
  if ( !v2 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v21[3]);
  v3 = 0;
  while ( 1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( v1[v4] );
    if ( !(unsigned int)strncmp(v2, v1, v4) )
      break;
    v1 = (const char *)v21[v3++];
    if ( !v1 )
      goto LABEL_9;
  }
  v2 += v4;
LABEL_9:
  sub_14015B0D0(v2, "%d.%d", (unsigned int)&v18, (unsigned int)&v19);
  dword_140404A68 = v18;
  dword_140404A6C[0] = v19;
  dword_140404A6C[18215115] = v18;
  dword_140404A6C[18215116] = v19;
  if ( v18 == 1 )
  {
    if ( v19 >= 0 )
    {
LABEL_11:
      v5 = 1;
      goto LABEL_12;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_11;
  }
  v5 = 0;
LABEL_12:
  dword_140404A6C[18215057] = v5;
  if ( v18 == 1 )
  {
    if ( v19 >= 1 )
    {
LABEL_14:
      v6 = 1;
      goto LABEL_15;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_14;
  }
  v6 = 0;
LABEL_15:
  dword_140302FF0 = v6;
  if ( v18 == 1 )
  {
    if ( v19 >= 2 )
    {
LABEL_17:
      v7 = 1;
      goto LABEL_18;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_17;
  }
  v7 = 0;
LABEL_18:
  dword_140302FF4 = v7;
  if ( v18 == 1 )
  {
    if ( v19 >= 3 )
    {
LABEL_20:
      v8 = 1;
      goto LABEL_21;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_20;
  }
  v8 = 0;
LABEL_21:
  unk_140404090 = v8;
  if ( v18 == 1 )
  {
    if ( v19 >= 4 )
    {
LABEL_23:
      v9 = 1;
      goto LABEL_24;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_23;
  }
  v9 = 0;
LABEL_24:
  unk_140404094 = v9;
  if ( v18 == 1 )
  {
    if ( v19 >= 5 )
    {
LABEL_26:
      v10 = 1;
      goto LABEL_27;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_26;
  }
  v10 = 0;
LABEL_27:
  unk_140404128 = v10;
  if ( v18 == 2 )
  {
    if ( v19 >= 0 )
    {
LABEL_29:
      v11 = 1;
      goto LABEL_30;
    }
  }
  else if ( v18 > 2 )
  {
    goto LABEL_29;
  }
  v11 = 0;
LABEL_30:
  unk_14040412C = v11;
  if ( v18 == 2 )
  {
    if ( v19 >= 1 )
    {
LABEL_32:
      v12 = 1;
      goto LABEL_33;
    }
  }
  else if ( v18 > 2 )
  {
    goto LABEL_32;
  }
  v12 = 0;
LABEL_33:
  unk_1404044B0 = v12;
  if ( v18 == 3 )
  {
    if ( v19 >= 0 )
    {
LABEL_35:
      v13 = 1;
      goto LABEL_36;
    }
  }
  else if ( v18 > 3 )
  {
    goto LABEL_35;
  }
  v13 = 0;
LABEL_36:
  unk_1404044B4 = v13;
  if ( v18 == 3 )
  {
    if ( v19 >= 1 )
    {
LABEL_38:
      v14 = 1;
      goto LABEL_39;
    }
  }
  else if ( v18 > 3 )
  {
    goto LABEL_38;
  }
  v14 = 0;
LABEL_39:
  unk_140404788 = v14;
  if ( v18 == 3 )
  {
    if ( v19 >= 2 )
    {
LABEL_41:
      v15 = 1;
      goto LABEL_42;
    }
  }
  else if ( v18 > 3 )
  {
    goto LABEL_41;
  }
  v15 = 0;
LABEL_42:
  unk_14040478C = v15;
  if ( v18 == 3 )
  {
    if ( v19 < 3 )
      goto LABEL_69;
    goto LABEL_68;
  }
  if ( v18 > 3 )
LABEL_68:
    v0 = 1;
LABEL_69:
  unk_140404888 = v0;
  if ( v18 > 3 || v18 >= 3 && v19 >= 3 )
  {
    dword_140404A6C[18215115] = 3;
    dword_140404A6C[18215116] = 3;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v21[3]);
}

