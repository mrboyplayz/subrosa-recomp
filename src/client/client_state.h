/* Names of the client's fixed-address globals, generated from state_names.tsv by
 * tools/cleanup/state_names.py; edit the table, not this file. Each name expands
 * to the access of the shared state array it replaced (see the tool). */
#ifndef SR_CLIENT_STATE_H
#define SR_CLIENT_STATE_H

#define g_140404A6C                      dword_140404A6C[0]                           /* 140404A6C */
#define g_140404A70                      dword_140404A6C[1]                           /* 140404A70 */
#define g_140404A78                      dword_140404A6C[3]                           /* 140404A78 */
#define g_140404A80                      (*(float *)&dword_140404A6C[5])              /* 140404A80 */
#define g_140404A84                      dword_140404A6C[6]                           /* 140404A84 */
#define g_140404A88                      dword_140404A6C[7]                           /* 140404A88 */
#define g_140404A8C                      dword_140404A6C[8]                           /* 140404A8C */
#define g_140404A90                      dword_140404A6C[9]                           /* 140404A90 */
#define g_140404A94                      dword_140404A6C[10]                          /* 140404A94 */
#define g_1404C4A98                      dword_140404A6C[196619]                      /* 1404C4A98 */
#define g_1404C4AA4                      dword_140404A6C[196622]                      /* 1404C4AA4 */
#define g_1404C4AA8                      dword_140404A6C[196623]                      /* 1404C4AA8 */
#define g_1404C4AAC                      dword_140404A6C[196624]                      /* 1404C4AAC */
#define g_140544AB0                      dword_140404A6C[327697]                      /* 140544AB0 */
#define g_140544AB4                      dword_140404A6C[327698]                      /* 140544AB4 */
#define g_140544ABC                      dword_140404A6C[327700]                      /* 140544ABC */
#define g_140544AC0                      dword_140404A6C[327701]                      /* 140544AC0 */
#define g_140544AC4                      dword_140404A6C[327702]                      /* 140544AC4 */
#define g_140544AC8                      dword_140404A6C[327703]                      /* 140544AC8 */
#define g_140544ACC                      dword_140404A6C[327704]                      /* 140544ACC */
#define g_140544AD0                      dword_140404A6C[327705]                      /* 140544AD0 */
#define g_140544AD4                      dword_140404A6C[327706]                      /* 140544AD4 */
#define g_140544AD8                      dword_140404A6C[327707]                      /* 140544AD8 */
#define g_140544ADC                      dword_140404A6C[327708]                      /* 140544ADC */
#define g_140544BDC                      dword_140404A6C[327772]                      /* 140544BDC */
#define g_140654DB4                      dword_140404A6C[606418]                      /* 140654DB4 */
#define g_1440CF2B0                      dword_140404A6C[15936017]                    /* 1440CF2B0 */
#define g_144950AB4                      dword_140404A6C[18165778]                    /* 144950AB4 */
#define g_144960AC0                      dword_140404A6C[18182165]                    /* 144960AC0 */
#define g_144960AC8                      dword_140404A6C[18182167]                    /* 144960AC8 */
#define g_144960BC8                      dword_140404A6C[18182231]                    /* 144960BC8 */
#define g_144970AB0                      dword_140404A6C[18198545]                    /* 144970AB0 */
#define g_144970AB4                      dword_140404A6C[18198546]                    /* 144970AB4 */
#define g_144970AB8                      dword_140404A6C[18198547]                    /* 144970AB8 */
#define g_144970ABC                      dword_140404A6C[18198548]                    /* 144970ABC */
#define g_144970AC0                      dword_140404A6C[18198549]                    /* 144970AC0 */
#define g_144970AC4                      dword_140404A6C[18198550]                    /* 144970AC4 */
#define g_144970AC8                      dword_140404A6C[18198551]                    /* 144970AC8 */
#define g_144970ACC                      dword_140404A6C[18198552]                    /* 144970ACC */
#define g_144970AD0                      dword_140404A6C[18198553]                    /* 144970AD0 */
#define g_144970AD4                      dword_140404A6C[18198554]                    /* 144970AD4 */
#define g_144970AD8                      dword_140404A6C[18198555]                    /* 144970AD8 */
#define g_144970ADC                      dword_140404A6C[18198556]                    /* 144970ADC */
#define g_144970AE0                      dword_140404A6C[18198557]                    /* 144970AE0 */
#define g_144970AE4                      dword_140404A6C[18198558]                    /* 144970AE4 */
#define g_144970AE8                      dword_140404A6C[18198559]                    /* 144970AE8 */
#define g_144970AEC                      dword_140404A6C[18198560]                    /* 144970AEC */
#define g_144970C94                      (*(float *)&dword_140404A6C[18198666])       /* 144970C94 */
#define g_144970C98                      dword_140404A6C[18198667]                    /* 144970C98 */
#define g_144970C9C                      dword_140404A6C[18198668]                    /* 144970C9C */
#define g_144970CA0                      dword_140404A6C[18198669]                    /* 144970CA0 */
#define g_144970CA4                      (*(_QWORD *)&dword_140404A6C[18198670])      /* 144970CA4 */
#define g_144978CA4                      dword_140404A6C[18206862]                    /* 144978CA4 */
#define g_144978CA8                      dword_140404A6C[18206863]                    /* 144978CA8 */
#define g_144978CAC                      dword_140404A6C[18206864]                    /* 144978CAC */
#define g_144978CB0                      (*(_QWORD *)&dword_140404A6C[18206865])      /* 144978CB0 */
#define g_144980CB0                      dword_140404A6C[18215057]                    /* 144980CB0 */
#define glCullFace                       (*(PFNGLCULLFACEPROC *)&dword_140404A6C[18215059]) /* 144980CB8 */
#define glFrontFace                      (*(PFNGLFRONTFACEPROC *)&dword_140404A6C[18215061]) /* 144980CC0 */
#define glHint                           (*(PFNGLHINTPROC *)&dword_140404A6C[18215063]) /* 144980CC8 */
#define glLineWidth                      (*(PFNGLLINEWIDTHPROC *)&dword_140404A6C[18215065]) /* 144980CD0 */
#define glPointSize                      (*(PFNGLPOINTSIZEPROC *)&dword_140404A6C[18215067]) /* 144980CD8 */
#define glPolygonMode                    (*(PFNGLPOLYGONMODEPROC *)&dword_140404A6C[18215069]) /* 144980CE0 */
#define glScissor                        (*(PFNGLSCISSORPROC *)&dword_140404A6C[18215071]) /* 144980CE8 */
#define glTexParameterf                  (*(PFNGLTEXPARAMETERFPROC *)&dword_140404A6C[18215073]) /* 144980CF0 */
#define glTexParameterfv                 (*(PFNGLTEXPARAMETERFVPROC *)&dword_140404A6C[18215075]) /* 144980CF8 */
#define glTexParameteri                  (*(PFNGLTEXPARAMETERIPROC *)&dword_140404A6C[18215077]) /* 144980D00 */
#define glTexParameteriv                 (*(PFNGLTEXPARAMETERIVPROC *)&dword_140404A6C[18215079]) /* 144980D08 */
#define glTexImage1D                     (*(PFNGLTEXIMAGE1DPROC *)&dword_140404A6C[18215081]) /* 144980D10 */
#define glTexImage2D                     (*(PFNGLTEXIMAGE2DPROC *)&dword_140404A6C[18215083]) /* 144980D18 */
#define glDrawBuffer                     (*(PFNGLDRAWBUFFERPROC *)&dword_140404A6C[18215085]) /* 144980D20 */
#define glClear                          (*(PFNGLCLEARPROC *)&dword_140404A6C[18215087]) /* 144980D28 */
#define glClearColor                     (*(PFNGLCLEARCOLORPROC *)&dword_140404A6C[18215089]) /* 144980D30 */
#define glClearStencil                   (*(PFNGLCLEARSTENCILPROC *)&dword_140404A6C[18215091]) /* 144980D38 */
#define glClearDepth                     (*(PFNGLCLEARDEPTHPROC *)&dword_140404A6C[18215093]) /* 144980D40 */
#define glStencilMask                    (*(PFNGLSTENCILMASKPROC *)&dword_140404A6C[18215095]) /* 144980D48 */
#define glColorMask                      (*(PFNGLCOLORMASKPROC *)&dword_140404A6C[18215097]) /* 144980D50 */
#define glDepthMask                      (*(PFNGLDEPTHMASKPROC *)&dword_140404A6C[18215099]) /* 144980D58 */
#define glDisable                        (*(PFNGLDISABLEPROC *)&dword_140404A6C[18215101]) /* 144980D60 */
#define glEnable                         (*(PFNGLENABLEPROC *)&dword_140404A6C[18215103]) /* 144980D68 */
#define glFinish                         (*(PFNGLFINISHPROC *)&dword_140404A6C[18215105]) /* 144980D70 */
#define glFlush                          (*(PFNGLFLUSHPROC *)&dword_140404A6C[18215107]) /* 144980D78 */
#define glBlendFunc                      (*(PFNGLBLENDFUNCPROC *)&dword_140404A6C[18215109]) /* 144980D80 */
#define g_144980D88                      (*(_QWORD *)&dword_140404A6C[18215111])      /* 144980D88 */
#define g_144980D90                      (*(_QWORD *)&dword_140404A6C[18215113])      /* 144980D90 */
#define g_144980D98                      dword_140404A6C[18215115]                    /* 144980D98 */
#define g_144980D9C                      dword_140404A6C[18215116]                    /* 144980D9C */
#define g_144980DA0                      (*(_QWORD *)&dword_140404A6C[18215117])      /* 144980DA0 */
#define g_144980DA8                      dword_140404A6C[18215119]                    /* 144980DA8 */
#define g_144980DAC                      dword_140404A6C[18215120]                    /* 144980DAC */
#define g_144980DB0                      (*(_QWORD *)&dword_140404A6C[18215121])      /* 144980DB0 */
#define g_144980DB8                      dword_140404A6C[18215123]                    /* 144980DB8 */
#define g_144980DBC                      dword_140404A6C[18215124]                    /* 144980DBC */
#define g_144980DC0                      dword_140404A6C[18215125]                    /* 144980DC0 */
#define g_1449815C0                      dword_140404A6C[18215637]                    /* 1449815C0 */
#define g_1449815C4                      dword_140404A6C[18215638]                    /* 1449815C4 */
#define g_1449815C8                      dword_140404A6C[18215639]                    /* 1449815C8 */
#define g_1449815D0                      dword_140404A6C[18215641]                    /* 1449815D0 */
#define g_1449815E0                      dword_140404A6C[18215645]                    /* 1449815E0 */
#define g_1449815F0                      dword_140404A6C[18215649]                    /* 1449815F0 */
#define g_144981600                      dword_140404A6C[18215653]                    /* 144981600 */
#define g_144981610                      dword_140404A6C[18215657]                    /* 144981610 */
#define g_144981620                      dword_140404A6C[18215661]                    /* 144981620 */
#define g_144981630                      dword_140404A6C[18215665]                    /* 144981630 */
#define g_144981640                      dword_140404A6C[18215669]                    /* 144981640 */
#define g_144981650                      dword_140404A6C[18215673]                    /* 144981650 */
#define g_144981660                      dword_140404A6C[18215677]                    /* 144981660 */
#define g_144981670                      dword_140404A6C[18215681]                    /* 144981670 */
#define g_144981680                      dword_140404A6C[18215685]                    /* 144981680 */
#define g_144981690                      dword_140404A6C[18215689]                    /* 144981690 */
#define g_1449816A0                      dword_140404A6C[18215693]                    /* 1449816A0 */
#define g_1449816B0                      dword_140404A6C[18215697]                    /* 1449816B0 */
#define g_1449816C0                      dword_140404A6C[18215701]                    /* 1449816C0 */
#define g_1449816D0                      dword_140404A6C[18215705]                    /* 1449816D0 */
#define g_1449816D4                      dword_140404A6C[18215706]                    /* 1449816D4 */
#define g_1449816D8                      dword_140404A6C[18215707]                    /* 1449816D8 */
#define g_1449816DC                      dword_140404A6C[18215708]                    /* 1449816DC */
#define g_1449816E0                      dword_140404A6C[18215709]                    /* 1449816E0 */
#define g_1449816E4                      dword_140404A6C[18215710]                    /* 1449816E4 */
#define g_1449816F8                      dword_140404A6C[18215715]                    /* 1449816F8 */
#define g_1449816FC                      dword_140404A6C[18215716]                    /* 1449816FC */
#define g_14498174C                      dword_140404A6C[18215736]                    /* 14498174C */
#define g_14498178C                      dword_140404A6C[18215752]                    /* 14498178C */
#define g_144981790                      dword_140404A6C[18215753]                    /* 144981790 */
#define g_144981794                      dword_140404A6C[18215754]                    /* 144981794 */
#define g_144A60DB4                      dword_140404A6C[18444498]                    /* 144A60DB4 */
#define g_144AF96E0                      dword_140404A6C[18600733]                    /* 144AF96E0 */
#define g_144AF9A6C                      dword_140404A6C[18600960]                    /* 144AF9A6C */
#define g_144AF9D10                      dword_140404A6C[18601129]                    /* 144AF9D10 */
#define g_144AFA09C                      dword_140404A6C[18601356]                    /* 144AFA09C */
#define g_144AFA0A0                      dword_140404A6C[18601357]                    /* 144AFA0A0 */
#define g_144AFA1A0                      dword_140404A6C[18601421]                    /* 144AFA1A0 */
#define g_144AFA59C                      dword_140404A6C[18601676]                    /* 144AFA59C */
#define g_144AFA5A0                      dword_140404A6C[18601677]                    /* 144AFA5A0 */
#define g_144AFA7A0                      dword_140404A6C[18601805]                    /* 144AFA7A0 */
#define g_144AFA9A0                      dword_140404A6C[18601933]                    /* 144AFA9A0 */
#define g_144AFA9A4                      dword_140404A6C[18601934]                    /* 144AFA9A4 */
#define g_144AFA9A8                      dword_140404A6C[18601935]                    /* 144AFA9A8 */
#define g_144AFA9AC                      dword_140404A6C[18601936]                    /* 144AFA9AC */
#define g_144AFA9BC                      dword_140404A6C[18601940]                    /* 144AFA9BC */
#define g_144AFC5C4                      dword_140404A6C[18603734]                    /* 144AFC5C4 */
#define g_144CBA9A0                      (*(_OWORD *)&dword_140404A6C[19060685])      /* 144CBA9A0 */
#define g_144CBA9B0                      (*(_OWORD *)&dword_140404A6C[19060689])      /* 144CBA9B0 */
#define g_144CBA9C0                      (*(_OWORD *)&dword_140404A6C[19060693])      /* 144CBA9C0 */
#define g_144CBA9D0                      (*(_OWORD *)&dword_140404A6C[19060697])      /* 144CBA9D0 */
#define g_144CBA9E0                      (*(_OWORD *)&dword_140404A6C[19060701])      /* 144CBA9E0 */
#define g_144CBA9F0                      (*(_OWORD *)&dword_140404A6C[19060705])      /* 144CBA9F0 */
#define g_144CBAA00                      (*(_OWORD *)&dword_140404A6C[19060709])      /* 144CBAA00 */
#define g_144CBAA10                      (*(_OWORD *)&dword_140404A6C[19060713])      /* 144CBAA10 */
#define g_144CBAA20                      dword_140404A6C[19060717]                    /* 144CBAA20 */
#define g_144CBAA24                      dword_140404A6C[19060718]                    /* 144CBAA24 */
#define g_144CBAA28                      dword_140404A6C[19060719]                    /* 144CBAA28 */
#define g_144CBAA2C                      dword_140404A6C[19060720]                    /* 144CBAA2C */
#define g_144CBAA30                      dword_140404A6C[19060721]                    /* 144CBAA30 */
#define g_144CBAA34                      dword_140404A6C[19060722]                    /* 144CBAA34 */
#define g_144CBAA38                      dword_140404A6C[19060723]                    /* 144CBAA38 */
#define g_144CBAA3C                      dword_140404A6C[19060724]                    /* 144CBAA3C */
#define g_144CBAA40                      dword_140404A6C[19060725]                    /* 144CBAA40 */
#define g_144CBAA44                      dword_140404A6C[19060726]                    /* 144CBAA44 */
#define g_144CBAA48                      dword_140404A6C[19060727]                    /* 144CBAA48 */
#define g_144CBAA4C                      dword_140404A6C[19060728]                    /* 144CBAA4C */
#define g_144CBDA20                      dword_140404A6C[19063789]                    /* 144CBDA20 */
#define g_144CBDB30                      dword_140404A6C[19063857]                    /* 144CBDB30 */
#define g_144CBDB34                      dword_140404A6C[19063858]                    /* 144CBDB34 */
#define g_144CBDB38                      (*(_QWORD *)&dword_140404A6C[19063859])      /* 144CBDB38 */
#define g_144CBDB40                      dword_140404A6C[19063861]                    /* 144CBDB40 */
#define g_144CBDF40                      dword_140404A6C[19064117]                    /* 144CBDF40 */
#define g_144CBDF48                      (*(_QWORD *)&dword_140404A6C[19064119])      /* 144CBDF48 */
#define g_144CBDF50                      dword_140404A6C[19064121]                    /* 144CBDF50 */
#define g_144CBDF54                      dword_140404A6C[19064122]                    /* 144CBDF54 */
#define g_144CBDF60                      (*(_QWORD *)&dword_140404A6C[19064125])      /* 144CBDF60 */
#define g_144CBDF68                      dword_140404A6C[19064127]                    /* 144CBDF68 */
#define g_144CBDF70                      (*(_QWORD *)&dword_140404A6C[19064129])      /* 144CBDF70 */
#define g_144CBDFF0                      dword_140404A6C[19064161]                    /* 144CBDFF0 */
#define g_144CBE070                      (*(_QWORD *)&dword_140404A6C[19064193])      /* 144CBE070 */
#define g_144CBE088                      (*(_QWORD *)&dword_140404A6C[19064199])      /* 144CBE088 */
#define g_144CBE0E8                      (*(_QWORD *)&dword_140404A6C[19064223])      /* 144CBE0E8 */
#define g_144CBE4C0                      dword_140404A6C[19064469]                    /* 144CBE4C0 */
#define g_144CBE4C4                      dword_140404A6C[19064470]                    /* 144CBE4C4 */
#define g_144CBE4C8                      dword_140404A6C[19064471]                    /* 144CBE4C8 */
#define g_144CBE4D0                      dword_140404A6C[19064473]                    /* 144CBE4D0 */
#define g_144CBE4D8                      dword_140404A6C[19064475]                    /* 144CBE4D8 */
#define g_144CBE4E0                      (*(_OWORD *)&dword_140404A6C[19064477])      /* 144CBE4E0 */
#define g_144CBE4F0                      (*(_QWORD *)&dword_140404A6C[19064481])      /* 144CBE4F0 */
#define g_144CBE4F8                      (*(_OWORD *)&dword_140404A6C[19064483])      /* 144CBE4F8 */
#define g_144CBE508                      (*(_QWORD *)&dword_140404A6C[19064487])      /* 144CBE508 */
#define g_144CBE510                      dword_140404A6C[19064489]                    /* 144CBE510 */
#define g_144CBE520                      dword_140404A6C[19064493]                    /* 144CBE520 */
#define g_144CBE540                      (*(_QWORD *)&dword_140404A6C[19064501])      /* 144CBE540 */
#define g_144CBE548                      (*(_QWORD *)&dword_140404A6C[19064503])      /* 144CBE548 */
#define g_144CBE550                      dword_140404A6C[19064505]                    /* 144CBE550 */
#define g_144CBE5C8                      dword_140404A6C[19064535]                    /* 144CBE5C8 */
#define g_144CBE5D0                      dword_140404A6C[19064537]                    /* 144CBE5D0 */
#define g_144CBE5F8                      dword_140404A6C[19064547]                    /* 144CBE5F8 */
#define g_144CBE600                      (*(_QWORD *)&dword_140404A6C[19064549])      /* 144CBE600 */
#define g_144CBE608                      (*(_QWORD *)&dword_140404A6C[19064551])      /* 144CBE608 */
#define g_144CBE610                      (*(_QWORD *)&dword_140404A6C[19064553])      /* 144CBE610 */
#define crt_undname_cursor               (*(_QWORD *)&dword_140404A6C[19064555])      /* 144CBE618 position in the decorated C++ name being demangled */
#define g_144CBE620                      (*(_QWORD *)&dword_140404A6C[19064557])      /* 144CBE620 */
#define g_144CBE628                      dword_140404A6C[19064559]                    /* 144CBE628 */
#define g_144CBE62C                      dword_140404A6C[19064560]                    /* 144CBE62C */
#define g_144CBE630                      (*(_QWORD *)&dword_140404A6C[19064561])      /* 144CBE630 */
#define g_144CBE638                      dword_140404A6C[19064563]                    /* 144CBE638 */
#define g_144CBE63C                      dword_140404A6C[19064564]                    /* 144CBE63C */
#define g_144CBE640                      (*(_QWORD *)&dword_140404A6C[19064565])      /* 144CBE640 */
#define g_144CBE648                      (*(_QWORD *)&dword_140404A6C[19064567])      /* 144CBE648 */
#define g_144CBE650                      (*(_QWORD *)&dword_140404A6C[19064569])      /* 144CBE650 */
#define g_144CBE658                      (*(_QWORD *)&dword_140404A6C[19064571])      /* 144CBE658 */
#define g_144CBE660                      (*(_QWORD *)&dword_140404A6C[19064573])      /* 144CBE660 */
#define g_144CBE6A8                      dword_140404A6C[19064591]                    /* 144CBE6A8 */
#define g_144CBE6B0                      (*(_QWORD *)&dword_140404A6C[19064593])      /* 144CBE6B0 */
#define g_144CBE6B8                      dword_140404A6C[19064595]                    /* 144CBE6B8 */
#define g_144CBE6C0                      dword_140404A6C[19064597]                    /* 144CBE6C0 */
#define g_144CBE6C4                      dword_140404A6C[19064598]                    /* 144CBE6C4 */
#define g_144CBE6C8                      dword_140404A6C[19064599]                    /* 144CBE6C8 */
#define g_144CBE6D0                      (*(_QWORD *)&dword_140404A6C[19064601])      /* 144CBE6D0 */
#define g_144CBE6D8                      (*(_QWORD *)&dword_140404A6C[19064603])      /* 144CBE6D8 */
#define g_144CBE6E0                      dword_140404A6C[19064605]                    /* 144CBE6E0 */
#define g_144CBE6F0                      dword_140404A6C[19064609]                    /* 144CBE6F0 */
#define g_144CBE6F4                      dword_140404A6C[19064610]                    /* 144CBE6F4 */
#define g_144CBE734                      dword_140404A6C[19064626]                    /* 144CBE734 */
#define g_144CBE738                      dword_140404A6C[19064627]                    /* 144CBE738 */
#define g_144CBE73C                      dword_140404A6C[19064628]                    /* 144CBE73C */
#define g_144CBE740                      dword_140404A6C[19064629]                    /* 144CBE740 */
#define g_144CBE744                      dword_140404A6C[19064630]                    /* 144CBE744 */
#define g_144CBE748                      dword_140404A6C[19064631]                    /* 144CBE748 */
#define g_144CBE788                      dword_140404A6C[19064647]                    /* 144CBE788 */
#define g_144CBE78C                      dword_140404A6C[19064648]                    /* 144CBE78C */
#define g_144CBE790                      dword_140404A6C[19064649]                    /* 144CBE790 */
#define g_144CBE794                      dword_140404A6C[19064650]                    /* 144CBE794 */
#define g_144CBE798                      dword_140404A6C[19064651]                    /* 144CBE798 */
#define g_144CBE79C                      dword_140404A6C[19064652]                    /* 144CBE79C */
#define g_144CBE7A0                      dword_140404A6C[19064653]                    /* 144CBE7A0 */
#define g_144CBE7A8                      (*(_QWORD *)&dword_140404A6C[19064655])      /* 144CBE7A8 */
#define g_144CBE7B0                      dword_140404A6C[19064657]                    /* 144CBE7B0 */
#define g_144CBE7C0                      dword_140404A6C[19064661]                    /* 144CBE7C0 */
#define g_144CBE8D0                      dword_140404A6C[19064729]                    /* 144CBE8D0 */
#define g_144CBEAE0                      (*(_QWORD *)&dword_140404A6C[19064861])      /* 144CBEAE0 */
#define g_144CBEAE8                      (*(_QWORD *)&dword_140404A6C[19064863])      /* 144CBEAE8 */
#define g_144CBEAF0                      (*(_QWORD *)&dword_140404A6C[19064865])      /* 144CBEAF0 */
#define g_144CBEAF8                      (*(_QWORD *)&dword_140404A6C[19064867])      /* 144CBEAF8 */
#define g_144CBEAFC                      dword_140404A6C[19064868]                    /* 144CBEAFC */
#define g_144CBEB00                      dword_140404A6C[19064869]                    /* 144CBEB00 */
#define g_144CBEB18                      dword_140404A6C[19064875]                    /* 144CBEB18 */
#define g_144CBEB30                      dword_140404A6C[19064881]                    /* 144CBEB30 */
#define g_144CBEB40                      dword_140404A6C[19064885]                    /* 144CBEB40 */
#define g_144CBEB70                      dword_140404A6C[19064897]                    /* 144CBEB70 */
#define g_144CBED78                      dword_140404A6C[19065027]                    /* 144CBED78 */
#define g_144CBF168                      (*(_QWORD *)&dword_140404A6C[19065279])      /* 144CBF168 */
#define g_144CBF170                      dword_140404A6C[19065281]                    /* 144CBF170 */
#define g_144CBF174                      dword_140404A6C[19065282]                    /* 144CBF174 */
#define g_144CBF178                      dword_140404A6C[19065283]                    /* 144CBF178 */
#define g_144CBF17C                      dword_140404A6C[19065284]                    /* 144CBF17C */
#define g_144CBF180                      dword_140404A6C[19065285]                    /* 144CBF180 */
#define g_144CBF188                      (*(_QWORD *)&dword_140404A6C[19065287])      /* 144CBF188 */
#define g_144CBF190                      dword_140404A6C[19065289]                    /* 144CBF190 */
#define g_144CBF230                      dword_140404A6C[19065329]                    /* 144CBF230 */
#define g_144CBF340                      (*(_QWORD *)&dword_140404A6C[19065397])      /* 144CBF340 */
#define g_144CBF350                      (*(_QWORD *)&dword_140404A6C[19065401])      /* 144CBF350 */
#define g_144CBF750                      dword_140404A6C[19065657]                    /* 144CBF750 */
#define g_144CBF758                      (*(_QWORD *)&dword_140404A6C[19065659])      /* 144CBF758 */
#define g_144CBF760                      (*(_QWORD *)&dword_140404A6C[19065661])      /* 144CBF760 */
#define g_144CBF768                      (*(_QWORD *)&dword_140404A6C[19065663])      /* 144CBF768 */
#define g_144CBF770                      (*(_QWORD *)&dword_140404A6C[19065665])      /* 144CBF770 */
#define g_144CBF778                      (*(_QWORD *)&dword_140404A6C[19065667])      /* 144CBF778 */
#define g_144CBF780                      dword_140404A6C[19065669]                    /* 144CBF780 */
#define g_144CBF820                      dword_140404A6C[19065709]                    /* 144CBF820 */
#define g_144CBF9B0                      dword_140404A6C[19065809]                    /* 144CBF9B0 */
#define g_144CBF9B4                      dword_140404A6C[19065810]                    /* 144CBF9B4 */
#define g_144CBF9B8                      dword_140404A6C[19065811]                    /* 144CBF9B8 */
#define g_144CBF9BC                      dword_140404A6C[19065812]                    /* 144CBF9BC */
#define g_144CBF9C0                      dword_140404A6C[19065813]                    /* 144CBF9C0 */
#define g_144CBF9C4                      dword_140404A6C[19065814]                    /* 144CBF9C4 */
#define g_144CBF9C8                      (*(_QWORD *)&dword_140404A6C[19065815])      /* 144CBF9C8 */
#define g_144CBF9D0                      (*(_QWORD *)&dword_140404A6C[19065817])      /* 144CBF9D0 */
#define g_144CBF9D8                      (*(_QWORD *)&dword_140404A6C[19065819])      /* 144CBF9D8 */
#define g_144CBF9E0                      (*(_QWORD *)&dword_140404A6C[19065821])      /* 144CBF9E0 */
#define g_144CBF9E8                      dword_140404A6C[19065823]                    /* 144CBF9E8 */
#define g_144CBF9EC                      dword_140404A6C[19065824]                    /* 144CBF9EC */
#define g_144CBF9F0                      (*(_QWORD *)&dword_140404A6C[19065825])      /* 144CBF9F0 */
#define g_144CBF9F8                      (*(_QWORD *)&dword_140404A6C[19065827])      /* 144CBF9F8 */
#define g_144CBFA00                      (*(_QWORD *)&dword_140404A6C[19065829])      /* 144CBFA00 */
#define g_144CBFA08                      dword_140404A6C[19065831]                    /* 144CBFA08 */
#define g_144CBFA0C                      dword_140404A6C[19065832]                    /* 144CBFA0C */
#define g_144CBFA10                      (*(_QWORD *)&dword_140404A6C[19065833])      /* 144CBFA10 */
#define g_144CBFA18                      (*(_QWORD *)&dword_140404A6C[19065835])      /* 144CBFA18 */
#define g_144CBFA20                      dword_140404A6C[19065837]                    /* 144CBFA20 */
#define g_144CBFA28                      (*(_QWORD *)&dword_140404A6C[19065839])      /* 144CBFA28 */
#define g_144CBFA30                      (*(_QWORD *)&dword_140404A6C[19065841])      /* 144CBFA30 */
#define g_144CBFA38                      (*(_QWORD *)&dword_140404A6C[19065843])      /* 144CBFA38 */
#define g_144CBFA40                      (*(_QWORD *)&dword_140404A6C[19065845])      /* 144CBFA40 */
#define g_144CBFA48                      (*(_QWORD *)&dword_140404A6C[19065847])      /* 144CBFA48 */
#define g_144CBFA50                      (*(_QWORD *)&dword_140404A6C[19065849])      /* 144CBFA50 */
#define g_144CBFA58                      dword_140404A6C[19065851]                    /* 144CBFA58 */
#define g_144CBFA68                      dword_140404A6C[19065855]                    /* 144CBFA68 */
#define g_144CBFA70                      dword_140404A6C[19065857]                    /* 144CBFA70 */
#define g_144CBFA78                      dword_140404A6C[19065859]                    /* 144CBFA78 */
#define g_144CBFA80                      dword_140404A6C[19065861]                    /* 144CBFA80 */
#define g_144CBFA88                      dword_140404A6C[19065863]                    /* 144CBFA88 */
#define g_144CBFA90                      dword_140404A6C[19065865]                    /* 144CBFA90 */
#define g_144CBFA98                      dword_140404A6C[19065867]                    /* 144CBFA98 */
#define g_144CBFAA0                      dword_140404A6C[19065869]                    /* 144CBFAA0 */
#define replay_active                    dword_140404A6C[19065870]                    /* 144CBFAA4 src/engine/frame.h */
#define g_144CBFAA8                      dword_140404A6C[19065871]                    /* 144CBFAA8 */
#define g_144CBFAAC                      dword_140404A6C[19065872]                    /* 144CBFAAC */
#define replay_position                  dword_140404A6C[19065873]                    /* 144CBFAB0 src/engine/frame.h */
#define replay_length                    dword_140404A6C[19065874]                    /* 144CBFAB4 src/engine/frame.h */
#define g_144CBFAB8                      (*(_QWORD *)&dword_140404A6C[19065875])      /* 144CBFAB8 */
#define replay_target_tick               dword_140404A6C[19065877]                    /* 144CBFAC0 src/engine/frame.h */
#define g_144CBFAC4                      dword_140404A6C[19065878]                    /* 144CBFAC4 */
#define replay_unknown_144cbfac8         dword_140404A6C[19065879]                    /* 144CBFAC8 src/engine/frame.h */
#define g_144FBFBA0                      dword_140404A6C[19852365]                    /* 144FBFBA0 */
#define g_144FBFBA4                      dword_140404A6C[19852366]                    /* 144FBFBA4 */
#define g_144FBFBA8                      dword_140404A6C[19852367]                    /* 144FBFBA8 */
#define g_144FBFBAC                      dword_140404A6C[19852368]                    /* 144FBFBAC */
#define g_144FBFBB0                      dword_140404A6C[19852369]                    /* 144FBFBB0 */
#define g_144FBFBB4                      dword_140404A6C[19852370]                    /* 144FBFBB4 */
#define g_144FBFBB8                      dword_140404A6C[19852371]                    /* 144FBFBB8 */
#define g_144FBFBBC                      dword_140404A6C[19852372]                    /* 144FBFBBC */
#define g_144FBFBC0                      dword_140404A6C[19852373]                    /* 144FBFBC0 */
#define g_144FBFBC4                      dword_140404A6C[19852374]                    /* 144FBFBC4 */
#define g_144FBFBE4                      dword_140404A6C[19852382]                    /* 144FBFBE4 */
#define g_144FEB3C8                      dword_140404A6C[19896919]                    /* 144FEB3C8 */
#define g_144FEB42C                      dword_140404A6C[19896944]                    /* 144FEB42C */
#define g_14500A3E0                      (*(float *)&dword_140404A6C[19928669])       /* 14500A3E0 */
#define g_14500A3E4                      (*(float *)&dword_140404A6C[19928670])       /* 14500A3E4 */
#define g_14500A3E8                      (*(float *)&dword_140404A6C[19928671])       /* 14500A3E8 */
#define g_14500A3EC                      (*(float *)&dword_140404A6C[19928672])       /* 14500A3EC */
#define g_14500A3F0                      (*(float *)&dword_140404A6C[19928673])       /* 14500A3F0 */
#define g_14500A3F4                      (*(float *)&dword_140404A6C[19928674])       /* 14500A3F4 */
#define g_14500A3F8                      (*(float *)&dword_140404A6C[19928675])       /* 14500A3F8 */
#define g_14500A3FC                      (*(float *)&dword_140404A6C[19928676])       /* 14500A3FC */
#define g_14500A400                      (*(float *)&dword_140404A6C[19928677])       /* 14500A400 */
#define g_14500A404                      (*(float *)&dword_140404A6C[19928678])       /* 14500A404 */
#define g_14500A408                      (*(float *)&dword_140404A6C[19928679])       /* 14500A408 */
#define g_14500A40C                      (*(float *)&dword_140404A6C[19928680])       /* 14500A40C */
#define g_14500A420                      (*(float *)&dword_140404A6C[19928685])       /* 14500A420 */
#define g_14500A424                      (*(float *)&dword_140404A6C[19928686])       /* 14500A424 */
#define g_14500A438                      (*(float *)&dword_140404A6C[19928691])       /* 14500A438 */
#define g_14500A43C                      (*(float *)&dword_140404A6C[19928692])       /* 14500A43C */
#define g_14500A440                      (*(float *)&dword_140404A6C[19928693])       /* 14500A440 */
#define g_14500A444                      (*(float *)&dword_140404A6C[19928694])       /* 14500A444 */
#define g_14500A448                      (*(float *)&dword_140404A6C[19928695])       /* 14500A448 */
#define g_14500A44C                      (*(float *)&dword_140404A6C[19928696])       /* 14500A44C */
#define g_14500A450                      (*(float *)&dword_140404A6C[19928697])       /* 14500A450 */
#define g_14500A454                      (*(float *)&dword_140404A6C[19928698])       /* 14500A454 */
#define g_14500A458                      dword_140404A6C[19928699]                    /* 14500A458 */
#define g_14500A45C                      dword_140404A6C[19928700]                    /* 14500A45C */
#define g_14500A460                      dword_140404A6C[19928701]                    /* 14500A460 */
#define g_14500A464                      dword_140404A6C[19928702]                    /* 14500A464 */
#define g_14500A468                      dword_140404A6C[19928703]                    /* 14500A468 */
#define g_14500A46C                      (*(float *)&dword_140404A6C[19928704])       /* 14500A46C */
#define g_14500A5C0                      dword_140404A6C[19928789]                    /* 14500A5C0 */
#define g_14500A5C4                      dword_140404A6C[19928790]                    /* 14500A5C4 */
#define g_14500A5C8                      dword_140404A6C[19928791]                    /* 14500A5C8 */
#define g_14500A5E4                      dword_140404A6C[19928798]                    /* 14500A5E4 */
#define g_14500A5E8                      dword_140404A6C[19928799]                    /* 14500A5E8 */
#define g_14500A5EC                      dword_140404A6C[19928800]                    /* 14500A5EC */
#define g_14500A5F0                      (*(_QWORD *)&dword_140404A6C[19928801])      /* 14500A5F0 */
#define g_14500A5F8                      dword_140404A6C[19928803]                    /* 14500A5F8 */
#define g_14500A614                      (*(_QWORD *)&dword_140404A6C[19928810])      /* 14500A614 */
#define g_14500A61C                      dword_140404A6C[19928812]                    /* 14500A61C */
#define g_14500A620                      dword_140404A6C[19928813]                    /* 14500A620 */
#define g_14500A624                      dword_140404A6C[19928814]                    /* 14500A624 */
#define g_14500A628                      dword_140404A6C[19928815]                    /* 14500A628 */
#define g_14500A644                      dword_140404A6C[19928822]                    /* 14500A644 */
#define g_14500A648                      dword_140404A6C[19928823]                    /* 14500A648 */
#define g_14500A64C                      dword_140404A6C[19928824]                    /* 14500A64C */
#define g_14500A650                      dword_140404A6C[19928825]                    /* 14500A650 */
#define g_14500A654                      dword_140404A6C[19928826]                    /* 14500A654 */
#define g_14500A658                      dword_140404A6C[19928827]                    /* 14500A658 */
#define g_14500A674                      dword_140404A6C[19928834]                    /* 14500A674 */
#define g_14500A678                      dword_140404A6C[19928835]                    /* 14500A678 */
#define g_14500A67C                      dword_140404A6C[19928836]                    /* 14500A67C */
#define g_14500A680                      dword_140404A6C[19928837]                    /* 14500A680 */
#define g_14500A684                      dword_140404A6C[19928838]                    /* 14500A684 */
#define g_14500A688                      dword_140404A6C[19928839]                    /* 14500A688 */
#define g_14500A698                      dword_140404A6C[19928843]                    /* 14500A698 */
#define g_14500A69C                      dword_140404A6C[19928844]                    /* 14500A69C */
#define g_14500A6E0                      (*(_QWORD *)&dword_140404A6C[19928861])      /* 14500A6E0 */
#define g_14500A6E4                      dword_140404A6C[19928862]                    /* 14500A6E4 */
#define g_14500A6F8                      (*(_QWORD *)&dword_140404A6C[19928867])      /* 14500A6F8 */
#define g_14500A6FC                      dword_140404A6C[19928868]                    /* 14500A6FC */
#define g_14500A700                      dword_140404A6C[19928869]                    /* 14500A700 */
#define g_14500A704                      dword_140404A6C[19928870]                    /* 14500A704 */
#define g_14500A708                      dword_140404A6C[19928871]                    /* 14500A708 */
#define g_14500A70C                      dword_140404A6C[19928872]                    /* 14500A70C */
#define g_14500A748                      dword_140404A6C[19928887]                    /* 14500A748 */
#define g_14500A74C                      dword_140404A6C[19928888]                    /* 14500A74C */
#define g_14500A750                      dword_140404A6C[19928889]                    /* 14500A750 */
#define g_14500A754                      dword_140404A6C[19928890]                    /* 14500A754 */
#define g_14500A758                      dword_140404A6C[19928891]                    /* 14500A758 */
#define g_14500A75C                      dword_140404A6C[19928892]                    /* 14500A75C */
#define g_14500A760                      dword_140404A6C[19928893]                    /* 14500A760 */
#define g_14500A764                      dword_140404A6C[19928894]                    /* 14500A764 */
#define g_14500A768                      dword_140404A6C[19928895]                    /* 14500A768 */
#define g_14500A76C                      dword_140404A6C[19928896]                    /* 14500A76C */
#define g_14500A770                      dword_140404A6C[19928897]                    /* 14500A770 */
#define g_14500A774                      dword_140404A6C[19928898]                    /* 14500A774 */
#define g_14500A778                      dword_140404A6C[19928899]                    /* 14500A778 */
#define g_14500A77C                      dword_140404A6C[19928900]                    /* 14500A77C */
#define g_14500A780                      dword_140404A6C[19928901]                    /* 14500A780 */
#define g_14500A784                      dword_140404A6C[19928902]                    /* 14500A784 */
#define g_14500A788                      dword_140404A6C[19928903]                    /* 14500A788 */
#define g_14500A78C                      dword_140404A6C[19928904]                    /* 14500A78C */
#define g_14500A790                      dword_140404A6C[19928905]                    /* 14500A790 */
#define g_14500A794                      dword_140404A6C[19928906]                    /* 14500A794 */
#define g_14500A798                      dword_140404A6C[19928907]                    /* 14500A798 */
#define g_14500A79C                      dword_140404A6C[19928908]                    /* 14500A79C */
#define g_14500A7A0                      dword_140404A6C[19928909]                    /* 14500A7A0 */
#define g_14500A7A4                      dword_140404A6C[19928910]                    /* 14500A7A4 */
#define g_14500A7A8                      dword_140404A6C[19928911]                    /* 14500A7A8 */
#define g_14500A7AC                      dword_140404A6C[19928912]                    /* 14500A7AC */
#define g_14500A7B0                      dword_140404A6C[19928913]                    /* 14500A7B0 */
#define g_14500A7B4                      dword_140404A6C[19928914]                    /* 14500A7B4 */
#define g_14500A7B8                      dword_140404A6C[19928915]                    /* 14500A7B8 */
#define g_14500A7BC                      dword_140404A6C[19928916]                    /* 14500A7BC */
#define g_14500A7C0                      dword_140404A6C[19928917]                    /* 14500A7C0 */
#define g_14500A7C4                      dword_140404A6C[19928918]                    /* 14500A7C4 */
#define g_14500A7C8                      dword_140404A6C[19928919]                    /* 14500A7C8 */
#define g_14500A7CC                      dword_140404A6C[19928920]                    /* 14500A7CC */
#define g_14500A7D0                      dword_140404A6C[19928921]                    /* 14500A7D0 */
#define g_14500CA14                      dword_140404A6C[19931114]                    /* 14500CA14 */
#define g_14500CA18                      dword_140404A6C[19931115]                    /* 14500CA18 */
#define g_14500CA1C                      dword_140404A6C[19931116]                    /* 14500CA1C */
#define g_14500CA20                      dword_140404A6C[19931117]                    /* 14500CA20 */
#define g_14500CA24                      dword_140404A6C[19931118]                    /* 14500CA24 */
#define g_14500CA28                      dword_140404A6C[19931119]                    /* 14500CA28 */
#define g_14500CA2C                      dword_140404A6C[19931120]                    /* 14500CA2C */
#define g_14500CA30                      dword_140404A6C[19931121]                    /* 14500CA30 */
#define g_14500CA34                      dword_140404A6C[19931122]                    /* 14500CA34 */
#define g_14500CA38                      dword_140404A6C[19931123]                    /* 14500CA38 */
#define g_14500CA3C                      dword_140404A6C[19931124]                    /* 14500CA3C */
#define g_14500CA40                      dword_140404A6C[19931125]                    /* 14500CA40 */
#define g_14500CA44                      dword_140404A6C[19931126]                    /* 14500CA44 */
#define g_14500CA48                      dword_140404A6C[19931127]                    /* 14500CA48 */
#define g_14500CA4C                      dword_140404A6C[19931128]                    /* 14500CA4C */
#define g_14500CA50                      dword_140404A6C[19931129]                    /* 14500CA50 */
#define g_14500CA54                      dword_140404A6C[19931130]                    /* 14500CA54 */
#define g_14500CA58                      dword_140404A6C[19931131]                    /* 14500CA58 */
#define g_14500CA5C                      dword_140404A6C[19931132]                    /* 14500CA5C */
#define g_14500CA60                      dword_140404A6C[19931133]                    /* 14500CA60 */
#define g_14500CA64                      dword_140404A6C[19931134]                    /* 14500CA64 */
#define g_14500CA68                      dword_140404A6C[19931135]                    /* 14500CA68 */
#define g_14500CA6C                      dword_140404A6C[19931136]                    /* 14500CA6C */
#define g_14500CA70                      dword_140404A6C[19931137]                    /* 14500CA70 */
#define g_14500CA74                      dword_140404A6C[19931138]                    /* 14500CA74 */
#define g_14500CA78                      dword_140404A6C[19931139]                    /* 14500CA78 */
#define g_14500CA7C                      dword_140404A6C[19931140]                    /* 14500CA7C */
#define g_14500CA80                      dword_140404A6C[19931141]                    /* 14500CA80 */
#define g_14500CA84                      dword_140404A6C[19931142]                    /* 14500CA84 */
#define g_14500CA88                      dword_140404A6C[19931143]                    /* 14500CA88 */
#define g_14500CA8C                      dword_140404A6C[19931144]                    /* 14500CA8C */
#define g_14500CA90                      dword_140404A6C[19931145]                    /* 14500CA90 */
#define g_14500CA94                      dword_140404A6C[19931146]                    /* 14500CA94 */
#define g_14500CA98                      dword_140404A6C[19931147]                    /* 14500CA98 */
#define g_14500CA9C                      dword_140404A6C[19931148]                    /* 14500CA9C */
#define g_14500CAA0                      dword_140404A6C[19931149]                    /* 14500CAA0 */
#define g_14500CAA4                      dword_140404A6C[19931150]                    /* 14500CAA4 */
#define g_14500CAA8                      dword_140404A6C[19931151]                    /* 14500CAA8 */
#define g_14500CAAC                      dword_140404A6C[19931152]                    /* 14500CAAC */
#define g_14500CAB0                      dword_140404A6C[19931153]                    /* 14500CAB0 */
#define g_14500CAB4                      dword_140404A6C[19931154]                    /* 14500CAB4 */
#define g_14500CAB8                      dword_140404A6C[19931155]                    /* 14500CAB8 */
#define g_14500CABC                      dword_140404A6C[19931156]                    /* 14500CABC */
#define g_14500CAC0                      dword_140404A6C[19931157]                    /* 14500CAC0 */
#define g_14500CAC4                      dword_140404A6C[19931158]                    /* 14500CAC4 */
#define g_14500CAC8                      dword_140404A6C[19931159]                    /* 14500CAC8 */
#define g_14500CACC                      dword_140404A6C[19931160]                    /* 14500CACC */
#define g_14500CAD0                      dword_140404A6C[19931161]                    /* 14500CAD0 */
#define g_14500CAD4                      dword_140404A6C[19931162]                    /* 14500CAD4 */
#define g_14500CAD8                      dword_140404A6C[19931163]                    /* 14500CAD8 */
#define g_14500CADC                      dword_140404A6C[19931164]                    /* 14500CADC */
#define g_14500CAE0                      dword_140404A6C[19931165]                    /* 14500CAE0 */
#define g_14500CAE4                      dword_140404A6C[19931166]                    /* 14500CAE4 */
#define g_14500CAE8                      dword_140404A6C[19931167]                    /* 14500CAE8 */
#define g_14500CAEC                      dword_140404A6C[19931168]                    /* 14500CAEC */
#define g_14500CAF0                      dword_140404A6C[19931169]                    /* 14500CAF0 */
#define g_14500CAF4                      dword_140404A6C[19931170]                    /* 14500CAF4 */
#define g_14500CAF8                      dword_140404A6C[19931171]                    /* 14500CAF8 */
#define g_14500CAFC                      dword_140404A6C[19931172]                    /* 14500CAFC */
#define g_14500CB00                      dword_140404A6C[19931173]                    /* 14500CB00 */
#define g_14500CB04                      dword_140404A6C[19931174]                    /* 14500CB04 */
#define g_14500CB08                      dword_140404A6C[19931175]                    /* 14500CB08 */
#define g_14500CB0C                      dword_140404A6C[19931176]                    /* 14500CB0C */
#define g_14500CB10                      dword_140404A6C[19931177]                    /* 14500CB10 */
#define g_14500CB14                      dword_140404A6C[19931178]                    /* 14500CB14 */
#define g_14500CB18                      dword_140404A6C[19931179]                    /* 14500CB18 */
#define g_14500CB1C                      dword_140404A6C[19931180]                    /* 14500CB1C */
#define g_14500CB20                      dword_140404A6C[19931181]                    /* 14500CB20 */
#define g_14500CB24                      dword_140404A6C[19931182]                    /* 14500CB24 */
#define g_14500CB28                      dword_140404A6C[19931183]                    /* 14500CB28 */
#define g_14500CB2C                      dword_140404A6C[19931184]                    /* 14500CB2C */
#define g_14500CB30                      dword_140404A6C[19931185]                    /* 14500CB30 */
#define g_14500CB34                      dword_140404A6C[19931186]                    /* 14500CB34 */
#define g_14500CB38                      dword_140404A6C[19931187]                    /* 14500CB38 */
#define g_14500CB3C                      dword_140404A6C[19931188]                    /* 14500CB3C */
#define g_14500CB40                      dword_140404A6C[19931189]                    /* 14500CB40 */
#define g_14500CB54                      dword_140404A6C[19931194]                    /* 14500CB54 */
#define g_14500CB58                      dword_140404A6C[19931195]                    /* 14500CB58 */
#define g_14500CB5C                      dword_140404A6C[19931196]                    /* 14500CB5C */
#define g_14500CB60                      dword_140404A6C[19931197]                    /* 14500CB60 */
#define g_14500CB64                      dword_140404A6C[19931198]                    /* 14500CB64 */
#define g_14500CB68                      dword_140404A6C[19931199]                    /* 14500CB68 */
#define g_14500CB6C                      dword_140404A6C[19931200]                    /* 14500CB6C */
#define g_14500CB70                      dword_140404A6C[19931201]                    /* 14500CB70 */
#define g_14500CB74                      dword_140404A6C[19931202]                    /* 14500CB74 */
#define g_14500CB78                      dword_140404A6C[19931203]                    /* 14500CB78 */
#define g_14500CB7C                      dword_140404A6C[19931204]                    /* 14500CB7C */
#define g_14500CB80                      dword_140404A6C[19931205]                    /* 14500CB80 */
#define g_14500CB84                      dword_140404A6C[19931206]                    /* 14500CB84 */
#define g_14500CB88                      dword_140404A6C[19931207]                    /* 14500CB88 */
#define g_14500CB8C                      dword_140404A6C[19931208]                    /* 14500CB8C */
#define g_14500CB90                      dword_140404A6C[19931209]                    /* 14500CB90 */
#define g_14500CB94                      dword_140404A6C[19931210]                    /* 14500CB94 */
#define g_14500CB98                      dword_140404A6C[19931211]                    /* 14500CB98 */
#define g_14500CB9C                      dword_140404A6C[19931212]                    /* 14500CB9C */
#define g_14500CBA0                      dword_140404A6C[19931213]                    /* 14500CBA0 */
#define g_14500CBA4                      dword_140404A6C[19931214]                    /* 14500CBA4 */
#define g_14500CBAC                      dword_140404A6C[19931216]                    /* 14500CBAC */
#define g_145098C00                      dword_140404A6C[20074597]                    /* 145098C00 */
#define g_145098C40                      dword_140404A6C[20074613]                    /* 145098C40 */
#define g_145098C48                      dword_140404A6C[20074615]                    /* 145098C48 */
#define g_145098C50                      dword_140404A6C[20074617]                    /* 145098C50 */
#define g_145098C58                      dword_140404A6C[20074619]                    /* 145098C58 */
#define g_145098C60                      dword_140404A6C[20074621]                    /* 145098C60 */
#define g_145098C68                      dword_140404A6C[20074623]                    /* 145098C68 */
#define g_145098C88                      dword_140404A6C[20074631]                    /* 145098C88 */
#define g_145098C90                      dword_140404A6C[20074633]                    /* 145098C90 */
#define g_145098C98                      dword_140404A6C[20074635]                    /* 145098C98 */
#define g_145098CA8                      dword_140404A6C[20074639]                    /* 145098CA8 */
#define g_145098CB0                      dword_140404A6C[20074641]                    /* 145098CB0 */
#define g_145098CB8                      dword_140404A6C[20074643]                    /* 145098CB8 */
#define g_145098CC0                      dword_140404A6C[20074645]                    /* 145098CC0 */
#define g_145098CC4                      dword_140404A6C[20074646]                    /* 145098CC4 */
#define g_145098CC8                      dword_140404A6C[20074647]                    /* 145098CC8 */
#define g_145098CD8                      dword_140404A6C[20074651]                    /* 145098CD8 */
#define g_145098CE0                      dword_140404A6C[20074653]                    /* 145098CE0 */
#define g_145F18D80                      dword_140404A6C[23875781]                    /* 145F18D80 */
#define g_145F18D84                      dword_140404A6C[23875782]                    /* 145F18D84 */
#define g_145F18D88                      dword_140404A6C[23875783]                    /* 145F18D88 */
#define g_145F18D8C                      dword_140404A6C[23875784]                    /* 145F18D8C */
#define g_145F18D90                      dword_140404A6C[23875785]                    /* 145F18D90 */
#define g_145F18D94                      dword_140404A6C[23875786]                    /* 145F18D94 */
#define g_145F18D98                      dword_140404A6C[23875787]                    /* 145F18D98 */
#define g_145F18D9C                      dword_140404A6C[23875788]                    /* 145F18D9C */
#define g_145F18DA0                      dword_140404A6C[23875789]                    /* 145F18DA0 */
#define g_145F54C00                      dword_140404A6C[23937125]                    /* 145F54C00 */
#define g_149F54C00                      dword_140404A6C[40714341]                    /* 149F54C00 */
#define g_149F54C04                      dword_140404A6C[40714342]                    /* 149F54C04 */
#define g_149F54C20                      dword_140404A6C[40714349]                    /* 149F54C20 */
#define g_149F55020                      dword_140404A6C[40714605]                    /* 149F55020 */
#define g_14DF55020                      dword_140404A6C[57491821]                    /* 14DF55020 */
#define g_150F55020                      dword_140404A6C[70074733]                    /* 150F55020 */
#define g_150F55024                      dword_140404A6C[70074734]                    /* 150F55024 */
#define g_150F59028                      dword_140404A6C[70078831]                    /* 150F59028 */
#define g_150F61024                      dword_140404A6C[70087022]                    /* 150F61024 */
#define g_150F61028                      dword_140404A6C[70087023]                    /* 150F61028 */
#define g_150F61030                      dword_140404A6C[70087025]                    /* 150F61030 */
#define g_150F61034                      dword_140404A6C[70087026]                    /* 150F61034 */
#define g_150F61038                      dword_140404A6C[70087027]                    /* 150F61038 */
#define g_150F61040                      dword_140404A6C[70087029]                    /* 150F61040 */
#define g_150F61084                      dword_140404A6C[70087046]                    /* 150F61084 */
#define g_150F61088                      dword_140404A6C[70087047]                    /* 150F61088 */
#define g_150F610CC                      dword_140404A6C[70087064]                    /* 150F610CC */
#define menu_last_widget                 dword_140404A6C[70087065]                    /* 150F610D0 */
#define g_150F610D4                      dword_140404A6C[70087066]                    /* 150F610D4 */
#define menu_x                           (*(float *)&dword_140404A6C[70087067])       /* 150F610D8 where the next menu widget goes */
#define menu_y                           (*(float *)&dword_140404A6C[70087068])       /* 150F610DC */
#define menu_item_width                  dword_140404A6C[70087069]                    /* 150F610E0 */
#define menu_item_height                 dword_140404A6C[70087070]                    /* 150F610E4 */
#define g_150F610E8                      dword_140404A6C[70087071]                    /* 150F610E8 */
#define g_150F610EC                      (*(float *)&dword_140404A6C[70087072])       /* 150F610EC */
#define g_150F610F0                      dword_140404A6C[70087073]                    /* 150F610F0 */
#define g_150F610F4                      dword_140404A6C[70087074]                    /* 150F610F4 */
#define g_150F610F8                      dword_140404A6C[70087075]                    /* 150F610F8 */
#define g_150F610FC                      dword_140404A6C[70087076]                    /* 150F610FC */
#define g_150F61100                      dword_140404A6C[70087077]                    /* 150F61100 */
#define g_150F61104                      dword_140404A6C[70087078]                    /* 150F61104 */
#define g_150F61108                      dword_140404A6C[70087079]                    /* 150F61108 */
#define g_150F6110C                      dword_140404A6C[70087080]                    /* 150F6110C */
#define g_150F61110                      (*(_QWORD *)&dword_140404A6C[70087081])      /* 150F61110 */
#define menu_vertical                    dword_140404A6C[70087083]                    /* 150F61118 nonzero: widgets stack downward, else left to right */
#define g_150F6111C                      dword_140404A6C[70087084]                    /* 150F6111C */
#define g_150F61120                      dword_140404A6C[70087085]                    /* 150F61120 */
#define menu_row_height                  (*(float *)&dword_140404A6C[70087086])       /* 150F61124 */
#define g_150F61128                      dword_140404A6C[70087087]                    /* 150F61128 */
#define g_150F6112C                      dword_140404A6C[70087088]                    /* 150F6112C */
#define g_150F61130                      dword_140404A6C[70087089]                    /* 150F61130 */
#define g_150F61134                      dword_140404A6C[70087090]                    /* 150F61134 */
#define g_150F61138                      dword_140404A6C[70087091]                    /* 150F61138 */
#define g_150F6113C                      dword_140404A6C[70087092]                    /* 150F6113C */
#define g_150F61140                      dword_140404A6C[70087093]                    /* 150F61140 */
#define g_150F61144                      dword_140404A6C[70087094]                    /* 150F61144 */
#define g_150F61148                      (*(_OWORD *)&dword_140404A6C[70087095])      /* 150F61148 */
#define g_150F61158                      (*(_OWORD *)&dword_140404A6C[70087099])      /* 150F61158 */
#define g_150F61168                      dword_140404A6C[70087103]                    /* 150F61168 */
#define g_150F6116C                      dword_140404A6C[70087104]                    /* 150F6116C */
#define g_150F61170                      dword_140404A6C[70087105]                    /* 150F61170 */
#define g_150F61174                      dword_140404A6C[70087106]                    /* 150F61174 */
#define g_150F61178                      dword_140404A6C[70087107]                    /* 150F61178 */
#define g_150F6117C                      dword_140404A6C[70087108]                    /* 150F6117C */
#define g_150F61180                      dword_140404A6C[70087109]                    /* 150F61180 */
#define g_150F61184                      dword_140404A6C[70087110]                    /* 150F61184 */
#define g_150F61188                      dword_140404A6C[70087111]                    /* 150F61188 */
#define g_150F6118C                      dword_140404A6C[70087112]                    /* 150F6118C */
#define g_150F61190                      dword_140404A6C[70087113]                    /* 150F61190 */
#define g_150F61194                      dword_140404A6C[70087114]                    /* 150F61194 */
#define g_150F61198                      dword_140404A6C[70087115]                    /* 150F61198 */
#define g_150F6119C                      dword_140404A6C[70087116]                    /* 150F6119C */
#define g_150F611A4                      dword_140404A6C[70087118]                    /* 150F611A4 */
#define g_150F611B4                      dword_140404A6C[70087122]                    /* 150F611B4 */
#define g_150F611E8                      dword_140404A6C[70087135]                    /* 150F611E8 */
#define g_150F61378                      dword_140404A6C[70087235]                    /* 150F61378 */
#define g_150FDB190                      dword_140404A6C[70212041]                    /* 150FDB190 */
#define g_150FDB194                      dword_140404A6C[70212042]                    /* 150FDB194 */
#define g_150FDB19C                      dword_140404A6C[70212044]                    /* 150FDB19C */
#define g_150FDB1B0                      dword_140404A6C[70212049]                    /* 150FDB1B0 */
#define g_151028194                      dword_140404A6C[70290890]                    /* 151028194 */
#define g_151028198                      dword_140404A6C[70290891]                    /* 151028198 */
#define g_15102819C                      dword_140404A6C[70290892]                    /* 15102819C */
#define g_1510281A0                      dword_140404A6C[70290893]                    /* 1510281A0 */
#define g_1510281A8                      dword_140404A6C[70290895]                    /* 1510281A8 */
#define g_151028320                      dword_140404A6C[70290989]                    /* 151028320 */
#define g_151040998                      dword_140404A6C[70315979]                    /* 151040998 */
#define g_1510409A0                      dword_140404A6C[70315981]                    /* 1510409A0 */
#define g_1510411AC                      dword_140404A6C[70316496]                    /* 1510411AC */
#define g_1510419C0                      dword_140404A6C[70317013]                    /* 1510419C0 */
#define g_151041AA0                      dword_140404A6C[70317069]                    /* 151041AA0 */
#define g_151041BC0                      dword_140404A6C[70317141]                    /* 151041BC0 */
#define g_151041DC0                      dword_140404A6C[70317269]                    /* 151041DC0 */
#define g_1510425C0                      (*(float *)&dword_140404A6C[70317781])       /* 1510425C0 */
#define g_1510425C4                      (*(float *)&dword_140404A6C[70317782])       /* 1510425C4 */
#define g_1510425D0                      (*(_OWORD *)&dword_140404A6C[70317785])      /* 1510425D0 */
#define g_1510425E0                      (*(_OWORD *)&dword_140404A6C[70317789])      /* 1510425E0 */
#define g_1510425F0                      (*(_OWORD *)&dword_140404A6C[70317793])      /* 1510425F0 */
#define g_151042600                      (*(_OWORD *)&dword_140404A6C[70317797])      /* 151042600 */
#define g_151042610                      (*(_OWORD *)&dword_140404A6C[70317801])      /* 151042610 */
#define g_151042620                      (*(_OWORD *)&dword_140404A6C[70317805])      /* 151042620 */
#define g_151042630                      (*(_OWORD *)&dword_140404A6C[70317809])      /* 151042630 */
#define g_151042640                      (*(_OWORD *)&dword_140404A6C[70317813])      /* 151042640 */
#define g_151042650                      dword_140404A6C[70317817]                    /* 151042650 */
#define g_151042658                      dword_140404A6C[70317819]                    /* 151042658 */
#define g_15104265C                      (*(_OWORD *)&dword_140404A6C[70317820])      /* 15104265C */
#define g_15104266C                      (*(_OWORD *)&dword_140404A6C[70317824])      /* 15104266C */
#define g_15104267C                      (*(_OWORD *)&dword_140404A6C[70317828])      /* 15104267C */
#define g_15104268C                      (*(_OWORD *)&dword_140404A6C[70317832])      /* 15104268C */
#define g_15104269C                      (*(_OWORD *)&dword_140404A6C[70317836])      /* 15104269C */
#define g_1510426AC                      (*(_OWORD *)&dword_140404A6C[70317840])      /* 1510426AC */
#define g_1510426BC                      (*(_OWORD *)&dword_140404A6C[70317844])      /* 1510426BC */
#define g_1510426CC                      (*(_OWORD *)&dword_140404A6C[70317848])      /* 1510426CC */
#define g_1510426DC                      (*(_OWORD *)&dword_140404A6C[70317852])      /* 1510426DC */
#define g_1510426EC                      dword_140404A6C[70317856]                    /* 1510426EC */
#define g_1510426F0                      dword_140404A6C[70317857]                    /* 1510426F0 */
#define g_1510426F4                      dword_140404A6C[70317858]                    /* 1510426F4 */
#define g_1510426F8                      dword_140404A6C[70317859]                    /* 1510426F8 */
#define g_1510426FC                      dword_140404A6C[70317860]                    /* 1510426FC */
#define g_151042704                      (*(float *)&dword_140404A6C[70317862])       /* 151042704 */
#define g_151042708                      (*(float *)&dword_140404A6C[70317863])       /* 151042708 */
#define g_15104270C                      dword_140404A6C[70317864]                    /* 15104270C */
#define g_151042810                      dword_140404A6C[70317929]                    /* 151042810 */
#define g_151042894                      dword_140404A6C[70317962]                    /* 151042894 */
#define g_151042A1C                      (*(float *)&dword_140404A6C[70318060])       /* 151042A1C */
#define g_151042A20                      (*(float *)&dword_140404A6C[70318061])       /* 151042A20 */
#define g_151042A24                      dword_140404A6C[70318062]                    /* 151042A24 */
#define g_151042A28                      dword_140404A6C[70318063]                    /* 151042A28 */
#define g_151042A2C                      dword_140404A6C[70318064]                    /* 151042A2C */
#define g_151042A30                      dword_140404A6C[70318065]                    /* 151042A30 */
#define g_151042A34                      dword_140404A6C[70318066]                    /* 151042A34 */
#define g_151042A38                      dword_140404A6C[70318067]                    /* 151042A38 */
#define g_151042A3C                      dword_140404A6C[70318068]                    /* 151042A3C */
#define g_151042A40                      dword_140404A6C[70318069]                    /* 151042A40 */
#define g_151046A40                      dword_140404A6C[70322165]                    /* 151046A40 */
#define g_15104AA10                      dword_140404A6C[70326249]                    /* 15104AA10 */
#define g_15104AA40                      dword_140404A6C[70326261]                    /* 15104AA40 */
#define g_15104AA44                      dword_140404A6C[70326262]                    /* 15104AA44 */
#define g_15104AA48                      dword_140404A6C[70326263]                    /* 15104AA48 */
#define g_15104AA4C                      dword_140404A6C[70326264]                    /* 15104AA4C */
#define g_15104AE4C                      dword_140404A6C[70326520]                    /* 15104AE4C */
#define g_15104AE50                      dword_140404A6C[70326521]                    /* 15104AE50 */
#define g_15104AE60                      dword_140404A6C[70326525]                    /* 15104AE60 */
#define g_15104AE64                      dword_140404A6C[70326526]                    /* 15104AE64 */
#define g_15104AE68                      dword_140404A6C[70326527]                    /* 15104AE68 */
#define g_15104AE6C                      dword_140404A6C[70326528]                    /* 15104AE6C */
#define g_15104AFA4                      dword_140404A6C[70326606]                    /* 15104AFA4 */
#define g_151069740                      dword_140404A6C[70357813]                    /* 151069740 */
#define g_151069750                      dword_140404A6C[70357817]                    /* 151069750 */
#define g_151089740                      dword_140404A6C[70390581]                    /* 151089740 */
#define g_151089750                      dword_140404A6C[70390585]                    /* 151089750 */
#define g_1510AB760                      dword_140404A6C[70425405]                    /* 1510AB760 */
#define g_1510AB764                      dword_140404A6C[70425406]                    /* 1510AB764 */
#define g_1511AB76C                      dword_140404A6C[70687552]                    /* 1511AB76C */
#define g_1512DB764                      dword_140404A6C[70998846]                    /* 1512DB764 */
#define g_1512DB768                      dword_140404A6C[70998847]                    /* 1512DB768 */
#define g_1512DB76C                      dword_140404A6C[70998848]                    /* 1512DB76C */
#define g_1512DB774                      dword_140404A6C[70998850]                    /* 1512DB774 */
#define g_1512DF768                      dword_140404A6C[71002943]                    /* 1512DF768 */
#define g_1512DF76C                      dword_140404A6C[71002944]                    /* 1512DF76C */
#define g_1512DF770                      dword_140404A6C[71002945]                    /* 1512DF770 */
#define g_1512DF774                      dword_140404A6C[71002946]                    /* 1512DF774 */
#define g_15131B768                      dword_140404A6C[71064383]                    /* 15131B768 */
#define g_15131C768                      dword_140404A6C[71065407]                    /* 15131C768 */
#define g_15132B768                      dword_140404A6C[71080767]                    /* 15132B768 */
#define g_15133B768                      dword_140404A6C[71097151]                    /* 15133B768 */
#define g_15133C768                      dword_140404A6C[71098175]                    /* 15133C768 */
#define g_15134B76C                      dword_140404A6C[71113536]                    /* 15134B76C */
#define g_15137B768                      dword_140404A6C[71162687]                    /* 15137B768 */
#define g_15138B768                      dword_140404A6C[71179071]                    /* 15138B768 */
#define g_15138B76C                      dword_140404A6C[71179072]                    /* 15138B76C */
#define g_15138B770                      dword_140404A6C[71179073]                    /* 15138B770 */
#define g_1513BB76C                      dword_140404A6C[71228224]                    /* 1513BB76C */
#define g_1513BB770                      dword_140404A6C[71228225]                    /* 1513BB770 */
#define g_1513EB770                      dword_140404A6C[71277377]                    /* 1513EB770 */
#define g_15143B770                      dword_140404A6C[71359297]                    /* 15143B770 */
#define g_15146B770                      dword_140404A6C[71408449]                    /* 15146B770 */
#define g_15146B77C                      dword_140404A6C[71408452]                    /* 15146B77C */
#define g_15155B7B0                      dword_140404A6C[71654225]                    /* 15155B7B0 */
#define g_15155CFB4                      dword_140404A6C[71655762]                    /* 15155CFB4 */
#define g_15155CFD4                      dword_140404A6C[71655770]                    /* 15155CFD4 */
#define world_program                    dword_140404A6C[71737685]                    /* 1515ACFC0 */
#define world_vertex_shader              dword_140404A6C[71737686]                    /* 1515ACFC4 */
#define world_u_ooresolution             dword_140404A6C[71737690]                    /* 1515ACFD4 */
#define world_u_viewposition             dword_140404A6C[71737691]                    /* 1515ACFD8 */
#define world_u_flags                    dword_140404A6C[71737693]                    /* 1515ACFE0 */
#define world_u_lightdirection           dword_140404A6C[71737695]                    /* 1515ACFE8 */
#define world_u_isreflection             dword_140404A6C[71737696]                    /* 1515ACFEC */
#define world_u_planeposition            dword_140404A6C[71737697]                    /* 1515ACFF0 */
#define world_u_planenormal              dword_140404A6C[71737698]                    /* 1515ACFF4 */
#define world_u_modelviewprojectionmatrix dword_140404A6C[71737699]                    /* 1515ACFF8 */
#define world_u_lightambient             dword_140404A6C[71737700]                    /* 1515ACFFC */
#define world_u_lightdiffuse             dword_140404A6C[71737701]                    /* 1515AD000 */
#define world_u_tex_color                dword_140404A6C[71737702]                    /* 1515AD004 */
#define world_u_tex_shadowmap            dword_140404A6C[71737703]                    /* 1515AD008 */
#define world_u_tex_material             dword_140404A6C[71737704]                    /* 1515AD00C */
#define world_u_tex_cubemap              dword_140404A6C[71737705]                    /* 1515AD010 */
#define world_u_tex_atlas_color          dword_140404A6C[71737706]                    /* 1515AD014 */
#define world_u_tex_atlas_material       dword_140404A6C[71737707]                    /* 1515AD018 */
#define world_u_clipplane                dword_140404A6C[71737724]                    /* 1515AD05C */
#define object_program                   dword_140404A6C[71737745]                    /* 1515AD0B0 */
#define object_u_ooresolution            dword_140404A6C[71737750]                    /* 1515AD0C4 */
#define object_u_viewposition            dword_140404A6C[71737751]                    /* 1515AD0C8 */
#define object_u_lightdirection          dword_140404A6C[71737755]                    /* 1515AD0D8 */
#define object_u_isreflection            dword_140404A6C[71737756]                    /* 1515AD0DC */
#define object_u_planeposition           dword_140404A6C[71737757]                    /* 1515AD0E0 */
#define object_u_planenormal             dword_140404A6C[71737758]                    /* 1515AD0E4 */
#define object_u_modelviewprojectionmatrix dword_140404A6C[71737759]                    /* 1515AD0E8 */
#define object_u_lightambient            dword_140404A6C[71737760]                    /* 1515AD0EC */
#define object_u_lightdiffuse            dword_140404A6C[71737761]                    /* 1515AD0F0 */
#define object_u_tex_color               dword_140404A6C[71737762]                    /* 1515AD0F4 */
#define object_u_tex_shadowmap           dword_140404A6C[71737763]                    /* 1515AD0F8 */
#define object_u_tex_material            dword_140404A6C[71737764]                    /* 1515AD0FC */
#define object_u_tex_cubemap             dword_140404A6C[71737765]                    /* 1515AD100 */
#define object_u_flags                   dword_140404A6C[71737766]                    /* 1515AD104 */
#define object_u_clipplane               dword_140404A6C[71737784]                    /* 1515AD14C */
#define lit_program                      dword_140404A6C[71737805]                    /* 1515AD1A0 */
#define lit_u_ooresolution               dword_140404A6C[71737810]                    /* 1515AD1B4 */
#define lit_u_viewposition               dword_140404A6C[71737811]                    /* 1515AD1B8 */
#define lit_u_lightdirection             dword_140404A6C[71737815]                    /* 1515AD1C8 */
#define lit_u_modelviewprojectionmatrix  dword_140404A6C[71737819]                    /* 1515AD1D8 */
#define lit_u_lightambient               dword_140404A6C[71737820]                    /* 1515AD1DC */
#define lit_u_lightdiffuse               dword_140404A6C[71737821]                    /* 1515AD1E0 */
#define lit_u_tex_color                  dword_140404A6C[71737822]                    /* 1515AD1E4 */
#define lit_u_tex_cubemap                dword_140404A6C[71737823]                    /* 1515AD1E8 */
#define model_program                    dword_140404A6C[71737865]                    /* 1515AD290 */
#define model_u_ooresolution             dword_140404A6C[71737870]                    /* 1515AD2A4 */
#define model_u_viewposition             dword_140404A6C[71737871]                    /* 1515AD2A8 */
#define model_u_objposition              dword_140404A6C[71737872]                    /* 1515AD2AC */
#define model_u_objorientation           dword_140404A6C[71737873]                    /* 1515AD2B0 */
#define model_u_modelviewprojectionmatrix dword_140404A6C[71737874]                    /* 1515AD2B4 */
#define model_u_lightdirection           dword_140404A6C[71737875]                    /* 1515AD2B8 */
#define model_u_lightambient             dword_140404A6C[71737876]                    /* 1515AD2BC */
#define model_u_lightdiffuse             dword_140404A6C[71737877]                    /* 1515AD2C0 */
#define model_u_viewdirection            dword_140404A6C[71737878]                    /* 1515AD2C4 */
#define model_u_tex_color                dword_140404A6C[71737882]                    /* 1515AD2D4 */
#define model_u_tex_shadowmap            dword_140404A6C[71737883]                    /* 1515AD2D8 */
#define model_u_tex_cubemap              dword_140404A6C[71737884]                    /* 1515AD2DC */
#define model_u_flags                    dword_140404A6C[71737885]                    /* 1515AD2E0 */
#define skin_program                     dword_140404A6C[71737925]                    /* 1515AD380 */
#define skin_u_boneorgposition           dword_140404A6C[71737938]                    /* 1515AD3B4 */
#define skin_u_boneposition              dword_140404A6C[71737939]                    /* 1515AD3B8 */
#define skin_u_boneorientation           dword_140404A6C[71737940]                    /* 1515AD3BC */
#define land_mask_program                dword_140404A6C[71737985]                    /* 1515AD470 */
#define land_mask_u_modelviewprojectionmatrix dword_140404A6C[71737990]                    /* 1515AD484 */
#define land_mask_u_modelviewmatrix      dword_140404A6C[71737991]                    /* 1515AD488 */
#define land_mask_u_land_usemask         dword_140404A6C[71738025]                    /* 1515AD510 */
#define land_mask_u_tex_mask             dword_140404A6C[71738027]                    /* 1515AD518 */
#define sky_program                      dword_140404A6C[71738045]                    /* 1515AD560 */
#define sky_u_atmoconstant               dword_140404A6C[71738050]                    /* 1515AD574 */
#define sky_u_atmowavelength             dword_140404A6C[71738051]                    /* 1515AD578 */
#define sky_u_worldposition              dword_140404A6C[71738052]                    /* 1515AD57C */
#define sky_u_ooresolution               dword_140404A6C[71738053]                    /* 1515AD580 */
#define sky_u_lightdirection             dword_140404A6C[71738054]                    /* 1515AD584 */
#define sky_u_modelviewprojectionmatrix  dword_140404A6C[71738055]                    /* 1515AD588 */
#define sky_u_numofsamples               dword_140404A6C[71738056]                    /* 1515AD58C */
#define sky_u_tex_depth                  dword_140404A6C[71738058]                    /* 1515AD594 */
#define sky_u_flags                      dword_140404A6C[71738086]                    /* 1515AD604 */
#define blur_program                     dword_140404A6C[71738105]                    /* 1515AD650 */
#define blur_u_ooresolution              dword_140404A6C[71738110]                    /* 1515AD664 */
#define blur_u_sampledir                 dword_140404A6C[71738111]                    /* 1515AD668 */
#define blur_u_blurfilter                dword_140404A6C[71738112]                    /* 1515AD66C */
#define blur_u_blurfilter2               dword_140404A6C[71738113]                    /* 1515AD670 */
#define blur_u_modelviewprojectionmatrix dword_140404A6C[71738114]                    /* 1515AD674 */
#define blur_u_tex_color                 dword_140404A6C[71738118]                    /* 1515AD684 */
#define terrain_program                  dword_140404A6C[71738165]                    /* 1515AD740 */
#define terrain_u_lightdirection         dword_140404A6C[71738170]                    /* 1515AD754 */
#define terrain_u_lightambient           dword_140404A6C[71738171]                    /* 1515AD758 */
#define terrain_u_lightdiffuse           dword_140404A6C[71738172]                    /* 1515AD75C */
#define terrain_u_viewposition           dword_140404A6C[71738173]                    /* 1515AD760 */
#define terrain_u_modelviewprojectionmatrix dword_140404A6C[71738174]                    /* 1515AD764 */
#define terrain_u_tex_normal             dword_140404A6C[71738178]                    /* 1515AD774 */
#define terrain_u_tex_detail             dword_140404A6C[71738179]                    /* 1515AD778 */
#define terrain_u_tex_color              dword_140404A6C[71738180]                    /* 1515AD77C */
#define terrain_u_land_usemask           dword_140404A6C[71738205]                    /* 1515AD7E0 */
#define terrain_u_tex_mask               dword_140404A6C[71738210]                    /* 1515AD7F4 */
#define terrain_u_tex_shadow             dword_140404A6C[71738211]                    /* 1515AD7F8 */
#define shadow_program                   dword_140404A6C[71738225]                    /* 1515AD830 */
#define shadow_u_modelmatrix             dword_140404A6C[71738230]                    /* 1515AD844 */
#define shadow_u_modelviewprojectionmatrix dword_140404A6C[71738231]                    /* 1515AD848 */
#define shadow_u_lightdirection          dword_140404A6C[71738232]                    /* 1515AD84C */
#define shadow_u_shadowlength            dword_140404A6C[71738233]                    /* 1515AD850 */
#define shadow_u_projectionmatrix        dword_140404A6C[71738234]                    /* 1515AD854 */
#define shadow_u_viewmatrix              dword_140404A6C[71738235]                    /* 1515AD858 */
#define texture_lod_program              dword_140404A6C[71738285]                    /* 1515AD920 */
#define texture_lod_u_modelviewprojectionmatrix dword_140404A6C[71738294]                    /* 1515AD944 */
#define texture_lod_u_texlod             dword_140404A6C[71738298]                    /* 1515AD954 */
#define texture_lod_u_tex_color          dword_140404A6C[71738302]                    /* 1515AD964 */
#define hdr_program                      dword_140404A6C[71738345]                    /* 1515ADA10 */
#define hdr_u_tex_hdrcolor               dword_140404A6C[71738358]                    /* 1515ADA44 */
#define hdr_u_tex_hdrbloom               dword_140404A6C[71738359]                    /* 1515ADA48 */
#define water_program                    dword_140404A6C[71738405]                    /* 1515ADB00 */
#define water_u_modelviewprojectionmatrix dword_140404A6C[71738442]                    /* 1515ADB94 */
#define water_u_flags                    dword_140404A6C[71738446]                    /* 1515ADBA4 */
#define water_u_tex_color                dword_140404A6C[71738447]                    /* 1515ADBA8 */
#define water_u_texturematrix            dword_140404A6C[71738463]                    /* 1515ADBE8 */
#define water_u_waterangle               dword_140404A6C[71738464]                    /* 1515ADBEC */
#define g_1515AEDC4                      dword_140404A6C[71739606]                    /* 1515AEDC4 */
#define g_1515B0BBC                      dword_140404A6C[71741524]                    /* 1515B0BBC */
#define g_1515B0BC0                      dword_140404A6C[71741525]                    /* 1515B0BC0 */
#define g_1515F0C00                      dword_140404A6C[71807077]                    /* 1515F0C00 */
#define g_151600C40                      dword_140404A6C[71823477]                    /* 151600C40 */
#define g_151620C40                      (*(_QWORD *)&dword_140404A6C[71856245])      /* 151620C40 */
#define g_151620C60                      dword_140404A6C[71856253]                    /* 151620C60 */
#define g_151620C64                      dword_140404A6C[71856254]                    /* 151620C64 */
#define g_151620C94                      dword_140404A6C[71856266]                    /* 151620C94 */
#define g_151620C98                      dword_140404A6C[71856267]                    /* 151620C98 */
#define g_151620C9C                      dword_140404A6C[71856268]                    /* 151620C9C */
#define g_151620CA0                      dword_140404A6C[71856269]                    /* 151620CA0 */
#define g_151620CA4                      dword_140404A6C[71856270]                    /* 151620CA4 */
#define g_151620CA8                      dword_140404A6C[71856271]                    /* 151620CA8 */
#define g_151620CAC                      dword_140404A6C[71856272]                    /* 151620CAC */
#define g_151620CB8                      dword_140404A6C[71856275]                    /* 151620CB8 */
#define g_151620CC0                      dword_140404A6C[71856277]                    /* 151620CC0 */
#define g_151620CC8                      dword_140404A6C[71856279]                    /* 151620CC8 */
#define g_151620CCC                      dword_140404A6C[71856280]                    /* 151620CCC */
#define g_151620CD0                      dword_140404A6C[71856281]                    /* 151620CD0 */
#define g_151620CE4                      dword_140404A6C[71856286]                    /* 151620CE4 */
#define g_151620CE8                      dword_140404A6C[71856287]                    /* 151620CE8 */
#define g_151620CEC                      dword_140404A6C[71856288]                    /* 151620CEC */
#define g_151620CF0                      dword_140404A6C[71856289]                    /* 151620CF0 */
#define g_151620CF8                      dword_140404A6C[71856291]                    /* 151620CF8 */
#define g_151620CFC                      dword_140404A6C[71856292]                    /* 151620CFC */
#define g_151620D00                      dword_140404A6C[71856293]                    /* 151620D00 */
#define g_151620D04                      dword_140404A6C[71856294]                    /* 151620D04 */
#define g_151620D08                      dword_140404A6C[71856295]                    /* 151620D08 */
#define g_151620D0C                      dword_140404A6C[71856296]                    /* 151620D0C */
#define g_151620D10                      dword_140404A6C[71856297]                    /* 151620D10 */
#define g_151620D14                      dword_140404A6C[71856298]                    /* 151620D14 */
#define g_151620D24                      dword_140404A6C[71856302]                    /* 151620D24 */
#define g_151620D80                      dword_140404A6C[71856325]                    /* 151620D80 */
#define g_151620D94                      dword_140404A6C[71856330]                    /* 151620D94 */
#define g_151620D98                      dword_140404A6C[71856331]                    /* 151620D98 */
#define g_151620D9C                      dword_140404A6C[71856332]                    /* 151620D9C */
#define g_151620DB0                      dword_140404A6C[71856337]                    /* 151620DB0 */
#define g_151620DB8                      (*(_QWORD *)&dword_140404A6C[71856339])      /* 151620DB8 */
#define g_151620DBC                      dword_140404A6C[71856340]                    /* 151620DBC */
#define g_151620DC4                      dword_140404A6C[71856342]                    /* 151620DC4 */
#define g_151620DC8                      dword_140404A6C[71856343]                    /* 151620DC8 */
#define g_151620E14                      dword_140404A6C[71856362]                    /* 151620E14 */
#define g_151620E18                      dword_140404A6C[71856363]                    /* 151620E18 */
#define g_151620E28                      dword_140404A6C[71856367]                    /* 151620E28 */
#define g_151620E2C                      dword_140404A6C[71856368]                    /* 151620E2C */
#define g_151620E30                      dword_140404A6C[71856369]                    /* 151620E30 */
#define g_151620E34                      dword_140404A6C[71856370]                    /* 151620E34 */
#define g_151620E3C                      dword_140404A6C[71856372]                    /* 151620E3C */
#define g_151622334                      dword_140404A6C[71857714]                    /* 151622334 */
#define g_151622338                      dword_140404A6C[71857715]                    /* 151622338 */
#define g_151622454                      dword_140404A6C[71857786]                    /* 151622454 */
#define g_15162245C                      dword_140404A6C[71857788]                    /* 15162245C */
#define g_151622460                      dword_140404A6C[71857789]                    /* 151622460 */
#define g_1516224B8                      dword_140404A6C[71857811]                    /* 1516224B8 */
#define g_15162251C                      dword_140404A6C[71857836]                    /* 15162251C */
#define g_151622580                      dword_140404A6C[71857861]                    /* 151622580 */
#define g_1516225E4                      dword_140404A6C[71857886]                    /* 1516225E4 */
#define g_151622648                      dword_140404A6C[71857911]                    /* 151622648 */
#define g_1516226AC                      dword_140404A6C[71857936]                    /* 1516226AC */
#define g_151622774                      dword_140404A6C[71857986]                    /* 151622774 */
#define g_151622778                      dword_140404A6C[71857987]                    /* 151622778 */
#define g_15162277C                      dword_140404A6C[71857988]                    /* 15162277C */
#define g_151622780                      dword_140404A6C[71857989]                    /* 151622780 */
#define g_151622784                      dword_140404A6C[71857990]                    /* 151622784 */
#define g_151622788                      dword_140404A6C[71857991]                    /* 151622788 */
#define g_1516227BC                      dword_140404A6C[71858004]                    /* 1516227BC */
#define g_151623978                      dword_140404A6C[71859139]                    /* 151623978 */
#define g_15162399C                      dword_140404A6C[71859148]                    /* 15162399C */
#define g_1516239A0                      dword_140404A6C[71859149]                    /* 1516239A0 */
#define g_1516239A4                      dword_140404A6C[71859150]                    /* 1516239A4 */
#define g_1516239A8                      dword_140404A6C[71859151]                    /* 1516239A8 */
#define g_1516239AC                      dword_140404A6C[71859152]                    /* 1516239AC */
#define g_1516239B0                      dword_140404A6C[71859153]                    /* 1516239B0 */
#define g_1516239D8                      dword_140404A6C[71859163]                    /* 1516239D8 */
#define g_1516241AC                      dword_140404A6C[71859664]                    /* 1516241AC */
#define g_1516241BC                      dword_140404A6C[71859668]                    /* 1516241BC */
#define g_1516241C8                      dword_140404A6C[71859671]                    /* 1516241C8 */
#define g_1516241CC                      dword_140404A6C[71859672]                    /* 1516241CC */
#define g_1516241D0                      dword_140404A6C[71859673]                    /* 1516241D0 */
#define g_1516241D4                      dword_140404A6C[71859674]                    /* 1516241D4 */
#define g_15162440C                      dword_140404A6C[71859816]                    /* 15162440C */
#define g_151624420                      dword_140404A6C[71859821]                    /* 151624420 */
#define g_151624424                      dword_140404A6C[71859822]                    /* 151624424 */
#define g_151624428                      dword_140404A6C[71859823]                    /* 151624428 */
#define g_151624434                      dword_140404A6C[71859826]                    /* 151624434 */
#define g_151624438                      dword_140404A6C[71859827]                    /* 151624438 */
#define g_151624484                      dword_140404A6C[71859846]                    /* 151624484 */
#define g_1519A4060                      dword_140404A6C[72777085]                    /* 1519A4060 */
#define g_1519A4068                      dword_140404A6C[72777087]                    /* 1519A4068 */
#define g_1519A409C                      dword_140404A6C[72777100]                    /* 1519A409C */
#define g_1519A40A4                      dword_140404A6C[72777102]                    /* 1519A40A4 */
#define g_1519A40AC                      dword_140404A6C[72777104]                    /* 1519A40AC */
#define g_1519A40B8                      dword_140404A6C[72777107]                    /* 1519A40B8 */
#define g_1519A40E4                      dword_140404A6C[72777118]                    /* 1519A40E4 */
#define g_1519A40EC                      dword_140404A6C[72777120]                    /* 1519A40EC */
#define g_1519A40F0                      dword_140404A6C[72777121]                    /* 1519A40F0 */
#define g_1519A40FC                      dword_140404A6C[72777124]                    /* 1519A40FC */
#define g_1519A4214                      dword_140404A6C[72777194]                    /* 1519A4214 */
#define g_1519A50A0                      dword_140404A6C[72778125]                    /* 1519A50A0 */
#define g_1519A5854                      dword_140404A6C[72778618]                    /* 1519A5854 */
#define g_1519A6D78                      dword_140404A6C[72779971]                    /* 1519A6D78 */
#define g_1519AE8C4                      dword_140404A6C[72787862]                    /* 1519AE8C4 */
#define g_151A84860                      dword_140404A6C[73006973]                    /* 151A84860 */
#define g_151A84880                      dword_140404A6C[73006981]                    /* 151A84880 */
#define ragdoll_unknown_height           (*(float *)&dword_140404A6C[73006982])       /* 151A84884 src/engine/human_ragdoll.c */
#define g_151A84888                      dword_140404A6C[73006983]                    /* 151A84888 */
#define g_151A8488C                      (*(float *)&dword_140404A6C[73006984])       /* 151A8488C */
#define g_151A84890                      (*(float *)&dword_140404A6C[73006985])       /* 151A84890 */
#define g_151A84894                      (*(float *)&dword_140404A6C[73006986])       /* 151A84894 */
#define world_unknown_151a84898          (*(float *)&dword_140404A6C[73006987])       /* 151A84898 src/engine/world.h */
#define g_151A8489C                      (*(float *)&dword_140404A6C[73006988])       /* 151A8489C */
#define g_151A848A0                      (*(_QWORD *)&dword_140404A6C[73006989])      /* 151A848A0 */
#define g_151A848A4                      (*(float *)&dword_140404A6C[73006990])       /* 151A848A4 */
#define g_151A848A8                      dword_140404A6C[73006991]                    /* 151A848A8 */
#define g_151A848AC                      dword_140404A6C[73006992]                    /* 151A848AC */
#define g_151A848B0                      dword_140404A6C[73006993]                    /* 151A848B0 */
#define g_151A848B4                      dword_140404A6C[73006994]                    /* 151A848B4 */
#define g_151A848B8                      dword_140404A6C[73006995]                    /* 151A848B8 */
#define g_151A848BC                      dword_140404A6C[73006996]                    /* 151A848BC */
#define g_151A848C4                      (*(float *)&dword_140404A6C[73006998])       /* 151A848C4 */
#define g_151A848C8                      (*(float *)&dword_140404A6C[73006999])       /* 151A848C8 */
#define g_151A848CC                      (*(float *)&dword_140404A6C[73007000])       /* 151A848CC */
#define item_hit_layer                   dword_140404A6C[73007002]                    /* 151A848D4 src/engine/item.h */
#define g_151A848D8                      dword_140404A6C[73007003]                    /* 151A848D8 */
#define g_151A848DC                      dword_140404A6C[73007004]                    /* 151A848DC */
#define g_151A848E0                      dword_140404A6C[73007005]                    /* 151A848E0 */
#define g_151A848E4                      dword_140404A6C[73007006]                    /* 151A848E4 */
#define g_151A848E8                      dword_140404A6C[73007007]                    /* 151A848E8 */
#define g_151A848EC                      dword_140404A6C[73007008]                    /* 151A848EC */
#define g_151A848F0                      dword_140404A6C[73007009]                    /* 151A848F0 */
#define g_151A848F4                      dword_140404A6C[73007010]                    /* 151A848F4 */
#define human_ground_vehicle             dword_140404A6C[73007011]                    /* 151A848F8 src/engine/human_walk.c */
#define item_hit_unknown_7c              dword_140404A6C[73007012]                    /* 151A848FC src/engine/item.h */
#define item_hit_block                   dword_140404A6C[73007013]                    /* 151A84900 src/engine/item.h */
#define item_hit_block_turn              dword_140404A6C[73007014]                    /* 151A84904 src/engine/item.h */
#define item_hit_block_part              dword_140404A6C[73007015]                    /* 151A84908 src/engine/item.h */
#define g_151A8490C                      dword_140404A6C[73007016]                    /* 151A8490C */
#define g_151A84910                      dword_140404A6C[73007017]                    /* 151A84910 */
#define g_151A84928                      dword_140404A6C[73007023]                    /* 151A84928 */
#define g_151A84934                      dword_140404A6C[73007026]                    /* 151A84934 */
#define g_151A84938                      dword_140404A6C[73007027]                    /* 151A84938 */
#define g_151A8493C                      dword_140404A6C[73007028]                    /* 151A8493C */
#define physics_point_count              dword_140404A6C[73990061]                    /* 151E44920 src/engine/physics.h */
#define g_151E45940                      dword_140404A6C[73991093]                    /* 151E45940 */
#define g_151E45944                      dword_140404A6C[73991094]                    /* 151E45944 */
#define g_151E45948                      dword_140404A6C[73991095]                    /* 151E45948 */
#define g_151E4594C                      (*(_OWORD *)&dword_140404A6C[73991096])      /* 151E4594C */
#define g_151E4595C                      (*(_OWORD *)&dword_140404A6C[73991100])      /* 151E4595C */
#define g_151E45968                      dword_140404A6C[73991103]                    /* 151E45968 */
#define g_151E45B4C                      dword_140404A6C[73991224]                    /* 151E45B4C */
#define g_151E45D44                      dword_140404A6C[73991350]                    /* 151E45D44 */
#define g_151E45D4C                      dword_140404A6C[73991352]                    /* 151E45D4C */
#define g_151E45F4C                      dword_140404A6C[73991480]                    /* 151E45F4C */
#define g_151E4614C                      dword_140404A6C[73991608]                    /* 151E4614C */
#define g_151E46150                      dword_140404A6C[73991609]                    /* 151E46150 */
#define g_151E46154                      dword_140404A6C[73991610]                    /* 151E46154 */
#define g_151E46158                      dword_140404A6C[73991611]                    /* 151E46158 */
#define g_151E4615C                      dword_140404A6C[73991612]                    /* 151E4615C */
#define g_151E46160                      dword_140404A6C[73991613]                    /* 151E46160 */
#define g_151E4618C                      dword_140404A6C[73991624]                    /* 151E4618C */
#define g_151E46190                      dword_140404A6C[73991625]                    /* 151E46190 */
#define g_151E46194                      dword_140404A6C[73991626]                    /* 151E46194 */
#define g_151E46198                      dword_140404A6C[73991627]                    /* 151E46198 */
#define g_151E4619C                      dword_140404A6C[73991628]                    /* 151E4619C */
#define g_151E461A0                      dword_140404A6C[73991629]                    /* 151E461A0 */
#define g_151E461A4                      dword_140404A6C[73991630]                    /* 151E461A4 */
#define g_151E461A8                      dword_140404A6C[73991631]                    /* 151E461A8 */
#define g_151E461AC                      dword_140404A6C[73991632]                    /* 151E461AC */
#define g_151E461B0                      dword_140404A6C[73991633]                    /* 151E461B0 */
#define g_151E461B4                      dword_140404A6C[73991634]                    /* 151E461B4 */
#define g_151E461B8                      dword_140404A6C[73991635]                    /* 151E461B8 */
#define g_151E461BC                      dword_140404A6C[73991636]                    /* 151E461BC */
#define g_151E461C0                      dword_140404A6C[73991637]                    /* 151E461C0 */
#define g_151E461C4                      dword_140404A6C[73991638]                    /* 151E461C4 */
#define g_151E461C8                      dword_140404A6C[73991639]                    /* 151E461C8 */
#define g_151E461CC                      dword_140404A6C[73991640]                    /* 151E461CC */
#define toggle_151e461d0                 dword_140404A6C[73991641]                    /* 151E461D0 src/engine/frame.h */
#define toggle_151e461d4                 dword_140404A6C[73991642]                    /* 151E461D4 src/engine/frame.h */
#define g_151E461D8                      dword_140404A6C[73991643]                    /* 151E461D8 */
#define g_151E461DC                      dword_140404A6C[73991644]                    /* 151E461DC */
#define g_151E461E0                      dword_140404A6C[73991645]                    /* 151E461E0 */
#define g_151E461E8                      dword_140404A6C[73991647]                    /* 151E461E8 */
#define g_151E461EC                      dword_140404A6C[73991648]                    /* 151E461EC */
#define g_151E461F0                      dword_140404A6C[73991649]                    /* 151E461F0 */
#define g_151E461F4                      dword_140404A6C[73991650]                    /* 151E461F4 */
#define g_151E461F8                      dword_140404A6C[73991651]                    /* 151E461F8 */
#define g_151E461FC                      dword_140404A6C[73991652]                    /* 151E461FC */
#define g_151E46200                      dword_140404A6C[73991653]                    /* 151E46200 */
#define g_151E46204                      dword_140404A6C[73991654]                    /* 151E46204 */
#define draw_unknown_151e46208           dword_140404A6C[73991655]                    /* 151E46208 src/engine/world_particles.c */
#define g_151E46220                      dword_140404A6C[73991661]                    /* 151E46220 */
#define g_151E46224                      dword_140404A6C[73991662]                    /* 151E46224 */
#define g_151E46228                      dword_140404A6C[73991663]                    /* 151E46228 */
#define g_151E4622C                      dword_140404A6C[73991664]                    /* 151E4622C */
#define g_151E46230                      dword_140404A6C[73991665]                    /* 151E46230 */
#define g_151E46234                      dword_140404A6C[73991666]                    /* 151E46234 */
#define g_151E46244                      dword_140404A6C[73991670]                    /* 151E46244 */
#define g_151E46248                      dword_140404A6C[73991671]                    /* 151E46248 */
#define g_151E4624C                      dword_140404A6C[73991672]                    /* 151E4624C */
#define g_151E48038                      dword_140404A6C[73993587]                    /* 151E48038 */
#define g_151E48E3C                      dword_140404A6C[73994484]                    /* 151E48E3C */
#define g_151E49A44                      dword_140404A6C[73995254]                    /* 151E49A44 */
#define g_151E49A68                      dword_140404A6C[73995263]                    /* 151E49A68 */
#define g_15414F224                      dword_140404A6C[83175918]                    /* 15414F224 */
#define g_15414F240                      dword_140404A6C[83175925]                    /* 15414F240 */
#define g_15414F280                      dword_140404A6C[83175941]                    /* 15414F280 */
#define g_15414F290                      dword_140404A6C[83175945]                    /* 15414F290 */
#define g_15414F2A0                      dword_140404A6C[83175949]                    /* 15414F2A0 */
#define g_15414F2B0                      dword_140404A6C[83175953]                    /* 15414F2B0 */
#define g_15414F2C0                      dword_140404A6C[83175957]                    /* 15414F2C0 */
#define g_15414F2D0                      dword_140404A6C[83175961]                    /* 15414F2D0 */
#define g_15414F2E0                      dword_140404A6C[83175965]                    /* 15414F2E0 */
#define g_15414F2F0                      dword_140404A6C[83175969]                    /* 15414F2F0 */
#define g_15414F300                      dword_140404A6C[83175973]                    /* 15414F300 */
#define g_15414F310                      dword_140404A6C[83175977]                    /* 15414F310 */
#define g_15414F320                      dword_140404A6C[83175981]                    /* 15414F320 */
#define g_15414F330                      dword_140404A6C[83175985]                    /* 15414F330 */
#define g_15414F340                      dword_140404A6C[83175989]                    /* 15414F340 */
#define g_15414F350                      dword_140404A6C[83175993]                    /* 15414F350 */
#define g_15414F360                      dword_140404A6C[83175997]                    /* 15414F360 */
#define g_15414F370                      dword_140404A6C[83176001]                    /* 15414F370 */
#define g_15414F380                      dword_140404A6C[83176005]                    /* 15414F380 */
#define g_15414F390                      dword_140404A6C[83176009]                    /* 15414F390 */
#define g_15414F3A0                      dword_140404A6C[83176013]                    /* 15414F3A0 */
#define g_15414F3B0                      dword_140404A6C[83176017]                    /* 15414F3B0 */
#define g_15414F3C0                      dword_140404A6C[83176021]                    /* 15414F3C0 */
#define g_15414F3D0                      dword_140404A6C[83176025]                    /* 15414F3D0 */
#define g_15414F3E0                      dword_140404A6C[83176029]                    /* 15414F3E0 */
#define g_15414F3F0                      dword_140404A6C[83176033]                    /* 15414F3F0 */
#define g_15414F400                      dword_140404A6C[83176037]                    /* 15414F400 */
#define g_15414F410                      dword_140404A6C[83176041]                    /* 15414F410 */
#define g_15414F420                      dword_140404A6C[83176045]                    /* 15414F420 */
#define g_15414F430                      dword_140404A6C[83176049]                    /* 15414F430 */
#define g_15414F440                      dword_140404A6C[83176053]                    /* 15414F440 */
#define g_15414F450                      dword_140404A6C[83176057]                    /* 15414F450 */
#define g_15414F460                      dword_140404A6C[83176061]                    /* 15414F460 */
#define g_15414F470                      dword_140404A6C[83176065]                    /* 15414F470 */
#define g_15414F480                      dword_140404A6C[83176069]                    /* 15414F480 */
#define g_15414F490                      dword_140404A6C[83176073]                    /* 15414F490 */
#define g_15414F4A0                      dword_140404A6C[83176077]                    /* 15414F4A0 */
#define g_15414F4B0                      dword_140404A6C[83176081]                    /* 15414F4B0 */
#define g_15414F4C0                      dword_140404A6C[83176085]                    /* 15414F4C0 */
#define g_15414F500                      dword_140404A6C[83176101]                    /* 15414F500 */
#define g_15414F5A0                      dword_140404A6C[83176141]                    /* 15414F5A0 */
#define g_15414F5B0                      dword_140404A6C[83176145]                    /* 15414F5B0 */
#define g_15414F730                      dword_140404A6C[83176241]                    /* 15414F730 */
#define g_15414F740                      dword_140404A6C[83176245]                    /* 15414F740 */
#define g_15414F750                      dword_140404A6C[83176249]                    /* 15414F750 */
#define g_15414F760                      dword_140404A6C[83176253]                    /* 15414F760 */
#define g_15414F830                      dword_140404A6C[83176305]                    /* 15414F830 */
#define g_154150040                      dword_140404A6C[83176821]                    /* 154150040 */
#define g_154150050                      dword_140404A6C[83176825]                    /* 154150050 */
#define g_154150060                      dword_140404A6C[83176829]                    /* 154150060 */
#define g_154150240                      dword_140404A6C[83176949]                    /* 154150240 */
#define g_154150250                      dword_140404A6C[83176953]                    /* 154150250 */
#define g_154150270                      dword_140404A6C[83176961]                    /* 154150270 */
#define g_154150290                      dword_140404A6C[83176969]                    /* 154150290 */
#define g_1541502D0                      dword_140404A6C[83176985]                    /* 1541502D0 */
#define g_1541502E0                      dword_140404A6C[83176989]                    /* 1541502E0 */
#define g_154150310                      dword_140404A6C[83177001]                    /* 154150310 */
#define g_154150320                      dword_140404A6C[83177005]                    /* 154150320 */
#define g_15415123C                      dword_140404A6C[83177972]                    /* 15415123C */
#define g_154151240                      dword_140404A6C[83177973]                    /* 154151240 */
#define g_154161240                      dword_140404A6C[83194357]                    /* 154161240 */
#define g_154161244                      dword_140404A6C[83194358]                    /* 154161244 */
#define g_154161A48                      dword_140404A6C[83194871]                    /* 154161A48 */
#define g_154162248                      dword_140404A6C[83195383]                    /* 154162248 */
#define g_15416224C                      dword_140404A6C[83195384]                    /* 15416224C */
#define g_154162250                      dword_140404A6C[83195385]                    /* 154162250 */
#define g_154162254                      dword_140404A6C[83195386]                    /* 154162254 */
#define g_154164248                      dword_140404A6C[83197431]                    /* 154164248 */
#define g_154164A48                      dword_140404A6C[83197943]                    /* 154164A48 */
#define g_154167248                      dword_140404A6C[83200503]                    /* 154167248 */
#define g_154167258                      dword_140404A6C[83200507]                    /* 154167258 */
#define g_15416725C                      dword_140404A6C[83200508]                    /* 15416725C */
#define g_154167260                      dword_140404A6C[83200509]                    /* 154167260 */
#define g_15416726C                      dword_140404A6C[83200512]                    /* 15416726C */
#define g_154167270                      dword_140404A6C[83200513]                    /* 154167270 */
#define g_154167E7C                      dword_140404A6C[83201284]                    /* 154167E7C */
#define g_15ADA9240                      dword_140404A6C[111579637]                   /* 15ADA9240 */
#define g_15ADA9244                      dword_140404A6C[111579638]                   /* 15ADA9244 */
#define g_15ADA9248                      dword_140404A6C[111579639]                   /* 15ADA9248 */
#define g_15ADA924C                      dword_140404A6C[111579640]                   /* 15ADA924C */
#define g_15ADA9250                      dword_140404A6C[111579641]                   /* 15ADA9250 */
#define g_15ADA9254                      dword_140404A6C[111579642]                   /* 15ADA9254 */
#define g_15ADA9258                      dword_140404A6C[111579643]                   /* 15ADA9258 */
#define g_15ADA925C                      dword_140404A6C[111579644]                   /* 15ADA925C */
#define g_15ADA9260                      dword_140404A6C[111579645]                   /* 15ADA9260 */
#define g_15ADA9264                      dword_140404A6C[111579646]                   /* 15ADA9264 */
#define g_15ADA9268                      dword_140404A6C[111579647]                   /* 15ADA9268 */
#define g_15ADA926C                      dword_140404A6C[111579648]                   /* 15ADA926C */
#define g_15ADA9270                      dword_140404A6C[111579649]                   /* 15ADA9270 */
#define g_15ADA9274                      dword_140404A6C[111579650]                   /* 15ADA9274 */
#define g_15ADA9278                      dword_140404A6C[111579651]                   /* 15ADA9278 */
#define g_15ADA927C                      dword_140404A6C[111579652]                   /* 15ADA927C */
#define g_15ADA9280                      (*(float *)&dword_140404A6C[111579653])      /* 15ADA9280 */
#define g_15ADA9284                      (*(float *)&dword_140404A6C[111579654])      /* 15ADA9284 */
#define g_15ADA9288                      (*(_QWORD *)&dword_140404A6C[111579655])     /* 15ADA9288 */
#define g_15ADA9290                      dword_140404A6C[111579657]                   /* 15ADA9290 */
#define g_15ADA9294                      dword_140404A6C[111579658]                   /* 15ADA9294 */
#define g_15ADA9298                      dword_140404A6C[111579659]                   /* 15ADA9298 */
#define g_15ADA929C                      dword_140404A6C[111579660]                   /* 15ADA929C */
#define g_15ADA92A0                      dword_140404A6C[111579661]                   /* 15ADA92A0 */
#define g_15ADA92A4                      dword_140404A6C[111579662]                   /* 15ADA92A4 */
#define g_15ADA97AC                      dword_140404A6C[111579984]                   /* 15ADA97AC */
#define g_15ADA97B0                      dword_140404A6C[111579985]                   /* 15ADA97B0 */
#define g_15ADAC248                      dword_140404A6C[111582711]                   /* 15ADAC248 */
#define world_train_stop_count           dword_140404A6C[112631653]                   /* 15B1AC800 src/engine/world_streets.h */
#define g_15B1AC810                      dword_140404A6C[112631657]                   /* 15B1AC810 */
#define g_15B1AC858                      (*(float *)&dword_140404A6C[112631675])      /* 15B1AC858 */
#define g_15B1AC85C                      (*(float *)&dword_140404A6C[112631676])      /* 15B1AC85C */
#define g_15B1AC860                      dword_140404A6C[112631677]                   /* 15B1AC860 */
#define g_15B1D5CEC                      dword_140404A6C[112673952]                   /* 15B1D5CEC */
#define g_15B1D5CF8                      dword_140404A6C[112673955]                   /* 15B1D5CF8 */
#define g_15B1D5CFC                      dword_140404A6C[112673956]                   /* 15B1D5CFC */
#define g_15B1D5D00                      dword_140404A6C[112673957]                   /* 15B1D5D00 */
#define g_15B1D5D04                      dword_140404A6C[112673958]                   /* 15B1D5D04 */
#define g_15F1D9040                      dword_140404A6C[129454453]                   /* 15F1D9040 */
#define g_15F1D91E0                      dword_140404A6C[129454557]                   /* 15F1D91E0 */
#define g_15F1D91E4                      dword_140404A6C[129454558]                   /* 15F1D91E4 */
#define g_15F1D91E8                      dword_140404A6C[129454559]                   /* 15F1D91E8 */
#define g_15F2D9200                      dword_140404A6C[129716709]                   /* 15F2D9200 */
#define g_15F2D9204                      dword_140404A6C[129716710]                   /* 15F2D9204 */
#define g_15F2D9208                      dword_140404A6C[129716711]                   /* 15F2D9208 */
#define g_15F2D920C                      dword_140404A6C[129716712]                   /* 15F2D920C */
#define g_15F2D9214                      dword_140404A6C[129716714]                   /* 15F2D9214 */
#define g_15F2D9218                      dword_140404A6C[129716715]                   /* 15F2D9218 */
#define g_15F2D921C                      dword_140404A6C[129716716]                   /* 15F2D921C */
#define g_15F2D9224                      dword_140404A6C[129716718]                   /* 15F2D9224 */
#define g_15F2D9228                      dword_140404A6C[129716719]                   /* 15F2D9228 */
#define g_15F2D922C                      dword_140404A6C[129716720]                   /* 15F2D922C */
#define g_15F2D9230                      dword_140404A6C[129716721]                   /* 15F2D9230 */
#define g_15F2D9234                      dword_140404A6C[129716722]                   /* 15F2D9234 */
#define g_15F2D9238                      dword_140404A6C[129716723]                   /* 15F2D9238 */
#define g_15F2D923C                      dword_140404A6C[129716724]                   /* 15F2D923C */
#define g_15F2D9240                      dword_140404A6C[129716725]                   /* 15F2D9240 */
#define g_15F2D9244                      dword_140404A6C[129716726]                   /* 15F2D9244 */
#define g_15F2D9248                      dword_140404A6C[129716727]                   /* 15F2D9248 */
#define g_15F2D924C                      dword_140404A6C[129716728]                   /* 15F2D924C */
#define g_15F2D9250                      dword_140404A6C[129716729]                   /* 15F2D9250 */
#define g_15F2D9254                      dword_140404A6C[129716730]                   /* 15F2D9254 */
#define g_15F2D9258                      dword_140404A6C[129716731]                   /* 15F2D9258 */
#define g_15F2D925C                      dword_140404A6C[129716732]                   /* 15F2D925C */
#define g_15F2D9260                      dword_140404A6C[129716733]                   /* 15F2D9260 */
#define g_15F2D9264                      dword_140404A6C[129716734]                   /* 15F2D9264 */
#define g_15F2D9268                      dword_140404A6C[129716735]                   /* 15F2D9268 */
#define g_15F2D926C                      dword_140404A6C[129716736]                   /* 15F2D926C */
#define g_15F2D9270                      dword_140404A6C[129716737]                   /* 15F2D9270 */
#define g_15F2D9274                      dword_140404A6C[129716738]                   /* 15F2D9274 */
#define g_15F2D9278                      dword_140404A6C[129716739]                   /* 15F2D9278 */
#define g_15F2D927C                      dword_140404A6C[129716740]                   /* 15F2D927C */
#define g_15F2D9280                      dword_140404A6C[129716741]                   /* 15F2D9280 */
#define g_15F2D9284                      dword_140404A6C[129716742]                   /* 15F2D9284 */
#define g_15F2D9288                      dword_140404A6C[129716743]                   /* 15F2D9288 */
#define g_15F2D928C                      dword_140404A6C[129716744]                   /* 15F2D928C */
#define g_15F2D9290                      dword_140404A6C[129716745]                   /* 15F2D9290 */
#define g_15F2D9294                      dword_140404A6C[129716746]                   /* 15F2D9294 */
#define g_15F2D9298                      dword_140404A6C[129716747]                   /* 15F2D9298 */
#define g_15F2D929C                      dword_140404A6C[129716748]                   /* 15F2D929C */
#define g_15F2D92A0                      dword_140404A6C[129716749]                   /* 15F2D92A0 */
#define g_15F2D92B0                      dword_140404A6C[129716753]                   /* 15F2D92B0 */
#define g_15F2D92B4                      dword_140404A6C[129716754]                   /* 15F2D92B4 */
#define g_15F2D92B8                      dword_140404A6C[129716755]                   /* 15F2D92B8 */
#define g_15F2D92BC                      dword_140404A6C[129716756]                   /* 15F2D92BC */
#define g_15F2D92C0                      dword_140404A6C[129716757]                   /* 15F2D92C0 */
#define g_15F2D92C4                      dword_140404A6C[129716758]                   /* 15F2D92C4 */
#define g_15F2D92EC                      dword_140404A6C[129716768]                   /* 15F2D92EC */
#define g_15F2D92F4                      dword_140404A6C[129716770]                   /* 15F2D92F4 */
#define g_15F2D93F4                      dword_140404A6C[129716834]                   /* 15F2D93F4 */
#define g_15F2D99F8                      dword_140404A6C[129717219]                   /* 15F2D99F8 */
#define g_15F2D99FC                      dword_140404A6C[129717220]                   /* 15F2D99FC */
#define g_15F2D9A00                      dword_140404A6C[129717221]                   /* 15F2D9A00 */
#define g_15F2D9A30                      dword_140404A6C[129717233]                   /* 15F2D9A30 */
#define g_15F2D9A34                      dword_140404A6C[129717234]                   /* 15F2D9A34 */
#define g_15F2D9A38                      dword_140404A6C[129717235]                   /* 15F2D9A38 */
#define g_15F2DC000                      dword_140404A6C[129719653]                   /* 15F2DC000 */
#define g_15F2DC004                      dword_140404A6C[129719654]                   /* 15F2DC004 */
#define g_15F2DC008                      dword_140404A6C[129719655]                   /* 15F2DC008 */
#define g_15F2DC00C                      dword_140404A6C[129719656]                   /* 15F2DC00C */
#define g_15F2DC820                      dword_140404A6C[129720173]                   /* 15F2DC820 */
#define g_15F2DC848                      dword_140404A6C[129720183]                   /* 15F2DC848 */
#define g_15F2DCAA0                      dword_140404A6C[129720333]                   /* 15F2DCAA0 */
#define g_15F2DCAB0                      dword_140404A6C[129720337]                   /* 15F2DCAB0 */
#define g_15F2DCAB4                      dword_140404A6C[129720338]                   /* 15F2DCAB4 */
#define g_15F2DCAB8                      dword_140404A6C[129720339]                   /* 15F2DCAB8 */
#define g_15F2DCAE0                      dword_140404A6C[129720349]                   /* 15F2DCAE0 */
#define g_15F2DCAE4                      dword_140404A6C[129720350]                   /* 15F2DCAE4 */
#define g_15F2DCAE8                      dword_140404A6C[129720351]                   /* 15F2DCAE8 */
#define g_15F2DCB40                      dword_140404A6C[129720373]                   /* 15F2DCB40 */
#define g_15F2DCB44                      dword_140404A6C[129720374]                   /* 15F2DCB44 */
#define g_15F2DCB48                      dword_140404A6C[129720375]                   /* 15F2DCB48 */
#define g_15F2DCB4C                      dword_140404A6C[129720376]                   /* 15F2DCB4C */
#define g_15F2DCB50                      dword_140404A6C[129720377]                   /* 15F2DCB50 */
#define g_15F2DCB54                      dword_140404A6C[129720378]                   /* 15F2DCB54 */
#define g_15F2DCB70                      dword_140404A6C[129720385]                   /* 15F2DCB70 */
#define g_15F2DCB78                      dword_140404A6C[129720387]                   /* 15F2DCB78 */
#define g_15F2DE1A8                      dword_140404A6C[129721807]                   /* 15F2DE1A8 */
#define g_15F2DE1AC                      dword_140404A6C[129721808]                   /* 15F2DE1AC */
#define g_15F2DE1B0                      dword_140404A6C[129721809]                   /* 15F2DE1B0 */
#define g_15F2DE1B4                      dword_140404A6C[129721810]                   /* 15F2DE1B4 */
#define g_15F2DE1B8                      dword_140404A6C[129721811]                   /* 15F2DE1B8 */
#define g_15F2DE1BC                      dword_140404A6C[129721812]                   /* 15F2DE1BC */
#define g_15F2DE1C0                      dword_140404A6C[129721813]                   /* 15F2DE1C0 */
#define g_15F2DE1C4                      dword_140404A6C[129721814]                   /* 15F2DE1C4 */
#define g_15F2DE1C8                      dword_140404A6C[129721815]                   /* 15F2DE1C8 */
#define g_15F2DE1CC                      dword_140404A6C[129721816]                   /* 15F2DE1CC */
#define g_15F2DE1D0                      dword_140404A6C[129721817]                   /* 15F2DE1D0 */
#define g_15F2DE1D4                      dword_140404A6C[129721818]                   /* 15F2DE1D4 */
#define g_15F2DE2D4                      dword_140404A6C[129721882]                   /* 15F2DE2D4 */
#define g_15F2DE2D8                      dword_140404A6C[129721883]                   /* 15F2DE2D8 */
#define g_15F2DE2DC                      dword_140404A6C[129721884]                   /* 15F2DE2DC */
#define g_15F2DE2E0                      dword_140404A6C[129721885]                   /* 15F2DE2E0 */
#define g_15F2DE2E4                      dword_140404A6C[129721886]                   /* 15F2DE2E4 */
#define g_15F2DE2E8                      dword_140404A6C[129721887]                   /* 15F2DE2E8 */
#define g_15F2DE360                      dword_140404A6C[129721917]                   /* 15F2DE360 */
#define g_15F2DE364                      dword_140404A6C[129721918]                   /* 15F2DE364 */
#define g_15F564634                      dword_140404A6C[130383602]                   /* 15F564634 */
#define g_15FD06200                      dword_140404A6C[132384229]                   /* 15FD06200 */
#define g_15FD06204                      dword_140404A6C[132384230]                   /* 15FD06204 */
#define g_15FD06230                      dword_140404A6C[132384241]                   /* 15FD06230 */
#define g_15FD0624C                      dword_140404A6C[132384248]                   /* 15FD0624C */
#define g_15FD06258                      dword_140404A6C[132384251]                   /* 15FD06258 */
#define g_15FD09B40                      dword_140404A6C[132387893]                   /* 15FD09B40 */
#define g_15FD0B364                      dword_140404A6C[132389438]                   /* 15FD0B364 */
#define g_15FD16260                      dword_140404A6C[132400637]                   /* 15FD16260 */
#define g_15FD16264                      dword_140404A6C[132400638]                   /* 15FD16264 */
#define g_15FD16268                      dword_140404A6C[132400639]                   /* 15FD16268 */
#define g_15FD16270                      dword_140404A6C[132400641]                   /* 15FD16270 */
#define g_15FD16274                      dword_140404A6C[132400642]                   /* 15FD16274 */
#define g_15FD16278                      dword_140404A6C[132400643]                   /* 15FD16278 */
#define g_15FD1627C                      dword_140404A6C[132400644]                   /* 15FD1627C */
#define g_15FD16280                      dword_140404A6C[132400645]                   /* 15FD16280 */
#define g_15FD16284                      dword_140404A6C[132400646]                   /* 15FD16284 */
#define g_15FD1628C                      dword_140404A6C[132400648]                   /* 15FD1628C */
#define g_15FD16290                      dword_140404A6C[132400649]                   /* 15FD16290 */
#define g_15FD16294                      dword_140404A6C[132400650]                   /* 15FD16294 */
#define g_15FD16298                      dword_140404A6C[132400651]                   /* 15FD16298 */
#define g_15FD1629C                      dword_140404A6C[132400652]                   /* 15FD1629C */
#define g_15FD162A0                      dword_140404A6C[132400653]                   /* 15FD162A0 */
#define g_15FD162A4                      dword_140404A6C[132400654]                   /* 15FD162A4 */
#define g_15FD162A8                      dword_140404A6C[132400655]                   /* 15FD162A8 */
#define g_15FD162AC                      dword_140404A6C[132400656]                   /* 15FD162AC */
#define g_15FD162DC                      dword_140404A6C[132400668]                   /* 15FD162DC */
#define g_15FD162EC                      dword_140404A6C[132400672]                   /* 15FD162EC */
#define g_15FD162F4                      dword_140404A6C[132400674]                   /* 15FD162F4 */
#define g_15FD162FC                      dword_140404A6C[132400676]                   /* 15FD162FC */
#define g_15FD16310                      dword_140404A6C[132400681]                   /* 15FD16310 */
#define g_15FD16838                      dword_140404A6C[132401011]                   /* 15FD16838 */
#define g_15FD16844                      dword_140404A6C[132401014]                   /* 15FD16844 */
#define g_15FD16854                      dword_140404A6C[132401018]                   /* 15FD16854 */
#define world_unknown_15fd16260_count    dword_140404A6C[132792829]                   /* 15FE95260 src/engine/world.h */
#define g_15FE95268                      dword_140404A6C[132792831]                   /* 15FE95268 */
#define g_15FE95274                      dword_140404A6C[132792834]                   /* 15FE95274 */
#define g_15FE95280                      dword_140404A6C[132792837]                   /* 15FE95280 */
#define g_15FE95284                      dword_140404A6C[132792838]                   /* 15FE95284 */
#define g_15FE96280                      dword_140404A6C[132793861]                   /* 15FE96280 */
#define g_15FE9628C                      dword_140404A6C[132793864]                   /* 15FE9628C */
#define g_15FE96290                      dword_140404A6C[132793865]                   /* 15FE96290 */
#define g_15FE96294                      dword_140404A6C[132793866]                   /* 15FE96294 */
#define g_15FE962B8                      dword_140404A6C[132793875]                   /* 15FE962B8 */
#define g_1600D6284                      dword_140404A6C[133383686]                   /* 1600D6284 */
#define g_1600D6288                      dword_140404A6C[133383687]                   /* 1600D6288 */
#define g_1600D628C                      dword_140404A6C[133383688]                   /* 1600D628C */
#define g_1600D6290                      dword_140404A6C[133383689]                   /* 1600D6290 */
#define g_1600D7294                      dword_140404A6C[133384714]                   /* 1600D7294 */
#define g_1601172A0                      dword_140404A6C[133450253]                   /* 1601172A0 */
#define g_1601172A4                      dword_140404A6C[133450254]                   /* 1601172A4 */
#define g_1601172A8                      dword_140404A6C[133450255]                   /* 1601172A8 */
#define g_1601172AC                      dword_140404A6C[133450256]                   /* 1601172AC */
#define g_1601172B4                      dword_140404A6C[133450258]                   /* 1601172B4 */
#define g_1601172B8                      dword_140404A6C[133450259]                   /* 1601172B8 */
#define g_1601172BC                      dword_140404A6C[133450260]                   /* 1601172BC */
#define g_1601172C0                      dword_140404A6C[133450261]                   /* 1601172C0 */
#define g_1601172C4                      dword_140404A6C[133450262]                   /* 1601172C4 */
#define g_1601172C8                      dword_140404A6C[133450263]                   /* 1601172C8 */
#define g_1601172D4                      dword_140404A6C[133450266]                   /* 1601172D4 */
#define g_1601172E0                      dword_140404A6C[133450269]                   /* 1601172E0 */
#define g_1601172EC                      dword_140404A6C[133450272]                   /* 1601172EC */
#define g_1601172F4                      dword_140404A6C[133450274]                   /* 1601172F4 */
#define g_1601E12A0                      dword_140404A6C[133657101]                   /* 1601E12A0 */
#define g_1601E12A4                      dword_140404A6C[133657102]                   /* 1601E12A4 */
#define noise_seed                       dword_140404A6C[133919253]                   /* 1602E12C0 src/engine/math3d.c */
#define g_1602E12E0                      dword_140404A6C[133919261]                   /* 1602E12E0 */
#define g_1602E12E4                      dword_140404A6C[133919262]                   /* 1602E12E4 */
#define g_1603612E4                      dword_140404A6C[134050334]                   /* 1603612E4 */
#define g_1603612F0                      dword_140404A6C[134050337]                   /* 1603612F0 */
#define g_1603612F4                      dword_140404A6C[134050338]                   /* 1603612F4 */
#define g_1603612F8                      dword_140404A6C[134050339]                   /* 1603612F8 */
#define g_160361340                      dword_140404A6C[134050357]                   /* 160361340 */
#define g_160361344                      dword_140404A6C[134050358]                   /* 160361344 */
#define g_160361348                      dword_140404A6C[134050359]                   /* 160361348 */
#define g_160361350                      dword_140404A6C[134050361]                   /* 160361350 */
#define g_160361354                      dword_140404A6C[134050362]                   /* 160361354 */
#define g_160361360                      dword_140404A6C[134050365]                   /* 160361360 */
#define g_160361370                      dword_140404A6C[134050369]                   /* 160361370 */
#define g_160361380                      dword_140404A6C[134050373]                   /* 160361380 */
#define g_160361384                      dword_140404A6C[134050374]                   /* 160361384 */
#define g_160361388                      dword_140404A6C[134050375]                   /* 160361388 */
#define g_16036138C                      dword_140404A6C[134050376]                   /* 16036138C */
#define g_160361390                      dword_140404A6C[134050377]                   /* 160361390 */
#define g_160361398                      dword_140404A6C[134050379]                   /* 160361398 */
#define g_1603613B0                      dword_140404A6C[134050385]                   /* 1603613B0 */
#define g_160361464                      dword_140404A6C[134050430]                   /* 160361464 */
#define g_160361474                      dword_140404A6C[134050434]                   /* 160361474 */
#define g_1606E1348                      dword_140404A6C[134967863]                   /* 1606E1348 */
#define g_1606E1350                      dword_140404A6C[134967865]                   /* 1606E1350 */
#define g_160721350                      dword_140404A6C[135033401]                   /* 160721350 */
#define g_160721354                      dword_140404A6C[135033402]                   /* 160721354 */
#define g_160722360                      dword_140404A6C[135034429]                   /* 160722360 */
#define g_160722364                      dword_140404A6C[135034430]                   /* 160722364 */
#define g_1607223E4                      dword_140404A6C[135034462]                   /* 1607223E4 */
#define g_1607B538C                      dword_140404A6C[135184968]                   /* 1607B538C */
#define g_1608353E0                      dword_140404A6C[135316061]                   /* 1608353E0 */
#define g_1608353EC                      dword_140404A6C[135316064]                   /* 1608353EC */
#define g_1608353F0                      dword_140404A6C[135316065]                   /* 1608353F0 */
#define g_1608353F4                      dword_140404A6C[135316066]                   /* 1608353F4 */
#define g_160FB59A0                      dword_140404A6C[137282509]                   /* 160FB59A0 */
#define g_160FB5DA4                      dword_140404A6C[137282766]                   /* 160FB5DA4 */
#define g_160FB5DAC                      dword_140404A6C[137282768]                   /* 160FB5DAC */
#define g_160FB61A8                      dword_140404A6C[137283023]                   /* 160FB61A8 */
#define g_160FB67B0                      dword_140404A6C[137283409]                   /* 160FB67B0 */
#define g_160FC37B4                      dword_140404A6C[137296722]                   /* 160FC37B4 */
#define g_160FC37B8                      dword_140404A6C[137296723]                   /* 160FC37B8 */
#define g_160FC47C0                      dword_140404A6C[137297749]                   /* 160FC47C0 */
#define g_160FC47C8                      dword_140404A6C[137297751]                   /* 160FC47C8 */
#define g_160FC47D0                      dword_140404A6C[137297753]                   /* 160FC47D0 */
#define g_160FC47D8                      dword_140404A6C[137297755]                   /* 160FC47D8 */
#define g_160FC47DC                      dword_140404A6C[137297756]                   /* 160FC47DC */
#define g_160FC47E8                      dword_140404A6C[137297759]                   /* 160FC47E8 */
#define g_160FC47EC                      dword_140404A6C[137297760]                   /* 160FC47EC */
#define g_160FC47F0                      dword_140404A6C[137297761]                   /* 160FC47F0 */
#define g_160FC47F4                      dword_140404A6C[137297762]                   /* 160FC47F4 */
#define g_160FC47F8                      dword_140404A6C[137297763]                   /* 160FC47F8 */
#define g_160FC47FC                      dword_140404A6C[137297764]                   /* 160FC47FC */
#define g_160FC4804                      dword_140404A6C[137297766]                   /* 160FC4804 */
#define g_160FC4808                      dword_140404A6C[137297767]                   /* 160FC4808 */
#define g_160FC480C                      dword_140404A6C[137297768]                   /* 160FC480C */
#define g_160FC4810                      dword_140404A6C[137297769]                   /* 160FC4810 */
#define g_160FC4814                      (*(float *)&dword_140404A6C[137297770])      /* 160FC4814 */
#define g_160FC481C                      dword_140404A6C[137297772]                   /* 160FC481C */
#define g_160FC4820                      dword_140404A6C[137297773]                   /* 160FC4820 */
#define g_160FC4824                      dword_140404A6C[137297774]                   /* 160FC4824 */
#define g_160FC4828                      dword_140404A6C[137297775]                   /* 160FC4828 */
#define g_160FC4830                      (*(_QWORD *)&dword_140404A6C[137297777])     /* 160FC4830 */
#define g_160FC4838                      (*(_QWORD *)&dword_140404A6C[137297779])     /* 160FC4838 */
#define g_160FC4840                      dword_140404A6C[137297781]                   /* 160FC4840 */
#define g_160FC4844                      dword_140404A6C[137297782]                   /* 160FC4844 */
#define g_160FC4848                      dword_140404A6C[137297783]                   /* 160FC4848 */
#define g_160FC484C                      dword_140404A6C[137297784]                   /* 160FC484C */
#define g_160FC4850                      dword_140404A6C[137297785]                   /* 160FC4850 */
#define g_160FC4854                      dword_140404A6C[137297786]                   /* 160FC4854 */
#define g_160FC4858                      dword_140404A6C[137297787]                   /* 160FC4858 */
#define g_160FC485C                      dword_140404A6C[137297788]                   /* 160FC485C */
#define g_160FC4860                      (*(_OWORD *)&dword_140404A6C[137297789])     /* 160FC4860 */
#define g_160FC4870                      (*(_OWORD *)&dword_140404A6C[137297793])     /* 160FC4870 */
#define g_160FC4880                      (*(_OWORD *)&dword_140404A6C[137297797])     /* 160FC4880 */
#define g_160FC4890                      (*(_OWORD *)&dword_140404A6C[137297801])     /* 160FC4890 */
#define g_160FC48A0                      (*(_OWORD *)&dword_140404A6C[137297805])     /* 160FC48A0 */
#define g_160FC48B0                      (*(_OWORD *)&dword_140404A6C[137297809])     /* 160FC48B0 */
#define g_160FC4960                      dword_140404A6C[137297853]                   /* 160FC4960 */
#define g_160FC4968                      dword_140404A6C[137297855]                   /* 160FC4968 */
#define g_160FC496C                      dword_140404A6C[137297856]                   /* 160FC496C */
#define g_160FC4970                      dword_140404A6C[137297857]                   /* 160FC4970 */
#define g_160FC4974                      dword_140404A6C[137297858]                   /* 160FC4974 */
#define g_160FC4978                      dword_140404A6C[137297859]                   /* 160FC4978 */
#define g_160FC497C                      dword_140404A6C[137297860]                   /* 160FC497C */
#define g_160FC4980                      dword_140404A6C[137297861]                   /* 160FC4980 */
#define g_160FC4A44                      dword_140404A6C[137297910]                   /* 160FC4A44 */
#define g_160FC4A48                      dword_140404A6C[137297911]                   /* 160FC4A48 */
#define g_160FC4A4C                      dword_140404A6C[137297912]                   /* 160FC4A4C */
#define g_160FC4A50                      dword_140404A6C[137297913]                   /* 160FC4A50 */
#define g_160FC4A54                      dword_140404A6C[137297914]                   /* 160FC4A54 */
#define g_160FE2D64                      dword_140404A6C[137328830]                   /* 160FE2D64 */
#define g_160FE2D68                      dword_140404A6C[137328831]                   /* 160FE2D68 */
#define g_160FE2D6C                      dword_140404A6C[137328832]                   /* 160FE2D6C */
#define g_160FE2D70                      dword_140404A6C[137328833]                   /* 160FE2D70 */
#define g_160FE2D74                      dword_140404A6C[137328834]                   /* 160FE2D74 */
#define g_160FE2D78                      dword_140404A6C[137328835]                   /* 160FE2D78 */
#define g_160FE2D7C                      dword_140404A6C[137328836]                   /* 160FE2D7C */
#define g_160FE2D80                      dword_140404A6C[137328837]                   /* 160FE2D80 */
#define g_160FE2D88                      dword_140404A6C[137328839]                   /* 160FE2D88 */
#define g_160FFF568                      dword_140404A6C[137358015]                   /* 160FFF568 */
#define g_160FFF56C                      dword_140404A6C[137358016]                   /* 160FFF56C */
#define g_160FFF570                      dword_140404A6C[137358017]                   /* 160FFF570 */
#define g_160FFF574                      dword_140404A6C[137358018]                   /* 160FFF574 */
#define g_160FFF578                      dword_140404A6C[137358019]                   /* 160FFF578 */
#define g_160FFF57C                      dword_140404A6C[137358020]                   /* 160FFF57C */
#define g_160FFF580                      dword_140404A6C[137358021]                   /* 160FFF580 */
#define g_161008568                      dword_140404A6C[137367231]                   /* 161008568 */
#define g_16100856C                      dword_140404A6C[137367232]                   /* 16100856C */
#define g_161008570                      dword_140404A6C[137367233]                   /* 161008570 */
#define g_161008584                      dword_140404A6C[137367238]                   /* 161008584 */
#define g_161008588                      dword_140404A6C[137367239]                   /* 161008588 */
#define g_165D84960                      dword_140404A6C[157679549]                   /* 165D84960 */
#define g_165D84964                      dword_140404A6C[157679550]                   /* 165D84964 */
#define g_165D84970                      dword_140404A6C[157679553]                   /* 165D84970 */
#define g_165D84974                      dword_140404A6C[157679554]                   /* 165D84974 */
#define g_1665C4A00                      dword_140404A6C[159842277]                   /* 1665C4A00 */
#define g_1665C4A04                      dword_140404A6C[159842278]                   /* 1665C4A04 */
#define g_1665C4A08                      dword_140404A6C[159842279]                   /* 1665C4A08 */
#define g_1665C4A10                      (*(_QWORD *)&dword_140404A6C[159842281])     /* 1665C4A10 */
#define g_1665C4A18                      dword_140404A6C[159842283]                   /* 1665C4A18 */
#define g_1665C4A20                      (*(_QWORD *)&dword_140404A6C[159842285])     /* 1665C4A20 */
#define g_1665C4A2C                      dword_140404A6C[159842288]                   /* 1665C4A2C */
#define g_1665C4A30                      dword_140404A6C[159842289]                   /* 1665C4A30 */
#define g_1665C4B40                      dword_140404A6C[159842357]                   /* 1665C4B40 */
#define g_1665C4B48                      dword_140404A6C[159842359]                   /* 1665C4B48 */
#define g_16677CBA4                      dword_140404A6C[160292942]                   /* 16677CBA4 */
#define g_16677CBA8                      dword_140404A6C[160292943]                   /* 16677CBA8 */
#define g_16677CBAC                      dword_140404A6C[160292944]                   /* 16677CBAC */
#define g_16677CBC0                      dword_140404A6C[160292949]                   /* 16677CBC0 */
#define g_16677E3C4                      dword_140404A6C[160294486]                   /* 16677E3C4 */
#define g_1667AE3C8                      dword_140404A6C[160343639]                   /* 1667AE3C8 */
#define g_1667AE3CC                      dword_140404A6C[160343640]                   /* 1667AE3CC */
#define g_1667AE3D0                      dword_140404A6C[160343641]                   /* 1667AE3D0 */
#define g_1667DE3CC                      dword_140404A6C[160392792]                   /* 1667DE3CC */
#define g_1667EE3CC                      dword_140404A6C[160409176]                   /* 1667EE3CC */
#define g_1667EE3D0                      dword_140404A6C[160409177]                   /* 1667EE3D0 */
#define g_16684E3CC                      dword_140404A6C[160507480]                   /* 16684E3CC */
#define g_16684E3D0                      dword_140404A6C[160507481]                   /* 16684E3D0 */
#define g_16684E3DC                      dword_140404A6C[160507484]                   /* 16684E3DC */
#define g_16688E3D4                      dword_140404A6C[160573018]                   /* 16688E3D4 */
#define g_16688E3D8                      dword_140404A6C[160573019]                   /* 16688E3D8 */
#define g_16688E3E0                      dword_140404A6C[160573021]                   /* 16688E3E0 */
#define g_16696E3D8                      dword_140404A6C[160802395]                   /* 16696E3D8 */
#define g_16696FBDC                      dword_140404A6C[160803932]                   /* 16696FBDC */
#define g_16696FBE0                      dword_140404A6C[160803933]                   /* 16696FBE0 */
#define g_1669703F0                      dword_140404A6C[160804449]                   /* 1669703F0 */
#define g_1669A3CA0                      (*(float *)&dword_140404A6C[160857229])      /* 1669A3CA0 */
#define g_1669A3CA4                      (*(float *)&dword_140404A6C[160857230])      /* 1669A3CA4 */
#define g_1669A3CA8                      (*(float *)&dword_140404A6C[160857231])      /* 1669A3CA8 */
#define g_1669A3CAC                      dword_140404A6C[160857232]                   /* 1669A3CAC */
#define g_1669A3CB0                      dword_140404A6C[160857233]                   /* 1669A3CB0 */
#define g_1669A3CB4                      dword_140404A6C[160857234]                   /* 1669A3CB4 */
#define g_1669A3CB8                      dword_140404A6C[160857235]                   /* 1669A3CB8 */
#define g_1669A3CBC                      dword_140404A6C[160857236]                   /* 1669A3CBC */
#define g_1669A3CC8                      dword_140404A6C[160857239]                   /* 1669A3CC8 */
#define g_166A649D8                      dword_140404A6C[161054683]                   /* 166A649D8 */
#define g_166A649DC                      dword_140404A6C[161054684]                   /* 166A649DC */
#define g_166A649E0                      dword_140404A6C[161054685]                   /* 166A649E0 */
#define g_1699AACC0                      dword_140404A6C[173447317]                   /* 1699AACC0 */
#define g_1699AACCC                      dword_140404A6C[173447320]                   /* 1699AACCC */
#define g_169BD2CC4                      dword_140404A6C[174012566]                   /* 169BD2CC4 */
#define g_169BD2CC8                      dword_140404A6C[174012567]                   /* 169BD2CC8 */
#define g_169BD2CCC                      dword_140404A6C[174012568]                   /* 169BD2CCC */
#define g_169BD2CD0                      dword_140404A6C[174012569]                   /* 169BD2CD0 */
#define g_169BD2CE4                      dword_140404A6C[174012574]                   /* 169BD2CE4 */
#define g_169BD2CE8                      dword_140404A6C[174012575]                   /* 169BD2CE8 */
#define g_169BD2CEC                      dword_140404A6C[174012576]                   /* 169BD2CEC */
#define g_169BD2D14                      dword_140404A6C[174012586]                   /* 169BD2D14 */
#define g_169BD2D24                      dword_140404A6C[174012590]                   /* 169BD2D24 */
#define g_169BD2D28                      dword_140404A6C[174012591]                   /* 169BD2D28 */
#define g_169CA2CC4                      dword_140404A6C[174225558]                   /* 169CA2CC4 */
#define g_169CA2CC8                      dword_140404A6C[174225559]                   /* 169CA2CC8 */
#define g_169CBACC8                      dword_140404A6C[174250135]                   /* 169CBACC8 */
#define g_169CBACD4                      dword_140404A6C[174250138]                   /* 169CBACD4 */
#define g_169CBACD8                      dword_140404A6C[174250139]                   /* 169CBACD8 */
#define g_169CBACDC                      dword_140404A6C[174250140]                   /* 169CBACDC */
#define g_169CBACE0                      dword_140404A6C[174250141]                   /* 169CBACE0 */
#define g_169CBACEC                      dword_140404A6C[174250144]                   /* 169CBACEC */
#define g_169CBB160                      dword_140404A6C[174250429]                   /* 169CBB160 */
#define g_169CBB16C                      dword_140404A6C[174250432]                   /* 169CBB16C */
#define g_169DDB164                      dword_140404A6C[174545342]                   /* 169DDB164 */
#define g_169DDB168                      dword_140404A6C[174545343]                   /* 169DDB168 */
#define g_169DDB16C                      dword_140404A6C[174545344]                   /* 169DDB16C */
#define g_169F3B168                      dword_140404A6C[174905791]                   /* 169F3B168 */
#define g_16A1BB980                      dword_140404A6C[175561669]                   /* 16A1BB980 */
#define g_16A1BB984                      dword_140404A6C[175561670]                   /* 16A1BB984 */
#define g_16A1BB988                      dword_140404A6C[175561671]                   /* 16A1BB988 */
#define g_16A1BB98C                      dword_140404A6C[175561672]                   /* 16A1BB98C */
#define g_16A3BBD8C                      dword_140404A6C[176086216]                   /* 16A3BBD8C */
#define g_16A7DBD70                      dword_140404A6C[177167553]                   /* 16A7DBD70 */
#define g_16A7DBD74                      dword_140404A6C[177167554]                   /* 16A7DBD74 */
#define g_16A7DBD84                      dword_140404A6C[177167558]                   /* 16A7DBD84 */
#define g_16A7DBD88                      dword_140404A6C[177167559]                   /* 16A7DBD88 */
#define g_16A7DBD8C                      dword_140404A6C[177167560]                   /* 16A7DBD8C */
#define g_16A7DBD90                      dword_140404A6C[177167561]                   /* 16A7DBD90 */
#define mesh_vertex_count                dword_140404A6C[177167565]                   /* 16A7DBDA0 vertices of the mesh being built */
#define g_16A7DBDA4                      dword_140404A6C[177167566]                   /* 16A7DBDA4 */
#define g_16A7DBDA8                      (*(float *)&dword_140404A6C[177167567])      /* 16A7DBDA8 */
#define g_16A7DBDAC                      (*(float *)&dword_140404A6C[177167568])      /* 16A7DBDAC */
#define g_16A7DBDB0                      (*(float *)&dword_140404A6C[177167569])      /* 16A7DBDB0 */
#define g_16A7DBDB4                      (*(float *)&dword_140404A6C[177167570])      /* 16A7DBDB4 */
#define g_16A7DBDB8                      (*(float *)&dword_140404A6C[177167571])      /* 16A7DBDB8 */
#define g_16A7DBDBC                      (*(float *)&dword_140404A6C[177167572])      /* 16A7DBDBC */
#define g_16A7DBDC0                      (*(float *)&dword_140404A6C[177167573])      /* 16A7DBDC0 */
#define g_16A7DBDC4                      (*(float *)&dword_140404A6C[177167574])      /* 16A7DBDC4 */
#define g_16A7DBDC8                      (*(float *)&dword_140404A6C[177167575])      /* 16A7DBDC8 */
#define g_16A7DBDCC                      (*(float *)&dword_140404A6C[177167576])      /* 16A7DBDCC */
#define g_16A7DBDD0                      (*(float *)&dword_140404A6C[177167577])      /* 16A7DBDD0 */
#define g_16A7DBDD4                      (*(float *)&dword_140404A6C[177167578])      /* 16A7DBDD4 */
#define g_16A7DBDD8                      (*(float *)&dword_140404A6C[177167579])      /* 16A7DBDD8 */
#define g_16A7DBDDC                      (*(float *)&dword_140404A6C[177167580])      /* 16A7DBDDC */
#define g_16A7DBDE0                      (*(float *)&dword_140404A6C[177167581])      /* 16A7DBDE0 */
#define g_16A7DBDE4                      (*(float *)&dword_140404A6C[177167582])      /* 16A7DBDE4 */
#define g_16A7DBDE8                      (*(float *)&dword_140404A6C[177167583])      /* 16A7DBDE8 */
#define g_16A7DBDEC                      (*(float *)&dword_140404A6C[177167584])      /* 16A7DBDEC */
#define g_16A7DBDF0                      (*(float *)&dword_140404A6C[177167585])      /* 16A7DBDF0 */
#define g_16A7DBDF4                      (*(float *)&dword_140404A6C[177167586])      /* 16A7DBDF4 */
#define g_16A7DBDF8                      (*(float *)&dword_140404A6C[177167587])      /* 16A7DBDF8 */
#define g_16A7DBDFC                      (*(float *)&dword_140404A6C[177167588])      /* 16A7DBDFC */
#define g_16A7DBE00                      (*(float *)&dword_140404A6C[177167589])      /* 16A7DBE00 */
#define g_16A7DBE04                      (*(float *)&dword_140404A6C[177167590])      /* 16A7DBE04 */
#define g_16A7DBE08                      (*(float *)&dword_140404A6C[177167591])      /* 16A7DBE08 */
#define g_16A7DBE14                      (*(float *)&dword_140404A6C[177167594])      /* 16A7DBE14 */
#define g_16A7DBE20                      (*(float *)&dword_140404A6C[177167597])      /* 16A7DBE20 */
#define g_16A7DBE2C                      (*(float *)&dword_140404A6C[177167600])      /* 16A7DBE2C */
#define g_16A80BD74                      dword_140404A6C[177216706]                   /* 16A80BD74 */
#define g_16A80BD7C                      dword_140404A6C[177216708]                   /* 16A80BD7C */
#define g_16A80BD80                      dword_140404A6C[177216709]                   /* 16A80BD80 */
#define g_16A80BD84                      dword_140404A6C[177216710]                   /* 16A80BD84 */
#define g_16A80BD88                      dword_140404A6C[177216711]                   /* 16A80BD88 */
#define g_16A80BD8C                      dword_140404A6C[177216712]                   /* 16A80BD8C */
#define g_16A80BD90                      dword_140404A6C[177216713]                   /* 16A80BD90 */
#define g_16A80BD94                      dword_140404A6C[177216714]                   /* 16A80BD94 */
#define g_16A80BD98                      dword_140404A6C[177216715]                   /* 16A80BD98 */
#define g_16A80BD9C                      dword_140404A6C[177216716]                   /* 16A80BD9C */
#define g_16A80BDA0                      dword_140404A6C[177216717]                   /* 16A80BDA0 */
#define g_16A80BDA4                      dword_140404A6C[177216718]                   /* 16A80BDA4 */
#define g_16A80BDA8                      dword_140404A6C[177216719]                   /* 16A80BDA8 */
#define g_16A80BDAC                      dword_140404A6C[177216720]                   /* 16A80BDAC */
#define g_16A80BDB0                      dword_140404A6C[177216721]                   /* 16A80BDB0 */
#define g_16A82BDB0                      dword_140404A6C[177249489]                   /* 16A82BDB0 */
#define g_16A88BDA8                      dword_140404A6C[177347791]                   /* 16A88BDA8 */
#define g_16A91BD98                      dword_140404A6C[177495243]                   /* 16A91BD98 */
#define g_16A91BD9C                      dword_140404A6C[177495244]                   /* 16A91BD9C */
#define g_16A91BDA0                      dword_140404A6C[177495245]                   /* 16A91BDA0 */
#define g_16A91BDA4                      dword_140404A6C[177495246]                   /* 16A91BDA4 */
#define mesh_triangle_count              dword_140404A6C[177495247]                   /* 16A91BDA8 triangles of the mesh being built */
#define g_16A91BDAC                      dword_140404A6C[177495248]                   /* 16A91BDAC */
#define g_16A91BDB0                      dword_140404A6C[177495249]                   /* 16A91BDB0 */
#define g_16A91BDB4                      dword_140404A6C[177495250]                   /* 16A91BDB4 */
#define g_16A91BDB8                      dword_140404A6C[177495251]                   /* 16A91BDB8 */
#define g_16A91BDBC                      dword_140404A6C[177495252]                   /* 16A91BDBC */
#define g_16A91BDC0                      dword_140404A6C[177495253]                   /* 16A91BDC0 */
#define g_16A91BDC4                      dword_140404A6C[177495254]                   /* 16A91BDC4 */
#define g_16A94BDAC                      dword_140404A6C[177544400]                   /* 16A94BDAC */
#define g_16A94BDB0                      dword_140404A6C[177544401]                   /* 16A94BDB0 */
#define g_16A94BDB4                      dword_140404A6C[177544402]                   /* 16A94BDB4 */
#define g_16A94BDB8                      dword_140404A6C[177544403]                   /* 16A94BDB8 */
#define g_16AA53DB0                      dword_140404A6C[177814737]                   /* 16AA53DB0 */
#define g_16AA53DB4                      dword_140404A6C[177814738]                   /* 16AA53DB4 */
#define g_16AA53DB8                      dword_140404A6C[177814739]                   /* 16AA53DB8 */
#define g_16AA83DB8                      dword_140404A6C[177863891]                   /* 16AA83DB8 */
#define g_16AB13DB0                      (*(_OWORD *)&dword_140404A6C[178011345])     /* 16AB13DB0 */
#define g_16AB13DB4                      dword_140404A6C[178011346]                   /* 16AB13DB4 */
#define g_16AB13DBC                      dword_140404A6C[178011348]                   /* 16AB13DBC */
#define g_16AB13DC0                      (*(_OWORD *)&dword_140404A6C[178011349])     /* 16AB13DC0 */
#define g_16AB13DD0                      (*(_OWORD *)&dword_140404A6C[178011353])     /* 16AB13DD0 */
#define g_16AB13DE0                      (*(_OWORD *)&dword_140404A6C[178011357])     /* 16AB13DE0 */
#define g_16AB13DF0                      (*(_OWORD *)&dword_140404A6C[178011361])     /* 16AB13DF0 */
#define g_16AB13E00                      (*(_OWORD *)&dword_140404A6C[178011365])     /* 16AB13E00 */
#define g_16AB13E40                      (*(_OWORD *)&dword_140404A6C[178011381])     /* 16AB13E40 */
#define g_16AB13E50                      (*(_OWORD *)&dword_140404A6C[178011385])     /* 16AB13E50 */
#define g_16AB13E60                      (*(_OWORD *)&dword_140404A6C[178011389])     /* 16AB13E60 */
#define g_16AB13EA0                      (*(_OWORD *)&dword_140404A6C[178011405])     /* 16AB13EA0 */
#define g_16AB13EB0                      (*(_OWORD *)&dword_140404A6C[178011409])     /* 16AB13EB0 */
#define g_16AB13EC0                      (*(_OWORD *)&dword_140404A6C[178011413])     /* 16AB13EC0 */
#define g_16AB13F00                      (*(_OWORD *)&dword_140404A6C[178011429])     /* 16AB13F00 */
#define g_16AB13F10                      (*(_OWORD *)&dword_140404A6C[178011433])     /* 16AB13F10 */
#define g_16AB13F20                      (*(_OWORD *)&dword_140404A6C[178011437])     /* 16AB13F20 */
#define g_16AB73DB0                      dword_140404A6C[178109649]                   /* 16AB73DB0 */
#define g_16ABA3DB0                      dword_140404A6C[178158801]                   /* 16ABA3DB0 */
#define g_16ABA3DB4                      dword_140404A6C[178158802]                   /* 16ABA3DB4 */
#define g_16ABD3DB0                      dword_140404A6C[178207953]                   /* 16ABD3DB0 */
#define g_16ABE3DB0                      dword_140404A6C[178224337]                   /* 16ABE3DB0 */
#define g_16ABE3DB4                      dword_140404A6C[178224338]                   /* 16ABE3DB4 */
#define g_16AC43DB0                      dword_140404A6C[178322641]                   /* 16AC43DB0 */
#define g_16AC43DB4                      dword_140404A6C[178322642]                   /* 16AC43DB4 */
#define g_16AC43DB8                      dword_140404A6C[178322643]                   /* 16AC43DB8 */
#define g_16AC43DBC                      dword_140404A6C[178322644]                   /* 16AC43DBC */
#define g_16AC43DC0                      dword_140404A6C[178322645]                   /* 16AC43DC0 */
#define g_16AC83DB8                      dword_140404A6C[178388179]                   /* 16AC83DB8 */
#define g_16AC83DC0                      dword_140404A6C[178388181]                   /* 16AC83DC0 */
#define g_16AC83DC8                      dword_140404A6C[178388183]                   /* 16AC83DC8 */
#define g_16AD03DB4                      dword_140404A6C[178519250]                   /* 16AD03DB4 */
#define g_16AD03DB8                      dword_140404A6C[178519251]                   /* 16AD03DB8 */
#define g_16AD03DBC                      dword_140404A6C[178519252]                   /* 16AD03DBC */
#define g_16AD0BE04                      dword_140404A6C[178527462]                   /* 16AD0BE04 */
#define g_16AD0BE10                      dword_140404A6C[178527465]                   /* 16AD0BE10 */
#define g_16AD0BE60                      dword_140404A6C[178527485]                   /* 16AD0BE60 */
#define g_16AD0BE64                      dword_140404A6C[178527486]                   /* 16AD0BE64 */
#define g_16AD0BE68                      dword_140404A6C[178527487]                   /* 16AD0BE68 */
#define g_16AD0BF2C                      dword_140404A6C[178527536]                   /* 16AD0BF2C */
#define g_16AD0BF30                      dword_140404A6C[178527537]                   /* 16AD0BF30 */
#define g_16AD0BF34                      dword_140404A6C[178527538]                   /* 16AD0BF34 */
#define g_16AD0BF38                      dword_140404A6C[178527539]                   /* 16AD0BF38 */
#define g_16AD0BF3C                      dword_140404A6C[178527540]                   /* 16AD0BF3C */
#define g_16AD0BF40                      dword_140404A6C[178527541]                   /* 16AD0BF40 */
#define g_16AD0BF44                      dword_140404A6C[178527542]                   /* 16AD0BF44 */
#define g_16AD0BF48                      dword_140404A6C[178527543]                   /* 16AD0BF48 */
#define g_16AD0BF4C                      dword_140404A6C[178527544]                   /* 16AD0BF4C */
#define g_16AD0BF50                      dword_140404A6C[178527545]                   /* 16AD0BF50 */
#define g_16AD0BF54                      dword_140404A6C[178527546]                   /* 16AD0BF54 */
#define g_16AD0BF58                      dword_140404A6C[178527547]                   /* 16AD0BF58 */
#define g_16AD0BF5C                      dword_140404A6C[178527548]                   /* 16AD0BF5C */
#define g_16B097E00                      dword_140404A6C[179457253]                   /* 16B097E00 */
#define g_16B097E04                      dword_140404A6C[179457254]                   /* 16B097E04 */
#define g_16B097E14                      dword_140404A6C[179457258]                   /* 16B097E14 */
#define g_16B097E18                      dword_140404A6C[179457259]                   /* 16B097E18 */
#define g_16B097E1C                      dword_140404A6C[179457260]                   /* 16B097E1C */
#define g_16B097E20                      dword_140404A6C[179457261]                   /* 16B097E20 */
#define g_16B097E24                      dword_140404A6C[179457262]                   /* 16B097E24 */
#define g_16B097E28                      dword_140404A6C[179457263]                   /* 16B097E28 */
#define g_16B097E2C                      dword_140404A6C[179457264]                   /* 16B097E2C */
#define g_16B097E3C                      dword_140404A6C[179457268]                   /* 16B097E3C */
#define g_16B097E4C                      dword_140404A6C[179457272]                   /* 16B097E4C */
#define g_16B097E50                      dword_140404A6C[179457273]                   /* 16B097E50 */
#define g_16B097E54                      dword_140404A6C[179457274]                   /* 16B097E54 */
#define g_16B097E58                      dword_140404A6C[179457275]                   /* 16B097E58 */
#define g_16B097E5C                      dword_140404A6C[179457276]                   /* 16B097E5C */
#define g_16B097E6C                      dword_140404A6C[179457280]                   /* 16B097E6C */
#define g_16B097E7C                      dword_140404A6C[179457284]                   /* 16B097E7C */
#define g_16B097E8C                      dword_140404A6C[179457288]                   /* 16B097E8C */
#define g_16B097E90                      dword_140404A6C[179457289]                   /* 16B097E90 */
#define g_16B097E94                      dword_140404A6C[179457290]                   /* 16B097E94 */
#define g_16B097E98                      dword_140404A6C[179457291]                   /* 16B097E98 */
#define g_16B097E9C                      dword_140404A6C[179457292]                   /* 16B097E9C */
#define g_16B097EA0                      dword_140404A6C[179457293]                   /* 16B097EA0 */
#define g_16B097EA4                      dword_140404A6C[179457294]                   /* 16B097EA4 */
#define g_16B097EA8                      dword_140404A6C[179457295]                   /* 16B097EA8 */
#define g_16B097EAC                      dword_140404A6C[179457296]                   /* 16B097EAC */
#define g_16B097EB0                      dword_140404A6C[179457297]                   /* 16B097EB0 */
#define g_16B097EB4                      dword_140404A6C[179457298]                   /* 16B097EB4 */
#define g_16B097EB8                      dword_140404A6C[179457299]                   /* 16B097EB8 */
#define g_16B097EBC                      dword_140404A6C[179457300]                   /* 16B097EBC */
#define g_16B097EC0                      dword_140404A6C[179457301]                   /* 16B097EC0 */
#define g_16B097EC4                      dword_140404A6C[179457302]                   /* 16B097EC4 */
#define g_16B097EC8                      dword_140404A6C[179457303]                   /* 16B097EC8 */
#define g_16B097ECC                      dword_140404A6C[179457304]                   /* 16B097ECC */
#define g_16B097ED0                      dword_140404A6C[179457305]                   /* 16B097ED0 */
#define g_16B097ED4                      dword_140404A6C[179457306]                   /* 16B097ED4 */
#define g_16B0A7EE0                      dword_140404A6C[179473693]                   /* 16B0A7EE0 */
#define g_16B0A7EE4                      dword_140404A6C[179473694]                   /* 16B0A7EE4 */
#define g_16B0A7F34                      dword_140404A6C[179473714]                   /* 16B0A7F34 */
#define g_16B15FF00                      dword_140404A6C[179662117]                   /* 16B15FF00 */
#define g_16B15FF24                      dword_140404A6C[179662126]                   /* 16B15FF24 */
#define g_16B15FF28                      dword_140404A6C[179662127]                   /* 16B15FF28 */
#define g_16B15FF2C                      dword_140404A6C[179662128]                   /* 16B15FF2C */
#define g_16B15FF30                      dword_140404A6C[179662129]                   /* 16B15FF30 */
#define g_16B15FF34                      dword_140404A6C[179662130]                   /* 16B15FF34 */
#define g_16B15FF38                      dword_140404A6C[179662131]                   /* 16B15FF38 */
#define g_16B15FF3C                      dword_140404A6C[179662132]                   /* 16B15FF3C */
#define g_16B15FF40                      (*(_OWORD *)&dword_140404A6C[179662133])     /* 16B15FF40 */
#define g_16B15FF50                      (*(_OWORD *)&dword_140404A6C[179662137])     /* 16B15FF50 */
#define g_16B15FF60                      (*(_OWORD *)&dword_140404A6C[179662141])     /* 16B15FF60 */
#define g_16B15FF70                      (*(_OWORD *)&dword_140404A6C[179662145])     /* 16B15FF70 */
#define g_16B160340                      dword_140404A6C[179662389]                   /* 16B160340 */
#define g_16B160794                      dword_140404A6C[179662666]                   /* 16B160794 */
#define g_16B161D94                      dword_140404A6C[179664074]                   /* 16B161D94 */
#define g_16B165F40                      dword_140404A6C[179668277]                   /* 16B165F40 */
#define g_16B165F44                      dword_140404A6C[179668278]                   /* 16B165F44 */
#define g_16B165F60                      dword_140404A6C[179668285]                   /* 16B165F60 */
#define g_16B165F64                      dword_140404A6C[179668286]                   /* 16B165F64 */
#define g_16B165F68                      dword_140404A6C[179668287]                   /* 16B165F68 */
#define g_16B165F6C                      dword_140404A6C[179668288]                   /* 16B165F6C */
#define game_unknown_16b165f70           dword_140404A6C[179668289]                   /* 16B165F70 src/engine/frame.h */
#define g_16B165F94                      dword_140404A6C[179668298]                   /* 16B165F94 */
#define game_unknown_16b1f5f74           dword_140404A6C[179815746]                   /* 16B1F5F74 src/engine/frame.h */
#define g_16B1F5F90                      dword_140404A6C[179815753]                   /* 16B1F5F90 */
#define g_16B22DF78                      dword_140404A6C[179873091]                   /* 16B22DF78 */
#define g_16B22DF94                      dword_140404A6C[179873098]                   /* 16B22DF94 */
#define g_16B265F7C                      dword_140404A6C[179930436]                   /* 16B265F7C */
#define g_16B27DF80                      dword_140404A6C[179955013]                   /* 16B27DF80 */
#define frame_start_time                 dword_140404A6C[179955014]                   /* 16B27DF84 src/engine/frame.h */
#define g_16B27DF88                      dword_140404A6C[179955015]                   /* 16B27DF88 */
#define g_16B27DF9C                      dword_140404A6C[179955020]                   /* 16B27DF9C */
#define g_16B27E01C                      dword_140404A6C[179955052]                   /* 16B27E01C */
#define g_16B27E08C                      dword_140404A6C[179955080]                   /* 16B27E08C */
#define g_16B27E090                      dword_140404A6C[179955081]                   /* 16B27E090 */
#define frame_duration_index             dword_140404A6C[179955082]                   /* 16B27E094 src/engine/frame.h */
#define frame_duration_average           (*(float *)&dword_140404A6C[179955147])      /* 16B27E198 src/engine/frame.h */
#define g_16B27E19C                      dword_140404A6C[179955148]                   /* 16B27E19C */
#define g_16B27E1A0                      dword_140404A6C[179955149]                   /* 16B27E1A0 */
#define g_16B27E3A0                      dword_140404A6C[179955277]                   /* 16B27E3A0 */
#define g_16B27E3A4                      dword_140404A6C[179955278]                   /* 16B27E3A4 */
#define g_16B27E3A8                      dword_140404A6C[179955279]                   /* 16B27E3A8 */
#define g_16B27E3AC                      dword_140404A6C[179955280]                   /* 16B27E3AC */
#define g_16B27E3B0                      dword_140404A6C[179955281]                   /* 16B27E3B0 */
#define g_16B27E3B8                      dword_140404A6C[179955283]                   /* 16B27E3B8 */
#define g_16B27ECC4                      dword_140404A6C[179955862]                   /* 16B27ECC4 */
#define g_16B27ECC8                      dword_140404A6C[179955863]                   /* 16B27ECC8 */
#define g_16B27ECCC                      dword_140404A6C[179955864]                   /* 16B27ECCC */
#define g_16B27ECD0                      dword_140404A6C[179955865]                   /* 16B27ECD0 */
#define g_16B27ECD4                      dword_140404A6C[179955866]                   /* 16B27ECD4 */
#define g_16B27ECD8                      dword_140404A6C[179955867]                   /* 16B27ECD8 */
#define g_16B27ECDC                      dword_140404A6C[179955868]                   /* 16B27ECDC */
#define g_16B27ECE0                      dword_140404A6C[179955869]                   /* 16B27ECE0 */
#define physics_points_no_gravity        dword_140404A6C[179955874]                   /* 16B27ECF4 src/engine/physics.h */
#define g_16B27ECFC                      dword_140404A6C[179955876]                   /* 16B27ECFC */
#define g_16B27EDC4                      dword_140404A6C[179955926]                   /* 16B27EDC4 */
#define g_16B27EDC8                      dword_140404A6C[179955927]                   /* 16B27EDC8 */
#define g_16B2A1DC8                      dword_140404A6C[179991767]                   /* 16B2A1DC8 */
#define g_16B2A21C8                      (*(_QWORD *)&dword_140404A6C[179992023])     /* 16B2A21C8 */
#define g_16B2A2210                      dword_140404A6C[179992041]                   /* 16B2A2210 */
#define g_16B2A2220                      dword_140404A6C[179992045]                   /* 16B2A2220 */
#define g_16B2A2224                      dword_140404A6C[179992046]                   /* 16B2A2224 */
#define g_16B2A222C                      dword_140404A6C[179992048]                   /* 16B2A222C */
#define g_16B2A2230                      dword_140404A6C[179992049]                   /* 16B2A2230 */
#define g_16B2A2234                      dword_140404A6C[179992050]                   /* 16B2A2234 */
#define g_16B2A2238                      dword_140404A6C[179992051]                   /* 16B2A2238 */
#define g_16B2A223C                      dword_140404A6C[179992052]                   /* 16B2A223C */
#define g_16B2A2240                      dword_140404A6C[179992053]                   /* 16B2A2240 */
#define g_16B2A2244                      dword_140404A6C[179992054]                   /* 16B2A2244 */
#define g_16B2A2248                      dword_140404A6C[179992055]                   /* 16B2A2248 */
#define g_16B2A224C                      dword_140404A6C[179992056]                   /* 16B2A224C */
#define g_16B2A2654                      dword_140404A6C[179992314]                   /* 16B2A2654 */
#define g_16B2A2A58                      dword_140404A6C[179992571]                   /* 16B2A2A58 */
#define g_16B2A2A60                      (*(_OWORD *)&dword_140404A6C[179992573])     /* 16B2A2A60 */
#define g_16B2A2A70                      (*(_OWORD *)&dword_140404A6C[179992577])     /* 16B2A2A70 */
#define g_16B2A2AA0                      dword_140404A6C[179992589]                   /* 16B2A2AA0 */
#define g_16B2A2AA4                      (*(_OWORD *)&dword_140404A6C[179992590])     /* 16B2A2AA4 */
#define g_16B2A2AB4                      (*(_OWORD *)&dword_140404A6C[179992594])     /* 16B2A2AB4 */
#define g_16B2A2AE4                      dword_140404A6C[179992606]                   /* 16B2A2AE4 */
#define g_16B2A2AE8                      (*(_OWORD *)&dword_140404A6C[179992607])     /* 16B2A2AE8 */
#define g_16B2A2AF8                      (*(_OWORD *)&dword_140404A6C[179992611])     /* 16B2A2AF8 */
#define g_16B2A2B28                      dword_140404A6C[179992623]                   /* 16B2A2B28 */
#define g_16B2A2B2C                      (*(_OWORD *)&dword_140404A6C[179992624])     /* 16B2A2B2C */
#define g_16B2A2B3C                      (*(_OWORD *)&dword_140404A6C[179992628])     /* 16B2A2B3C */
#define g_16B2A2B6C                      dword_140404A6C[179992640]                   /* 16B2A2B6C */
#define g_16B2A2B70                      (*(_OWORD *)&dword_140404A6C[179992641])     /* 16B2A2B70 */
#define g_16B2A2B80                      (*(_OWORD *)&dword_140404A6C[179992645])     /* 16B2A2B80 */
#define g_16B2A2BB0                      dword_140404A6C[179992657]                   /* 16B2A2BB0 */
#define g_16B2A2BB4                      (*(_OWORD *)&dword_140404A6C[179992658])     /* 16B2A2BB4 */
#define g_16B2A2BC4                      (*(_OWORD *)&dword_140404A6C[179992662])     /* 16B2A2BC4 */
#define g_16B2A2BF4                      dword_140404A6C[179992674]                   /* 16B2A2BF4 */
#define g_16B2A2BF8                      (*(_OWORD *)&dword_140404A6C[179992675])     /* 16B2A2BF8 */
#define g_16B2A2C08                      (*(_OWORD *)&dword_140404A6C[179992679])     /* 16B2A2C08 */
#define g_16B2A2C38                      dword_140404A6C[179992691]                   /* 16B2A2C38 */
#define g_16B2A2C3C                      (*(_OWORD *)&dword_140404A6C[179992692])     /* 16B2A2C3C */
#define g_16B2A2C4C                      (*(_OWORD *)&dword_140404A6C[179992696])     /* 16B2A2C4C */
#define g_16B2A2C7C                      dword_140404A6C[179992708]                   /* 16B2A2C7C */
#define g_16B2A2C80                      (*(_OWORD *)&dword_140404A6C[179992709])     /* 16B2A2C80 */
#define g_16B2A2C90                      (*(_OWORD *)&dword_140404A6C[179992713])     /* 16B2A2C90 */
#define g_16B2A2CC0                      dword_140404A6C[179992725]                   /* 16B2A2CC0 */
#define g_16B2A2CC4                      (*(_OWORD *)&dword_140404A6C[179992726])     /* 16B2A2CC4 */
#define g_16B2A2CD4                      (*(_OWORD *)&dword_140404A6C[179992730])     /* 16B2A2CD4 */
#define g_16B2A2D04                      dword_140404A6C[179992742]                   /* 16B2A2D04 */
#define g_16B2A2EA0                      dword_140404A6C[179992845]                   /* 16B2A2EA0 */
#define game_day_time                    dword_140404A6C[179992853]                   /* 16B2A2EC0 src/engine/frame.h */
#define g_16B2A2EC4                      dword_140404A6C[179992854]                   /* 16B2A2EC4 */
#define g_16B2A2EC8                      (*(float *)&dword_140404A6C[179992855])      /* 16B2A2EC8 */
#define g_16B2A2ECC                      (*(float *)&dword_140404A6C[179992856])      /* 16B2A2ECC */
#define g_16B2A2ED0                      dword_140404A6C[179992857]                   /* 16B2A2ED0 */
#define g_16B2A2ED4                      dword_140404A6C[179992858]                   /* 16B2A2ED4 */
#define g_16B2A2ED8                      dword_140404A6C[179992859]                   /* 16B2A2ED8 */
#define g_16B2A2EDC                      dword_140404A6C[179992860]                   /* 16B2A2EDC */
#define g_16B2A2EE0                      dword_140404A6C[179992861]                   /* 16B2A2EE0 */
#define g_16B2A2EE4                      dword_140404A6C[179992862]                   /* 16B2A2EE4 */
#define g_16B2A2EEC                      dword_140404A6C[179992864]                   /* 16B2A2EEC */
#define g_16B2AAEE4                      dword_140404A6C[180001054]                   /* 16B2AAEE4 */
#define g_16B2AAF18                      dword_140404A6C[180001067]                   /* 16B2AAF18 */
#define g_16B2AAF1C                      dword_140404A6C[180001068]                   /* 16B2AAF1C */
#define g_16B2AAF20                      dword_140404A6C[180001069]                   /* 16B2AAF20 */
#define g_16B2AAF28                      dword_140404A6C[180001071]                   /* 16B2AAF28 */
#define g_16B2AAF2C                      dword_140404A6C[180001072]                   /* 16B2AAF2C */
#define g_16B2AAF30                      dword_140404A6C[180001073]                   /* 16B2AAF30 */
#define g_16B2AAF34                      dword_140404A6C[180001074]                   /* 16B2AAF34 */
#define g_16B2AAF58                      dword_140404A6C[180001083]                   /* 16B2AAF58 */
#define g_16B2AAF5C                      dword_140404A6C[180001084]                   /* 16B2AAF5C */
#define g_16B2AB75C                      dword_140404A6C[180001596]                   /* 16B2AB75C */
#define g_16B2CCA30                      dword_140404A6C[180035569]                   /* 16B2CCA30 */
#define g_16B2CCB90                      dword_140404A6C[180035657]                   /* 16B2CCB90 */
#define g_16B2CCBD0                      dword_140404A6C[180035673]                   /* 16B2CCBD0 */
#define g_16B2CCC10                      dword_140404A6C[180035689]                   /* 16B2CCC10 */
#define g_16B2CCC50                      dword_140404A6C[180035705]                   /* 16B2CCC50 */
#define g_16B2CCC94                      dword_140404A6C[180035722]                   /* 16B2CCC94 */
#define g_16B2CCC9C                      dword_140404A6C[180035724]                   /* 16B2CCC9C */
#define g_16B2CCCA0                      dword_140404A6C[180035725]                   /* 16B2CCCA0 */
#define g_16B2CCCA8                      dword_140404A6C[180035727]                   /* 16B2CCCA8 */
#define g_16B2EEA10                      dword_140404A6C[180070377]                   /* 16B2EEA10 */
#define g_16B2EEA14                      dword_140404A6C[180070378]                   /* 16B2EEA14 */
#define g_16B2EEA1C                      dword_140404A6C[180070380]                   /* 16B2EEA1C */
#define g_16B310784                      dword_140404A6C[180105030]                   /* 16B310784 */
#define g_16B310788                      dword_140404A6C[180105031]                   /* 16B310788 */
#define g_16B310790                      dword_140404A6C[180105033]                   /* 16B310790 */
#define g_16B3324F8                      dword_140404A6C[180139683]                   /* 16B3324F8 */
#define g_16B3324FC                      dword_140404A6C[180139684]                   /* 16B3324FC */
#define g_16B332504                      dword_140404A6C[180139686]                   /* 16B332504 */
#define g_16B35426C                      dword_140404A6C[180174336]                   /* 16B35426C */
#define g_16B354270                      dword_140404A6C[180174337]                   /* 16B354270 */
#define g_16B354278                      dword_140404A6C[180174339]                   /* 16B354278 */
#define g_16B375FE0                      dword_140404A6C[180208989]                   /* 16B375FE0 */
#define g_16B375FE4                      dword_140404A6C[180208990]                   /* 16B375FE4 */
#define g_16D482320                      (*(_QWORD *)&dword_140404A6C[188872237])     /* 16D482320 */
#define g_16D48232C                      dword_140404A6C[188872240]                   /* 16D48232C */
#define g_16D482330                      dword_140404A6C[188872241]                   /* 16D482330 */
#define g_16D482334                      (*(_QWORD *)&dword_140404A6C[188872242])     /* 16D482334 */
#define g_16D482340                      dword_140404A6C[188872245]                   /* 16D482340 */
#define g_16D482344                      dword_140404A6C[188872246]                   /* 16D482344 */
#define g_16D482348                      (*(_QWORD *)&dword_140404A6C[188872247])     /* 16D482348 */
#define g_16D482354                      dword_140404A6C[188872250]                   /* 16D482354 */
#define g_16D482358                      dword_140404A6C[188872251]                   /* 16D482358 */
#define g_16D48235C                      (*(_QWORD *)&dword_140404A6C[188872252])     /* 16D48235C */
#define g_16D482368                      dword_140404A6C[188872255]                   /* 16D482368 */
#define g_16D48236C                      dword_140404A6C[188872256]                   /* 16D48236C */
#define g_16D482370                      (*(_QWORD *)&dword_140404A6C[188872257])     /* 16D482370 */
#define g_16D48237C                      dword_140404A6C[188872260]                   /* 16D48237C */
#define g_16D482380                      dword_140404A6C[188872261]                   /* 16D482380 */
#define g_16D482384                      (*(_QWORD *)&dword_140404A6C[188872262])     /* 16D482384 */
#define g_16D482390                      dword_140404A6C[188872265]                   /* 16D482390 */
#define g_16D482394                      dword_140404A6C[188872266]                   /* 16D482394 */
#define g_16D4823A8                      dword_140404A6C[188872271]                   /* 16D4823A8 */
#define g_16D4823BC                      dword_140404A6C[188872276]                   /* 16D4823BC */
#define g_16D4823D0                      dword_140404A6C[188872281]                   /* 16D4823D0 */
#define g_16D4823E4                      dword_140404A6C[188872286]                   /* 16D4823E4 */
#define g_16D4823F8                      dword_140404A6C[188872291]                   /* 16D4823F8 */
#define g_16D48240C                      dword_140404A6C[188872296]                   /* 16D48240C */
#define g_16D482420                      dword_140404A6C[188872301]                   /* 16D482420 */
#define g_16D482434                      dword_140404A6C[188872306]                   /* 16D482434 */
#define g_16D482448                      dword_140404A6C[188872311]                   /* 16D482448 */
#define g_16D48245C                      dword_140404A6C[188872316]                   /* 16D48245C */
#define g_16D482470                      dword_140404A6C[188872321]                   /* 16D482470 */
#define g_16D482484                      dword_140404A6C[188872326]                   /* 16D482484 */
#define g_16D482498                      dword_140404A6C[188872331]                   /* 16D482498 */
#define g_16D4824AC                      dword_140404A6C[188872336]                   /* 16D4824AC */
#define g_16D4824C0                      dword_140404A6C[188872341]                   /* 16D4824C0 */
#define g_16D4824D4                      dword_140404A6C[188872346]                   /* 16D4824D4 */
#define g_16D4824E8                      dword_140404A6C[188872351]                   /* 16D4824E8 */
#define g_16D4824FC                      dword_140404A6C[188872356]                   /* 16D4824FC */
#define g_16D482510                      dword_140404A6C[188872361]                   /* 16D482510 */
#define g_16D482524                      dword_140404A6C[188872366]                   /* 16D482524 */
#define g_16D482538                      dword_140404A6C[188872371]                   /* 16D482538 */
#define g_16D48254C                      dword_140404A6C[188872376]                   /* 16D48254C */
#define g_16D482560                      dword_140404A6C[188872381]                   /* 16D482560 */
#define g_16D482574                      dword_140404A6C[188872386]                   /* 16D482574 */
#define g_16D482588                      dword_140404A6C[188872391]                   /* 16D482588 */
#define g_16D48259C                      dword_140404A6C[188872396]                   /* 16D48259C */
#define g_16D4825B0                      dword_140404A6C[188872401]                   /* 16D4825B0 */
#define g_16D4825C4                      dword_140404A6C[188872406]                   /* 16D4825C4 */
#define g_16D4825D8                      dword_140404A6C[188872411]                   /* 16D4825D8 */
#define g_16D4825EC                      dword_140404A6C[188872416]                   /* 16D4825EC */
#define g_16D482600                      dword_140404A6C[188872421]                   /* 16D482600 */
#define g_16D482614                      dword_140404A6C[188872426]                   /* 16D482614 */
#define g_16D482628                      dword_140404A6C[188872431]                   /* 16D482628 */
#define g_16D48263C                      dword_140404A6C[188872436]                   /* 16D48263C */
#define g_16D482650                      dword_140404A6C[188872441]                   /* 16D482650 */
#define g_16D482664                      dword_140404A6C[188872446]                   /* 16D482664 */
#define g_16D482678                      dword_140404A6C[188872451]                   /* 16D482678 */
#define g_16D48268C                      dword_140404A6C[188872456]                   /* 16D48268C */
#define g_16D4826A0                      dword_140404A6C[188872461]                   /* 16D4826A0 */
#define g_16D4826B4                      dword_140404A6C[188872466]                   /* 16D4826B4 */
#define g_16D4826C8                      dword_140404A6C[188872471]                   /* 16D4826C8 */
#define g_16D4826DC                      dword_140404A6C[188872476]                   /* 16D4826DC */
#define g_16D4826F0                      dword_140404A6C[188872481]                   /* 16D4826F0 */
#define g_16D482704                      dword_140404A6C[188872486]                   /* 16D482704 */
#define g_16D482718                      dword_140404A6C[188872491]                   /* 16D482718 */
#define g_16D48272C                      dword_140404A6C[188872496]                   /* 16D48272C */
#define g_16D482740                      dword_140404A6C[188872501]                   /* 16D482740 */
#define g_16D482754                      dword_140404A6C[188872506]                   /* 16D482754 */
#define g_16D482768                      dword_140404A6C[188872511]                   /* 16D482768 */
#define g_16D48277C                      dword_140404A6C[188872516]                   /* 16D48277C */
#define g_16D482790                      dword_140404A6C[188872521]                   /* 16D482790 */
#define g_16D4827A4                      dword_140404A6C[188872526]                   /* 16D4827A4 */
#define g_16D4827B8                      dword_140404A6C[188872531]                   /* 16D4827B8 */
#define g_16D4827CC                      dword_140404A6C[188872536]                   /* 16D4827CC */
#define g_16D4827E0                      dword_140404A6C[188872541]                   /* 16D4827E0 */
#define g_16D4827F4                      dword_140404A6C[188872546]                   /* 16D4827F4 */
#define g_16D482808                      dword_140404A6C[188872551]                   /* 16D482808 */
#define g_16D48281C                      dword_140404A6C[188872556]                   /* 16D48281C */
#define g_16D482820                      dword_140404A6C[188872557]                   /* 16D482820 */
#define g_16D482828                      dword_140404A6C[188872559]                   /* 16D482828 */
#define g_16D48282C                      dword_140404A6C[188872560]                   /* 16D48282C */
#define g_16D482830                      dword_140404A6C[188872561]                   /* 16D482830 */
#define g_16D4A4094                      dword_140404A6C[188906890]                   /* 16D4A4094 */
#define g_16E486848                      (*(_QWORD *)&dword_140404A6C[193070967])     /* 16E486848 */
#define g_16E486864                      dword_140404A6C[193070974]                   /* 16E486864 */
#define g_16E486868                      dword_140404A6C[193070975]                   /* 16E486868 */
#define g_16E48686C                      (*(_QWORD *)&dword_140404A6C[193070976])     /* 16E48686C */
#define g_16E486878                      dword_140404A6C[193070979]                   /* 16E486878 */
#define g_16E486880                      dword_140404A6C[193070981]                   /* 16E486880 */
#define g_16E486884                      dword_140404A6C[193070982]                   /* 16E486884 */
#define g_16E48987C                      dword_140404A6C[193074052]                   /* 16E48987C */
#define g_16E489880                      dword_140404A6C[193074053]                   /* 16E489880 */
#define g_16E489884                      dword_140404A6C[193074054]                   /* 16E489884 */
#define g_16E48988C                      dword_140404A6C[193074056]                   /* 16E48988C */
#define g_16E489894                      dword_140404A6C[193074058]                   /* 16E489894 */
#define g_16E492084                      dword_140404A6C[193082758]                   /* 16E492084 */
#define g_16E4920C8                      dword_140404A6C[193082775]                   /* 16E4920C8 */
#define g_16E4920CC                      dword_140404A6C[193082776]                   /* 16E4920CC */
#define g_16E4922D0                      dword_140404A6C[193082905]                   /* 16E4922D0 */
#define g_16E4922D4                      dword_140404A6C[193082906]                   /* 16E4922D4 */
#define g_16E4922D8                      dword_140404A6C[193082907]                   /* 16E4922D8 */
#define g_16E4922DC                      dword_140404A6C[193082908]                   /* 16E4922DC */
#define g_1726DA088                      dword_140404A6C[210457991]                   /* 1726DA088 */
#define g_1726DA090                      dword_140404A6C[210457993]                   /* 1726DA090 */
#define g_1726DA094                      dword_140404A6C[210457994]                   /* 1726DA094 */
#define g_1726DA098                      dword_140404A6C[210457995]                   /* 1726DA098 */
#define g_1726DC89C                      dword_140404A6C[210460556]                   /* 1726DC89C */
#define g_175EEA08C                      dword_140404A6C[225154440]                   /* 175EEA08C */
#define g_175EEA090                      (*(_QWORD *)&dword_140404A6C[225154441])     /* 175EEA090 */
#define g_175EFA090                      dword_140404A6C[225170825]                   /* 175EFA090 */
#define g_175EFB090                      dword_140404A6C[225171849]                   /* 175EFB090 */
#define g_175EFB094                      dword_140404A6C[225171850]                   /* 175EFB094 */
#define g_175EFB0DC                      dword_140404A6C[225171868]                   /* 175EFB0DC */
#define g_175EFB0E0                      dword_140404A6C[225171869]                   /* 175EFB0E0 */
#define g_175EFB0EC                      dword_140404A6C[225171872]                   /* 175EFB0EC */
#define g_175EFB0F0                      dword_140404A6C[225171873]                   /* 175EFB0F0 */
#define g_175FBB094                      dword_140404A6C[225368458]                   /* 175FBB094 */
#define g_175FBB3E4                      dword_140404A6C[225368670]                   /* 175FBB3E4 */
#define g_175FD13A0                      (*(_OWORD *)&dword_140404A6C[225391181])     /* 175FD13A0 */
#define g_175FD13B0                      (*(_OWORD *)&dword_140404A6C[225391185])     /* 175FD13B0 */
#define g_175FD13BC                      dword_140404A6C[225391188]                   /* 175FD13BC */
#define g_175FD13C0                      (*(_OWORD *)&dword_140404A6C[225391189])     /* 175FD13C0 */
#define g_175FD13D0                      (*(_OWORD *)&dword_140404A6C[225391193])     /* 175FD13D0 */
#define g_175FD13E0                      dword_140404A6C[225391197]                   /* 175FD13E0 */
#define g_175FD13E4                      dword_140404A6C[225391198]                   /* 175FD13E4 */
#define g_175FD1400                      dword_140404A6C[225391205]                   /* 175FD1400 */
#define g_175FD1404                      dword_140404A6C[225391206]                   /* 175FD1404 */
#define g_175FD1444                      dword_140404A6C[225391222]                   /* 175FD1444 */
#define g_175FD144C                      dword_140404A6C[225391224]                   /* 175FD144C */
#define g_175FD1450                      dword_140404A6C[225391225]                   /* 175FD1450 */
#define g_175FD1454                      dword_140404A6C[225391226]                   /* 175FD1454 */
#define g_175FD1458                      dword_140404A6C[225391227]                   /* 175FD1458 */
#define g_175FD145C                      dword_140404A6C[225391228]                   /* 175FD145C */
#define g_175FD1460                      dword_140404A6C[225391229]                   /* 175FD1460 */
#define g_175FD1464                      dword_140404A6C[225391230]                   /* 175FD1464 */
#define g_175FD1468                      dword_140404A6C[225391231]                   /* 175FD1468 */
#define g_175FD146C                      dword_140404A6C[225391232]                   /* 175FD146C */
#define g_175FD147C                      dword_140404A6C[225391236]                   /* 175FD147C */
#define g_175FD1480                      dword_140404A6C[225391237]                   /* 175FD1480 */
#define g_175FD148C                      dword_140404A6C[225391240]                   /* 175FD148C */
#define g_175FD1490                      dword_140404A6C[225391241]                   /* 175FD1490 */
#define g_175FD14A8                      dword_140404A6C[225391247]                   /* 175FD14A8 */
#define g_175FD14B8                      dword_140404A6C[225391251]                   /* 175FD14B8 */
#define g_175FD14D4                      dword_140404A6C[225391258]                   /* 175FD14D4 */
#define g_175FD14E0                      dword_140404A6C[225391261]                   /* 175FD14E0 */
#define g_175FD1684                      dword_140404A6C[225391366]                   /* 175FD1684 */
#define g_175FD517C                      dword_140404A6C[225395140]                   /* 175FD517C */
#define g_175FF3464                      dword_140404A6C[225426046]                   /* 175FF3464 */
#define g_175FF348C                      dword_140404A6C[225426056]                   /* 175FF348C */
#define g_175FF3490                      dword_140404A6C[225426057]                   /* 175FF3490 */
#define g_175FF3494                      dword_140404A6C[225426058]                   /* 175FF3494 */
#define g_175FF3498                      dword_140404A6C[225426059]                   /* 175FF3498 */
#define g_175FF349C                      dword_140404A6C[225426060]                   /* 175FF349C */
#define g_175FF34A0                      dword_140404A6C[225426061]                   /* 175FF34A0 */
#define g_175FF34A8                      dword_140404A6C[225426063]                   /* 175FF34A8 */
#define g_175FF34AC                      dword_140404A6C[225426064]                   /* 175FF34AC */
#define g_175FF34B0                      dword_140404A6C[225426065]                   /* 175FF34B0 */
#define g_175FF34B4                      dword_140404A6C[225426066]                   /* 175FF34B4 */
#define g_175FF34B8                      dword_140404A6C[225426067]                   /* 175FF34B8 */
#define g_175FF34BC                      dword_140404A6C[225426068]                   /* 175FF34BC */
#define g_175FF3664                      dword_140404A6C[225426174]                   /* 175FF3664 */
#define g_175FF3668                      dword_140404A6C[225426175]                   /* 175FF3668 */
#define g_175FF366C                      dword_140404A6C[225426176]                   /* 175FF366C */
#define g_175FF3670                      dword_140404A6C[225426177]                   /* 175FF3670 */
#define g_175FF3674                      dword_140404A6C[225426178]                   /* 175FF3674 */
#define g_175FF3678                      dword_140404A6C[225426179]                   /* 175FF3678 */
#define g_175FF3688                      dword_140404A6C[225426183]                   /* 175FF3688 */
#define g_175FF3694                      dword_140404A6C[225426186]                   /* 175FF3694 */
#define g_17600D330                      dword_140404A6C[225452593]                   /* 17600D330 */
#define g_17600D960                      dword_140404A6C[225452989]                   /* 17600D960 */
#define g_1760B9468                      dword_140404A6C[225628799]                   /* 1760B9468 */
#define g_1760BF46C                      dword_140404A6C[225634944]                   /* 1760BF46C */
#define g_1760C5470                      dword_140404A6C[225641089]                   /* 1760C5470 */
#define item_block_region_count          dword_140404A6C[225641186]                   /* 1760C55F4 src/engine/item.h */
#define g_1760C5638                      dword_140404A6C[225641203]                   /* 1760C5638 */
#define g_1760C5684                      dword_140404A6C[225641222]                   /* 1760C5684 */
#define g_1760C5824                      dword_140404A6C[225641326]                   /* 1760C5824 */
#define g_1760C5828                      dword_140404A6C[225641327]                   /* 1760C5828 */
#define g_1760C582C                      dword_140404A6C[225641328]                   /* 1760C582C */
#define g_1760C5830                      dword_140404A6C[225641329]                   /* 1760C5830 */
#define g_1760C5834                      dword_140404A6C[225641330]                   /* 1760C5834 */
#define g_1760C5838                      dword_140404A6C[225641331]                   /* 1760C5838 */
#define g_1760C583C                      dword_140404A6C[225641332]                   /* 1760C583C */
#define g_1760C5840                      dword_140404A6C[225641333]                   /* 1760C5840 */
#define g_1760C5844                      dword_140404A6C[225641334]                   /* 1760C5844 */
#define g_1760C5848                      dword_140404A6C[225641335]                   /* 1760C5848 */
#define g_1760C584C                      dword_140404A6C[225641336]                   /* 1760C584C */
#define g_1760C5850                      dword_140404A6C[225641337]                   /* 1760C5850 */
#define g_1760C5854                      dword_140404A6C[225641338]                   /* 1760C5854 */
#define g_1760C5858                      dword_140404A6C[225641339]                   /* 1760C5858 */
#define g_1760C585C                      dword_140404A6C[225641340]                   /* 1760C585C */
#define g_1760C5860                      dword_140404A6C[225641341]                   /* 1760C5860 */
#define g_1760C5864                      dword_140404A6C[225641342]                   /* 1760C5864 */
#define g_1760C5868                      dword_140404A6C[225641343]                   /* 1760C5868 */
#define g_1760C586C                      dword_140404A6C[225641344]                   /* 1760C586C */
#define g_1760D202C                      dword_140404A6C[225654128]                   /* 1760D202C */
#define g_1760D2100                      dword_140404A6C[225654181]                   /* 1760D2100 */
#define g_17CE4B61C                      dword_140404A6C[254352108]                   /* 17CE4B61C */
#define g_17CE6F5F8                      dword_140404A6C[254388963]                   /* 17CE6F5F8 */
#define g_17CE6F61C                      dword_140404A6C[254388972]                   /* 17CE6F61C */
#define g_180E6F600                      dword_140404A6C[271166181]                   /* 180E6F600 */
#define g_180E6F604                      dword_140404A6C[271166182]                   /* 180E6F604 */
#define g_180E6F608                      dword_140404A6C[271166183]                   /* 180E6F608 */
#define g_180E6F60C                      dword_140404A6C[271166184]                   /* 180E6F60C */
#define g_180E6F610                      dword_140404A6C[271166185]                   /* 180E6F610 */
#define g_180E6F614                      dword_140404A6C[271166186]                   /* 180E6F614 */
#define g_180E6F618                      dword_140404A6C[271166187]                   /* 180E6F618 */
#define g_180E6F620                      dword_140404A6C[271166189]                   /* 180E6F620 */
#define g_180E6F624                      dword_140404A6C[271166190]                   /* 180E6F624 */
#define g_180E7F720                      dword_140404A6C[271182637]                   /* 180E7F720 */
#define g_180FFF760                      dword_140404A6C[271575869]                   /* 180FFF760 */
#define g_180FFF764                      dword_140404A6C[271575870]                   /* 180FFF764 */
#define g_1810FF780                      dword_140404A6C[271838021]                   /* 1810FF780 */
#define g_1810FF784                      dword_140404A6C[271838022]                   /* 1810FF784 */
#define g_1810FF788                      dword_140404A6C[271838023]                   /* 1810FF788 */
#define g_1810FF78C                      dword_140404A6C[271838024]                   /* 1810FF78C */
#define g_1810FF790                      dword_140404A6C[271838025]                   /* 1810FF790 */
#define g_1810FF794                      dword_140404A6C[271838026]                   /* 1810FF794 */
#define g_1810FF798                      dword_140404A6C[271838027]                   /* 1810FF798 */
#define g_1810FF7A0                      dword_140404A6C[271838029]                   /* 1810FF7A0 */
#define g_1811177A0                      dword_140404A6C[271862605]                   /* 1811177A0 */
#define g_1811177A4                      dword_140404A6C[271862606]                   /* 1811177A4 */
#define g_1811177A8                      dword_140404A6C[271862607]                   /* 1811177A8 */
#define g_1811177AC                      dword_140404A6C[271862608]                   /* 1811177AC */
#define g_1811177B0                      dword_140404A6C[271862609]                   /* 1811177B0 */
#define g_1811177B8                      dword_140404A6C[271862611]                   /* 1811177B8 */
#define g_18112F7B8                      dword_140404A6C[271887187]                   /* 18112F7B8 */
#define g_18112F7BC                      dword_140404A6C[271887188]                   /* 18112F7BC */
#define g_18112F7C0                      dword_140404A6C[271887189]                   /* 18112F7C0 */
#define g_18112F7C4                      dword_140404A6C[271887190]                   /* 18112F7C4 */
#define g_18112F7C8                      dword_140404A6C[271887191]                   /* 18112F7C8 */
#define g_18112F7D0                      dword_140404A6C[271887193]                   /* 18112F7D0 */
#define g_1811477CC                      dword_140404A6C[271911768]                   /* 1811477CC */
#define g_1811477D0                      dword_140404A6C[271911769]                   /* 1811477D0 */
#define g_1811477D4                      dword_140404A6C[271911770]                   /* 1811477D4 */
#define g_1811477D8                      dword_140404A6C[271911771]                   /* 1811477D8 */
#define g_1811477DC                      dword_140404A6C[271911772]                   /* 1811477DC */
#define g_1811477E0                      dword_140404A6C[271911773]                   /* 1811477E0 */
#define g_1811477E8                      dword_140404A6C[271911775]                   /* 1811477E8 */
#define g_18115F7E8                      dword_140404A6C[271936351]                   /* 18115F7E8 */
#define g_18115F7EC                      dword_140404A6C[271936352]                   /* 18115F7EC */
#define g_18115F7F0                      dword_140404A6C[271936353]                   /* 18115F7F0 */
#define g_18115F7F4                      dword_140404A6C[271936354]                   /* 18115F7F4 */
#define g_18115F7F8                      dword_140404A6C[271936355]                   /* 18115F7F8 */
#define g_18115F800                      dword_140404A6C[271936357]                   /* 18115F800 */
#define g_181177800                      dword_140404A6C[271960933]                   /* 181177800 */
#define g_181177804                      dword_140404A6C[271960934]                   /* 181177804 */
#define g_181177808                      dword_140404A6C[271960935]                   /* 181177808 */
#define g_18117780C                      dword_140404A6C[271960936]                   /* 18117780C */
#define g_181177810                      dword_140404A6C[271960937]                   /* 181177810 */
#define g_181177818                      dword_140404A6C[271960939]                   /* 181177818 */
#define g_18118F818                      dword_140404A6C[271985515]                   /* 18118F818 */
#define g_18118F81C                      dword_140404A6C[271985516]                   /* 18118F81C */
#define g_18118F820                      dword_140404A6C[271985517]                   /* 18118F820 */
#define g_18118F824                      dword_140404A6C[271985518]                   /* 18118F824 */
#define g_18118F828                      dword_140404A6C[271985519]                   /* 18118F828 */
#define g_18118F830                      dword_140404A6C[271985521]                   /* 18118F830 */
#define g_1811BF848                      dword_140404A6C[272034679]                   /* 1811BF848 */
#define g_1811BF850                      dword_140404A6C[272034681]                   /* 1811BF850 */
#define g_1811BF858                      dword_140404A6C[272034683]                   /* 1811BF858 */
#define g_1811BF86C                      dword_140404A6C[272034688]                   /* 1811BF86C */
#define g_1811BF870                      dword_140404A6C[272034689]                   /* 1811BF870 */
#define g_1811BF878                      dword_140404A6C[272034691]                   /* 1811BF878 */
#define g_181290040                      (*(float *)&dword_140404A6C[272248181])      /* 181290040 */
#define g_181290044                      dword_140404A6C[272248182]                   /* 181290044 */
#define g_181290048                      (*(float *)&dword_140404A6C[272248183])      /* 181290048 */
#define g_181290050                      (*(_QWORD *)&dword_140404A6C[272248185])     /* 181290050 */
#define g_181290070                      dword_140404A6C[272248193]                   /* 181290070 */
#define g_181290078                      dword_140404A6C[272248195]                   /* 181290078 */
#define g_1812C2060                      dword_140404A6C[272299389]                   /* 1812C2060 */
#define g_1812C2080                      dword_140404A6C[272299397]                   /* 1812C2080 */
#define g_1812C20CC                      dword_140404A6C[272299416]                   /* 1812C20CC */
#define g_1812C20D0                      dword_140404A6C[272299417]                   /* 1812C20D0 */
#define g_1812C2114                      dword_140404A6C[272299434]                   /* 1812C2114 */
#define g_1812C2120                      dword_140404A6C[272299437]                   /* 1812C2120 */
#define g_1812C212C                      dword_140404A6C[272299440]                   /* 1812C212C */
#define g_1812C2138                      dword_140404A6C[272299443]                   /* 1812C2138 */
#define g_1812C2F9C                      dword_140404A6C[272300364]                   /* 1812C2F9C */
#define g_1812C2FE0                      dword_140404A6C[272300381]                   /* 1812C2FE0 */
#define g_1812C2FE4                      (*(_OWORD *)&dword_140404A6C[272300382])     /* 1812C2FE4 */
#define g_1812C2FF4                      (*(_OWORD *)&dword_140404A6C[272300386])     /* 1812C2FF4 */
#define g_1812C3004                      (*(_OWORD *)&dword_140404A6C[272300390])     /* 1812C3004 */
#define g_1812C3054                      dword_140404A6C[272300410]                   /* 1812C3054 */
#define g_1812C3058                      (*(_OWORD *)&dword_140404A6C[272300411])     /* 1812C3058 */
#define g_1812C3068                      (*(_OWORD *)&dword_140404A6C[272300415])     /* 1812C3068 */
#define g_1812C3078                      (*(_OWORD *)&dword_140404A6C[272300419])     /* 1812C3078 */
#define g_1812C30C8                      dword_140404A6C[272300439]                   /* 1812C30C8 */
#define g_1812C30CC                      (*(_OWORD *)&dword_140404A6C[272300440])     /* 1812C30CC */
#define g_1812C30DC                      (*(_OWORD *)&dword_140404A6C[272300444])     /* 1812C30DC */
#define g_1812C30EC                      (*(_OWORD *)&dword_140404A6C[272300448])     /* 1812C30EC */
#define g_1812C313C                      dword_140404A6C[272300468]                   /* 1812C313C */
#define g_1812C3140                      (*(_OWORD *)&dword_140404A6C[272300469])     /* 1812C3140 */
#define g_1812C3150                      (*(_OWORD *)&dword_140404A6C[272300473])     /* 1812C3150 */
#define g_1812C3160                      (*(_OWORD *)&dword_140404A6C[272300477])     /* 1812C3160 */
#define g_1812C31B0                      dword_140404A6C[272300497]                   /* 1812C31B0 */
#define g_1812C31B4                      (*(_OWORD *)&dword_140404A6C[272300498])     /* 1812C31B4 */
#define g_1812C31C4                      (*(_OWORD *)&dword_140404A6C[272300502])     /* 1812C31C4 */
#define g_1812C31D4                      (*(_OWORD *)&dword_140404A6C[272300506])     /* 1812C31D4 */
#define g_1812C3224                      dword_140404A6C[272300526]                   /* 1812C3224 */
#define g_1812C3228                      (*(_OWORD *)&dword_140404A6C[272300527])     /* 1812C3228 */
#define g_1812C3238                      (*(_OWORD *)&dword_140404A6C[272300531])     /* 1812C3238 */
#define g_1812C3248                      (*(_OWORD *)&dword_140404A6C[272300535])     /* 1812C3248 */
#define g_1812C3298                      dword_140404A6C[272300555]                   /* 1812C3298 */
#define g_1812C329C                      (*(_OWORD *)&dword_140404A6C[272300556])     /* 1812C329C */
#define g_1812C32AC                      (*(_OWORD *)&dword_140404A6C[272300560])     /* 1812C32AC */
#define g_1812C32BC                      (*(_OWORD *)&dword_140404A6C[272300564])     /* 1812C32BC */
#define g_1812C3E6C                      dword_140404A6C[272301312]                   /* 1812C3E6C */
#define g_1812C3EB0                      dword_140404A6C[272301329]                   /* 1812C3EB0 */
#define g_1812C3EB4                      (*(_OWORD *)&dword_140404A6C[272301330])     /* 1812C3EB4 */
#define g_1812C3EC4                      (*(_OWORD *)&dword_140404A6C[272301334])     /* 1812C3EC4 */
#define g_1812C3ED4                      (*(_OWORD *)&dword_140404A6C[272301338])     /* 1812C3ED4 */
#define g_1812C3F24                      dword_140404A6C[272301358]                   /* 1812C3F24 */
#define g_1812C3F28                      (*(_OWORD *)&dword_140404A6C[272301359])     /* 1812C3F28 */
#define g_1812C3F38                      (*(_OWORD *)&dword_140404A6C[272301363])     /* 1812C3F38 */
#define g_1812C3F48                      (*(_OWORD *)&dword_140404A6C[272301367])     /* 1812C3F48 */
#define g_1812C3F98                      dword_140404A6C[272301387]                   /* 1812C3F98 */
#define g_1812C3F9C                      (*(_OWORD *)&dword_140404A6C[272301388])     /* 1812C3F9C */
#define g_1812C3FAC                      (*(_OWORD *)&dword_140404A6C[272301392])     /* 1812C3FAC */
#define g_1812C3FBC                      (*(_OWORD *)&dword_140404A6C[272301396])     /* 1812C3FBC */
#define g_1812C4D3C                      dword_140404A6C[272302260]                   /* 1812C4D3C */
#define g_1812C4D80                      dword_140404A6C[272302277]                   /* 1812C4D80 */
#define g_1812C4D84                      (*(_OWORD *)&dword_140404A6C[272302278])     /* 1812C4D84 */
#define g_1812C4D94                      (*(_OWORD *)&dword_140404A6C[272302282])     /* 1812C4D94 */
#define g_1812C4DA4                      (*(_OWORD *)&dword_140404A6C[272302286])     /* 1812C4DA4 */
#define g_1812C4DF4                      dword_140404A6C[272302306]                   /* 1812C4DF4 */
#define g_1812C4DF8                      (*(_OWORD *)&dword_140404A6C[272302307])     /* 1812C4DF8 */
#define g_1812C4E08                      (*(_OWORD *)&dword_140404A6C[272302311])     /* 1812C4E08 */
#define g_1812C4E18                      (*(_OWORD *)&dword_140404A6C[272302315])     /* 1812C4E18 */
#define g_1812C4E68                      dword_140404A6C[272302335]                   /* 1812C4E68 */
#define g_1812C4E6C                      (*(_OWORD *)&dword_140404A6C[272302336])     /* 1812C4E6C */
#define g_1812C4E7C                      (*(_OWORD *)&dword_140404A6C[272302340])     /* 1812C4E7C */
#define g_1812C4E8C                      (*(_OWORD *)&dword_140404A6C[272302344])     /* 1812C4E8C */
#define g_1812C4EDC                      dword_140404A6C[272302364]                   /* 1812C4EDC */
#define g_1812C4EE0                      (*(_OWORD *)&dword_140404A6C[272302365])     /* 1812C4EE0 */
#define g_1812C4EF0                      (*(_OWORD *)&dword_140404A6C[272302369])     /* 1812C4EF0 */
#define g_1812C4F00                      (*(_OWORD *)&dword_140404A6C[272302373])     /* 1812C4F00 */
#define g_1812C4F50                      dword_140404A6C[272302393]                   /* 1812C4F50 */
#define g_1812C4F54                      (*(_OWORD *)&dword_140404A6C[272302394])     /* 1812C4F54 */
#define g_1812C4F64                      (*(_OWORD *)&dword_140404A6C[272302398])     /* 1812C4F64 */
#define g_1812C4F74                      (*(_OWORD *)&dword_140404A6C[272302402])     /* 1812C4F74 */
#define g_1812C4FC4                      dword_140404A6C[272302422]                   /* 1812C4FC4 */
#define g_1812C4FC8                      (*(_OWORD *)&dword_140404A6C[272302423])     /* 1812C4FC8 */
#define g_1812C4FD8                      (*(_OWORD *)&dword_140404A6C[272302427])     /* 1812C4FD8 */
#define g_1812C4FE8                      (*(_OWORD *)&dword_140404A6C[272302431])     /* 1812C4FE8 */
#define g_1812C5038                      dword_140404A6C[272302451]                   /* 1812C5038 */
#define g_1812C503C                      (*(_OWORD *)&dword_140404A6C[272302452])     /* 1812C503C */
#define g_1812C504C                      (*(_OWORD *)&dword_140404A6C[272302456])     /* 1812C504C */
#define g_1812C505C                      (*(_OWORD *)&dword_140404A6C[272302460])     /* 1812C505C */
#define g_1812C50AC                      dword_140404A6C[272302480]                   /* 1812C50AC */
#define g_1812C50B0                      (*(_OWORD *)&dword_140404A6C[272302481])     /* 1812C50B0 */
#define g_1812C50C0                      (*(_OWORD *)&dword_140404A6C[272302485])     /* 1812C50C0 */
#define g_1812C50D0                      (*(_OWORD *)&dword_140404A6C[272302489])     /* 1812C50D0 */
#define g_181676080                      dword_140404A6C[273270149]                   /* 181676080 */
#define g_181676084                      dword_140404A6C[273270150]                   /* 181676084 */
#define g_1816760A0                      dword_140404A6C[273270157]                   /* 1816760A0 */
#define g_1816760A4                      dword_140404A6C[273270158]                   /* 1816760A4 */
#define g_1816962A0                      dword_140404A6C[273303053]                   /* 1816962A0 */
#define g_1816992A4                      dword_140404A6C[273306126]                   /* 1816992A4 */
#define g_1816992A8                      dword_140404A6C[273306127]                   /* 1816992A8 */
#define g_1816992AC                      dword_140404A6C[273306128]                   /* 1816992AC */
#define g_1816992C8                      dword_140404A6C[273306135]                   /* 1816992C8 */
#define g_1816A92B0                      dword_140404A6C[273322513]                   /* 1816A92B0 */
#define g_1816AAAB4                      dword_140404A6C[273324050]                   /* 1816AAAB4 */
#define g_1816AAAB8                      dword_140404A6C[273324051]                   /* 1816AAAB8 */
#define g_1816AAAC4                      dword_140404A6C[273324054]                   /* 1816AAAC4 */
#define g_1816AB2C8                      dword_140404A6C[273324567]                   /* 1816AB2C8 */
#define g_1816AB2D0                      dword_140404A6C[273324569]                   /* 1816AB2D0 */
#define g_1816DEB80                      dword_140404A6C[273377349]                   /* 1816DEB80 */
#define g_181FEEB80                      dword_140404A6C[275753029]                   /* 181FEEB80 */
#define g_181FEEBC0                      dword_140404A6C[275753045]                   /* 181FEEBC0 */
#define g_181FEEBCC                      dword_140404A6C[275753048]                   /* 181FEEBCC */
#define g_181FEEBD8                      dword_140404A6C[275753051]                   /* 181FEEBD8 */
#define g_181FEFBD0                      dword_140404A6C[275754073]                   /* 181FEFBD0 */
#define g_181FEFBD4                      dword_140404A6C[275754074]                   /* 181FEFBD4 */
#define g_181FEFBE0                      dword_140404A6C[275754077]                   /* 181FEFBE0 */
#define g_181FEFBE4                      dword_140404A6C[275754078]                   /* 181FEFBE4 */
#define g_1829F8BC0                      dword_140404A6C[278384725]                   /* 1829F8BC0 */
#define g_1829F8BC8                      (*(_QWORD *)&dword_140404A6C[278384727])     /* 1829F8BC8 */
#define g_1829F8BD0                      dword_140404A6C[278384729]                   /* 1829F8BD0 */
#define g_1829F8BD4                      dword_140404A6C[278384730]                   /* 1829F8BD4 */
#define g_1829F8BD8                      dword_140404A6C[278384731]                   /* 1829F8BD8 */
#define g_1829F8FD8                      dword_140404A6C[278384987]                   /* 1829F8FD8 */
#define g_1829F8FDC                      dword_140404A6C[278384988]                   /* 1829F8FDC */
#define g_1829F8FE8                      dword_140404A6C[278384991]                   /* 1829F8FE8 */
#define g_182A7CFE0                      dword_140404A6C[278520157]                   /* 182A7CFE0 */
#define g_182A7CFE8                      dword_140404A6C[278520159]                   /* 182A7CFE8 */
#define g_182A7D000                      dword_140404A6C[278520165]                   /* 182A7D000 */
#define g_182A7D004                      dword_140404A6C[278520166]                   /* 182A7D004 */
#define g_182A7D008                      dword_140404A6C[278520167]                   /* 182A7D008 */
#define g_182A7D00C                      dword_140404A6C[278520168]                   /* 182A7D00C */
#define g_182A7D010                      dword_140404A6C[278520169]                   /* 182A7D010 */
#define g_182A7D014                      dword_140404A6C[278520170]                   /* 182A7D014 */
#define g_182A7D018                      dword_140404A6C[278520171]                   /* 182A7D018 */
#define g_182A7D020                      dword_140404A6C[278520173]                   /* 182A7D020 */
#define g_182A7D140                      dword_140404A6C[278520245]                   /* 182A7D140 */
#define g_182A7D33C                      dword_140404A6C[278520372]                   /* 182A7D33C */
#define g_182A7D340                      dword_140404A6C[278520373]                   /* 182A7D340 */
#define g_182A7D548                      (*(_QWORD *)&dword_140404A6C[278520503])     /* 182A7D548 */
#define g_182A7D550                      (*(_QWORD *)&dword_140404A6C[278520505])     /* 182A7D550 */
#define physics_points_four_lanes        dword_140404A6C[278520507]                   /* 182A7D558 src/engine/physics.h */
#define g_182A7D55C                      dword_140404A6C[278520508]                   /* 182A7D55C */
#define g_182A7D560                      dword_140404A6C[278520509]                   /* 182A7D560 */
#define g_182A7D580                      dword_140404A6C[278520517]                   /* 182A7D580 */
#define g_182A7D584                      dword_140404A6C[278520518]                   /* 182A7D584 */
#define g_182A7E180                      dword_140404A6C[278521285]                   /* 182A7E180 */
#define g_182A7E184                      dword_140404A6C[278521286]                   /* 182A7E184 */
#define g_182A7E188                      dword_140404A6C[278521287]                   /* 182A7E188 */
#define g_182A7E190                      dword_140404A6C[278521289]                   /* 182A7E190 */
#define g_182A7E198                      dword_140404A6C[278521291]                   /* 182A7E198 */
#define g_182A7E19C                      dword_140404A6C[278521292]                   /* 182A7E19C */
#define g_182A7E1A0                      dword_140404A6C[278521293]                   /* 182A7E1A0 */
#define g_182A7E1A4                      dword_140404A6C[278521294]                   /* 182A7E1A4 */
#define g_182A7E1A8                      dword_140404A6C[278521295]                   /* 182A7E1A8 */
#define g_182A7E1AC                      dword_140404A6C[278521296]                   /* 182A7E1AC */
#define g_182A7E1B0                      dword_140404A6C[278521297]                   /* 182A7E1B0 */
#define g_182A7E1FC                      dword_140404A6C[278521316]                   /* 182A7E1FC */
#define g_182A7E218                      dword_140404A6C[278521323]                   /* 182A7E218 */
#define g_182A7E21C                      dword_140404A6C[278521324]                   /* 182A7E21C */
#define g_182A7E220                      dword_140404A6C[278521325]                   /* 182A7E220 */
#define g_182A7E230                      (*(float *)&dword_140404A6C[278521329])      /* 182A7E230 */
#define g_182A7E234                      (*(float *)&dword_140404A6C[278521330])      /* 182A7E234 */
#define g_182A7E238                      (*(float *)&dword_140404A6C[278521331])      /* 182A7E238 */
#define g_182A7E23C                      dword_140404A6C[278521332]                   /* 182A7E23C */
#define g_182A7E240                      (*(float *)&dword_140404A6C[278521333])      /* 182A7E240 */
#define g_182A7E244                      (*(float *)&dword_140404A6C[278521334])      /* 182A7E244 */
#define g_182A7E248                      (*(float *)&dword_140404A6C[278521335])      /* 182A7E248 */
#define g_182A7E24C                      dword_140404A6C[278521336]                   /* 182A7E24C */
#define g_182A7E270                      (*(float *)&dword_140404A6C[278521345])      /* 182A7E270 */
#define g_182A7E274                      dword_140404A6C[278521346]                   /* 182A7E274 */
#define g_182A7E278                      dword_140404A6C[278521347]                   /* 182A7E278 */
#define g_182A7E27C                      dword_140404A6C[278521348]                   /* 182A7E27C */
#define g_182A7E280                      dword_140404A6C[278521349]                   /* 182A7E280 */
#define g_182A7E284                      dword_140404A6C[278521350]                   /* 182A7E284 */
#define g_182A7E288                      dword_140404A6C[278521351]                   /* 182A7E288 */
#define g_182A7E28C                      dword_140404A6C[278521352]                   /* 182A7E28C */
#define g_182A7E780                      dword_140404A6C[278521669]                   /* 182A7E780 */
#define g_182A7E784                      dword_140404A6C[278521670]                   /* 182A7E784 */
#define g_182A7E788                      dword_140404A6C[278521671]                   /* 182A7E788 */
#define g_182A7F0B8                      dword_140404A6C[278522259]                   /* 182A7F0B8 */
#define g_182A7F0C0                      dword_140404A6C[278522261]                   /* 182A7F0C0 */
#define g_182A7F0C8                      dword_140404A6C[278522263]                   /* 182A7F0C8 */
#define g_182A7F0D0                      dword_140404A6C[278522265]                   /* 182A7F0D0 */
#define g_182A7F520                      dword_140404A6C[278522541]                   /* 182A7F520 */
#define g_182A7F528                      dword_140404A6C[278522543]                   /* 182A7F528 */
#define g_182A7F530                      dword_140404A6C[278522545]                   /* 182A7F530 */
#define g_182A7F538                      dword_140404A6C[278522547]                   /* 182A7F538 */
#define g_182A7F540                      dword_140404A6C[278522549]                   /* 182A7F540 */
#define g_182A7F548                      dword_140404A6C[278522551]                   /* 182A7F548 */
#define g_182A7F554                      dword_140404A6C[278522554]                   /* 182A7F554 */
#define g_182A7F558                      dword_140404A6C[278522555]                   /* 182A7F558 */
#define g_182A7F560                      dword_140404A6C[278522557]                   /* 182A7F560 */
#define g_182A7F568                      (*(_QWORD *)&dword_140404A6C[278522559])     /* 182A7F568 */
#define g_182A7F56C                      dword_140404A6C[278522560]                   /* 182A7F56C */
#define g_182A7F570                      (*(_QWORD *)&dword_140404A6C[278522561])     /* 182A7F570 */
#define g_182A7F578                      dword_140404A6C[278522563]                   /* 182A7F578 */
#define g_182A7F57C                      dword_140404A6C[278522564]                   /* 182A7F57C */
#define g_182A7F580                      dword_140404A6C[278522565]                   /* 182A7F580 */
#define g_182A7F5C0                      (*(_QWORD *)&dword_140404A6C[278522581])     /* 182A7F5C0 */
#define g_182A7F5C8                      dword_140404A6C[278522583]                   /* 182A7F5C8 */
#define g_182A7F5CC                      (*(_QWORD *)&dword_140404A6C[278522584])     /* 182A7F5CC */
#define g_182A7F5D4                      dword_140404A6C[278522586]                   /* 182A7F5D4 */
#define g_182A7F5D8                      dword_140404A6C[278522587]                   /* 182A7F5D8 */
#define g_182A7F5DC                      dword_140404A6C[278522588]                   /* 182A7F5DC */
#define g_182A7F5E0                      dword_140404A6C[278522589]                   /* 182A7F5E0 */
#define g_182A7F5E4                      dword_140404A6C[278522590]                   /* 182A7F5E4 */
#define g_182A7F5E8                      dword_140404A6C[278522591]                   /* 182A7F5E8 */
#define g_182A7F5EC                      dword_140404A6C[278522592]                   /* 182A7F5EC */
#define g_182A7F5F0                      dword_140404A6C[278522593]                   /* 182A7F5F0 */
#define g_182A7F600                      (*(float *)&dword_140404A6C[278522597])      /* 182A7F600 */
#define g_182A7F604                      (*(float *)&dword_140404A6C[278522598])      /* 182A7F604 */
#define g_182A7F608                      (*(float *)&dword_140404A6C[278522599])      /* 182A7F608 */
#define g_182A7F60C                      dword_140404A6C[278522600]                   /* 182A7F60C */
#define g_182A7F610                      (*(float *)&dword_140404A6C[278522601])      /* 182A7F610 */
#define g_182A7F614                      (*(float *)&dword_140404A6C[278522602])      /* 182A7F614 */
#define g_182A7F618                      (*(float *)&dword_140404A6C[278522603])      /* 182A7F618 */
#define g_182A7F61C                      dword_140404A6C[278522604]                   /* 182A7F61C */
#define g_182A7F640                      (*(float *)&dword_140404A6C[278522613])      /* 182A7F640 */
#define g_182A7F644                      dword_140404A6C[278522614]                   /* 182A7F644 */
#define g_182A7F648                      dword_140404A6C[278522615]                   /* 182A7F648 */
#define g_182A7F64C                      dword_140404A6C[278522616]                   /* 182A7F64C */
#define g_182A7F650                      dword_140404A6C[278522617]                   /* 182A7F650 */
#define g_182A7F654                      dword_140404A6C[278522618]                   /* 182A7F654 */
#define g_182A7F658                      dword_140404A6C[278522619]                   /* 182A7F658 */
#define g_182A7F65C                      dword_140404A6C[278522620]                   /* 182A7F65C */
#define g_182A7FB2C                      dword_140404A6C[278522928]                   /* 182A7FB2C */
#define g_182A808E4                      dword_140404A6C[278523806]                   /* 182A808E4 */
#define g_182A808E8                      dword_140404A6C[278523807]                   /* 182A808E8 */
#define g_182A808EC                      dword_140404A6C[278523808]                   /* 182A808EC */
#define g_182A80924                      dword_140404A6C[278523822]                   /* 182A80924 */
#define g_182A80928                      dword_140404A6C[278523823]                   /* 182A80928 */
#define g_182A80930                      dword_140404A6C[278523825]                   /* 182A80930 */
#define g_182A80944                      dword_140404A6C[278523830]                   /* 182A80944 */
#define g_182A80950                      dword_140404A6C[278523833]                   /* 182A80950 */
#define g_182A809D0                      (*(float *)&dword_140404A6C[278523865])      /* 182A809D0 */
#define g_182A809D4                      (*(float *)&dword_140404A6C[278523866])      /* 182A809D4 */
#define g_182A809D8                      (*(float *)&dword_140404A6C[278523867])      /* 182A809D8 */
#define g_182A809DC                      dword_140404A6C[278523868]                   /* 182A809DC */
#define g_182A80A24                      dword_140404A6C[278523886]                   /* 182A80A24 */
#define g_182A80A28                      dword_140404A6C[278523887]                   /* 182A80A28 */
#define g_182A80A2C                      dword_140404A6C[278523888]                   /* 182A80A2C */
#define g_182A80A40                      dword_140404A6C[278523893]                   /* 182A80A40 */
#define g_182A80F00                      dword_140404A6C[278524197]                   /* 182A80F00 */
#define g_182A81CF4                      dword_140404A6C[278525090]                   /* 182A81CF4 */
#define g_182A81CF8                      dword_140404A6C[278525091]                   /* 182A81CF8 */
#define g_182A81D00                      dword_140404A6C[278525093]                   /* 182A81D00 */
#define g_182A81D08                      dword_140404A6C[278525095]                   /* 182A81D08 */
#define g_182A81D0C                      dword_140404A6C[278525096]                   /* 182A81D0C */
#define g_182A81D10                      (*(_QWORD *)&dword_140404A6C[278525097])     /* 182A81D10 */
#define g_182A81D18                      dword_140404A6C[278525099]                   /* 182A81D18 */
#define g_182A81D1C                      dword_140404A6C[278525100]                   /* 182A81D1C */
#define g_182A81D20                      dword_140404A6C[278525101]                   /* 182A81D20 */
#define g_182A81D60                      (*(_QWORD *)&dword_140404A6C[278525117])     /* 182A81D60 */
#define g_182A81D68                      dword_140404A6C[278525119]                   /* 182A81D68 */
#define g_182A81D6C                      (*(_QWORD *)&dword_140404A6C[278525120])     /* 182A81D6C */
#define g_182A81D74                      dword_140404A6C[278525122]                   /* 182A81D74 */
#define g_182A81D78                      dword_140404A6C[278525123]                   /* 182A81D78 */
#define g_182A81D7C                      dword_140404A6C[278525124]                   /* 182A81D7C */
#define g_182A81D80                      dword_140404A6C[278525125]                   /* 182A81D80 */
#define g_182A81D84                      dword_140404A6C[278525126]                   /* 182A81D84 */
#define g_182A81D88                      dword_140404A6C[278525127]                   /* 182A81D88 */
#define g_182A81D8C                      dword_140404A6C[278525128]                   /* 182A81D8C */
#define g_182A81D90                      dword_140404A6C[278525129]                   /* 182A81D90 */
#define g_182A81DA0                      (*(float *)&dword_140404A6C[278525133])      /* 182A81DA0 */
#define g_182A81DA4                      (*(float *)&dword_140404A6C[278525134])      /* 182A81DA4 */
#define g_182A81DA8                      (*(float *)&dword_140404A6C[278525135])      /* 182A81DA8 */
#define g_182A81DAC                      dword_140404A6C[278525136]                   /* 182A81DAC */
#define g_182A81DB0                      (*(float *)&dword_140404A6C[278525137])      /* 182A81DB0 */
#define g_182A81DB4                      (*(float *)&dword_140404A6C[278525138])      /* 182A81DB4 */
#define g_182A81DB8                      (*(float *)&dword_140404A6C[278525139])      /* 182A81DB8 */
#define g_182A81DBC                      dword_140404A6C[278525140]                   /* 182A81DBC */
#define g_182A81DE0                      (*(float *)&dword_140404A6C[278525149])      /* 182A81DE0 */
#define g_182A81DE4                      dword_140404A6C[278525150]                   /* 182A81DE4 */
#define g_182A81DE8                      dword_140404A6C[278525151]                   /* 182A81DE8 */
#define g_182A81DEC                      dword_140404A6C[278525152]                   /* 182A81DEC */
#define g_182A81DF0                      dword_140404A6C[278525153]                   /* 182A81DF0 */
#define g_182A81DF4                      dword_140404A6C[278525154]                   /* 182A81DF4 */
#define g_182A81DF8                      dword_140404A6C[278525155]                   /* 182A81DF8 */
#define g_182A81DFC                      dword_140404A6C[278525156]                   /* 182A81DFC */
#define g_182A822CC                      dword_140404A6C[278525464]                   /* 182A822CC */
#define g_182A83084                      dword_140404A6C[278526342]                   /* 182A83084 */
#define g_182A83088                      dword_140404A6C[278526343]                   /* 182A83088 */
#define g_182A8308C                      dword_140404A6C[278526344]                   /* 182A8308C */
#define g_182A830C4                      dword_140404A6C[278526358]                   /* 182A830C4 */
#define g_182A830C8                      dword_140404A6C[278526359]                   /* 182A830C8 */
#define g_182A830D0                      dword_140404A6C[278526361]                   /* 182A830D0 */
#define g_182A830E4                      dword_140404A6C[278526366]                   /* 182A830E4 */
#define g_182A830F0                      dword_140404A6C[278526369]                   /* 182A830F0 */
#define g_182A83140                      dword_140404A6C[278526389]                   /* 182A83140 */
#define g_182A83144                      dword_140404A6C[278526390]                   /* 182A83144 */
#define g_182A83148                      dword_140404A6C[278526391]                   /* 182A83148 */
#define g_182A83170                      (*(float *)&dword_140404A6C[278526401])      /* 182A83170 */
#define g_182A83174                      (*(float *)&dword_140404A6C[278526402])      /* 182A83174 */
#define g_182A83178                      (*(float *)&dword_140404A6C[278526403])      /* 182A83178 */
#define g_182A8317C                      dword_140404A6C[278526404]                   /* 182A8317C */
#define g_182A831C4                      dword_140404A6C[278526422]                   /* 182A831C4 */
#define g_182A831C8                      dword_140404A6C[278526423]                   /* 182A831C8 */
#define g_182A831CC                      dword_140404A6C[278526424]                   /* 182A831CC */
#define g_182A831E8                      dword_140404A6C[278526431]                   /* 182A831E8 */
#define g_182A836A0                      dword_140404A6C[278526733]                   /* 182A836A0 */
#define g_182A84494                      dword_140404A6C[278527626]                   /* 182A84494 */
#define g_182A84498                      dword_140404A6C[278527627]                   /* 182A84498 */
#define g_182A844A0                      dword_140404A6C[278527629]                   /* 182A844A0 */
#define g_182A844A4                      dword_140404A6C[278527630]                   /* 182A844A4 */
#define g_182A844A8                      dword_140404A6C[278527631]                   /* 182A844A8 */
#define g_182A844AC                      dword_140404A6C[278527632]                   /* 182A844AC */
#define g_182A844B0                      (*(_QWORD *)&dword_140404A6C[278527633])     /* 182A844B0 */
#define g_182A844B8                      dword_140404A6C[278527635]                   /* 182A844B8 */
#define g_182A844BC                      dword_140404A6C[278527636]                   /* 182A844BC */
#define g_182A844C0                      dword_140404A6C[278527637]                   /* 182A844C0 */
#define g_182A84500                      (*(_QWORD *)&dword_140404A6C[278527653])     /* 182A84500 */
#define g_182A84508                      dword_140404A6C[278527655]                   /* 182A84508 */
#define g_182A84510                      dword_140404A6C[278527657]                   /* 182A84510 */
#define g_182A84514                      dword_140404A6C[278527658]                   /* 182A84514 */
#define g_182A84518                      dword_140404A6C[278527659]                   /* 182A84518 */
#define g_182A84580                      (*(float *)&dword_140404A6C[278527685])      /* 182A84580 */
#define g_182A84584                      dword_140404A6C[278527686]                   /* 182A84584 */
#define g_182A84588                      dword_140404A6C[278527687]                   /* 182A84588 */
#define g_182A8458C                      dword_140404A6C[278527688]                   /* 182A8458C */
#define g_182A84590                      dword_140404A6C[278527689]                   /* 182A84590 */
#define g_182A84594                      dword_140404A6C[278527690]                   /* 182A84594 */
#define g_182A84598                      dword_140404A6C[278527691]                   /* 182A84598 */
#define g_182A8459C                      dword_140404A6C[278527692]                   /* 182A8459C */
#define g_182A84A6C                      dword_140404A6C[278528000]                   /* 182A84A6C */
#define g_182A85864                      dword_140404A6C[278528894]                   /* 182A85864 */
#define g_182A85868                      dword_140404A6C[278528895]                   /* 182A85868 */
#define g_182A85870                      dword_140404A6C[278528897]                   /* 182A85870 */
#define g_182A85884                      dword_140404A6C[278528902]                   /* 182A85884 */
#define g_182A85890                      dword_140404A6C[278528905]                   /* 182A85890 */
#define g_182A85964                      dword_140404A6C[278528958]                   /* 182A85964 */
#define g_182A85968                      dword_140404A6C[278528959]                   /* 182A85968 */
#define g_182A8596C                      dword_140404A6C[278528960]                   /* 182A8596C */
#define g_182A85990                      dword_140404A6C[278528969]                   /* 182A85990 */
#define g_182A85E40                      dword_140404A6C[278529269]                   /* 182A85E40 */
#define g_182A86C34                      dword_140404A6C[278530162]                   /* 182A86C34 */
#define g_182A86C38                      dword_140404A6C[278530163]                   /* 182A86C38 */
#define g_182A86C40                      dword_140404A6C[278530165]                   /* 182A86C40 */
#define g_182A86C48                      dword_140404A6C[278530167]                   /* 182A86C48 */
#define g_182A86C4C                      dword_140404A6C[278530168]                   /* 182A86C4C */
#define g_182A86C50                      (*(_QWORD *)&dword_140404A6C[278530169])     /* 182A86C50 */
#define g_182A86C58                      dword_140404A6C[278530171]                   /* 182A86C58 */
#define g_182A86C5C                      dword_140404A6C[278530172]                   /* 182A86C5C */
#define g_182A86C60                      dword_140404A6C[278530173]                   /* 182A86C60 */
#define g_182A86CA0                      (*(_QWORD *)&dword_140404A6C[278530189])     /* 182A86CA0 */
#define g_182A86CA8                      dword_140404A6C[278530191]                   /* 182A86CA8 */
#define g_182A86CAC                      (*(_QWORD *)&dword_140404A6C[278530192])     /* 182A86CAC */
#define g_182A86CB4                      dword_140404A6C[278530194]                   /* 182A86CB4 */
#define g_182A86CB8                      dword_140404A6C[278530195]                   /* 182A86CB8 */
#define g_182A86CBC                      dword_140404A6C[278530196]                   /* 182A86CBC */
#define g_182A86CC0                      dword_140404A6C[278530197]                   /* 182A86CC0 */
#define g_182A86CC4                      dword_140404A6C[278530198]                   /* 182A86CC4 */
#define g_182A86CC8                      dword_140404A6C[278530199]                   /* 182A86CC8 */
#define g_182A86CCC                      dword_140404A6C[278530200]                   /* 182A86CCC */
#define g_182A86CD0                      dword_140404A6C[278530201]                   /* 182A86CD0 */
#define g_182A86CE0                      (*(float *)&dword_140404A6C[278530205])      /* 182A86CE0 */
#define g_182A86CE4                      (*(float *)&dword_140404A6C[278530206])      /* 182A86CE4 */
#define g_182A86CE8                      (*(float *)&dword_140404A6C[278530207])      /* 182A86CE8 */
#define g_182A86CEC                      dword_140404A6C[278530208]                   /* 182A86CEC */
#define g_182A86CF0                      (*(float *)&dword_140404A6C[278530209])      /* 182A86CF0 */
#define g_182A86CF4                      (*(float *)&dword_140404A6C[278530210])      /* 182A86CF4 */
#define g_182A86CF8                      (*(float *)&dword_140404A6C[278530211])      /* 182A86CF8 */
#define g_182A86CFC                      dword_140404A6C[278530212]                   /* 182A86CFC */
#define g_182A86D20                      (*(float *)&dword_140404A6C[278530221])      /* 182A86D20 */
#define g_182A86D24                      dword_140404A6C[278530222]                   /* 182A86D24 */
#define g_182A86D28                      dword_140404A6C[278530223]                   /* 182A86D28 */
#define g_182A86D2C                      dword_140404A6C[278530224]                   /* 182A86D2C */
#define g_182A86D30                      dword_140404A6C[278530225]                   /* 182A86D30 */
#define g_182A86D34                      dword_140404A6C[278530226]                   /* 182A86D34 */
#define g_182A86D38                      dword_140404A6C[278530227]                   /* 182A86D38 */
#define g_182A86D3C                      dword_140404A6C[278530228]                   /* 182A86D3C */
#define g_182A8720C                      dword_140404A6C[278530536]                   /* 182A8720C */
#define g_182A87FC4                      dword_140404A6C[278531414]                   /* 182A87FC4 */
#define g_182A87FC8                      dword_140404A6C[278531415]                   /* 182A87FC8 */
#define g_182A87FCC                      dword_140404A6C[278531416]                   /* 182A87FCC */
#define g_182A88004                      dword_140404A6C[278531430]                   /* 182A88004 */
#define g_182A88008                      dword_140404A6C[278531431]                   /* 182A88008 */
#define g_182A88010                      dword_140404A6C[278531433]                   /* 182A88010 */
#define g_182A88024                      dword_140404A6C[278531438]                   /* 182A88024 */
#define g_182A88030                      dword_140404A6C[278531441]                   /* 182A88030 */
#define g_182A88080                      dword_140404A6C[278531461]                   /* 182A88080 */
#define g_182A88084                      dword_140404A6C[278531462]                   /* 182A88084 */
#define g_182A88088                      dword_140404A6C[278531463]                   /* 182A88088 */
#define g_182A880B0                      (*(float *)&dword_140404A6C[278531473])      /* 182A880B0 */
#define g_182A880B4                      (*(float *)&dword_140404A6C[278531474])      /* 182A880B4 */
#define g_182A880B8                      (*(float *)&dword_140404A6C[278531475])      /* 182A880B8 */
#define g_182A880BC                      dword_140404A6C[278531476]                   /* 182A880BC */
#define g_182A88104                      dword_140404A6C[278531494]                   /* 182A88104 */
#define g_182A88108                      dword_140404A6C[278531495]                   /* 182A88108 */
#define g_182A8810C                      dword_140404A6C[278531496]                   /* 182A8810C */
#define g_182A88138                      dword_140404A6C[278531507]                   /* 182A88138 */
#define g_182A885E0                      dword_140404A6C[278531805]                   /* 182A885E0 */
#define g_182A893D4                      dword_140404A6C[278532698]                   /* 182A893D4 */
#define g_182A893D8                      dword_140404A6C[278532699]                   /* 182A893D8 */
#define g_182A893E0                      dword_140404A6C[278532701]                   /* 182A893E0 */
#define g_182A893E8                      dword_140404A6C[278532703]                   /* 182A893E8 */
#define g_182A893EC                      dword_140404A6C[278532704]                   /* 182A893EC */
#define g_182A893F0                      (*(_QWORD *)&dword_140404A6C[278532705])     /* 182A893F0 */
#define g_182A893F8                      dword_140404A6C[278532707]                   /* 182A893F8 */
#define g_182A893FC                      dword_140404A6C[278532708]                   /* 182A893FC */
#define g_182A89400                      dword_140404A6C[278532709]                   /* 182A89400 */
#define g_182A8944C                      dword_140404A6C[278532728]                   /* 182A8944C */
#define g_182A89468                      dword_140404A6C[278532735]                   /* 182A89468 */
#define g_182A8946C                      dword_140404A6C[278532736]                   /* 182A8946C */
#define g_182A89470                      dword_140404A6C[278532737]                   /* 182A89470 */
#define g_182A89480                      (*(float *)&dword_140404A6C[278532741])      /* 182A89480 */
#define g_182A89484                      (*(float *)&dword_140404A6C[278532742])      /* 182A89484 */
#define g_182A89488                      (*(float *)&dword_140404A6C[278532743])      /* 182A89488 */
#define g_182A8948C                      dword_140404A6C[278532744]                   /* 182A8948C */
#define g_182A89490                      (*(float *)&dword_140404A6C[278532745])      /* 182A89490 */
#define g_182A89494                      (*(float *)&dword_140404A6C[278532746])      /* 182A89494 */
#define g_182A89498                      (*(float *)&dword_140404A6C[278532747])      /* 182A89498 */
#define g_182A8949C                      dword_140404A6C[278532748]                   /* 182A8949C */
#define g_182A894C0                      (*(float *)&dword_140404A6C[278532757])      /* 182A894C0 */
#define g_182A894C4                      dword_140404A6C[278532758]                   /* 182A894C4 */
#define g_182A894C8                      dword_140404A6C[278532759]                   /* 182A894C8 */
#define g_182A894CC                      dword_140404A6C[278532760]                   /* 182A894CC */
#define g_182A894D0                      dword_140404A6C[278532761]                   /* 182A894D0 */
#define g_182A894D4                      dword_140404A6C[278532762]                   /* 182A894D4 */
#define g_182A894D8                      dword_140404A6C[278532763]                   /* 182A894D8 */
#define g_182A894DC                      dword_140404A6C[278532764]                   /* 182A894DC */
#define g_182A899AC                      dword_140404A6C[278533072]                   /* 182A899AC */
#define g_182A8A764                      dword_140404A6C[278533950]                   /* 182A8A764 */
#define g_182A8A768                      dword_140404A6C[278533951]                   /* 182A8A768 */
#define g_182A8A76C                      dword_140404A6C[278533952]                   /* 182A8A76C */
#define g_182A8A7A4                      dword_140404A6C[278533966]                   /* 182A8A7A4 */
#define g_182A8A7A8                      dword_140404A6C[278533967]                   /* 182A8A7A8 */
#define g_182A8A7B0                      dword_140404A6C[278533969]                   /* 182A8A7B0 */
#define g_182A8A7C4                      dword_140404A6C[278533974]                   /* 182A8A7C4 */
#define g_182A8A7D0                      dword_140404A6C[278533977]                   /* 182A8A7D0 */
#define g_182A8A850                      (*(float *)&dword_140404A6C[278534009])      /* 182A8A850 */
#define g_182A8A854                      (*(float *)&dword_140404A6C[278534010])      /* 182A8A854 */
#define g_182A8A858                      (*(float *)&dword_140404A6C[278534011])      /* 182A8A858 */
#define g_182A8A85C                      dword_140404A6C[278534012]                   /* 182A8A85C */
#define g_182A8A8A4                      dword_140404A6C[278534030]                   /* 182A8A8A4 */
#define g_182A8A8A8                      dword_140404A6C[278534031]                   /* 182A8A8A8 */
#define g_182A8A8AC                      dword_140404A6C[278534032]                   /* 182A8A8AC */
#define g_182A8A8E0                      dword_140404A6C[278534045]                   /* 182A8A8E0 */
#define g_182A8AD80                      dword_140404A6C[278534341]                   /* 182A8AD80 */
#define g_182A8BB74                      dword_140404A6C[278535234]                   /* 182A8BB74 */
#define g_182A8BB78                      dword_140404A6C[278535235]                   /* 182A8BB78 */
#define g_182A8BB80                      dword_140404A6C[278535237]                   /* 182A8BB80 */
#define g_182A8BB84                      dword_140404A6C[278535238]                   /* 182A8BB84 */
#define g_182A8BB88                      dword_140404A6C[278535239]                   /* 182A8BB88 */
#define g_182A8BB8C                      dword_140404A6C[278535240]                   /* 182A8BB8C */
#define g_182A8BB90                      (*(_QWORD *)&dword_140404A6C[278535241])     /* 182A8BB90 */
#define g_182A8BB98                      dword_140404A6C[278535243]                   /* 182A8BB98 */
#define g_182A8BB9C                      dword_140404A6C[278535244]                   /* 182A8BB9C */
#define g_182A8BBA0                      dword_140404A6C[278535245]                   /* 182A8BBA0 */
#define g_182A8BBE0                      (*(_QWORD *)&dword_140404A6C[278535261])     /* 182A8BBE0 */
#define g_182A8BBE8                      dword_140404A6C[278535263]                   /* 182A8BBE8 */
#define g_182A8BBEC                      (*(_QWORD *)&dword_140404A6C[278535264])     /* 182A8BBEC */
#define g_182A8BBF4                      dword_140404A6C[278535266]                   /* 182A8BBF4 */
#define g_182A8BBF8                      dword_140404A6C[278535267]                   /* 182A8BBF8 */
#define g_182A8BC20                      (*(float *)&dword_140404A6C[278535277])      /* 182A8BC20 */
#define g_182A8BC24                      (*(float *)&dword_140404A6C[278535278])      /* 182A8BC24 */
#define g_182A8BC28                      (*(float *)&dword_140404A6C[278535279])      /* 182A8BC28 */
#define g_182A8BC2C                      dword_140404A6C[278535280]                   /* 182A8BC2C */
#define g_182A8BC60                      (*(float *)&dword_140404A6C[278535293])      /* 182A8BC60 */
#define g_182A8BC64                      dword_140404A6C[278535294]                   /* 182A8BC64 */
#define g_182A8BC68                      dword_140404A6C[278535295]                   /* 182A8BC68 */
#define g_182A8BC6C                      dword_140404A6C[278535296]                   /* 182A8BC6C */
#define g_182A8BC70                      dword_140404A6C[278535297]                   /* 182A8BC70 */
#define g_182A8BC74                      dword_140404A6C[278535298]                   /* 182A8BC74 */
#define g_182A8BC78                      dword_140404A6C[278535299]                   /* 182A8BC78 */
#define g_182A8BC7C                      dword_140404A6C[278535300]                   /* 182A8BC7C */
#define g_182A8C14C                      dword_140404A6C[278535608]                   /* 182A8C14C */
#define g_182A8CF44                      dword_140404A6C[278536502]                   /* 182A8CF44 */
#define g_182A8CF48                      dword_140404A6C[278536503]                   /* 182A8CF48 */
#define g_182A8CF50                      dword_140404A6C[278536505]                   /* 182A8CF50 */
#define g_182A8CF64                      dword_140404A6C[278536510]                   /* 182A8CF64 */
#define g_182A8CF70                      dword_140404A6C[278536513]                   /* 182A8CF70 */
#define g_182A8CFF0                      (*(float *)&dword_140404A6C[278536545])      /* 182A8CFF0 */
#define g_182A8CFF4                      (*(float *)&dword_140404A6C[278536546])      /* 182A8CFF4 */
#define g_182A8CFF8                      (*(float *)&dword_140404A6C[278536547])      /* 182A8CFF8 */
#define g_182A8CFFC                      dword_140404A6C[278536548]                   /* 182A8CFFC */
#define g_182A8D044                      dword_140404A6C[278536566]                   /* 182A8D044 */
#define g_182A8D048                      dword_140404A6C[278536567]                   /* 182A8D048 */
#define g_182A8D04C                      dword_140404A6C[278536568]                   /* 182A8D04C */
#define g_182A8D088                      dword_140404A6C[278536583]                   /* 182A8D088 */
#define g_182A8D520                      dword_140404A6C[278536877]                   /* 182A8D520 */
#define g_182A8E314                      dword_140404A6C[278537770]                   /* 182A8E314 */
#define g_182A8E318                      dword_140404A6C[278537771]                   /* 182A8E318 */
#define g_182A8E320                      dword_140404A6C[278537773]                   /* 182A8E320 */
#define g_182A8E334                      dword_140404A6C[278537778]                   /* 182A8E334 */
#define g_182A8E340                      (*(_QWORD *)&dword_140404A6C[278537781])     /* 182A8E340 */
#define g_182A8E3C0                      dword_140404A6C[278537813]                   /* 182A8E3C0 */
#define g_182A8E3CC                      dword_140404A6C[278537816]                   /* 182A8E3CC */
#define g_182A8E414                      dword_140404A6C[278537834]                   /* 182A8E414 */
#define g_182A8E418                      dword_140404A6C[278537835]                   /* 182A8E418 */
#define g_182A8E41C                      dword_140404A6C[278537836]                   /* 182A8E41C */
#define g_182A8E8F0                      dword_140404A6C[278538145]                   /* 182A8E8F0 */
#define g_182A8F6E4                      dword_140404A6C[278539038]                   /* 182A8F6E4 */
#define g_182A8F6E8                      dword_140404A6C[278539039]                   /* 182A8F6E8 */
#define g_182A8F6F0                      dword_140404A6C[278539041]                   /* 182A8F6F0 */
#define g_182A8F704                      dword_140404A6C[278539046]                   /* 182A8F704 */
#define g_182A8F710                      (*(_QWORD *)&dword_140404A6C[278539049])     /* 182A8F710 */
#define g_182A8F790                      (*(float *)&dword_140404A6C[278539081])      /* 182A8F790 */
#define g_182A8F794                      (*(float *)&dword_140404A6C[278539082])      /* 182A8F794 */
#define g_182A8F798                      (*(float *)&dword_140404A6C[278539083])      /* 182A8F798 */
#define g_182A8F79C                      dword_140404A6C[278539084]                   /* 182A8F79C */
#define g_182A8F7E4                      dword_140404A6C[278539102]                   /* 182A8F7E4 */
#define g_182A8F7E8                      dword_140404A6C[278539103]                   /* 182A8F7E8 */
#define g_182A8F7EC                      dword_140404A6C[278539104]                   /* 182A8F7EC */
#define g_182A8FCC0                      dword_140404A6C[278539413]                   /* 182A8FCC0 */
#define g_182A90AB4                      dword_140404A6C[278540306]                   /* 182A90AB4 */
#define g_182A90AB8                      dword_140404A6C[278540307]                   /* 182A90AB8 */
#define g_182A90AC0                      dword_140404A6C[278540309]                   /* 182A90AC0 */
#define g_182A90AE0                      dword_140404A6C[278540317]                   /* 182A90AE0 */
#define g_182A90B2C                      (*(_QWORD *)&dword_140404A6C[278540336])     /* 182A90B2C */
#define g_182A90B34                      dword_140404A6C[278540338]                   /* 182A90B34 */
#define g_182A90B38                      dword_140404A6C[278540339]                   /* 182A90B38 */
#define g_182A90B60                      (*(float *)&dword_140404A6C[278540349])      /* 182A90B60 */
#define g_182A90B64                      (*(float *)&dword_140404A6C[278540350])      /* 182A90B64 */
#define g_182A90B68                      (*(float *)&dword_140404A6C[278540351])      /* 182A90B68 */
#define g_182A90B6C                      dword_140404A6C[278540352]                   /* 182A90B6C */
#define g_182A90BB4                      dword_140404A6C[278540370]                   /* 182A90BB4 */
#define g_182A90BB8                      dword_140404A6C[278540371]                   /* 182A90BB8 */
#define g_182A90BBC                      dword_140404A6C[278540372]                   /* 182A90BBC */
#define g_182A91E88                      dword_140404A6C[278541575]                   /* 182A91E88 */
#define g_182A91E90                      dword_140404A6C[278541577]                   /* 182A91E90 */
#define g_182A91EB0                      dword_140404A6C[278541585]                   /* 182A91EB0 */
#define g_182A91EFC                      (*(_QWORD *)&dword_140404A6C[278541604])     /* 182A91EFC */
#define g_182A91F04                      dword_140404A6C[278541606]                   /* 182A91F04 */
#define g_182A91F08                      dword_140404A6C[278541607]                   /* 182A91F08 */
#define g_182A91F30                      (*(float *)&dword_140404A6C[278541617])      /* 182A91F30 */
#define g_182A91F34                      (*(float *)&dword_140404A6C[278541618])      /* 182A91F34 */
#define g_182A91F38                      (*(float *)&dword_140404A6C[278541619])      /* 182A91F38 */
#define g_182A91F3C                      dword_140404A6C[278541620]                   /* 182A91F3C */
#define g_182A91F84                      dword_140404A6C[278541638]                   /* 182A91F84 */
#define g_182A91F88                      dword_140404A6C[278541639]                   /* 182A91F88 */
#define g_182A91F8C                      dword_140404A6C[278541640]                   /* 182A91F8C */
#define g_182A93258                      dword_140404A6C[278542843]                   /* 182A93258 */
#define g_182A93260                      dword_140404A6C[278542845]                   /* 182A93260 */
#define g_182A93280                      dword_140404A6C[278542853]                   /* 182A93280 */
#define g_182A93300                      (*(float *)&dword_140404A6C[278542885])      /* 182A93300 */
#define g_182A93304                      (*(float *)&dword_140404A6C[278542886])      /* 182A93304 */
#define g_182A93308                      (*(float *)&dword_140404A6C[278542887])      /* 182A93308 */
#define g_182A9330C                      dword_140404A6C[278542888]                   /* 182A9330C */
#define g_182A93354                      dword_140404A6C[278542906]                   /* 182A93354 */
#define g_182A93358                      dword_140404A6C[278542907]                   /* 182A93358 */
#define g_182A9335C                      dword_140404A6C[278542908]                   /* 182A9335C */
#define g_182A933AC                      dword_140404A6C[278542928]                   /* 182A933AC */
#define g_182A93830                      dword_140404A6C[278543217]                   /* 182A93830 */
#define g_182A94628                      dword_140404A6C[278544111]                   /* 182A94628 */
#define g_182A94630                      dword_140404A6C[278544113]                   /* 182A94630 */
#define g_182A94650                      dword_140404A6C[278544121]                   /* 182A94650 */
#define g_182A946A0                      (*(_QWORD *)&dword_140404A6C[278544141])     /* 182A946A0 */
#define g_182A946A8                      dword_140404A6C[278544143]                   /* 182A946A8 */
#define g_182A946D0                      (*(float *)&dword_140404A6C[278544153])      /* 182A946D0 */
#define g_182A946D4                      (*(float *)&dword_140404A6C[278544154])      /* 182A946D4 */
#define g_182A946D8                      (*(float *)&dword_140404A6C[278544155])      /* 182A946D8 */
#define g_182A946DC                      dword_140404A6C[278544156]                   /* 182A946DC */
#define g_182A94724                      dword_140404A6C[278544174]                   /* 182A94724 */
#define g_182A94728                      dword_140404A6C[278544175]                   /* 182A94728 */
#define g_182A9472C                      dword_140404A6C[278544176]                   /* 182A9472C */
#define g_182A9477C                      dword_140404A6C[278544196]                   /* 182A9477C */
#define g_182A94C00                      dword_140404A6C[278544485]                   /* 182A94C00 */
#define g_182A959F4                      dword_140404A6C[278545378]                   /* 182A959F4 */
#define g_182A959F8                      dword_140404A6C[278545379]                   /* 182A959F8 */
#define g_182A95A00                      dword_140404A6C[278545381]                   /* 182A95A00 */
#define g_182A95A20                      dword_140404A6C[278545389]                   /* 182A95A20 */
#define g_182A95AA0                      dword_140404A6C[278545421]                   /* 182A95AA0 */
#define g_182A95AAC                      dword_140404A6C[278545424]                   /* 182A95AAC */
#define g_182A95AF4                      dword_140404A6C[278545442]                   /* 182A95AF4 */
#define g_182A95AF8                      dword_140404A6C[278545443]                   /* 182A95AF8 */
#define g_182A95AFC                      dword_140404A6C[278545444]                   /* 182A95AFC */
#define g_182A95B4C                      dword_140404A6C[278545464]                   /* 182A95B4C */
#define g_182A95BA8                      dword_140404A6C[278545487]                   /* 182A95BA8 */
#define g_182A95FD0                      dword_140404A6C[278545753]                   /* 182A95FD0 */
#define g_182A96DC8                      dword_140404A6C[278546647]                   /* 182A96DC8 */
#define g_182A96DD0                      dword_140404A6C[278546649]                   /* 182A96DD0 */
#define g_182A96DF0                      dword_140404A6C[278546657]                   /* 182A96DF0 */
#define g_182A96E70                      dword_140404A6C[278546689]                   /* 182A96E70 */
#define g_182A96E7C                      dword_140404A6C[278546692]                   /* 182A96E7C */
#define g_182A96EC4                      dword_140404A6C[278546710]                   /* 182A96EC4 */
#define g_182A96EC8                      dword_140404A6C[278546711]                   /* 182A96EC8 */
#define g_182A96ECC                      dword_140404A6C[278546712]                   /* 182A96ECC */
#define g_182A96F1C                      dword_140404A6C[278546732]                   /* 182A96F1C */
#define g_182A96F78                      dword_140404A6C[278546755]                   /* 182A96F78 */
#define g_182A973A0                      dword_140404A6C[278547021]                   /* 182A973A0 */
#define g_182A98198                      dword_140404A6C[278547915]                   /* 182A98198 */
#define g_182A981A0                      dword_140404A6C[278547917]                   /* 182A981A0 */
#define g_182A981C0                      dword_140404A6C[278547925]                   /* 182A981C0 */
#define g_182A98240                      dword_140404A6C[278547957]                   /* 182A98240 */
#define g_182A9824C                      dword_140404A6C[278547960]                   /* 182A9824C */
#define g_182A98294                      dword_140404A6C[278547978]                   /* 182A98294 */
#define g_182A98298                      dword_140404A6C[278547979]                   /* 182A98298 */
#define g_182A9829C                      dword_140404A6C[278547980]                   /* 182A9829C */
#define g_182A982EC                      dword_140404A6C[278548000]                   /* 182A982EC */
#define g_182A98348                      dword_140404A6C[278548023]                   /* 182A98348 */
#define g_182A98770                      dword_140404A6C[278548289]                   /* 182A98770 */
#define g_182A99568                      dword_140404A6C[278549183]                   /* 182A99568 */
#define g_182A99570                      dword_140404A6C[278549185]                   /* 182A99570 */
#define g_182A99590                      dword_140404A6C[278549193]                   /* 182A99590 */
#define g_182A99610                      dword_140404A6C[278549225]                   /* 182A99610 */
#define g_182A9961C                      dword_140404A6C[278549228]                   /* 182A9961C */
#define g_182A99664                      dword_140404A6C[278549246]                   /* 182A99664 */
#define g_182A99668                      dword_140404A6C[278549247]                   /* 182A99668 */
#define g_182A9966C                      dword_140404A6C[278549248]                   /* 182A9966C */
#define g_182A996BC                      dword_140404A6C[278549268]                   /* 182A996BC */
#define g_182A99718                      dword_140404A6C[278549291]                   /* 182A99718 */
#define g_182A99B40                      dword_140404A6C[278549557]                   /* 182A99B40 */
#define g_182A9A938                      dword_140404A6C[278550451]                   /* 182A9A938 */
#define g_182A9A940                      dword_140404A6C[278550453]                   /* 182A9A940 */
#define g_182A9A960                      dword_140404A6C[278550461]                   /* 182A9A960 */
#define g_182A9A9E0                      dword_140404A6C[278550493]                   /* 182A9A9E0 */
#define g_182A9A9EC                      dword_140404A6C[278550496]                   /* 182A9A9EC */
#define g_182A9AA34                      dword_140404A6C[278550514]                   /* 182A9AA34 */
#define g_182A9AA38                      dword_140404A6C[278550515]                   /* 182A9AA38 */
#define g_182A9AA3C                      dword_140404A6C[278550516]                   /* 182A9AA3C */
#define g_182A9AA8C                      dword_140404A6C[278550536]                   /* 182A9AA8C */
#define g_182A9AAE8                      dword_140404A6C[278550559]                   /* 182A9AAE8 */
#define g_182A9AF10                      dword_140404A6C[278550825]                   /* 182A9AF10 */
#define g_182A9BD08                      dword_140404A6C[278551719]                   /* 182A9BD08 */
#define g_182A9BD10                      dword_140404A6C[278551721]                   /* 182A9BD10 */
#define g_182A9BD30                      dword_140404A6C[278551729]                   /* 182A9BD30 */
#define g_182A9BDB0                      dword_140404A6C[278551761]                   /* 182A9BDB0 */
#define g_182A9BDBC                      dword_140404A6C[278551764]                   /* 182A9BDBC */
#define g_182A9BE04                      dword_140404A6C[278551782]                   /* 182A9BE04 */
#define g_182A9BE08                      dword_140404A6C[278551783]                   /* 182A9BE08 */
#define g_182A9BE0C                      dword_140404A6C[278551784]                   /* 182A9BE0C */
#define g_182A9BE5C                      dword_140404A6C[278551804]                   /* 182A9BE5C */
#define g_182A9BEB8                      dword_140404A6C[278551827]                   /* 182A9BEB8 */
#define g_182A9C2E0                      dword_140404A6C[278552093]                   /* 182A9C2E0 */
#define g_182A9D0D8                      dword_140404A6C[278552987]                   /* 182A9D0D8 */
#define g_182A9D0E0                      dword_140404A6C[278552989]                   /* 182A9D0E0 */
#define g_182A9D100                      dword_140404A6C[278552997]                   /* 182A9D100 */
#define g_182A9D180                      dword_140404A6C[278553029]                   /* 182A9D180 */
#define g_182A9D18C                      dword_140404A6C[278553032]                   /* 182A9D18C */
#define g_182A9D1D4                      dword_140404A6C[278553050]                   /* 182A9D1D4 */
#define g_182A9D1D8                      dword_140404A6C[278553051]                   /* 182A9D1D8 */
#define g_182A9D1DC                      dword_140404A6C[278553052]                   /* 182A9D1DC */
#define g_182A9D6B0                      dword_140404A6C[278553361]                   /* 182A9D6B0 */
#define g_182A9E4A4                      dword_140404A6C[278554254]                   /* 182A9E4A4 */
#define g_182A9E4A8                      dword_140404A6C[278554255]                   /* 182A9E4A8 */
#define g_182A9E4B0                      dword_140404A6C[278554257]                   /* 182A9E4B0 */
#define g_182A9E4D0                      dword_140404A6C[278554265]                   /* 182A9E4D0 */
#define g_182A9E550                      dword_140404A6C[278554297]                   /* 182A9E550 */
#define g_182A9E55C                      dword_140404A6C[278554300]                   /* 182A9E55C */
#define g_182A9E5A4                      dword_140404A6C[278554318]                   /* 182A9E5A4 */
#define g_182A9E5A8                      dword_140404A6C[278554319]                   /* 182A9E5A8 */
#define g_182A9E5AC                      dword_140404A6C[278554320]                   /* 182A9E5AC */
#define g_182A9EA80                      dword_140404A6C[278554629]                   /* 182A9EA80 */
#define g_182A9F878                      dword_140404A6C[278555523]                   /* 182A9F878 */
#define g_182A9F880                      dword_140404A6C[278555525]                   /* 182A9F880 */
#define g_182A9F8A0                      dword_140404A6C[278555533]                   /* 182A9F8A0 */
#define g_182A9F920                      dword_140404A6C[278555565]                   /* 182A9F920 */
#define g_182A9F92C                      dword_140404A6C[278555568]                   /* 182A9F92C */
#define g_182A9F974                      dword_140404A6C[278555586]                   /* 182A9F974 */
#define g_182A9F978                      dword_140404A6C[278555587]                   /* 182A9F978 */
#define g_182A9F97C                      dword_140404A6C[278555588]                   /* 182A9F97C */
#define g_182A9FE50                      dword_140404A6C[278555897]                   /* 182A9FE50 */
#define g_182AA0C48                      dword_140404A6C[278556791]                   /* 182AA0C48 */
#define g_182AA0C4C                      (*(_QWORD *)&dword_140404A6C[278556792])     /* 182AA0C4C */
#define g_182AA0C70                      dword_140404A6C[278556801]                   /* 182AA0C70 */
#define g_182AA0CC0                      (*(_QWORD *)&dword_140404A6C[278556821])     /* 182AA0CC0 */
#define g_182AA0CC8                      dword_140404A6C[278556823]                   /* 182AA0CC8 */
#define g_182AA0CF0                      dword_140404A6C[278556833]                   /* 182AA0CF0 */
#define g_182AA0CFC                      dword_140404A6C[278556836]                   /* 182AA0CFC */
#define g_182AA0D44                      dword_140404A6C[278556854]                   /* 182AA0D44 */
#define g_182AA0D48                      dword_140404A6C[278556855]                   /* 182AA0D48 */
#define g_182AA0D4C                      dword_140404A6C[278556856]                   /* 182AA0D4C */
#define g_182AA2018                      dword_140404A6C[278558059]                   /* 182AA2018 */
#define g_182AA2020                      dword_140404A6C[278558061]                   /* 182AA2020 */
#define g_182AA2040                      dword_140404A6C[278558069]                   /* 182AA2040 */
#define g_182AA2090                      dword_140404A6C[278558089]                   /* 182AA2090 */
#define g_182AA20A0                      dword_140404A6C[278558093]                   /* 182AA20A0 */
#define g_182AA20A4                      dword_140404A6C[278558094]                   /* 182AA20A4 */
#define g_182AA2114                      dword_140404A6C[278558122]                   /* 182AA2114 */
#define g_182AA2118                      dword_140404A6C[278558123]                   /* 182AA2118 */
#define g_182AA211C                      dword_140404A6C[278558124]                   /* 182AA211C */
#define g_182AA25F0                      dword_140404A6C[278558433]                   /* 182AA25F0 */
#define g_182AA33E8                      dword_140404A6C[278559327]                   /* 182AA33E8 */
#define g_182AA33F0                      dword_140404A6C[278559329]                   /* 182AA33F0 */
#define g_182AA3404                      dword_140404A6C[278559334]                   /* 182AA3404 */
#define g_182AA3410                      dword_140404A6C[278559337]                   /* 182AA3410 */
#define g_182AA3460                      (*(_QWORD *)&dword_140404A6C[278559357])     /* 182AA3460 */
#define g_182AA3468                      dword_140404A6C[278559359]                   /* 182AA3468 */
#define g_182AA3490                      dword_140404A6C[278559369]                   /* 182AA3490 */
#define g_182AA349C                      dword_140404A6C[278559372]                   /* 182AA349C */
#define g_182AA34E4                      dword_140404A6C[278559390]                   /* 182AA34E4 */
#define g_182AA34E8                      dword_140404A6C[278559391]                   /* 182AA34E8 */
#define g_182AA34EC                      dword_140404A6C[278559392]                   /* 182AA34EC */
#define g_182AA47B8                      dword_140404A6C[278560595]                   /* 182AA47B8 */
#define g_182AA47C0                      dword_140404A6C[278560597]                   /* 182AA47C0 */
#define g_182AA47E0                      dword_140404A6C[278560605]                   /* 182AA47E0 */
#define g_182AA48B4                      dword_140404A6C[278560658]                   /* 182AA48B4 */
#define g_182AA48B8                      dword_140404A6C[278560659]                   /* 182AA48B8 */
#define g_182AA48BC                      dword_140404A6C[278560660]                   /* 182AA48BC */
#define g_182AA5B88                      dword_140404A6C[278561863]                   /* 182AA5B88 */
#define g_182AA5B90                      dword_140404A6C[278561865]                   /* 182AA5B90 */
#define g_182AA5BB0                      dword_140404A6C[278561873]                   /* 182AA5BB0 */
#define g_182AA5C84                      dword_140404A6C[278561926]                   /* 182AA5C84 */
#define g_182AA5C88                      dword_140404A6C[278561927]                   /* 182AA5C88 */
#define g_182AA5C8C                      dword_140404A6C[278561928]                   /* 182AA5C8C */
#define g_182AA6F58                      dword_140404A6C[278563131]                   /* 182AA6F58 */
#define g_182AA6F60                      dword_140404A6C[278563133]                   /* 182AA6F60 */
#define g_182AA6F80                      dword_140404A6C[278563141]                   /* 182AA6F80 */
#define g_182AA7000                      dword_140404A6C[278563173]                   /* 182AA7000 */
#define g_182AA700C                      dword_140404A6C[278563176]                   /* 182AA700C */
#define g_182AA7054                      dword_140404A6C[278563194]                   /* 182AA7054 */
#define g_182AA7058                      dword_140404A6C[278563195]                   /* 182AA7058 */
#define g_182AA705C                      dword_140404A6C[278563196]                   /* 182AA705C */
#define g_182AA8328                      dword_140404A6C[278564399]                   /* 182AA8328 */
#define g_182AA8330                      dword_140404A6C[278564401]                   /* 182AA8330 */
#define g_182AA8350                      dword_140404A6C[278564409]                   /* 182AA8350 */
#define g_182AA83A0                      dword_140404A6C[278564429]                   /* 182AA83A0 */
#define g_182AA83B0                      dword_140404A6C[278564433]                   /* 182AA83B0 */
#define g_182AA83B4                      dword_140404A6C[278564434]                   /* 182AA83B4 */
#define g_182AA8424                      dword_140404A6C[278564462]                   /* 182AA8424 */
#define g_182AA8428                      dword_140404A6C[278564463]                   /* 182AA8428 */
#define g_182AA842C                      dword_140404A6C[278564464]                   /* 182AA842C */
#define g_182AA8900                      dword_140404A6C[278564773]                   /* 182AA8900 */
#define g_182AA96F4                      dword_140404A6C[278565666]                   /* 182AA96F4 */
#define g_182AA96F8                      dword_140404A6C[278565667]                   /* 182AA96F8 */
#define g_182AA9700                      dword_140404A6C[278565669]                   /* 182AA9700 */
#define g_182AA9714                      dword_140404A6C[278565674]                   /* 182AA9714 */
#define g_182AA9720                      dword_140404A6C[278565677]                   /* 182AA9720 */
#define g_182AA97A0                      dword_140404A6C[278565709]                   /* 182AA97A0 */
#define g_182AA97AC                      dword_140404A6C[278565712]                   /* 182AA97AC */
#define g_182AA97F4                      dword_140404A6C[278565730]                   /* 182AA97F4 */
#define g_182AA97F8                      dword_140404A6C[278565731]                   /* 182AA97F8 */
#define g_182AA97FC                      dword_140404A6C[278565732]                   /* 182AA97FC */
#define g_182AAAAC4                      dword_140404A6C[278566934]                   /* 182AAAAC4 */
#define g_182AAAAC8                      dword_140404A6C[278566935]                   /* 182AAAAC8 */
#define g_182AAAAD0                      dword_140404A6C[278566937]                   /* 182AAAAD0 */
#define g_182AAAAE4                      dword_140404A6C[278566942]                   /* 182AAAAE4 */
#define g_182AAAAF0                      dword_140404A6C[278566945]                   /* 182AAAAF0 */
#define g_182AAAB70                      dword_140404A6C[278566977]                   /* 182AAAB70 */
#define g_182AAAB7C                      dword_140404A6C[278566980]                   /* 182AAAB7C */
#define g_182AAAB80                      dword_140404A6C[278566981]                   /* 182AAAB80 */
#define g_182AAAB8C                      dword_140404A6C[278566984]                   /* 182AAAB8C */
#define g_182AAABC4                      dword_140404A6C[278566998]                   /* 182AAABC4 */
#define g_182AAABC8                      dword_140404A6C[278566999]                   /* 182AAABC8 */
#define g_182AAABCC                      dword_140404A6C[278567000]                   /* 182AAABCC */
#define g_182AABE98                      dword_140404A6C[278568203]                   /* 182AABE98 */
#define g_182AABE9C                      (*(_QWORD *)&dword_140404A6C[278568204])     /* 182AABE9C */
#define g_182AABEC0                      dword_140404A6C[278568213]                   /* 182AABEC0 */
#define g_182AABF94                      dword_140404A6C[278568266]                   /* 182AABF94 */
#define g_182AABF98                      dword_140404A6C[278568267]                   /* 182AABF98 */
#define g_182AABF9C                      dword_140404A6C[278568268]                   /* 182AABF9C */
#define g_182AAD268                      dword_140404A6C[278569471]                   /* 182AAD268 */
#define g_182AAD26C                      (*(_QWORD *)&dword_140404A6C[278569472])     /* 182AAD26C */
#define g_182AAD290                      (*(_QWORD *)&dword_140404A6C[278569481])     /* 182AAD290 */
#define g_182AAD364                      dword_140404A6C[278569534]                   /* 182AAD364 */
#define g_182AAD368                      dword_140404A6C[278569535]                   /* 182AAD368 */
#define g_182AAD36C                      dword_140404A6C[278569536]                   /* 182AAD36C */
#define g_182AAE638                      dword_140404A6C[278570739]                   /* 182AAE638 */
#define g_182AAE63C                      (*(_QWORD *)&dword_140404A6C[278570740])     /* 182AAE63C */
#define g_182AAE660                      dword_140404A6C[278570749]                   /* 182AAE660 */
#define g_182AAE6E0                      dword_140404A6C[278570781]                   /* 182AAE6E0 */
#define g_182AAE6EC                      dword_140404A6C[278570784]                   /* 182AAE6EC */
#define g_182AAE734                      dword_140404A6C[278570802]                   /* 182AAE734 */
#define g_182AAE738                      dword_140404A6C[278570803]                   /* 182AAE738 */
#define g_182AAE73C                      dword_140404A6C[278570804]                   /* 182AAE73C */
#define g_182AAEB4C                      dword_140404A6C[278571064]                   /* 182AAEB4C */
#define item_type39_child_offset         (*(float *)&dword_140404A6C[278571065])      /* 182AAEB50 src/engine/item.h */
#define g_182AAEB54                      dword_140404A6C[278571066]                   /* 182AAEB54 */
#define g_182AAFA08                      dword_140404A6C[278572007]                   /* 182AAFA08 */
#define g_182AAFA0C                      (*(_QWORD *)&dword_140404A6C[278572008])     /* 182AAFA0C */
#define g_182AAFA30                      dword_140404A6C[278572017]                   /* 182AAFA30 */
#define g_182AAFAB0                      dword_140404A6C[278572049]                   /* 182AAFAB0 */
#define g_182AAFABC                      dword_140404A6C[278572052]                   /* 182AAFABC */
#define g_182AAFB04                      dword_140404A6C[278572070]                   /* 182AAFB04 */
#define g_182AAFB08                      dword_140404A6C[278572071]                   /* 182AAFB08 */
#define g_182AAFB0C                      dword_140404A6C[278572072]                   /* 182AAFB0C */
#define g_182AAFF1C                      dword_140404A6C[278572332]                   /* 182AAFF1C */
#define g_182AAFF20                      dword_140404A6C[278572333]                   /* 182AAFF20 */
#define g_182AAFF24                      dword_140404A6C[278572334]                   /* 182AAFF24 */
#define g_182AB0DD8                      dword_140404A6C[278573275]                   /* 182AB0DD8 */
#define g_182AB0DDC                      (*(_QWORD *)&dword_140404A6C[278573276])     /* 182AB0DDC */
#define g_182AB0E00                      dword_140404A6C[278573285]                   /* 182AB0E00 */
#define g_182AB0ED4                      dword_140404A6C[278573338]                   /* 182AB0ED4 */
#define g_182AB0ED8                      dword_140404A6C[278573339]                   /* 182AB0ED8 */
#define g_182AB0EDC                      dword_140404A6C[278573340]                   /* 182AB0EDC */
#define g_182AB21A8                      dword_140404A6C[278574543]                   /* 182AB21A8 */
#define g_182AB21AC                      (*(_QWORD *)&dword_140404A6C[278574544])     /* 182AB21AC */
#define g_182AB21D0                      dword_140404A6C[278574553]                   /* 182AB21D0 */
#define g_182AB22A4                      dword_140404A6C[278574606]                   /* 182AB22A4 */
#define g_182AB22A8                      dword_140404A6C[278574607]                   /* 182AB22A8 */
#define g_182AB22AC                      dword_140404A6C[278574608]                   /* 182AB22AC */
#define g_182AB3578                      dword_140404A6C[278575811]                   /* 182AB3578 */
#define g_182AB357C                      (*(_QWORD *)&dword_140404A6C[278575812])     /* 182AB357C */
#define g_182AB35A0                      dword_140404A6C[278575821]                   /* 182AB35A0 */
#define g_182AB3674                      dword_140404A6C[278575874]                   /* 182AB3674 */
#define g_182AB3678                      dword_140404A6C[278575875]                   /* 182AB3678 */
#define g_182AB367C                      dword_140404A6C[278575876]                   /* 182AB367C */
#define g_182AB4948                      dword_140404A6C[278577079]                   /* 182AB4948 */
#define g_182AB494C                      (*(_QWORD *)&dword_140404A6C[278577080])     /* 182AB494C */
#define g_182AB4970                      dword_140404A6C[278577089]                   /* 182AB4970 */
#define g_182AB4A44                      dword_140404A6C[278577142]                   /* 182AB4A44 */
#define g_182AB4A48                      dword_140404A6C[278577143]                   /* 182AB4A48 */
#define g_182AB4A4C                      dword_140404A6C[278577144]                   /* 182AB4A4C */
#define g_182AB5D14                      dword_140404A6C[278578346]                   /* 182AB5D14 */
#define g_182AB5D18                      dword_140404A6C[278578347]                   /* 182AB5D18 */
#define g_182AB5D1C                      dword_140404A6C[278578348]                   /* 182AB5D1C */
#define g_182AB5D40                      dword_140404A6C[278578357]                   /* 182AB5D40 */
#define g_182AB5E14                      dword_140404A6C[278578410]                   /* 182AB5E14 */
#define g_182AB5E18                      dword_140404A6C[278578411]                   /* 182AB5E18 */
#define g_182AB5E1C                      dword_140404A6C[278578412]                   /* 182AB5E1C */
#define g_182BBAD30                      dword_140404A6C[278845617]                   /* 182BBAD30 */
#define g_182BBB180                      dword_140404A6C[278845893]                   /* 182BBB180 */
#define g_182BBB188                      dword_140404A6C[278845895]                   /* 182BBB188 */
#define g_182BBB194                      dword_140404A6C[278845898]                   /* 182BBB194 */
#define g_182BBB19C                      dword_140404A6C[278845900]                   /* 182BBB19C */
#define g_182BBB1A4                      dword_140404A6C[278845902]                   /* 182BBB1A4 */
#define g_182BBB1A8                      dword_140404A6C[278845903]                   /* 182BBB1A8 */
#define g_182BBB1AC                      dword_140404A6C[278845904]                   /* 182BBB1AC */
#define g_182BBB1B4                      dword_140404A6C[278845906]                   /* 182BBB1B4 */
#define g_182BBB1DC                      dword_140404A6C[278845916]                   /* 182BBB1DC */
#define g_182BBB1E4                      dword_140404A6C[278845918]                   /* 182BBB1E4 */
#define g_182BBB224                      dword_140404A6C[278845934]                   /* 182BBB224 */
#define g_182BBB22C                      dword_140404A6C[278845936]                   /* 182BBB22C */
#define g_182BBB238                      dword_140404A6C[278845939]                   /* 182BBB238 */
#define g_182BBB244                      dword_140404A6C[278845942]                   /* 182BBB244 */
#define g_182BBB2A8                      dword_140404A6C[278845967]                   /* 182BBB2A8 */
#define g_182BBB2DC                      dword_140404A6C[278845980]                   /* 182BBB2DC */
#define g_182BBB41C                      dword_140404A6C[278846060]                   /* 182BBB41C */
#define g_182BBB428                      dword_140404A6C[278846063]                   /* 182BBB428 */
#define g_182BBB4BC                      dword_140404A6C[278846100]                   /* 182BBB4BC */
#define g_182BBB4E0                      dword_140404A6C[278846109]                   /* 182BBB4E0 */
#define g_182BBB4E8                      dword_140404A6C[278846111]                   /* 182BBB4E8 */
#define g_182BBB4EC                      dword_140404A6C[278846112]                   /* 182BBB4EC */
#define g_182BBB4F0                      dword_140404A6C[278846113]                   /* 182BBB4F0 */
#define g_182BBB4F4                      dword_140404A6C[278846114]                   /* 182BBB4F4 */
#define g_182BBB504                      dword_140404A6C[278846118]                   /* 182BBB504 */
#define g_182BBB508                      dword_140404A6C[278846119]                   /* 182BBB508 */
#define g_182BBB50C                      dword_140404A6C[278846120]                   /* 182BBB50C */
#define g_182BBB514                      dword_140404A6C[278846122]                   /* 182BBB514 */
#define g_182BBB51C                      dword_140404A6C[278846124]                   /* 182BBB51C */
#define g_182BBB530                      dword_140404A6C[278846129]                   /* 182BBB530 */
#define g_182BBB534                      dword_140404A6C[278846130]                   /* 182BBB534 */
#define g_182BBBCF4                      dword_140404A6C[278846626]                   /* 182BBBCF4 */
#define g_182BBC534                      dword_140404A6C[278847154]                   /* 182BBC534 */
#define g_182BBC57C                      dword_140404A6C[278847172]                   /* 182BBC57C */
#define g_182BBC580                      dword_140404A6C[278847173]                   /* 182BBC580 */
#define g_182BBC584                      dword_140404A6C[278847174]                   /* 182BBC584 */
#define g_182BBC6B0                      dword_140404A6C[278847249]                   /* 182BBC6B0 */
#define g_182BBC7E0                      dword_140404A6C[278847325]                   /* 182BBC7E0 */
#define g_182BBC7E4                      dword_140404A6C[278847326]                   /* 182BBC7E4 */
#define g_182BBC7EC                      dword_140404A6C[278847328]                   /* 182BBC7EC */
#define g_182BBCA00                      dword_140404A6C[278847461]                   /* 182BBCA00 */
#define g_182BBCBE8                      dword_140404A6C[278847583]                   /* 182BBCBE8 */
#define g_182BBCD64                      dword_140404A6C[278847678]                   /* 182BBCD64 */
#define g_18329B180                      dword_140404A6C[280648133]                   /* 18329B180 */
#define g_18329B194                      dword_140404A6C[280648138]                   /* 18329B194 */
#define g_18329B1A0                      dword_140404A6C[280648141]                   /* 18329B1A0 */
#define g_18329B1A4                      dword_140404A6C[280648142]                   /* 18329B1A4 */
#define g_18329B1A8                      (*(float *)&dword_140404A6C[280648143])      /* 18329B1A8 */
#define g_18329B1B4                      dword_140404A6C[280648146]                   /* 18329B1B4 */
#define g_18329B1BC                      dword_140404A6C[280648148]                   /* 18329B1BC */
#define g_18329B1C0                      dword_140404A6C[280648149]                   /* 18329B1C0 */
#define g_18329B1C4                      dword_140404A6C[280648150]                   /* 18329B1C4 */
#define g_18329B1C8                      dword_140404A6C[280648151]                   /* 18329B1C8 */
#define g_18329B1DC                      dword_140404A6C[280648156]                   /* 18329B1DC */
#define g_18329B1E0                      dword_140404A6C[280648157]                   /* 18329B1E0 */
#define g_18329B1E4                      dword_140404A6C[280648158]                   /* 18329B1E4 */
#define g_18329B41C                      dword_140404A6C[280648300]                   /* 18329B41C */
#define g_18329C1E0                      dword_140404A6C[280649181]                   /* 18329C1E0 */
#define g_18329C1E4                      dword_140404A6C[280649182]                   /* 18329C1E4 */
#define g_18329C400                      dword_140404A6C[280649317]                   /* 18329C400 */
#define g_18329C404                      dword_140404A6C[280649318]                   /* 18329C404 */
#define g_18329CC24                      dword_140404A6C[280649838]                   /* 18329CC24 */
#define g_18329CC28                      dword_140404A6C[280649839]                   /* 18329CC28 */
#define g_18329CC2C                      dword_140404A6C[280649840]                   /* 18329CC2C */
#define g_18329CC34                      dword_140404A6C[280649842]                   /* 18329CC34 */
#define g_18329CC38                      dword_140404A6C[280649843]                   /* 18329CC38 */
#define g_18329CC3C                      dword_140404A6C[280649844]                   /* 18329CC3C */
#define g_18329CC40                      dword_140404A6C[280649845]                   /* 18329CC40 */
#define g_18329CC44                      dword_140404A6C[280649846]                   /* 18329CC44 */
#define g_18329CC48                      dword_140404A6C[280649847]                   /* 18329CC48 */
#define g_18329CC4C                      dword_140404A6C[280649848]                   /* 18329CC4C */
#define g_18329CC54                      dword_140404A6C[280649850]                   /* 18329CC54 */
#define g_18329CC58                      dword_140404A6C[280649851]                   /* 18329CC58 */
#define g_18329CD64                      dword_140404A6C[280649918]                   /* 18329CD64 */
#define g_18329CED0                      dword_140404A6C[280650009]                   /* 18329CED0 */
#define g_18329DEE0                      dword_140404A6C[280651037]                   /* 18329DEE0 */
#define g_18329DEE4                      dword_140404A6C[280651038]                   /* 18329DEE4 */
#define g_18329DEE8                      dword_140404A6C[280651039]                   /* 18329DEE8 */
#define g_18329E308                      dword_140404A6C[280651303]                   /* 18329E308 */
#define g_18329E30C                      dword_140404A6C[280651304]                   /* 18329E30C */
#define g_18329E310                      dword_140404A6C[280651305]                   /* 18329E310 */
#define g_18329E314                      dword_140404A6C[280651306]                   /* 18329E314 */
#define g_18329E320                      dword_140404A6C[280651309]                   /* 18329E320 */
#define g_18329E324                      dword_140404A6C[280651310]                   /* 18329E324 */
#define g_18329E328                      dword_140404A6C[280651311]                   /* 18329E328 */
#define g_18329E32C                      dword_140404A6C[280651312]                   /* 18329E32C */
#define g_18329E330                      dword_140404A6C[280651313]                   /* 18329E330 */
#define g_18329E334                      dword_140404A6C[280651314]                   /* 18329E334 */
#define g_18329E338                      dword_140404A6C[280651315]                   /* 18329E338 */
#define g_18329E33C                      dword_140404A6C[280651316]                   /* 18329E33C */
#define g_18329E340                      dword_140404A6C[280651317]                   /* 18329E340 */
#define g_18329E344                      dword_140404A6C[280651318]                   /* 18329E344 */
#define g_18329E348                      dword_140404A6C[280651319]                   /* 18329E348 */
#define g_18329E354                      dword_140404A6C[280651322]                   /* 18329E354 */
#define g_18329E358                      dword_140404A6C[280651323]                   /* 18329E358 */
#define g_18329E35C                      dword_140404A6C[280651324]                   /* 18329E35C */
#define g_18329E360                      dword_140404A6C[280651325]                   /* 18329E360 */
#define g_18329E380                      dword_140404A6C[280651333]                   /* 18329E380 */
#define g_18329E384                      dword_140404A6C[280651334]                   /* 18329E384 */
#define g_18329E388                      dword_140404A6C[280651335]                   /* 18329E388 */
#define g_18329E38C                      dword_140404A6C[280651336]                   /* 18329E38C */
#define g_18329E390                      dword_140404A6C[280651337]                   /* 18329E390 */
#define g_18329E394                      dword_140404A6C[280651338]                   /* 18329E394 */
#define g_18329E398                      dword_140404A6C[280651339]                   /* 18329E398 */
#define g_18329E39C                      dword_140404A6C[280651340]                   /* 18329E39C */
#define g_18329E3A0                      dword_140404A6C[280651341]                   /* 18329E3A0 */
#define g_18329E3A4                      dword_140404A6C[280651342]                   /* 18329E3A4 */
#define g_18329E3C0                      dword_140404A6C[280651349]                   /* 18329E3C0 */
#define g_18329E3E0                      dword_140404A6C[280651357]                   /* 18329E3E0 */
#define g_18329E400                      dword_140404A6C[280651365]                   /* 18329E400 */
#define g_18329E404                      dword_140404A6C[280651366]                   /* 18329E404 */
#define g_18329E408                      dword_140404A6C[280651367]                   /* 18329E408 */
#define g_18329E40C                      dword_140404A6C[280651368]                   /* 18329E40C */
#define g_18329E420                      dword_140404A6C[280651373]                   /* 18329E420 */
#define g_18329E430                      dword_140404A6C[280651377]                   /* 18329E430 */
#define g_18329E434                      dword_140404A6C[280651378]                   /* 18329E434 */
#define g_18329E438                      dword_140404A6C[280651379]                   /* 18329E438 */
#define g_18329E43C                      dword_140404A6C[280651380]                   /* 18329E43C */
#define g_18329E440                      dword_140404A6C[280651381]                   /* 18329E440 */
#define g_18329E444                      dword_140404A6C[280651382]                   /* 18329E444 */
#define g_18329E450                      dword_140404A6C[280651385]                   /* 18329E450 */
#define g_18329E470                      dword_140404A6C[280651393]                   /* 18329E470 */
#define g_18329E474                      dword_140404A6C[280651394]                   /* 18329E474 */
#define g_18329E4C8                      dword_140404A6C[280651415]                   /* 18329E4C8 */
#define g_18329E4CC                      dword_140404A6C[280651416]                   /* 18329E4CC */
#define g_18329E4D0                      dword_140404A6C[280651417]                   /* 18329E4D0 */
#define g_18329E4D4                      dword_140404A6C[280651418]                   /* 18329E4D4 */
#define g_18329E4D8                      dword_140404A6C[280651419]                   /* 18329E4D8 */
#define g_18329E4DC                      dword_140404A6C[280651420]                   /* 18329E4DC */
#define g_18329E4F8                      dword_140404A6C[280651427]                   /* 18329E4F8 */
#define g_18329E4FC                      dword_140404A6C[280651428]                   /* 18329E4FC */
#define g_18329E51C                      dword_140404A6C[280651436]                   /* 18329E51C */
#define g_18329E520                      dword_140404A6C[280651437]                   /* 18329E520 */
#define g_18329E528                      dword_140404A6C[280651439]                   /* 18329E528 */
#define g_18329E52C                      dword_140404A6C[280651440]                   /* 18329E52C */
#define g_18329E530                      dword_140404A6C[280651441]                   /* 18329E530 */
#define g_18329E534                      dword_140404A6C[280651442]                   /* 18329E534 */
#define g_18329E544                      dword_140404A6C[280651446]                   /* 18329E544 */
#define g_18329E548                      dword_140404A6C[280651447]                   /* 18329E548 */
#define g_18329E54C                      dword_140404A6C[280651448]                   /* 18329E54C */
#define g_18329E55C                      (*(_OWORD *)&dword_140404A6C[280651452])     /* 18329E55C */
#define g_18329E560                      dword_140404A6C[280651453]                   /* 18329E560 */
#define g_18329E564                      dword_140404A6C[280651454]                   /* 18329E564 */
#define g_18329E568                      dword_140404A6C[280651455]                   /* 18329E568 */
#define g_18329E56C                      (*(_OWORD *)&dword_140404A6C[280651456])     /* 18329E56C */
#define g_18329E570                      dword_140404A6C[280651457]                   /* 18329E570 */
#define g_18329E574                      dword_140404A6C[280651458]                   /* 18329E574 */
#define g_18329E578                      dword_140404A6C[280651459]                   /* 18329E578 */
#define g_18329E57C                      dword_140404A6C[280651460]                   /* 18329E57C */
#define g_18329E580                      dword_140404A6C[280651461]                   /* 18329E580 */
#define g_18329E584                      dword_140404A6C[280651462]                   /* 18329E584 */
#define g_18329E588                      dword_140404A6C[280651463]                   /* 18329E588 */
#define g_18329E5AC                      dword_140404A6C[280651472]                   /* 18329E5AC */
#define g_18329E5F0                      dword_140404A6C[280651489]                   /* 18329E5F0 */
#define g_18329E600                      dword_140404A6C[280651493]                   /* 18329E600 */
#define g_18329E64C                      dword_140404A6C[280651512]                   /* 18329E64C */
#define g_18329E650                      dword_140404A6C[280651513]                   /* 18329E650 */
#define g_18329E654                      dword_140404A6C[280651514]                   /* 18329E654 */
#define g_18329E658                      dword_140404A6C[280651515]                   /* 18329E658 */
#define g_18329E668                      dword_140404A6C[280651519]                   /* 18329E668 */
#define g_18329E694                      (*(_OWORD *)&dword_140404A6C[280651530])     /* 18329E694 */
#define g_18329E6A4                      (*(_OWORD *)&dword_140404A6C[280651534])     /* 18329E6A4 */
#define g_18329E6B4                      dword_140404A6C[280651538]                   /* 18329E6B4 */
#define g_18329E74C                      dword_140404A6C[280651576]                   /* 18329E74C */
#define g_18329E7CC                      (*(_OWORD *)&dword_140404A6C[280651608])     /* 18329E7CC */
#define g_18329E7DC                      (*(_OWORD *)&dword_140404A6C[280651612])     /* 18329E7DC */
#define g_18329E7EC                      dword_140404A6C[280651616]                   /* 18329E7EC */
#define g_18329E8D4                      dword_140404A6C[280651674]                   /* 18329E8D4 */
#define g_18329E8D8                      dword_140404A6C[280651675]                   /* 18329E8D8 */
#define g_18329E8DC                      dword_140404A6C[280651676]                   /* 18329E8DC */
#define g_18329E904                      (*(_OWORD *)&dword_140404A6C[280651686])     /* 18329E904 */
#define g_18329E914                      (*(_OWORD *)&dword_140404A6C[280651690])     /* 18329E914 */
#define g_18329E91C                      dword_140404A6C[280651692]                   /* 18329E91C */
#define g_18329E920                      dword_140404A6C[280651693]                   /* 18329E920 */
#define g_18329E924                      dword_140404A6C[280651694]                   /* 18329E924 */
#define g_18329E9FC                      dword_140404A6C[280651748]                   /* 18329E9FC */
#define g_18329EA3C                      (*(_OWORD *)&dword_140404A6C[280651764])     /* 18329EA3C */
#define g_18329EA4C                      (*(_OWORD *)&dword_140404A6C[280651768])     /* 18329EA4C */
#define g_18329EA5C                      dword_140404A6C[280651772]                   /* 18329EA5C */
#define g_18329EB74                      (*(_OWORD *)&dword_140404A6C[280651842])     /* 18329EB74 */
#define g_18329EB84                      (*(_OWORD *)&dword_140404A6C[280651846])     /* 18329EB84 */
#define g_18329EB94                      dword_140404A6C[280651850]                   /* 18329EB94 */
#define g_18329ECAC                      (*(_OWORD *)&dword_140404A6C[280651920])     /* 18329ECAC */
#define g_18329ECBC                      (*(_OWORD *)&dword_140404A6C[280651924])     /* 18329ECBC */
#define g_18329ECCC                      dword_140404A6C[280651928]                   /* 18329ECCC */
#define g_18329EDE4                      (*(_OWORD *)&dword_140404A6C[280651998])     /* 18329EDE4 */
#define g_18329EDF4                      (*(_OWORD *)&dword_140404A6C[280652002])     /* 18329EDF4 */
#define g_18329EE04                      dword_140404A6C[280652006]                   /* 18329EE04 */
#define g_18329EF1C                      (*(_OWORD *)&dword_140404A6C[280652076])     /* 18329EF1C */
#define g_18329EF2C                      (*(_OWORD *)&dword_140404A6C[280652080])     /* 18329EF2C */
#define g_18329EF3C                      dword_140404A6C[280652084]                   /* 18329EF3C */
#define g_18329F024                      dword_140404A6C[280652142]                   /* 18329F024 */
#define g_18329F028                      dword_140404A6C[280652143]                   /* 18329F028 */
#define g_18329F02C                      dword_140404A6C[280652144]                   /* 18329F02C */
#define g_18329F054                      (*(_OWORD *)&dword_140404A6C[280652154])     /* 18329F054 */
#define g_18329F064                      (*(_OWORD *)&dword_140404A6C[280652158])     /* 18329F064 */
#define g_18329F074                      dword_140404A6C[280652162]                   /* 18329F074 */
#define g_18329F18C                      (*(_OWORD *)&dword_140404A6C[280652232])     /* 18329F18C */
#define g_18329F19C                      (*(_OWORD *)&dword_140404A6C[280652236])     /* 18329F19C */
#define g_18329F1AC                      dword_140404A6C[280652240]                   /* 18329F1AC */
#define g_18329F290                      dword_140404A6C[280652297]                   /* 18329F290 */
#define g_18329F294                      dword_140404A6C[280652298]                   /* 18329F294 */
#define g_18329F298                      dword_140404A6C[280652299]                   /* 18329F298 */
#define g_18329F29C                      dword_140404A6C[280652300]                   /* 18329F29C */
#define g_18329F2C4                      (*(_OWORD *)&dword_140404A6C[280652310])     /* 18329F2C4 */
#define g_18329F2D0                      dword_140404A6C[280652313]                   /* 18329F2D0 */
#define g_18329F2D4                      (*(_OWORD *)&dword_140404A6C[280652314])     /* 18329F2D4 */
#define g_18329F2D8                      dword_140404A6C[280652315]                   /* 18329F2D8 */
#define g_18329F2E4                      dword_140404A6C[280652318]                   /* 18329F2E4 */
#define g_18329F3CC                      dword_140404A6C[280652376]                   /* 18329F3CC */
#define g_18329F3D0                      dword_140404A6C[280652377]                   /* 18329F3D0 */
#define g_18329F3D4                      dword_140404A6C[280652378]                   /* 18329F3D4 */
#define g_18329F3FC                      (*(_OWORD *)&dword_140404A6C[280652388])     /* 18329F3FC */
#define g_18329F40C                      (*(_OWORD *)&dword_140404A6C[280652392])     /* 18329F40C */
#define g_18329F41C                      dword_140404A6C[280652396]                   /* 18329F41C */
#define g_18329F4F8                      dword_140404A6C[280652451]                   /* 18329F4F8 */
#define g_18329F534                      (*(_OWORD *)&dword_140404A6C[280652466])     /* 18329F534 */
#define g_18329F544                      (*(_OWORD *)&dword_140404A6C[280652470])     /* 18329F544 */
#define g_18329F554                      dword_140404A6C[280652474]                   /* 18329F554 */
#define g_18329F63C                      dword_140404A6C[280652532]                   /* 18329F63C */
#define g_18329F640                      dword_140404A6C[280652533]                   /* 18329F640 */
#define g_18329F644                      dword_140404A6C[280652534]                   /* 18329F644 */
#define g_18329F66C                      (*(_OWORD *)&dword_140404A6C[280652544])     /* 18329F66C */
#define g_18329F678                      dword_140404A6C[280652547]                   /* 18329F678 */
#define g_18329F67C                      (*(_OWORD *)&dword_140404A6C[280652548])     /* 18329F67C */
#define g_18329F680                      dword_140404A6C[280652549]                   /* 18329F680 */
#define g_18329F68C                      dword_140404A6C[280652552]                   /* 18329F68C */
#define g_18329F774                      dword_140404A6C[280652610]                   /* 18329F774 */
#define g_18329F778                      dword_140404A6C[280652611]                   /* 18329F778 */
#define g_18329F77C                      dword_140404A6C[280652612]                   /* 18329F77C */
#define g_18329F7A4                      (*(_OWORD *)&dword_140404A6C[280652622])     /* 18329F7A4 */
#define g_18329F7B4                      (*(_OWORD *)&dword_140404A6C[280652626])     /* 18329F7B4 */
#define g_18329F7C4                      dword_140404A6C[280652630]                   /* 18329F7C4 */
#define g_18329F8A0                      dword_140404A6C[280652685]                   /* 18329F8A0 */
#define g_1832A1234                      dword_140404A6C[280654322]                   /* 1832A1234 */
#define g_1832A1238                      dword_140404A6C[280654323]                   /* 1832A1238 */
#define g_1832A123C                      dword_140404A6C[280654324]                   /* 1832A123C */
#define g_1832A1240                      dword_140404A6C[280654325]                   /* 1832A1240 */
#define g_1832A1244                      dword_140404A6C[280654326]                   /* 1832A1244 */
#define g_1832A124C                      dword_140404A6C[280654328]                   /* 1832A124C */
#define g_1832A1250                      dword_140404A6C[280654329]                   /* 1832A1250 */
#define g_1832A1254                      dword_140404A6C[280654330]                   /* 1832A1254 */
#define g_1832A293C                      dword_140404A6C[280655796]                   /* 1832A293C */
#define g_1832A4A3C                      dword_140404A6C[280657908]                   /* 1832A4A3C */
#define g_1832A4A48                      dword_140404A6C[280657911]                   /* 1832A4A48 */
#define g_1832A4A4C                      dword_140404A6C[280657912]                   /* 1832A4A4C */
#define g_1832A4B58                      dword_140404A6C[280657979]                   /* 1832A4B58 */
#define g_1832A4B84                      dword_140404A6C[280657990]                   /* 1832A4B84 */
#define g_1832A4BBC                      dword_140404A6C[280658004]                   /* 1832A4BBC */
#define g_1832A4C14                      dword_140404A6C[280658026]                   /* 1832A4C14 */
#define g_1832A4C1C                      dword_140404A6C[280658028]                   /* 1832A4C1C */
#define g_1832A4C20                      dword_140404A6C[280658029]                   /* 1832A4C20 */
#define g_1832A4C24                      dword_140404A6C[280658030]                   /* 1832A4C24 */
#define g_1832A4C28                      dword_140404A6C[280658031]                   /* 1832A4C28 */
#define g_1832A4C88                      dword_140404A6C[280658055]                   /* 1832A4C88 */
#define g_1832A4C8C                      dword_140404A6C[280658056]                   /* 1832A4C8C */
#define g_1832A4CF0                      dword_140404A6C[280658081]                   /* 1832A4CF0 */
#define g_1832A4CF8                      dword_140404A6C[280658083]                   /* 1832A4CF8 */
#define g_1832A4CFC                      dword_140404A6C[280658084]                   /* 1832A4CFC */
#define g_1832A4D00                      dword_140404A6C[280658085]                   /* 1832A4D00 */
#define g_1832A4D04                      dword_140404A6C[280658086]                   /* 1832A4D04 */
#define g_1832A4D64                      dword_140404A6C[280658110]                   /* 1832A4D64 */
#define g_1832A4D68                      dword_140404A6C[280658111]                   /* 1832A4D68 */
#define g_1832A4DBC                      dword_140404A6C[280658132]                   /* 1832A4DBC */
#define g_1832A4DC0                      dword_140404A6C[280658133]                   /* 1832A4DC0 */
#define g_1832A4DC4                      dword_140404A6C[280658134]                   /* 1832A4DC4 */
#define g_1832A4DD8                      dword_140404A6C[280658139]                   /* 1832A4DD8 */
#define g_1832A4DDC                      dword_140404A6C[280658140]                   /* 1832A4DDC */
#define g_1832A4DFC                      dword_140404A6C[280658148]                   /* 1832A4DFC */
#define g_1832A4E00                      dword_140404A6C[280658149]                   /* 1832A4E00 */
#define g_1832A4E04                      dword_140404A6C[280658150]                   /* 1832A4E04 */
#define g_1832A4E28                      dword_140404A6C[280658159]                   /* 1832A4E28 */
#define g_1832A4E2C                      dword_140404A6C[280658160]                   /* 1832A4E2C */
#define g_1832A4E50                      dword_140404A6C[280658169]                   /* 1832A4E50 */
#define g_1832A4E54                      dword_140404A6C[280658170]                   /* 1832A4E54 */
#define g_1832A4E78                      dword_140404A6C[280658179]                   /* 1832A4E78 */
#define g_1832A4E7C                      dword_140404A6C[280658180]                   /* 1832A4E7C */
#define g_1832A4EA0                      dword_140404A6C[280658189]                   /* 1832A4EA0 */
#define g_1832A4EA4                      dword_140404A6C[280658190]                   /* 1832A4EA4 */
#define g_1832A4EC8                      dword_140404A6C[280658199]                   /* 1832A4EC8 */
#define g_1832A4ECC                      dword_140404A6C[280658200]                   /* 1832A4ECC */
#define g_1832A4F18                      dword_140404A6C[280658219]                   /* 1832A4F18 */
#define g_1832A4F1C                      dword_140404A6C[280658220]                   /* 1832A4F1C */
#define g_1832A4F20                      dword_140404A6C[280658221]                   /* 1832A4F20 */
#define g_1832A4F24                      dword_140404A6C[280658222]                   /* 1832A4F24 */
#define g_1832A4F28                      dword_140404A6C[280658223]                   /* 1832A4F28 */
#define g_1832A4F2C                      dword_140404A6C[280658224]                   /* 1832A4F2C */
#define g_1832A4F34                      dword_140404A6C[280658226]                   /* 1832A4F34 */
#define g_1832A4F38                      dword_140404A6C[280658227]                   /* 1832A4F38 */
#define g_1832A4F3C                      dword_140404A6C[280658228]                   /* 1832A4F3C */
#define g_1832A4F40                      dword_140404A6C[280658229]                   /* 1832A4F40 */
#define g_1832A5048                      dword_140404A6C[280658295]                   /* 1832A5048 */
#define g_1832A5050                      dword_140404A6C[280658297]                   /* 1832A5050 */
#define g_1832A5054                      dword_140404A6C[280658298]                   /* 1832A5054 */
#define g_1832A5058                      dword_140404A6C[280658299]                   /* 1832A5058 */
#define g_1832A5064                      dword_140404A6C[280658302]                   /* 1832A5064 */
#define g_1832A506C                      dword_140404A6C[280658304]                   /* 1832A506C */
#define g_1832A5074                      dword_140404A6C[280658306]                   /* 1832A5074 */
#define g_1832A507C                      dword_140404A6C[280658308]                   /* 1832A507C */
#define g_1832A5084                      dword_140404A6C[280658310]                   /* 1832A5084 */
#define g_1832A508C                      dword_140404A6C[280658312]                   /* 1832A508C */
#define g_1832A5100                      dword_140404A6C[280658341]                   /* 1832A5100 */
#define g_1832A5104                      dword_140404A6C[280658342]                   /* 1832A5104 */
#define g_1832A5108                      dword_140404A6C[280658343]                   /* 1832A5108 */
#define g_1832A512C                      dword_140404A6C[280658352]                   /* 1832A512C */
#define g_1832A5130                      dword_140404A6C[280658353]                   /* 1832A5130 */
#define g_1832A5284                      dword_140404A6C[280658438]                   /* 1832A5284 */
#define g_1832A52B4                      dword_140404A6C[280658450]                   /* 1832A52B4 */
#define g_1832A552C                      dword_140404A6C[280658608]                   /* 1832A552C */
#define g_18399DAE0                      dword_140404A6C[282485789]                   /* 18399DAE0 */
#define g_18399DB08                      dword_140404A6C[282485799]                   /* 18399DB08 */
#define g_18399DB2C                      dword_140404A6C[282485808]                   /* 18399DB2C */
#define g_18399DB30                      dword_140404A6C[282485809]                   /* 18399DB30 */
#define g_18399DEE0                      dword_140404A6C[282486045]                   /* 18399DEE0 */
#define g_18399DEE4                      (*(_OWORD *)&dword_140404A6C[282486046])     /* 18399DEE4 */
#define g_18399DEE8                      dword_140404A6C[282486047]                   /* 18399DEE8 */
#define g_18399DEEC                      dword_140404A6C[282486048]                   /* 18399DEEC */
#define g_18399DEF0                      dword_140404A6C[282486049]                   /* 18399DEF0 */
#define g_18399DEF4                      dword_140404A6C[282486050]                   /* 18399DEF4 */
#define g_18399DEF8                      dword_140404A6C[282486051]                   /* 18399DEF8 */
#define g_18399DEFC                      (*(_OWORD *)&dword_140404A6C[282486052])     /* 18399DEFC */
#define g_18399DF0C                      dword_140404A6C[282486056]                   /* 18399DF0C */
#define g_18399DF38                      dword_140404A6C[282486067]                   /* 18399DF38 */
#define g_18399DF3C                      dword_140404A6C[282486068]                   /* 18399DF3C */
#define g_18399DF40                      dword_140404A6C[282486069]                   /* 18399DF40 */
#define g_18399DF44                      dword_140404A6C[282486070]                   /* 18399DF44 */
#define g_18399DF48                      (*(_OWORD *)&dword_140404A6C[282486071])     /* 18399DF48 */
#define g_18399DF58                      (*(_QWORD *)&dword_140404A6C[282486075])     /* 18399DF58 */
#define g_18399DF60                      (*(_OWORD *)&dword_140404A6C[282486077])     /* 18399DF60 */
#define g_18399DF6C                      dword_140404A6C[282486080]                   /* 18399DF6C */
#define g_18399DF70                      dword_140404A6C[282486081]                   /* 18399DF70 */
#define g_18399DF84                      dword_140404A6C[282486086]                   /* 18399DF84 */
#define g_18399DF88                      dword_140404A6C[282486087]                   /* 18399DF88 */
#define g_18399DF8C                      dword_140404A6C[282486088]                   /* 18399DF8C */
#define g_18399DF90                      dword_140404A6C[282486089]                   /* 18399DF90 */
#define g_18399DF94                      dword_140404A6C[282486090]                   /* 18399DF94 */
#define g_18399DF98                      dword_140404A6C[282486091]                   /* 18399DF98 */
#define g_18399DF9C                      dword_140404A6C[282486092]                   /* 18399DF9C */
#define g_18399DFA0                      dword_140404A6C[282486093]                   /* 18399DFA0 */
#define g_18399DFA4                      dword_140404A6C[282486094]                   /* 18399DFA4 */
#define g_18399DFA8                      dword_140404A6C[282486095]                   /* 18399DFA8 */
#define g_18399DFAC                      (*(_OWORD *)&dword_140404A6C[282486096])     /* 18399DFAC */
#define g_18399DFBC                      (*(_QWORD *)&dword_140404A6C[282486100])     /* 18399DFBC */
#define g_18399DFC4                      (*(_OWORD *)&dword_140404A6C[282486102])     /* 18399DFC4 */
#define g_18399DFD4                      dword_140404A6C[282486106]                   /* 18399DFD4 */
#define g_18399DFE8                      dword_140404A6C[282486111]                   /* 18399DFE8 */
#define g_18399DFEC                      dword_140404A6C[282486112]                   /* 18399DFEC */
#define g_18399DFF0                      dword_140404A6C[282486113]                   /* 18399DFF0 */
#define g_18399DFF4                      dword_140404A6C[282486114]                   /* 18399DFF4 */
#define g_18399DFF8                      dword_140404A6C[282486115]                   /* 18399DFF8 */
#define g_18399DFFC                      dword_140404A6C[282486116]                   /* 18399DFFC */
#define g_18399E000                      dword_140404A6C[282486117]                   /* 18399E000 */
#define g_18399E004                      dword_140404A6C[282486118]                   /* 18399E004 */
#define g_18399E008                      dword_140404A6C[282486119]                   /* 18399E008 */
#define g_18399E00C                      dword_140404A6C[282486120]                   /* 18399E00C */
#define g_18399E010                      (*(_OWORD *)&dword_140404A6C[282486121])     /* 18399E010 */
#define g_18399E020                      (*(_QWORD *)&dword_140404A6C[282486125])     /* 18399E020 */
#define g_18399E028                      (*(_OWORD *)&dword_140404A6C[282486127])     /* 18399E028 */
#define g_18399E038                      dword_140404A6C[282486131]                   /* 18399E038 */
#define g_18399E04C                      dword_140404A6C[282486136]                   /* 18399E04C */
#define g_18399E050                      dword_140404A6C[282486137]                   /* 18399E050 */
#define g_18399E054                      dword_140404A6C[282486138]                   /* 18399E054 */
#define g_18399E058                      dword_140404A6C[282486139]                   /* 18399E058 */
#define g_18399E05C                      dword_140404A6C[282486140]                   /* 18399E05C */
#define g_18399E060                      dword_140404A6C[282486141]                   /* 18399E060 */
#define g_18399E064                      dword_140404A6C[282486142]                   /* 18399E064 */
#define g_18399E068                      dword_140404A6C[282486143]                   /* 18399E068 */
#define g_18399E06C                      dword_140404A6C[282486144]                   /* 18399E06C */
#define g_18399E070                      dword_140404A6C[282486145]                   /* 18399E070 */
#define g_18399E074                      (*(_OWORD *)&dword_140404A6C[282486146])     /* 18399E074 */
#define g_18399E084                      (*(_QWORD *)&dword_140404A6C[282486150])     /* 18399E084 */
#define g_18399E08C                      (*(_OWORD *)&dword_140404A6C[282486152])     /* 18399E08C */
#define g_18399E09C                      dword_140404A6C[282486156]                   /* 18399E09C */
#define g_18399E0AC                      dword_140404A6C[282486160]                   /* 18399E0AC */
#define g_18399E0B0                      dword_140404A6C[282486161]                   /* 18399E0B0 */
#define g_18399E0B4                      dword_140404A6C[282486162]                   /* 18399E0B4 */
#define g_18399E0B8                      dword_140404A6C[282486163]                   /* 18399E0B8 */
#define g_18399E0BC                      dword_140404A6C[282486164]                   /* 18399E0BC */
#define g_18399E0C0                      dword_140404A6C[282486165]                   /* 18399E0C0 */
#define g_18399E0C4                      dword_140404A6C[282486166]                   /* 18399E0C4 */
#define g_18399E0C8                      dword_140404A6C[282486167]                   /* 18399E0C8 */
#define g_18399E0CC                      dword_140404A6C[282486168]                   /* 18399E0CC */
#define g_18399E0D0                      dword_140404A6C[282486169]                   /* 18399E0D0 */
#define g_18399E0D4                      dword_140404A6C[282486170]                   /* 18399E0D4 */
#define g_18399E0D8                      (*(_OWORD *)&dword_140404A6C[282486171])     /* 18399E0D8 */
#define g_18399E0E8                      dword_140404A6C[282486175]                   /* 18399E0E8 */
#define g_18399E0EC                      dword_140404A6C[282486176]                   /* 18399E0EC */
#define g_18399E0F0                      (*(_OWORD *)&dword_140404A6C[282486177])     /* 18399E0F0 */
#define g_18399E100                      dword_140404A6C[282486181]                   /* 18399E100 */
#define g_18399E114                      (*(_QWORD *)&dword_140404A6C[282486186])     /* 18399E114 */
#define g_18399E11C                      dword_140404A6C[282486188]                   /* 18399E11C */
#define g_18399E120                      (*(_QWORD *)&dword_140404A6C[282486189])     /* 18399E120 */
#define g_18399E128                      dword_140404A6C[282486191]                   /* 18399E128 */
#define g_18399E12C                      dword_140404A6C[282486192]                   /* 18399E12C */
#define g_18399E130                      dword_140404A6C[282486193]                   /* 18399E130 */
#define g_18399E134                      dword_140404A6C[282486194]                   /* 18399E134 */
#define g_18399E138                      dword_140404A6C[282486195]                   /* 18399E138 */
#define g_18399E13C                      (*(_OWORD *)&dword_140404A6C[282486196])     /* 18399E13C */
#define g_18399E14C                      dword_140404A6C[282486200]                   /* 18399E14C */
#define g_18399E150                      dword_140404A6C[282486201]                   /* 18399E150 */
#define g_18399E154                      (*(_OWORD *)&dword_140404A6C[282486202])     /* 18399E154 */
#define g_18399E164                      dword_140404A6C[282486206]                   /* 18399E164 */
#define g_18399E178                      dword_140404A6C[282486211]                   /* 18399E178 */
#define g_18399E17C                      dword_140404A6C[282486212]                   /* 18399E17C */
#define g_18399E180                      dword_140404A6C[282486213]                   /* 18399E180 */
#define g_18399E184                      dword_140404A6C[282486214]                   /* 18399E184 */
#define g_18399E188                      dword_140404A6C[282486215]                   /* 18399E188 */
#define g_18399E18C                      dword_140404A6C[282486216]                   /* 18399E18C */
#define g_18399E190                      dword_140404A6C[282486217]                   /* 18399E190 */
#define g_18399E194                      dword_140404A6C[282486218]                   /* 18399E194 */
#define g_18399E198                      dword_140404A6C[282486219]                   /* 18399E198 */
#define g_18399E19C                      dword_140404A6C[282486220]                   /* 18399E19C */
#define g_18399E1A0                      dword_140404A6C[282486221]                   /* 18399E1A0 */
#define g_18399E1A4                      dword_140404A6C[282486222]                   /* 18399E1A4 */
#define g_18399E1A8                      dword_140404A6C[282486223]                   /* 18399E1A8 */
#define g_18399E1AC                      dword_140404A6C[282486224]                   /* 18399E1AC */
#define g_18399E1B0                      (*(_QWORD *)&dword_140404A6C[282486225])     /* 18399E1B0 */
#define g_18399E1B8                      (*(_OWORD *)&dword_140404A6C[282486227])     /* 18399E1B8 */
#define g_18399E1C8                      dword_140404A6C[282486231]                   /* 18399E1C8 */
#define g_18399E1DC                      dword_140404A6C[282486236]                   /* 18399E1DC */
#define g_18399E1E0                      dword_140404A6C[282486237]                   /* 18399E1E0 */
#define g_18399E1E4                      dword_140404A6C[282486238]                   /* 18399E1E4 */
#define g_18399E1E8                      dword_140404A6C[282486239]                   /* 18399E1E8 */
#define g_18399E1EC                      dword_140404A6C[282486240]                   /* 18399E1EC */
#define g_18399E1F0                      dword_140404A6C[282486241]                   /* 18399E1F0 */
#define g_18399E1F4                      dword_140404A6C[282486242]                   /* 18399E1F4 */
#define g_18399E1F8                      dword_140404A6C[282486243]                   /* 18399E1F8 */
#define g_18399E1FC                      dword_140404A6C[282486244]                   /* 18399E1FC */
#define g_18399E200                      dword_140404A6C[282486245]                   /* 18399E200 */
#define g_18399E204                      dword_140404A6C[282486246]                   /* 18399E204 */
#define g_18399E208                      dword_140404A6C[282486247]                   /* 18399E208 */
#define g_18399E20C                      dword_140404A6C[282486248]                   /* 18399E20C */
#define g_18399E210                      dword_140404A6C[282486249]                   /* 18399E210 */
#define g_18399E214                      dword_140404A6C[282486250]                   /* 18399E214 */
#define g_18399E218                      dword_140404A6C[282486251]                   /* 18399E218 */
#define g_18399E21C                      (*(_OWORD *)&dword_140404A6C[282486252])     /* 18399E21C */
#define g_18399E22C                      dword_140404A6C[282486256]                   /* 18399E22C */
#define g_18399E240                      (*(_QWORD *)&dword_140404A6C[282486261])     /* 18399E240 */
#define g_18399E248                      dword_140404A6C[282486263]                   /* 18399E248 */
#define g_18399E24C                      (*(_QWORD *)&dword_140404A6C[282486264])     /* 18399E24C */
#define g_18399E254                      dword_140404A6C[282486266]                   /* 18399E254 */
#define g_18399E258                      dword_140404A6C[282486267]                   /* 18399E258 */
#define g_18399E25C                      dword_140404A6C[282486268]                   /* 18399E25C */
#define g_18399E260                      dword_140404A6C[282486269]                   /* 18399E260 */
#define g_18399E264                      dword_140404A6C[282486270]                   /* 18399E264 */
#define g_18399E268                      dword_140404A6C[282486271]                   /* 18399E268 */
#define g_18399E26C                      dword_140404A6C[282486272]                   /* 18399E26C */
#define g_18399E270                      dword_140404A6C[282486273]                   /* 18399E270 */
#define g_18399E274                      dword_140404A6C[282486274]                   /* 18399E274 */
#define g_18399E278                      dword_140404A6C[282486275]                   /* 18399E278 */
#define g_18399E27C                      dword_140404A6C[282486276]                   /* 18399E27C */
#define g_18399E280                      (*(_OWORD *)&dword_140404A6C[282486277])     /* 18399E280 */
#define g_18399E290                      dword_140404A6C[282486281]                   /* 18399E290 */
#define g_18399E2A4                      dword_140404A6C[282486286]                   /* 18399E2A4 */
#define g_18399E2A8                      dword_140404A6C[282486287]                   /* 18399E2A8 */
#define g_18399E2AC                      dword_140404A6C[282486288]                   /* 18399E2AC */
#define g_18399E2B0                      dword_140404A6C[282486289]                   /* 18399E2B0 */
#define g_18399E2B4                      dword_140404A6C[282486290]                   /* 18399E2B4 */
#define g_18399E2B8                      dword_140404A6C[282486291]                   /* 18399E2B8 */
#define g_18399E2BC                      dword_140404A6C[282486292]                   /* 18399E2BC */
#define g_18399E2C0                      dword_140404A6C[282486293]                   /* 18399E2C0 */
#define g_18399E2C4                      dword_140404A6C[282486294]                   /* 18399E2C4 */
#define g_18399E2C8                      dword_140404A6C[282486295]                   /* 18399E2C8 */
#define g_18399E2CC                      (*(_OWORD *)&dword_140404A6C[282486296])     /* 18399E2CC */
#define g_18399E2D8                      (*(float *)&dword_140404A6C[282486299])      /* 18399E2D8 */
#define g_18399E2DC                      (*(_QWORD *)&dword_140404A6C[282486300])     /* 18399E2DC */
#define g_18399E2E0                      dword_140404A6C[282486301]                   /* 18399E2E0 */
#define g_18399E2E4                      (*(_OWORD *)&dword_140404A6C[282486302])     /* 18399E2E4 */
#define g_18399E2F4                      dword_140404A6C[282486306]                   /* 18399E2F4 */
#define g_18399E308                      dword_140404A6C[282486311]                   /* 18399E308 */
#define g_18399E30C                      dword_140404A6C[282486312]                   /* 18399E30C */
#define g_18399E310                      dword_140404A6C[282486313]                   /* 18399E310 */
#define g_18399E314                      dword_140404A6C[282486314]                   /* 18399E314 */
#define g_18399E318                      dword_140404A6C[282486315]                   /* 18399E318 */
#define g_18399E31C                      dword_140404A6C[282486316]                   /* 18399E31C */
#define g_18399E320                      dword_140404A6C[282486317]                   /* 18399E320 */
#define g_18399E324                      dword_140404A6C[282486318]                   /* 18399E324 */
#define g_18399E328                      dword_140404A6C[282486319]                   /* 18399E328 */
#define g_18399E32C                      dword_140404A6C[282486320]                   /* 18399E32C */
#define g_18399E330                      (*(_OWORD *)&dword_140404A6C[282486321])     /* 18399E330 */
#define g_18399E340                      dword_140404A6C[282486325]                   /* 18399E340 */
#define g_18399E344                      dword_140404A6C[282486326]                   /* 18399E344 */
#define g_18399E348                      (*(_OWORD *)&dword_140404A6C[282486327])     /* 18399E348 */
#define g_18399E358                      dword_140404A6C[282486331]                   /* 18399E358 */
#define g_18399E36C                      dword_140404A6C[282486336]                   /* 18399E36C */
#define g_18399E370                      (*(_QWORD *)&dword_140404A6C[282486337])     /* 18399E370 */
#define g_18399E378                      (*(_QWORD *)&dword_140404A6C[282486339])     /* 18399E378 */
#define g_18399E380                      dword_140404A6C[282486341]                   /* 18399E380 */
#define g_18399E384                      dword_140404A6C[282486342]                   /* 18399E384 */
#define g_18399E388                      dword_140404A6C[282486343]                   /* 18399E388 */
#define g_18399E38C                      dword_140404A6C[282486344]                   /* 18399E38C */
#define g_18399E390                      dword_140404A6C[282486345]                   /* 18399E390 */
#define g_18399E394                      (*(_OWORD *)&dword_140404A6C[282486346])     /* 18399E394 */
#define g_18399E3A4                      (*(float *)&dword_140404A6C[282486350])      /* 18399E3A4 */
#define g_18399E3A8                      dword_140404A6C[282486351]                   /* 18399E3A8 */
#define g_18399E3AC                      (*(_OWORD *)&dword_140404A6C[282486352])     /* 18399E3AC */
#define g_18399E3BC                      dword_140404A6C[282486356]                   /* 18399E3BC */
#define g_18399E3D0                      dword_140404A6C[282486361]                   /* 18399E3D0 */
#define g_18399E3D4                      dword_140404A6C[282486362]                   /* 18399E3D4 */
#define g_18399E3D8                      dword_140404A6C[282486363]                   /* 18399E3D8 */
#define g_18399E3DC                      dword_140404A6C[282486364]                   /* 18399E3DC */
#define g_18399E3E0                      dword_140404A6C[282486365]                   /* 18399E3E0 */
#define g_18399E3E4                      dword_140404A6C[282486366]                   /* 18399E3E4 */
#define g_18399E3E8                      dword_140404A6C[282486367]                   /* 18399E3E8 */
#define g_18399E3EC                      dword_140404A6C[282486368]                   /* 18399E3EC */
#define g_18399E3F0                      dword_140404A6C[282486369]                   /* 18399E3F0 */
#define g_18399E3F4                      dword_140404A6C[282486370]                   /* 18399E3F4 */
#define g_18399E3F8                      dword_140404A6C[282486371]                   /* 18399E3F8 */
#define g_18399E3FC                      dword_140404A6C[282486372]                   /* 18399E3FC */
#define g_18399E400                      dword_140404A6C[282486373]                   /* 18399E400 */
#define g_18399E404                      (*(float *)&dword_140404A6C[282486374])      /* 18399E404 */
#define g_18399E408                      (*(_QWORD *)&dword_140404A6C[282486375])     /* 18399E408 */
#define g_18399E410                      (*(_OWORD *)&dword_140404A6C[282486377])     /* 18399E410 */
#define g_18399E420                      dword_140404A6C[282486381]                   /* 18399E420 */
#define g_18399E434                      dword_140404A6C[282486386]                   /* 18399E434 */
#define g_18399E438                      dword_140404A6C[282486387]                   /* 18399E438 */
#define g_18399E43C                      dword_140404A6C[282486388]                   /* 18399E43C */
#define g_18399E440                      dword_140404A6C[282486389]                   /* 18399E440 */
#define g_18399E444                      dword_140404A6C[282486390]                   /* 18399E444 */
#define g_18399E448                      dword_140404A6C[282486391]                   /* 18399E448 */
#define g_18399E44C                      dword_140404A6C[282486392]                   /* 18399E44C */
#define g_18399E450                      dword_140404A6C[282486393]                   /* 18399E450 */
#define g_18399E454                      dword_140404A6C[282486394]                   /* 18399E454 */
#define g_18399E458                      dword_140404A6C[282486395]                   /* 18399E458 */
#define g_18399E45C                      dword_140404A6C[282486396]                   /* 18399E45C */
#define g_18399E460                      dword_140404A6C[282486397]                   /* 18399E460 */
#define g_18399E464                      dword_140404A6C[282486398]                   /* 18399E464 */
#define g_18399E468                      dword_140404A6C[282486399]                   /* 18399E468 */
#define g_18399E46C                      dword_140404A6C[282486400]                   /* 18399E46C */
#define g_18399E470                      dword_140404A6C[282486401]                   /* 18399E470 */
#define g_18399E474                      (*(_OWORD *)&dword_140404A6C[282486402])     /* 18399E474 */
#define g_18399E484                      dword_140404A6C[282486406]                   /* 18399E484 */
#define g_18399E498                      dword_140404A6C[282486411]                   /* 18399E498 */
#define g_18399E49C                      (*(_QWORD *)&dword_140404A6C[282486412])     /* 18399E49C */
#define g_18399E4A4                      (*(_QWORD *)&dword_140404A6C[282486414])     /* 18399E4A4 */
#define g_18399E4AC                      dword_140404A6C[282486416]                   /* 18399E4AC */
#define g_18399E4B0                      dword_140404A6C[282486417]                   /* 18399E4B0 */
#define g_18399E4B4                      dword_140404A6C[282486418]                   /* 18399E4B4 */
#define g_18399E4B8                      dword_140404A6C[282486419]                   /* 18399E4B8 */
#define g_18399E4BC                      dword_140404A6C[282486420]                   /* 18399E4BC */
#define g_18399E4C0                      dword_140404A6C[282486421]                   /* 18399E4C0 */
#define g_18399E4C4                      dword_140404A6C[282486422]                   /* 18399E4C4 */
#define g_18399E4C8                      dword_140404A6C[282486423]                   /* 18399E4C8 */
#define g_18399E4CC                      dword_140404A6C[282486424]                   /* 18399E4CC */
#define g_18399E4D0                      dword_140404A6C[282486425]                   /* 18399E4D0 */
#define g_18399E4D4                      dword_140404A6C[282486426]                   /* 18399E4D4 */
#define g_18399E4D8                      (*(_OWORD *)&dword_140404A6C[282486427])     /* 18399E4D8 */
#define g_18399E4E8                      dword_140404A6C[282486431]                   /* 18399E4E8 */
#define g_18399E4FC                      dword_140404A6C[282486436]                   /* 18399E4FC */
#define g_18399E500                      dword_140404A6C[282486437]                   /* 18399E500 */
#define g_18399E504                      dword_140404A6C[282486438]                   /* 18399E504 */
#define g_18399E508                      dword_140404A6C[282486439]                   /* 18399E508 */
#define g_18399E50C                      dword_140404A6C[282486440]                   /* 18399E50C */
#define g_18399E510                      dword_140404A6C[282486441]                   /* 18399E510 */
#define g_18399E514                      dword_140404A6C[282486442]                   /* 18399E514 */
#define g_18399E518                      dword_140404A6C[282486443]                   /* 18399E518 */
#define g_18399E51C                      dword_140404A6C[282486444]                   /* 18399E51C */
#define g_18399E520                      dword_140404A6C[282486445]                   /* 18399E520 */
#define g_18399E5AC                      dword_140404A6C[282486480]                   /* 18399E5AC */
#define nearest_item                     dword_140404A6C[282486845]                   /* 18399EB60 src/engine/frame.h */
#define g_18399EB64                      (*(float *)&dword_140404A6C[282486846])      /* 18399EB64 */
#define g_18399EB68                      dword_140404A6C[282486847]                   /* 18399EB68 */
#define g_18399EB6C                      (*(float *)&dword_140404A6C[282486848])      /* 18399EB6C */
#define g_18399EB74                      dword_140404A6C[282486850]                   /* 18399EB74 */
#define g_18399EB78                      dword_140404A6C[282486851]                   /* 18399EB78 */
#define g_18399EB7C                      dword_140404A6C[282486852]                   /* 18399EB7C */
#define g_18399EB80                      dword_140404A6C[282486853]                   /* 18399EB80 */
#define g_18399EB8C                      dword_140404A6C[282486856]                   /* 18399EB8C */
#define g_18399EB90                      dword_140404A6C[282486857]                   /* 18399EB90 */
#define g_18399EB94                      dword_140404A6C[282486858]                   /* 18399EB94 */
#define g_18399EB98                      dword_140404A6C[282486859]                   /* 18399EB98 */
#define g_18399EB9C                      dword_140404A6C[282486860]                   /* 18399EB9C */
#define g_18399EBA0                      dword_140404A6C[282486861]                   /* 18399EBA0 */
#define g_18399EBA4                      dword_140404A6C[282486862]                   /* 18399EBA4 */
#define g_18399EBA8                      dword_140404A6C[282486863]                   /* 18399EBA8 */
#define g_18399EBAC                      dword_140404A6C[282486864]                   /* 18399EBAC */
#define g_18399EBB0                      dword_140404A6C[282486865]                   /* 18399EBB0 */
#define g_18399EBB4                      dword_140404A6C[282486866]                   /* 18399EBB4 */
#define g_18399EBB8                      dword_140404A6C[282486867]                   /* 18399EBB8 */
#define g_18399EBBC                      dword_140404A6C[282486868]                   /* 18399EBBC */
#define g_18399EBC0                      dword_140404A6C[282486869]                   /* 18399EBC0 */
#define g_18399EBC4                      dword_140404A6C[282486870]                   /* 18399EBC4 */
#define g_18399EBC8                      dword_140404A6C[282486871]                   /* 18399EBC8 */
#define g_18399EBCC                      dword_140404A6C[282486872]                   /* 18399EBCC */
#define g_18399EBD0                      dword_140404A6C[282486873]                   /* 18399EBD0 */
#define g_18399EBD4                      dword_140404A6C[282486874]                   /* 18399EBD4 */
#define g_18399EBDC                      dword_140404A6C[282486876]                   /* 18399EBDC */
#define g_18399EBFC                      dword_140404A6C[282486884]                   /* 18399EBFC */
#define g_18399EC0C                      dword_140404A6C[282486888]                   /* 18399EC0C */
#define g_18399EF70                      dword_140404A6C[282487105]                   /* 18399EF70 */
#define g_1839A3100                      dword_140404A6C[282491301]                   /* 1839A3100 */
#define g_1839A4600                      dword_140404A6C[282492645]                   /* 1839A4600 */
#define g_1839A4854                      dword_140404A6C[282492794]                   /* 1839A4854 */
#define g_183E53120                      dword_140404A6C[283720109]                   /* 183E53120 */
#define g_183E53124                      dword_140404A6C[283720110]                   /* 183E53124 */
#define g_183E5312C                      dword_140404A6C[283720112]                   /* 183E5312C */
#define g_183E93120                      dword_140404A6C[283785645]                   /* 183E93120 */
#define g_183E93124                      dword_140404A6C[283785646]                   /* 183E93124 */
#define g_183E93524                      dword_140404A6C[283785902]                   /* 183E93524 */
#define g_183E93528                      dword_140404A6C[283785903]                   /* 183E93528 */
#define world_bullets_fired              dword_140404A6C[283785905]                   /* 183E93530 src/engine/bullet.h */
#define g_183E93534                      dword_140404A6C[283785906]                   /* 183E93534 */
#define g_183E93540                      dword_140404A6C[283785909]                   /* 183E93540 */
#define g_183E93544                      dword_140404A6C[283785910]                   /* 183E93544 */
#define g_183E93548                      dword_140404A6C[283785911]                   /* 183E93548 */
#define g_183E9354C                      dword_140404A6C[283785912]                   /* 183E9354C */
#define g_183E93550                      dword_140404A6C[283785913]                   /* 183E93550 */
#define g_183E935A0                      dword_140404A6C[283785933]                   /* 183E935A0 */
#define g_183E935A4                      dword_140404A6C[283785934]                   /* 183E935A4 */
#define g_183E935AC                      dword_140404A6C[283785936]                   /* 183E935AC */
#define g_183E935B4                      dword_140404A6C[283785938]                   /* 183E935B4 */
#define g_183E935C4                      dword_140404A6C[283785942]                   /* 183E935C4 */
#define g_183E935C8                      dword_140404A6C[283785943]                   /* 183E935C8 */
#define g_183E935D4                      dword_140404A6C[283785946]                   /* 183E935D4 */
#define g_183E935D8                      dword_140404A6C[283785947]                   /* 183E935D8 */
#define g_183E935E4                      dword_140404A6C[283785950]                   /* 183E935E4 */
#define g_183E935F4                      dword_140404A6C[283785954]                   /* 183E935F4 */
#define g_183E935F8                      dword_140404A6C[283785955]                   /* 183E935F8 */
#define g_183E93618                      dword_140404A6C[283785963]                   /* 183E93618 */
#define g_183E9361C                      dword_140404A6C[283785964]                   /* 183E9361C */
#define g_183E93628                      dword_140404A6C[283785967]                   /* 183E93628 */
#define game_unknown_183e9362c           dword_140404A6C[283785968]                   /* 183E9362C src/engine/human_hits.c */
#define g_183E93638                      dword_140404A6C[283785971]                   /* 183E93638 */
#define g_183E9363C                      dword_140404A6C[283785972]                   /* 183E9363C */
#define g_183E93648                      dword_140404A6C[283785975]                   /* 183E93648 */
#define g_183E93658                      dword_140404A6C[283785979]                   /* 183E93658 */
#define g_183E9365C                      dword_140404A6C[283785980]                   /* 183E9365C */
#define item_event_ring_back             dword_140404A6C[283785983]                   /* 183E93668 src/engine/item.h */
#define g_183E9366C                      dword_140404A6C[283785984]                   /* 183E9366C */
#define g_183E93678                      dword_140404A6C[283785987]                   /* 183E93678 */
#define g_183E93688                      dword_140404A6C[283785991]                   /* 183E93688 */
#define item_event_ring                  dword_140404A6C[283785994]                   /* 183E93694 src/engine/item.h */
#define g_183E93698                      dword_140404A6C[283785995]                   /* 183E93698 */
#define g_183E936AC                      dword_140404A6C[283786000]                   /* 183E936AC */
#define particle_landing_sound           dword_140404A6C[283786008]                   /* 183E936CC src/engine/world_particles.c */
#define g_183E936D0                      dword_140404A6C[283786009]                   /* 183E936D0 */
#define g_183E936D4                      dword_140404A6C[283786010]                   /* 183E936D4 */
#define g_183E936D8                      dword_140404A6C[283786011]                   /* 183E936D8 */
#define g_183E936DC                      dword_140404A6C[283786012]                   /* 183E936DC */
#define g_183E936E0                      dword_140404A6C[283786013]                   /* 183E936E0 */
#define g_183E936E4                      dword_140404A6C[283786014]                   /* 183E936E4 */
#define g_183E936E8                      dword_140404A6C[283786015]                   /* 183E936E8 */
#define g_183E936EC                      dword_140404A6C[283786016]                   /* 183E936EC */
#define g_183E936F0                      dword_140404A6C[283786017]                   /* 183E936F0 */
#define g_183E936F4                      dword_140404A6C[283786018]                   /* 183E936F4 */
#define g_183E936F8                      dword_140404A6C[283786019]                   /* 183E936F8 */
#define g_183E93738                      dword_140404A6C[283786035]                   /* 183E93738 */
#define g_183E93778                      dword_140404A6C[283786051]                   /* 183E93778 */
#define g_183E9377C                      dword_140404A6C[283786052]                   /* 183E9377C */
#define g_183E93780                      dword_140404A6C[283786053]                   /* 183E93780 */
#define g_183E93784                      dword_140404A6C[283786054]                   /* 183E93784 */
#define g_183E93788                      dword_140404A6C[283786055]                   /* 183E93788 */
#define g_183E9378C                      dword_140404A6C[283786056]                   /* 183E9378C */
#define g_183E93790                      dword_140404A6C[283786057]                   /* 183E93790 */
#define g_183E937F8                      dword_140404A6C[283786083]                   /* 183E937F8 */
#define g_183E937FC                      dword_140404A6C[283786084]                   /* 183E937FC */
#define g_183E93800                      dword_140404A6C[283786085]                   /* 183E93800 */
#define g_183E93804                      dword_140404A6C[283786086]                   /* 183E93804 */
#define g_183E93808                      dword_140404A6C[283786087]                   /* 183E93808 */
#define g_183E9380C                      dword_140404A6C[283786088]                   /* 183E9380C */
#define g_183E93810                      dword_140404A6C[283786089]                   /* 183E93810 */
#define g_183E938F8                      dword_140404A6C[283786147]                   /* 183E938F8 */
#define g_183E938FC                      dword_140404A6C[283786148]                   /* 183E938FC */
#define g_183E93900                      dword_140404A6C[283786149]                   /* 183E93900 */
#define g_183E93904                      dword_140404A6C[283786150]                   /* 183E93904 */
#define g_183E93908                      dword_140404A6C[283786151]                   /* 183E93908 */
#define g_183E9390C                      dword_140404A6C[283786152]                   /* 183E9390C */
#define g_183E93910                      dword_140404A6C[283786153]                   /* 183E93910 */
#define g_183E93978                      dword_140404A6C[283786179]                   /* 183E93978 */
#define g_183E9397C                      dword_140404A6C[283786180]                   /* 183E9397C */
#define g_183E93980                      dword_140404A6C[283786181]                   /* 183E93980 */
#define g_183E93984                      dword_140404A6C[283786182]                   /* 183E93984 */
#define g_183E93988                      dword_140404A6C[283786183]                   /* 183E93988 */
#define g_183E9398C                      dword_140404A6C[283786184]                   /* 183E9398C */
#define g_183E93990                      dword_140404A6C[283786185]                   /* 183E93990 */
#define g_183E939F8                      dword_140404A6C[283786211]                   /* 183E939F8 */
#define g_183E939FC                      dword_140404A6C[283786212]                   /* 183E939FC */
#define g_183E93A00                      dword_140404A6C[283786213]                   /* 183E93A00 */
#define g_183E93A04                      dword_140404A6C[283786214]                   /* 183E93A04 */
#define g_183E93A08                      dword_140404A6C[283786215]                   /* 183E93A08 */
#define g_183E93A0C                      dword_140404A6C[283786216]                   /* 183E93A0C */
#define g_183E93A10                      dword_140404A6C[283786217]                   /* 183E93A10 */
#define g_183E97740                      dword_140404A6C[283790133]                   /* 183E97740 */
#define g_183E97744                      dword_140404A6C[283790134]                   /* 183E97744 */
#define g_183E97748                      dword_140404A6C[283790135]                   /* 183E97748 */
#define g_183E9774C                      dword_140404A6C[283790136]                   /* 183E9774C */
#define g_183E97750                      dword_140404A6C[283790137]                   /* 183E97750 */
#define g_183E97754                      dword_140404A6C[283790138]                   /* 183E97754 */
#define g_183E97760                      dword_140404A6C[283790141]                   /* 183E97760 */
#define g_183E97770                      dword_140404A6C[283790145]                   /* 183E97770 */
#define g_183E97774                      dword_140404A6C[283790146]                   /* 183E97774 */
#define g_183E97790                      dword_140404A6C[283790153]                   /* 183E97790 */
#define g_183E97794                      dword_140404A6C[283790154]                   /* 183E97794 */
#define g_183E97798                      dword_140404A6C[283790155]                   /* 183E97798 */
#define g_183E977A0                      dword_140404A6C[283790157]                   /* 183E977A0 */
#define g_183E977A4                      dword_140404A6C[283790158]                   /* 183E977A4 */
#define g_183E977A8                      dword_140404A6C[283790159]                   /* 183E977A8 */
#define g_183E977AC                      dword_140404A6C[283790160]                   /* 183E977AC */
#define g_183E977C4                      dword_140404A6C[283790166]                   /* 183E977C4 */
#define g_183E987C4                      dword_140404A6C[283791190]                   /* 183E987C4 */
#define resting_buffer_0                 dword_140404A6C[283791446]                   /* 183E98BC4 src/engine/world_particles.c */
#define resting_buffer_1                 dword_140404A6C[283791447]                   /* 183E98BC8 src/engine/world_particles.c */
#define g_183E98C04                      dword_140404A6C[283791462]                   /* 183E98C04 */
#define g_183E98C08                      dword_140404A6C[283791463]                   /* 183E98C08 */
#define g_183E98C0C                      dword_140404A6C[283791464]                   /* 183E98C0C */
#define g_183E98C10                      dword_140404A6C[283791465]                   /* 183E98C10 */
#define g_183E98C14                      dword_140404A6C[283791466]                   /* 183E98C14 */
#define g_183E98C18                      dword_140404A6C[283791467]                   /* 183E98C18 */
#define g_183E98C20                      dword_140404A6C[283791469]                   /* 183E98C20 */
#define effect_mesh_buffer               dword_140404A6C[283791478]                   /* 183E98C44 src/engine/world_effects_draw.c */
#define g_183E98C48                      dword_140404A6C[283791479]                   /* 183E98C48 */
#define g_183E98C4C                      dword_140404A6C[283791480]                   /* 183E98C4C */
#define g_183E98C50                      dword_140404A6C[283791481]                   /* 183E98C50 */
#define g_183E98C54                      dword_140404A6C[283791482]                   /* 183E98C54 */
#define g_183E98C58                      dword_140404A6C[283791483]                   /* 183E98C58 */
#define g_183E98C5C                      dword_140404A6C[283791484]                   /* 183E98C5C */
#define g_183E98C60                      dword_140404A6C[283791485]                   /* 183E98C60 */
#define g_183E98C64                      dword_140404A6C[283791486]                   /* 183E98C64 */
#define g_183E98C68                      dword_140404A6C[283791487]                   /* 183E98C68 */
#define g_183E98C8C                      dword_140404A6C[283791496]                   /* 183E98C8C */
#define g_183E98D8C                      dword_140404A6C[283791560]                   /* 183E98D8C */
#define g_183E9908C                      dword_140404A6C[283791752]                   /* 183E9908C */
#define g_183E99090                      dword_140404A6C[283791753]                   /* 183E99090 */
#define g_183E99094                      dword_140404A6C[283791754]                   /* 183E99094 */
#define g_183E99098                      dword_140404A6C[283791755]                   /* 183E99098 */
#define g_183E9909C                      dword_140404A6C[283791756]                   /* 183E9909C */
#define g_183E990A0                      dword_140404A6C[283791757]                   /* 183E990A0 */
#define g_183E990A4                      dword_140404A6C[283791758]                   /* 183E990A4 */
#define g_183E990C4                      dword_140404A6C[283791766]                   /* 183E990C4 */
#define g_183E9B0C4                      dword_140404A6C[283793814]                   /* 183E9B0C4 */
#define g_183EBB0C0                      dword_140404A6C[283826581]                   /* 183EBB0C0 */
#define g_183EBB0C4                      dword_140404A6C[283826582]                   /* 183EBB0C4 */
#define g_183EBB144                      dword_140404A6C[283826614]                   /* 183EBB144 */
#define g_183EBB1C4                      dword_140404A6C[283826646]                   /* 183EBB1C4 */
#define g_183EBB240                      dword_140404A6C[283826677]                   /* 183EBB240 */
#define g_183EBB244                      dword_140404A6C[283826678]                   /* 183EBB244 */
#define g_183EBB2C4                      dword_140404A6C[283826710]                   /* 183EBB2C4 */
#define g_183EBB2C8                      dword_140404A6C[283826711]                   /* 183EBB2C8 */
#define g_183EBB3D4                      dword_140404A6C[283826778]                   /* 183EBB3D4 */
#define g_183EBB4C8                      dword_140404A6C[283826839]                   /* 183EBB4C8 */
#define g_183EBB6C4                      dword_140404A6C[283826966]                   /* 183EBB6C4 */
#define g_183EBB6C8                      dword_140404A6C[283826967]                   /* 183EBB6C8 */
#define g_183EBB6CC                      dword_140404A6C[283826968]                   /* 183EBB6CC */
#define g_183EBB6D0                      dword_140404A6C[283826969]                   /* 183EBB6D0 */
#define g_183EBB6D4                      dword_140404A6C[283826970]                   /* 183EBB6D4 */
#define g_183EBB6D8                      dword_140404A6C[283826971]                   /* 183EBB6D8 */
#define g_183EBB6DC                      dword_140404A6C[283826972]                   /* 183EBB6DC */
#define g_183EBB6E0                      dword_140404A6C[283826973]                   /* 183EBB6E0 */
#define g_183EBB6E4                      dword_140404A6C[283826974]                   /* 183EBB6E4 */
#define g_183EBB6E8                      dword_140404A6C[283826975]                   /* 183EBB6E8 */
#define g_183EBB6EC                      dword_140404A6C[283826976]                   /* 183EBB6EC */
#define g_183EBB6F0                      dword_140404A6C[283826977]                   /* 183EBB6F0 */
#define g_183EBB6F4                      dword_140404A6C[283826978]                   /* 183EBB6F4 */
#define g_183EBB6F8                      dword_140404A6C[283826979]                   /* 183EBB6F8 */
#define g_183EBB6FC                      dword_140404A6C[283826980]                   /* 183EBB6FC */
#define g_183EBB700                      dword_140404A6C[283826981]                   /* 183EBB700 */
#define g_183EBB704                      dword_140404A6C[283826982]                   /* 183EBB704 */
#define g_183EBB708                      dword_140404A6C[283826983]                   /* 183EBB708 */
#define g_183EBB70C                      dword_140404A6C[283826984]                   /* 183EBB70C */
#define g_183EBB710                      dword_140404A6C[283826985]                   /* 183EBB710 */
#define g_183EBB714                      dword_140404A6C[283826986]                   /* 183EBB714 */
#define g_183EBB718                      dword_140404A6C[283826987]                   /* 183EBB718 */
#define g_183EBB71C                      dword_140404A6C[283826988]                   /* 183EBB71C */
#define g_183EBB720                      dword_140404A6C[283826989]                   /* 183EBB720 */
#define g_183EBB724                      dword_140404A6C[283826990]                   /* 183EBB724 */
#define g_183EBB728                      dword_140404A6C[283826991]                   /* 183EBB728 */
#define g_183EBB72C                      dword_140404A6C[283826992]                   /* 183EBB72C */
#define g_183EBB730                      dword_140404A6C[283826993]                   /* 183EBB730 */
#define g_183EBB734                      dword_140404A6C[283826994]                   /* 183EBB734 */
#define g_183EBB738                      dword_140404A6C[283826995]                   /* 183EBB738 */
#define g_183EBB73C                      dword_140404A6C[283826996]                   /* 183EBB73C */
#define g_183EBB748                      dword_140404A6C[283826999]                   /* 183EBB748 */
#define g_183EBB74C                      dword_140404A6C[283827000]                   /* 183EBB74C */
#define g_183EBB750                      dword_140404A6C[283827001]                   /* 183EBB750 */
#define g_183EBB754                      dword_140404A6C[283827002]                   /* 183EBB754 */
#define g_183EBB758                      dword_140404A6C[283827003]                   /* 183EBB758 */
#define g_183EBB75C                      dword_140404A6C[283827004]                   /* 183EBB75C */
#define g_183EBB760                      dword_140404A6C[283827005]                   /* 183EBB760 */
#define g_183EBB764                      dword_140404A6C[283827006]                   /* 183EBB764 */
#define g_183EBB768                      dword_140404A6C[283827007]                   /* 183EBB768 */
#define g_183EBB76C                      dword_140404A6C[283827008]                   /* 183EBB76C */
#define g_183EBB770                      dword_140404A6C[283827009]                   /* 183EBB770 */
#define g_183EBB774                      dword_140404A6C[283827010]                   /* 183EBB774 */
#define g_183EBB778                      dword_140404A6C[283827011]                   /* 183EBB778 */
#define g_183EBB780                      dword_140404A6C[283827013]                   /* 183EBB780 */
#define g_183EBBAC4                      dword_140404A6C[283827222]                   /* 183EBBAC4 */
#define g_183EBBAC8                      dword_140404A6C[283827223]                   /* 183EBBAC8 */
#define g_183EBBACC                      dword_140404A6C[283827224]                   /* 183EBBACC */
#define g_183EBBAD0                      dword_140404A6C[283827225]                   /* 183EBBAD0 */
#define g_183EBBB44                      dword_140404A6C[283827254]                   /* 183EBBB44 */
#define g_183EBBBC4                      dword_140404A6C[283827286]                   /* 183EBBBC4 */
#define g_183EBBFC0                      dword_140404A6C[283827541]                   /* 183EBBFC0 */
#define g_183EBBFC4                      dword_140404A6C[283827542]                   /* 183EBBFC4 */
#define world_particle_mesh_0            dword_140404A6C[283827574]                   /* 183EBC044 src/engine/particle.h */
#define g_183EBC0C4                      dword_140404A6C[283827606]                   /* 183EBC0C4 */
#define g_183EBC0C8                      dword_140404A6C[283827607]                   /* 183EBC0C8 */
#define g_183EBC0D4                      dword_140404A6C[283827610]                   /* 183EBC0D4 */
#define g_183EBC144                      dword_140404A6C[283827638]                   /* 183EBC144 */
#define g_183EBC244                      dword_140404A6C[283827702]                   /* 183EBC244 */
#define g_183EBC248                      dword_140404A6C[283827703]                   /* 183EBC248 */
#define g_183EBC24C                      dword_140404A6C[283827704]                   /* 183EBC24C */
#define g_183EBC250                      dword_140404A6C[283827705]                   /* 183EBC250 */
#define g_183EBC254                      dword_140404A6C[283827706]                   /* 183EBC254 */
#define g_183EBC280                      dword_140404A6C[283827717]                   /* 183EBC280 */
#define g_183EBC284                      dword_140404A6C[283827718]                   /* 183EBC284 */
#define g_183EBC288                      dword_140404A6C[283827719]                   /* 183EBC288 */
#define g_183EBC28C                      dword_140404A6C[283827720]                   /* 183EBC28C */
#define g_183EBC290                      dword_140404A6C[283827721]                   /* 183EBC290 */
#define g_183EBC294                      dword_140404A6C[283827722]                   /* 183EBC294 */
#define g_183EBC2C0                      dword_140404A6C[283827733]                   /* 183EBC2C0 */
#define g_183EBC2C4                      dword_140404A6C[283827734]                   /* 183EBC2C4 */
#define g_183EBC2C8                      dword_140404A6C[283827735]                   /* 183EBC2C8 */
#define g_183EBC2CC                      dword_140404A6C[283827736]                   /* 183EBC2CC */
#define g_183EBC2D0                      dword_140404A6C[283827737]                   /* 183EBC2D0 */
#define g_183EBC2D4                      dword_140404A6C[283827738]                   /* 183EBC2D4 */
#define g_183EBC2D8                      dword_140404A6C[283827739]                   /* 183EBC2D8 */
#define g_183EBC2DC                      dword_140404A6C[283827740]                   /* 183EBC2DC */
#define g_183EBC2E0                      dword_140404A6C[283827741]                   /* 183EBC2E0 */
#define g_183EBC2E4                      dword_140404A6C[283827742]                   /* 183EBC2E4 */
#define g_183EBC300                      dword_140404A6C[283827749]                   /* 183EBC300 */
#define g_183EBC304                      dword_140404A6C[283827750]                   /* 183EBC304 */
#define g_183EBC308                      dword_140404A6C[283827751]                   /* 183EBC308 */
#define g_183EBC30C                      dword_140404A6C[283827752]                   /* 183EBC30C */
#define g_183EBC310                      dword_140404A6C[283827753]                   /* 183EBC310 */
#define g_183EBC314                      dword_140404A6C[283827754]                   /* 183EBC314 */
#define g_183EBC318                      dword_140404A6C[283827755]                   /* 183EBC318 */
#define g_183EBC31C                      dword_140404A6C[283827756]                   /* 183EBC31C */
#define g_183EBC320                      dword_140404A6C[283827757]                   /* 183EBC320 */
#define g_183EBC324                      dword_140404A6C[283827758]                   /* 183EBC324 */
#define g_183EBC340                      dword_140404A6C[283827765]                   /* 183EBC340 */
#define g_183EBC344                      dword_140404A6C[283827766]                   /* 183EBC344 */
#define g_183EBC348                      dword_140404A6C[283827767]                   /* 183EBC348 */
#define g_183EBC34C                      dword_140404A6C[283827768]                   /* 183EBC34C */
#define world_particle_mesh_1            dword_140404A6C[283827769]                   /* 183EBC350 src/engine/particle.h */
#define g_183EBC3CC                      dword_140404A6C[283827800]                   /* 183EBC3CC */
#define g_183EBC3DC                      dword_140404A6C[283827804]                   /* 183EBC3DC */
#define g_183EBC3E0                      dword_140404A6C[283827805]                   /* 183EBC3E0 */
#define g_183EBC3E4                      dword_140404A6C[283827806]                   /* 183EBC3E4 */
#define g_183EBC400                      dword_140404A6C[283827813]                   /* 183EBC400 */
#define g_183EBC404                      dword_140404A6C[283827814]                   /* 183EBC404 */
#define g_183EBC408                      dword_140404A6C[283827815]                   /* 183EBC408 */
#define resting_texture_1                dword_140404A6C[283827818]                   /* 183EBC414 src/engine/world_particles.c */
#define g_183EBC418                      dword_140404A6C[283827819]                   /* 183EBC418 */
#define g_183EBC41C                      dword_140404A6C[283827820]                   /* 183EBC41C */
#define g_183EBC420                      dword_140404A6C[283827821]                   /* 183EBC420 */
#define g_183EBC424                      dword_140404A6C[283827822]                   /* 183EBC424 */
#define g_183EBD408                      dword_140404A6C[283828839]                   /* 183EBD408 */
#define g_183EBE404                      dword_140404A6C[283829862]                   /* 183EBE404 */
#define shading_texture                  dword_140404A6C[283829863]                   /* 183EBE408 src/engine/world_particles.c */
#define g_183EBE40C                      dword_140404A6C[283829864]                   /* 183EBE40C */
#define g_183EBE410                      dword_140404A6C[283829865]                   /* 183EBE410 */
#define g_183EBE414                      dword_140404A6C[283829866]                   /* 183EBE414 */
#define g_183EBE418                      dword_140404A6C[283829867]                   /* 183EBE418 */
#define g_183EBE41C                      dword_140404A6C[283829868]                   /* 183EBE41C */
#define g_183EBE420                      dword_140404A6C[283829869]                   /* 183EBE420 */
#define g_183EBE424                      dword_140404A6C[283829870]                   /* 183EBE424 */
#define g_183EBE428                      dword_140404A6C[283829871]                   /* 183EBE428 */
#define shading_cube_map                 dword_140404A6C[283829872]                   /* 183EBE42C src/engine/world_effects_draw.c */
#define g_183EBE430                      dword_140404A6C[283829873]                   /* 183EBE430 */
#define g_183EBE434                      dword_140404A6C[283829874]                   /* 183EBE434 */
#define g_183EBE438                      dword_140404A6C[283829875]                   /* 183EBE438 */
#define effect_texture                   dword_140404A6C[283829876]                   /* 183EBE43C src/engine/world_effects_draw.c */
#define g_183EBE440                      dword_140404A6C[283829877]                   /* 183EBE440 */
#define g_183EBE444                      dword_140404A6C[283829878]                   /* 183EBE444 */
#define g_183EBE448                      dword_140404A6C[283829879]                   /* 183EBE448 */
#define g_183EBE44C                      dword_140404A6C[283829880]                   /* 183EBE44C */
#define g_183EBE850                      dword_140404A6C[283830137]                   /* 183EBE850 */
#define g_183EBEC50                      dword_140404A6C[283830393]                   /* 183EBEC50 */
#define g_183EBF050                      dword_140404A6C[283830649]                   /* 183EBF050 */
#define g_183EBF054                      dword_140404A6C[283830650]                   /* 183EBF054 */
#define g_183EBF058                      dword_140404A6C[283830651]                   /* 183EBF058 */
#define g_183EBF05C                      dword_140404A6C[283830652]                   /* 183EBF05C */
#define g_183EBF060                      dword_140404A6C[283830653]                   /* 183EBF060 */
#define g_183EBF064                      dword_140404A6C[283830654]                   /* 183EBF064 */
#define g_183EBF068                      dword_140404A6C[283830655]                   /* 183EBF068 */
#define g_183EBF06C                      dword_140404A6C[283830656]                   /* 183EBF06C */
#define g_183EBF070                      dword_140404A6C[283830657]                   /* 183EBF070 */
#define g_183EBF074                      dword_140404A6C[283830658]                   /* 183EBF074 */
#define g_183EBF078                      dword_140404A6C[283830659]                   /* 183EBF078 */
#define g_183EBF07C                      dword_140404A6C[283830660]                   /* 183EBF07C */
#define g_183EBF08C                      dword_140404A6C[283830664]                   /* 183EBF08C */
#define g_183EBF0F0                      dword_140404A6C[283830689]                   /* 183EBF0F0 */
#define g_183EBF0F4                      dword_140404A6C[283830690]                   /* 183EBF0F4 */
#define g_183EBF0F8                      dword_140404A6C[283830691]                   /* 183EBF0F8 */
#define g_183EBF0FC                      dword_140404A6C[283830692]                   /* 183EBF0FC */
#define g_183EBF100                      dword_140404A6C[283830693]                   /* 183EBF100 */
#define g_183EBF104                      dword_140404A6C[283830694]                   /* 183EBF104 */
#define g_183EBF108                      dword_140404A6C[283830695]                   /* 183EBF108 */
#define g_183EBF10C                      dword_140404A6C[283830696]                   /* 183EBF10C */
#define g_183EBF110                      dword_140404A6C[283830697]                   /* 183EBF110 */
#define g_183EBF114                      dword_140404A6C[283830698]                   /* 183EBF114 */
#define resting_texture_0                dword_140404A6C[283830699]                   /* 183EBF118 src/engine/world_particles.c */
#define g_183EBF11C                      dword_140404A6C[283830700]                   /* 183EBF11C */
#define g_183EBF120                      dword_140404A6C[283830701]                   /* 183EBF120 */
#define g_183EBF124                      dword_140404A6C[283830702]                   /* 183EBF124 */
#define g_183EBF128                      dword_140404A6C[283830703]                   /* 183EBF128 */
#define g_183EBF12C                      dword_140404A6C[283830704]                   /* 183EBF12C */
#define g_183EBF130                      dword_140404A6C[283830705]                   /* 183EBF130 */
#define g_183EBF134                      dword_140404A6C[283830706]                   /* 183EBF134 */
#define g_183EBF138                      dword_140404A6C[283830707]                   /* 183EBF138 */
#define g_183EBF13C                      dword_140404A6C[283830708]                   /* 183EBF13C */
#define g_183EBF140                      dword_140404A6C[283830709]                   /* 183EBF140 */
#define g_183EBF144                      dword_140404A6C[283830710]                   /* 183EBF144 */
#define g_183EBF148                      dword_140404A6C[283830711]                   /* 183EBF148 */
#define g_183EBF14C                      dword_140404A6C[283830712]                   /* 183EBF14C */
#define g_183EBF150                      dword_140404A6C[283830713]                   /* 183EBF150 */
#define g_183EBF154                      dword_140404A6C[283830714]                   /* 183EBF154 */
#define g_183EBF158                      dword_140404A6C[283830715]                   /* 183EBF158 */
#define g_183EBF15C                      dword_140404A6C[283830716]                   /* 183EBF15C */
#define g_183EBF160                      dword_140404A6C[283830717]                   /* 183EBF160 */
#define g_183EBF164                      dword_140404A6C[283830718]                   /* 183EBF164 */
#define g_183EBF168                      dword_140404A6C[283830719]                   /* 183EBF168 */
#define g_183EBF16C                      dword_140404A6C[283830720]                   /* 183EBF16C */
#define g_183EBF170                      dword_140404A6C[283830721]                   /* 183EBF170 */
#define g_183EBF174                      dword_140404A6C[283830722]                   /* 183EBF174 */
#define g_183EBF178                      dword_140404A6C[283830723]                   /* 183EBF178 */
#define g_183EBF17C                      dword_140404A6C[283830724]                   /* 183EBF17C */
#define g_183EBF180                      dword_140404A6C[283830725]                   /* 183EBF180 */
#define g_183EBF57C                      dword_140404A6C[283830980]                   /* 183EBF57C */
#define g_183EBF580                      dword_140404A6C[283830981]                   /* 183EBF580 */
#define g_183EBF5B4                      dword_140404A6C[283830994]                   /* 183EBF5B4 */
#define g_183EBF60C                      dword_140404A6C[283831016]                   /* 183EBF60C */
#define g_183EBF634                      dword_140404A6C[283831026]                   /* 183EBF634 */
#define g_183EBF780                      dword_140404A6C[283831109]                   /* 183EBF780 */
#define g_183EBF980                      dword_140404A6C[283831237]                   /* 183EBF980 */
#define g_183EBF984                      dword_140404A6C[283831238]                   /* 183EBF984 */
#define g_183EBF988                      dword_140404A6C[283831239]                   /* 183EBF988 */
#define g_183EBFA88                      dword_140404A6C[283831303]                   /* 183EBFA88 */
#define g_183EBFAA0                      dword_140404A6C[283831309]                   /* 183EBFAA0 */
#define g_183EBFAA4                      dword_140404A6C[283831310]                   /* 183EBFAA4 */
#define g_183EBFAA8                      dword_140404A6C[283831311]                   /* 183EBFAA8 */
#define game_type                        dword_140404A6C[283831312]                   /* 183EBFAAC src/engine/frame.h */
#define g_183EBFAB0                      (*(_OWORD *)&dword_140404A6C[283831313])     /* 183EBFAB0 */
#define g_183EBFAB4                      dword_140404A6C[283831314]                   /* 183EBFAB4 */
#define g_183EBFAC0                      (*(_OWORD *)&dword_140404A6C[283831317])     /* 183EBFAC0 */
#define g_183EBFCB0                      dword_140404A6C[283831441]                   /* 183EBFCB0 */
#define g_183EBFCBC                      dword_140404A6C[283831444]                   /* 183EBFCBC */
#define g_183EBFCC4                      dword_140404A6C[283831446]                   /* 183EBFCC4 */
#define game_unknown_183ebfcc8           dword_140404A6C[283831447]                   /* 183EBFCC8 src/engine/frame.h */
#define game_state                       dword_140404A6C[283831448]                   /* 183EBFCCC src/engine/frame.h */
#define g_183EBFCD4                      dword_140404A6C[283831450]                   /* 183EBFCD4 */
#define game_state_time                  dword_140404A6C[283831451]                   /* 183EBFCD8 src/engine/frame.h */
#define g_183EBFCDC                      dword_140404A6C[283831452]                   /* 183EBFCDC */
#define g_183EBFCE0                      dword_140404A6C[283831453]                   /* 183EBFCE0 */
#define g_183EBFCE8                      dword_140404A6C[283831455]                   /* 183EBFCE8 */
#define g_183EBFCEC                      dword_140404A6C[283831456]                   /* 183EBFCEC */
#define g_183EBFCF0                      dword_140404A6C[283831457]                   /* 183EBFCF0 */
#define g_183EBFCFC                      dword_140404A6C[283831460]                   /* 183EBFCFC */
#define g_183EBFD30                      dword_140404A6C[283831473]                   /* 183EBFD30 */
#define game_tick                        dword_140404A6C[283831474]                   /* 183EBFD34 src/engine/frame.h */
#define frame_pass_count                 dword_140404A6C[283831475]                   /* 183EBFD38 src/engine/frame.h */
#define game_tick_mark                   dword_140404A6C[283831476]                   /* 183EBFD3C src/engine/frame.h */
#define frame_next_time                  dword_140404A6C[283831477]                   /* 183EBFD40 src/engine/frame.h */
#define g_183EBFD44                      dword_140404A6C[283831478]                   /* 183EBFD44 */
#define game_paused                      dword_140404A6C[283831479]                   /* 183EBFD48 src/engine/frame.h */
#define game_single_step                 dword_140404A6C[283831480]                   /* 183EBFD4C src/engine/frame.h */
#define frame_slow_pacing                dword_140404A6C[283831481]                   /* 183EBFD50 src/engine/frame.h */
#define game_sun_angle                   (*(float *)&dword_140404A6C[283831482])      /* 183EBFD54 src/engine/frame.h */
#define game_unknown_183ebfd58           (*(float *)&dword_140404A6C[283831483])      /* 183EBFD58 src/engine/frame.h */
#define g_183EBFD5C                      dword_140404A6C[283831484]                   /* 183EBFD5C */
#define g_183EBFD60                      (*(float *)&dword_140404A6C[283831485])      /* 183EBFD60 */
#define g_183EBFD68                      (*(float *)&dword_140404A6C[283831487])      /* 183EBFD68 */
#define g_183EBFD6C                      (*(float *)&dword_140404A6C[283831488])      /* 183EBFD6C */
#define g_183EBFD74                      (*(float *)&dword_140404A6C[283831490])      /* 183EBFD74 */
#define g_183EBFD78                      dword_140404A6C[283831491]                   /* 183EBFD78 */
#define g_183EBFD84                      dword_140404A6C[283831494]                   /* 183EBFD84 */
#define g_183EBFD9C                      dword_140404A6C[283831500]                   /* 183EBFD9C */
#define g_183EBFDA0                      (*(float *)&dword_140404A6C[283831501])      /* 183EBFDA0 */
#define g_183EBFDA4                      (*(float *)&dword_140404A6C[283831502])      /* 183EBFDA4 */
#define g_183EBFDA8                      (*(float *)&dword_140404A6C[283831503])      /* 183EBFDA8 */
#define g_183EBFDAC                      dword_140404A6C[283831504]                   /* 183EBFDAC */
#define g_183EBFDB0                      dword_140404A6C[283831505]                   /* 183EBFDB0 */
#define g_183EBFDB4                      dword_140404A6C[283831506]                   /* 183EBFDB4 */
#define g_183EBFDBC                      dword_140404A6C[283831508]                   /* 183EBFDBC */
#define g_183EBFDC0                      dword_140404A6C[283831509]                   /* 183EBFDC0 */
#define g_183EBFDC4                      dword_140404A6C[283831510]                   /* 183EBFDC4 */
#define g_183EBFEFC                      dword_140404A6C[283831588]                   /* 183EBFEFC */
#define g_183EBFF00                      dword_140404A6C[283831589]                   /* 183EBFF00 */
#define g_183EBFF04                      dword_140404A6C[283831590]                   /* 183EBFF04 */
#define g_183EBFF08                      dword_140404A6C[283831591]                   /* 183EBFF08 */
#define g_183EBFF0C                      dword_140404A6C[283831592]                   /* 183EBFF0C */
#define g_183EBFF10                      dword_140404A6C[283831593]                   /* 183EBFF10 */
#define g_183EBFF14                      dword_140404A6C[283831594]                   /* 183EBFF14 */
#define g_183EBFF18                      dword_140404A6C[283831595]                   /* 183EBFF18 */
#define g_183EBFF1C                      dword_140404A6C[283831596]                   /* 183EBFF1C */
#define g_183EBFF38                      dword_140404A6C[283831603]                   /* 183EBFF38 */
#define g_183EBFF3C                      dword_140404A6C[283831604]                   /* 183EBFF3C */
#define g_183EBFF40                      dword_140404A6C[283831605]                   /* 183EBFF40 */
#define g_183EBFF44                      dword_140404A6C[283831606]                   /* 183EBFF44 */
#define g_183EBFF48                      dword_140404A6C[283831607]                   /* 183EBFF48 */
#define g_183EBFF50                      dword_140404A6C[283831609]                   /* 183EBFF50 */
#define g_183EBFF54                      dword_140404A6C[283831610]                   /* 183EBFF54 */
#define g_183EBFF58                      dword_140404A6C[283831611]                   /* 183EBFF58 */
#define g_183EBFF98                      dword_140404A6C[283831627]                   /* 183EBFF98 */
#define g_183EC0358                      dword_140404A6C[283831867]                   /* 183EC0358 */
#define g_183EC035C                      dword_140404A6C[283831868]                   /* 183EC035C */
#define g_183EC4918                      dword_140404A6C[283836331]                   /* 183EC4918 */
#define g_183EC491C                      dword_140404A6C[283836332]                   /* 183EC491C */
#define g_183EC4920                      dword_140404A6C[283836333]                   /* 183EC4920 */
#define g_183EC4924                      dword_140404A6C[283836334]                   /* 183EC4924 */
#define g_183EC4928                      dword_140404A6C[283836335]                   /* 183EC4928 */
#define g_183EC492C                      dword_140404A6C[283836336]                   /* 183EC492C */
#define g_183EC4930                      dword_140404A6C[283836337]                   /* 183EC4930 */
#define g_183EC4934                      dword_140404A6C[283836338]                   /* 183EC4934 */
#define g_183EC4938                      dword_140404A6C[283836339]                   /* 183EC4938 */
#define g_183EC493C                      dword_140404A6C[283836340]                   /* 183EC493C */
#define g_183EC4944                      dword_140404A6C[283836342]                   /* 183EC4944 */
#define g_183EC4948                      dword_140404A6C[283836343]                   /* 183EC4948 */
#define g_183EC494C                      dword_140404A6C[283836344]                   /* 183EC494C */
#define g_183EC5820                      dword_140404A6C[283837293]                   /* 183EC5820 */
#define g_183EC5824                      dword_140404A6C[283837294]                   /* 183EC5824 */
#define g_183EC5924                      (*(float *)&dword_140404A6C[283837358])      /* 183EC5924 */
#define g_183EC592C                      (*(float *)&dword_140404A6C[283837360])      /* 183EC592C */
#define g_183EC5930                      (*(float *)&dword_140404A6C[283837361])      /* 183EC5930 */
#define g_183EC5938                      (*(float *)&dword_140404A6C[283837363])      /* 183EC5938 */
#define g_183EC5964                      (*(float *)&dword_140404A6C[283837374])      /* 183EC5964 */
#define g_183EC5968                      (*(float *)&dword_140404A6C[283837375])      /* 183EC5968 */
#define g_183EC596C                      (*(float *)&dword_140404A6C[283837376])      /* 183EC596C */
#define g_183EC5970                      dword_140404A6C[283837377]                   /* 183EC5970 */
#define g_183EC5974                      dword_140404A6C[283837378]                   /* 183EC5974 */
#define g_183EC5978                      dword_140404A6C[283837379]                   /* 183EC5978 */
#define g_183EC5984                      dword_140404A6C[283837382]                   /* 183EC5984 */
#define g_183ECA4DC                      dword_140404A6C[283842204]                   /* 183ECA4DC */
#define g_183ECB3E4                      dword_140404A6C[283843166]                   /* 183ECB3E4 */
#define g_183ECB3E8                      dword_140404A6C[283843167]                   /* 183ECB3E8 */
#define g_183ECB4E8                      (*(float *)&dword_140404A6C[283843231])      /* 183ECB4E8 */
#define g_183ECB4F0                      (*(float *)&dword_140404A6C[283843233])      /* 183ECB4F0 */
#define g_183ECB4F4                      (*(float *)&dword_140404A6C[283843234])      /* 183ECB4F4 */
#define g_183ECB4FC                      (*(float *)&dword_140404A6C[283843236])      /* 183ECB4FC */
#define g_183ECB50C                      dword_140404A6C[283843240]                   /* 183ECB50C */
#define g_183ECB534                      dword_140404A6C[283843250]                   /* 183ECB534 */
#define g_183ECB538                      dword_140404A6C[283843251]                   /* 183ECB538 */
#define g_183ECB53C                      dword_140404A6C[283843252]                   /* 183ECB53C */
#define g_183ECB548                      dword_140404A6C[283843255]                   /* 183ECB548 */
#define g_183ECB54C                      dword_140404A6C[283843256]                   /* 183ECB54C */
#define g_183ED00A0                      dword_140404A6C[283848077]                   /* 183ED00A0 */
#define g_183ED0FA8                      dword_140404A6C[283849039]                   /* 183ED0FA8 */
#define g_183ED0FAC                      dword_140404A6C[283849040]                   /* 183ED0FAC */
#define g_183ED10AC                      (*(float *)&dword_140404A6C[283849104])      /* 183ED10AC */
#define g_183ED10B4                      (*(float *)&dword_140404A6C[283849106])      /* 183ED10B4 */
#define g_183ED10B8                      (*(float *)&dword_140404A6C[283849107])      /* 183ED10B8 */
#define g_183ED10C0                      (*(float *)&dword_140404A6C[283849109])      /* 183ED10C0 */
#define g_183ED10D0                      dword_140404A6C[283849113]                   /* 183ED10D0 */
#define g_183ED1100                      dword_140404A6C[283849125]                   /* 183ED1100 */
#define g_183ED110C                      dword_140404A6C[283849128]                   /* 183ED110C */
#define g_183ED5C64                      dword_140404A6C[283853950]                   /* 183ED5C64 */
#define g_183ED6B6C                      dword_140404A6C[283854912]                   /* 183ED6B6C */
#define g_183ED6B70                      dword_140404A6C[283854913]                   /* 183ED6B70 */
#define g_183ED6C70                      (*(float *)&dword_140404A6C[283854977])      /* 183ED6C70 */
#define g_183ED6C78                      (*(float *)&dword_140404A6C[283854979])      /* 183ED6C78 */
#define g_183ED6C7C                      (*(float *)&dword_140404A6C[283854980])      /* 183ED6C7C */
#define g_183ED6C84                      (*(float *)&dword_140404A6C[283854982])      /* 183ED6C84 */
#define g_183ED6CC4                      dword_140404A6C[283854998]                   /* 183ED6CC4 */
#define g_183ED6CD0                      dword_140404A6C[283855001]                   /* 183ED6CD0 */
#define g_183EDB828                      dword_140404A6C[283859823]                   /* 183EDB828 */
#define g_183EDC730                      dword_140404A6C[283860785]                   /* 183EDC730 */
#define g_183EDC734                      dword_140404A6C[283860786]                   /* 183EDC734 */
#define g_183EDC834                      (*(float *)&dword_140404A6C[283860850])      /* 183EDC834 */
#define g_183EDC83C                      (*(float *)&dword_140404A6C[283860852])      /* 183EDC83C */
#define g_183EDC840                      (*(float *)&dword_140404A6C[283860853])      /* 183EDC840 */
#define g_183EDC848                      (*(float *)&dword_140404A6C[283860855])      /* 183EDC848 */
#define g_183EDC888                      dword_140404A6C[283860871]                   /* 183EDC888 */
#define g_183EDC894                      dword_140404A6C[283860874]                   /* 183EDC894 */
#define g_183EE13EC                      dword_140404A6C[283865696]                   /* 183EE13EC */
#define g_183EE22F4                      dword_140404A6C[283866658]                   /* 183EE22F4 */
#define g_183EE22F8                      dword_140404A6C[283866659]                   /* 183EE22F8 */
#define g_183EE23F8                      dword_140404A6C[283866723]                   /* 183EE23F8 */
#define g_183EE2404                      dword_140404A6C[283866726]                   /* 183EE2404 */
#define g_183EE244C                      dword_140404A6C[283866744]                   /* 183EE244C */
#define g_183EE2454                      dword_140404A6C[283866746]                   /* 183EE2454 */
#define g_183EE25A4                      dword_140404A6C[283866830]                   /* 183EE25A4 */
#define g_183EE29F4                      dword_140404A6C[283867106]                   /* 183EE29F4 */
#define g_183EE6FB0                      dword_140404A6C[283871569]                   /* 183EE6FB0 */
#define g_183EE8010                      dword_140404A6C[283872617]                   /* 183EE8010 */
#define g_183EECB74                      dword_140404A6C[283877442]                   /* 183EECB74 */
#define g_183F775E0                      dword_140404A6C[284019421]                   /* 183F775E0 */
#define g_183F79DE4                      dword_140404A6C[284021982]                   /* 183F79DE4 */
#define g_183F79DE8                      dword_140404A6C[284021983]                   /* 183F79DE8 */
#define g_183F79DEC                      dword_140404A6C[284021984]                   /* 183F79DEC */
#define g_183F79DF0                      dword_140404A6C[284021985]                   /* 183F79DF0 */
#define g_183F79DF4                      dword_140404A6C[284021986]                   /* 183F79DF4 */
#define effect_previous_3c               dword_140404A6C[284021987]                   /* 183F79DF8 src/engine/frame.h */
#define effect_flash                     (*(float *)&dword_140404A6C[284021988])      /* 183F79DFC src/engine/frame.h */
#define g_183F79E00                      dword_140404A6C[284021989]                   /* 183F79E00 */
#define g_183F79E04                      (*(float *)&dword_140404A6C[284021990])      /* 183F79E04 */
#define g_183F79E08                      (*(float *)&dword_140404A6C[284021991])      /* 183F79E08 */
#define g_183F79E0C                      (*(float *)&dword_140404A6C[284021992])      /* 183F79E0C */
#define g_183F79F84                      dword_140404A6C[284022086]                   /* 183F79F84 */
#define g_183F7A31C                      dword_140404A6C[284022316]                   /* 183F7A31C */
#define g_183F7A320                      dword_140404A6C[284022317]                   /* 183F7A320 */
#define g_183F7A324                      dword_140404A6C[284022318]                   /* 183F7A324 */
#define g_183F7A328                      dword_140404A6C[284022319]                   /* 183F7A328 */
#define g_183F7A32C                      dword_140404A6C[284022320]                   /* 183F7A32C */
#define g_183F7A340                      dword_140404A6C[284022325]                   /* 183F7A340 */
#define g_183F7A344                      dword_140404A6C[284022326]                   /* 183F7A344 */
#define g_183F7A564                      dword_140404A6C[284022462]                   /* 183F7A564 */
#define g_183F7A568                      dword_140404A6C[284022463]                   /* 183F7A568 */
#define g_183F7A570                      (*(float *)&dword_140404A6C[284022465])      /* 183F7A570 */
#define g_183F7A574                      (*(float *)&dword_140404A6C[284022466])      /* 183F7A574 */
#define g_183F7A578                      (*(float *)&dword_140404A6C[284022467])      /* 183F7A578 */
#define g_183F7A5A0                      dword_140404A6C[284022477]                   /* 183F7A5A0 */
#define g_183F7A5A4                      dword_140404A6C[284022478]                   /* 183F7A5A4 */
#define g_183F7A5A8                      dword_140404A6C[284022479]                   /* 183F7A5A8 */
#define g_183F7A5AC                      dword_140404A6C[284022480]                   /* 183F7A5AC */
#define g_183F7A5B0                      dword_140404A6C[284022481]                   /* 183F7A5B0 */
#define g_183F7A5B4                      dword_140404A6C[284022482]                   /* 183F7A5B4 */
#define g_183F7A5B8                      dword_140404A6C[284022483]                   /* 183F7A5B8 */
#define g_183F7A5BC                      dword_140404A6C[284022484]                   /* 183F7A5BC */
#define g_183F7A5C0                      dword_140404A6C[284022485]                   /* 183F7A5C0 */
#define g_183F7A5C4                      dword_140404A6C[284022486]                   /* 183F7A5C4 */
#define g_183F7A5C8                      dword_140404A6C[284022487]                   /* 183F7A5C8 */
#define g_183F7A5CC                      dword_140404A6C[284022488]                   /* 183F7A5CC */
#define g_183F7A5D0                      dword_140404A6C[284022489]                   /* 183F7A5D0 */
#define g_183F7A5D4                      dword_140404A6C[284022490]                   /* 183F7A5D4 */
#define g_183F7A5D8                      dword_140404A6C[284022491]                   /* 183F7A5D8 */
#define g_183F7A5DC                      dword_140404A6C[284022492]                   /* 183F7A5DC */
#define g_183F7A5E0                      dword_140404A6C[284022493]                   /* 183F7A5E0 */
#define g_183F7A5E4                      dword_140404A6C[284022494]                   /* 183F7A5E4 */
#define g_183F7A5E8                      dword_140404A6C[284022495]                   /* 183F7A5E8 */
#define g_183F7A5EC                      dword_140404A6C[284022496]                   /* 183F7A5EC */
#define g_183F7A5F0                      dword_140404A6C[284022497]                   /* 183F7A5F0 */
#define g_183F7A5F4                      dword_140404A6C[284022498]                   /* 183F7A5F4 */
#define g_183F7A5F8                      dword_140404A6C[284022499]                   /* 183F7A5F8 */
#define g_183F7A5FC                      dword_140404A6C[284022500]                   /* 183F7A5FC */
#define g_183F7A600                      dword_140404A6C[284022501]                   /* 183F7A600 */
#define g_183F7A604                      dword_140404A6C[284022502]                   /* 183F7A604 */
#define g_183F7A608                      dword_140404A6C[284022503]                   /* 183F7A608 */
#define g_183F7A60C                      dword_140404A6C[284022504]                   /* 183F7A60C */
#define g_183F7A610                      dword_140404A6C[284022505]                   /* 183F7A610 */
#define g_183F7A614                      dword_140404A6C[284022506]                   /* 183F7A614 */
#define g_183F7A654                      (*(_QWORD *)&dword_140404A6C[284022522])     /* 183F7A654 */
#define g_183F7A694                      dword_140404A6C[284022538]                   /* 183F7A694 */
#define g_183F7A6D4                      dword_140404A6C[284022554]                   /* 183F7A6D4 */
#define g_183F7A714                      dword_140404A6C[284022570]                   /* 183F7A714 */
#define g_183F7A754                      dword_140404A6C[284022586]                   /* 183F7A754 */
#define g_183F7A794                      dword_140404A6C[284022602]                   /* 183F7A794 */
#define g_183F7A7D4                      dword_140404A6C[284022618]                   /* 183F7A7D4 */
#define g_183F7AE14                      dword_140404A6C[284023018]                   /* 183F7AE14 */
#define g_183F7AE18                      dword_140404A6C[284023019]                   /* 183F7AE18 */
#define g_183F7AE1C                      dword_140404A6C[284023020]                   /* 183F7AE1C */
#define g_183F7AED4                      dword_140404A6C[284023066]                   /* 183F7AED4 */
#define effect_183f7aed8                 (*(float *)&dword_140404A6C[284023067])      /* 183F7AED8 src/engine/frame.h */
#define effect_183f7aedc                 (*(float *)&dword_140404A6C[284023068])      /* 183F7AEDC src/engine/frame.h */
#define toggle_183f7aee0                 dword_140404A6C[284023069]                   /* 183F7AEE0 src/engine/frame.h */
#define g_183F7AEE4                      dword_140404A6C[284023070]                   /* 183F7AEE4 */
#define world_item_29_count              dword_140404A6C[284023071]                   /* 183F7AEE8 src/engine/world.h */
#define g_183F7AEEC                      dword_140404A6C[284023072]                   /* 183F7AEEC */
#define g_183F7AEF0                      dword_140404A6C[284023073]                   /* 183F7AEF0 */
#define g_183F7AEF4                      dword_140404A6C[284023074]                   /* 183F7AEF4 */
#define g_183F7B2F4                      dword_140404A6C[284023330]                   /* 183F7B2F4 */
#define g_183F7B2F8                      dword_140404A6C[284023331]                   /* 183F7B2F8 */
#define g_183F7C2F8                      dword_140404A6C[284024355]                   /* 183F7C2F8 */
#define toggle_183f7c2fc                 dword_140404A6C[284024356]                   /* 183F7C2FC src/engine/frame.h */
#define g_183F7C300                      dword_140404A6C[284024357]                   /* 183F7C300 */
#define g_183F7C304                      dword_140404A6C[284024358]                   /* 183F7C304 */
#define g_183F7C308                      dword_140404A6C[284024359]                   /* 183F7C308 */
#define g_183F7C30C                      dword_140404A6C[284024360]                   /* 183F7C30C */
#define g_183F7C310                      dword_140404A6C[284024361]                   /* 183F7C310 */
#define g_183F7C314                      dword_140404A6C[284024362]                   /* 183F7C314 */
#define g_183F7C318                      dword_140404A6C[284024363]                   /* 183F7C318 */
#define g_183F7C31C                      dword_140404A6C[284024364]                   /* 183F7C31C */
#define g_183F7C320                      dword_140404A6C[284024365]                   /* 183F7C320 */
#define g_183F7C324                      dword_140404A6C[284024366]                   /* 183F7C324 */
#define g_183F7C328                      dword_140404A6C[284024367]                   /* 183F7C328 */
#define g_183F7C32C                      dword_140404A6C[284024368]                   /* 183F7C32C */
#define g_183F7C330                      dword_140404A6C[284024369]                   /* 183F7C330 */
#define g_183F7C334                      dword_140404A6C[284024370]                   /* 183F7C334 */
#define g_183F7C338                      dword_140404A6C[284024371]                   /* 183F7C338 */
#define g_183F7C33C                      dword_140404A6C[284024372]                   /* 183F7C33C */
#define g_183F7C340                      dword_140404A6C[284024373]                   /* 183F7C340 */
#define g_183F7C344                      dword_140404A6C[284024374]                   /* 183F7C344 */
#define g_183F7C348                      dword_140404A6C[284024375]                   /* 183F7C348 */
#define g_183F7C34C                      dword_140404A6C[284024376]                   /* 183F7C34C */
#define g_183F7C360                      (*(_QWORD *)&dword_140404A6C[284024381])     /* 183F7C360 */
#define g_183F7C364                      dword_140404A6C[284024382]                   /* 183F7C364 */
#define g_183F7C368                      dword_140404A6C[284024383]                   /* 183F7C368 */
#define g_183F7C36C                      dword_140404A6C[284024384]                   /* 183F7C36C */
#define g_183F7C370                      dword_140404A6C[284024385]                   /* 183F7C370 */
#define g_183F7C37C                      dword_140404A6C[284024388]                   /* 183F7C37C */
#define g_183F7C380                      dword_140404A6C[284024389]                   /* 183F7C380 */
#define g_183F7C384                      dword_140404A6C[284024390]                   /* 183F7C384 */
#define g_183F7C388                      dword_140404A6C[284024391]                   /* 183F7C388 */
#define g_183F7C38C                      dword_140404A6C[284024392]                   /* 183F7C38C */
#define g_183F7C390                      (*(float *)&dword_140404A6C[284024393])      /* 183F7C390 */
#define g_183F7C398                      dword_140404A6C[284024395]                   /* 183F7C398 */
#define g_183F7C39C                      dword_140404A6C[284024396]                   /* 183F7C39C */
#define g_183F7C3A0                      dword_140404A6C[284024397]                   /* 183F7C3A0 */
#define g_183F7C3B4                      dword_140404A6C[284024402]                   /* 183F7C3B4 */
#define g_183F7C3B8                      dword_140404A6C[284024403]                   /* 183F7C3B8 */
#define g_183F7C3BC                      dword_140404A6C[284024404]                   /* 183F7C3BC */
#define g_183F7C520                      dword_140404A6C[284024493]                   /* 183F7C520 */
#define g_183F7C524                      dword_140404A6C[284024494]                   /* 183F7C524 */
#define local_player                     dword_140404A6C[284024501]                   /* 183F7C540 src/engine/frame.h */
#define g_183F7C544                      (*(float *)&dword_140404A6C[284024502])      /* 183F7C544 */
#define g_183F7C548                      (*(float *)&dword_140404A6C[284024503])      /* 183F7C548 */
#define g_183F7C54C                      (*(float *)&dword_140404A6C[284024504])      /* 183F7C54C */
#define g_183F7C550                      (*(float *)&dword_140404A6C[284024505])      /* 183F7C550 */
#define g_183F7C554                      (*(float *)&dword_140404A6C[284024506])      /* 183F7C554 */
#define g_183F7C558                      (*(float *)&dword_140404A6C[284024507])      /* 183F7C558 */
#define g_183F7C55C                      (*(float *)&dword_140404A6C[284024508])      /* 183F7C55C */
#define g_183F7C560                      (*(float *)&dword_140404A6C[284024509])      /* 183F7C560 */
#define g_183F7C564                      (*(float *)&dword_140404A6C[284024510])      /* 183F7C564 */
#define g_183F7C568                      (*(float *)&dword_140404A6C[284024511])      /* 183F7C568 */
#define g_183F7C56C                      (*(float *)&dword_140404A6C[284024512])      /* 183F7C56C */
#define g_183F7C570                      (*(float *)&dword_140404A6C[284024513])      /* 183F7C570 */
#define g_183F7C574                      (*(float *)&dword_140404A6C[284024514])      /* 183F7C574 */
#define g_183F7C578                      (*(_QWORD *)&dword_140404A6C[284024515])     /* 183F7C578 */
#define g_183F7C57C                      dword_140404A6C[284024516]                   /* 183F7C57C */
#define g_183F7C580                      dword_140404A6C[284024517]                   /* 183F7C580 */
#define g_183F7C588                      dword_140404A6C[284024519]                   /* 183F7C588 */
#define g_183F7C58C                      (*(float *)&dword_140404A6C[284024520])      /* 183F7C58C */
#define g_183F7C590                      (*(float *)&dword_140404A6C[284024521])      /* 183F7C590 */
#define g_183F7C594                      (*(float *)&dword_140404A6C[284024522])      /* 183F7C594 */
#define g_183F7C598                      (*(_QWORD *)&dword_140404A6C[284024523])     /* 183F7C598 */
#define g_183F7C5A0                      dword_140404A6C[284024525]                   /* 183F7C5A0 */
#define g_183F7C5A4                      (*(_OWORD *)&dword_140404A6C[284024526])     /* 183F7C5A4 */
#define g_183F7C5A8                      (*(float *)&dword_140404A6C[284024527])      /* 183F7C5A8 */
#define g_183F7C5AC                      (*(float *)&dword_140404A6C[284024528])      /* 183F7C5AC */
#define g_183F7C5B0                      dword_140404A6C[284024529]                   /* 183F7C5B0 */
#define g_183F7C5B4                      (*(float *)&dword_140404A6C[284024530])      /* 183F7C5B4 */
#define g_183F7C5B8                      (*(float *)&dword_140404A6C[284024531])      /* 183F7C5B8 */
#define g_183F7C5BC                      (*(float *)&dword_140404A6C[284024532])      /* 183F7C5BC */
#define g_183F7C5C0                      (*(float *)&dword_140404A6C[284024533])      /* 183F7C5C0 */
#define g_183F7C5C4                      dword_140404A6C[284024534]                   /* 183F7C5C4 */
#define g_183F7C5C8                      (*(float *)&dword_140404A6C[284024535])      /* 183F7C5C8 */
#define g_183F7C5CC                      (*(float *)&dword_140404A6C[284024536])      /* 183F7C5CC */
#define g_183F7C5D0                      (*(float *)&dword_140404A6C[284024537])      /* 183F7C5D0 */
#define g_183F7C620                      (*(_OWORD *)&dword_140404A6C[284024557])     /* 183F7C620 */
#define g_183F7C630                      (*(_OWORD *)&dword_140404A6C[284024561])     /* 183F7C630 */
#define g_183F7C640                      (*(_OWORD *)&dword_140404A6C[284024565])     /* 183F7C640 */
#define g_183F7C650                      (*(_OWORD *)&dword_140404A6C[284024569])     /* 183F7C650 */
#define g_183F7C660                      (*(_OWORD *)&dword_140404A6C[284024573])     /* 183F7C660 */
#define g_183F7C670                      (*(_OWORD *)&dword_140404A6C[284024577])     /* 183F7C670 */
#define g_183F7C680                      (*(_OWORD *)&dword_140404A6C[284024581])     /* 183F7C680 */
#define g_183F7C690                      (*(_OWORD *)&dword_140404A6C[284024585])     /* 183F7C690 */
#define g_183F7C6A0                      (*(_OWORD *)&dword_140404A6C[284024589])     /* 183F7C6A0 */
#define g_183F7C6B0                      dword_140404A6C[284024593]                   /* 183F7C6B0 */
#define g_183F7C6B4                      dword_140404A6C[284024594]                   /* 183F7C6B4 */
#define g_183F7C6B8                      dword_140404A6C[284024595]                   /* 183F7C6B8 */
#define g_183F7C6C0                      (*(float *)&dword_140404A6C[284024597])      /* 183F7C6C0 */
#define g_183F7C6C4                      (*(float *)&dword_140404A6C[284024598])      /* 183F7C6C4 */
#define g_183F7C6C8                      (*(float *)&dword_140404A6C[284024599])      /* 183F7C6C8 */
#define g_183F7C6CC                      (*(float *)&dword_140404A6C[284024600])      /* 183F7C6CC */
#define g_183F7C6D0                      (*(_OWORD *)&dword_140404A6C[284024601])     /* 183F7C6D0 */
#define g_183F7C6E0                      (*(_OWORD *)&dword_140404A6C[284024605])     /* 183F7C6E0 */
#define g_183F7C6F0                      (*(_OWORD *)&dword_140404A6C[284024609])     /* 183F7C6F0 */
#define g_183F7C700                      (*(_OWORD *)&dword_140404A6C[284024613])     /* 183F7C700 */
#define g_183F7C710                      (*(_OWORD *)&dword_140404A6C[284024617])     /* 183F7C710 */
#define g_183F7C720                      (*(_OWORD *)&dword_140404A6C[284024621])     /* 183F7C720 */
#define g_183F7C730                      (*(_OWORD *)&dword_140404A6C[284024625])     /* 183F7C730 */
#define g_183F7C740                      (*(_OWORD *)&dword_140404A6C[284024629])     /* 183F7C740 */
#define g_183F7C750                      dword_140404A6C[284024633]                   /* 183F7C750 */
#define g_183F7C754                      dword_140404A6C[284024634]                   /* 183F7C754 */
#define g_183F7C758                      dword_140404A6C[284024635]                   /* 183F7C758 */
#define g_183F7C760                      dword_140404A6C[284024637]                   /* 183F7C760 */
#define g_183F7C764                      dword_140404A6C[284024638]                   /* 183F7C764 */
#define g_183F7C768                      dword_140404A6C[284024639]                   /* 183F7C768 */
#define g_183F7C76C                      dword_140404A6C[284024640]                   /* 183F7C76C */
#define g_183F7C770                      dword_140404A6C[284024641]                   /* 183F7C770 */
#define g_183F7C774                      dword_140404A6C[284024642]                   /* 183F7C774 */
#define g_183F7C77C                      dword_140404A6C[284024644]                   /* 183F7C77C */
#define g_183F7C780                      dword_140404A6C[284024645]                   /* 183F7C780 */
#define g_183F7C784                      dword_140404A6C[284024646]                   /* 183F7C784 */
#define g_183F7C788                      dword_140404A6C[284024647]                   /* 183F7C788 */
#define g_183F7C78C                      dword_140404A6C[284024648]                   /* 183F7C78C */
#define g_183F7C798                      dword_140404A6C[284024651]                   /* 183F7C798 */
#define g_183F7C79C                      dword_140404A6C[284024652]                   /* 183F7C79C */
#define g_183F7C7A0                      dword_140404A6C[284024653]                   /* 183F7C7A0 */
#define g_183F7C7A8                      dword_140404A6C[284024655]                   /* 183F7C7A8 */
#define g_183F7C7AC                      dword_140404A6C[284024656]                   /* 183F7C7AC */
#define g_183F7C7B8                      dword_140404A6C[284024659]                   /* 183F7C7B8 */
#define g_183F7C7BC                      dword_140404A6C[284024660]                   /* 183F7C7BC */
#define g_183F7C7C0                      dword_140404A6C[284024661]                   /* 183F7C7C0 */
#define g_183F7C960                      dword_140404A6C[284024765]                   /* 183F7C960 */
#define g_183F7C964                      dword_140404A6C[284024766]                   /* 183F7C964 */
#define g_183F7C968                      dword_140404A6C[284024767]                   /* 183F7C968 */
#define g_183F7C96C                      dword_140404A6C[284024768]                   /* 183F7C96C */
#define g_183F7C970                      dword_140404A6C[284024769]                   /* 183F7C970 */
#define g_183F7C974                      dword_140404A6C[284024770]                   /* 183F7C974 */
#define g_183F7C978                      dword_140404A6C[284024771]                   /* 183F7C978 */
#define g_183F7C97C                      dword_140404A6C[284024772]                   /* 183F7C97C */
#define g_183F7C980                      dword_140404A6C[284024773]                   /* 183F7C980 */
#define g_183F7C984                      dword_140404A6C[284024774]                   /* 183F7C984 */
#define g_183F7C988                      dword_140404A6C[284024775]                   /* 183F7C988 */
#define g_183F7C98C                      dword_140404A6C[284024776]                   /* 183F7C98C */
#define g_183F7C994                      dword_140404A6C[284024778]                   /* 183F7C994 */
#define g_183F7C998                      dword_140404A6C[284024779]                   /* 183F7C998 */
#define g_183F7C99C                      dword_140404A6C[284024780]                   /* 183F7C99C */
#define g_183F7C9A0                      dword_140404A6C[284024781]                   /* 183F7C9A0 */
#define g_183F7C9A8                      dword_140404A6C[284024783]                   /* 183F7C9A8 */
#define g_183F7C9AC                      dword_140404A6C[284024784]                   /* 183F7C9AC */
#define g_183F7C9B8                      dword_140404A6C[284024787]                   /* 183F7C9B8 */
#define g_183F7C9BC                      dword_140404A6C[284024788]                   /* 183F7C9BC */
#define g_183F7C9C0                      dword_140404A6C[284024789]                   /* 183F7C9C0 */
#define g_183F7CA40                      dword_140404A6C[284024821]                   /* 183F7CA40 */
#define g_183F7CB60                      dword_140404A6C[284024893]                   /* 183F7CB60 */
#define g_183F7CB80                      (*(_QWORD *)&dword_140404A6C[284024901])     /* 183F7CB80 */
#define g_183F7CBC0                      (*(_OWORD *)&dword_140404A6C[284024917])     /* 183F7CBC0 */
#define g_183F7CBD0                      dword_140404A6C[284024921]                   /* 183F7CBD0 */
#define g_183F7CBD4                      dword_140404A6C[284024922]                   /* 183F7CBD4 */
#define g_183F7CBEC                      dword_140404A6C[284024928]                   /* 183F7CBEC */
#define g_183F7CBF0                      dword_140404A6C[284024929]                   /* 183F7CBF0 */
#define g_183F7CBF4                      dword_140404A6C[284024930]                   /* 183F7CBF4 */
#define g_183F7CC00                      dword_140404A6C[284024933]                   /* 183F7CC00 */
#define g_183F7CC38                      dword_140404A6C[284024947]                   /* 183F7CC38 */
#define g_183F7CCDC                      dword_140404A6C[284024988]                   /* 183F7CCDC */
#define g_18402CC00                      dword_140404A6C[284205157]                   /* 18402CC00 */
#define g_18402CC20                      dword_140404A6C[284205165]                   /* 18402CC20 */
#define game_spin_angle                  (*(float *)&dword_140404A6C[284205197])      /* 18402CCA0 src/engine/frame.h */
#define g_18402CCC0                      dword_140404A6C[284205205]                   /* 18402CCC0 */
#define g_18406CD00                      dword_140404A6C[284270757]                   /* 18406CD00 */
#define g_18416CD04                      dword_140404A6C[284532902]                   /* 18416CD04 */
#define g_184178D00                      (*(_QWORD *)&dword_140404A6C[284545189])     /* 184178D00 */
#define g_184178D08                      (*(float *)&dword_140404A6C[284545191])      /* 184178D08 */
#define g_184178D0C                      (*(float *)&dword_140404A6C[284545192])      /* 184178D0C */
#define g_184178D40                      (*(float *)&dword_140404A6C[284545205])      /* 184178D40 */
#define g_184178D44                      (*(float *)&dword_140404A6C[284545206])      /* 184178D44 */
#define g_184178D48                      (*(float *)&dword_140404A6C[284545207])      /* 184178D48 */
#define g_184178D50                      (*(float *)&dword_140404A6C[284545209])      /* 184178D50 */
#define g_184178D54                      (*(float *)&dword_140404A6C[284545210])      /* 184178D54 */
#define g_184178D58                      (*(float *)&dword_140404A6C[284545211])      /* 184178D58 */
#define g_184178D60                      dword_140404A6C[284545213]                   /* 184178D60 */
#define g_184178D6C                      (*(float *)&dword_140404A6C[284545216])      /* 184178D6C */
#define g_184178D70                      (*(float *)&dword_140404A6C[284545217])      /* 184178D70 */
#define g_184178D74                      (*(float *)&dword_140404A6C[284545218])      /* 184178D74 */
#define g_184178E38                      (*(float *)&dword_140404A6C[284545267])      /* 184178E38 */
#define g_184178E3C                      (*(float *)&dword_140404A6C[284545268])      /* 184178E3C */
#define g_184178E40                      (*(float *)&dword_140404A6C[284545269])      /* 184178E40 */
#define g_184178E44                      (*(float *)&dword_140404A6C[284545270])      /* 184178E44 */
#define g_184178E48                      (*(float *)&dword_140404A6C[284545271])      /* 184178E48 */
#define g_184178E4C                      (*(float *)&dword_140404A6C[284545272])      /* 184178E4C */
#define g_18417DE78                      (*(float *)&dword_140404A6C[284550403])      /* 18417DE78 */
#define g_18417DE7C                      (*(float *)&dword_140404A6C[284550404])      /* 18417DE7C */
#define g_18417DE80                      (*(float *)&dword_140404A6C[284550405])      /* 18417DE80 */
#define g_18417DE84                      dword_140404A6C[284550406]                   /* 18417DE84 */
#define g_18417E1B4                      dword_140404A6C[284550610]                   /* 18417E1B4 */
#define g_18417E1B8                      dword_140404A6C[284550611]                   /* 18417E1B8 */
#define g_1841821B8                      dword_140404A6C[284554707]                   /* 1841821B8 */
#define g_1841821C8                      dword_140404A6C[284554711]                   /* 1841821C8 */
#define g_184182220                      dword_140404A6C[284554733]                   /* 184182220 */
#define g_1841FA1C8                      (*(float *)&dword_140404A6C[284677591])      /* 1841FA1C8 */
#define g_1841FA1CC                      (*(float *)&dword_140404A6C[284677592])      /* 1841FA1CC */
#define g_1841FA1D0                      (*(float *)&dword_140404A6C[284677593])      /* 1841FA1D0 */
#define g_1841FA1E0                      dword_140404A6C[284677597]                   /* 1841FA1E0 */
#define g_1841FA224                      dword_140404A6C[284677614]                   /* 1841FA224 */
#define g_1841FA228                      dword_140404A6C[284677615]                   /* 1841FA228 */
#define g_1841FA22C                      dword_140404A6C[284677616]                   /* 1841FA22C */
#define g_1841FA230                      dword_140404A6C[284677617]                   /* 1841FA230 */
#define g_1841FA234                      dword_140404A6C[284677618]                   /* 1841FA234 */
#define g_1841FA238                      dword_140404A6C[284677619]                   /* 1841FA238 */
#define g_1841FA23C                      dword_140404A6C[284677620]                   /* 1841FA23C */
#define g_1841FA264                      dword_140404A6C[284677630]                   /* 1841FA264 */
#define g_18430A54C                      dword_140404A6C[284956344]                   /* 18430A54C */
#define g_18430A550                      dword_140404A6C[284956345]                   /* 18430A550 */
#define g_18430A554                      dword_140404A6C[284956346]                   /* 18430A554 */
#define g_18430A558                      dword_140404A6C[284956347]                   /* 18430A558 */
#define g_18430A55C                      dword_140404A6C[284956348]                   /* 18430A55C */
#define g_18430A560                      dword_140404A6C[284956349]                   /* 18430A560 */
#define g_18430A564                      dword_140404A6C[284956350]                   /* 18430A564 */
#define g_18430A568                      dword_140404A6C[284956351]                   /* 18430A568 */
#define g_18430A56C                      dword_140404A6C[284956352]                   /* 18430A56C */
#define g_18430A570                      dword_140404A6C[284956353]                   /* 18430A570 */
#define g_18430A574                      dword_140404A6C[284956354]                   /* 18430A574 */
#define g_18430A578                      dword_140404A6C[284956355]                   /* 18430A578 */
#define g_18430A5D0                      dword_140404A6C[284956377]                   /* 18430A5D0 */
#define g_18430A654                      dword_140404A6C[284956410]                   /* 18430A654 */
#define g_18430A668                      dword_140404A6C[284956415]                   /* 18430A668 */
#define g_184360530                      dword_140404A6C[285044401]                   /* 184360530 */
#define g_184360538                      dword_140404A6C[285044403]                   /* 184360538 */
#define g_184360550                      dword_140404A6C[285044409]                   /* 184360550 */
#define g_184386D30                      dword_140404A6C[285083825]                   /* 184386D30 */
#define g_184386D38                      dword_140404A6C[285083827]                   /* 184386D38 */
#define g_184393D30                      dword_140404A6C[285097137]                   /* 184393D30 */
#define g_184393D40                      dword_140404A6C[285097141]                   /* 184393D40 */
#define g_184393DA0                      dword_140404A6C[285097165]                   /* 184393DA0 */
#define g_184393DA8                      dword_140404A6C[285097167]                   /* 184393DA8 */
#define g_184393F30                      dword_140404A6C[285097265]                   /* 184393F30 */
#define g_184394120                      dword_140404A6C[285097389]                   /* 184394120 */
#define g_184394310                      dword_140404A6C[285097513]                   /* 184394310 */
#define g_184394500                      dword_140404A6C[285097637]                   /* 184394500 */
#define g_1843946F0                      dword_140404A6C[285097761]                   /* 1843946F0 */
#define g_1843948E0                      dword_140404A6C[285097885]                   /* 1843948E0 */
#define g_184394AD0                      dword_140404A6C[285098009]                   /* 184394AD0 */
#define g_184394CC0                      dword_140404A6C[285098133]                   /* 184394CC0 */
#define g_184394EB0                      dword_140404A6C[285098257]                   /* 184394EB0 */
#define g_1843950A0                      dword_140404A6C[285098381]                   /* 1843950A0 */
#define g_184395290                      dword_140404A6C[285098505]                   /* 184395290 */
#define g_184395480                      dword_140404A6C[285098629]                   /* 184395480 */
#define g_184395670                      dword_140404A6C[285098753]                   /* 184395670 */
#define g_184395860                      dword_140404A6C[285098877]                   /* 184395860 */
#define g_184395A50                      dword_140404A6C[285099001]                   /* 184395A50 */
#define g_184395C40                      dword_140404A6C[285099125]                   /* 184395C40 */
#define g_184395E30                      dword_140404A6C[285099249]                   /* 184395E30 */
#define g_184396020                      dword_140404A6C[285099373]                   /* 184396020 */
#define g_184396210                      dword_140404A6C[285099497]                   /* 184396210 */
#define g_184396400                      dword_140404A6C[285099621]                   /* 184396400 */
#define g_1843965F0                      dword_140404A6C[285099745]                   /* 1843965F0 */
#define g_1843967E0                      dword_140404A6C[285099869]                   /* 1843967E0 */
#define g_1843969D0                      dword_140404A6C[285099993]                   /* 1843969D0 */
#define g_184396BC0                      dword_140404A6C[285100117]                   /* 184396BC0 */
#define g_184396DB0                      dword_140404A6C[285100241]                   /* 184396DB0 */
#define g_184396FA0                      dword_140404A6C[285100365]                   /* 184396FA0 */
#define g_184397190                      dword_140404A6C[285100489]                   /* 184397190 */
#define g_184397380                      dword_140404A6C[285100613]                   /* 184397380 */
#define g_184397570                      dword_140404A6C[285100737]                   /* 184397570 */
#define g_184397760                      dword_140404A6C[285100861]                   /* 184397760 */
#define g_184397950                      dword_140404A6C[285100985]                   /* 184397950 */
#define g_184397B40                      dword_140404A6C[285101109]                   /* 184397B40 */
#define g_184397B5C                      (*(float *)&dword_140404A6C[285101116])      /* 184397B5C */
#define g_184397B64                      (*(float *)&dword_140404A6C[285101118])      /* 184397B64 */
#define g_184397B68                      (*(float *)&dword_140404A6C[285101119])      /* 184397B68 */
#define g_184397B6C                      (*(float *)&dword_140404A6C[285101120])      /* 184397B6C */
#define g_184397B70                      (*(float *)&dword_140404A6C[285101121])      /* 184397B70 */
#define g_184397BA0                      dword_140404A6C[285101133]                   /* 184397BA0 */
#define g_184397BA4                      dword_140404A6C[285101134]                   /* 184397BA4 */
#define g_184397BA8                      dword_140404A6C[285101135]                   /* 184397BA8 */
#define g_184397C20                      dword_140404A6C[285101165]                   /* 184397C20 */
#define g_184397CA4                      dword_140404A6C[285101198]                   /* 184397CA4 */
#define g_184397D30                      dword_140404A6C[285101233]                   /* 184397D30 */
#define g_184397F20                      dword_140404A6C[285101357]                   /* 184397F20 */
#define g_184398110                      dword_140404A6C[285101481]                   /* 184398110 */
#define g_184398300                      dword_140404A6C[285101605]                   /* 184398300 */
#define g_1843984F0                      dword_140404A6C[285101729]                   /* 1843984F0 */
#define g_1843986E0                      dword_140404A6C[285101853]                   /* 1843986E0 */
#define g_1843988D0                      dword_140404A6C[285101977]                   /* 1843988D0 */
#define g_184398AC0                      dword_140404A6C[285102101]                   /* 184398AC0 */
#define g_184398CB0                      dword_140404A6C[285102225]                   /* 184398CB0 */
#define g_184398EA0                      dword_140404A6C[285102349]                   /* 184398EA0 */
#define g_184399090                      dword_140404A6C[285102473]                   /* 184399090 */
#define g_184399280                      dword_140404A6C[285102597]                   /* 184399280 */
#define g_184399470                      dword_140404A6C[285102721]                   /* 184399470 */
#define g_184399660                      dword_140404A6C[285102845]                   /* 184399660 */
#define g_184399850                      dword_140404A6C[285102969]                   /* 184399850 */
#define g_184399A40                      dword_140404A6C[285103093]                   /* 184399A40 */
#define g_184399C30                      dword_140404A6C[285103217]                   /* 184399C30 */
#define g_184399E20                      dword_140404A6C[285103341]                   /* 184399E20 */
#define g_18439A010                      dword_140404A6C[285103465]                   /* 18439A010 */
#define g_18439A200                      dword_140404A6C[285103589]                   /* 18439A200 */
#define g_18439A3F0                      dword_140404A6C[285103713]                   /* 18439A3F0 */
#define g_18439A5E0                      dword_140404A6C[285103837]                   /* 18439A5E0 */
#define g_18439A7D0                      dword_140404A6C[285103961]                   /* 18439A7D0 */
#define g_18439A9C0                      dword_140404A6C[285104085]                   /* 18439A9C0 */
#define g_18439ABB0                      dword_140404A6C[285104209]                   /* 18439ABB0 */
#define g_18439ADA0                      dword_140404A6C[285104333]                   /* 18439ADA0 */
#define g_18439AF90                      dword_140404A6C[285104457]                   /* 18439AF90 */
#define g_18439B180                      dword_140404A6C[285104581]                   /* 18439B180 */
#define g_18439B370                      dword_140404A6C[285104705]                   /* 18439B370 */
#define g_18439B560                      dword_140404A6C[285104829]                   /* 18439B560 */
#define g_18439B750                      dword_140404A6C[285104953]                   /* 18439B750 */
#define g_18439BB60                      dword_140404A6C[285105213]                   /* 18439BB60 */
#define g_18539D3A0                      dword_140404A6C[289301069]                   /* 18539D3A0 */
#define g_18539D3A4                      dword_140404A6C[289301070]                   /* 18539D3A4 */
#define g_18539D3A8                      dword_140404A6C[289301071]                   /* 18539D3A8 */
#define g_18539D3C4                      dword_140404A6C[289301078]                   /* 18539D3C4 */
#define g_18539D3C8                      dword_140404A6C[289301079]                   /* 18539D3C8 */
#define g_18539D3E4                      dword_140404A6C[289301086]                   /* 18539D3E4 */
#define g_18539D3E8                      dword_140404A6C[289301087]                   /* 18539D3E8 */
#define g_18539D3F4                      dword_140404A6C[289301090]                   /* 18539D3F4 */
#define g_18539D3F8                      dword_140404A6C[289301091]                   /* 18539D3F8 */
#define packet_out_byte                  dword_140404A6C[289301092]                   /* 18539D3FC write position of the outgoing packet (bit writer) */
#define packet_out_bit                   dword_140404A6C[289301093]                   /* 18539D400 bit within packet_out_byte */
#define packet_out_data                  dword_140404A6C[289301094]                   /* 18539D404 */
#define g_18539D408                      dword_140404A6C[289301095]                   /* 18539D408 */
#define g_18539D40C                      dword_140404A6C[289301096]                   /* 18539D40C */
#define g_18539D410                      dword_140404A6C[289301097]                   /* 18539D410 */
#define g_18539D414                      dword_140404A6C[289301098]                   /* 18539D414 */
#define g_1853AD404                      dword_140404A6C[289317478]                   /* 1853AD404 */
#define g_1853AD408                      dword_140404A6C[289317479]                   /* 1853AD408 */
#define g_1853AD410                      (*(_QWORD *)&dword_140404A6C[289317481])     /* 1853AD410 */
#define packet_in_length                 dword_140404A6C[289317483]                   /* 1853AD418 bytes in the incoming packet */
#define packet_in_byte                   dword_140404A6C[289317484]                   /* 1853AD41C read position of the incoming packet (bit reader) */
#define packet_in_bit                    dword_140404A6C[289317485]                   /* 1853AD420 bit within packet_in_byte */
#define packet_in_data                   dword_140404A6C[289317486]                   /* 1853AD424 */
#define g_1853AD42C                      dword_140404A6C[289317488]                   /* 1853AD42C */
#define g_1853AD434                      dword_140404A6C[289317490]                   /* 1853AD434 */
#define g_1853BD424                      dword_140404A6C[289333870]                   /* 1853BD424 */
#define g_1853BD428                      dword_140404A6C[289333871]                   /* 1853BD428 */
#define g_1853BD42C                      dword_140404A6C[289333872]                   /* 1853BD42C */
#define g_1857BD740                      dword_140404A6C[290382645]                   /* 1857BD740 */
#define g_1857BD744                      dword_140404A6C[290382646]                   /* 1857BD744 */
#define g_1857BD750                      dword_140404A6C[290382649]                   /* 1857BD750 */
#define g_1857BD75C                      dword_140404A6C[290382652]                   /* 1857BD75C */
#define g_1857BD79C                      dword_140404A6C[290382668]                   /* 1857BD79C */
#define g_185A2D740                      dword_140404A6C[291021621]                   /* 185A2D740 */
#define g_185A2D744                      dword_140404A6C[291021622]                   /* 185A2D744 */
#define g_185A2D7E0                      dword_140404A6C[291021661]                   /* 185A2D7E0 */
#define g_185A2D7E4                      (*(_QWORD *)&dword_140404A6C[291021662])     /* 185A2D7E4 */
#define g_185A2D7E8                      dword_140404A6C[291021663]                   /* 185A2D7E8 */
#define g_185A2D7EC                      dword_140404A6C[291021664]                   /* 185A2D7EC */
#define g_185A2D7F0                      dword_140404A6C[291021665]                   /* 185A2D7F0 */
#define g_185A2D7F4                      dword_140404A6C[291021666]                   /* 185A2D7F4 */
#define g_185A2D7F8                      dword_140404A6C[291021667]                   /* 185A2D7F8 */
#define g_18622DFE0                      dword_140404A6C[293119325]                   /* 18622DFE0 */
#define g_18622DFE4                      dword_140404A6C[293119326]                   /* 18622DFE4 */
#define g_1862AE000                      (*(_QWORD *)&dword_140404A6C[293250405])     /* 1862AE000 */
#define g_1862AE008                      (*(_QWORD *)&dword_140404A6C[293250407])     /* 1862AE008 */
#define g_1862AE010                      dword_140404A6C[293250409]                   /* 1862AE010 */
#define g_1862AE020                      dword_140404A6C[293250413]                   /* 1862AE020 */
#define g_1862AE024                      dword_140404A6C[293250414]                   /* 1862AE024 */
#define g_1862AE028                      dword_140404A6C[293250415]                   /* 1862AE028 */
#define g_1863AE028                      dword_140404A6C[293512559]                   /* 1863AE028 */
#define g_1863AE140                      (*(_QWORD *)&dword_140404A6C[293512629])     /* 1863AE140 */
#define g_1863AE148                      dword_140404A6C[293512631]                   /* 1863AE148 */
#define g_1863AE154                      dword_140404A6C[293512634]                   /* 1863AE154 */
#define g_1863AE158                      dword_140404A6C[293512635]                   /* 1863AE158 */
#define g_1863AE15C                      dword_140404A6C[293512636]                   /* 1863AE15C */
#define g_1863AE160                      dword_140404A6C[293512637]                   /* 1863AE160 */
#define g_1873DE440                      dword_140404A6C[297756277]                   /* 1873DE440 */
#define g_1873DE460                      dword_140404A6C[297756285]                   /* 1873DE460 */
#define g_1873DE464                      dword_140404A6C[297756286]                   /* 1873DE464 */
#define g_1873DE468                      dword_140404A6C[297756287]                   /* 1873DE468 */
#define g_1873DE46C                      dword_140404A6C[297756288]                   /* 1873DE46C */
#define g_1873DE470                      dword_140404A6C[297756289]                   /* 1873DE470 */
#define g_1873DE474                      dword_140404A6C[297756290]                   /* 1873DE474 */
#define g_1873DE478                      dword_140404A6C[297756291]                   /* 1873DE478 */
#define g_1873DE47C                      dword_140404A6C[297756292]                   /* 1873DE47C */
#define g_1873DE480                      dword_140404A6C[297756293]                   /* 1873DE480 */
#define g_1873DE484                      dword_140404A6C[297756294]                   /* 1873DE484 */
#define g_1873DE488                      dword_140404A6C[297756295]                   /* 1873DE488 */
#define g_1873DE48C                      dword_140404A6C[297756296]                   /* 1873DE48C */
#define g_1873DE490                      dword_140404A6C[297756297]                   /* 1873DE490 */
#define g_1873DE494                      dword_140404A6C[297756298]                   /* 1873DE494 */
#define g_1873DE4A0                      dword_140404A6C[297756301]                   /* 1873DE4A0 */
#define g_1873DE4A8                      dword_140404A6C[297756303]                   /* 1873DE4A8 */
#define g_1873DE4AC                      dword_140404A6C[297756304]                   /* 1873DE4AC */
#define g_1873DE4B0                      dword_140404A6C[297756305]                   /* 1873DE4B0 */
#define g_1873DE4B8                      dword_140404A6C[297756307]                   /* 1873DE4B8 */
#define g_1873DE4BC                      dword_140404A6C[297756308]                   /* 1873DE4BC */
#define g_1873DE4C0                      dword_140404A6C[297756309]                   /* 1873DE4C0 */
#define g_1873DE4D0                      dword_140404A6C[297756313]                   /* 1873DE4D0 */
#define g_187BDE460                      (*(_QWORD *)&dword_140404A6C[299853437])     /* 187BDE460 */
#define g_187BDE660                      dword_140404A6C[299853565]                   /* 187BDE660 */
#define g_187BDE6A0                      dword_140404A6C[299853581]                   /* 187BDE6A0 */
#define g_187BDE868                      dword_140404A6C[299853695]                   /* 187BDE868 */
#define g_187BDE86C                      dword_140404A6C[299853696]                   /* 187BDE86C */
#define g_187BDE874                      dword_140404A6C[299853698]                   /* 187BDE874 */
#define g_187BDE878                      dword_140404A6C[299853699]                   /* 187BDE878 */
#define g_187BDE87C                      dword_140404A6C[299853700]                   /* 187BDE87C */
#define g_187BDE880                      dword_140404A6C[299853701]                   /* 187BDE880 */
#define g_187BDE884                      dword_140404A6C[299853702]                   /* 187BDE884 */
#define g_187BDE888                      dword_140404A6C[299853703]                   /* 187BDE888 */
#define g_187BDE88C                      dword_140404A6C[299853704]                   /* 187BDE88C */
#define g_187BDE974                      dword_140404A6C[299853762]                   /* 187BDE974 */
#define g_187BDE978                      dword_140404A6C[299853763]                   /* 187BDE978 */
#define g_187BDE97C                      dword_140404A6C[299853764]                   /* 187BDE97C */
#define g_187BDE980                      dword_140404A6C[299853765]                   /* 187BDE980 */
#define g_187BDE984                      dword_140404A6C[299853766]                   /* 187BDE984 */
#define g_187BDE988                      dword_140404A6C[299853767]                   /* 187BDE988 */
#define g_187BDE98C                      dword_140404A6C[299853768]                   /* 187BDE98C */
#define g_187BDE990                      dword_140404A6C[299853769]                   /* 187BDE990 */
#define g_187BDF274                      dword_140404A6C[299854338]                   /* 187BDF274 */
#define g_187BDFA74                      dword_140404A6C[299854850]                   /* 187BDFA74 */
#define g_187BE0274                      dword_140404A6C[299855362]                   /* 187BE0274 */
#define g_187BE0A74                      dword_140404A6C[299855874]                   /* 187BE0A74 */
#define g_187BE1274                      dword_140404A6C[299856386]                   /* 187BE1274 */
#define g_187BE1A74                      dword_140404A6C[299856898]                   /* 187BE1A74 */
#define g_187BE2274                      dword_140404A6C[299857410]                   /* 187BE2274 */
#define g_189BFFC60                      dword_140404A6C[308276349]                   /* 189BFFC60 */
#define g_189BFFC70                      dword_140404A6C[308276353]                   /* 189BFFC70 */
#define g_189C003E0                      dword_140404A6C[308276829]                   /* 189C003E0 */
#define g_189C1DC60                      dword_140404A6C[308307069]                   /* 189C1DC60 */
#define world_event_count                dword_140404A6C[308307070]                   /* 189C1DC64 src/engine/world.h */
#define g_189C1DC80                      dword_140404A6C[308307077]                   /* 189C1DC80 */
#define g_189C1DC88                      dword_140404A6C[308307079]                   /* 189C1DC88 */
#define g_189C1DC90                      dword_140404A6C[308307081]                   /* 189C1DC90 */
#define g_189C1DC94                      dword_140404A6C[308307082]                   /* 189C1DC94 */
#define g_189C1DCA4                      dword_140404A6C[308307086]                   /* 189C1DCA4 */
#define g_189C1DCB8                      dword_140404A6C[308307091]                   /* 189C1DCB8 */
#define g_189C3BCB8                      dword_140404A6C[308337811]                   /* 189C3BCB8 */
#define g_189C3BCC0                      dword_140404A6C[308337813]                   /* 189C3BCC0 */
#define g_189C3BCC4                      dword_140404A6C[308337814]                   /* 189C3BCC4 */
#define g_189C3C6C0                      dword_140404A6C[308338453]                   /* 189C3C6C0 */
#define g_189C7BEC4                      dword_140404A6C[308403478]                   /* 189C7BEC4 */
#define g_189CDA108                      dword_140404A6C[308499879]                   /* 189CDA108 */
#define g_189D3834C                      dword_140404A6C[308596280]                   /* 189D3834C */
#define g_189D96590                      dword_140404A6C[308692681]                   /* 189D96590 */
#define g_189DF47D4                      dword_140404A6C[308789082]                   /* 189DF47D4 */
#define g_189E52A18                      dword_140404A6C[308885483]                   /* 189E52A18 */
#define g_189EB0C5C                      dword_140404A6C[308981884]                   /* 189EB0C5C */
#define game_unknown_189f0eea0           dword_140404A6C[309078285]                   /* 189F0EEA0 src/engine/frame.h */
#define g_189F0EEA4                      dword_140404A6C[309078286]                   /* 189F0EEA4 */
#define g_189F0EEA8                      dword_140404A6C[309078287]                   /* 189F0EEA8 */
#define g_189F0EEDC                      (*(float *)&dword_140404A6C[309078300])      /* 189F0EEDC */
#define g_189F0EEE0                      (*(float *)&dword_140404A6C[309078301])      /* 189F0EEE0 */
#define g_189F0EEE4                      (*(float *)&dword_140404A6C[309078302])      /* 189F0EEE4 */
#define g_189F0EEE8                      dword_140404A6C[309078303]                   /* 189F0EEE8 */
#define g_189F0EEEC                      dword_140404A6C[309078304]                   /* 189F0EEEC */
#define g_189F0EEF0                      dword_140404A6C[309078305]                   /* 189F0EEF0 */
#define g_189F0EEF4                      dword_140404A6C[309078306]                   /* 189F0EEF4 */
#define g_189F0EEF8                      dword_140404A6C[309078307]                   /* 189F0EEF8 */
#define g_189F0EEFC                      dword_140404A6C[309078308]                   /* 189F0EEFC */
#define g_189F0EF00                      dword_140404A6C[309078309]                   /* 189F0EF00 */
#define g_189F0EF04                      dword_140404A6C[309078310]                   /* 189F0EF04 */
#define g_189F0EF08                      dword_140404A6C[309078311]                   /* 189F0EF08 */
#define g_189F0EF0C                      dword_140404A6C[309078312]                   /* 189F0EF0C */
#define g_189F0EF10                      dword_140404A6C[309078313]                   /* 189F0EF10 */
#define g_189F0EF14                      dword_140404A6C[309078314]                   /* 189F0EF14 */
#define g_189F0EF18                      dword_140404A6C[309078315]                   /* 189F0EF18 */
#define g_189F0EF1C                      dword_140404A6C[309078316]                   /* 189F0EF1C */
#define g_189F0EF20                      dword_140404A6C[309078317]                   /* 189F0EF20 */
#define g_189F0EF24                      dword_140404A6C[309078318]                   /* 189F0EF24 */
#define g_189F0EF28                      dword_140404A6C[309078319]                   /* 189F0EF28 */
#define g_189F0EF2C                      dword_140404A6C[309078320]                   /* 189F0EF2C */
#define g_189F0EF30                      dword_140404A6C[309078321]                   /* 189F0EF30 */
#define g_189F0EF44                      dword_140404A6C[309078326]                   /* 189F0EF44 */
#define g_189F0EF48                      dword_140404A6C[309078327]                   /* 189F0EF48 */
#define g_189F0EF4C                      dword_140404A6C[309078328]                   /* 189F0EF4C */
#define g_189F0EF50                      dword_140404A6C[309078329]                   /* 189F0EF50 */
#define g_189F0EF54                      dword_140404A6C[309078330]                   /* 189F0EF54 */
#define g_189F0EF58                      dword_140404A6C[309078331]                   /* 189F0EF58 */
#define g_189F0EF5C                      dword_140404A6C[309078332]                   /* 189F0EF5C */
#define g_189F0EF60                      dword_140404A6C[309078333]                   /* 189F0EF60 */
#define g_189F0EF64                      dword_140404A6C[309078334]                   /* 189F0EF64 */
#define g_189F0EF68                      dword_140404A6C[309078335]                   /* 189F0EF68 */
#define g_189F0EF6C                      dword_140404A6C[309078336]                   /* 189F0EF6C */
#define g_189F0EF8C                      dword_140404A6C[309078344]                   /* 189F0EF8C */
#define g_189F0EF94                      dword_140404A6C[309078346]                   /* 189F0EF94 */
#define g_189F0EF98                      dword_140404A6C[309078347]                   /* 189F0EF98 */
#define g_189F0EF9C                      dword_140404A6C[309078348]                   /* 189F0EF9C */
#define g_189F0EFA0                      dword_140404A6C[309078349]                   /* 189F0EFA0 */
#define g_18AB10F98                      dword_140404A6C[312226123]                   /* 18AB10F98 */
#define g_18AB10F9C                      dword_140404A6C[312226124]                   /* 18AB10F9C */
#define g_18AB70F9C                      dword_140404A6C[312324428]                   /* 18AB70F9C */
#define g_18AB70FAC                      dword_140404A6C[312324432]                   /* 18AB70FAC */
#define g_18B772FB8                      dword_140404A6C[315472211]                   /* 18B772FB8 */
#define g_18B7D2FBC                      dword_140404A6C[315570516]                   /* 18B7D2FBC */
#define g_18B7D2FC8                      dword_140404A6C[315570519]                   /* 18B7D2FC8 */
#define g_18B7D2FCC                      dword_140404A6C[315570520]                   /* 18B7D2FCC */
#define g_18B7D2FDC                      dword_140404A6C[315570524]                   /* 18B7D2FDC */
#define g_18C3D4FDC                      dword_140404A6C[318718300]                   /* 18C3D4FDC */
#define g_18C434FDC                      dword_140404A6C[318816604]                   /* 18C434FDC */
#define g_18C434FEC                      dword_140404A6C[318816608]                   /* 18C434FEC */
#define g_18D096FFC                      dword_140404A6C[322062692]                   /* 18D096FFC */
#define g_18D09700C                      dword_140404A6C[322062696]                   /* 18D09700C */
#define g_18DCF901C                      dword_140404A6C[325308780]                   /* 18DCF901C */
#define g_18DCF902C                      dword_140404A6C[325308784]                   /* 18DCF902C */
#define g_18E95B03C                      dword_140404A6C[328554868]                   /* 18E95B03C */
#define g_18F5BD060                      dword_140404A6C[331800957]                   /* 18F5BD060 */
#define g_19021F080                      dword_140404A6C[335047045]                   /* 19021F080 */
#define g_19021F084                      dword_140404A6C[335047046]                   /* 19021F084 */
#define g_19021F088                      dword_140404A6C[335047047]                   /* 19021F088 */
#define g_19021F08C                      dword_140404A6C[335047048]                   /* 19021F08C */
#define g_19021F090                      dword_140404A6C[335047049]                   /* 19021F090 */
#define g_19021F094                      dword_140404A6C[335047050]                   /* 19021F094 */
#define g_19021F0C0                      dword_140404A6C[335047061]                   /* 19021F0C0 */
#define g_19021F0C4                      dword_140404A6C[335047062]                   /* 19021F0C4 */
#define g_19021F0CC                      dword_140404A6C[335047064]                   /* 19021F0CC */
#define g_19021F0D8                      dword_140404A6C[335047067]                   /* 19021F0D8 */
#define g_19021F0DC                      dword_140404A6C[335047068]                   /* 19021F0DC */
#define g_19021F0E4                      dword_140404A6C[335047070]                   /* 19021F0E4 */
#define g_19021F0F0                      dword_140404A6C[335047073]                   /* 19021F0F0 */
#define g_19021F0F4                      dword_140404A6C[335047074]                   /* 19021F0F4 */
#define g_19021F0FC                      dword_140404A6C[335047076]                   /* 19021F0FC */
#define g_19021F108                      dword_140404A6C[335047079]                   /* 19021F108 */
#define g_19021F10C                      dword_140404A6C[335047080]                   /* 19021F10C */
#define g_19021F114                      dword_140404A6C[335047082]                   /* 19021F114 */
#define g_19021F120                      dword_140404A6C[335047085]                   /* 19021F120 */
#define g_19021F124                      (*(float *)&dword_140404A6C[335047086])      /* 19021F124 */
#define g_19021F12C                      dword_140404A6C[335047088]                   /* 19021F12C */
#define g_19021F138                      dword_140404A6C[335047091]                   /* 19021F138 */
#define g_19021F13C                      (*(float *)&dword_140404A6C[335047092])      /* 19021F13C */
#define g_19021F144                      dword_140404A6C[335047094]                   /* 19021F144 */
#define g_19021F240                      dword_140404A6C[335047157]                   /* 19021F240 */
#define g_19021F244                      dword_140404A6C[335047158]                   /* 19021F244 */
#define g_19021F24C                      dword_140404A6C[335047160]                   /* 19021F24C */
#define g_19021F2C4                      dword_140404A6C[335047190]                   /* 19021F2C4 */
#define g_19028A428                      dword_140404A6C[335156847]                   /* 19028A428 */
#define g_19028A430                      dword_140404A6C[335156849]                   /* 19028A430 */
#define g_19028AC40                      dword_140404A6C[335157365]                   /* 19028AC40 */
#define g_19028AC4C                      dword_140404A6C[335157368]                   /* 19028AC4C */
#define g_19028AC50                      dword_140404A6C[335157369]                   /* 19028AC50 */
#define g_19028AC58                      dword_140404A6C[335157371]                   /* 19028AC58 */
#define g_19028BC50                      dword_140404A6C[335158393]                   /* 19028BC50 */
#define g_19028BC58                      dword_140404A6C[335158395]                   /* 19028BC58 */
#define g_19028EC5C                      dword_140404A6C[335161468]                   /* 19028EC5C */
#define g_19028EC60                      dword_140404A6C[335161469]                   /* 19028EC60 */
#define g_190291C58                      dword_140404A6C[335164539]                   /* 190291C58 */
#define g_190291C60                      dword_140404A6C[335164541]                   /* 190291C60 */
#define g_190291C68                      dword_140404A6C[335164543]                   /* 190291C68 */
#define g_190297C5C                      dword_140404A6C[335170684]                   /* 190297C5C */
#define g_190297C64                      dword_140404A6C[335170686]                   /* 190297C64 */
#define g_190297C68                      dword_140404A6C[335170687]                   /* 190297C68 */
#define g_19029AC60                      dword_140404A6C[335173757]                   /* 19029AC60 */
#define g_19029AC68                      dword_140404A6C[335173759]                   /* 19029AC68 */
#define g_19029AC6C                      dword_140404A6C[335173760]                   /* 19029AC6C */
#define g_19029AC70                      dword_140404A6C[335173761]                   /* 19029AC70 */
#define g_19029AC74                      dword_140404A6C[335173762]                   /* 19029AC74 */
#define g_19029AC78                      dword_140404A6C[335173763]                   /* 19029AC78 */
#define g_19029AC7C                      dword_140404A6C[335173764]                   /* 19029AC7C */
#define g_19029AC80                      dword_140404A6C[335173765]                   /* 19029AC80 */
#define g_19029AC84                      dword_140404A6C[335173766]                   /* 19029AC84 */
#define g_19029AC88                      dword_140404A6C[335173767]                   /* 19029AC88 */
#define g_19029AC8C                      dword_140404A6C[335173768]                   /* 19029AC8C */
#define g_19029AC90                      dword_140404A6C[335173769]                   /* 19029AC90 */
#define g_19029AC94                      dword_140404A6C[335173770]                   /* 19029AC94 */
#define g_19029AC98                      dword_140404A6C[335173771]                   /* 19029AC98 */
#define g_1902B4C64                      dword_140404A6C[335200382]                   /* 1902B4C64 */
#define g_1902B4C68                      dword_140404A6C[335200383]                   /* 1902B4C68 */
#define g_1902B4C6C                      dword_140404A6C[335200384]                   /* 1902B4C6C */
#define g_1902B4C70                      dword_140404A6C[335200385]                   /* 1902B4C70 */
#define g_1902B4C74                      dword_140404A6C[335200386]                   /* 1902B4C74 */
#define g_1902B4C78                      dword_140404A6C[335200387]                   /* 1902B4C78 */
#define g_1902B4C7C                      dword_140404A6C[335200388]                   /* 1902B4C7C */
#define g_1902B4C80                      dword_140404A6C[335200389]                   /* 1902B4C80 */
#define g_1902B4C84                      dword_140404A6C[335200390]                   /* 1902B4C84 */
#define g_1902B4C88                      dword_140404A6C[335200391]                   /* 1902B4C88 */
#define g_1902B4C8C                      dword_140404A6C[335200392]                   /* 1902B4C8C */
#define g_1902B4C90                      dword_140404A6C[335200393]                   /* 1902B4C90 */
#define g_1902B4C94                      dword_140404A6C[335200394]                   /* 1902B4C94 */
#define g_1902B4C98                      dword_140404A6C[335200395]                   /* 1902B4C98 */
#define g_1902B6668                      dword_140404A6C[335202047]                   /* 1902B6668 */
#define g_1902B666C                      dword_140404A6C[335202048]                   /* 1902B666C */
#define g_1902B6670                      dword_140404A6C[335202049]                   /* 1902B6670 */
#define g_1902B6674                      dword_140404A6C[335202050]                   /* 1902B6674 */
#define g_1902B6678                      dword_140404A6C[335202051]                   /* 1902B6678 */
#define g_1902B667C                      dword_140404A6C[335202052]                   /* 1902B667C */
#define g_1902B6684                      dword_140404A6C[335202054]                   /* 1902B6684 */
#define g_1902B66A0                      dword_140404A6C[335202061]                   /* 1902B66A0 */
#define g_1903F1E60                      dword_140404A6C[335525117]                   /* 1903F1E60 */
#define g_1903F1E68                      dword_140404A6C[335525119]                   /* 1903F1E68 */
#define g_1904C4F64                      dword_140404A6C[335741246]                   /* 1904C4F64 */
#define g_1904C6968                      dword_140404A6C[335742911]                   /* 1904C6968 */
#define g_1905A2DC8                      dword_140404A6C[335968471]                   /* 1905A2DC8 */
#define g_1905A2E60                      dword_140404A6C[335968509]                   /* 1905A2E60 */
#define g_192E8EC40                      dword_140404A6C[346695797]                   /* 192E8EC40 */
#define g_192E8EC44                      dword_140404A6C[346695798]                   /* 192E8EC44 */
#define g_192E8F444                      dword_140404A6C[346696310]                   /* 192E8F444 */
#define g_192E8F448                      dword_140404A6C[346696311]                   /* 192E8F448 */
#define g_192E8F44C                      dword_140404A6C[346696312]                   /* 192E8F44C */
#define g_192E8F450                      dword_140404A6C[346696313]                   /* 192E8F450 */
#define g_192E8F460                      dword_140404A6C[346696317]                   /* 192E8F460 */
#define g_192E8F660                      dword_140404A6C[346696445]                   /* 192E8F660 */
#define g_192E8F66C                      dword_140404A6C[346696448]                   /* 192E8F66C */
#define g_192E98E60                      dword_140404A6C[346706173]                   /* 192E98E60 */
#define g_192E98E6C                      dword_140404A6C[346706176]                   /* 192E98E6C */
#define g_192E98E80                      dword_140404A6C[346706181]                   /* 192E98E80 */
#define g_192E98E88                      dword_140404A6C[346706183]                   /* 192E98E88 */
#define g_192E9A680                      dword_140404A6C[346707717]                   /* 192E9A680 */
#define g_192E9A688                      dword_140404A6C[346707719]                   /* 192E9A688 */
#define g_192E9A694                      dword_140404A6C[346707722]                   /* 192E9A694 */
#define g_192E9A6B4                      dword_140404A6C[346707730]                   /* 192E9A6B4 */
#define g_192E9A6B8                      dword_140404A6C[346707731]                   /* 192E9A6B8 */
#define g_192E9A6C0                      dword_140404A6C[346707733]                   /* 192E9A6C0 */
#define g_192E9A6C8                      dword_140404A6C[346707735]                   /* 192E9A6C8 */
#define g_192E9A6CC                      dword_140404A6C[346707736]                   /* 192E9A6CC */
#define g_192E9A6D0                      dword_140404A6C[346707737]                   /* 192E9A6D0 */
#define g_192E9A6D4                      dword_140404A6C[346707738]                   /* 192E9A6D4 */
#define g_192E9ABC8                      dword_140404A6C[346708055]                   /* 192E9ABC8 */
#define g_192E9ABCC                      dword_140404A6C[346708056]                   /* 192E9ABCC */
#define g_192E9ABD0                      dword_140404A6C[346708057]                   /* 192E9ABD0 */
#define g_192E9ABD4                      dword_140404A6C[346708058]                   /* 192E9ABD4 */
#define g_192E9ABD8                      dword_140404A6C[346708059]                   /* 192E9ABD8 */
#define g_192E9ABDC                      dword_140404A6C[346708060]                   /* 192E9ABDC */
#define g_192E9ABE0                      dword_140404A6C[346708061]                   /* 192E9ABE0 */
#define g_192E9ABE4                      dword_140404A6C[346708062]                   /* 192E9ABE4 */
#define g_192E9AEE0                      dword_140404A6C[346708253]                   /* 192E9AEE0 */
#define g_192E9BAD8                      dword_140404A6C[346709019]                   /* 192E9BAD8 */
#define g_192E9BADC                      dword_140404A6C[346709020]                   /* 192E9BADC */
#define g_192E9BAE0                      dword_140404A6C[346709021]                   /* 192E9BAE0 */
#define g_192E9BAE4                      dword_140404A6C[346709022]                   /* 192E9BAE4 */
#define g_192E9BAE8                      dword_140404A6C[346709023]                   /* 192E9BAE8 */
#define g_192E9BAEC                      dword_140404A6C[346709024]                   /* 192E9BAEC */
#define g_192E9BAF0                      dword_140404A6C[346709025]                   /* 192E9BAF0 */
#define g_192E9BAF4                      dword_140404A6C[346709026]                   /* 192E9BAF4 */
#define g_192E9BAF8                      dword_140404A6C[346709027]                   /* 192E9BAF8 */
#define g_192E9BAFC                      dword_140404A6C[346709028]                   /* 192E9BAFC */
#define g_192E9BB00                      dword_140404A6C[346709029]                   /* 192E9BB00 */
#define g_192E9BB04                      dword_140404A6C[346709030]                   /* 192E9BB04 */
#define g_192E9BB08                      dword_140404A6C[346709031]                   /* 192E9BB08 */
#define g_192E9BB0C                      dword_140404A6C[346709032]                   /* 192E9BB0C */
#define g_192E9BB14                      dword_140404A6C[346709034]                   /* 192E9BB14 */
#define g_192E9BB18                      dword_140404A6C[346709035]                   /* 192E9BB18 */
#define g_192E9FADC                      dword_140404A6C[346713116]                   /* 192E9FADC */
#define g_192EA1AE0                      dword_140404A6C[346715165]                   /* 192EA1AE0 */
#define g_192EA1AE8                      dword_140404A6C[346715167]                   /* 192EA1AE8 */
#define g_192EA1EE4                      dword_140404A6C[346715422]                   /* 192EA1EE4 */
#define g_192EA1EE8                      dword_140404A6C[346715423]                   /* 192EA1EE8 */
#define g_192EA1EEC                      dword_140404A6C[346715424]                   /* 192EA1EEC */
#define g_192EA1EF0                      dword_140404A6C[346715425]                   /* 192EA1EF0 */
#define g_192EA4EE8                      dword_140404A6C[346718495]                   /* 192EA4EE8 */
#define g_192EA4EF0                      dword_140404A6C[346718497]                   /* 192EA4EF0 */
#define g_192EA4EF4                      dword_140404A6C[346718498]                   /* 192EA4EF4 */
#define g_192EB1EF4                      dword_140404A6C[346731810]                   /* 192EB1EF4 */
#define g_192EB1EF8                      dword_140404A6C[346731811]                   /* 192EB1EF8 */
#define g_192EB1F14                      dword_140404A6C[346731818]                   /* 192EB1F14 */
#define g_192EB1F1C                      dword_140404A6C[346731820]                   /* 192EB1F1C */
#define g_192EB1F20                      dword_140404A6C[346731821]                   /* 192EB1F20 */
#define g_192EB1F24                      dword_140404A6C[346731822]                   /* 192EB1F24 */
#define g_192EB1F44                      dword_140404A6C[346731830]                   /* 192EB1F44 */
#define g_192EB1F48                      dword_140404A6C[346731831]                   /* 192EB1F48 */
#define g_192EB28FC                      dword_140404A6C[346732452]                   /* 192EB28FC */
#define g_192EB2900                      dword_140404A6C[346732453]                   /* 192EB2900 */
#define g_192EB2998                      dword_140404A6C[346732491]                   /* 192EB2998 */
#define g_192EB299C                      dword_140404A6C[346732492]                   /* 192EB299C */
#define g_192EB29A0                      dword_140404A6C[346732493]                   /* 192EB29A0 */
#define g_192EB29A4                      dword_140404A6C[346732494]                   /* 192EB29A4 */
#define g_192EB29A8                      dword_140404A6C[346732495]                   /* 192EB29A8 */
#define g_192EB29AC                      dword_140404A6C[346732496]                   /* 192EB29AC */
#define g_192EB29B0                      dword_140404A6C[346732497]                   /* 192EB29B0 */
#define g_192EB29B4                      dword_140404A6C[346732498]                   /* 192EB29B4 */
#define g_192EB29B8                      dword_140404A6C[346732499]                   /* 192EB29B8 */
#define g_192EB29BC                      dword_140404A6C[346732500]                   /* 192EB29BC */
#define g_192EB29C0                      dword_140404A6C[346732501]                   /* 192EB29C0 */
#define g_192EB29C4                      dword_140404A6C[346732502]                   /* 192EB29C4 */
#define g_192EB29C8                      dword_140404A6C[346732503]                   /* 192EB29C8 */
#define g_192EB2BA8                      dword_140404A6C[346732623]                   /* 192EB2BA8 */
#define g_192EB2BAC                      dword_140404A6C[346732624]                   /* 192EB2BAC */
#define g_192EB2BB0                      dword_140404A6C[346732625]                   /* 192EB2BB0 */
#define g_192EB2BB4                      dword_140404A6C[346732626]                   /* 192EB2BB4 */
#define g_192EB2BB8                      dword_140404A6C[346732627]                   /* 192EB2BB8 */
#define g_192EB2BBC                      dword_140404A6C[346732628]                   /* 192EB2BBC */
#define g_192EB2BC0                      dword_140404A6C[346732629]                   /* 192EB2BC0 */
#define g_192EB2BC4                      dword_140404A6C[346732630]                   /* 192EB2BC4 */
#define g_192EB2BC8                      dword_140404A6C[346732631]                   /* 192EB2BC8 */
#define g_192EB2BCC                      dword_140404A6C[346732632]                   /* 192EB2BCC */
#define g_192EB2BD0                      dword_140404A6C[346732633]                   /* 192EB2BD0 */
#define g_192EB2BD4                      dword_140404A6C[346732634]                   /* 192EB2BD4 */
#define g_192EB2BD8                      dword_140404A6C[346732635]                   /* 192EB2BD8 */
#define g_192EB2C48                      dword_140404A6C[346732663]                   /* 192EB2C48 */
#define g_192EB2C54                      dword_140404A6C[346732666]                   /* 192EB2C54 */
#define g_192EB2C74                      dword_140404A6C[346732674]                   /* 192EB2C74 */
#define g_192EB2C78                      dword_140404A6C[346732675]                   /* 192EB2C78 */
#define g_192EB2C80                      dword_140404A6C[346732677]                   /* 192EB2C80 */
#define g_192EB3184                      dword_140404A6C[346732998]                   /* 192EB3184 */
#define g_192EB3494                      dword_140404A6C[346733194]                   /* 192EB3494 */
#define g_192EB34A0                      dword_140404A6C[346733197]                   /* 192EB34A0 */
#define g_192EB4098                      dword_140404A6C[346733963]                   /* 192EB4098 */
#define g_192ECA4B4                      dword_140404A6C[346756754]                   /* 192ECA4B4 */
#define g_192ECAEBC                      dword_140404A6C[346757396]                   /* 192ECAEBC */
#define g_192ECAEC0                      dword_140404A6C[346757397]                   /* 192ECAEC0 */
#define g_192ECAF58                      dword_140404A6C[346757435]                   /* 192ECAF58 */
#define g_192ECAF5C                      (*(_OWORD *)&dword_140404A6C[346757436])     /* 192ECAF5C */
#define g_192ECAF6C                      (*(_OWORD *)&dword_140404A6C[346757440])     /* 192ECAF6C */
#define g_192ECAF7C                      (*(_OWORD *)&dword_140404A6C[346757444])     /* 192ECAF7C */
#define g_192ECB208                      dword_140404A6C[346757607]                   /* 192ECB208 */
#define g_192ECB214                      dword_140404A6C[346757610]                   /* 192ECB214 */
#define g_192ECB234                      dword_140404A6C[346757618]                   /* 192ECB234 */
#define g_192ECB238                      dword_140404A6C[346757619]                   /* 192ECB238 */
#define g_192ECB240                      dword_140404A6C[346757621]                   /* 192ECB240 */
#define g_192ECB744                      dword_140404A6C[346757942]                   /* 192ECB744 */
#define g_192ECC658                      dword_140404A6C[346758907]                   /* 192ECC658 */
#define g_192EE2A74                      dword_140404A6C[346781698]                   /* 192EE2A74 */
#define g_192EE347C                      dword_140404A6C[346782340]                   /* 192EE347C */
#define g_192EE3480                      dword_140404A6C[346782341]                   /* 192EE3480 */
#define g_192EE3518                      dword_140404A6C[346782379]                   /* 192EE3518 */
#define g_192EE351C                      (*(_OWORD *)&dword_140404A6C[346782380])     /* 192EE351C */
#define g_192EE352C                      dword_140404A6C[346782384]                   /* 192EE352C */
#define g_192EE3530                      dword_140404A6C[346782385]                   /* 192EE3530 */
#define g_192EE37C8                      dword_140404A6C[346782551]                   /* 192EE37C8 */
#define g_192EE37D4                      dword_140404A6C[346782554]                   /* 192EE37D4 */
#define g_192EE37F4                      dword_140404A6C[346782562]                   /* 192EE37F4 */
#define g_192EE37F8                      dword_140404A6C[346782563]                   /* 192EE37F8 */
#define g_192EE3800                      dword_140404A6C[346782565]                   /* 192EE3800 */
#define g_192EE3D04                      dword_140404A6C[346782886]                   /* 192EE3D04 */
#define g_192EE4C18                      dword_140404A6C[346783851]                   /* 192EE4C18 */
#define g_192EFB034                      dword_140404A6C[346806642]                   /* 192EFB034 */
#define g_192EFBA3C                      dword_140404A6C[346807284]                   /* 192EFBA3C */
#define g_192EFBA40                      dword_140404A6C[346807285]                   /* 192EFBA40 */
#define g_192EFBAD8                      dword_140404A6C[346807323]                   /* 192EFBAD8 */
#define g_192EFBADC                      (*(_OWORD *)&dword_140404A6C[346807324])     /* 192EFBADC */
#define g_192EFBAEC                      (*(_OWORD *)&dword_140404A6C[346807328])     /* 192EFBAEC */
#define g_192EFBAFC                      (*(_OWORD *)&dword_140404A6C[346807332])     /* 192EFBAFC */
#define g_192EFBD80                      dword_140404A6C[346807493]                   /* 192EFBD80 */
#define g_192EFBD88                      dword_140404A6C[346807495]                   /* 192EFBD88 */
#define g_192EFBD94                      dword_140404A6C[346807498]                   /* 192EFBD94 */
#define g_192EFBDB4                      dword_140404A6C[346807506]                   /* 192EFBDB4 */
#define g_192EFBDB8                      dword_140404A6C[346807507]                   /* 192EFBDB8 */
#define g_192F135F4                      dword_140404A6C[346831586]                   /* 192F135F4 */
#define g_192F14098                      dword_140404A6C[346832267]                   /* 192F14098 */
#define g_192F1409C                      (*(_OWORD *)&dword_140404A6C[346832268])     /* 192F1409C */
#define g_192F140AC                      dword_140404A6C[346832272]                   /* 192F140AC */
#define g_192F140B0                      dword_140404A6C[346832273]                   /* 192F140B0 */
#define g_192F14340                      dword_140404A6C[346832437]                   /* 192F14340 */
#define g_192F14348                      dword_140404A6C[346832439]                   /* 192F14348 */
#define g_192F14354                      (*(_QWORD *)&dword_140404A6C[346832442])     /* 192F14354 */
#define g_192F14374                      dword_140404A6C[346832450]                   /* 192F14374 */
#define g_192F14378                      dword_140404A6C[346832451]                   /* 192F14378 */
#define g_192F2BBB4                      dword_140404A6C[346856530]                   /* 192F2BBB4 */
#define g_192F2C658                      dword_140404A6C[346857211]                   /* 192F2C658 */
#define g_192F2C65C                      (*(_OWORD *)&dword_140404A6C[346857212])     /* 192F2C65C */
#define g_192F2C66C                      dword_140404A6C[346857216]                   /* 192F2C66C */
#define g_192F2C670                      dword_140404A6C[346857217]                   /* 192F2C670 */
#define g_192F2C900                      dword_140404A6C[346857381]                   /* 192F2C900 */
#define g_192F2C908                      dword_140404A6C[346857383]                   /* 192F2C908 */
#define g_192F2C914                      dword_140404A6C[346857386]                   /* 192F2C914 */
#define g_192F2C934                      dword_140404A6C[346857394]                   /* 192F2C934 */
#define g_192F2C938                      dword_140404A6C[346857395]                   /* 192F2C938 */
#define g_192F44174                      dword_140404A6C[346881474]                   /* 192F44174 */
#define g_192F44C18                      dword_140404A6C[346882155]                   /* 192F44C18 */
#define g_192F44C1C                      (*(_OWORD *)&dword_140404A6C[346882156])     /* 192F44C1C */
#define g_192F44C2C                      (*(_OWORD *)&dword_140404A6C[346882160])     /* 192F44C2C */
#define g_192F44C3C                      (*(_OWORD *)&dword_140404A6C[346882164])     /* 192F44C3C */
#define g_192F44EC0                      dword_140404A6C[346882325]                   /* 192F44EC0 */
#define g_192F44EC8                      dword_140404A6C[346882327]                   /* 192F44EC8 */
#define g_192F44ED4                      dword_140404A6C[346882330]                   /* 192F44ED4 */
#define g_192F44EF4                      dword_140404A6C[346882338]                   /* 192F44EF4 */
#define g_192F44EF8                      dword_140404A6C[346882339]                   /* 192F44EF8 */
#define g_192F5C734                      dword_140404A6C[346906418]                   /* 192F5C734 */
#define g_192F5D1D8                      dword_140404A6C[346907099]                   /* 192F5D1D8 */
#define g_192F5D1DC                      (*(_OWORD *)&dword_140404A6C[346907100])     /* 192F5D1DC */
#define g_192F5D1EC                      (*(_OWORD *)&dword_140404A6C[346907104])     /* 192F5D1EC */
#define g_192F5D1FC                      (*(_OWORD *)&dword_140404A6C[346907108])     /* 192F5D1FC */
#define g_192F5D20C                      (*(_OWORD *)&dword_140404A6C[346907112])     /* 192F5D20C */
#define g_192F5D21C                      dword_140404A6C[346907116]                   /* 192F5D21C */
#define g_192F5D220                      dword_140404A6C[346907117]                   /* 192F5D220 */
#define g_192F5D480                      dword_140404A6C[346907269]                   /* 192F5D480 */
#define g_192F5D488                      dword_140404A6C[346907271]                   /* 192F5D488 */
#define g_192F5D494                      dword_140404A6C[346907274]                   /* 192F5D494 */
#define g_192F5D4B4                      dword_140404A6C[346907282]                   /* 192F5D4B4 */
#define g_192F5D4B8                      dword_140404A6C[346907283]                   /* 192F5D4B8 */
#define g_192F74CF4                      dword_140404A6C[346931362]                   /* 192F74CF4 */
#define g_192F75798                      dword_140404A6C[346932043]                   /* 192F75798 */
#define g_192F7579C                      (*(_OWORD *)&dword_140404A6C[346932044])     /* 192F7579C */
#define g_192F757AC                      (*(_OWORD *)&dword_140404A6C[346932048])     /* 192F757AC */
#define g_192F757BC                      (*(_OWORD *)&dword_140404A6C[346932052])     /* 192F757BC */
#define g_192F757CC                      (*(_OWORD *)&dword_140404A6C[346932056])     /* 192F757CC */
#define g_192F757DC                      dword_140404A6C[346932060]                   /* 192F757DC */
#define g_192F757E0                      dword_140404A6C[346932061]                   /* 192F757E0 */
#define g_192F75A40                      dword_140404A6C[346932213]                   /* 192F75A40 */
#define g_192F75A48                      dword_140404A6C[346932215]                   /* 192F75A48 */
#define g_192F75A54                      (*(_QWORD *)&dword_140404A6C[346932218])     /* 192F75A54 */
#define g_192F75A74                      dword_140404A6C[346932226]                   /* 192F75A74 */
#define g_192F75A78                      dword_140404A6C[346932227]                   /* 192F75A78 */
#define g_192F8D2B4                      dword_140404A6C[346956306]                   /* 192F8D2B4 */
#define g_192F8DD58                      dword_140404A6C[346956987]                   /* 192F8DD58 */
#define g_192F8DD5C                      (*(_OWORD *)&dword_140404A6C[346956988])     /* 192F8DD5C */
#define g_192F8DD6C                      (*(_OWORD *)&dword_140404A6C[346956992])     /* 192F8DD6C */
#define g_192F8DD7C                      (*(_OWORD *)&dword_140404A6C[346956996])     /* 192F8DD7C */
#define g_192F8DD8C                      (*(_OWORD *)&dword_140404A6C[346957000])     /* 192F8DD8C */
#define g_192F8DD9C                      dword_140404A6C[346957004]                   /* 192F8DD9C */
#define g_192F8DDA0                      dword_140404A6C[346957005]                   /* 192F8DDA0 */
#define g_192F8E008                      dword_140404A6C[346957159]                   /* 192F8E008 */
#define g_192F8E014                      dword_140404A6C[346957162]                   /* 192F8E014 */
#define g_192F8E034                      dword_140404A6C[346957170]                   /* 192F8E034 */
#define g_192F8E038                      dword_140404A6C[346957171]                   /* 192F8E038 */
#define g_192F8E040                      dword_140404A6C[346957173]                   /* 192F8E040 */
#define g_192F8E544                      dword_140404A6C[346957494]                   /* 192F8E544 */
#define g_192F8F458                      dword_140404A6C[346958459]                   /* 192F8F458 */
#define g_192FA5874                      dword_140404A6C[346981250]                   /* 192FA5874 */
#define g_192FA627C                      dword_140404A6C[346981892]                   /* 192FA627C */
#define g_192FA6280                      dword_140404A6C[346981893]                   /* 192FA6280 */
#define g_192FA6318                      dword_140404A6C[346981931]                   /* 192FA6318 */
#define g_192FA631C                      (*(_OWORD *)&dword_140404A6C[346981932])     /* 192FA631C */
#define g_192FA632C                      dword_140404A6C[346981936]                   /* 192FA632C */
#define g_192FA6330                      dword_140404A6C[346981937]                   /* 192FA6330 */
#define g_192FA65C8                      dword_140404A6C[346982103]                   /* 192FA65C8 */
#define g_192FA65D4                      (*(_QWORD *)&dword_140404A6C[346982106])     /* 192FA65D4 */
#define g_192FA65F4                      dword_140404A6C[346982114]                   /* 192FA65F4 */
#define g_192FA65F8                      dword_140404A6C[346982115]                   /* 192FA65F8 */
#define g_192FA6600                      dword_140404A6C[346982117]                   /* 192FA6600 */
#define g_192FA6B04                      dword_140404A6C[346982438]                   /* 192FA6B04 */
#define g_192FBE83C                      dword_140404A6C[347006836]                   /* 192FBE83C */
#define g_192FBE840                      dword_140404A6C[347006837]                   /* 192FBE840 */
#define g_192FBE8D8                      dword_140404A6C[347006875]                   /* 192FBE8D8 */
#define g_192FBEB80                      dword_140404A6C[347007045]                   /* 192FBEB80 */
#define g_192FBEB88                      dword_140404A6C[347007047]                   /* 192FBEB88 */
#define g_192FBEB94                      dword_140404A6C[347007050]                   /* 192FBEB94 */
#define g_192FBEBB4                      dword_140404A6C[347007058]                   /* 192FBEBB4 */
#define g_192FBEBB8                      dword_140404A6C[347007059]                   /* 192FBEBB8 */
#define g_192FD63F8                      dword_140404A6C[347031139]                   /* 192FD63F8 */
#define g_192FD6E98                      dword_140404A6C[347031819]                   /* 192FD6E98 */
#define g_192FD7140                      dword_140404A6C[347031989]                   /* 192FD7140 */
#define g_192FD7148                      dword_140404A6C[347031991]                   /* 192FD7148 */
#define g_192FD7154                      dword_140404A6C[347031994]                   /* 192FD7154 */
#define g_192FD7174                      dword_140404A6C[347032002]                   /* 192FD7174 */
#define g_192FD7178                      dword_140404A6C[347032003]                   /* 192FD7178 */
#define g_193007CC0                      dword_140404A6C[347081877]                   /* 193007CC0 */
#define g_193007CC8                      dword_140404A6C[347081879]                   /* 193007CC8 */
#define g_193007CD4                      dword_140404A6C[347081882]                   /* 193007CD4 */
#define g_193007CF4                      dword_140404A6C[347081890]                   /* 193007CF4 */
#define g_193007CF8                      dword_140404A6C[347081891]                   /* 193007CF8 */
#define g_19301F534                      dword_140404A6C[347105970]                   /* 19301F534 */
#define g_19301FFD8                      dword_140404A6C[347106651]                   /* 19301FFD8 */
#define g_19301FFDC                      (*(_OWORD *)&dword_140404A6C[347106652])     /* 19301FFDC */
#define g_19301FFEC                      (*(_OWORD *)&dword_140404A6C[347106656])     /* 19301FFEC */
#define g_19301FFFC                      (*(_OWORD *)&dword_140404A6C[347106660])     /* 19301FFFC */
#define g_193020280                      dword_140404A6C[347106821]                   /* 193020280 */
#define g_193020288                      dword_140404A6C[347106823]                   /* 193020288 */
#define g_193020294                      dword_140404A6C[347106826]                   /* 193020294 */
#define g_1930202B4                      dword_140404A6C[347106834]                   /* 1930202B4 */
#define g_1930202B8                      dword_140404A6C[347106835]                   /* 1930202B8 */
#define g_193037AF4                      dword_140404A6C[347130914]                   /* 193037AF4 */
#define g_193038598                      dword_140404A6C[347131595]                   /* 193038598 */
#define g_19303859C                      (*(_OWORD *)&dword_140404A6C[347131596])     /* 19303859C */
#define g_1930385AC                      dword_140404A6C[347131600]                   /* 1930385AC */
#define g_1930385B0                      dword_140404A6C[347131601]                   /* 1930385B0 */
#define g_193AC8680                      dword_140404A6C[349900549]                   /* 193AC8680 */
#define g_193AC87A0                      dword_140404A6C[349900621]                   /* 193AC87A0 */
#define g_193AC87A4                      dword_140404A6C[349900622]                   /* 193AC87A4 */
#define g_193AC87A8                      dword_140404A6C[349900623]                   /* 193AC87A8 */
#define g_193AC87AC                      dword_140404A6C[349900624]                   /* 193AC87AC */
#define g_193AC87B0                      dword_140404A6C[349900625]                   /* 193AC87B0 */
#define g_193AC87C0                      dword_140404A6C[349900629]                   /* 193AC87C0 */
#define g_193AC87C4                      dword_140404A6C[349900630]                   /* 193AC87C4 */
#define g_193AC87C8                      (*(float *)&dword_140404A6C[349900631])      /* 193AC87C8 */
#define g_193AC87CC                      dword_140404A6C[349900632]                   /* 193AC87CC */
#define g_193AC87D0                      dword_140404A6C[349900633]                   /* 193AC87D0 */
#define g_193AC87D4                      (*(float *)&dword_140404A6C[349900634])      /* 193AC87D4 */
#define g_193AC87D8                      dword_140404A6C[349900635]                   /* 193AC87D8 */
#define g_193AC87DC                      dword_140404A6C[349900636]                   /* 193AC87DC */
#define g_193AC87E0                      dword_140404A6C[349900637]                   /* 193AC87E0 */
#define g_193AC87E4                      dword_140404A6C[349900638]                   /* 193AC87E4 */
#define g_193AC87E8                      dword_140404A6C[349900639]                   /* 193AC87E8 */
#define g_193AC87EC                      dword_140404A6C[349900640]                   /* 193AC87EC */
#define g_193AC87F0                      dword_140404A6C[349900641]                   /* 193AC87F0 */
#define g_193AC87F4                      dword_140404A6C[349900642]                   /* 193AC87F4 */
#define g_193AC87F8                      dword_140404A6C[349900643]                   /* 193AC87F8 */
#define g_193AC87FC                      dword_140404A6C[349900644]                   /* 193AC87FC */
#define g_193AC8800                      dword_140404A6C[349900645]                   /* 193AC8800 */
#define g_193AC8804                      dword_140404A6C[349900646]                   /* 193AC8804 */
#define g_193AC8820                      dword_140404A6C[349900653]                   /* 193AC8820 */
#define g_193AC8824                      dword_140404A6C[349900654]                   /* 193AC8824 */
#define g_193ACA824                      dword_140404A6C[349902702]                   /* 193ACA824 */
#define g_193ACA828                      dword_140404A6C[349902703]                   /* 193ACA828 */
#define g_193ACF028                      dword_140404A6C[349907311]                   /* 193ACF028 */
#define g_193ACF02C                      dword_140404A6C[349907312]                   /* 193ACF02C */
#define g_193ACF030                      dword_140404A6C[349907313]                   /* 193ACF030 */
#define g_193AD07F4                      dword_140404A6C[349908834]                   /* 193AD07F4 */
#define g_193AD07F8                      dword_140404A6C[349908835]                   /* 193AD07F8 */
#define g_193AD07FC                      dword_140404A6C[349908836]                   /* 193AD07FC */
#define g_193AD082C                      dword_140404A6C[349908848]                   /* 193AD082C */
#define g_193AD0830                      (*(_QWORD *)&dword_140404A6C[349908849])     /* 193AD0830 */
#define g_193AD0834                      (*(_QWORD *)&dword_140404A6C[349908850])     /* 193AD0834 */
#define g_193AD0838                      dword_140404A6C[349908851]                   /* 193AD0838 */
#define g_195AD08C0                      dword_140404A6C[358297493]                   /* 195AD08C0 */
#define g_195AD08C4                      dword_140404A6C[358297494]                   /* 195AD08C4 */
#define g_195AD08CC                      dword_140404A6C[358297496]                   /* 195AD08CC */
#define g_195AD08D0                      dword_140404A6C[358297497]                   /* 195AD08D0 */
#define g_195AD08D4                      dword_140404A6C[358297498]                   /* 195AD08D4 */
#define g_195AD38F8                      dword_140404A6C[358300579]                   /* 195AD38F8 */
#define g_195AD3920                      dword_140404A6C[358300589]                   /* 195AD3920 */
#define world_street_count               dword_140404A6C[421506973]                   /* 1A4BF08E0 src/engine/world_streets.h */
#define g_1A4BF0900                      (*(_QWORD *)&dword_140404A6C[421506981])     /* 1A4BF0900 */
#define world_grid_block_count           dword_140404A6C[421506989]                   /* 1A4BF0920 src/engine/world.h */
#define world_grid_leaf_count            dword_140404A6C[421769134]                   /* 1A4CF0924 src/engine/world.h */
#define g_1A4CF0928                      (*(_QWORD *)&dword_140404A6C[421769135])     /* 1A4CF0928 */
#define g_1A4CF0940                      dword_140404A6C[421769141]                   /* 1A4CF0940 */
#define g_1A4CF0948                      dword_140404A6C[421769143]                   /* 1A4CF0948 */
#define g_1A4CFC948                      dword_140404A6C[421781431]                   /* 1A4CFC948 */
#define g_1A4CFC960                      dword_140404A6C[421781437]                   /* 1A4CFC960 */
#define g_1A4CFF160                      dword_140404A6C[421783997]                   /* 1A4CFF160 */
#define g_1A4CFF560                      dword_140404A6C[421784253]                   /* 1A4CFF560 */
#define g_1A4CFF7E4                      dword_140404A6C[421784414]                   /* 1A4CFF7E4 */
#define mark_texture_choice              dword_140404A6C[421784429]                   /* 1A4CFF820 src/engine/world_effects_draw.c */
#define g_1A4CFF8D0                      dword_140404A6C[421784473]                   /* 1A4CFF8D0 */
#define g_1A4CFF8D4                      dword_140404A6C[421784474]                   /* 1A4CFF8D4 */
#define g_1A4CFF8D8                      dword_140404A6C[421784475]                   /* 1A4CFF8D8 */
#define g_1A4CFFCE4                      dword_140404A6C[421784734]                   /* 1A4CFFCE4 */
#define g_1A4CFFCF8                      dword_140404A6C[421784739]                   /* 1A4CFFCF8 */
#define g_1A4D0B4E4                      dword_140404A6C[421796510]                   /* 1A4D0B4E4 */
#define game_unknown_1a4d2dce0           dword_140404A6C[421831837]                   /* 1A4D2DCE0 src/engine/frame.h */
#define game_unknown_1a4d2dce4           dword_140404A6C[421831838]                   /* 1A4D2DCE4 src/engine/frame.h */
#define g_1A4D2DCE8                      (*(float *)&dword_140404A6C[421831839])      /* 1A4D2DCE8 */
#define g_1A4D2DCEC                      (*(float *)&dword_140404A6C[421831840])      /* 1A4D2DCEC */
#define g_1A4D2DD04                      dword_140404A6C[421831846]                   /* 1A4D2DD04 */
#define g_1A4D2DD08                      dword_140404A6C[421831847]                   /* 1A4D2DD08 */
#define g_1A4D2DD0C                      dword_140404A6C[421831848]                   /* 1A4D2DD0C */
#define g_1A4D2DD10                      dword_140404A6C[421831849]                   /* 1A4D2DD10 */
#define g_1A4D2DD14                      dword_140404A6C[421831850]                   /* 1A4D2DD14 */
#define g_1A4D2DD18                      dword_140404A6C[421831851]                   /* 1A4D2DD18 */
#define g_1A4D2DD24                      dword_140404A6C[421831854]                   /* 1A4D2DD24 */
#define g_1A4D31D14                      dword_140404A6C[421835946]                   /* 1A4D31D14 */
#define g_1A4D31D18                      dword_140404A6C[421835947]                   /* 1A4D31D18 */
#define g_1A4D31D24                      dword_140404A6C[421835950]                   /* 1A4D31D24 */
#define g_1A4D3BD1C                      dword_140404A6C[421846188]                   /* 1A4D3BD1C */
#define g_1A4D3BD20                      dword_140404A6C[421846189]                   /* 1A4D3BD20 */
#define g_1A4D3BD24                      dword_140404A6C[421846190]                   /* 1A4D3BD24 */
#define g_1A4D3BD28                      (*(float *)&dword_140404A6C[421846191])      /* 1A4D3BD28 */
#define g_1A4D3BD2C                      dword_140404A6C[421846192]                   /* 1A4D3BD2C */
#define game_tick_seen                   dword_140404A6C[421846193]                   /* 1A4D3BD30 src/engine/frame.h */
#define g_1A4D3BD3C                      dword_140404A6C[421846196]                   /* 1A4D3BD3C */
#define g_1A4D3BD44                      dword_140404A6C[421846198]                   /* 1A4D3BD44 */
#define g_1A4D3BD4C                      dword_140404A6C[421846200]                   /* 1A4D3BD4C */
#define g_1A4D3BD50                      dword_140404A6C[421846201]                   /* 1A4D3BD50 */
#define g_1A4D3BD54                      dword_140404A6C[421846202]                   /* 1A4D3BD54 */
#define g_1A4D3BD58                      dword_140404A6C[421846203]                   /* 1A4D3BD58 */
#define g_1A4D3BD5C                      dword_140404A6C[421846204]                   /* 1A4D3BD5C */
#define g_1A4D3BD60                      dword_140404A6C[421846205]                   /* 1A4D3BD60 */
#define g_1A4D3BD64                      dword_140404A6C[421846206]                   /* 1A4D3BD64 */
#define g_1A4D3BD68                      dword_140404A6C[421846207]                   /* 1A4D3BD68 */
#define g_1A4D3BD6C                      dword_140404A6C[421846208]                   /* 1A4D3BD6C */
#define g_1A4D3BD70                      dword_140404A6C[421846209]                   /* 1A4D3BD70 */
#define g_1A4D3BD74                      dword_140404A6C[421846210]                   /* 1A4D3BD74 */
#define g_1A4D3BD78                      dword_140404A6C[421846211]                   /* 1A4D3BD78 */
#define g_1A4D3BD7C                      dword_140404A6C[421846212]                   /* 1A4D3BD7C */
#define g_1A4D3BD80                      dword_140404A6C[421846213]                   /* 1A4D3BD80 */
#define g_1A4D3BD84                      dword_140404A6C[421846214]                   /* 1A4D3BD84 */
#define g_1A4D3BD88                      dword_140404A6C[421846215]                   /* 1A4D3BD88 */
#define g_1A4D3BDDC                      dword_140404A6C[421846236]                   /* 1A4D3BDDC */
#define g_1A4D3BE54                      dword_140404A6C[421846266]                   /* 1A4D3BE54 */
#define g_1A4D3BE58                      dword_140404A6C[421846267]                   /* 1A4D3BE58 */
#define g_1A4D3BE5C                      dword_140404A6C[421846268]                   /* 1A4D3BE5C */
#define g_1A4D3BE60                      dword_140404A6C[421846269]                   /* 1A4D3BE60 */
#define g_1A4D3BE64                      dword_140404A6C[421846270]                   /* 1A4D3BE64 */
#define g_1A4D3BE68                      dword_140404A6C[421846271]                   /* 1A4D3BE68 */
#define g_1A4D3BE6C                      dword_140404A6C[421846272]                   /* 1A4D3BE6C */
#define g_1A4D3BE70                      dword_140404A6C[421846273]                   /* 1A4D3BE70 */
#define g_1A4D3BE74                      dword_140404A6C[421846274]                   /* 1A4D3BE74 */
#define g_1A4D3BE78                      dword_140404A6C[421846275]                   /* 1A4D3BE78 */
#define g_1A4D3BE7C                      dword_140404A6C[421846276]                   /* 1A4D3BE7C */
#define g_1A4D3BE80                      dword_140404A6C[421846277]                   /* 1A4D3BE80 */
#define g_1A4D91D38                      dword_140404A6C[421934259]                   /* 1A4D91D38 */
#define g_1A4D91D3C                      dword_140404A6C[421934260]                   /* 1A4D91D3C */
#define g_1A4D91D40                      dword_140404A6C[421934261]                   /* 1A4D91D40 */
#define g_1A4D91D44                      dword_140404A6C[421934262]                   /* 1A4D91D44 */
#define g_1A4D91D48                      dword_140404A6C[421934263]                   /* 1A4D91D48 */
#define g_1A4D91D5C                      dword_140404A6C[421934268]                   /* 1A4D91D5C */
#define g_1A4D91D6C                      dword_140404A6C[421934272]                   /* 1A4D91D6C */
#define g_1A4D91D70                      dword_140404A6C[421934273]                   /* 1A4D91D70 */
#define g_1A4D91D74                      dword_140404A6C[421934274]                   /* 1A4D91D74 */
#define g_1A4D91D78                      dword_140404A6C[421934275]                   /* 1A4D91D78 */
#define g_1A4D91D7C                      dword_140404A6C[421934276]                   /* 1A4D91D7C */
#define g_1A4D91D80                      dword_140404A6C[421934277]                   /* 1A4D91D80 */
#define g_1A4D91D84                      dword_140404A6C[421934278]                   /* 1A4D91D84 */
#define g_1A4D91D88                      dword_140404A6C[421934279]                   /* 1A4D91D88 */
#define g_1A4D91D8C                      dword_140404A6C[421934280]                   /* 1A4D91D8C */
#define g_1A4D91D90                      dword_140404A6C[421934281]                   /* 1A4D91D90 */
#define g_1A4D91D94                      dword_140404A6C[421934282]                   /* 1A4D91D94 */
#define g_1A4D91D98                      dword_140404A6C[421934283]                   /* 1A4D91D98 */
#define g_1A4D91D9C                      dword_140404A6C[421934284]                   /* 1A4D91D9C */
#define g_1A4D91DA0                      dword_140404A6C[421934285]                   /* 1A4D91DA0 */
#define g_1A4D91DA4                      dword_140404A6C[421934286]                   /* 1A4D91DA4 */
#define g_1A4D91DA8                      dword_140404A6C[421934287]                   /* 1A4D91DA8 */
#define g_1A4DB853C                      dword_140404A6C[421973684]                   /* 1A4DB853C */
#define g_1A4DB8540                      dword_140404A6C[421973685]                   /* 1A4DB8540 */
#define g_1A4DB8544                      dword_140404A6C[421973686]                   /* 1A4DB8544 */
#define g_1A4DB8548                      dword_140404A6C[421973687]                   /* 1A4DB8548 */
#define g_1A4DB855C                      dword_140404A6C[421973692]                   /* 1A4DB855C */
#define g_1A6F9DD34                      dword_140404A6C[430859442]                   /* 1A6F9DD34 */
#define g_1A6F9E138                      dword_140404A6C[430859699]                   /* 1A6F9E138 */
#define g_1A6F9E13C                      dword_140404A6C[430859700]                   /* 1A6F9E13C */
#define g_1A6F9E140                      dword_140404A6C[430859701]                   /* 1A6F9E140 */
#define g_1A6F9E144                      dword_140404A6C[430859702]                   /* 1A6F9E144 */
#define g_1A6F9E154                      dword_140404A6C[430859706]                   /* 1A6F9E154 */
#define g_1A6F9E554                      dword_140404A6C[430859962]                   /* 1A6F9E554 */
#define g_1A70AE560                      dword_140404A6C[431138493]                   /* 1A70AE560 */
#define g_1A70AE564                      dword_140404A6C[431138494]                   /* 1A70AE564 */
#define g_1A70AE580                      dword_140404A6C[431138501]                   /* 1A70AE580 */
#define g_1A724E580                      (*(_OWORD *)&dword_140404A6C[431564485])     /* 1A724E580 */
#define g_1A724E584                      (*(_OWORD *)&dword_140404A6C[431564486])     /* 1A724E584 */
#define g_1A724E590                      (*(_OWORD *)&dword_140404A6C[431564489])     /* 1A724E590 */
#define g_1A724E594                      (*(float *)&dword_140404A6C[431564490])      /* 1A724E594 */
#define g_1A724E598                      (*(_OWORD *)&dword_140404A6C[431564491])     /* 1A724E598 */
#define g_1A724E5A0                      (*(_OWORD *)&dword_140404A6C[431564493])     /* 1A724E5A0 */
#define g_1A724E5A8                      (*(float *)&dword_140404A6C[431564495])      /* 1A724E5A8 */
#define g_1A724E5AC                      dword_140404A6C[431564496]                   /* 1A724E5AC */
#define g_1A724E5B0                      (*(_OWORD *)&dword_140404A6C[431564497])     /* 1A724E5B0 */
#define g_1A724E5B4                      (*(float *)&dword_140404A6C[431564498])      /* 1A724E5B4 */
#define g_1A724E5B8                      (*(float *)&dword_140404A6C[431564499])      /* 1A724E5B8 */
#define g_1A724E5BC                      dword_140404A6C[431564500]                   /* 1A724E5BC */
#define g_1A724E5C0                      (*(_OWORD *)&dword_140404A6C[431564501])     /* 1A724E5C0 */
#define g_1A724E5C4                      dword_140404A6C[431564502]                   /* 1A724E5C4 */
#define g_1A724E5C8                      dword_140404A6C[431564503]                   /* 1A724E5C8 */
#define g_1A724E5CC                      dword_140404A6C[431564504]                   /* 1A724E5CC */
#define g_1A724E5D0                      (*(_OWORD *)&dword_140404A6C[431564505])     /* 1A724E5D0 */
#define g_1A724E5D4                      dword_140404A6C[431564506]                   /* 1A724E5D4 */
#define g_1A724E5D8                      dword_140404A6C[431564507]                   /* 1A724E5D8 */
#define g_1A724E5DC                      dword_140404A6C[431564508]                   /* 1A724E5DC */
#define g_1A724E5E0                      (*(_OWORD *)&dword_140404A6C[431564509])     /* 1A724E5E0 */
#define g_1A724E5E4                      dword_140404A6C[431564510]                   /* 1A724E5E4 */
#define g_1A724E5E8                      dword_140404A6C[431564511]                   /* 1A724E5E8 */
#define g_1A724E5EC                      dword_140404A6C[431564512]                   /* 1A724E5EC */
#define g_1A724E5F0                      (*(_OWORD *)&dword_140404A6C[431564513])     /* 1A724E5F0 */
#define g_1A724E5F8                      dword_140404A6C[431564515]                   /* 1A724E5F8 */
#define g_1A724E5FC                      dword_140404A6C[431564516]                   /* 1A724E5FC */
#define g_1A724E600                      (*(_OWORD *)&dword_140404A6C[431564517])     /* 1A724E600 */
#define g_1A724E604                      dword_140404A6C[431564518]                   /* 1A724E604 */
#define g_1A724E608                      (*(_OWORD *)&dword_140404A6C[431564519])     /* 1A724E608 */
#define g_1A724E60C                      (*(_OWORD *)&dword_140404A6C[431564520])     /* 1A724E60C */
#define g_1A724E610                      (*(_OWORD *)&dword_140404A6C[431564521])     /* 1A724E610 */
#define g_1A724E618                      (*(_OWORD *)&dword_140404A6C[431564523])     /* 1A724E618 */
#define g_1A724E61C                      (*(_OWORD *)&dword_140404A6C[431564524])     /* 1A724E61C */
#define g_1A724E620                      (*(_OWORD *)&dword_140404A6C[431564525])     /* 1A724E620 */
#define g_1A724E628                      (*(_OWORD *)&dword_140404A6C[431564527])     /* 1A724E628 */
#define g_1A724E62C                      (*(_OWORD *)&dword_140404A6C[431564528])     /* 1A724E62C */
#define g_1A724E630                      (*(_OWORD *)&dword_140404A6C[431564529])     /* 1A724E630 */
#define g_1A724E634                      dword_140404A6C[431564530]                   /* 1A724E634 */
#define g_1A724E638                      dword_140404A6C[431564531]                   /* 1A724E638 */
#define g_1A724E63C                      dword_140404A6C[431564532]                   /* 1A724E63C */
#define g_1A724E640                      (*(_OWORD *)&dword_140404A6C[431564533])     /* 1A724E640 */
#define g_1A724E644                      dword_140404A6C[431564534]                   /* 1A724E644 */
#define g_1A724E650                      (*(_OWORD *)&dword_140404A6C[431564537])     /* 1A724E650 */
#define g_1A724E660                      (*(_OWORD *)&dword_140404A6C[431564541])     /* 1A724E660 */
#define g_1A724E670                      (*(_OWORD *)&dword_140404A6C[431564545])     /* 1A724E670 */
#define g_1A724E680                      (*(_OWORD *)&dword_140404A6C[431564549])     /* 1A724E680 */
#define g_1A724E690                      (*(_OWORD *)&dword_140404A6C[431564553])     /* 1A724E690 */
#define g_1A724E6A0                      (*(_OWORD *)&dword_140404A6C[431564557])     /* 1A724E6A0 */
#define g_1A724E6B0                      (*(_OWORD *)&dword_140404A6C[431564561])     /* 1A724E6B0 */
#define g_1A724E6C0                      (*(_OWORD *)&dword_140404A6C[431564565])     /* 1A724E6C0 */
#define g_1A724E6C4                      dword_140404A6C[431564566]                   /* 1A724E6C4 */
#define g_1A724E6D0                      (*(_OWORD *)&dword_140404A6C[431564569])     /* 1A724E6D0 */
#define g_1A724E6D4                      (*(float *)&dword_140404A6C[431564570])      /* 1A724E6D4 */
#define g_1A724E6E0                      (*(_OWORD *)&dword_140404A6C[431564573])     /* 1A724E6E0 */
#define g_1A724E6E8                      (*(float *)&dword_140404A6C[431564575])      /* 1A724E6E8 */
#define g_1A724E6F0                      (*(_OWORD *)&dword_140404A6C[431564577])     /* 1A724E6F0 */
#define g_1A724E6FC                      (*(float *)&dword_140404A6C[431564580])      /* 1A724E6FC */
#define world_particle_count             dword_140404A6C[431564581]                   /* 1A724E700 src/engine/particle.h */
#define blood_stain_count                dword_140404A6C[431564589]                   /* 1A724E720 src/engine/effect.h */
#define effect_mark_count                dword_140404A6C[431646510]                   /* 1A729E724 src/engine/effect.h */
#define world_particle_resting_0_count   dword_140404A6C[431744815]                   /* 1A72FE728 src/engine/particle.h */
#define world_particle_resting_0_uploaded dword_140404A6C[431744816]                   /* 1A72FE72C src/engine/particle.h */
#define world_particle_resting_1_count   dword_140404A6C[432269105]                   /* 1A74FE730 src/engine/particle.h */
#define world_particle_resting_1_uploaded dword_140404A6C[432269106]                   /* 1A74FE734 src/engine/particle.h */
#define g_1A75FF388                      dword_140404A6C[432532039]                   /* 1A75FF388 */
#define g_1A7600B98                      dword_140404A6C[432533579]                   /* 1A7600B98 */
#define g_1A7602FA4                      dword_140404A6C[432535886]                   /* 1A7602FA4 */
#define g_1A7602FA8                      dword_140404A6C[432535887]                   /* 1A7602FA8 */
#define g_1A7602FAC                      dword_140404A6C[432535888]                   /* 1A7602FAC */
#define g_1A760C010                      dword_140404A6C[432545129]                   /* 1A760C010 */
#define g_1A796F380                      dword_140404A6C[433433157]                   /* 1A796F380 */
#define g_1A796F39C                      dword_140404A6C[433433164]                   /* 1A796F39C */
#define g_1A796F3D4                      dword_140404A6C[433433178]                   /* 1A796F3D4 */
#define g_1A796F428                      dword_140404A6C[433433199]                   /* 1A796F428 */
#define g_1A796F47C                      dword_140404A6C[433433220]                   /* 1A796F47C */
#define g_1A796F4D0                      dword_140404A6C[433433241]                   /* 1A796F4D0 */
#define g_1A796F524                      dword_140404A6C[433433262]                   /* 1A796F524 */
#define g_1A796F578                      dword_140404A6C[433433283]                   /* 1A796F578 */
#define g_1A796F5CC                      dword_140404A6C[433433304]                   /* 1A796F5CC */
#define g_1A796F620                      dword_140404A6C[433433325]                   /* 1A796F620 */
#define g_1A796F674                      dword_140404A6C[433433346]                   /* 1A796F674 */
#define g_1A796F6C8                      dword_140404A6C[433433367]                   /* 1A796F6C8 */
#define g_1A796F71C                      dword_140404A6C[433433388]                   /* 1A796F71C */
#define g_1A796F770                      dword_140404A6C[433433409]                   /* 1A796F770 */
#define g_1A796F7C4                      dword_140404A6C[433433430]                   /* 1A796F7C4 */
#define g_1A796F818                      dword_140404A6C[433433451]                   /* 1A796F818 */
#define g_1A796F86C                      dword_140404A6C[433433472]                   /* 1A796F86C */
#define g_1A796F8C0                      dword_140404A6C[433433493]                   /* 1A796F8C0 */
#define g_1A796F914                      dword_140404A6C[433433514]                   /* 1A796F914 */
#define g_1A796F968                      dword_140404A6C[433433535]                   /* 1A796F968 */
#define g_1A796F9BC                      dword_140404A6C[433433556]                   /* 1A796F9BC */
#define g_1A796FA10                      dword_140404A6C[433433577]                   /* 1A796FA10 */
#define g_1A796FA64                      dword_140404A6C[433433598]                   /* 1A796FA64 */
#define g_1A796FAB8                      dword_140404A6C[433433619]                   /* 1A796FAB8 */
#define g_1A796FB0C                      dword_140404A6C[433433640]                   /* 1A796FB0C */
#define g_1A796FB60                      dword_140404A6C[433433661]                   /* 1A796FB60 */
#define g_1A796FBB4                      dword_140404A6C[433433682]                   /* 1A796FBB4 */
#define g_1A796FC08                      dword_140404A6C[433433703]                   /* 1A796FC08 */
#define g_1A796FC5C                      dword_140404A6C[433433724]                   /* 1A796FC5C */
#define g_1A796FCB0                      dword_140404A6C[433433745]                   /* 1A796FCB0 */
#define g_1A796FD04                      dword_140404A6C[433433766]                   /* 1A796FD04 */
#define g_1A796FD58                      dword_140404A6C[433433787]                   /* 1A796FD58 */
#define g_1A796FDAC                      dword_140404A6C[433433808]                   /* 1A796FDAC */
#define g_1A796FE00                      dword_140404A6C[433433829]                   /* 1A796FE00 */
#define g_1A796FE54                      dword_140404A6C[433433850]                   /* 1A796FE54 */
#define g_1A796FEA8                      dword_140404A6C[433433871]                   /* 1A796FEA8 */
#define g_1A796FEFC                      dword_140404A6C[433433892]                   /* 1A796FEFC */
#define g_1A796FF50                      dword_140404A6C[433433913]                   /* 1A796FF50 */
#define g_1A796FFA4                      dword_140404A6C[433433934]                   /* 1A796FFA4 */
#define g_1A796FFF8                      dword_140404A6C[433433955]                   /* 1A796FFF8 */
#define g_1A797004C                      dword_140404A6C[433433976]                   /* 1A797004C */
#define g_1A79700A0                      dword_140404A6C[433433997]                   /* 1A79700A0 */
#define g_1A79700F4                      dword_140404A6C[433434018]                   /* 1A79700F4 */
#define g_1A7970148                      dword_140404A6C[433434039]                   /* 1A7970148 */
#define g_1A797019C                      dword_140404A6C[433434060]                   /* 1A797019C */
#define g_1A79701F0                      dword_140404A6C[433434081]                   /* 1A79701F0 */
#define g_1A7970244                      dword_140404A6C[433434102]                   /* 1A7970244 */
#define g_1A7970298                      dword_140404A6C[433434123]                   /* 1A7970298 */
#define g_1A79702EC                      dword_140404A6C[433434144]                   /* 1A79702EC */
#define g_1A7970340                      dword_140404A6C[433434165]                   /* 1A7970340 */
#define g_1A7970394                      dword_140404A6C[433434186]                   /* 1A7970394 */
#define g_1A79703E8                      dword_140404A6C[433434207]                   /* 1A79703E8 */
#define g_1A797043C                      dword_140404A6C[433434228]                   /* 1A797043C */
#define g_1A7970490                      dword_140404A6C[433434249]                   /* 1A7970490 */
#define g_1A79704E4                      dword_140404A6C[433434270]                   /* 1A79704E4 */
#define g_1A7970538                      dword_140404A6C[433434291]                   /* 1A7970538 */
#define g_1A797058C                      dword_140404A6C[433434312]                   /* 1A797058C */
#define g_1A79705E0                      dword_140404A6C[433434333]                   /* 1A79705E0 */
#define g_1A7970634                      dword_140404A6C[433434354]                   /* 1A7970634 */
#define g_1A7970688                      dword_140404A6C[433434375]                   /* 1A7970688 */
#define g_1A79706DC                      dword_140404A6C[433434396]                   /* 1A79706DC */
#define g_1A7970730                      dword_140404A6C[433434417]                   /* 1A7970730 */
#define g_1A7970784                      dword_140404A6C[433434438]                   /* 1A7970784 */
#define g_1A79707D8                      dword_140404A6C[433434459]                   /* 1A79707D8 */
#define g_1A797082C                      dword_140404A6C[433434480]                   /* 1A797082C */
#define g_1A7970880                      dword_140404A6C[433434501]                   /* 1A7970880 */
#define g_1A79708D4                      dword_140404A6C[433434522]                   /* 1A79708D4 */
#define g_1A7970928                      dword_140404A6C[433434543]                   /* 1A7970928 */
#define g_1A797097C                      dword_140404A6C[433434564]                   /* 1A797097C */
#define g_1A79709D0                      dword_140404A6C[433434585]                   /* 1A79709D0 */
#define g_1A7970A24                      dword_140404A6C[433434606]                   /* 1A7970A24 */
#define g_1A7970A78                      dword_140404A6C[433434627]                   /* 1A7970A78 */
#define g_1A7970ACC                      dword_140404A6C[433434648]                   /* 1A7970ACC */
#define g_1A7970B20                      dword_140404A6C[433434669]                   /* 1A7970B20 */
#define g_1A7970B74                      dword_140404A6C[433434690]                   /* 1A7970B74 */
#define g_1A7970BC8                      dword_140404A6C[433434711]                   /* 1A7970BC8 */
#define g_1A7970C1C                      dword_140404A6C[433434732]                   /* 1A7970C1C */
#define g_1A7970C70                      dword_140404A6C[433434753]                   /* 1A7970C70 */
#define g_1A7970CC4                      dword_140404A6C[433434774]                   /* 1A7970CC4 */
#define g_1A7970D18                      dword_140404A6C[433434795]                   /* 1A7970D18 */
#define g_1A7970D6C                      dword_140404A6C[433434816]                   /* 1A7970D6C */
#define g_1A7970DC0                      dword_140404A6C[433434837]                   /* 1A7970DC0 */
#define g_1A7970E14                      dword_140404A6C[433434858]                   /* 1A7970E14 */
#define g_1A7970E68                      dword_140404A6C[433434879]                   /* 1A7970E68 */
#define g_1A7970EBC                      dword_140404A6C[433434900]                   /* 1A7970EBC */
#define g_1A7970F10                      dword_140404A6C[433434921]                   /* 1A7970F10 */
#define g_1A7970F64                      dword_140404A6C[433434942]                   /* 1A7970F64 */
#define g_1A7970FB8                      dword_140404A6C[433434963]                   /* 1A7970FB8 */
#define g_1A797100C                      dword_140404A6C[433434984]                   /* 1A797100C */
#define g_1A7971060                      dword_140404A6C[433435005]                   /* 1A7971060 */
#define g_1A79710B4                      dword_140404A6C[433435026]                   /* 1A79710B4 */
#define g_1A7971108                      dword_140404A6C[433435047]                   /* 1A7971108 */
#define g_1A797115C                      dword_140404A6C[433435068]                   /* 1A797115C */
#define g_1A79711B0                      dword_140404A6C[433435089]                   /* 1A79711B0 */
#define g_1A7971204                      dword_140404A6C[433435110]                   /* 1A7971204 */
#define g_1A7971258                      dword_140404A6C[433435131]                   /* 1A7971258 */
#define g_1A79712AC                      dword_140404A6C[433435152]                   /* 1A79712AC */
#define g_1A7971300                      dword_140404A6C[433435173]                   /* 1A7971300 */
#define g_1A7971354                      dword_140404A6C[433435194]                   /* 1A7971354 */
#define g_1A79713A8                      dword_140404A6C[433435215]                   /* 1A79713A8 */
#define g_1A79713FC                      dword_140404A6C[433435236]                   /* 1A79713FC */
#define g_1A7971450                      dword_140404A6C[433435257]                   /* 1A7971450 */
#define g_1A79714A4                      dword_140404A6C[433435278]                   /* 1A79714A4 */
#define g_1A79714F8                      dword_140404A6C[433435299]                   /* 1A79714F8 */
#define g_1A797154C                      dword_140404A6C[433435320]                   /* 1A797154C */
#define g_1A79715A0                      dword_140404A6C[433435341]                   /* 1A79715A0 */
#define g_1A79715F4                      dword_140404A6C[433435362]                   /* 1A79715F4 */
#define g_1A7971648                      dword_140404A6C[433435383]                   /* 1A7971648 */
#define g_1A797169C                      dword_140404A6C[433435404]                   /* 1A797169C */
#define g_1A79716F0                      dword_140404A6C[433435425]                   /* 1A79716F0 */
#define g_1A7971744                      dword_140404A6C[433435446]                   /* 1A7971744 */
#define g_1A7971798                      dword_140404A6C[433435467]                   /* 1A7971798 */
#define g_1A79717EC                      dword_140404A6C[433435488]                   /* 1A79717EC */
#define g_1A7971840                      dword_140404A6C[433435509]                   /* 1A7971840 */
#define g_1A7971894                      dword_140404A6C[433435530]                   /* 1A7971894 */
#define g_1A79718E8                      dword_140404A6C[433435551]                   /* 1A79718E8 */
#define g_1A797193C                      dword_140404A6C[433435572]                   /* 1A797193C */
#define g_1A7971990                      dword_140404A6C[433435593]                   /* 1A7971990 */
#define g_1A79719E4                      dword_140404A6C[433435614]                   /* 1A79719E4 */
#define g_1A7971A38                      dword_140404A6C[433435635]                   /* 1A7971A38 */
#define g_1A7971A8C                      dword_140404A6C[433435656]                   /* 1A7971A8C */
#define g_1A7971AE0                      dword_140404A6C[433435677]                   /* 1A7971AE0 */
#define g_1A7971B34                      dword_140404A6C[433435698]                   /* 1A7971B34 */
#define g_1A7971B88                      dword_140404A6C[433435719]                   /* 1A7971B88 */
#define g_1A7971BDC                      dword_140404A6C[433435740]                   /* 1A7971BDC */
#define g_1A7971C30                      dword_140404A6C[433435761]                   /* 1A7971C30 */
#define g_1A7971C84                      dword_140404A6C[433435782]                   /* 1A7971C84 */
#define g_1A7971CD8                      dword_140404A6C[433435803]                   /* 1A7971CD8 */
#define g_1A7971D2C                      dword_140404A6C[433435824]                   /* 1A7971D2C */
#define world_effect_count               dword_140404A6C[433435845]                   /* 1A7971D80 src/engine/effect.h */
#define g_1A7971DA0                      dword_140404A6C[433435853]                   /* 1A7971DA0 */
#define g_1A7971DA4                      dword_140404A6C[433435854]                   /* 1A7971DA4 */
#define g_1A7971DC0                      dword_140404A6C[433435861]                   /* 1A7971DC0 */
#define g_1A7971DC8                      (*(_QWORD *)&dword_140404A6C[433435863])     /* 1A7971DC8 */
#define g_1A7971DD0                      dword_140404A6C[433435865]                   /* 1A7971DD0 */
#define g_1A7971DD4                      dword_140404A6C[433435866]                   /* 1A7971DD4 */
#define g_1A7971DD8                      dword_140404A6C[433435867]                   /* 1A7971DD8 */
#define g_1A7971DDC                      dword_140404A6C[433435868]                   /* 1A7971DDC */
#define g_1A7971DE0                      dword_140404A6C[433435869]                   /* 1A7971DE0 */
#define g_1A7971DE4                      dword_140404A6C[433435870]                   /* 1A7971DE4 */
#define g_1A7971DE8                      dword_140404A6C[433435871]                   /* 1A7971DE8 */
#define g_1A7971DEC                      dword_140404A6C[433435872]                   /* 1A7971DEC */
#define g_1A7971DF0                      dword_140404A6C[433435873]                   /* 1A7971DF0 */
#define g_1A7971DF4                      dword_140404A6C[433435874]                   /* 1A7971DF4 */
#define g_1A7971DF8                      dword_140404A6C[433435875]                   /* 1A7971DF8 */
#define g_1A7971DFC                      dword_140404A6C[433435876]                   /* 1A7971DFC */
#define g_1A7971E00                      dword_140404A6C[433435877]                   /* 1A7971E00 */
#define g_1A8572BC4                      dword_140404A6C[436582486]                   /* 1A8572BC4 */
#define g_1A8572C6C                      dword_140404A6C[436582528]                   /* 1A8572C6C */
#define renderer_sort_count              dword_140404A6C[436668493]                   /* 1A85C6BA0 src/engine/renderer.h */
#define g_1A85C6BA4                      dword_140404A6C[436668494]                   /* 1A85C6BA4 */
#define g_1A85C6BA8                      dword_140404A6C[436668495]                   /* 1A85C6BA8 */
#define g_1A85C6BAC                      dword_140404A6C[436668496]                   /* 1A85C6BAC */
#define g_1A85C6BB0                      dword_140404A6C[436668497]                   /* 1A85C6BB0 */
#define g_1A85C6BB4                      dword_140404A6C[436668498]                   /* 1A85C6BB4 */
#define g_1A85C6BB8                      dword_140404A6C[436668499]                   /* 1A85C6BB8 */
#define g_1A85C6BBC                      dword_140404A6C[436668500]                   /* 1A85C6BBC */
#define g_1A85C6BC0                      dword_140404A6C[436668501]                   /* 1A85C6BC0 */
#define g_1A85C6BC4                      dword_140404A6C[436668502]                   /* 1A85C6BC4 */
#define g_1A85C6BC8                      dword_140404A6C[436668503]                   /* 1A85C6BC8 */
#define g_1A85C6BCC                      dword_140404A6C[436668504]                   /* 1A85C6BCC */
#define g_1A85C6C6C                      dword_140404A6C[436668544]                   /* 1A85C6C6C */
#define g_1A87C6BA4                      dword_140404A6C[437192782]                   /* 1A87C6BA4 */
#define g_1A87C6BA8                      dword_140404A6C[437192783]                   /* 1A87C6BA8 */
#define g_1A87C6BAC                      dword_140404A6C[437192784]                   /* 1A87C6BAC */
#define g_1A87C6BB0                      dword_140404A6C[437192785]                   /* 1A87C6BB0 */
#define g_1A87C6BB4                      dword_140404A6C[437192786]                   /* 1A87C6BB4 */
#define g_1A87C6BB8                      dword_140404A6C[437192787]                   /* 1A87C6BB8 */
#define g_1A8A873C0                      dword_140404A6C[437914197]                   /* 1A8A873C0 */
#define g_1A8A873C4                      dword_140404A6C[437914198]                   /* 1A8A873C4 */
#define g_1A8A873C8                      dword_140404A6C[437914199]                   /* 1A8A873C8 */
#define g_1A8A873CC                      dword_140404A6C[437914200]                   /* 1A8A873CC */
#define g_1A8A873DC                      dword_140404A6C[437914204]                   /* 1A8A873DC */
#define g_1A8A873E0                      dword_140404A6C[437914205]                   /* 1A8A873E0 */
#define g_1A8A873E4                      dword_140404A6C[437914206]                   /* 1A8A873E4 */
#define g_1A8A873F0                      (*(float *)&dword_140404A6C[437914209])      /* 1A8A873F0 */
#define g_1A8A873F4                      dword_140404A6C[437914210]                   /* 1A8A873F4 */
#define g_1A8A873F8                      dword_140404A6C[437914211]                   /* 1A8A873F8 */
#define g_1A8A873FC                      dword_140404A6C[437914212]                   /* 1A8A873FC */
#define g_1A8A87408                      (*(float *)&dword_140404A6C[437914215])      /* 1A8A87408 */
#define g_1A8A8740C                      dword_140404A6C[437914216]                   /* 1A8A8740C */
#define g_1A8A87410                      dword_140404A6C[437914217]                   /* 1A8A87410 */
#define g_1A8A87414                      dword_140404A6C[437914218]                   /* 1A8A87414 */
#define g_1A8A87418                      dword_140404A6C[437914219]                   /* 1A8A87418 */
#define g_1A8A8741C                      dword_140404A6C[437914220]                   /* 1A8A8741C */
#define g_1A8A879C0                      dword_140404A6C[437914581]                   /* 1A8A879C0 */
#define g_1A8A879C4                      dword_140404A6C[437914582]                   /* 1A8A879C4 */
#define g_1A8A879C8                      dword_140404A6C[437914583]                   /* 1A8A879C8 */
#define g_1A8A879CC                      dword_140404A6C[437914584]                   /* 1A8A879CC */
#define g_1A8A879D4                      dword_140404A6C[437914586]                   /* 1A8A879D4 */
#define g_1A8A879D8                      dword_140404A6C[437914587]                   /* 1A8A879D8 */
#define g_1A8A879DC                      dword_140404A6C[437914588]                   /* 1A8A879DC */
#define g_1A8A879E0                      dword_140404A6C[437914589]                   /* 1A8A879E0 */
#define g_1A8A879E4                      dword_140404A6C[437914590]                   /* 1A8A879E4 */
#define g_1A8A879E8                      dword_140404A6C[437914591]                   /* 1A8A879E8 */
#define g_1A8A879F0                      dword_140404A6C[437914593]                   /* 1A8A879F0 */
#define g_1A8A879F4                      dword_140404A6C[437914594]                   /* 1A8A879F4 */
#define renderer_current_font            dword_140404A6C[438291413]                   /* 1A8BF79C0 src/engine/camera.h */
#define renderer_canvas_width            (*(float *)&dword_140404A6C[438291414])      /* 1A8BF79C4 src/engine/camera.h */
#define renderer_canvas_height           (*(float *)&dword_140404A6C[438291415])      /* 1A8BF79C8 src/engine/camera.h */
#define world_bullet_count               dword_140404A6C[438881242]                   /* 1A8E379D4 src/engine/bullet.h */
#define g_1A8E379E0                      dword_140404A6C[438881245]                   /* 1A8E379E0 */
#define g_1A8E379E8                      dword_140404A6C[438881247]                   /* 1A8E379E8 */
#define g_1A8E379EC                      dword_140404A6C[438881248]                   /* 1A8E379EC */
#define g_1A8E37A2C                      dword_140404A6C[438881264]                   /* 1A8E37A2C */
#define g_1A8E3C9E0                      dword_140404A6C[438886365]                   /* 1A8E3C9E0 */
#define g_1A8E3C9E4                      dword_140404A6C[438886366]                   /* 1A8E3C9E4 */
#define g_1A8E3C9E8                      dword_140404A6C[438886367]                   /* 1A8E3C9E8 */
#define g_1A8E3CA00                      dword_140404A6C[438886373]                   /* 1A8E3CA00 */
#define g_1A8E3DA00                      dword_140404A6C[438887397]                   /* 1A8E3DA00 */
#define g_1A8E3DA24                      dword_140404A6C[438887406]                   /* 1A8E3DA24 */
#define g_1A8E3DA28                      dword_140404A6C[438887407]                   /* 1A8E3DA28 */
#define g_1A8E3DA38                      dword_140404A6C[438887411]                   /* 1A8E3DA38 */
#define g_1A8E3DA3C                      dword_140404A6C[438887412]                   /* 1A8E3DA3C */
#define g_1A8E3DA40                      dword_140404A6C[438887413]                   /* 1A8E3DA40 */
#define g_1A8E3DA44                      dword_140404A6C[438887414]                   /* 1A8E3DA44 */
#define g_1A8E3DA74                      dword_140404A6C[438887426]                   /* 1A8E3DA74 */
#define g_1A8E3DA7C                      dword_140404A6C[438887428]                   /* 1A8E3DA7C */
#define g_1A8E3DA80                      dword_140404A6C[438887429]                   /* 1A8E3DA80 */
#define g_1A8E3DA84                      dword_140404A6C[438887430]                   /* 1A8E3DA84 */
#define g_1A8E3DA88                      dword_140404A6C[438887431]                   /* 1A8E3DA88 */
#define g_1A8E3DA8C                      dword_140404A6C[438887432]                   /* 1A8E3DA8C */
#define g_1A8E3DA9C                      dword_140404A6C[438887436]                   /* 1A8E3DA9C */
#define g_1A8E3DAA0                      dword_140404A6C[438887437]                   /* 1A8E3DAA0 */
#define g_1A8E3DBBC                      dword_140404A6C[438887508]                   /* 1A8E3DBBC */
#define g_1A8E3DBC0                      dword_140404A6C[438887509]                   /* 1A8E3DBC0 */
#define g_1A8E447C0                      dword_140404A6C[438894421]                   /* 1A8E447C0 */
#define g_1A8E447C4                      dword_140404A6C[438894422]                   /* 1A8E447C4 */
#define g_1A8E447C8                      dword_140404A6C[438894423]                   /* 1A8E447C8 */
#define g_1A8E447D0                      dword_140404A6C[438894425]                   /* 1A8E447D0 */
#define g_1A8E477E0                      dword_140404A6C[438897501]                   /* 1A8E477E0 */
#define g_1A8E617E0                      dword_140404A6C[438924125]                   /* 1A8E617E0 */
#define g_1A8E617E4                      dword_140404A6C[438924126]                   /* 1A8E617E4 */
#define g_1A8E617E8                      dword_140404A6C[438924127]                   /* 1A8E617E8 */
#define g_1A8E617EC                      dword_140404A6C[438924128]                   /* 1A8E617EC */
#define g_1A8E617F0                      dword_140404A6C[438924129]                   /* 1A8E617F0 */
#define g_1A8E617F4                      dword_140404A6C[438924130]                   /* 1A8E617F4 */
#define g_1A8E6B7E4                      dword_140404A6C[438934366]                   /* 1A8E6B7E4 */
#define g_1A8E6B7EC                      dword_140404A6C[438934368]                   /* 1A8E6B7EC */
#define g_1A8E6BBF0                      dword_140404A6C[438934625]                   /* 1A8E6BBF0 */
#define g_1A8E6BBF4                      dword_140404A6C[438934626]                   /* 1A8E6BBF4 */
#define g_1A8E6BBFC                      dword_140404A6C[438934628]                   /* 1A8E6BBFC */
#define g_1ABC2D840                      dword_140404A6C[450929525]                   /* 1ABC2D840 */
#define g_1ABC2D894                      dword_140404A6C[450929546]                   /* 1ABC2D894 */
#define g_1ABC2D8A0                      dword_140404A6C[450929549]                   /* 1ABC2D8A0 */
#define g_1ABC2D9DC                      dword_140404A6C[450929628]                   /* 1ABC2D9DC */
#define g_1ABC4D5E0                      (*(_QWORD *)&dword_140404A6C[450962141])     /* 1ABC4D5E0 */
#define g_1ABC4D5E8                      dword_140404A6C[450962143]                   /* 1ABC4D5E8 */
#define g_1ABC5B604                      dword_140404A6C[450976486]                   /* 1ABC5B604 */
#define g_1ABC5B60C                      dword_140404A6C[450976488]                   /* 1ABC5B60C */
#define g_1ABC89C00                      dword_140404A6C[451023973]                   /* 1ABC89C00 */
#define g_1ABC89C40                      dword_140404A6C[451023989]                   /* 1ABC89C40 */
#define g_1ABC89C44                      dword_140404A6C[451023990]                   /* 1ABC89C44 */
#define g_1ABC89C48                      dword_140404A6C[451023991]                   /* 1ABC89C48 */
#define g_1ABC89C4C                      dword_140404A6C[451023992]                   /* 1ABC89C4C */
#define g_1ABC89C50                      dword_140404A6C[451023993]                   /* 1ABC89C50 */
#define g_1ABC89C5C                      dword_140404A6C[451023996]                   /* 1ABC89C5C */
#define g_1ABC89C60                      dword_140404A6C[451023997]                   /* 1ABC89C60 */
#define g_1ABC89C64                      dword_140404A6C[451023998]                   /* 1ABC89C64 */
#define g_1ABC89C74                      dword_140404A6C[451024002]                   /* 1ABC89C74 */
#define g_1ABC89C78                      dword_140404A6C[451024003]                   /* 1ABC89C78 */
#define g_1ABC89C7C                      dword_140404A6C[451024004]                   /* 1ABC89C7C */
#define g_1ABC89C80                      dword_140404A6C[451024005]                   /* 1ABC89C80 */
#define g_1ABC89C84                      dword_140404A6C[451024006]                   /* 1ABC89C84 */
#define g_1ABC89C88                      dword_140404A6C[451024007]                   /* 1ABC89C88 */
#define g_1ABC89DB8                      dword_140404A6C[451024083]                   /* 1ABC89DB8 */
#define g_1ABC89DBC                      dword_140404A6C[451024084]                   /* 1ABC89DBC */
#define g_1ABC89DC4                      dword_140404A6C[451024086]                   /* 1ABC89DC4 */
#define g_1ABC89DC8                      dword_140404A6C[451024087]                   /* 1ABC89DC8 */
#define g_1ABC89DCC                      dword_140404A6C[451024088]                   /* 1ABC89DCC */
#define g_1ABC89DD0                      dword_140404A6C[451024089]                   /* 1ABC89DD0 */
#define g_1ABC8CC40                      dword_140404A6C[451027061]                   /* 1ABC8CC40 */
#define g_1ABC8FC80                      dword_140404A6C[451030149]                   /* 1ABC8FC80 */
#define g_1ABC92CC0                      dword_140404A6C[451033237]                   /* 1ABC92CC0 */
#define g_1ABC95D00                      dword_140404A6C[451036325]                   /* 1ABC95D00 */
#define g_1ABC98D40                      dword_140404A6C[451039413]                   /* 1ABC98D40 */
#define g_1ABC9BD80                      dword_140404A6C[451042501]                   /* 1ABC9BD80 */
#define g_1ABC9EDC0                      dword_140404A6C[451045589]                   /* 1ABC9EDC0 */
#define g_1ABCA1E00                      dword_140404A6C[451048677]                   /* 1ABCA1E00 */
#define g_1ABCA4E40                      dword_140404A6C[451051765]                   /* 1ABCA4E40 */
#define g_1ABCA7E80                      dword_140404A6C[451054853]                   /* 1ABCA7E80 */
#define g_1ABCAAEC0                      dword_140404A6C[451057941]                   /* 1ABCAAEC0 */
#define g_1ABCADF00                      dword_140404A6C[451061029]                   /* 1ABCADF00 */
#define g_1ABCB0F40                      dword_140404A6C[451064117]                   /* 1ABCB0F40 */
#define g_1ABCB3F80                      dword_140404A6C[451067205]                   /* 1ABCB3F80 */
#define g_1ABCB6FC0                      dword_140404A6C[451070293]                   /* 1ABCB6FC0 */
#define g_1ABCBA000                      dword_140404A6C[451073381]                   /* 1ABCBA000 */
#define g_1ABCBD040                      dword_140404A6C[451076469]                   /* 1ABCBD040 */
#define g_1ABCC0080                      dword_140404A6C[451079557]                   /* 1ABCC0080 */
#define g_1ABCC30C0                      dword_140404A6C[451082645]                   /* 1ABCC30C0 */
#define g_1ABCC6100                      dword_140404A6C[451085733]                   /* 1ABCC6100 */
#define g_1ABCC9140                      dword_140404A6C[451088821]                   /* 1ABCC9140 */
#define g_1ABCCC180                      dword_140404A6C[451091909]                   /* 1ABCCC180 */
#define g_1ABCCF1C0                      dword_140404A6C[451094997]                   /* 1ABCCF1C0 */
#define g_1ABCD2200                      dword_140404A6C[451098085]                   /* 1ABCD2200 */
#define g_1ABCD5240                      dword_140404A6C[451101173]                   /* 1ABCD5240 */
#define g_1ABCD8280                      dword_140404A6C[451104261]                   /* 1ABCD8280 */
#define g_1ABCDB2C0                      dword_140404A6C[451107349]                   /* 1ABCDB2C0 */
#define g_1ABCDE300                      dword_140404A6C[451110437]                   /* 1ABCDE300 */
#define g_1ABCE1340                      dword_140404A6C[451113525]                   /* 1ABCE1340 */
#define g_1ABCE4380                      dword_140404A6C[451116613]                   /* 1ABCE4380 */
#define g_1ABCE73C0                      dword_140404A6C[451119701]                   /* 1ABCE73C0 */
#define g_1ABCEA400                      dword_140404A6C[451122789]                   /* 1ABCEA400 */
#define g_1ABCED440                      dword_140404A6C[451125877]                   /* 1ABCED440 */
#define g_1ABCF0480                      dword_140404A6C[451128965]                   /* 1ABCF0480 */
#define g_1ABCF34C0                      dword_140404A6C[451132053]                   /* 1ABCF34C0 */
#define g_1ABCF6500                      dword_140404A6C[451135141]                   /* 1ABCF6500 */
#define g_1ABCF9540                      dword_140404A6C[451138229]                   /* 1ABCF9540 */
#define g_1ABCFC580                      dword_140404A6C[451141317]                   /* 1ABCFC580 */
#define g_1ABCFF5C0                      dword_140404A6C[451144405]                   /* 1ABCFF5C0 */
#define g_1ABD02600                      dword_140404A6C[451147493]                   /* 1ABD02600 */
#define g_1ABD05640                      dword_140404A6C[451150581]                   /* 1ABD05640 */
#define g_1ABD08680                      dword_140404A6C[451153669]                   /* 1ABD08680 */
#define g_1ABD0B6C0                      dword_140404A6C[451156757]                   /* 1ABD0B6C0 */
#define g_1ABD0E700                      dword_140404A6C[451159845]                   /* 1ABD0E700 */
#define g_1ABD11740                      dword_140404A6C[451162933]                   /* 1ABD11740 */
#define g_1ABD14780                      dword_140404A6C[451166021]                   /* 1ABD14780 */
#define g_1ABD177C0                      dword_140404A6C[451169109]                   /* 1ABD177C0 */
#define g_1ABD1A800                      dword_140404A6C[451172197]                   /* 1ABD1A800 */
#define g_1ABD1D840                      dword_140404A6C[451175285]                   /* 1ABD1D840 */
#define g_1ABD20880                      dword_140404A6C[451178373]                   /* 1ABD20880 */
#define g_1ABD238C0                      dword_140404A6C[451181461]                   /* 1ABD238C0 */
#define g_1ABD26900                      dword_140404A6C[451184549]                   /* 1ABD26900 */
#define g_1ABD29940                      dword_140404A6C[451187637]                   /* 1ABD29940 */
#define g_1ABD2C980                      dword_140404A6C[451190725]                   /* 1ABD2C980 */
#define g_1ABD2F9C0                      dword_140404A6C[451193813]                   /* 1ABD2F9C0 */
#define g_1ABD32A00                      dword_140404A6C[451196901]                   /* 1ABD32A00 */
#define g_1ABD35A40                      dword_140404A6C[451199989]                   /* 1ABD35A40 */
#define g_1ABD38A80                      dword_140404A6C[451203077]                   /* 1ABD38A80 */
#define g_1ABD3BAC0                      dword_140404A6C[451206165]                   /* 1ABD3BAC0 */
#define g_1ABD3EB00                      dword_140404A6C[451209253]                   /* 1ABD3EB00 */
#define g_1ABD41B40                      dword_140404A6C[451212341]                   /* 1ABD41B40 */
#define g_1ABD44B80                      dword_140404A6C[451215429]                   /* 1ABD44B80 */
#define g_1ABD47BC0                      dword_140404A6C[451218517]                   /* 1ABD47BC0 */
#define renderer_ui_program              dword_140404A6C[451221605]                   /* 1ABD4AC00 src/engine/renderer.h */
#define g_1ABD4AC04                      dword_140404A6C[451221606]                   /* 1ABD4AC04 */
#define g_1ABD4AC08                      dword_140404A6C[451221607]                   /* 1ABD4AC08 */
#define renderer_ui_matrix_uniform       dword_140404A6C[451221610]                   /* 1ABD4AC14 src/engine/renderer.h */
#define g_1ABD4AC34                      dword_140404A6C[451221618]                   /* 1ABD4AC34 */
#define renderer_white_texture           dword_140404A6C[451221642]                   /* 1ABD4AC94 src/engine/world_effects_draw.c */
#define g_1ABD4AC98                      dword_140404A6C[451221643]                   /* 1ABD4AC98 */
#define renderer_quad_buffer             dword_140404A6C[451221644]                   /* 1ABD4AC9C src/engine/renderer.h */
#define g_1ABD4ACA0                      dword_140404A6C[451221645]                   /* 1ABD4ACA0 */
#define g_1ABD4ADBC                      dword_140404A6C[451221716]                   /* 1ABD4ADBC */
#define g_1ABD4ADC0                      dword_140404A6C[451221717]                   /* 1ABD4ADC0 */
#define item_link_peer_count             dword_140404A6C[456202445]                   /* 1AD04ADA0 src/engine/item.h */
#define game_connected                   dword_140404A6C[456202453]                   /* 1AD04ADC0 src/engine/frame.h */
#define g_1AD04ADC8                      dword_140404A6C[456202455]                   /* 1AD04ADC8 */
#define g_1AD04ADCC                      dword_140404A6C[456202456]                   /* 1AD04ADCC */
#define g_1AD04ADD0                      dword_140404A6C[456202457]                   /* 1AD04ADD0 */
#define g_1AD04ADD4                      (*(_OWORD *)&dword_140404A6C[456202458])     /* 1AD04ADD4 */
#define g_1AD04ADE4                      (*(_OWORD *)&dword_140404A6C[456202462])     /* 1AD04ADE4 */
#define g_1AD04B1D4                      dword_140404A6C[456202714]                   /* 1AD04B1D4 */
#define g_1AD04B1D8                      dword_140404A6C[456202715]                   /* 1AD04B1D8 */
#define g_1AD04B1E0                      (*(_QWORD *)&dword_140404A6C[456202717])     /* 1AD04B1E0 */
#define g_1AD04B1E8                      dword_140404A6C[456202719]                   /* 1AD04B1E8 */
#define g_1AD04B1EC                      dword_140404A6C[456202720]                   /* 1AD04B1EC */
#define g_1AD04B1F0                      dword_140404A6C[456202721]                   /* 1AD04B1F0 */
#define g_1AD04B1F4                      dword_140404A6C[456202722]                   /* 1AD04B1F4 */
#define g_1AD04B1FC                      dword_140404A6C[456202724]                   /* 1AD04B1FC */
#define g_1AD04B20C                      dword_140404A6C[456202728]                   /* 1AD04B20C */
#define g_1AD04B210                      dword_140404A6C[456202729]                   /* 1AD04B210 */
#define g_1AD04B214                      dword_140404A6C[456202730]                   /* 1AD04B214 */
#define g_1AD04B218                      dword_140404A6C[456202731]                   /* 1AD04B218 */
#define g_1AD04B21C                      dword_140404A6C[456202732]                   /* 1AD04B21C */
#define g_1AD04B220                      dword_140404A6C[456202733]                   /* 1AD04B220 */
#define g_1AD04B228                      dword_140404A6C[456202735]                   /* 1AD04B228 */
#define g_1AD04B22C                      dword_140404A6C[456202736]                   /* 1AD04B22C */
#define g_1AD04B230                      (*(_QWORD *)&dword_140404A6C[456202737])     /* 1AD04B230 */
#define g_1AD04B238                      dword_140404A6C[456202739]                   /* 1AD04B238 */
#define g_1AD04B23C                      dword_140404A6C[456202740]                   /* 1AD04B23C */
#define g_1AD04B25C                      dword_140404A6C[456202748]                   /* 1AD04B25C */
#define g_1AD059440                      dword_140404A6C[456217205]                   /* 1AD059440 */
#define g_1AD059444                      dword_140404A6C[456217206]                   /* 1AD059444 */
#define g_1AD059448                      dword_140404A6C[456217207]                   /* 1AD059448 */
#define g_1AD05944C                      dword_140404A6C[456217208]                   /* 1AD05944C */
#define g_1AD059450                      dword_140404A6C[456217209]                   /* 1AD059450 */
#define g_1AD059454                      dword_140404A6C[456217210]                   /* 1AD059454 */
#define g_1AD059458                      dword_140404A6C[456217211]                   /* 1AD059458 */
#define g_1AD05945C                      dword_140404A6C[456217212]                   /* 1AD05945C */
#define g_1AD059460                      (*(float *)&dword_140404A6C[456217213])      /* 1AD059460 */
#define g_1AD059464                      dword_140404A6C[456217214]                   /* 1AD059464 */
#define g_1AD059468                      dword_140404A6C[456217215]                   /* 1AD059468 */
#define g_1AD05946C                      dword_140404A6C[456217216]                   /* 1AD05946C */
#define g_1AD059470                      dword_140404A6C[456217217]                   /* 1AD059470 */
#define g_1AD059474                      dword_140404A6C[456217218]                   /* 1AD059474 */
#define g_1AD059478                      (*(float *)&dword_140404A6C[456217219])      /* 1AD059478 */
#define g_1AD05947C                      dword_140404A6C[456217220]                   /* 1AD05947C */
#define g_1AD059480                      (*(_QWORD *)&dword_140404A6C[456217221])     /* 1AD059480 */
#define g_1AD059484                      dword_140404A6C[456217222]                   /* 1AD059484 */
#define g_1AD059488                      dword_140404A6C[456217223]                   /* 1AD059488 */
#define g_1AD05948C                      dword_140404A6C[456217224]                   /* 1AD05948C */
#define g_1AD059490                      (*(float *)&dword_140404A6C[456217225])      /* 1AD059490 */
#define g_1AD059494                      dword_140404A6C[456217226]                   /* 1AD059494 */
#define g_1AD059498                      (*(_QWORD *)&dword_140404A6C[456217227])     /* 1AD059498 */
#define g_1AD05949C                      dword_140404A6C[456217228]                   /* 1AD05949C */
#define g_1AD0594A0                      dword_140404A6C[456217229]                   /* 1AD0594A0 */
#define g_1AD0594A4                      dword_140404A6C[456217230]                   /* 1AD0594A4 */
#define g_1AD0594A8                      dword_140404A6C[456217231]                   /* 1AD0594A8 */
#define g_1AD0594AC                      dword_140404A6C[456217232]                   /* 1AD0594AC */
#define g_1AD299450                      (*(_OWORD *)&dword_140404A6C[456807033])     /* 1AD299450 */
#define g_1AD299454                      dword_140404A6C[456807034]                   /* 1AD299454 */
#define g_1AD299458                      dword_140404A6C[456807035]                   /* 1AD299458 */
#define g_1AD29945C                      dword_140404A6C[456807036]                   /* 1AD29945C */
#define g_1AD299460                      dword_140404A6C[456807037]                   /* 1AD299460 */
#define g_1AD299464                      dword_140404A6C[456807038]                   /* 1AD299464 */
#define g_1AD299468                      dword_140404A6C[456807039]                   /* 1AD299468 */
#define g_1AD29946C                      dword_140404A6C[456807040]                   /* 1AD29946C */
#define g_1AD299470                      dword_140404A6C[456807041]                   /* 1AD299470 */
#define g_1AD299474                      dword_140404A6C[456807042]                   /* 1AD299474 */
#define g_1AD2C94A0                      dword_140404A6C[456856205]                   /* 1AD2C94A0 */
#define g_1AD2C94E0                      dword_140404A6C[456856221]                   /* 1AD2C94E0 */
#define g_1AD2C94E4                      dword_140404A6C[456856222]                   /* 1AD2C94E4 */
#define g_1AD2C94E8                      dword_140404A6C[456856223]                   /* 1AD2C94E8 */
#define g_1AD2C94EC                      dword_140404A6C[456856224]                   /* 1AD2C94EC */
#define g_1AD2C94F0                      dword_140404A6C[456856225]                   /* 1AD2C94F0 */
#define g_1AD2C94F4                      dword_140404A6C[456856226]                   /* 1AD2C94F4 */
#define g_1AE1C94F8                      dword_140404A6C[460788387]                   /* 1AE1C94F8 */
#define g_1AE1C94FC                      dword_140404A6C[460788388]                   /* 1AE1C94FC */
#define g_1AE1C9500                      dword_140404A6C[460788389]                   /* 1AE1C9500 */
#define g_1AE1C9504                      dword_140404A6C[460788390]                   /* 1AE1C9504 */
#define g_1AE1C9508                      dword_140404A6C[460788391]                   /* 1AE1C9508 */
#define g_1AE1C950C                      dword_140404A6C[460788392]                   /* 1AE1C950C */
#define g_1AF0C9510                      dword_140404A6C[464720553]                   /* 1AF0C9510 */
#define g_1AF0C9514                      dword_140404A6C[464720554]                   /* 1AF0C9514 */
#define g_1AF0C9518                      dword_140404A6C[464720555]                   /* 1AF0C9518 */
#define g_1AF0C951C                      dword_140404A6C[464720556]                   /* 1AF0C951C */
#define g_1AF0C9520                      dword_140404A6C[464720557]                   /* 1AF0C9520 */
#define g_1AF0C9524                      dword_140404A6C[464720558]                   /* 1AF0C9524 */
#define g_1AF0C9528                      dword_140404A6C[464720559]                   /* 1AF0C9528 */
#define g_1AF0C9530                      dword_140404A6C[464720561]                   /* 1AF0C9530 */
#define g_1AF0C9534                      dword_140404A6C[464720562]                   /* 1AF0C9534 */
#define g_1AF0C9538                      (*(_QWORD *)&dword_140404A6C[464720563])     /* 1AF0C9538 */
#define g_1AF0C953C                      dword_140404A6C[464720564]                   /* 1AF0C953C */
#define g_1AF0C9540                      dword_140404A6C[464720565]                   /* 1AF0C9540 */
#define g_1AF0C9548                      dword_140404A6C[464720567]                   /* 1AF0C9548 */
#define g_1AF0C954C                      dword_140404A6C[464720568]                   /* 1AF0C954C */
#define g_1AF0C9550                      (*(_QWORD *)&dword_140404A6C[464720569])     /* 1AF0C9550 */
#define g_1AF0C9554                      dword_140404A6C[464720570]                   /* 1AF0C9554 */
#define g_1AF0C9558                      dword_140404A6C[464720571]                   /* 1AF0C9558 */
#define g_1AF0C9560                      dword_140404A6C[464720573]                   /* 1AF0C9560 */
#define g_1AF0C9564                      dword_140404A6C[464720574]                   /* 1AF0C9564 */
#define g_1AF0C9568                      (*(_QWORD *)&dword_140404A6C[464720575])     /* 1AF0C9568 */
#define g_1AF0C956C                      dword_140404A6C[464720576]                   /* 1AF0C956C */
#define g_1AF0C9570                      dword_140404A6C[464720577]                   /* 1AF0C9570 */
#define g_1AF0C9578                      dword_140404A6C[464720579]                   /* 1AF0C9578 */
#define g_1AF0C957C                      dword_140404A6C[464720580]                   /* 1AF0C957C */
#define g_1AF0C9580                      (*(_QWORD *)&dword_140404A6C[464720581])     /* 1AF0C9580 */
#define g_1AF0C9584                      dword_140404A6C[464720582]                   /* 1AF0C9584 */
#define g_1AF0C9588                      dword_140404A6C[464720583]                   /* 1AF0C9588 */
#define g_1AF0C9590                      dword_140404A6C[464720585]                   /* 1AF0C9590 */
#define g_1AF0C9594                      dword_140404A6C[464720586]                   /* 1AF0C9594 */
#define g_1AF0C9598                      (*(_QWORD *)&dword_140404A6C[464720587])     /* 1AF0C9598 */
#define g_1AF0C959C                      dword_140404A6C[464720588]                   /* 1AF0C959C */
#define g_1AF0C95A0                      dword_140404A6C[464720589]                   /* 1AF0C95A0 */
#define g_1AF0C95A8                      dword_140404A6C[464720591]                   /* 1AF0C95A8 */
#define g_1AF0C95AC                      dword_140404A6C[464720592]                   /* 1AF0C95AC */
#define g_1AF0C95B0                      (*(_QWORD *)&dword_140404A6C[464720593])     /* 1AF0C95B0 */
#define g_1AF0C95B4                      dword_140404A6C[464720594]                   /* 1AF0C95B4 */
#define g_1AF0C95B8                      dword_140404A6C[464720595]                   /* 1AF0C95B8 */
#define g_1AF0C95C0                      dword_140404A6C[464720597]                   /* 1AF0C95C0 */
#define g_1AF0C95C4                      dword_140404A6C[464720598]                   /* 1AF0C95C4 */
#define g_1AF0C95C8                      (*(_QWORD *)&dword_140404A6C[464720599])     /* 1AF0C95C8 */
#define g_1AF0C95CC                      dword_140404A6C[464720600]                   /* 1AF0C95CC */
#define g_1AF0C95D0                      dword_140404A6C[464720601]                   /* 1AF0C95D0 */
#define g_1AF0C95D8                      dword_140404A6C[464720603]                   /* 1AF0C95D8 */
#define g_1AF0C95DC                      dword_140404A6C[464720604]                   /* 1AF0C95DC */
#define g_1AF0C95E0                      (*(_QWORD *)&dword_140404A6C[464720605])     /* 1AF0C95E0 */
#define g_1AF0C95E4                      dword_140404A6C[464720606]                   /* 1AF0C95E4 */
#define g_1AF0C95E8                      dword_140404A6C[464720607]                   /* 1AF0C95E8 */
#define g_1AF0C95F0                      dword_140404A6C[464720609]                   /* 1AF0C95F0 */
#define g_1AF0C95F4                      dword_140404A6C[464720610]                   /* 1AF0C95F4 */
#define g_1AF0C95F8                      (*(_QWORD *)&dword_140404A6C[464720611])     /* 1AF0C95F8 */
#define g_1AF0C95FC                      dword_140404A6C[464720612]                   /* 1AF0C95FC */
#define g_1AF0C9600                      dword_140404A6C[464720613]                   /* 1AF0C9600 */
#define g_1AF0C9608                      dword_140404A6C[464720615]                   /* 1AF0C9608 */
#define g_1AF0C960C                      dword_140404A6C[464720616]                   /* 1AF0C960C */
#define g_1AF0C9610                      (*(_QWORD *)&dword_140404A6C[464720617])     /* 1AF0C9610 */
#define g_1AF0C9614                      dword_140404A6C[464720618]                   /* 1AF0C9614 */
#define g_1AF0C9618                      dword_140404A6C[464720619]                   /* 1AF0C9618 */
#define g_1AF0C9620                      dword_140404A6C[464720621]                   /* 1AF0C9620 */
#define g_1AF0C9624                      dword_140404A6C[464720622]                   /* 1AF0C9624 */
#define g_1AF0C9628                      (*(_QWORD *)&dword_140404A6C[464720623])     /* 1AF0C9628 */
#define g_1AF0C962C                      dword_140404A6C[464720624]                   /* 1AF0C962C */
#define g_1AF0C9630                      dword_140404A6C[464720625]                   /* 1AF0C9630 */
#define g_1AF0C9638                      dword_140404A6C[464720627]                   /* 1AF0C9638 */
#define g_1AF0C963C                      dword_140404A6C[464720628]                   /* 1AF0C963C */
#define g_1AF0C9640                      (*(_QWORD *)&dword_140404A6C[464720629])     /* 1AF0C9640 */
#define g_1AF0C9644                      dword_140404A6C[464720630]                   /* 1AF0C9644 */
#define g_1AF0C9648                      dword_140404A6C[464720631]                   /* 1AF0C9648 */
#define g_1AF0C9650                      dword_140404A6C[464720633]                   /* 1AF0C9650 */
#define g_1AF0C9654                      dword_140404A6C[464720634]                   /* 1AF0C9654 */
#define g_1AF0C9658                      (*(_QWORD *)&dword_140404A6C[464720635])     /* 1AF0C9658 */
#define g_1AF0C965C                      dword_140404A6C[464720636]                   /* 1AF0C965C */
#define g_1AF0C9660                      dword_140404A6C[464720637]                   /* 1AF0C9660 */
#define g_1AF0C9668                      dword_140404A6C[464720639]                   /* 1AF0C9668 */
#define g_1AF0C966C                      dword_140404A6C[464720640]                   /* 1AF0C966C */
#define g_1AF0C9670                      (*(_QWORD *)&dword_140404A6C[464720641])     /* 1AF0C9670 */
#define g_1AF0C9674                      dword_140404A6C[464720642]                   /* 1AF0C9674 */
#define g_1AF0C9678                      dword_140404A6C[464720643]                   /* 1AF0C9678 */
#define g_1AF0C9680                      dword_140404A6C[464720645]                   /* 1AF0C9680 */
#define g_1AF0C9684                      dword_140404A6C[464720646]                   /* 1AF0C9684 */
#define g_1AF0C9688                      (*(_QWORD *)&dword_140404A6C[464720647])     /* 1AF0C9688 */
#define g_1AF0C968C                      dword_140404A6C[464720648]                   /* 1AF0C968C */
#define g_1AF0C9810                      (*(float *)&dword_140404A6C[464720745])      /* 1AF0C9810 */
#define g_1AF0C9814                      (*(float *)&dword_140404A6C[464720746])      /* 1AF0C9814 */
#define g_1AF0C9818                      (*(float *)&dword_140404A6C[464720747])      /* 1AF0C9818 */
#define g_1AF0C981C                      (*(_OWORD *)&dword_140404A6C[464720748])     /* 1AF0C981C */
#define g_1AF0C9820                      (*(float *)&dword_140404A6C[464720749])      /* 1AF0C9820 */
#define g_1AF0C9824                      (*(float *)&dword_140404A6C[464720750])      /* 1AF0C9824 */
#define g_1AF0C9828                      dword_140404A6C[464720751]                   /* 1AF0C9828 */
#define g_1AF0C982C                      dword_140404A6C[464720752]                   /* 1AF0C982C */
#define g_1AF0C9830                      dword_140404A6C[464720753]                   /* 1AF0C9830 */
#define g_1AF0C9834                      (*(float *)&dword_140404A6C[464720754])      /* 1AF0C9834 */
#define g_1AF0C9838                      (*(float *)&dword_140404A6C[464720755])      /* 1AF0C9838 */
#define g_1AF0C983C                      (*(float *)&dword_140404A6C[464720756])      /* 1AF0C983C */
#define g_1AFFC984C                      dword_140404A6C[468652920]                   /* 1AFFC984C */
#define g_1AFFC9854                      dword_140404A6C[468652922]                   /* 1AFFC9854 */
#define g_1AFFC9858                      dword_140404A6C[468652923]                   /* 1AFFC9858 */
#define g_1AFFC985C                      (*(_QWORD *)&dword_140404A6C[468652924])     /* 1AFFC985C */
#define g_1AFFC9860                      dword_140404A6C[468652925]                   /* 1AFFC9860 */
#define g_1AFFC9864                      dword_140404A6C[468652926]                   /* 1AFFC9864 */
#define g_1AFFC986C                      dword_140404A6C[468652928]                   /* 1AFFC986C */
#define g_1AFFC9870                      dword_140404A6C[468652929]                   /* 1AFFC9870 */
#define g_1AFFC9874                      (*(_QWORD *)&dword_140404A6C[468652930])     /* 1AFFC9874 */
#define g_1AFFC9878                      dword_140404A6C[468652931]                   /* 1AFFC9878 */
#define g_1AFFC987C                      dword_140404A6C[468652932]                   /* 1AFFC987C */
#define g_1AFFC9884                      dword_140404A6C[468652934]                   /* 1AFFC9884 */
#define g_1AFFC9888                      dword_140404A6C[468652935]                   /* 1AFFC9888 */
#define g_1AFFC988C                      (*(_QWORD *)&dword_140404A6C[468652936])     /* 1AFFC988C */
#define g_1AFFC9890                      dword_140404A6C[468652937]                   /* 1AFFC9890 */
#define g_1AFFC9894                      dword_140404A6C[468652938]                   /* 1AFFC9894 */
#define g_1AFFC989C                      dword_140404A6C[468652940]                   /* 1AFFC989C */
#define g_1AFFC98A0                      dword_140404A6C[468652941]                   /* 1AFFC98A0 */
#define g_1AFFC98A4                      (*(_QWORD *)&dword_140404A6C[468652942])     /* 1AFFC98A4 */
#define g_1AFFC98A8                      dword_140404A6C[468652943]                   /* 1AFFC98A8 */
#define g_1AFFC98AC                      dword_140404A6C[468652944]                   /* 1AFFC98AC */
#define g_1AFFC98B4                      dword_140404A6C[468652946]                   /* 1AFFC98B4 */
#define g_1AFFC98B8                      dword_140404A6C[468652947]                   /* 1AFFC98B8 */
#define g_1AFFC98BC                      (*(_QWORD *)&dword_140404A6C[468652948])     /* 1AFFC98BC */
#define g_1AFFC98C0                      dword_140404A6C[468652949]                   /* 1AFFC98C0 */
#define g_1AFFC98C4                      dword_140404A6C[468652950]                   /* 1AFFC98C4 */
#define g_1AFFC98CC                      dword_140404A6C[468652952]                   /* 1AFFC98CC */
#define g_1AFFC98D0                      dword_140404A6C[468652953]                   /* 1AFFC98D0 */
#define g_1AFFC98D4                      (*(_QWORD *)&dword_140404A6C[468652954])     /* 1AFFC98D4 */
#define g_1AFFC98D8                      dword_140404A6C[468652955]                   /* 1AFFC98D8 */
#define g_1AFFC98DC                      dword_140404A6C[468652956]                   /* 1AFFC98DC */
#define g_1AFFC98E4                      dword_140404A6C[468652958]                   /* 1AFFC98E4 */
#define g_1AFFC98E8                      dword_140404A6C[468652959]                   /* 1AFFC98E8 */
#define g_1AFFC98EC                      (*(_QWORD *)&dword_140404A6C[468652960])     /* 1AFFC98EC */
#define g_1AFFC98F0                      dword_140404A6C[468652961]                   /* 1AFFC98F0 */
#define g_1AFFC98F4                      dword_140404A6C[468652962]                   /* 1AFFC98F4 */
#define g_1AFFC98FC                      dword_140404A6C[468652964]                   /* 1AFFC98FC */
#define g_1AFFC9900                      dword_140404A6C[468652965]                   /* 1AFFC9900 */
#define g_1AFFC9904                      (*(_QWORD *)&dword_140404A6C[468652966])     /* 1AFFC9904 */
#define g_1AFFC9908                      dword_140404A6C[468652967]                   /* 1AFFC9908 */
#define g_1AFFC990C                      dword_140404A6C[468652968]                   /* 1AFFC990C */
#define g_1AFFC9914                      dword_140404A6C[468652970]                   /* 1AFFC9914 */
#define g_1AFFC9918                      dword_140404A6C[468652971]                   /* 1AFFC9918 */
#define g_1AFFC991C                      (*(_QWORD *)&dword_140404A6C[468652972])     /* 1AFFC991C */
#define g_1AFFC9920                      dword_140404A6C[468652973]                   /* 1AFFC9920 */
#define g_1AFFC9924                      dword_140404A6C[468652974]                   /* 1AFFC9924 */
#define g_1AFFC992C                      dword_140404A6C[468652976]                   /* 1AFFC992C */
#define g_1AFFC9930                      dword_140404A6C[468652977]                   /* 1AFFC9930 */
#define g_1AFFC9934                      (*(_QWORD *)&dword_140404A6C[468652978])     /* 1AFFC9934 */
#define g_1AFFC9938                      dword_140404A6C[468652979]                   /* 1AFFC9938 */
#define g_1AFFC993C                      dword_140404A6C[468652980]                   /* 1AFFC993C */
#define g_1AFFC9944                      dword_140404A6C[468652982]                   /* 1AFFC9944 */
#define g_1AFFC9948                      dword_140404A6C[468652983]                   /* 1AFFC9948 */
#define g_1AFFC994C                      (*(_QWORD *)&dword_140404A6C[468652984])     /* 1AFFC994C */
#define g_1AFFC9950                      dword_140404A6C[468652985]                   /* 1AFFC9950 */
#define g_1AFFC9954                      dword_140404A6C[468652986]                   /* 1AFFC9954 */
#define g_1AFFC995C                      dword_140404A6C[468652988]                   /* 1AFFC995C */
#define g_1AFFC9960                      dword_140404A6C[468652989]                   /* 1AFFC9960 */
#define g_1AFFC9964                      (*(_QWORD *)&dword_140404A6C[468652990])     /* 1AFFC9964 */
#define g_1AFFC9968                      dword_140404A6C[468652991]                   /* 1AFFC9968 */
#define g_1AFFC996C                      dword_140404A6C[468652992]                   /* 1AFFC996C */
#define g_1AFFC9974                      dword_140404A6C[468652994]                   /* 1AFFC9974 */
#define g_1AFFC9978                      dword_140404A6C[468652995]                   /* 1AFFC9978 */
#define g_1AFFC997C                      (*(_QWORD *)&dword_140404A6C[468652996])     /* 1AFFC997C */
#define g_1AFFC9980                      dword_140404A6C[468652997]                   /* 1AFFC9980 */
#define g_1AFFC9984                      dword_140404A6C[468652998]                   /* 1AFFC9984 */
#define g_1AFFC998C                      dword_140404A6C[468653000]                   /* 1AFFC998C */
#define g_1AFFC9990                      dword_140404A6C[468653001]                   /* 1AFFC9990 */
#define g_1AFFC9994                      (*(_QWORD *)&dword_140404A6C[468653002])     /* 1AFFC9994 */
#define g_1AFFC9998                      dword_140404A6C[468653003]                   /* 1AFFC9998 */
#define g_1AFFC999C                      dword_140404A6C[468653004]                   /* 1AFFC999C */
#define g_1AFFC99A4                      dword_140404A6C[468653006]                   /* 1AFFC99A4 */
#define g_1AFFC99A8                      dword_140404A6C[468653007]                   /* 1AFFC99A8 */
#define g_1AFFC99AC                      (*(_QWORD *)&dword_140404A6C[468653008])     /* 1AFFC99AC */
#define g_1AFFC99B0                      dword_140404A6C[468653009]                   /* 1AFFC99B0 */
#define g_1AFFC99B4                      dword_140404A6C[468653010]                   /* 1AFFC99B4 */
#define g_1AFFC99BC                      dword_140404A6C[468653012]                   /* 1AFFC99BC */
#define g_1AFFC99C0                      dword_140404A6C[468653013]                   /* 1AFFC99C0 */
#define g_1AFFC99C4                      (*(_QWORD *)&dword_140404A6C[468653014])     /* 1AFFC99C4 */
#define g_1AFFC99C8                      dword_140404A6C[468653015]                   /* 1AFFC99C8 */
#define g_1AFFC9B4C                      dword_140404A6C[468653112]                   /* 1AFFC9B4C */
#define g_1AFFCDB50                      dword_140404A6C[468657209]                   /* 1AFFCDB50 */
#define g_1AFFCEB50                      dword_140404A6C[468658233]                   /* 1AFFCEB50 */
#define g_1AFFDEB54                      dword_140404A6C[468674618]                   /* 1AFFDEB54 */
#define g_1AFFDFB54                      dword_140404A6C[468675642]                   /* 1AFFDFB54 */
#define g_1AFFDFF58                      dword_140404A6C[468675899]                   /* 1AFFDFF58 */
#define g_1AFFE0F58                      dword_140404A6C[468676923]                   /* 1AFFE0F58 */
#define g_1AFFF0F5C                      dword_140404A6C[468693308]                   /* 1AFFF0F5C */
#define g_1AFFF1F5C                      dword_140404A6C[468694332]                   /* 1AFFF1F5C */
#define g_1B0032360                      (*(float *)&dword_140404A6C[468760125])      /* 1B0032360 */
#define g_1B0032364                      dword_140404A6C[468760126]                   /* 1B0032364 */
#define g_1B0032370                      (*(_OWORD *)&dword_140404A6C[468760129])     /* 1B0032370 */
#define g_1B0032380                      (*(_OWORD *)&dword_140404A6C[468760133])     /* 1B0032380 */
#define g_1B0032390                      (*(_OWORD *)&dword_140404A6C[468760137])     /* 1B0032390 */
#define g_1B00323A0                      (*(_OWORD *)&dword_140404A6C[468760141])     /* 1B00323A0 */
#define g_1B00323B0                      (*(_OWORD *)&dword_140404A6C[468760145])     /* 1B00323B0 */
#define g_1B00323C0                      (*(_OWORD *)&dword_140404A6C[468760149])     /* 1B00323C0 */
#define g_1B00323D0                      (*(_OWORD *)&dword_140404A6C[468760153])     /* 1B00323D0 */
#define g_1B00323E0                      (*(_OWORD *)&dword_140404A6C[468760157])     /* 1B00323E0 */
#define g_1B00323F0                      dword_140404A6C[468760161]                   /* 1B00323F0 */
#define g_1B00323F4                      dword_140404A6C[468760162]                   /* 1B00323F4 */
#define g_1B00323F8                      dword_140404A6C[468760163]                   /* 1B00323F8 */
#define g_1B0032400                      dword_140404A6C[468760165]                   /* 1B0032400 */
#define g_1B0032404                      dword_140404A6C[468760166]                   /* 1B0032404 */
#define g_1B0037420                      dword_140404A6C[468765293]                   /* 1B0037420 */
#define g_1B0037424                      dword_140404A6C[468765294]                   /* 1B0037424 */
#define g_1B0037428                      dword_140404A6C[468765295]                   /* 1B0037428 */
#define g_1B003742C                      dword_140404A6C[468765296]                   /* 1B003742C */
#define g_1B4037440                      dword_140404A6C[485542517]                   /* 1B4037440 */
#define g_1B4277C40                      dword_140404A6C[486132853]                   /* 1B4277C40 */
#define g_1B4277C44                      dword_140404A6C[486132854]                   /* 1B4277C44 */
#define g_1B4277C4C                      dword_140404A6C[486132856]                   /* 1B4277C4C */
#define g_1B4277C50                      dword_140404A6C[486132857]                   /* 1B4277C50 */
#define g_1B4287C80                      dword_140404A6C[486149253]                   /* 1B4287C80 */
#define g_1B4287C84                      dword_140404A6C[486149254]                   /* 1B4287C84 */
#define g_1B4657C80                      dword_140404A6C[487148677]                   /* 1B4657C80 */
#define g_1B4657C84                      dword_140404A6C[487148678]                   /* 1B4657C84 */
#define g_1B4657C88                      dword_140404A6C[487148679]                   /* 1B4657C88 */
#define g_1B4657C8C                      dword_140404A6C[487148680]                   /* 1B4657C8C */
#define g_1B4657D8C                      dword_140404A6C[487148744]                   /* 1B4657D8C */
#define g_1B4657D90                      dword_140404A6C[487148745]                   /* 1B4657D90 */
#define g_1B4657D94                      dword_140404A6C[487148746]                   /* 1B4657D94 */
#define g_1B4657DAC                      dword_140404A6C[487148752]                   /* 1B4657DAC */
#define g_1B4657DB0                      dword_140404A6C[487148753]                   /* 1B4657DB0 */
#define g_1B4657DB4                      dword_140404A6C[487148754]                   /* 1B4657DB4 */
#define g_1B4657DB8                      dword_140404A6C[487148755]                   /* 1B4657DB8 */
#define g_1B4657DBC                      dword_140404A6C[487148756]                   /* 1B4657DBC */
#define g_1B4657DC0                      dword_140404A6C[487148757]                   /* 1B4657DC0 */
#define g_1B4657DC4                      dword_140404A6C[487148758]                   /* 1B4657DC4 */
#define g_1B4657DC8                      dword_140404A6C[487148759]                   /* 1B4657DC8 */
#define g_1B4657E08                      dword_140404A6C[487148775]                   /* 1B4657E08 */
#define g_1B4657E0C                      dword_140404A6C[487148776]                   /* 1B4657E0C */
#define g_1B4657E10                      dword_140404A6C[487148777]                   /* 1B4657E10 */
#define g_1B4657E14                      dword_140404A6C[487148778]                   /* 1B4657E14 */
#define g_1B4657E54                      dword_140404A6C[487148794]                   /* 1B4657E54 */
#define g_1B4657E58                      dword_140404A6C[487148795]                   /* 1B4657E58 */
#define g_1B4657E5C                      dword_140404A6C[487148796]                   /* 1B4657E5C */
#define g_1B4657E60                      (*(_OWORD *)&dword_140404A6C[487148797])     /* 1B4657E60 */
#define g_1B4657EA0                      dword_140404A6C[487148813]                   /* 1B4657EA0 */
#define g_1B4657EA4                      dword_140404A6C[487148814]                   /* 1B4657EA4 */
#define g_1B4657EA8                      dword_140404A6C[487148815]                   /* 1B4657EA8 */
#define g_1B4657EAC                      dword_140404A6C[487148816]                   /* 1B4657EAC */
#define g_1B4657EEC                      dword_140404A6C[487148832]                   /* 1B4657EEC */
#define g_1B4657EF0                      dword_140404A6C[487148833]                   /* 1B4657EF0 */
#define g_1B4657EF4                      dword_140404A6C[487148834]                   /* 1B4657EF4 */
#define g_1B4657EF8                      dword_140404A6C[487148835]                   /* 1B4657EF8 */
#define g_1B4657F38                      dword_140404A6C[487148851]                   /* 1B4657F38 */
#define g_1B4657F3C                      dword_140404A6C[487148852]                   /* 1B4657F3C */
#define g_1B4657F40                      dword_140404A6C[487148853]                   /* 1B4657F40 */
#define g_1B4657F44                      dword_140404A6C[487148854]                   /* 1B4657F44 */
#define g_1B4657F84                      dword_140404A6C[487148870]                   /* 1B4657F84 */
#define g_1B4657F88                      dword_140404A6C[487148871]                   /* 1B4657F88 */
#define g_1B4657F8C                      dword_140404A6C[487148872]                   /* 1B4657F8C */
#define g_1B4657F90                      dword_140404A6C[487148873]                   /* 1B4657F90 */
#define g_1B4657FD0                      dword_140404A6C[487148889]                   /* 1B4657FD0 */
#define g_1B4657FD4                      dword_140404A6C[487148890]                   /* 1B4657FD4 */
#define g_1B4657FD8                      dword_140404A6C[487148891]                   /* 1B4657FD8 */
#define g_1B4657FDC                      dword_140404A6C[487148892]                   /* 1B4657FDC */
#define g_1B46590BC                      dword_140404A6C[487149972]                   /* 1B46590BC */
#define g_1B46590C8                      dword_140404A6C[487149975]                   /* 1B46590C8 */
#define g_1B46598DC                      dword_140404A6C[487150492]                   /* 1B46598DC */
#define g_1B475C0C8                      dword_140404A6C[487415191]                   /* 1B475C0C8 */
#define g_1B475C0D0                      dword_140404A6C[487415193]                   /* 1B475C0D0 */
#define g_1B475C0D8                      dword_140404A6C[487415195]                   /* 1B475C0D8 */
#define g_1B475D000                      dword_140404A6C[487416165]                   /* 1B475D000 */

#endif
