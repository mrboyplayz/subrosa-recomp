/* Address: 0x140181350 | Name: sub_140181350 | Size: 708 bytes */
__int64 __fastcall sub_140181350(__int64 a1, int a2, float *a3, float a4, float a5, float a6, float a7)
{
  float v8; // xmm6_4
  float v11; // xmm11_4
  __int64 v12; // rdi
  __int64 result; // rax
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm7_4
  float v17; // xmm9_4
  float v18; // xmm10_4
  __int64 v19; // r8
  const __int16 *v20; // rcx

  v8 = a7;
  v11 = a5;
  v12 = a2;
  if ( a5 != a7 )
  {
    if ( a5 >= a7 )
      result = sub_14023E640(L"y0 < y1", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2920);
    v14 = a3[7];
    if ( v14 < a3[6] )
    {
      result = sub_14023E640(L"e->sy <= e->ey", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2921);
      v14 = a3[7];
    }
    if ( a5 <= v14 )
    {
      v15 = a3[6];
      if ( a7 >= v15 )
      {
        v16 = a6;
        if ( a5 < v15 )
        {
          v11 = a3[6];
          a4 = a4 + (float)((float)((float)(v15 - a5) * (float)(a6 - a4)) / (float)(a7 - a5));
        }
        if ( a7 > v14 )
        {
          v8 = v14;
          v16 = a6 + (float)((float)((float)(v14 - a7) * (float)(a6 - a4)) / (float)(a7 - v11));
        }
        result = (unsigned int)(v12 + 1);
        v17 = (float)(int)v12;
        v18 = (float)(v12 + 1);
        if ( a4 == (float)(int)v12 )
        {
          if ( v16 <= v18 )
            goto LABEL_24;
          v19 = 2934;
          v20 = L"x1 <= x+1";
          goto LABEL_23;
        }
        if ( a4 == v18 )
        {
          if ( v16 < v17 )
            result = sub_14023E640(L"x1 >= x", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2936);
          if ( a4 <= v17 )
          {
LABEL_24:
            if ( v16 <= v17 )
              goto LABEL_25;
            if ( a4 < v18 )
              goto LABEL_32;
          }
        }
        else
        {
          if ( a4 <= v17 )
          {
            if ( v16 <= v17 )
            {
LABEL_25:
              *(float *)(a1 + 4 * v12) = (float)((float)(v8 - v11) * a3[5]) + *(float *)(a1 + 4 * v12);
              return result;
            }
            v19 = 2938;
            v20 = L"x1 <= x";
LABEL_23:
            result = sub_14023E640(v20, L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", v19);
            goto LABEL_24;
          }
          if ( a4 < v18 )
          {
            if ( v16 >= v17 && v16 <= v18 )
              goto LABEL_41;
            result = sub_14023E640(L"x1 >= x && x1 <= x+1", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2942);
            goto LABEL_38;
          }
          if ( v16 >= v18 )
            return result;
          result = sub_14023E640(L"x1 >= x+1", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2940);
        }
        if ( v16 >= v18 )
          return result;
LABEL_32:
        if ( a4 < v17 || a4 > v18 )
        {
LABEL_40:
          result = sub_14023E640(
                     L"x0 >= x && x0 <= x+1 && x1 >= x && x1 <= x+1",
                     L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                     2949);
LABEL_41:
          *(float *)(a1 + 4 * v12) = (float)((float)(1.0 - (float)((float)((float)(a4 - v17) + (float)(v16 - v17)) * 0.5))
                                           * (float)((float)(v8 - v11) * a3[5]))
                                   + *(float *)(a1 + 4 * v12);
          return result;
        }
LABEL_38:
        if ( v16 >= v17 && v16 <= v18 )
          goto LABEL_41;
        goto LABEL_40;
      }
    }
  }
  return result;
}

