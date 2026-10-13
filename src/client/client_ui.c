#include "shared_client.h"

// 14006D660: inconsistent variable size for 'xmm0_8.8'
// 14006D660: inconsistent variable size for 'xmm1_8.8'

unsigned sr_text_float_bits(float value){unsigned bits;memcpy(&bits,&value,4);return bits;}

float sr_text_bits_float(unsigned bits){float value;memcpy(&value,&bits,4);return value;}

void sr_text_draw_recovered(char *text,float x,float y,float size,unsigned flags,
 float red,float green,float blue,float alpha,const uint64 *arguments)
{
 /* sr_CSDrawText (0x14006D930) with its variadic arguments as 8-byte slots:
    src/engine/text.c. */
 extern void text_draw(const char *format, float x, float y, float size, int flags,
                       float red, float green, float blue, float alpha, const unsigned long long *arguments);
 static const unsigned long long no_arguments[8];
 text_draw(text, x, y, size, (int)flags, red, green, blue, alpha,
           arguments ? (const unsigned long long *)arguments : no_arguments);
}

//----- (000000014006F1F0) ----------------------------------------------------
// Immediate-mode button helper. Widget type code 0; returns true on active click/press interaction.
__int64            sr_DrawMenuButton(unsigned __int8 *a1)
{
  unsigned int v2;
  signed int v3;
  signed int v4;
  __int64 v5;

  v2 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v3 = sub_140070380(
         v2,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v4 = v3;
  if ( v3 != -1 )
  {
    if ( dword_140404A6C[70087083] )
    {
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                           + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
    }
    else
    {
      *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                           + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
      *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
    }
    v5 = 122LL * v3;
    dword_140404A6C[70087065] = v3;
    dword_140404A6C[v5 + 70087115] = 0;
    sub_14006F120((__int64)&dword_140404A6C[v5 + 70087151], (char *)a1);
    if ( !dword_140404A6C[v5 + 70087119] )
    {
      if ( !dword_140404A6C[70317817]
        && dword_140404A6C[70317856]
        && v4 == dword_140404A6C[70087109]
        && v4 == dword_140404A6C[70087106] )
      {
        return 1;
      }
      if ( dword_140404A6C[v5 + 70087121] )
      {
        dword_140404A6C[v5 + 70087121] = 0;
        return 1;
      }
      if ( v4 == dword_140404A6C[70087111] && dword_140404A6C[70087112] )
        return 1;
    }
  }
  return 0;
}

//----- (000000014006F5A0) ----------------------------------------------------
__int64            sr_DrawMenuButtonSelectable(unsigned __int8 *a1, int *a2, int a3)
{
  unsigned int v6;
  signed int v7;
  signed int v8;
  __int64 v9;
  bool v10;

  v6 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v7 = sub_140070380(
         v6,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v8 = v7;
  if ( v7 != -1 )
  {
    if ( dword_140404A6C[70087083] )
    {
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                           + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
    }
    else
    {
      *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                           + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
      *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
    }
    v9 = 122LL * v7;
    dword_140404A6C[70087065] = v7;
    dword_140404A6C[v9 + 70087115] = 2;
    sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
    v10 = dword_140404A6C[v9 + 70087119] == 0;
    *(_QWORD *)&dword_140404A6C[v9 + 70087215] = (uint64)(uintptr_t)(a2);
    dword_140404A6C[v9 + 70087217] = a3;
    if ( v10 )
    {
      if ( !dword_140404A6C[70317817]
        && dword_140404A6C[70317856]
        && v8 == dword_140404A6C[70087109]
        && v8 == dword_140404A6C[70087106] )
      {
        goto LABEL_14;
      }
      if ( ((int)dword_140404A6C[70315979] < 2 || dword_140404A6C[v9 + 70087122] == dword_140404A6C[70315981])
        && dword_140404A6C[v9 + 70087121] )
      {
        dword_140404A6C[v9 + 70087121] = 0;
LABEL_14:
        *a2 = a3;
        return 1;
      }
    }
  }
  return 0;
}

//----- (000000014006F8D0) ----------------------------------------------------
// Immediate-mode combo-box helper. Widget type code 10; stores current index pointer, item table, and item count; mouse wheel changes selection.
__int64            sr_DrawMenuList(
        unsigned __int8 *a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        int a6,
        unsigned int *a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v13;
  signed int v14;
  signed int v15;
  __int64 v16;
  unsigned int v17;
  bool v18;
  int *v19;
  bool v20;
  signed int v21;
  _DWORD *v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;

  v13 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v14 = sub_140070380(
          v13,
          *(float *)&dword_140404A6C[70087067],
          *(float *)&dword_140404A6C[70087068],
          a4,
          a5,
          dword_140404A6C[70087071]);
  v15 = v14;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + (float)(*(float *)&a5 + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087086] = *(float *)&a5 + 4.0;
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067] + (float)(a4 + 4.0);
  }
  dword_140404A6C[70087065] = v14;
  v16 = 122LL * v14;
  dword_140404A6C[v16 + 70087115] = 10;
  *(_QWORD *)&dword_140404A6C[v16 + 70087223] = (uint64)(uintptr_t)(a7);
  v17 = *a7;
  *(float *)&dword_140404A6C[v16 + 70087225] = a4;
  dword_140404A6C[v16 + 70087226] = a5;
  dword_140404A6C[v16 + 70087222] = v17;
  *(_QWORD *)&dword_140404A6C[v16 + 70087217] = a8;
  dword_140404A6C[v16 + 70087219] = a9;
  dword_140404A6C[v16 + 70087220] = a10;
  sub_14006F120((__int64)&dword_140404A6C[v16 + 70087151], (char *)a1);
  if ( v15 == dword_140404A6C[70087109] )
  {
    if ( (int)dword_140404A6C[v16 + 70087220] <= 0 )
    {
      **(_DWORD **)&dword_140404A6C[v16 + 70087223] = 0;
    }
    else
    {
      v18 = (signed int)dword_140404A6C[137297772] <= 0;
      if ( (dword_140404A6C[137297772] & 0x80000000) != 0 )
      {
        do
        {
          --**(_DWORD **)&dword_140404A6C[v16 + 70087223];
          v19 = *(int **)&dword_140404A6C[v16 + 70087223];
          if ( *v19 < 0 )
            *v19 = dword_140404A6C[v16 + 70087220] - 1;
          v20 = (signed int)(dword_140404A6C[137297772] + 1) < 0;
          v21 = ++dword_140404A6C[137297772];
        }
        while ( v20 );
        v18 = v21 <= 0;
      }
      if ( !v18 )
      {
        do
        {
          ++**(_DWORD **)&dword_140404A6C[v16 + 70087223];
          v22 = *(_DWORD **)&dword_140404A6C[v16 + 70087223];
          if ( *v22 >= (signed int)dword_140404A6C[v16 + 70087220] )
            *v22 = 0;
          --dword_140404A6C[137297772];
        }
        while ( (int)dword_140404A6C[137297772] > 0 );
      }
    }
  }
  if ( !dword_140404A6C[70317817]
    && dword_140404A6C[70317856]
    && v15 == dword_140404A6C[70087109]
    && v15 == dword_140404A6C[70087106] )
  {
    dword_140404A6C[v16 + 70087215] = 1;
  }
  if ( !dword_140404A6C[v16 + 70087215] )
    return dword_140404A6C[v16 + 70087215];
  v23 = dword_140404A6C[70087068];
  v24 = dword_140404A6C[70087067];
  if ( (int)dword_140404A6C[70317929] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317929] + 70317930] = dword_140404A6C[70087067];
    dword_140404A6C[2 * dword_140404A6C[70317929]++ + 70317931] = dword_140404A6C[70087068];
  }
  v25 = dword_140404A6C[70087086];
  dword_140404A6C[70087068] = v23;
  dword_140404A6C[70087067] = v24;
  v26 = sub_140071C20(
          "cs_combobox",
          *(float *)&v24,
          (float)(*(float *)&v23 - *(float *)&a5) - *(float *)&dword_140404A6C[70087072],
          (float)(*(float *)&dword_140404A6C[70087072] + a2) + 16.0,
          COERCE_UNSIGNED_INT(*(float *)&dword_140404A6C[70087072] + a3),
          1095761920,
          1792);
  *(_QWORD *)&dword_140404A6C[70087067] = 0;
  v27 = v26;
  v28 = *(_QWORD *)&dword_140404A6C[v16 + 70087149];
  if ( v28 )
  {
    v29 = dword_140404A6C[v16 + 70087147];
    dword_140404A6C[70087079] = dword_140404A6C[v16 + 70087146];
    dword_140404A6C[70087080] = v29;
    *(_QWORD *)&dword_140404A6C[70087081] = v28;
  }
  if ( (unsigned int)sub_1400707C0(a1, a2 + 16.0, a3, a4, a5, 0, a7, a8, a9, a10) )
    dword_140404A6C[v16 + 70087215] = 0;
  sub_140077230();
  v30 = dword_140404A6C[70317929];
  if ( (int)dword_140404A6C[70317929] > 0 )
  {
    --dword_140404A6C[70317929];
    dword_140404A6C[70087067] = dword_140404A6C[2 * (v30 - 1) + 70317930];
    dword_140404A6C[70087068] = dword_140404A6C[2 * (v30 - 1) + 70317931];
  }
  dword_140404A6C[70087086] = v25;
  if ( v27 != -1 && dword_140404A6C[70087103] == v27 )
    return dword_140404A6C[v16 + 70087215];
  dword_140404A6C[v16 + 70087215] = 0;
  return 0;
}

//----- (0000000140070060) ----------------------------------------------------
// Immediate-mode text entry helper. Widget type code 5; stores text buffer pointer and length bounds.
__int64            sr_DrawMenuTextBox(unsigned __int8 *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8;
  signed int v9;
  int v10;
  __int64 v11;
  __int64 result;
  double v13;

  v8 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v9 = sub_140070380(
         v8,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v10 = v9;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v11 = 122LL * v9;
  dword_140404A6C[70087065] = v9;
  dword_140404A6C[v11 + 70087115] = 5;
  *(_QWORD *)&dword_140404A6C[v11 + 70087217] = a2;
  dword_140404A6C[v11 + 70087219] = a3;
  dword_140404A6C[v11 + 70087220] = a4;
  dword_140404A6C[70318068] = 24;
  result = sub_14006F120((__int64)&dword_140404A6C[v11 + 70087151], (char *)a1);
  if ( v10 == dword_140404A6C[70087106] )
  {
    *(_QWORD *)&v13 = dword_140404A6C[468760126];
    *(float *)&v13 = *(float *)&dword_140404A6C[468760126] - *(float *)&dword_140404A6C[v11 + 70087135];
    return sub_140075A40(v10, *(float *)&dword_140404A6C[468760125] - *(float *)&dword_140404A6C[v11 + 70087134], v13);
  }
  return result;
}

// 1400713C6: conditional instruction was optimized away because rcx.8<100000000u

//----- (0000000140071440) ----------------------------------------------------
// Immediate-mode integer slider helper. Widget type code 11; stores int pointer, min, max, and step.
__int64            sr_DrawMenuSlider(unsigned __int8 *a1, int *a2, int a3, signed int a4, int a5)
{
  unsigned int v9;
  signed int v10;
  unsigned int v11;
  __int64 v12;
  int v13;

  v9 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v10 = sub_140070380(
          v9,
          *(float *)&dword_140404A6C[70087067],
          *(float *)&dword_140404A6C[70087068],
          *(float *)&dword_140404A6C[70087069],
          dword_140404A6C[70087070],
          dword_140404A6C[70087071]);
  v11 = v10;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v12 = 122LL * v10;
  dword_140404A6C[70087065] = v10;
  dword_140404A6C[v12 + 70087115] = 11;
  sub_14006F120((__int64)&dword_140404A6C[v12 + 70087151], (char *)a1);
  dword_140404A6C[v12 + 70087219] = a5;
  *(_QWORD *)&dword_140404A6C[v12 + 70087215] = (uint64)(uintptr_t)(a2);
  dword_140404A6C[v12 + 70087217] = a3;
  dword_140404A6C[v12 + 70087218] = a4;
  dword_140404A6C[v12 + 70087220] = 1098907648;
  if ( v11 == dword_140404A6C[70087106] )
  {
    v13 = (int)(float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[468760125]
                                                     - *(float *)&dword_140404A6C[v12 + 70087134])
                                             - 8.0)
                                     / (float)(*(float *)&dword_140404A6C[v12 + 70087127] - 16.0))
                             * fmaxf((float)(a4 - a3), 1.0))
                     + 0.5);
    if ( LOBYTE(dword_140404A6C[70317069]) && a5 )
      v13 = (a5 >> 1) + v13 - ((a5 >> 1) + v13) % a5;
    if ( v13 + a3 >= a3 )
      a3 += v13;
    if ( a3 > a4 )
      a3 = a4;
    *a2 = a3;
  }
  return v11;
}

//----- (0000000140071910) ----------------------------------------------------
// Immediate-mode checkbox helper. Widget type code 1; stores int pointer and toggles value on activation.
__int64            sr_DrawMenuToggle(unsigned __int8 *a1, _DWORD *a2)
{
  unsigned int v4;
  signed int v5;
  signed int v6;
  __int64 v7;

  v4 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v5 = sub_140070380(
         v4,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v6 = v5;
  if ( v5 == -1 )
    return 0;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v7 = 122LL * v5;
  dword_140404A6C[70087065] = v5;
  dword_140404A6C[v7 + 70087115] = 1;
  sub_14006F120((__int64)&dword_140404A6C[v7 + 70087151], (char *)a1);
  *(_QWORD *)&dword_140404A6C[v7 + 70087215] = (uint64)(uintptr_t)(a2);
  dword_140404A6C[v7 + 70087217] = 1;
  if ( dword_140404A6C[70317817]
    || !dword_140404A6C[70317856]
    || v6 != dword_140404A6C[70087109]
    || v6 != dword_140404A6C[70087106] )
  {
    return 0;
  }
  *a2 ^= 1u;
  return 1;
}

//----- (0000000140072450) ----------------------------------------------------
void               sr_DrawMenu(char a1)
{
  __int64 v1;
  unsigned int *v3;
  unsigned int *v4;
  __int64 v5;
  unsigned int *v6;
  __int64 v7;
  unsigned int *v8;
  int v9;
  double v10;
  double v11;
  signed int v12;
  signed int v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int v16;
  float v17;
  __m128i v18;
  unsigned int v19;
  unsigned int v20;
  float v21;
  int v22;
  int i;
  __int64 j;
  __int64 v25;
  __int64 v26;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140072450[1120];
#define v28 (*(_DWORD (*)[276])(void *)(sr_frame_140072450 + 0)) /* [rsp+0h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_140072450 + 1104)) /* [rsp+450h] */

  v1 = 0;
  v3 = &dword_140404A6C[70290893];
  v4 = &dword_140404A6C[70290893];
  do
  {
    if ( *(v4 - 2) == 2 )
    {
      v5 = 0;
      v6 = &dword_140404A6C[70290895];
      v7 = 256;
      do
      {
        if ( (int)*(v6 - 4) >= 2 && v5 != v1 && *(v6 - 2) == *v4 && (int)*v6 > (int)v4[2] )
          --*v6;
        ++v5;
        v6 += 98;
        --v7;
      }
      while ( v7 );
    }
    ++v1;
    v4 += 98;
  }
  while ( (__int64)v4 < (__int64)&dword_140404A6C[70315981] );
  dword_140404A6C[70317864] = 0;
  qword_140404050(3553, dword_140404A6C[3592 * renderer_current_font + 72777086]);
  v8 = &dword_140404A6C[70087118];
  v9 = 0;
  dword_140404A6C[70318062] = dword_140404A6C[438291414];
  dword_140404A6C[70318063] = dword_140404A6C[438291415];
  *(_QWORD *)&dword_140404A6C[70318060] = 0;
  do
  {
    if ( *(v8 - 5) == 3 && *v8 && v8[4] == -1 )
    {
      *(_QWORD *)&v10 = v8[17];
      *(_QWORD *)&v11 = v8[16];
      renderer_current_font = v8[5];
      sub_140073430(v9, v11, v10);
    }
    ++v9;
    v8 += 122;
  }
  while ( v9 < 1024 );
  v12 = dword_140404A6C[70212041];
  v13 = 0;
  if ( (int)dword_140404A6C[70212041] > 0 )
  {
    v14 = &dword_140404A6C[70212042];
    do
    {
      if ( v14[1] == -1 )
      {
        v15 = *v14;
        v16 = v14[6];
        v17 = *((float *)v14 + 8);
        v18 = _mm_cvtsi32_si128((int)(v14[3]));
        v28[16] = v14[7];
        v19 = v14[5];
        v28[14] = v16;
        v20 = v14[4];
        v28[12] = v19;
        v28[10] = v20;
        v21 = *((float *)v14 + 2);
        renderer_current_font = v15;
        v28[8] = 64;
        sr_text_draw_recovered((char *)&dword_140404A6C[77 * v13 + 70212055], v21, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18))), v17, 64, sr_text_bits_float(v28[10]), sr_text_bits_float(v28[12]), sr_text_bits_float(v28[14]), sr_text_bits_float(v28[16]), NULL);
        v12 = dword_140404A6C[70212041];
      }
      ++v13;
      v14 += 77;
    }
    while ( v13 < v12 );
  }
  v22 = 0;
  for ( i = 0; i < 256; ++i )
  {
    if ( *(v3 - 2) == 3 && *v3 == -1 )
    {
      ++v22;
      v28[v3[2] + 20] = i;
    }
    v3 += 98;
  }
  for ( j = v22 - 1; j >= 0; --j )
  {
    v25 = (int)v28[j + 20];
    if ( dword_140404A6C[98 * v25 + 70290891] == 3 )
      sub_1400745F0(v25);
  }
  if ( (a1 & 1) == 0 )
  {
    qword_140404050(3553, dword_140404A6C[3592 * renderer_current_font + 72777087]);
    sub_14006CFF0(
      sr_export_float_lane_container((unsigned __int64)dword_140404A6C[468760125]),
      sr_export_float_lane_container((unsigned __int64)dword_140404A6C[468760126]),
      0x42000000 /* native cursor width 32.0f */,
      32.0,
      5,
      1065353216,
      1065353216,
      1065353216,
      1065353216);
  }
  dword_140404A6C[70212041] = 0;
  return; /* original void menu presentation */
}
#undef v28
#undef v29

//----- (0000000140078610) ----------------------------------------------------
__int64            ui_load_base_assets_candidate(unsigned int a1,      char *a2, int a3)
{
  __int64 v3;
  char v4;
  __int64 v6;
  __int64 v7;
  void *v8;
  int v9;
  int v10;
  int i;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  FILE *v16;
  signed int v17;
  float v18;
  signed int v19;
  signed int j;
  __int64 v21;
  int k;
  signed int v23;
  signed int m;
  __int64 v25;
  float v26;
  unsigned __int64 v27;
  float *v28;
  unsigned int *v29;
  float *v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  unsigned int v63;
  __int64 v64;
  _DWORD *v65;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140078610[1136];
#define v67 (*(__int64 (*))(void *)(sr_frame_140078610 + 0)) /* [rsp+0h] */
#define v68 (*(int (*))(void *)(sr_frame_140078610 + 80)) /* [rsp+50h] */
#define v69 (*(unsigned __int64 (*))(void *)(sr_frame_140078610 + 88)) /* [rsp+58h] */
#define v70 (*(_BYTE (*)[512])(void *)(sr_frame_140078610 + 96)) /* [rsp+60h] */
#define v71 (*(char (*)[512])(void *)(sr_frame_140078610 + 608)) /* [rsp+260h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_140078610 + 1120)) /* [rsp+460h] */

  unsigned int sr_loaded = 0;
  v3 = (int)a1;
  v4 = a3;
  v68 = a3;
  if ( a1 <= 0x3F )
  {
    crt_sprintf(v71, "font/%s.png", a2);
    if ( (unsigned int)sub_140079840(v71) )
    {
      v6 = v3;
      v7 = 3592 * v3;
      v8 = *(void **)&dword_140404A6C[3592 * v3 + 72777091];
      dword_140404A6C[v7 + 72777088] = dword_140404A6C[468765293];
      dword_140404A6C[v7 + 72777089] = dword_140404A6C[468765294];
      v69 = 14368 * v3;
      free(v8);
      v9 = 0;
      *(_QWORD *)&dword_140404A6C[v7 + 72777091] = sr_path_malloc((int)(4
                                                                      * dword_140404A6C[v7 + 72777088]
                                                                      * dword_140404A6C[v7 + 72777089]));
      if ( (int)dword_140404A6C[3592 * v3 + 72777089] > 0 )
      {
        do
        {
          v10 = dword_140404A6C[v7 + 72777088];
          for ( i = 0; i < v10; ++i )
          {
            if ( v9 >= (int)dword_140404A6C[v7 + 72777089] >> 4 || i >= v10 >> 4 )
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v7 + 72777091] + 4LL * (i + v9 * v10)) = dword_140404A6C[i + 468765295 + v9 * v10];
            else
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v7 + 72777091] + 4LL * (i + v9 * v10)) = -1;
            v10 = dword_140404A6C[v7 + 72777088];
          }
          ++v9;
        }
        while ( v9 < (int)dword_140404A6C[v7 + 72777089] );
      }
      unk_140404060(1, &dword_140404A6C[v7 + 72777086]);
      qword_140404050(3553, dword_140404A6C[v7 + 72777086]);
      (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
      (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
      (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9729);
      (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9729);
      v12 = v4 & 1;
      if ( (v4 & 1) != 0 )
      {
        (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9728);
        (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9728);
      }
      v13 = 0;
      (*(void (           **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
        3553,
        0,
        6408,
        dword_140404A6C[v7 + 72777088],
        dword_140404A6C[v7 + 72777089],
        0,
        6408,
        5121,
        *(_QWORD *)&dword_140404A6C[v7 + 72777091]);
      crt_sprintf(v71, "font/%s.csv", a2);
      dword_140404A6C[129454558] = 0;
      v14 = crt_fopen(v71, "rb");
      v15 = 2;
      v16 = (FILE *)v14;
      if ( v14 )
      {
        sub_14020C4A8(v14, 0, 2u);
        dword_140404A6C[129454558] = ftell_sr(v16);
        sub_14020C4A8((__int64)v16, 0, 0);
        v17 = dword_140404A6C[129454558];
        if ( (int)dword_140404A6C[129454558] > 1048574 )
          v17 = 1048574;
        dword_140404A6C[129454558] = v17;
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[129454559]), v17, 1, (FILE *)(uintptr_t)(v16));
        *((_BYTE *)&dword_140404A6C[129454559] + (int)dword_140404A6C[129454558]) = 0;
        crt_fclose((__int64)v16);
      }
      v18 = 64.0;
      dword_140404A6C[129454557] = 0;
      crt_sprintf(v70, "Cell Height,", (unsigned int)v9);
      v19 = dword_140404A6C[129454557];
      for ( j = dword_140404A6C[129454558]; v19 < j; dword_140404A6C[129454557] = ++v19 )
      {
        if ( (unsigned int)sub_14006C870(v70) )
          break;
      }
      v21 = -1;
      do
        ++v21;
      while ( v70[v21] );
      dword_140404A6C[129454557] = v21 + v19;
      if ( (int)v21 + v19 < j )
        v18 = (float)(int)sub_14006EDD0();
      for ( k = 0; k < 256; ++k )
      {
        crt_sprintf(v70, "Char %d Base Width,", k);
        v23 = dword_140404A6C[129454557];
        for ( m = dword_140404A6C[129454558]; v23 < m; dword_140404A6C[129454557] = ++v23 )
        {
          if ( (unsigned int)sub_14006C870(v70) )
            break;
        }
        v25 = -1;
        do
          ++v25;
        while ( v70[v25] );
        dword_140404A6C[129454557] = v25 + v23;
        if ( (int)v25 + v23 < m )
        {
          v26 = (float)(int)sub_14006EDD0();
          if ( !v12 )
            v26 = v26 - 0.5;
          *(float *)&dword_140404A6C[3592 * v6 + 72777093 + v13] = v26 / v18;
        }
        ++v13;
      }
      v27 = v69;
      v28 = (float *)&dword_140404A6C[v69 / 4 + 72777094];
      v29 = &dword_140404A6C[v69 / 4 + 72779654];
      v30 = (float *)&dword_140404A6C[v69 / 4 + 72777350];
      do
      {
        v31 = (float)(15.0 - (float)((v15 - 2) >> 4)) * 0.0625;
        v32 = (float)(((_BYTE)v15 - 2) & 0xF) * 0.0625;
        *(v30 - 1) = v32;
        *v30 = v31 + 0.0625;
        v33 = *(v28 - 1);
        v30[2] = v31 + 0.0625;
        v30[1] = (float)(v33 * 0.0625) + v32;
        v34 = *(v28 - 1);
        v30[4] = v31;
        v30[5] = v32;
        v30[6] = v31;
        v30[3] = (float)(v34 * 0.0625) + v32;
        *(v29 - 1) = *((_DWORD *)v28 - 1);
        *(_QWORD *)v29 = 1065353216;
        v29[2] = 0;
        v35 = (float)(((_BYTE)v15 - 1) & 0xF) * 0.0625;
        v30[7] = v35;
        v36 = (float)(15.0 - (float)((v15 - 1) >> 4)) * 0.0625;
        v30[8] = v36 + 0.0625;
        v37 = *v28;
        v30[10] = v36 + 0.0625;
        v30[9] = (float)(v37 * 0.0625) + v35;
        v38 = *v28;
        v30[12] = v36;
        v30[13] = v35;
        v30[14] = v36;
        v30[11] = (float)(v38 * 0.0625) + v35;
        v29[3] = *(_DWORD *)v28;
        *((_QWORD *)v29 + 2) = 1065353216;
        v29[6] = 0;
        v39 = (float)(v15 & 0xF) * 0.0625;
        v30[15] = v39;
        v40 = (float)(15.0 - (float)(v15 >> 4)) * 0.0625;
        v30[16] = v40 + 0.0625;
        v41 = v28[1];
        v30[18] = v40 + 0.0625;
        v30[17] = (float)(v41 * 0.0625) + v39;
        v42 = v28[1];
        v30[20] = v40;
        v30[21] = v39;
        v30[22] = v40;
        v30[19] = (float)(v42 * 0.0625) + v39;
        v29[7] = *((_DWORD *)v28 + 1);
        *((_QWORD *)v29 + 4) = 1065353216;
        v29[10] = 0;
        v43 = (float)(((_BYTE)v15 + 1) & 0xF) * 0.0625;
        v30[23] = v43;
        v44 = (float)(15.0 - (float)((v15 + 1) >> 4)) * 0.0625;
        v30[24] = v44 + 0.0625;
        v45 = v28[2];
        v30[26] = v44 + 0.0625;
        v30[25] = (float)(v45 * 0.0625) + v43;
        v46 = v28[2];
        v30[28] = v44;
        v30[29] = v43;
        v30[30] = v44;
        v30[27] = (float)(v46 * 0.0625) + v43;
        v29[11] = *((_DWORD *)v28 + 2);
        *((_QWORD *)v29 + 6) = 1065353216;
        v29[14] = 0;
        v47 = (float)(((_BYTE)v15 + 2) & 0xF) * 0.0625;
        v30[31] = v47;
        v48 = (float)(15.0 - (float)((v15 + 2) >> 4)) * 0.0625;
        v30[32] = v48 + 0.0625;
        v49 = v28[3];
        v30[34] = v48 + 0.0625;
        v30[33] = (float)(v49 * 0.0625) + v47;
        v50 = v28[3];
        v30[36] = v48;
        v30[37] = v47;
        v30[38] = v48;
        v30[35] = (float)(v50 * 0.0625) + v47;
        v29[15] = *((_DWORD *)v28 + 3);
        *((_QWORD *)v29 + 8) = 1065353216;
        v29[18] = 0;
        v51 = (float)(((_BYTE)v15 + 3) & 0xF) * 0.0625;
        v30[39] = v51;
        v52 = (float)(15.0 - (float)((v15 + 3) >> 4)) * 0.0625;
        v30[40] = v52 + 0.0625;
        v53 = v28[4];
        v30[42] = v52 + 0.0625;
        v30[41] = (float)(v53 * 0.0625) + v51;
        v54 = v28[4];
        v30[44] = v52;
        v30[45] = v51;
        v30[46] = v52;
        v30[43] = (float)(v54 * 0.0625) + v51;
        v29[19] = *((_DWORD *)v28 + 4);
        *((_QWORD *)v29 + 10) = 1065353216;
        v29[22] = 0;
        v55 = (float)(((_BYTE)v15 + 4) & 0xF) * 0.0625;
        v30[47] = v55;
        v56 = (float)(15.0 - (float)((v15 + 4) >> 4)) * 0.0625;
        v30[48] = v56 + 0.0625;
        v57 = v28[5];
        v30[50] = v56 + 0.0625;
        v30[49] = (float)(v57 * 0.0625) + v55;
        v58 = v28[5];
        v30[52] = v56;
        v30[53] = v55;
        v30[54] = v56;
        v30[51] = (float)(v58 * 0.0625) + v55;
        v29[23] = *((_DWORD *)v28 + 5);
        *((_QWORD *)v29 + 12) = 1065353216;
        v29[26] = 0;
        v59 = (float)(((_BYTE)v15 + 5) & 0xF) * 0.0625;
        v30[55] = v59;
        v60 = (float)(15.0 - (float)((v15 + 5) >> 4)) * 0.0625;
        v30[56] = v60 + 0.0625;
        v61 = (float)(v28[6] * 0.0625) + v59;
        v30[58] = v60 + 0.0625;
        v15 += 8;
        v30[57] = v61;
        v62 = v28[6];
        v30[60] = v60;
        v30[61] = v59;
        v30[62] = v60;
        v30[59] = (float)(v62 * 0.0625) + v59;
        v30 += 64;
        v63 = *((_DWORD *)v28 + 6);
        v28 += 8;
        v29[27] = v63;
        *((_QWORD *)v29 + 14) = 1065353216;
        v29[30] = 0;
        v29 += 32;
      }
      while ( v15 - 2 < 256 );
      if ( (v68 & 2) != 0 )
      {
        v64 = 13;
        v65 = (unsigned int *)((char *)&dword_140404A6C[72778125] + v27);
        do
        {
          *v65 = *(v65 - 256);
          v65[1] = *(v65 - 255);
          v65[2] = *(v65 - 254);
          v65[3] = *(v65 - 253);
          v65[4] = *(v65 - 252);
          v65[5] = *(v65 - 251);
          v65[6] = *(v65 - 250);
          v65[7] = *(v65 - 249);
          v65[8] = *(v65 - 248);
          v65[9] = *(v65 - 247);
          v65[10] = *(v65 - 246);
          v65[11] = *(v65 - 245);
          v65[12] = *(v65 - 244);
          v65[13] = *(v65 - 243);
          v65[14] = *(v65 - 242);
          v65[15] = *(v65 - 241);
          v65 += 16;
          --v64;
        }
        while ( v64 );
      }
      unk_140404060(1, (char *)&dword_140404A6C[72777087] + v27);
      if ( (unsigned int)sub_140079840("texture/mouse01.png") )
      {
        qword_140404050(3553, *(unsigned int *)((char *)&dword_140404A6C[72777087] + v27));
        (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
        (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
        (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9729);
        (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9729);
        (*(void (           **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, unsigned int *))&dword_140404A6C[18215083])(
          3553,
          0,
          6408,
          dword_140404A6C[468765293],
          dword_140404A6C[468765294],
          0,
          6408,
          5121,
          &dword_140404A6C[468765295]);
      }
      *(unsigned int *)((char *)&dword_140404A6C[72777085] + v27) = 1;
      sr_loaded = 1;
    }
  }
  return sr_loaded;
}
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72

//----- (0000000140079140) ----------------------------------------------------
__int64            ui_reload_mouse_texture_candidate(unsigned int a1,      char *a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  signed int v7;
  signed int v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  void *v13;
  __int64 v14;
  int v15;
  int v16;
  int i;
  char *v18;
  float *v19;
  unsigned int *v20;
  unsigned int *v21;
  int v22;
  unsigned int v23;
  float v24;
  unsigned int v25;
  int v26;
  float v27;
  float v28;
  __m128i v29;
  unsigned int v30;
  int v31;
  float v32;
  float v33;
  __m128i v34;
  int v35;
  __m128i v36;
  int v37;
  float v38;
  float v39;
  __m128i v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  __m128i v45;
  int v46;
  float v47;
  float v48;
  float v49;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140079140[2528];
#define v51 (*(__int64 (*))(void *)(sr_frame_140079140 + 0)) /* [rsp+0h] */
#define v52 (*(_BYTE (*)[2])(void *)(sr_frame_140079140 + 80)) /* [rsp+50h] */
#define v53 (*(char (*))(void *)(sr_frame_140079140 + 82)) /* [rsp+52h] */
#define v54 (*(char (*)[512])(void *)(sr_frame_140079140 + 2000)) /* [rsp+7D0h] */
#define v55 (*(__int64 (*))(void *)(sr_frame_140079140 + 2512)) /* [rsp+9D0h] */

  v2 = (int)a1;
  if ( a1 <= 0x3F )
  {
    crt_sprintf(v54, "font/%s.ttf", a2);
    v3 = crt_fopen(v54, "rb");
    v4 = v3;
    if ( v3 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[284270757]), 1, 0x100000, (FILE *)(uintptr_t)(v3));
      crt_fclose(v4);
      v5 = 512;
      v6 = 32;
      sub_140177E50(
        (__int64)&dword_140404A6C[284270757],
        0,
        13.0,
        &dword_140404A6C[284205205],
        512,
        512,
        32,
        96,
        (__int64)v52);
      v7 = 512;
      dword_140404A6C[468765293] = 512;
      v8 = 0;
      dword_140404A6C[468765294] = 512;
      do
      {
        v9 = 0;
        if ( v5 > 0 )
        {
          do
          {
            v10 = *((unsigned __int8 *)&dword_140404A6C[284205205] + v9 + v5 * (v7 - v8 - 1));
            v11 = v9 + v8 * v5;
            ++v9;
            dword_140404A6C[v11 + 468765295] = (v10 << 24) + 0xFFFFFF;
            v5 = dword_140404A6C[468765293];
            v7 = dword_140404A6C[468765294];
          }
          while ( v9 < (int)dword_140404A6C[468765293] );
        }
        ++v8;
      }
      while ( v8 < v7 );
      v12 = 3592 * v2;
      dword_140404A6C[v12 + 72777089] = v7;
      v13 = *(void **)&dword_140404A6C[v12 + 72777091];
      dword_140404A6C[v12 + 72777088] = v5;
      free(v13);
      v14 = sr_path_malloc((int)(4 * dword_140404A6C[v12 + 72777088] * dword_140404A6C[v12 + 72777089]));
      v15 = 0;
      for ( *(_QWORD *)&dword_140404A6C[v12 + 72777091] = v14; v15 < (int)dword_140404A6C[v12 + 72777089]; ++v15 )
      {
        v16 = dword_140404A6C[v12 + 72777088];
        for ( i = 0; i < v16; ++i )
        {
          if ( v15 >= (int)dword_140404A6C[v12 + 72777089] >> 4 || i >= v16 >> 4 )
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v12 + 72777091] + 4LL * (i + v15 * v16)) = dword_140404A6C[i + 468765295 + v15 * v16];
          else
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v12 + 72777091] + 4LL * (i + v15 * v16)) = -1;
          v16 = dword_140404A6C[v12 + 72777088];
        }
      }
      unk_140404060(1, &dword_140404A6C[v12 + 72777086]);
      qword_140404050(3553, dword_140404A6C[v12 + 72777086]);
      (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
      (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
      (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9729);
      (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9729);
      (*(void (           **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
        3553,
        0,
        6408,
        dword_140404A6C[v12 + 72777088],
        dword_140404A6C[v12 + 72777089],
        0,
        6408,
        5121,
        *(_QWORD *)&dword_140404A6C[v12 + 72777091]);
      v18 = &v53;
      v19 = (float *)&dword_140404A6C[v12 + 72779786];
      v20 = &dword_140404A6C[v12 + 72777127];
      v21 = &dword_140404A6C[v12 + 72777614];
      do
      {
        v22 = *(unsigned __int16 *)v18;
        v23 = *((unsigned __int16 *)v18 + 2);
        v24 = 1.0 - (float)((float)v22 * 0.001953125);
        v25 = *((unsigned __int16 *)v18 + 1) - *((unsigned __int16 *)v18 - 1);
        v26 = *((unsigned __int16 *)v18 + 9);
        v27 = (float)*((unsigned __int16 *)v18 - 1) * 0.001953125;
        v28 = (float)*((unsigned __int16 *)v18 + 1) * 0.001953125;
        *((float *)v21 - 8) = v24;
        *((float *)v21 - 6) = v24;
        *((float *)v21 - 7) = v28;
        *((float *)v21 - 5) = v28;
        *((float *)v21 - 9) = v27;
        *((float *)v21 - 3) = v27;
        v29 = _mm_cvtsi32_si128(v23);
        v30 = v23 - v22;
        v31 = *((unsigned __int16 *)v18 + 10);
        v32 = 1.0 - (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v29), f32)[0] * 0.001953125);
        *(float *)SR_VEC_LANES(128, v29, i32) = *(float *)(v18 + 14) * 0.07692308;
        v33 = (float)v26 * 0.001953125;
        *((float *)v21 - 4) = v32;
        *((float *)v21 - 2) = v32;
        *(v20 - 2) = SR_VEC_LANES(128, v29, i32)[0];
        v34 = _mm_cvtsi32_si128(v25);
        v35 = *((unsigned __int16 *)v18 + 11);
        *(v19 - 3) = *(float *)(v18 + 6) * 0.07692308;
        *(v19 - 5) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v34), f32)[0] * 0.07692308;
        v36 = _mm_cvtsi32_si128(v30);
        v37 = *((unsigned __int16 *)v18 + 12);
        *(v19 - 4) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v36), f32)[0] * 0.07692308;
        *(v19 - 2) = (float)(*(float *)(v18 + 10) * 0.07692308) + 0.75;
        *((float *)v21 - 1) = v33;
        *((float *)v21 + 5) = v33;
        v38 = 1.0 - (float)((float)v31 * 0.001953125);
        *(float *)v21 = v38;
        *(float *)SR_VEC_LANES(128, v36, i32) = (float)v35 * 0.001953125;
        *((float *)v21 + 2) = v38;
        v21[1] = SR_VEC_LANES(128, v36, i32)[0];
        v21[3] = SR_VEC_LANES(128, v36, i32)[0];
        v39 = 1.0 - (float)((float)v37 * 0.001953125);
        *(float *)SR_VEC_LANES(128, v36, i32) = *(float *)(v18 + 34) * 0.07692308;
        *((float *)v21 + 4) = v39;
        *((float *)v21 + 6) = v39;
        *(v20 - 1) = SR_VEC_LANES(128, v36, i32)[0];
        v40 = _mm_cvtsi32_si128(v35 - v26);
        v41 = v37 - v31;
        v42 = *((unsigned __int16 *)v18 + 20);
        v43 = *((unsigned __int16 *)v18 + 21);
        v44 = *((unsigned __int16 *)v18 + 19);
        v19[1] = *(float *)(v18 + 26) * 0.07692308;
        *(v19 - 1) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v40), f32)[0] * 0.07692308;
        v45 = _mm_cvtsi32_si128(v41);
        v46 = *((unsigned __int16 *)v18 + 22);
        v47 = (float)v44 * 0.001953125;
        *v19 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v45), f32)[0] * 0.07692308;
        v19[2] = (float)(*(float *)(v18 + 30) * 0.07692308) + 0.75;
        *((float *)v21 + 7) = v47;
        *((float *)v21 + 13) = v47;
        v48 = 1.0 - (float)((float)v42 * 0.001953125);
        *((float *)v21 + 8) = v48;
        *(float *)SR_VEC_LANES(128, v45, i32) = (float)v43 * 0.001953125;
        *((float *)v21 + 10) = v48;
        v21[9] = SR_VEC_LANES(128, v45, i32)[0];
        v21[11] = SR_VEC_LANES(128, v45, i32)[0];
        *(float *)SR_VEC_LANES(128, v45, i32) = *(float *)(v18 + 54) * 0.07692308;
        *((float *)v21 + 12) = 1.0 - (float)((float)v46 * 0.001953125);
        *((float *)v21 + 14) = 1.0 - (float)((float)v46 * 0.001953125);
        v21 += 24;
        v49 = *(float *)(v18 + 46);
        *v20 = SR_VEC_LANES(128, v45, i32)[0];
        v20 += 3;
        v19[5] = v49 * 0.07692308;
        v19[3] = (float)(v43 - v44) * 0.07692308;
        v19[4] = (float)(v46 - v42) * 0.07692308;
        SR_VEC_LANES(128, v45, i32)[0] = *(_DWORD *)(v18 + 50);
        v18 += 60;
        v19[6] = (float)(*(float *)SR_VEC_LANES(128, v45, i32) * 0.07692308) + 0.75;
        v19 += 12;
        --v6;
      }
      while ( v6 );
      unk_140404060(1, &dword_140404A6C[v12 + 72777087]);
      if ( (unsigned int)sub_140079840("texture/mouse01.png") )
      {
        qword_140404050(3553, dword_140404A6C[v12 + 72777087]);
        (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
        (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
        (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9729);
        (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9729);
        (*(void (           **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, unsigned int *))&dword_140404A6C[18215083])(
          3553,
          0,
          6408,
          dword_140404A6C[468765293],
          dword_140404A6C[468765294],
          0,
          6408,
          5121,
          &dword_140404A6C[468765295]);
      }
      dword_140404A6C[v12 + 72777085] = 1;
    }
  }
  return 0; /* the function has no caller */
}
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55

//----- (00000001400FE1B0) ----------------------------------------------------
void sub_1400FE1B0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  char v3;
  int v4;
  unsigned int v5;
  struct hostent *v6;
  struct hostent *v7;
  _QWORD *v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  bool v21;
  unsigned int v22;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FE1B0[576];
#define v24 (*(_DWORD (*)[12])(void *)(sr_frame_1400FE1B0 + 0)) /* [rsp+0h] */
#define name (*(char (*)[512])(void *)(sr_frame_1400FE1B0 + 48)) /* [rsp+30h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1400FE1B0 + 560)) /* [rsp+230h] */

  dword_140404A6C[70087070] = 1107296256;
  dword_140404A6C[70087068] = 1135083520;
  dword_140404A6C[70087067] = 1135607808;
  dword_140404A6C[70087069] = 1134559232;
  dword_140404A6C[70087074] = 7;
  if ( (unsigned int)sr_DrawMenuButton("Practice") || SR_DEBUG_AUTOSTART("practice") )
  {
    SR_DEBUG_STAGE("Practice selected: start local game setup");
    sr_menu_relative_mode(1);
    dword_140404A6C[284024635] = sr_menu_relative_mouse((int *)&v24[8], (int *)&v24[9]);
    dword_140404A6C[284024633] = dword_140404A6C[284024635] & 1;
    dword_140404A6C[284024598] = 1134559232;
    v2 = 0;
    dword_140404A6C[284024634] = (LOBYTE(dword_140404A6C[284024635]) >> 2) & 1;
    game_type = 0;
    dword_140404A6C[283831453] = 25200;
    *(float *)&dword_140404A6C[284024599] = (float)(int)v24[8];
    dword_140404A6C[284024597] = 1140850688;
    *(float *)&dword_140404A6C[284024600] = (float)(int)v24[9];
    do
    {
      v3 = *((_BYTE *)&dword_140404A6C[73991224] + v2);
      *((_BYTE *)&dword_140404A6C[456202458] + v2++) = v3;
    }
    while ( v3 );
    dword_140404A6C[456202722] = 1;
    game_connected = 1;
    *(_QWORD *)&dword_140404A6C[73991608] = 0;
    /* Native Practice leaves the map name alone: it is "test2", the World-mode city,
       set at startup by 0x14013DCD0. Set SUBROSA_PRACTICE_MAP to a data folder name
       (for example debugtest, the single-player test arena) to pick another map. */
    {
      const char *sr_practice_map = getenv("SUBROSA_PRACTICE_MAP");
      if (sr_practice_map && *sr_practice_map)
        snprintf((char *)&dword_140404A6C[283831313], 64, "%s", sr_practice_map);
    }
    sub_140095B00();
  }
  dword_140404A6C[70087074] = 22;
  v4 = sr_DrawMenuButton("Start Game") || SR_DEBUG_AUTOSTART_MODE();
  v5 = dword_140404A6C[283831310];
  dword_140404A6C[70087074] = 13;
  if ( v4 )
    v5 = 4;
  dword_140404A6C[283831310] = v5;
  if ( (unsigned int)sr_DrawMenuButton("Join Game") )
  {
    game_connected = 0;
    crt_memset((void *)(uintptr_t)(&game_unknown_1a4d2dce0), 0, 0x2270864u);
    game_unknown_183ebfcc8 = -1;
    dword_140404A6C[179662126] = sub_140198F9B();
    dword_140404A6C[179662117] = 0;
    dword_140404A6C[179473694] = 0;
    dword_140404A6C[179473693] = 0;
    if ( sub_140199037(name, 512) != -1 )
    {
      v6 = sub_140199031(name);
      v7 = v6;
      if ( v6 )
      {
        v8 = *((_QWORD **)v6 + 3);
        v9 = dword_140404A6C[179473694];
        if ( *v8 )
        {
          v10 = 0;
          do
          {
            if ( v10 >= 16 )
              break;
            v11 = ntohl_sr(*(unsigned int *)v8[v10]);
            v12 = (int)dword_140404A6C[179473694];
            ++v10;
            dword_140404A6C[2 * dword_140404A6C[179473694] + 179457309] = v11 | 0xFF;
            LOWORD(dword_140404A6C[2 * v12 + 179457310]) = dword_140404A6C[289301091];
            v9 = v12 + 1;
            dword_140404A6C[179473694] = v9;
            v8 = *((_QWORD **)v7 + 3);
          }
          while ( v8[v10] );
        }
        dword_140404A6C[179473693] = v9;
      }
    }
    dword_140404A6C[179662128] = 0;
    dword_140404A6C[179662129] = -1;
    dword_140404A6C[179662131] = 0;
    dword_140404A6C[179662127] = 0;
    dword_140404A6C[283831310] = 1;
  }
  dword_140404A6C[70087074] = 18;
  v13 = sr_DrawMenuButton("Options");
  v14 = dword_140404A6C[283831310];
  if ( v13 )
    v14 = 3;
  dword_140404A6C[283831310] = v14;
  v15 = sr_DrawMenuButton("Credits");
  v16 = dword_140404A6C[283831310];
  dword_140404A6C[70087074] = 41;
  if ( v15 )
    v16 = 6;
  dword_140404A6C[283831310] = v16;
  v17 = sr_DrawMenuButton("Exit");
  v18 = dword_140404A6C[283831311];
  if ( v17 )
    v18 = 2;
  dword_140404A6C[283831311] = v18;
  dword_140404A6C[70087067] = 1098907648;
  dword_140404A6C[70087068] = 1139277824;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1128267776;
  dword_140404A6C[70087070] = 1103101952;
  dword_140404A6C[70087074] = 6;
  v19 = sr_DrawMenuButton("Character");
  v20 = dword_140404A6C[283831310];
  v21 = v19 == 0;
  v22 = dword_140404A6C[70317962];
  if ( !v21 )
    v20 = 5;
  dword_140404A6C[283831310] = v20;
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    dword_140404A6C[70087069] = dword_140404A6C[2 * (v22 - 1) + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (v22 - 1) + 70317964];
  }
  return;
}
#undef v24
#undef name
#undef v26

//----- (00000001400FEB50) ----------------------------------------------------
// Candidate options menu builder: Back, Fullscreen, V-Sync, Frame Smoothing, Sprite Models, Invert Mouse, advanced inventory, audio selectors.
void ui_build_options_menu_candidate()
{
  unsigned int v0;
  int v1;
  unsigned int v2;
  unsigned int *v3;
  char *v4;
  char v5;
  int v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  unsigned int v11;
       char *v12;
  char *v13;
  bool v14;
  _QWORD *v15;
  char *v16;
       char *v17;
       char *v18;
       char *v19;
  char *v20;
  _WORD *v21;
  int v22;
  char *v23;
  char *v24;
  __int64 v26;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FEB50[10560];
#define v27 (*(__int64 (*))(void *)(sr_frame_1400FEB50 + 0)) /* [rsp+0h] */
#define v28 (*(int (*))(void *)(sr_frame_1400FEB50 + 48)) /* [rsp+30h] */
#define v29 (*(__int16 (*))(void *)(sr_frame_1400FEB50 + 52)) /* [rsp+34h] */
#define v30 (*(char (*))(void *)(sr_frame_1400FEB50 + 54)) /* [rsp+36h] */
#define v31 (*(__int16 (*))(void *)(sr_frame_1400FEB50 + 56)) /* [rsp+38h] */
#define v32 (*(void * (*))(void *)(sr_frame_1400FEB50 + 64)) /* [rsp+40h] */
#define v33 (*(char (*)[1024])(void *)(sr_frame_1400FEB50 + 5424)) /* [rsp+1530h] */
#define v34 (*(char (*)[4096])(void *)(sr_frame_1400FEB50 + 6448)) /* [rsp+1930h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_1400FEB50 + 10544)) /* [rsp+2930h] */

  v0 = dword_140404A6C[70087074];
  if ( !dword_140404A6C[18215638] )
    v0 = 41;
  dword_140404A6C[70087074] = v0;
  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1101004800;
  v1 = sr_DrawMenuButton("Back");
  v2 = dword_140404A6C[283831310];
  if ( v1 )
    v2 = 0;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[283831310] = v2;
  dword_140404A6C[70087069] = 1131413504;
  dword_140404A6C[70087070] = 1107296256;
  dword_140404A6C[70087068] = 1115684864;
  sr_borderless_selected = sr_recomp_window_mode == 1;
  sr_fullscreen_selected = sr_recomp_window_mode == 2;
  if ((unsigned int)sr_DrawMenuToggle("Borderless", &sr_borderless_selected)) {
    sr_recomp_window_set(*(void **)&dword_140404A6C[137297751], sr_borderless_selected ? 1 : 0, 1);
    dword_140404A6C[137297766] = sr_recomp_window_mode != 0;
    sr_fullscreen_selected = sr_recomp_window_mode == 2;
  }
  if ((unsigned int)sr_DrawMenuToggle("Fullscreen", &sr_fullscreen_selected)) {
    sr_recomp_window_set(*(void **)&dword_140404A6C[137297751], sr_fullscreen_selected ? 2 : 0, 1);
    dword_140404A6C[137297766] = sr_recomp_window_mode != 0;
  }
  if ( (unsigned int)sr_DrawMenuToggle("V-Sync", &dword_140404A6C[73991643]) )
    sr_window_swap((int)dword_140404A6C[73991643]);
  sr_DrawMenuToggle("Frame Smoothing", &dword_140404A6C[73991654]);
  sr_DrawMenuToggle("Sprite Models", &draw_unknown_151e46208);
  sub_140071640(Parameters);
  sub_140071640(Parameters);
  sr_DrawMenuToggle("Invert Mouse", &dword_140404A6C[73991627]);
  sr_DrawMenuToggle("Use advanced inventory", &dword_140404A6C[73991653]);
  dword_140404A6C[70087067] = 1140850688;
  dword_140404A6C[70087068] = 1115684864;
  sr_DrawMenuSlider("Sound Volume", (int *)&dword_140404A6C[73991612], 0, 100, 10);
  sr_DrawMenuList(
    "Audio Output",
    240.0,
    256.0,
    240.0,
    0x42000000u,
    0,
    &dword_140404A6C[18198668],
    (__int64)&dword_140404A6C[18198670],
    0x200u,
    dword_140404A6C[18198669]);
  sub_140071640(Parameters);
  sr_DrawMenuList(
    "Audio Input",
    240.0,
    256.0,
    240.0,
    0x42000000u,
    0,
    &dword_140404A6C[18206863],
    (__int64)&dword_140404A6C[18206865],
    0x200u,
    dword_140404A6C[18206864]);
  sub_140071640(Parameters);
  sr_DrawMenuToggle("Use Push to Talk", &dword_140404A6C[73991638]);
  if ( !dword_140404A6C[73991638] )
    sr_DrawMenuTextBox("Voice Min", (__int64)&dword_140404A6C[73991636], 0x10u, 0x4000u);
  v33[0] = 0;
  if ( dword_140404A6C[18215638] )
  {
    strcpy(v33, "Press a key or mouse button");
  }
  else if ( dword_140404A6C[73991639] )
  {
    v3 = &dword_140404A6C[4 * dword_140404A6C[73991639] + 83175925];
    v4 = (char *)(v33 - (char *)v3);
    do
    {
      v5 = *(_BYTE *)v3;
      *((_BYTE *)v3 + (_QWORD)v4) = *(_BYTE *)v3;
      v3 = (unsigned int *)((char *)v3 + 1);
    }
    while ( v5 );
  }
  else if ( dword_140404A6C[73991640] )
  {
    switch ( dword_140404A6C[73991640] )
    {
      case 1u:
        v6 = 1;
        break;
      case 2u:
        v6 = 2;
        break;
      case 4u:
        v6 = 3;
        break;
      case 8u:
        v6 = 4;
        break;
      case 0x10u:
        v6 = 5;
        break;
      case 0x20u:
        v6 = 6;
        break;
      case 0x40u:
        v6 = 7;
        break;
      default:
        v6 = 0;
        if ( dword_140404A6C[73991640] == 128 )
          v6 = 8;
        break;
    }
    crt_sprintf(v33, "Mouse %d", v6);
  }
  sr_DrawMenuButtonSelectable((unsigned __int8 *)v33, (int *)&dword_140404A6C[18215638], 1);
  if ( dword_140404A6C[18215638] )
  {
    v7 = dword_140404A6C[468760166];
    if ( dword_140404A6C[468760166] != dword_140404A6C[468760165] )
    {
      v8 = dword_140404A6C[73991639];
      while ( !dword_140404A6C[5 * v7 + 468760167] )
      {
        if ( dword_140404A6C[5 * v7 + 468760168] == 41 )
          goto LABEL_45;
LABEL_46:
        v7 = ((_WORD)v7 + 1) & 0x3FF;
        dword_140404A6C[468760166] = v7;
        if ( v7 == dword_140404A6C[468760165] )
          goto LABEL_47;
      }
      v9 = (int)dword_140404A6C[5 * v7 + 468760168];
      if ( (int)v9 < 323 )
      {
        if ( LOBYTE(dword_140404A6C[4 * v9 + 83175925]) )
          v8 = dword_140404A6C[5 * v7 + 468760168];
        dword_140404A6C[73991639] = v8;
      }
LABEL_45:
      dword_140404A6C[18215638] = 0;
      goto LABEL_46;
    }
LABEL_47:
    v10 = 0;
    v11 = 1;
    do
    {
      if ( (dword_140404A6C[468760163] & v11) == v11 )
      {
        if ( (unsigned int)v10 >= 3 )
        {
          dword_140404A6C[73991639] = 0;
          dword_140404A6C[73991640] = v11;
        }
        dword_140404A6C[18215638] = 0;
      }
      ++v10;
      v11 = __ROL4__(v11, 1);
    }
    while ( v10 < 16 );
  }
  sub_140071640(Parameters);
  sub_140071640(Parameters);
  sr_DrawMenuTextBox("Port", (__int64)&dword_140404A6C[73991093], 0, 0xFFFFu);
  sr_DrawMenuTextBox("Bandwidth", (__int64)&dword_140404A6C[73991094], 0x2710u, 0x3B9ACA00u);
  sub_140071640(Parameters);
  if ( (unsigned int)sr_DrawMenuButton("Copy System Info") )
  {
    LOBYTE(dword_140404A6C[83177973]) = 0;
    v12 = (     char *)sub_140198E51();
    v13 = (char *)&dword_140404A6C[83177972] + 3;
    do
      v14 = *++v13 == 0;
    while ( !v14 );
    strcpy(v13, v12);
    v15 = (_QWORD *)((char *)&dword_140404A6C[83177972] + 3);
    do
    {
      v14 = *((_BYTE *)v15 + 1) == 0;
      v15 = (_QWORD *)((char *)v15 + 1);
    }
    while ( !v14 );
    v16 = (char *)&dword_140404A6C[83177972] + 3;
    *v15 = 0x7469622D343620LL;
    do
      v14 = *++v16 == 0;
    while ( !v14 );
    strcpy(v16, "\n\n");
    v17 = (     char *)qword_140302FA8(7936);
    v18 = (     char *)qword_140302FA8(7937);
    v19 = (     char *)qword_140302FA8(7938);
    crt_sprintf(v34, "GL_VENDOR: %s\nGL_RENDERER: %s\nGL_VERSION: %s\n", v17, v18, v19);
    v20 = (char *)&dword_140404A6C[83177972] + 3;
    do
      v14 = *++v20 == 0;
    while ( !v14 );
    strcpy(v20, v34);
    v21 = (_WORD *)((char *)&dword_140404A6C[83177972] + 3);
    do
    {
      v14 = *((_BYTE *)v21 + 1) == 0;
      v21 = (_WORD *)((char *)v21 + 1);
    }
    while ( !v14 );
    *v21 = 10;
    v22 = sub_140198EB1();
    crt_sprintf(v34, "RAM: %d MB\n", v22);
    v23 = (char *)&dword_140404A6C[83177972] + 3;
    do
      v14 = *++v23 == 0;
    while ( !v14 );
    strcpy(v23, v34);
    if ( (unsigned int)sub_140198EAB() )
    {
      v24 = (char *)&dword_140404A6C[83177972] + 3;
      do
        v14 = *++v24 == 0;
      while ( !v14 );
      strcpy(v24, "SSE2\n");
    }
    sr_options_clipboard((const char *)&dword_140404A6C[83177973]);
  }
  if ( dword_140404A6C[18198667] != dword_140404A6C[18198668] )
  {
    if (dword_140404A6C[7]) {
      sr_audio_pause(dword_140404A6C[7],1);
      sr_options_audio_close(dword_140404A6C[7]);
    }
    sr_startup_audio_spec desired={0},obtained;
    desired.freq=48000;desired.format=0x8120;desired.channels=2;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sub_140069400;
    int selected=(int)dword_140404A6C[18198668];
    const char *name=selected?(const char *)&dword_140404A6C[128LL*selected+18198670]:NULL;
    dword_140404A6C[7]=sr_audio_open(name,0,&desired,&obtained,0);
    if(dword_140404A6C[7])sr_audio_pause(dword_140404A6C[7],0);
    dword_140404A6C[18198667]=dword_140404A6C[18198668];
  }
  if ( dword_140404A6C[18206862] != dword_140404A6C[18206863] )
  {
    if (dword_140404A6C[196619]) {
      sr_audio_pause(dword_140404A6C[196619],1);
      sr_options_audio_close(dword_140404A6C[196619]);
    }
    sr_startup_audio_spec desired={0},obtained;
    desired.freq=48000;desired.format=0x8010;desired.channels=1;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sub_14006A380;
    int selected=(int)dword_140404A6C[18206863];
    const char *name=selected?(const char *)&dword_140404A6C[128LL*selected+18206865]:NULL;
    dword_140404A6C[196619]=sr_audio_open(name,1,&desired,&obtained,0);
    if(dword_140404A6C[196619])sr_audio_pause(dword_140404A6C[196619],0);
    dword_140404A6C[18206862]=dword_140404A6C[18206863];
  }
  return;
}
#undef v27
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
