; 0x14019b2e0: sub_14019B2E0
; Decompilation failed: function frame is wrong
000000014019B2E0  mov     [rsp-8+], r9
000000014019B2E5  mov     [rsp-8+], r8d
000000014019B2EA  mov     [rsp-8+], rdx
000000014019B2EF  mov     [rsp-8+], rcx
000000014019B2F4  push    rbp
000000014019B2F5  sub     rsp, 4B0h
000000014019B2FC  lea     rbp, [rsp+0C0h]
000000014019B304  mov     rax, cs:__security_cookie
000000014019B30B  xor     rax, rbp
000000014019B30E  mov     [rbp+3F0h+], rax
000000014019B315  mov     [rbp+3F0h+_33Cvar_338var_334var_330var_32Cvar_328var_320var_318var_314var_310var_30Cvar_308var_304var_300var_], 0
000000014019B31C  mov     [rbp+3F0h+var_3BC], 0
000000014019B323  mov     rax, [rbp+3F0h+]
000000014019B32A  mov     eax, [rax+8]
000000014019B32D  mov     [rbp+3F0h+var_3D4], eax
000000014019B330  mov     rax, [rbp+3F0h+]
000000014019B337  mov     eax, [rax+0Ch]
000000014019B33A  mov     [rbp+3F0h+var_3EC], eax
000000014019B33D  mov     [rbp+3F0h+FCvar_2F8var_2F4var_2F0var_2E8var_2E0var_2D], 0Fh
000000014019B344  xorps   xmm0, xmm0
000000014019B347  movss   [rbp+3F0h+var_A0], xmm0
000000014019B34F  mov     [rbp+3F0h+var_B0], 0
000000014019B359  mov     [rbp+3F0h+var_EC], 0
000000014019B363  mov     [rbp+3F0h+], 0
000000014019B36D  mov     [rbp+3F0h+18var_214var_210var_20Cvar_208var_204var_20], 0
000000014019B374  mov     [rbp+3F0h+var_BC], 0
000000014019B37E  mov     [rbp+3F0h+], 0
000000014019B388  mov     [rbp+3F0h+], 0
000000014019B392  xorps   xmm0, xmm0
000000014019B395  movss   [rbp+3F0h+], xmm0
000000014019B39D  xorps   xmm0, xmm0
000000014019B3A0  movss   [rbp+3F0h+_250var_24Cvar_248var_244var_240var_23Cvar_238var_234var_230var_22Cvar_228var_224var_220var_21Cvar_], xmm0
000000014019B3A5  xorps   xmm0, xmm0
000000014019B3A8  movss   [rbp+3F0h+], xmm0
000000014019B3B0  mov     [rbp+3F0h+], 0
000000014019B3BA  mov     rax, [rbp+3F0h+]
000000014019B3C1  mov     rax, [rax]
000000014019B3C4  mov     [rbp+3F0h+var_3D0], rax
000000014019B3C8  mov     rax, [rbp+3F0h+var_3D0]
000000014019B3CC  mov     eax, [rax+8]
000000014019B3CF  mov     [rbp+3F0h+var_3E8], eax
000000014019B3D2  mov     rax, [rbp+3F0h+var_3D0]
000000014019B3D6  mov     eax, [rax+4]
000000014019B3D9  mov     [rbp+3F0h+var_2D4var_2D0var_2CCvar_2C8var_2C4var_2C0var_2B], eax
000000014019B3DC  mov     rax, [rbp+3F0h+var_3D0]
000000014019B3E0  mov     rax, [rax+20h]
000000014019B3E4  mov     [rbp+3F0h+var_D8], rax
000000014019B3EB  mov     rax, [rbp+3F0h+]
000000014019B3F2  mov     eax, [rax+24h]
000000014019B3F5  mov     [rbp+3F0h+var_3C4], eax
000000014019B3F8  mov     rax, [rbp+3F0h+]
000000014019B3FF  mov     eax, [rax+28h]
000000014019B402  mov     [rbp+3F0h+var_3DC], eax
000000014019B405  cmp     [rbp+3F0h+var_3C4], 0
000000014019B409  jz      short loc_14019B417
000000014019B40B  mov     [rbp+3F0h+], 1
000000014019B415  jmp     short loc_14019B421
000000014019B417  mov     [rbp+3F0h+], 0
000000014019B421  mov     eax, [rbp+3F0h+]
000000014019B427  mov     [rbp+3F0h+var_3A4], eax
000000014019B42A  xorps   xmm0, xmm0
000000014019B42D  movss   [rbp+3F0h+r_1A8var_1A4var_1A0var_19Cvar_198var_194var_190var_18Cvar_188var_184var_180var_17Cva], xmm0
000000014019B435  cmp     [rbp+3F0h+], 2
000000014019B43C  jl      short loc_14019B448
000000014019B43E  cmp     [rbp+3F0h+], 0
000000014019B446  jnz     short loc_14019B452
000000014019B448  mov     eax, 0FFFFFFFFh
000000014019B44D  jmp     loc_14019F0C0
000000014019B452  mov     rax, [rbp+3F0h+]
000000014019B459  mov     ecx, [rbp+3F0h+]
000000014019B45F  imul    ecx, [rax+20h]
000000014019B463  mov     eax, ecx
000000014019B465  mov     [rbp+3F0h+], eax
000000014019B46B  mov     [rbp+3F0h+var_3E0], 0
000000014019B472  jmp     short loc_14019B47C
000000014019B474  mov     eax, [rbp+3F0h+var_3E0]
000000014019B477  inc     eax
000000014019B479  mov     [rbp+3F0h+var_3E0], eax
000000014019B47C  mov     rax, [rbp+3F0h+var_3D0]
000000014019B480  mov     eax, [rax+28h]
000000014019B483  cmp     [rbp+3F0h+var_3E0], eax
000000014019B486  jg      short loc_14019B4B1
000000014019B488  mov     eax, [rbp+3F0h+var_3E0]
000000014019B48B  mov     rcx, [rbp+3F0h+var_3D0]
000000014019B48F  mov     [rbp+3F0h+], rcx
000000014019B496  movzx   ecx, al
000000014019B499  mov     rax, [rbp+3F0h+]
000000014019B4A0  mov     eax, [rax+30h]
000000014019B4A3  shl     eax, cl
000000014019B4A5  cmp     eax, [rbp+3F0h+]
000000014019B4AB  jnz     short loc_14019B4AF
000000014019B4AD  jmp     short loc_14019B4B1
000000014019B4AF  jmp     short loc_14019B474
000000014019B4B1  mov     rax, [rbp+3F0h+var_3D0]
000000014019B4B5  mov     eax, [rax+28h]
000000014019B4B8  cmp     [rbp+3F0h+var_3E0], eax
000000014019B4BB  jle     short loc_14019B4C7
000000014019B4BD  mov     eax, 0FFFFFFFFh
000000014019B4C2  jmp     loc_14019F0C0
000000014019B4C7  mov     eax, [rbp+3F0h+var_3E0]
000000014019B4CA  mov     ecx, 1
000000014019B4CF  mov     [rbp+3F0h+], ecx
000000014019B4D5  movzx   ecx, al
000000014019B4D8  mov     eax, [rbp+3F0h+]
000000014019B4DE  shl     eax, cl
000000014019B4E0  mov     [rbp+3F0h+var_108], eax
000000014019B4E6  mov     rax, [rbp+3F0h+var_3D0]
000000014019B4EA  mov     ecx, [rbp+3F0h+var_108]
000000014019B4F0  imul    ecx, [rax+30h]
000000014019B4F4  mov     eax, ecx
000000014019B4F6  mov     [rbp+3F0h+var_3A8], eax
000000014019B4F9  mov     eax, [rbp+3F0h+var_3D4]
000000014019B4FC  imul    eax, [rbp+3F0h+var_2D4var_2D0var_2CCvar_2C8var_2C4var_2C0var_2B]
000000014019B500  cdqe
000000014019B502  mov     rcx, [rbp+3F0h+]
000000014019B509  lea     rax, [rcx+rax*4+0FCh]
000000014019B511  mov     [rbp+3F0h+], rax
000000014019B518  mov     eax, [rbp+3F0h+var_2D4var_2D0var_2CCvar_2C8var_2C4var_2C0var_2B]
000000014019B51B  add     eax, 400h
000000014019B520  mov     ecx, [rbp+3F0h+var_3D4]
000000014019B523  imul    ecx, eax
000000014019B526  mov     eax, ecx
000000014019B528  cdqe
000000014019B52A  mov     rcx, [rbp+3F0h+]
000000014019B531  lea     rax, [rcx+rax*4+0FCh]
000000014019B539  mov     [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E], rax
000000014019B53D  mov     eax, [rbp+3F0h+var_3D4]
000000014019B540  imul    eax, [rbp+3F0h+var_3E8]
000000014019B544  cdqe
000000014019B546  mov     rcx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019B54A  lea     rax, [rcx+rax*4]
000000014019B54E  mov     [rbp+3F0h+var_104], rax
000000014019B555  mov     eax, [rbp+3F0h+var_3D4]
000000014019B558  imul    eax, [rbp+3F0h+var_3E8]
000000014019B55C  cdqe
000000014019B55E  mov     rcx, [rbp+3F0h+var_104]
000000014019B565  lea     rax, [rcx+rax*4]
000000014019B569  mov     [rbp+3F0h+], rax
000000014019B570  mov     eax, [rbp+3F0h+var_3D4]
000000014019B573  imul    eax, [rbp+3F0h+var_3E8]
000000014019B577  cdqe
000000014019B579  mov     rcx, [rbp+3F0h+]
000000014019B580  lea     rax, [rcx+rax*4]
000000014019B584  mov     [rbp+3F0h+], rax
000000014019B58B  cmp     [rbp+3F0h+], 0
000000014019B593  jnz     short loc_14019B5B1
000000014019B595  mov     [rbp+3F0h+var_3C8], 1
000000014019B59C  mov     eax, [rbp+3F0h+var_3C8]
000000014019B59F  mov     [rbp+3F0h+var_B8], eax
000000014019B5A5  mov     [rbp+3F0h+var_134], 0
000000014019B5AF  jmp     short loc_14019B5E1
000000014019B5B1  mov     rcx, [rbp+3F0h+]
000000014019B5B8  call    sub_14019A0E0
000000014019B5BD  mov     [rbp+3F0h+var_B8], eax
000000014019B5C3  mov     rcx, [rbp+3F0h+]
000000014019B5CA  call    sub_14019A0A0
000000014019B5CF  mov     [rbp+3F0h+var_3C8], eax
000000014019B5D2  mov     eax, [rbp+3F0h+var_3C8]
000000014019B5D5  add     eax, 4
000000014019B5D8  sar     eax, 3
000000014019B5DB  mov     [rbp+3F0h+var_134], eax
000000014019B5E1  cmp     [rbp+3F0h+], 4FBh
000000014019B5EB  jge     short loc_14019B5FB
000000014019B5ED  mov     eax, [rbp+3F0h+]
000000014019B5F3  mov     [rbp+3F0h+], eax
000000014019B5F9  jmp     short loc_14019B605
000000014019B5FB  mov     [rbp+3F0h+], 4FBh
000000014019B605  mov     eax, [rbp+3F0h+]
000000014019B60B  mov     [rbp+3F0h+], eax
000000014019B611  mov     eax, [rbp+3F0h+var_134]
000000014019B617  mov     ecx, [rbp+3F0h+]
000000014019B61D  sub     ecx, eax
000000014019B61F  mov     eax, ecx
000000014019B621  mov     [rbp+3F0h+var_3D8], eax
000000014019B624  mov     rax, [rbp+3F0h+]
000000014019B62B  cmp     dword ptr [rax+30h], 0
000000014019B62F  jz      short loc_14019B680
000000014019B631  mov     rax, [rbp+3F0h+]
000000014019B638  cmp     dword ptr [rax+2Ch], 0FFFFFFFFh
000000014019B63C  jz      short loc_14019B680
000000014019B63E  mov     rax, [rbp+3F0h+var_3D0]
000000014019B642  mov     eax, [rax]
000000014019B644  sar     eax, 3
000000014019B647  mov     [rbp+3F0h+], eax
000000014019B64D  mov     rax, [rbp+3F0h+]
000000014019B654  mov     eax, [rax+2Ch]
000000014019B657  imul    eax, [rbp+3F0h+]
000000014019B65E  mov     ecx, [rbp+3F0h+]
000000014019B664  sar     ecx, 1
000000014019B666  add     eax, ecx
000000014019B668  cdq
000000014019B669  idiv    [rbp+3F0h+]
000000014019B66F  mov     [rbp+3F0h+var_3B8], eax
000000014019B672  mov     eax, [rbp+3F0h+var_3B8]
000000014019B675  sar     eax, 6
000000014019B678  mov     [rbp+3F0h+ar_3A0var_39Cvar_398var_394var_390var_38Cvar_388var_384var_380var_37Cvar_378var_370var_368var_364var_36], eax
000000014019B67B  jmp     loc_14019B853
000000014019B680  mov     [rbp+3F0h+var_3B8], 0
000000014019B687  mov     rax, [rbp+3F0h+]
000000014019B68E  mov     eax, [rax+2Ch]
000000014019B691  imul    eax, [rbp+3F0h+]
000000014019B698  mov     [rbp+3F0h+var_138], eax
000000014019B69E  cmp     [rbp+3F0h+var_3C8], 1
000000014019B6A2  jle     short loc_14019B6B7
000000014019B6A4  mov     eax, [rbp+3F0h+var_3C8]
000000014019B6A7  mov     ecx, [rbp+3F0h+var_138]
000000014019B6AD  add     ecx, eax
000000014019B6AF  mov     eax, ecx
000000014019B6B1  mov     [rbp+3F0h+var_138], eax
000000014019B6B7  mov     rax, [rbp+3F0h+]
000000014019B6BE  cmp     dword ptr [rax+2Ch], 0FFFFFFFFh
000000014019B6C2  jz      loc_14019B840
000000014019B6C8  mov     rax, [rbp+3F0h+]
000000014019B6CF  cmp     dword ptr [rax+34h], 0
000000014019B6D3  jz      short loc_14019B6E1
000000014019B6D5  mov     [rbp+3F0h+], 1
000000014019B6DF  jmp     short loc_14019B6EB
000000014019B6E1  mov     [rbp+3F0h+], 0
000000014019B6EB  mov     rax, [rbp+3F0h+var_3D0]
000000014019B6EF  mov     eax, [rax]
000000014019B6F1  mov     ecx, [rbp+3F0h+var_138]
000000014019B6F7  lea     eax, [rcx+rax*4]
000000014019B6FA  mov     rcx, [rbp+3F0h+var_3D0]
000000014019B6FE  mov     ecx, [rcx]
000000014019B700  shl     ecx, 3
000000014019B703  cdq
000000014019B704  idiv    ecx
000000014019B706  sub     eax, [rbp+3F0h+]
000000014019B70C  cmp     [rbp+3F0h+], eax
000000014019B712  jge     short loc_14019B722
000000014019B714  mov     eax, [rbp+3F0h+]
000000014019B71A  mov     [rbp+3F0h+], eax
000000014019B720  jmp     short loc_14019B76C
000000014019B722  mov     rax, [rbp+3F0h+]
000000014019B729  cmp     dword ptr [rax+34h], 0
000000014019B72D  jz      short loc_14019B73B
000000014019B72F  mov     [rbp+3F0h+], 1
000000014019B739  jmp     short loc_14019B745
000000014019B73B  mov     [rbp+3F0h+], 0
000000014019B745  mov     rax, [rbp+3F0h+var_3D0]
000000014019B749  mov     eax, [rax]
000000014019B74B  mov     ecx, [rbp+3F0h+var_138]
000000014019B751  lea     eax, [rcx+rax*4]
000000014019B754  mov     rcx, [rbp+3F0h+var_3D0]
000000014019B758  mov     ecx, [rcx]
000000014019B75A  shl     ecx, 3
000000014019B75D  cdq
000000014019B75E  idiv    ecx
000000014019B760  sub     eax, [rbp+3F0h+]
000000014019B766  mov     [rbp+3F0h+], eax
000000014019B76C  cmp     [rbp+3F0h+], 2
000000014019B773  jge     short loc_14019B784
000000014019B775  mov     [rbp+3F0h+], 2
000000014019B77F  jmp     loc_14019B834
000000014019B784  mov     rax, [rbp+3F0h+]
000000014019B78B  cmp     dword ptr [rax+34h], 0
000000014019B78F  jz      short loc_14019B79D
000000014019B791  mov     [rbp+3F0h+], 1
000000014019B79B  jmp     short loc_14019B7A7
000000014019B79D  mov     [rbp+3F0h+], 0
000000014019B7A7  mov     rax, [rbp+3F0h+var_3D0]
000000014019B7AB  mov     eax, [rax]
000000014019B7AD  mov     ecx, [rbp+3F0h+var_138]
000000014019B7B3  lea     eax, [rcx+rax*4]
000000014019B7B6  mov     rcx, [rbp+3F0h+var_3D0]
000000014019B7BA  mov     ecx, [rcx]
000000014019B7BC  shl     ecx, 3
000000014019B7BF  cdq
000000014019B7C0  idiv    ecx
000000014019B7C2  sub     eax, [rbp+3F0h+]
000000014019B7C8  cmp     [rbp+3F0h+], eax
000000014019B7CE  jge     short loc_14019B7DE
000000014019B7D0  mov     eax, [rbp+3F0h+]
000000014019B7D6  mov     [rbp+3F0h+], eax
000000014019B7DC  jmp     short loc_14019B828
000000014019B7DE  mov     rax, [rbp+3F0h+]
000000014019B7E5  cmp     dword ptr [rax+34h], 0
000000014019B7E9  jz      short loc_14019B7F7
000000014019B7EB  mov     [rbp+3F0h+], 1
000000014019B7F5  jmp     short loc_14019B801
000000014019B7F7  mov     [rbp+3F0h+], 0
000000014019B801  mov     rax, [rbp+3F0h+var_3D0]
000000014019B805  mov     eax, [rax]
000000014019B807  mov     ecx, [rbp+3F0h+var_138]
000000014019B80D  lea     eax, [rcx+rax*4]
000000014019B810  mov     rcx, [rbp+3F0h+var_3D0]
000000014019B814  mov     ecx, [rcx]
000000014019B816  shl     ecx, 3
000000014019B819  cdq
000000014019B81A  idiv    ecx
000000014019B81C  sub     eax, [rbp+3F0h+]
000000014019B822  mov     [rbp+3F0h+], eax
000000014019B828  mov     eax, [rbp+3F0h+]
000000014019B82E  mov     [rbp+3F0h+], eax
000000014019B834  mov     eax, [rbp+3F0h+]
000000014019B83A  mov     [rbp+3F0h+], eax
000000014019B840  mov     eax, [rbp+3F0h+var_134]
000000014019B846  mov     ecx, [rbp+3F0h+]
000000014019B84C  sub     ecx, eax
000000014019B84E  mov     eax, ecx
000000014019B850  mov     [rbp+3F0h+ar_3A0var_39Cvar_398var_394var_390var_38Cvar_388var_384var_380var_37Cvar_378var_370var_368var_364var_36], eax
000000014019B853  mov     eax, [rbp+3F0h+]
000000014019B859  shl     eax, 3
000000014019B85C  imul    eax, 32h ; '2'
000000014019B85F  mov     ecx, 3
000000014019B864  sub     ecx, [rbp+3F0h+var_3E0]
000000014019B867  sar     eax, cl
000000014019B869  imul    ecx, [rbp+3F0h+var_3EC], 28h ; '('
000000014019B86D  add     ecx, 14h
000000014019B870  mov     [rbp+3F0h+], ecx
000000014019B876  mov     edx, [rbp+3F0h+var_3E0]
000000014019B879  mov     r8d, 190h
000000014019B87F  movzx   ecx, dl
000000014019B882  mov     edx, r8d
000000014019B885  sar     edx, cl
000000014019B887  mov     ecx, edx
000000014019B889  sub     ecx, 32h ; '2'
000000014019B88C  mov     edx, [rbp+3F0h+]
000000014019B892  imul    edx, ecx
000000014019B895  mov     ecx, edx
000000014019B897  sub     eax, ecx
000000014019B899  mov     [rbp+3F0h+Srcvar_350var_34Cvar_348var_344var_340va], eax
000000014019B89C  mov     rax, [rbp+3F0h+]
000000014019B8A3  cmp     dword ptr [rax+2Ch], 0FFFFFFFFh
000000014019B8A7  jz      short loc_14019B916
000000014019B8A9  imul    eax, [rbp+3F0h+var_3EC], 28h ; '('
000000014019B8AD  add     eax, 14h
000000014019B8B0  mov     ecx, [rbp+3F0h+var_3E0]
000000014019B8B3  mov     edx, 190h
000000014019B8B8  sar     edx, cl
000000014019B8BA  mov     ecx, edx
000000014019B8BC  sub     ecx, 32h ; '2'
000000014019B8BF  imul    eax, ecx
000000014019B8C2  mov     rcx, [rbp+3F0h+]
000000014019B8C9  mov     ecx, [rcx+2Ch]
000000014019B8CC  sub     ecx, eax
000000014019B8CE  mov     eax, ecx
000000014019B8D0  cmp     [rbp+3F0h+Srcvar_350var_34Cvar_348var_344var_340va], eax
000000014019B8D3  jge     short loc_14019B8E0
000000014019B8D5  mov     eax, [rbp+3F0h+Srcvar_350var_34Cvar_348var_344var_340va]
000000014019B8D8  mov     [rbp+3F0h+], eax
000000014019B8DE  jmp     short loc_14019B90D
000000014019B8E0  imul    eax, [rbp+3F0h+var_3EC], 28h ; '('
000000014019B8E4  add     eax, 14h
000000014019B8E7  mov     ecx, [rbp+3F0h+var_3E0]
000000014019B8EA  mov     edx, 190h
000000014019B8EF  sar     edx, cl
000000014019B8F1  mov     ecx, edx
000000014019B8F3  sub     ecx, 32h ; '2'
000000014019B8F6  imul    eax, ecx
000000014019B8F9  mov     rcx, [rbp+3F0h+]
000000014019B900  mov     ecx, [rcx+2Ch]
000000014019B903  sub     ecx, eax
000000014019B905  mov     eax, ecx
000000014019B907  mov     [rbp+3F0h+], eax
000000014019B90D  mov     eax, [rbp+3F0h+]
000000014019B913  mov     [rbp+3F0h+Srcvar_350var_34Cvar_348var_344var_340va], eax
000000014019B916  cmp     [rbp+3F0h+], 0
000000014019B91E  jnz     short loc_14019B948
000000014019B920  mov     r8d, [rbp+3F0h+]
000000014019B927  mov     rdx, [rbp+3F0h+]
000000014019B92E  lea     rcx, [rbp+3F0h+]
000000014019B935  call    sub_14019A1E0
000000014019B93A  lea     rax, [rbp+3F0h+]
000000014019B941  mov     [rbp+3F0h+], rax
000000014019B948  cmp     [rbp+3F0h+var_3B8], 0
000000014019B94C  jle     loc_14019BAF6
000000014019B952  mov     rax, [rbp+3F0h+]
000000014019B959  cmp     dword ptr [rax+38h], 0
000000014019B95D  jz      loc_14019BAF6
000000014019B963  mov     eax, [rbp+3F0h+var_3B8]
000000014019B966  mov     [rbp+3F0h+var_E8], eax
000000014019B96C  cmp     [rbp+3F0h+var_3C8], 1
000000014019B970  jnz     short loc_14019B97E
000000014019B972  mov     [rbp+3F0h+], 2
000000014019B97C  jmp     short loc_14019B988
000000014019B97E  mov     [rbp+3F0h+], 0
000000014019B988  mov     eax, [rbp+3F0h+var_E8]
000000014019B98E  mov     ecx, [rbp+3F0h+var_3B8]
000000014019B991  add     ecx, eax
000000014019B993  mov     eax, ecx
000000014019B995  mov     rcx, [rbp+3F0h+]
000000014019B99C  sub     eax, [rcx+0D4h]
000000014019B9A2  sar     eax, 6
000000014019B9A5  cmp     [rbp+3F0h+], eax
000000014019B9AB  jle     short loc_14019B9D7
000000014019B9AD  cmp     [rbp+3F0h+var_3C8], 1
000000014019B9B1  jnz     short loc_14019B9BF
000000014019B9B3  mov     [rbp+3F0h+], 2
000000014019B9BD  jmp     short loc_14019B9C9
000000014019B9BF  mov     [rbp+3F0h+], 0
000000014019B9C9  mov     eax, [rbp+3F0h+]
000000014019B9CF  mov     [rbp+3F0h+var_68], eax
000000014019B9D5  jmp     short loc_14019B9FA
000000014019B9D7  mov     eax, [rbp+3F0h+var_E8]
000000014019B9DD  mov     ecx, [rbp+3F0h+var_3B8]
000000014019B9E0  add     ecx, eax
000000014019B9E2  mov     eax, ecx
000000014019B9E4  mov     rcx, [rbp+3F0h+]
000000014019B9EB  sub     eax, [rcx+0D4h]
000000014019B9F1  sar     eax, 6
000000014019B9F4  mov     [rbp+3F0h+var_68], eax
000000014019B9FA  mov     eax, [rbp+3F0h+var_3D8]
000000014019B9FD  cmp     [rbp+3F0h+var_68], eax
000000014019BA03  jge     loc_14019BAA5
000000014019BA09  cmp     [rbp+3F0h+var_3C8], 1
000000014019BA0D  jnz     short loc_14019BA1B
000000014019BA0F  mov     [rbp+3F0h+var_60], 2
000000014019BA19  jmp     short loc_14019BA25
000000014019BA1B  mov     [rbp+3F0h+var_60], 0
000000014019BA25  mov     eax, [rbp+3F0h+var_E8]
000000014019BA2B  mov     ecx, [rbp+3F0h+var_3B8]
000000014019BA2E  add     ecx, eax
000000014019BA30  mov     eax, ecx
000000014019BA32  mov     rcx, [rbp+3F0h+]
000000014019BA39  sub     eax, [rcx+0D4h]
000000014019BA3F  sar     eax, 6
000000014019BA42  cmp     [rbp+3F0h+var_60], eax
000000014019BA48  jle     short loc_14019BA74
000000014019BA4A  cmp     [rbp+3F0h+var_3C8], 1
000000014019BA4E  jnz     short loc_14019BA5C
000000014019BA50  mov     [rbp+3F0h+var_58], 2
000000014019BA5A  jmp     short loc_14019BA66
000000014019BA5C  mov     [rbp+3F0h+var_58], 0
000000014019BA66  mov     eax, [rbp+3F0h+var_58]
000000014019BA6C  mov     [rbp+3F0h+var_50], eax
000000014019BA72  jmp     short loc_14019BA97
000000014019BA74  mov     eax, [rbp+3F0h+var_E8]
000000014019BA7A  mov     ecx, [rbp+3F0h+var_3B8]
000000014019BA7D  add     ecx, eax
000000014019BA7F  mov     eax, ecx
000000014019BA81  mov     rcx, [rbp+3F0h+]
000000014019BA88  sub     eax, [rcx+0D4h]
000000014019BA8E  sar     eax, 6
000000014019BA91  mov     [rbp+3F0h+var_50], eax
000000014019BA97  mov     eax, [rbp+3F0h+var_50]
000000014019BA9D  mov     [rbp+3F0h+var_48], eax
000000014019BAA3  jmp     short loc_14019BAAE
000000014019BAA5  mov     eax, [rbp+3F0h+var_3D8]
000000014019BAA8  mov     [rbp+3F0h+var_48], eax
000000014019BAAE  mov     eax, [rbp+3F0h+var_48]
000000014019BAB4  mov     [rbp+3F0h+var_CC], eax
000000014019BABA  mov     eax, [rbp+3F0h+var_3D8]
000000014019BABD  cmp     [rbp+3F0h+var_CC], eax
000000014019BAC3  jge     short loc_14019BAF6
000000014019BAC5  mov     eax, [rbp+3F0h+var_CC]
000000014019BACB  mov     ecx, [rbp+3F0h+var_134]
000000014019BAD1  add     ecx, eax
000000014019BAD3  mov     eax, ecx
000000014019BAD5  mov     [rbp+3F0h+], eax
000000014019BADB  mov     eax, [rbp+3F0h+var_CC]
000000014019BAE1  mov     [rbp+3F0h+var_3D8], eax
000000014019BAE4  mov     edx, [rbp+3F0h+]
000000014019BAEA  mov     rcx, [rbp+3F0h+]
000000014019BAF1  call    sub_14019A8F0
000000014019BAF6  mov     eax, [rbp+3F0h+]
000000014019BAFC  shl     eax, 3
000000014019BAFF  mov     [rbp+3F0h+va_3A4], eax
000000014019BB02  mov     eax, [rbp+3F0h+var_3DC]
000000014019BB05  mov     [rbp+3F0h+var_3AC], eax
000000014019BB08  mov     rax, [rbp+3F0h+var_3D0]
000000014019BB0C  mov     eax, [rax+0Ch]
000000014019BB0F  cmp     [rbp+3F0h+var_3AC], eax
000000014019BB12  jle     short loc_14019BB1E
000000014019BB14  mov     rax, [rbp+3F0h+var_3D0]
000000014019BB18  mov     eax, [rax+0Ch]
000000014019BB1B  mov     [rbp+3F0h+var_3AC], eax
000000014019BB1E  mov     eax, [rbp+3F0h+var_2D4var_2D0var_2CCvar_2C8var_2C4var_2C0var_2B]
000000014019BB21  mov     ecx, [rbp+3F0h+var_3A8]
000000014019BB24  add     ecx, eax
000000014019BB26  mov     eax, ecx
000000014019BB28  mov     ecx, [rbp+3F0h+var_3D4]
000000014019BB2B  imul    ecx, eax
000000014019BB2E  mov     eax, ecx
000000014019BB30  cdqe
000000014019BB32  shl     rax, 2
000000014019BB36  mov     rcx, rax
000000014019BB39  add     rcx, 0Fh
000000014019BB3D  cmp     rcx, rax
000000014019BB40  ja      short loc_14019BB4C
000000014019BB42  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019BB4C  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019BB50  mov     rax, rcx
000000014019BB53  call    sub_1401F89D0
000000014019BB58  sub     rsp, rax
000000014019BB5B  lea     rax, [rsp+4B0h+var_3F0]
000000014019BB63  mov     [rbp+3F0h+var_70], rax
000000014019BB6A  mov     rax, [rbp+3F0h+]
000000014019BB71  movss   xmm0, dword ptr [rax+0E4h]
000000014019BB79  movss   [rbp+3F0h+], xmm0
000000014019BB81  mov     eax, [rbp+3F0h+var_2D4var_2D0var_2CCvar_2C8var_2C4var_2C0var_2B]
000000014019BB84  mov     ecx, [rbp+3F0h+var_3A8]
000000014019BB87  sub     ecx, eax
000000014019BB89  mov     eax, ecx
000000014019BB8B  mov     ecx, [rbp+3F0h+var_3EC]
000000014019BB8E  imul    ecx, eax
000000014019BB91  mov     eax, ecx
000000014019BB93  cdq
000000014019BB94  mov     rcx, [rbp+3F0h+]
000000014019BB9B  idiv    dword ptr [rcx+20h]
000000014019BB9E  mov     edx, eax
000000014019BBA0  mov     rcx, [rbp+3F0h+]
000000014019BBA7  call    sub_1401A6D80
000000014019BBAC  movss   xmm1, [rbp+3F0h+]
000000014019BBB4  comiss  xmm1, xmm0
000000014019BBB7  jbe     short loc_14019BBD2
000000014019BBB9  mov     rax, [rbp+3F0h+]
000000014019BBC0  movss   xmm0, dword ptr [rax+0E4h]
000000014019BBC8  movss   [rbp+3F0h+var_40], xmm0
000000014019BBD0  jmp     short loc_14019BC05
000000014019BBD2  mov     eax, [rbp+3F0h+var_2D4var_2D0var_2CCvar_2C8var_2C4var_2C0var_2B]
000000014019BBD5  mov     ecx, [rbp+3F0h+var_3A8]
000000014019BBD8  sub     ecx, eax
000000014019BBDA  mov     eax, ecx
000000014019BBDC  mov     ecx, [rbp+3F0h+var_3EC]
000000014019BBDF  imul    ecx, eax
000000014019BBE2  mov     eax, ecx
000000014019BBE4  cdq
000000014019BBE5  mov     rcx, [rbp+3F0h+]
000000014019BBEC  idiv    dword ptr [rcx+20h]
000000014019BBEF  mov     edx, eax
000000014019BBF1  mov     rcx, [rbp+3F0h+]
000000014019BBF8  call    sub_1401A6D80
000000014019BBFD  movss   [rbp+3F0h+var_40], xmm0
000000014019BC05  movss   xmm0, [rbp+3F0h+var_40]
000000014019BC0D  movss   [rbp+3F0h+var_11C], xmm0
000000014019BC15  mov     eax, [rbp+3F0h+var_3EC]
000000014019BC18  imul    eax, [rbp+3F0h+var_2D4var_2D0var_2CCvar_2C8var_2C4var_2C0var_2B]
000000014019BC1C  cdq
000000014019BC1D  mov     rcx, [rbp+3F0h+]
000000014019BC24  idiv    dword ptr [rcx+20h]
000000014019BC27  mov     [rbp+3F0h+], eax
000000014019BC2D  mov     ecx, [rbp+3F0h+var_2D4var_2D0var_2CCvar_2C8var_2C4var_2C0var_2B]
000000014019BC30  mov     edx, [rbp+3F0h+var_3A8]
000000014019BC33  sub     edx, ecx
000000014019BC35  mov     ecx, edx
000000014019BC37  mov     edx, [rbp+3F0h+var_3EC]
000000014019BC3A  imul    edx, ecx
000000014019BC3D  mov     ecx, edx
000000014019BC3F  mov     eax, ecx
000000014019BC41  cdq
000000014019BC42  mov     rcx, [rbp+3F0h+]
000000014019BC49  idiv    dword ptr [rcx+20h]
000000014019BC4C  cdqe
000000014019BC4E  mov     rcx, [rbp+3F0h+]
000000014019BC55  lea     rax, [rcx+rax*4]
000000014019BC59  mov     ecx, [rbp+3F0h+]
000000014019BC5F  mov     edx, ecx
000000014019BC61  mov     rcx, rax
000000014019BC64  call    sub_1401A6D80
000000014019BC69  mov     rax, [rbp+3F0h+]
000000014019BC70  movss   dword ptr [rax+0E4h], xmm0
000000014019BC78  mov     rax, [rbp+3F0h+]
000000014019BC7F  movss   xmm0, dword ptr [rax+0E4h]
000000014019BC87  movss   xmm1, [rbp+3F0h+var_11C]
000000014019BC8F  comiss  xmm1, xmm0
000000014019BC92  jbe     short loc_14019BCA6
000000014019BC94  movss   xmm0, [rbp+3F0h+var_11C]
000000014019BC9C  movss   [rbp+3F0h+var_8], xmm0
000000014019BCA4  jmp     short loc_14019BCBD
000000014019BCA6  mov     rax, [rbp+3F0h+]
000000014019BCAD  movss   xmm0, dword ptr [rax+0E4h]
000000014019BCB5  movss   [rbp+3F0h+var_8], xmm0
000000014019BCBD  movss   xmm0, [rbp+3F0h+var_8]
000000014019BCC5  movss   [rbp+3F0h+var_11C], xmm0
000000014019BCCD  mov     rax, [rbp+3F0h+]
000000014019BCD4  mov     eax, [rax+40h]
000000014019BCD7  mov     ecx, 1
000000014019BCDC  mov     [rbp+3F0h+], ecx
000000014019BCE2  movzx   ecx, al
000000014019BCE5  mov     eax, [rbp+3F0h+]
000000014019BCEB  shl     eax, cl
000000014019BCED  cvtsi2ss xmm0, eax
000000014019BCF1  movss   xmm1, cs:dword_1402783F4
000000014019BCF9  divss   xmm1, xmm0
000000014019BCFD  movaps  xmm0, xmm1
000000014019BD00  comiss  xmm0, [rbp+3F0h+var_11C]
000000014019BD07  jb      short loc_14019BD15
000000014019BD09  mov     [rbp+3F0h+__saved_registers], 1
000000014019BD13  jmp     short loc_14019BD1F
000000014019BD15  mov     [rbp+3F0h+__saved_registers], 0
000000014019BD1F  mov     eax, [rbp+3F0h+__saved_registers]
000000014019BD25  mov     [rbp+3F0h+18var_214var_210var_20Cvar_208var_204var_20], eax
000000014019BD28  cmp     [rbp+3F0h+var_3C8], 1
000000014019BD2C  jnz     short loc_14019BD45
000000014019BD2E  mov     r8d, 0Fh
000000014019BD34  mov     edx, [rbp+3F0h+18var_214var_210var_20Cvar_208var_204var_20]
000000014019BD37  mov     rcx, [rbp+3F0h+]
000000014019BD3E  call    sub_14019A450
000000014019BD43  jmp     short loc_14019BD4C
000000014019BD45  mov     [rbp+3F0h+18var_214var_210var_20Cvar_208var_204var_20], 0
000000014019BD4C  cmp     [rbp+3F0h+18var_214var_210var_20Cvar_208var_204var_20], 0
000000014019BD50  jz      loc_14019BDF7
000000014019BD56  cmp     [rbp+3F0h+var_3B8], 0
000000014019BD5A  jle     short loc_14019BDC4
000000014019BD5C  mov     eax, [rbp+3F0h+var_134]
000000014019BD62  add     eax, 2
000000014019BD65  cmp     [rbp+3F0h+], eax
000000014019BD6B  jge     short loc_14019BD7B
000000014019BD6D  mov     eax, [rbp+3F0h+]
000000014019BD73  mov     [rbp+3F0h+__return_address], eax
000000014019BD79  jmp     short loc_14019BD8A
000000014019BD7B  mov     eax, [rbp+3F0h+var_134]
000000014019BD81  add     eax, 2
000000014019BD84  mov     [rbp+3F0h+__return_address], eax
000000014019BD8A  mov     eax, [rbp+3F0h+__return_address]
000000014019BD90  mov     [rbp+3F0h+], eax
000000014019BD96  mov     eax, [rbp+3F0h+]
000000014019BD9C  mov     [rbp+3F0h+ar_3A0var_39Cvar_398var_394var_390var_38Cvar_388var_384var_380var_37Cvar_378var_370var_368var_364var_36], eax
000000014019BD9F  mov     eax, [rbp+3F0h+]
000000014019BDA5  shl     eax, 3
000000014019BDA8  mov     [rbp+3F0h+va_3A4], eax
000000014019BDAB  mov     [rbp+3F0h+var_3D8], 2
000000014019BDB2  mov     edx, [rbp+3F0h+]
000000014019BDB8  mov     rcx, [rbp+3F0h+]
000000014019BDBF  call    sub_14019A8F0
000000014019BDC4  mov     eax, [rbp+3F0h+]
000000014019BDCA  shl     eax, 3
000000014019BDCD  mov     [rbp+3F0h+var_3C8], eax
000000014019BDD0  mov     rcx, [rbp+3F0h+]
000000014019BDD7  call    sub_14019A0A0
000000014019BDDC  mov     ecx, [rbp+3F0h+var_3C8]
000000014019BDDF  sub     ecx, eax
000000014019BDE1  mov     eax, ecx
000000014019BDE3  mov     rcx, [rbp+3F0h+]
000000014019BDEA  add     eax, [rcx+18h]
000000014019BDED  mov     rcx, [rbp+3F0h+]
000000014019BDF4  mov     [rcx+18h], eax
000000014019BDF7  mov     [rbp+3F0h+var_3E4], 0
000000014019BDFE  mov     [rbp+3F0h+arg_8], 0
000000014019BE08  mov     rax, [rbp+3F0h+]
000000014019BE0F  cmp     dword ptr [rax+14h], 0
000000014019BE13  jz      short loc_14019BE32
000000014019BE15  movss   xmm0, [rbp+3F0h+var_11C]
000000014019BE1D  comiss  xmm0, cs:dword_140278ADC
000000014019BE24  jbe     short loc_14019BE32
000000014019BE26  mov     [rbp+3F0h+arg_0], 1
000000014019BE30  jmp     short loc_14019BE3C
000000014019BE32  mov     [rbp+3F0h+arg_0], 0
000000014019BE3C  mov     eax, [rbp+3F0h+arg_0]
000000014019BE42  mov     [rbp+3F0h+arg_8], eax
000000014019BE48  movsxd  rax, [rbp+3F0h+var_3E4]
000000014019BE4C  mov     rcx, [rbp+3F0h+]
000000014019BE53  lea     rax, [rcx+rax*4+0C4h]
000000014019BE5B  mov     rcx, [rbp+3F0h+var_3D0]
000000014019BE5F  add     rcx, 10h
000000014019BE63  mov     edx, [rbp+3F0h+var_2D4var_2D0var_2CCvar_2C8var_2C4var_2C0var_2B]
000000014019BE66  mov     r8d, [rbp+3F0h+var_3A8]
000000014019BE6A  add     r8d, edx
000000014019BE6D  mov     edx, r8d
000000014019BE70  mov     r8d, [rbp+3F0h+var_3E4]
000000014019BE74  imul    r8d, edx
000000014019BE78  mov     edx, r8d
000000014019BE7B  movsxd  rdx, edx
000000014019BE7E  mov     r8, [rbp+3F0h+var_70]
000000014019BE85  lea     rdx, [r8+rdx*4]
000000014019BE89  movsxd  r8, [rbp+3F0h+var_2D4var_2D0var_2CCvar_2C8var_2C4var_2C0var_2B]
000000014019BE8D  lea     rdx, [rdx+r8*4]
000000014019BE91  movsxd  r8, [rbp+3F0h+var_3E4]
000000014019BE95  mov     r9, [rbp+3F0h+]
000000014019BE9C  lea     r8, [r9+r8*4]
000000014019BEA0  mov     [rbp+3F0h+], r8
000000014019BEA7  mov     r9d, [rbp+3F0h+arg_8]
000000014019BEAE  mov     dword ptr [rsp+4B0h+var_478], r9d
000000014019BEB3  mov     [rsp+4B0h+var_480], rax
000000014019BEB8  mov     [rsp+4B0h+var_488], rcx
000000014019BEBD  mov     rax, [rbp+3F0h+]
000000014019BEC4  mov     eax, [rax+20h]
000000014019BEC7  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019BECB  mov     r9d, [rbp+3F0h+var_3D4]
000000014019BECF  mov     r8d, [rbp+3F0h+var_3A8]
000000014019BED3  mov     rax, [rbp+3F0h+]
000000014019BEDA  mov     rcx, rax
000000014019BEDD  call    sub_1401A08E0
000000014019BEE2  mov     eax, [rbp+3F0h+var_3E4]
000000014019BEE5  inc     eax
000000014019BEE7  mov     [rbp+3F0h+var_3E4], eax
000000014019BEEA  mov     eax, [rbp+3F0h+var_3D4]
000000014019BEED  cmp     [rbp+3F0h+var_3E4], eax
000000014019BEF0  jl      loc_14019BDFE
000000014019BEF6  mov     rax, [rbp+3F0h+]
000000014019BEFD  cmp     dword ptr [rax+44h], 0
000000014019BF01  jz      short loc_14019BF09
000000014019BF03  cmp     [rbp+3F0h+var_3D8], 3
000000014019BF07  jg      short loc_14019BF12
000000014019BF09  imul    eax, [rbp+3F0h+var_3EC], 0Ch
000000014019BF0D  cmp     [rbp+3F0h+var_3D8], eax
000000014019BF10  jle     short loc_14019BF44
000000014019BF12  cmp     [rbp+3F0h+var_3A4], 0
000000014019BF16  jnz     short loc_14019BF44
000000014019BF18  cmp     [rbp+3F0h+18var_214var_210var_20Cvar_208var_204var_20], 0
000000014019BF1C  jnz     short loc_14019BF44
000000014019BF1E  mov     rax, [rbp+3F0h+]
000000014019BF25  cmp     dword ptr [rax+18h], 0
000000014019BF29  jnz     short loc_14019BF44
000000014019BF2B  mov     rax, [rbp+3F0h+]
000000014019BF32  cmp     dword ptr [rax+1Ch], 5
000000014019BF36  jl      short loc_14019BF44
000000014019BF38  mov     [rbp+3F0h+arg_10], 1
000000014019BF42  jmp     short loc_14019BF4E
000000014019BF44  mov     [rbp+3F0h+arg_10], 0
000000014019BF4E  mov     eax, [rbp+3F0h+arg_10]
000000014019BF54  mov     [rbp+3F0h+], eax
000000014019BF5A  mov     rax, [rbp+3F0h+]
000000014019BF61  mov     eax, [rax+68h]
000000014019BF64  mov     [rbp+3F0h+var_EC], eax
000000014019BF6A  mov     rax, [rbp+3F0h+]
000000014019BF71  add     rax, 7Ch ; '|'
000000014019BF75  mov     [rsp+4B0h+var_458], rax
000000014019BF7A  mov     eax, [rbp+3F0h+var_3D8]
000000014019BF7D  mov     dword ptr [rsp+4B0h+var_460], eax
000000014019BF81  mov     eax, [rbp+3F0h+]
000000014019BF87  mov     dword ptr [rsp+4B0h+var_468], eax
000000014019BF8B  lea     rax, [rbp+3F0h+]
000000014019BF92  mov     [rsp+4B0h+var_470], rax
000000014019BF97  lea     rax, [rbp+3F0h+var_A0]
000000014019BF9E  mov     [rsp+4B0h+var_478], rax
000000014019BFA3  lea     rax, [rbp+3F0h+FCvar_2F8var_2F4var_2F0var_2E8var_2E0var_2D]
000000014019BFA7  mov     [rsp+4B0h+var_480], rax
000000014019BFAC  mov     eax, [rbp+3F0h+var_EC]
000000014019BFB2  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019BFB6  mov     eax, [rbp+3F0h+var_3A8]
000000014019BFB9  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019BFBD  mov     r9d, [rbp+3F0h+var_3D4]
000000014019BFC1  mov     r8, [rbp+3F0h+]
000000014019BFC8  mov     rdx, [rbp+3F0h+var_70]
000000014019BFCF  mov     rcx, [rbp+3F0h+]
000000014019BFD6  call    sub_1401B2750
000000014019BFDB  mov     [rbp+3F0h+], eax
000000014019BFE1  movss   xmm0, [rbp+3F0h+var_A0]
000000014019BFE9  comiss  xmm0, cs:dword_140278304
000000014019BFF0  ja      short loc_14019C007
000000014019BFF2  mov     rax, [rbp+3F0h+]
000000014019BFF9  movss   xmm0, dword ptr [rax+70h]
000000014019BFFE  comiss  xmm0, cs:dword_140278304
000000014019C005  jbe     short loc_14019C083
000000014019C007  mov     rax, [rbp+3F0h+]
000000014019C00E  cmp     dword ptr [rax+7Ch], 0
000000014019C012  jz      short loc_14019C02D
000000014019C014  mov     rax, [rbp+3F0h+]
000000014019C01B  cvtss2sd xmm0, dword ptr [rax+80h]
000000014019C023  comisd  xmm0, cs:qword_1402832D8
000000014019C02B  jbe     short loc_14019C083
000000014019C02D  cvtsi2sd xmm0, [rbp+3F0h+FCvar_2F8var_2F4var_2F0var_2E8var_2E0var_2D]
000000014019C032  mov     rax, [rbp+3F0h+]
000000014019C039  cvtsi2sd xmm1, dword ptr [rax+6Ch]
000000014019C03E  movsd   xmm2, cs:qword_140283300
000000014019C046  mulsd   xmm2, xmm1
000000014019C04A  movaps  xmm1, xmm2
000000014019C04D  comisd  xmm0, xmm1
000000014019C051  ja      short loc_14019C079
000000014019C053  cvtsi2sd xmm0, [rbp+3F0h+FCvar_2F8var_2F4var_2F0var_2E8var_2E0var_2D]
000000014019C058  mov     rax, [rbp+3F0h+]
000000014019C05F  cvtsi2sd xmm1, dword ptr [rax+6Ch]
000000014019C064  movsd   xmm2, cs:qword_1402832F8
000000014019C06C  mulsd   xmm2, xmm1
000000014019C070  movaps  xmm1, xmm2
000000014019C073  comisd  xmm1, xmm0
000000014019C077  jbe     short loc_14019C083
000000014019C079  mov     [rbp+3F0h+], 1
000000014019C083  cmp     [rbp+3F0h+], 0
000000014019C08A  jnz     short loc_14019C0B6
000000014019C08C  cmp     [rbp+3F0h+var_3A4], 0
000000014019C090  jnz     short loc_14019C0B1
000000014019C092  mov     eax, [rbp+3F0h+var_3C8]
000000014019C095  add     eax, 10h
000000014019C098  cmp     eax, [rbp+3F0h+va_3A4]
000000014019C09B  jg      short loc_14019C0B1
000000014019C09D  mov     r8d, 1
000000014019C0A3  xor     edx, edx
000000014019C0A5  mov     rcx, [rbp+3F0h+]
000000014019C0AC  call    sub_14019A450
000000014019C0B1  jmp     loc_14019C178
000000014019C0B6  mov     r8d, 1
000000014019C0BC  mov     edx, 1
000000014019C0C1  mov     rcx, [rbp+3F0h+]
000000014019C0C8  call    sub_14019A450
000000014019C0CD  mov     eax, [rbp+3F0h+FCvar_2F8var_2F4var_2F0var_2E8var_2E0var_2D]
000000014019C0D0  inc     eax
000000014019C0D2  mov     [rbp+3F0h+FCvar_2F8var_2F4var_2F0var_2E8var_2E0var_2D], eax
000000014019C0D5  mov     ecx, [rbp+3F0h+FCvar_2F8var_2F4var_2F0var_2E8var_2E0var_2D]
000000014019C0D8  call    sub_14019A020
000000014019C0DD  neg     eax
000000014019C0DF  mov     ecx, 1
000000014019C0E4  sub     ecx, eax
000000014019C0E6  mov     eax, ecx
000000014019C0E8  sub     eax, 5
000000014019C0EB  mov     [rbp+3F0h+var_C8], eax
000000014019C0F1  mov     r8d, 6
000000014019C0F7  mov     edx, [rbp+3F0h+var_C8]
000000014019C0FD  mov     rcx, [rbp+3F0h+]
000000014019C104  call    sub_14019A5E0
000000014019C109  mov     eax, [rbp+3F0h+var_C8]
000000014019C10F  add     eax, 4
000000014019C112  mov     ecx, [rbp+3F0h+var_C8]
000000014019C118  mov     edx, 10h
000000014019C11D  shl     edx, cl
000000014019C11F  mov     ecx, edx
000000014019C121  mov     edx, [rbp+3F0h+FCvar_2F8var_2F4var_2F0var_2E8var_2E0var_2D]
000000014019C124  sub     edx, ecx
000000014019C126  mov     ecx, edx
000000014019C128  mov     r8d, eax
000000014019C12B  mov     edx, ecx
000000014019C12D  mov     rcx, [rbp+3F0h+]
000000014019C134  call    sub_14019A6D0
000000014019C139  mov     eax, [rbp+3F0h+FCvar_2F8var_2F4var_2F0var_2E8var_2E0var_2D]
000000014019C13C  dec     eax
000000014019C13E  mov     [rbp+3F0h+FCvar_2F8var_2F4var_2F0var_2E8var_2E0var_2D], eax
000000014019C141  mov     r8d, 3
000000014019C147  mov     edx, [rbp+3F0h+]
000000014019C14D  mov     rcx, [rbp+3F0h+]
000000014019C154  call    sub_14019A6D0
000000014019C159  mov     r9d, 2
000000014019C15F  lea     r8, unk_140279CE8
000000014019C166  mov     edx, [rbp+3F0h+var_EC]
000000014019C16C  mov     rcx, [rbp+3F0h+]
000000014019C173  call    sub_14019A4F0
000000014019C178  mov     [rbp+3F0h+var_3BC], 0
000000014019C17F  mov     [rbp+3F0h+_33Cvar_338var_334var_330var_32Cvar_328var_320var_318var_314var_310var_30Cvar_308var_304var_300var_], 0
000000014019C186  mov     rax, [rbp+3F0h+]
000000014019C18D  cmp     dword ptr [rax+1Ch], 1
000000014019C191  jl      loc_14019C22E
000000014019C197  mov     rax, [rbp+3F0h+]
000000014019C19E  cmp     dword ptr [rax+44h], 0
000000014019C1A2  jnz     loc_14019C22E
000000014019C1A8  cmp     [rbp+3F0h+var_3A4], 0
000000014019C1AC  jz      short loc_14019C1D0
000000014019C1AE  cmp     [rbp+3F0h+ar_3A0var_39Cvar_398var_394var_390var_38Cvar_388var_384var_380var_37Cvar_378var_370var_368var_364var_36], 0Fh
000000014019C1B2  jge     short loc_14019C1D0
000000014019C1B4  mov     rax, [rbp+3F0h+]
000000014019C1BB  cmp     dword ptr [rax+0BCh], 2
000000014019C1C2  jz      short loc_14019C1D0
000000014019C1C4  mov     [rbp+3F0h+arg_18], 1
000000014019C1CE  jmp     short loc_14019C1DA
000000014019C1D0  mov     [rbp+3F0h+arg_18], 0
000000014019C1DA  mov     eax, [rbp+3F0h+arg_18]
000000014019C1E0  mov     [rbp+3F0h+], eax
000000014019C1E6  mov     eax, [rbp+3F0h+var_2D4var_2D0var_2CCvar_2C8var_2C4var_2C0var_2B]
000000014019C1E9  mov     ecx, [rbp+3F0h+var_3A8]
000000014019C1EC  add     ecx, eax
000000014019C1EE  mov     eax, ecx
000000014019C1F0  lea     rcx, [rbp+3F0h+]
000000014019C1F7  mov     [rsp+4B0h+var_480], rcx
000000014019C1FC  mov     ecx, [rbp+3F0h+]
000000014019C202  mov     dword ptr [rsp+4B0h+var_488], ecx
000000014019C206  lea     rcx, [rbp+3F0h+var_BC]
000000014019C20D  mov     [rsp+4B0h+var_490], rcx
000000014019C212  lea     r9, [rbp+3F0h+r_1A8var_1A4var_1A0var_19Cvar_198var_194var_190var_18Cvar_188var_184var_180var_17Cva]
000000014019C219  mov     r8d, [rbp+3F0h+var_3D4]
000000014019C21D  mov     edx, eax
000000014019C21F  mov     rcx, [rbp+3F0h+var_70]
000000014019C226  call    sub_1401AE510
000000014019C22B  mov     [rbp+3F0h+var_3BC], eax
000000014019C22E  cmp     [rbp+3F0h+var_3E0], 0
000000014019C232  jle     short loc_14019C259
000000014019C234  mov     rcx, [rbp+3F0h+]
000000014019C23B  call    sub_14019A0A0
000000014019C240  add     eax, 3
000000014019C243  cmp     eax, [rbp+3F0h+va_3A4]
000000014019C246  jg      short loc_14019C259
000000014019C248  cmp     [rbp+3F0h+var_3BC], 0
000000014019C24C  jz      short loc_14019C257
000000014019C24E  mov     eax, [rbp+3F0h+var_108]
000000014019C254  mov     [rbp+3F0h+_33Cvar_338var_334var_330var_32Cvar_328var_320var_318var_314var_310var_30Cvar_308var_304var_300var_], eax
000000014019C257  jmp     short loc_14019C26A
000000014019C259  mov     [rbp+3F0h+var_3BC], 0
000000014019C260  mov     [rbp+3F0h+], 1
000000014019C26A  mov     eax, [rbp+3F0h+var_3D4]
000000014019C26D  imul    eax, [rbp+3F0h+var_3A8]
000000014019C271  cdqe
000000014019C273  shl     rax, 2
000000014019C277  mov     rcx, rax
000000014019C27A  add     rcx, 0Fh
000000014019C27E  cmp     rcx, rax
000000014019C281  ja      short loc_14019C28D
000000014019C283  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019C28D  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019C291  mov     rax, rcx
000000014019C294  call    sub_1401F89D0
000000014019C299  sub     rsp, rax
000000014019C29C  lea     rax, [rsp+4B0h+var_3F0]
000000014019C2A4  mov     [rbp+3F0h+var_90], rax
000000014019C2AB  mov     eax, [rbp+3F0h+var_3E8]
000000014019C2AE  imul    eax, [rbp+3F0h+var_3D4]
000000014019C2B2  cdqe
000000014019C2B4  shl     rax, 2
000000014019C2B8  mov     rcx, rax
000000014019C2BB  add     rcx, 0Fh
000000014019C2BF  cmp     rcx, rax
000000014019C2C2  ja      short loc_14019C2CE
000000014019C2C4  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019C2CE  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019C2D2  mov     rax, rcx
000000014019C2D5  call    sub_1401F89D0
000000014019C2DA  sub     rsp, rax
000000014019C2DD  lea     rax, [rsp+4B0h+var_3F0]
000000014019C2E5  mov     [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C], rax
000000014019C2EC  mov     eax, [rbp+3F0h+var_3E8]
000000014019C2EF  imul    eax, [rbp+3F0h+var_3D4]
000000014019C2F3  cdqe
000000014019C2F5  shl     rax, 2
000000014019C2F9  mov     rcx, rax
000000014019C2FC  add     rcx, 0Fh
000000014019C300  cmp     rcx, rax
000000014019C303  ja      short loc_14019C30F
000000014019C305  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019C30F  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019C313  mov     rax, rcx
000000014019C316  call    sub_1401F89D0
000000014019C31B  sub     rsp, rax
000000014019C31E  lea     rax, [rsp+4B0h+var_3F0]
000000014019C326  mov     [rbp+3F0h+var_13C], rax
000000014019C32D  cmp     [rbp+3F0h+_33Cvar_338var_334var_330var_32Cvar_328var_320var_318var_314var_310var_30Cvar_308var_304var_300var_], 0
000000014019C331  jz      short loc_14019C34C
000000014019C333  mov     rax, [rbp+3F0h+]
000000014019C33A  cmp     dword ptr [rax+1Ch], 8
000000014019C33E  jl      short loc_14019C34C
000000014019C340  mov     [rbp+3F0h+arg_20], 1
000000014019C34A  jmp     short loc_14019C356
000000014019C34C  mov     [rbp+3F0h+arg_20], 0
000000014019C356  mov     eax, [rbp+3F0h+arg_20]
000000014019C35C  mov     [rbp+3F0h+], eax
000000014019C362  mov     eax, [rbp+3F0h+var_3EC]
000000014019C365  imul    eax, [rbp+3F0h+var_3E8]
000000014019C369  cdqe
000000014019C36B  shl     rax, 2
000000014019C36F  mov     rcx, rax
000000014019C372  add     rcx, 0Fh
000000014019C376  cmp     rcx, rax
000000014019C379  ja      short loc_14019C385
000000014019C37B  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019C385  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019C389  mov     rax, rcx
000000014019C38C  call    sub_1401F89D0
000000014019C391  sub     rsp, rax
000000014019C394  lea     rax, [rsp+4B0h+var_3F0]
000000014019C39C  mov     [rbp+3F0h+var_D4], rax
000000014019C3A3  cmp     [rbp+3F0h+], 0
000000014019C3AA  jz      loc_14019C4B5
000000014019C3B0  mov     rax, [rbp+3F0h+]
000000014019C3B7  mov     eax, [rax+4Ch]
000000014019C3BA  mov     dword ptr [rsp+4B0h+var_470], eax
000000014019C3BE  mov     rax, [rbp+3F0h+]
000000014019C3C5  mov     eax, [rax+20h]
000000014019C3C8  mov     dword ptr [rsp+4B0h+var_478], eax
000000014019C3CC  mov     eax, [rbp+3F0h+var_3E0]
000000014019C3CF  mov     dword ptr [rsp+4B0h+var_480], eax
000000014019C3D3  mov     eax, [rbp+3F0h+var_3D4]
000000014019C3D6  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019C3DA  mov     eax, [rbp+3F0h+var_3EC]
000000014019C3DD  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019C3E1  mov     r9, [rbp+3F0h+var_90]
000000014019C3E8  mov     r8, [rbp+3F0h+var_70]
000000014019C3EF  xor     edx, edx
000000014019C3F1  mov     rcx, [rbp+3F0h+var_3D0]
000000014019C3F5  call    sub_1401AF0F0
000000014019C3FA  mov     rax, [rbp+3F0h+]
000000014019C401  mov     eax, [rax+4Ch]
000000014019C404  mov     dword ptr [rsp+4B0h+var_480], eax
000000014019C408  mov     eax, [rbp+3F0h+var_3E0]
000000014019C40B  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019C40F  mov     eax, [rbp+3F0h+var_3EC]
000000014019C412  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019C416  mov     r9d, [rbp+3F0h+var_3AC]
000000014019C41A  mov     r8, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C421  mov     rdx, [rbp+3F0h+var_90]
000000014019C428  mov     rcx, [rbp+3F0h+var_3D0]
000000014019C42C  call    sub_1401A3450
000000014019C431  mov     eax, [rbp+3F0h+var_3EC]
000000014019C434  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019C438  mov     rax, [rbp+3F0h+var_D4]
000000014019C43F  mov     [rsp+4B0h+var_490], rax
000000014019C444  mov     r9, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C44B  mov     r8d, [rbp+3F0h+var_3DC]
000000014019C44F  mov     edx, [rbp+3F0h+var_3AC]
000000014019C452  mov     rcx, [rbp+3F0h+var_3D0]
000000014019C456  call    sub_1401A6EA0
000000014019C45B  mov     [rbp+3F0h+var_3F0], 0
000000014019C462  jmp     short loc_14019C46C
000000014019C464  mov     eax, [rbp+3F0h+var_3F0]
000000014019C467  inc     eax
000000014019C469  mov     [rbp+3F0h+var_3F0], eax
000000014019C46C  mov     eax, [rbp+3F0h+var_3EC]
000000014019C46F  imul    eax, [rbp+3F0h+var_3E8]
000000014019C473  cmp     [rbp+3F0h+var_3F0], eax
000000014019C476  jge     short loc_14019C4B5
000000014019C478  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019C47C  cvtsi2ss xmm0, [rbp+3F0h+var_3E0]
000000014019C481  movss   xmm1, cs:dword_140278338
000000014019C489  mulss   xmm1, xmm0
000000014019C48D  movaps  xmm0, xmm1
000000014019C490  mov     rcx, [rbp+3F0h+var_D4]
000000014019C497  movss   xmm1, dword ptr [rcx+rax*4]
000000014019C49C  addss   xmm1, xmm0
000000014019C4A0  movaps  xmm0, xmm1
000000014019C4A3  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019C4A7  mov     rcx, [rbp+3F0h+var_D4]
000000014019C4AE  movss   dword ptr [rcx+rax*4], xmm0
000000014019C4B3  jmp     short loc_14019C464
000000014019C4B5  mov     rax, [rbp+3F0h+]
000000014019C4BC  mov     eax, [rax+4Ch]
000000014019C4BF  mov     dword ptr [rsp+4B0h+var_470], eax
000000014019C4C3  mov     rax, [rbp+3F0h+]
000000014019C4CA  mov     eax, [rax+20h]
000000014019C4CD  mov     dword ptr [rsp+4B0h+var_478], eax
000000014019C4D1  mov     eax, [rbp+3F0h+var_3E0]
000000014019C4D4  mov     dword ptr [rsp+4B0h+var_480], eax
000000014019C4D8  mov     eax, [rbp+3F0h+var_3D4]
000000014019C4DB  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019C4DF  mov     eax, [rbp+3F0h+var_3EC]
000000014019C4E2  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019C4E6  mov     r9, [rbp+3F0h+var_90]
000000014019C4ED  mov     r8, [rbp+3F0h+var_70]
000000014019C4F4  mov     edx, [rbp+3F0h+_33Cvar_338var_334var_330var_32Cvar_328var_320var_318var_314var_310var_30Cvar_308var_304var_300var_]
000000014019C4F7  mov     rcx, [rbp+3F0h+var_3D0]
000000014019C4FB  call    sub_1401AF0F0
000000014019C500  cmp     [rbp+3F0h+var_3D4], 2
000000014019C504  jnz     short loc_14019C516
000000014019C506  cmp     [rbp+3F0h+var_3EC], 1
000000014019C50A  jnz     short loc_14019C516
000000014019C50C  mov     [rbp+3F0h+var_BC], 0
000000014019C516  mov     rax, [rbp+3F0h+]
000000014019C51D  mov     eax, [rax+4Ch]
000000014019C520  mov     dword ptr [rsp+4B0h+var_480], eax
000000014019C524  mov     eax, [rbp+3F0h+var_3E0]
000000014019C527  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019C52B  mov     eax, [rbp+3F0h+var_3EC]
000000014019C52E  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019C532  mov     r9d, [rbp+3F0h+var_3AC]
000000014019C536  mov     r8, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C53D  mov     rdx, [rbp+3F0h+var_90]
000000014019C544  mov     rcx, [rbp+3F0h+var_3D0]
000000014019C548  call    sub_1401A3450
000000014019C54D  mov     rax, [rbp+3F0h+]
000000014019C554  cmp     dword ptr [rax+44h], 0
000000014019C558  jz      loc_14019C672
000000014019C55E  mov     [rbp+3F0h+var_3F0], 2
000000014019C565  jmp     short loc_14019C56F
000000014019C567  mov     eax, [rbp+3F0h+var_3F0]
000000014019C56A  inc     eax
000000014019C56C  mov     [rbp+3F0h+var_3F0], eax
000000014019C56F  mov     eax, [rbp+3F0h+var_3DC]
000000014019C572  cmp     [rbp+3F0h+var_3F0], eax
000000014019C575  jge     loc_14019C672
000000014019C57B  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019C57F  mov     rcx, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C586  movss   xmm0, dword ptr [rcx+rax*4]
000000014019C58B  mov     eax, 4
000000014019C590  imul    rax, 0
000000014019C594  mov     rcx, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C59B  movss   xmm1, dword ptr [rcx+rax]
000000014019C5A0  movss   xmm2, cs:dword_140278074
000000014019C5A8  mulss   xmm2, xmm1
000000014019C5AC  movaps  xmm1, xmm2
000000014019C5AF  comiss  xmm1, xmm0
000000014019C5B2  jbe     short loc_14019C5CE
000000014019C5B4  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019C5B8  mov     rcx, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C5BF  movss   xmm0, dword ptr [rcx+rax*4]
000000014019C5C4  movss   [rbp+3F0h+arg_28], xmm0
000000014019C5CC  jmp     short loc_14019C5FA
000000014019C5CE  mov     eax, 4
000000014019C5D3  imul    rax, 0
000000014019C5D7  mov     rcx, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C5DE  movss   xmm0, dword ptr [rcx+rax]
000000014019C5E3  movss   xmm1, cs:dword_140278074
000000014019C5EB  mulss   xmm1, xmm0
000000014019C5EF  movaps  xmm0, xmm1
000000014019C5F2  movss   [rbp+3F0h+arg_28], xmm0
000000014019C5FA  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019C5FE  mov     rcx, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C605  movss   xmm0, [rbp+3F0h+arg_28]
000000014019C60D  movss   dword ptr [rcx+rax*4], xmm0
000000014019C612  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019C616  mov     rcx, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C61D  movss   xmm0, dword ptr [rcx+rax*4]
000000014019C622  comiss  xmm0, cs:dword_1402831BC
000000014019C629  jbe     short loc_14019C645
000000014019C62B  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019C62F  mov     rcx, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C636  movss   xmm0, dword ptr [rcx+rax*4]
000000014019C63B  movss   [rbp+3F0h+], xmm0
000000014019C643  jmp     short loc_14019C655
000000014019C645  movss   xmm0, cs:dword_1402831BC
000000014019C64D  movss   [rbp+3F0h+], xmm0
000000014019C655  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019C659  mov     rcx, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C660  movss   xmm0, [rbp+3F0h+]
000000014019C668  movss   dword ptr [rcx+rax*4], xmm0
000000014019C66D  jmp     loc_14019C567
000000014019C672  mov     eax, [rbp+3F0h+var_3EC]
000000014019C675  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019C679  mov     rax, [rbp+3F0h+var_13C]
000000014019C680  mov     [rsp+4B0h+var_490], rax
000000014019C685  mov     r9, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019C68C  mov     r8d, [rbp+3F0h+var_3DC]
000000014019C690  mov     edx, [rbp+3F0h+var_3AC]
000000014019C693  mov     rcx, [rbp+3F0h+var_3D0]
000000014019C697  call    sub_1401A6EA0
000000014019C69C  mov     eax, [rbp+3F0h+var_3EC]
000000014019C69F  imul    eax, [rbp+3F0h+var_3E8]
000000014019C6A3  cdqe
000000014019C6A5  shl     rax, 2
000000014019C6A9  mov     rcx, rax
000000014019C6AC  add     rcx, 0Fh
000000014019C6B0  cmp     rcx, rax
000000014019C6B3  ja      short loc_14019C6BF
000000014019C6B5  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019C6BF  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019C6C3  mov     rax, rcx
000000014019C6C6  call    sub_1401F89D0
000000014019C6CB  sub     rsp, rax
000000014019C6CE  lea     rax, [rsp+4B0h+var_3F0]
000000014019C6D6  mov     [rbp+3F0h+var_88], rax
000000014019C6DD  movsxd  rax, [rbp+3F0h+var_3DC]
000000014019C6E1  shl     rax, 2
000000014019C6E5  mov     r8, rax
000000014019C6E8  xor     edx, edx
000000014019C6EA  mov     rcx, [rbp+3F0h+var_88]
000000014019C6F1  call    1401FCD30h
000000014019C6F6  cmp     [rbp+3F0h+var_3A4], 0
000000014019C6FA  jnz     loc_14019CD94
000000014019C700  mov     rax, [rbp+3F0h+]
000000014019C707  cmp     qword ptr [rax+0F0h], 0
000000014019C70F  jz      loc_14019CD94
000000014019C715  mov     rax, [rbp+3F0h+]
000000014019C71C  cmp     dword ptr [rax+44h], 0
000000014019C720  jnz     loc_14019CD94
000000014019C726  xorps   xmm0, xmm0
000000014019C729  movss   [rbp+3F0h+var_3B0], xmm0
000000014019C72E  xorps   xmm0, xmm0
000000014019C731  movss   [rbp+3F0h+var_3B4], xmm0
000000014019C736  mov     [rbp+3F0h+var_C4], 0
000000014019C740  mov     rax, [rbp+3F0h+]
000000014019C747  cmp     dword ptr [rax+60h], 2
000000014019C74B  jge     short loc_14019C759
000000014019C74D  mov     [rbp+3F0h+], 2
000000014019C757  jmp     short loc_14019C769
000000014019C759  mov     rax, [rbp+3F0h+]
000000014019C760  mov     eax, [rax+60h]
000000014019C763  mov     [rbp+3F0h+], eax
000000014019C769  mov     eax, [rbp+3F0h+]
000000014019C76F  mov     [rbp+3F0h+var_2B8var_2B4var_2B0var_2A8var_2A0var_298var_290var_288v], eax
000000014019C772  mov     [rbp+3F0h+var_3E4], 0
000000014019C779  jmp     short loc_14019C783
000000014019C77B  mov     eax, [rbp+3F0h+var_3E4]
000000014019C77E  inc     eax
000000014019C780  mov     [rbp+3F0h+var_3E4], eax
000000014019C783  mov     eax, [rbp+3F0h+var_3EC]
000000014019C786  cmp     [rbp+3F0h+var_3E4], eax
000000014019C789  jge     loc_14019C994
000000014019C78F  mov     [rbp+3F0h+var_3F0], 0
000000014019C796  jmp     short loc_14019C7A0
000000014019C798  mov     eax, [rbp+3F0h+var_3F0]
000000014019C79B  inc     eax
000000014019C79D  mov     [rbp+3F0h+var_3F0], eax
000000014019C7A0  mov     eax, [rbp+3F0h+var_2B8var_2B4var_2B0var_2A8var_2A0var_298var_290var_288v]
000000014019C7A3  cmp     [rbp+3F0h+var_3F0], eax
000000014019C7A6  jge     loc_14019C98F
000000014019C7AC  mov     eax, [rbp+3F0h+var_3E8]
000000014019C7AF  imul    eax, [rbp+3F0h+var_3E4]
000000014019C7B3  add     eax, [rbp+3F0h+var_3F0]
000000014019C7B6  cdqe
000000014019C7B8  mov     rcx, [rbp+3F0h+]
000000014019C7BF  mov     rcx, [rcx+0F0h]
000000014019C7C6  movss   xmm0, dword ptr [rcx+rax*4]
000000014019C7CB  movss   xmm1, cs:dword_140278280
000000014019C7D3  comiss  xmm1, xmm0
000000014019C7D6  jbe     short loc_14019C801
000000014019C7D8  mov     eax, [rbp+3F0h+var_3E8]
000000014019C7DB  imul    eax, [rbp+3F0h+var_3E4]
000000014019C7DF  add     eax, [rbp+3F0h+var_3F0]
000000014019C7E2  cdqe
000000014019C7E4  mov     rcx, [rbp+3F0h+]
000000014019C7EB  mov     rcx, [rcx+0F0h]
000000014019C7F2  movss   xmm0, dword ptr [rcx+rax*4]
000000014019C7F7  movss   [rbp+3F0h+], xmm0
000000014019C7FF  jmp     short loc_14019C811
000000014019C801  movss   xmm0, cs:dword_140278280
000000014019C809  movss   [rbp+3F0h+], xmm0
000000014019C811  movss   xmm0, [rbp+3F0h+]
000000014019C819  comiss  xmm0, cs:dword_140278CB8
000000014019C820  jbe     short loc_14019C899
000000014019C822  mov     eax, [rbp+3F0h+var_3E8]
000000014019C825  imul    eax, [rbp+3F0h+var_3E4]
000000014019C829  add     eax, [rbp+3F0h+var_3F0]
000000014019C82C  cdqe
000000014019C82E  mov     rcx, [rbp+3F0h+]
000000014019C835  mov     rcx, [rcx+0F0h]
000000014019C83C  movss   xmm0, dword ptr [rcx+rax*4]
000000014019C841  movss   xmm1, cs:dword_140278280
000000014019C849  comiss  xmm1, xmm0
000000014019C84C  jbe     short loc_14019C877
000000014019C84E  mov     eax, [rbp+3F0h+var_3E8]
000000014019C851  imul    eax, [rbp+3F0h+var_3E4]
000000014019C855  add     eax, [rbp+3F0h+var_3F0]
000000014019C858  cdqe
000000014019C85A  mov     rcx, [rbp+3F0h+]
000000014019C861  mov     rcx, [rcx+0F0h]
000000014019C868  movss   xmm0, dword ptr [rcx+rax*4]
000000014019C86D  movss   [rbp+3F0h+], xmm0
000000014019C875  jmp     short loc_14019C887
000000014019C877  movss   xmm0, cs:dword_140278280
000000014019C87F  movss   [rbp+3F0h+], xmm0
000000014019C887  movss   xmm0, [rbp+3F0h+]
000000014019C88F  movss   [rbp+3F0h+], xmm0
000000014019C897  jmp     short loc_14019C8A9
000000014019C899  movss   xmm0, cs:dword_140278CB8
000000014019C8A1  movss   [rbp+3F0h+], xmm0
000000014019C8A9  movss   xmm0, [rbp+3F0h+]
000000014019C8B1  movss   [rbp+3F0h+var_118], xmm0
000000014019C8B9  movss   xmm0, [rbp+3F0h+var_118]
000000014019C8C1  comiss  xmm0, cs:dword_140278040
000000014019C8C8  jbe     short loc_14019C8E2
000000014019C8CA  movss   xmm0, cs:dword_140278338
000000014019C8D2  mulss   xmm0, [rbp+3F0h+var_118]
000000014019C8DA  movss   [rbp+3F0h+var_118], xmm0
000000014019C8E2  mov     eax, [rbp+3F0h+var_3F0]
000000014019C8E5  inc     eax
000000014019C8E7  cdqe
000000014019C8E9  mov     rcx, [rbp+3F0h+var_D8]
000000014019C8F0  movsx   eax, word ptr [rcx+rax*2]
000000014019C8F4  movsxd  rcx, [rbp+3F0h+var_3F0]
000000014019C8F8  mov     rdx, [rbp+3F0h+var_D8]
000000014019C8FF  movsx   ecx, word ptr [rdx+rcx*2]
000000014019C903  sub     eax, ecx
000000014019C905  cvtsi2ss xmm0, eax
000000014019C909  movss   xmm1, [rbp+3F0h+var_118]
000000014019C911  mulss   xmm1, xmm0
000000014019C915  movaps  xmm0, xmm1
000000014019C918  movss   xmm1, [rbp+3F0h+var_3B0]
000000014019C91D  addss   xmm1, xmm0
000000014019C921  movaps  xmm0, xmm1
000000014019C924  movss   [rbp+3F0h+var_3B0], xmm0
000000014019C929  mov     eax, [rbp+3F0h+var_3F0]
000000014019C92C  inc     eax
000000014019C92E  cdqe
000000014019C930  mov     rcx, [rbp+3F0h+var_D8]
000000014019C937  movsx   eax, word ptr [rcx+rax*2]
000000014019C93B  movsxd  rcx, [rbp+3F0h+var_3F0]
000000014019C93F  mov     rdx, [rbp+3F0h+var_D8]
000000014019C946  movsx   ecx, word ptr [rdx+rcx*2]
000000014019C94A  sub     eax, ecx
000000014019C94C  mov     ecx, [rbp+3F0h+var_C4]
000000014019C952  add     ecx, eax
000000014019C954  mov     eax, ecx
000000014019C956  mov     [rbp+3F0h+var_C4], eax
000000014019C95C  mov     eax, [rbp+3F0h+var_3F0]
000000014019C95F  lea     eax, [rax+rax+1]
000000014019C963  sub     eax, [rbp+3F0h+var_2B8var_2B4var_2B0var_2A8var_2A0var_298var_290var_288v]
000000014019C966  cvtsi2ss xmm0, eax
000000014019C96A  movss   xmm1, [rbp+3F0h+var_118]
000000014019C972  mulss   xmm1, xmm0
000000014019C976  movaps  xmm0, xmm1
000000014019C979  movss   xmm1, [rbp+3F0h+var_3B4]
000000014019C97E  addss   xmm1, xmm0
000000014019C982  movaps  xmm0, xmm1
000000014019C985  movss   [rbp+3F0h+var_3B4], xmm0
000000014019C98A  jmp     loc_14019C798
000000014019C98F  jmp     loc_14019C77B
000000014019C994  cvtsi2ss xmm0, [rbp+3F0h+var_C4]
000000014019C99C  movss   xmm1, [rbp+3F0h+var_3B0]
000000014019C9A1  divss   xmm1, xmm0
000000014019C9A5  movaps  xmm0, xmm1
000000014019C9A8  movss   [rbp+3F0h+var_3B0], xmm0
000000014019C9AD  movss   xmm0, [rbp+3F0h+var_3B0]
000000014019C9B2  addss   xmm0, cs:dword_140278254
000000014019C9BA  movss   [rbp+3F0h+var_3B0], xmm0
000000014019C9BF  movss   xmm0, [rbp+3F0h+var_3B4]
000000014019C9C4  mulss   xmm0, cs:dword_1402786F0
000000014019C9CC  mov     eax, [rbp+3F0h+var_2B8var_2B4var_2B0var_2A8var_2A0var_298var_290var_288v]
000000014019C9CF  dec     eax
000000014019C9D1  mov     ecx, [rbp+3F0h+var_3EC]
000000014019C9D4  imul    ecx, eax
000000014019C9D7  mov     eax, ecx
000000014019C9D9  mov     ecx, [rbp+3F0h+var_2B8var_2B4var_2B0var_2A8var_2A0var_298var_290var_288v]
000000014019C9DC  inc     ecx
000000014019C9DE  imul    eax, ecx
000000014019C9E1  imul    eax, [rbp+3F0h+var_2B8var_2B4var_2B0var_2A8var_2A0var_298var_290var_288v]
000000014019C9E5  cvtsi2ss xmm1, eax
000000014019C9E9  divss   xmm0, xmm1
000000014019C9ED  movss   [rbp+3F0h+var_3B4], xmm0
000000014019C9F2  movss   xmm0, cs:dword_140278338
000000014019C9FA  mulss   xmm0, [rbp+3F0h+var_3B4]
000000014019C9FF  movss   [rbp+3F0h+var_3B4], xmm0
000000014019CA04  movss   xmm0, cs:dword_14028321C
000000014019CA0C  comiss  xmm0, [rbp+3F0h+var_3B4]
000000014019CA10  jbe     short loc_14019CA21
000000014019CA12  movss   xmm0, [rbp+3F0h+var_3B4]
000000014019CA17  movss   [rbp+3F0h+], xmm0
000000014019CA1F  jmp     short loc_14019CA31
000000014019CA21  movss   xmm0, cs:dword_14028321C
000000014019CA29  movss   [rbp+3F0h+], xmm0
000000014019CA31  movss   xmm0, [rbp+3F0h+]
000000014019CA39  comiss  xmm0, cs:dword_140283378
000000014019CA40  jbe     short loc_14019CA81
000000014019CA42  movss   xmm0, cs:dword_14028321C
000000014019CA4A  comiss  xmm0, [rbp+3F0h+var_3B4]
000000014019CA4E  jbe     short loc_14019CA5F
000000014019CA50  movss   xmm0, [rbp+3F0h+var_3B4]
000000014019CA55  movss   [rbp+3F0h+], xmm0
000000014019CA5D  jmp     short loc_14019CA6F
000000014019CA5F  movss   xmm0, cs:dword_14028321C
000000014019CA67  movss   [rbp+3F0h+], xmm0
000000014019CA6F  movss   xmm0, [rbp+3F0h+]
000000014019CA77  movss   [rbp+3F0h+], xmm0
000000014019CA7F  jmp     short loc_14019CA91
000000014019CA81  movss   xmm0, cs:dword_140283378
000000014019CA89  movss   [rbp+3F0h+], xmm0
000000014019CA91  movss   xmm0, [rbp+3F0h+]
000000014019CA99  movss   [rbp+3F0h+var_3B4], xmm0
000000014019CA9E  mov     [rbp+3F0h+var_E4], 0
000000014019CAA8  jmp     short loc_14019CAB8
000000014019CAAA  mov     eax, [rbp+3F0h+var_E4]
000000014019CAB0  inc     eax
000000014019CAB2  mov     [rbp+3F0h+var_E4], eax
000000014019CAB8  mov     eax, [rbp+3F0h+var_E4]
000000014019CABE  inc     eax
000000014019CAC0  cdqe
000000014019CAC2  mov     rcx, [rbp+3F0h+var_D8]
000000014019CAC9  movsx   eax, word ptr [rcx+rax*2]
000000014019CACD  mov     [rbp+3F0h+], eax
000000014019CAD3  movsxd  rcx, [rbp+3F0h+var_2B8var_2B4var_2B0var_2A8var_2A0var_298var_290var_288v]
000000014019CAD7  mov     rdx, [rbp+3F0h+var_D8]
000000014019CADE  movsx   ecx, word ptr [rdx+rcx*2]
000000014019CAE2  mov     eax, ecx
000000014019CAE4  cdq
000000014019CAE5  sub     eax, edx
000000014019CAE7  sar     eax, 1
000000014019CAE9  mov     ecx, [rbp+3F0h+]
000000014019CAEF  cmp     ecx, eax
000000014019CAF1  jge     short loc_14019CAF5
000000014019CAF3  jmp     short loc_14019CAAA
000000014019CAF5  mov     [rbp+3F0h+var_C0], 0
000000014019CAFF  mov     [rbp+3F0h+var_3F0], 0
000000014019CB06  jmp     short loc_14019CB10
000000014019CB08  mov     eax, [rbp+3F0h+var_3F0]
000000014019CB0B  inc     eax
000000014019CB0D  mov     [rbp+3F0h+var_3F0], eax
000000014019CB10  mov     eax, [rbp+3F0h+var_2B8var_2B4var_2B0var_2A8var_2A0var_298var_290var_288v]
000000014019CB13  cmp     [rbp+3F0h+var_3F0], eax
000000014019CB16  jge     loc_14019CC85
000000014019CB1C  mov     eax, [rbp+3F0h+var_E4]
000000014019CB22  mov     ecx, [rbp+3F0h+var_3F0]
000000014019CB25  sub     ecx, eax
000000014019CB27  mov     eax, ecx
000000014019CB29  cvtsi2ss xmm0, eax
000000014019CB2D  movss   xmm1, [rbp+3F0h+var_3B4]
000000014019CB32  mulss   xmm1, xmm0
000000014019CB36  movaps  xmm0, xmm1
000000014019CB39  movss   xmm1, [rbp+3F0h+var_3B0]
000000014019CB3E  addss   xmm1, xmm0
000000014019CB42  movaps  xmm0, xmm1
000000014019CB45  movss   [rbp+3F0h+], xmm0
000000014019CB4D  cmp     [rbp+3F0h+var_3EC], 2
000000014019CB51  jnz     loc_14019CBE9
000000014019CB57  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019CB5B  mov     rcx, [rbp+3F0h+]
000000014019CB62  mov     rcx, [rcx+0F0h]
000000014019CB69  movss   xmm0, dword ptr [rcx+rax*4]
000000014019CB6E  mov     eax, [rbp+3F0h+var_3F0]
000000014019CB71  mov     ecx, [rbp+3F0h+var_3E8]
000000014019CB74  add     ecx, eax
000000014019CB76  mov     eax, ecx
000000014019CB78  cdqe
000000014019CB7A  mov     rcx, [rbp+3F0h+]
000000014019CB81  mov     rcx, [rcx+0F0h]
000000014019CB88  movss   xmm1, dword ptr [rcx+rax*4]
000000014019CB8D  comiss  xmm0, xmm1
000000014019CB90  jbe     short loc_14019CBB3
000000014019CB92  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019CB96  mov     rcx, [rbp+3F0h+]
000000014019CB9D  mov     rcx, [rcx+0F0h]
000000014019CBA4  movss   xmm0, dword ptr [rcx+rax*4]
000000014019CBA9  movss   [rbp+3F0h+], xmm0
000000014019CBB1  jmp     short loc_14019CBDA
000000014019CBB3  mov     eax, [rbp+3F0h+var_3F0]
000000014019CBB6  mov     ecx, [rbp+3F0h+var_3E8]
000000014019CBB9  add     ecx, eax
000000014019CBBB  mov     eax, ecx
000000014019CBBD  cdqe
000000014019CBBF  mov     rcx, [rbp+3F0h+]
000000014019CBC6  mov     rcx, [rcx+0F0h]
000000014019CBCD  movss   xmm0, dword ptr [rcx+rax*4]
000000014019CBD2  movss   [rbp+3F0h+], xmm0
000000014019CBDA  movss   xmm0, [rbp+3F0h+]
000000014019CBE2  movss   [rbp+3F0h+r_280var_27Cvar_278var_274var_270var_26Cvar_268var_264var_260var_25Cvar_258var_254va], xmm0
000000014019CBE7  jmp     short loc_14019CC05
000000014019CBE9  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019CBED  mov     rcx, [rbp+3F0h+]
000000014019CBF4  mov     rcx, [rcx+0F0h]
000000014019CBFB  movss   xmm0, dword ptr [rcx+rax*4]
000000014019CC00  movss   [rbp+3F0h+r_280var_27Cvar_278var_274var_270var_26Cvar_268var_264var_260var_25Cvar_258var_254va], xmm0
000000014019CC05  xorps   xmm0, xmm0
000000014019CC08  comiss  xmm0, [rbp+3F0h+r_280var_27Cvar_278var_274var_270var_26Cvar_268var_264var_260var_25Cvar_258var_254va]
000000014019CC0C  jbe     short loc_14019CC1D
000000014019CC0E  movss   xmm0, [rbp+3F0h+r_280var_27Cvar_278var_274var_270var_26Cvar_268var_264var_260var_25Cvar_258var_254va]
000000014019CC13  movss   [rbp+3F0h+], xmm0
000000014019CC1B  jmp     short loc_14019CC28
000000014019CC1D  xorps   xmm0, xmm0
000000014019CC20  movss   [rbp+3F0h+], xmm0
000000014019CC28  movss   xmm0, [rbp+3F0h+]
000000014019CC30  movss   [rbp+3F0h+r_280var_27Cvar_278var_274var_270var_26Cvar_268var_264var_260var_25Cvar_258var_254va], xmm0
000000014019CC35  movss   xmm0, [rbp+3F0h+r_280var_27Cvar_278var_274var_270var_26Cvar_268var_264var_260var_25Cvar_258var_254va]
000000014019CC3A  subss   xmm0, [rbp+3F0h+]
000000014019CC42  movss   [rbp+3F0h+r_280var_27Cvar_278var_274var_270var_26Cvar_268var_264var_260var_25Cvar_258var_254va], xmm0
000000014019CC47  movss   xmm0, [rbp+3F0h+r_280var_27Cvar_278var_274var_270var_26Cvar_268var_264var_260var_25Cvar_258var_254va]
000000014019CC4C  comiss  xmm0, cs:dword_140278280
000000014019CC53  jbe     short loc_14019CC80
000000014019CC55  movss   xmm0, [rbp+3F0h+r_280var_27Cvar_278var_274var_270var_26Cvar_268var_264var_260var_25Cvar_258var_254va]
000000014019CC5A  subss   xmm0, cs:dword_140278280
000000014019CC62  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019CC66  mov     rcx, [rbp+3F0h+var_88]
000000014019CC6D  movss   dword ptr [rcx+rax*4], xmm0
000000014019CC72  mov     eax, [rbp+3F0h+var_C0]
000000014019CC78  inc     eax
000000014019CC7A  mov     [rbp+3F0h+var_C0], eax
000000014019CC80  jmp     loc_14019CB08
000000014019CC85  cmp     [rbp+3F0h+var_C0], 3
000000014019CC8C  jl      loc_14019CD60
000000014019CC92  movss   xmm0, [rbp+3F0h+var_3B0]
000000014019CC97  addss   xmm0, cs:dword_140278280
000000014019CC9F  movss   [rbp+3F0h+var_3B0], xmm0
000000014019CCA4  movss   xmm0, [rbp+3F0h+var_3B0]
000000014019CCA9  comiss  xmm0, cs:dword_140278040
000000014019CCB0  jbe     short loc_14019CCE0
000000014019CCB2  xorps   xmm0, xmm0
000000014019CCB5  movss   [rbp+3F0h+var_3B0], xmm0
000000014019CCBA  xorps   xmm0, xmm0
000000014019CCBD  movss   [rbp+3F0h+var_3B4], xmm0
000000014019CCC2  movsxd  rax, [rbp+3F0h+var_2B8var_2B4var_2B0var_2A8var_2A0var_298var_290var_288v]
000000014019CCC6  shl     rax, 2
000000014019CCCA  mov     r8, rax
000000014019CCCD  xor     edx, edx
000000014019CCCF  mov     rcx, [rbp+3F0h+var_88]
000000014019CCD6  call    1401FCD30h
000000014019CCDB  jmp     loc_14019CD60
000000014019CCE0  mov     [rbp+3F0h+var_3F0], 0
000000014019CCE7  jmp     short loc_14019CCF1
000000014019CCE9  mov     eax, [rbp+3F0h+var_3F0]
000000014019CCEC  inc     eax
000000014019CCEE  mov     [rbp+3F0h+var_3F0], eax
000000014019CCF1  mov     eax, [rbp+3F0h+var_2B8var_2B4var_2B0var_2A8var_2A0var_298var_290var_288v]
000000014019CCF4  cmp     [rbp+3F0h+var_3F0], eax
000000014019CCF7  jge     short loc_14019CD60
000000014019CCF9  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019CCFD  mov     rcx, [rbp+3F0h+var_88]
000000014019CD04  movss   xmm0, dword ptr [rcx+rax*4]
000000014019CD09  subss   xmm0, cs:dword_140278280
000000014019CD11  xorps   xmm1, xmm1
000000014019CD14  comiss  xmm1, xmm0
000000014019CD17  jbe     short loc_14019CD26
000000014019CD19  xorps   xmm0, xmm0
000000014019CD1C  movss   [rbp+3F0h+], xmm0
000000014019CD24  jmp     short loc_14019CD46
000000014019CD26  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019CD2A  mov     rcx, [rbp+3F0h+var_88]
000000014019CD31  movss   xmm0, dword ptr [rcx+rax*4]
000000014019CD36  subss   xmm0, cs:dword_140278280
000000014019CD3E  movss   [rbp+3F0h+], xmm0
000000014019CD46  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019CD4A  mov     rcx, [rbp+3F0h+var_88]
000000014019CD51  movss   xmm0, [rbp+3F0h+]
000000014019CD59  movss   dword ptr [rcx+rax*4], xmm0
000000014019CD5E  jmp     short loc_14019CCE9
000000014019CD60  movss   xmm0, [rbp+3F0h+var_3B0]
000000014019CD65  addss   xmm0, cs:dword_140278254
000000014019CD6D  movss   [rbp+3F0h+var_3B0], xmm0
000000014019CD72  movss   xmm0, cs:dword_140278814
000000014019CD7A  mulss   xmm0, [rbp+3F0h+var_3B4]
000000014019CD7F  movss   [rbp+3F0h+], xmm0
000000014019CD87  movss   xmm0, [rbp+3F0h+var_3B0]
000000014019CD8C  movss   [rbp+3F0h+], xmm0
000000014019CD94  mov     rax, [rbp+3F0h+]
000000014019CD9B  cmp     dword ptr [rax+44h], 0
000000014019CD9F  jnz     loc_14019D040
000000014019CDA5  movss   xmm0, cs:dword_140278D18
000000014019CDAD  movss   [rbp+3F0h+var_1C8var_1C4var_1C0var_1BCvar_1B8var_1B4var_1B0var_1ACv], xmm0
000000014019CDB5  xorps   xmm0, xmm0
000000014019CDB8  movss   [rbp+3F0h+var_110], xmm0
000000014019CDC0  cmp     [rbp+3F0h+_33Cvar_338var_334var_330var_32Cvar_328var_320var_318var_314var_310var_30Cvar_308var_304var_300var_], 0
000000014019CDC4  jz      short loc_14019CDE4
000000014019CDC6  cvtsi2ss xmm0, [rbp+3F0h+var_3E0]
000000014019CDCB  movss   xmm1, cs:dword_140278338
000000014019CDD3  mulss   xmm1, xmm0
000000014019CDD7  movaps  xmm0, xmm1
000000014019CDDA  movss   [rbp+3F0h+], xmm0
000000014019CDE2  jmp     short loc_14019CDEF
000000014019CDE4  xorps   xmm0, xmm0
000000014019CDE7  movss   [rbp+3F0h+], xmm0
000000014019CDEF  movss   xmm0, [rbp+3F0h+]
000000014019CDF7  movss   [rbp+3F0h+var_E0], xmm0
000000014019CDFF  mov     eax, [rbp+3F0h+var_3C4]
000000014019CE02  mov     [rbp+3F0h+var_3F0], eax
000000014019CE05  jmp     short loc_14019CE0F
000000014019CE07  mov     eax, [rbp+3F0h+var_3F0]
000000014019CE0A  inc     eax
000000014019CE0C  mov     [rbp+3F0h+var_3F0], eax
000000014019CE0F  mov     eax, [rbp+3F0h+var_3DC]
000000014019CE12  cmp     [rbp+3F0h+var_3F0], eax
000000014019CE15  jge     loc_14019CF2C
000000014019CE1B  movss   xmm0, [rbp+3F0h+var_1C8var_1C4var_1C0var_1BCvar_1B8var_1B4var_1B0var_1ACv]
000000014019CE23  subss   xmm0, cs:dword_1402783F4
000000014019CE2B  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019CE2F  mov     rcx, [rbp+3F0h+var_13C]
000000014019CE36  movss   xmm1, dword ptr [rcx+rax*4]
000000014019CE3B  subss   xmm1, [rbp+3F0h+var_E0]
000000014019CE43  comiss  xmm0, xmm1
000000014019CE46  jbe     short loc_14019CE62
000000014019CE48  movss   xmm0, [rbp+3F0h+var_1C8var_1C4var_1C0var_1BCvar_1B8var_1B4var_1B0var_1ACv]
000000014019CE50  subss   xmm0, cs:dword_1402783F4
000000014019CE58  movss   [rbp+3F0h+], xmm0
000000014019CE60  jmp     short loc_14019CE82
000000014019CE62  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019CE66  mov     rcx, [rbp+3F0h+var_13C]
000000014019CE6D  movss   xmm0, dword ptr [rcx+rax*4]
000000014019CE72  subss   xmm0, [rbp+3F0h+var_E0]
000000014019CE7A  movss   [rbp+3F0h+], xmm0
000000014019CE82  movss   xmm0, [rbp+3F0h+]
000000014019CE8A  movss   [rbp+3F0h+var_1C8var_1C4var_1C0var_1BCvar_1B8var_1B4var_1B0var_1ACv], xmm0
000000014019CE92  cmp     [rbp+3F0h+var_3EC], 2
000000014019CE96  jnz     short loc_14019CF0F
000000014019CE98  mov     eax, [rbp+3F0h+var_3E8]
000000014019CE9B  mov     ecx, [rbp+3F0h+var_3F0]
000000014019CE9E  add     ecx, eax
000000014019CEA0  mov     eax, ecx
000000014019CEA2  cdqe
000000014019CEA4  mov     rcx, [rbp+3F0h+var_13C]
000000014019CEAB  movss   xmm0, dword ptr [rcx+rax*4]
000000014019CEB0  subss   xmm0, [rbp+3F0h+var_E0]
000000014019CEB8  movss   xmm1, [rbp+3F0h+var_1C8var_1C4var_1C0var_1BCvar_1B8var_1B4var_1B0var_1ACv]
000000014019CEC0  comiss  xmm1, xmm0
000000014019CEC3  jbe     short loc_14019CED7
000000014019CEC5  movss   xmm0, [rbp+3F0h+var_1C8var_1C4var_1C0var_1BCvar_1B8var_1B4var_1B0var_1ACv]
000000014019CECD  movss   [rbp+3F0h+], xmm0
000000014019CED5  jmp     short loc_14019CEFF
000000014019CED7  mov     eax, [rbp+3F0h+var_3E8]
000000014019CEDA  mov     ecx, [rbp+3F0h+var_3F0]
000000014019CEDD  add     ecx, eax
000000014019CEDF  mov     eax, ecx
000000014019CEE1  cdqe
000000014019CEE3  mov     rcx, [rbp+3F0h+var_13C]
000000014019CEEA  movss   xmm0, dword ptr [rcx+rax*4]
000000014019CEEF  subss   xmm0, [rbp+3F0h+var_E0]
000000014019CEF7  movss   [rbp+3F0h+], xmm0
000000014019CEFF  movss   xmm0, [rbp+3F0h+]
000000014019CF07  movss   [rbp+3F0h+var_1C8var_1C4var_1C0var_1BCvar_1B8var_1B4var_1B0var_1ACv], xmm0
000000014019CF0F  movss   xmm0, [rbp+3F0h+var_110]
000000014019CF17  addss   xmm0, [rbp+3F0h+var_1C8var_1C4var_1C0var_1BCvar_1B8var_1B4var_1B0var_1ACv]
000000014019CF1F  movss   [rbp+3F0h+var_110], xmm0
000000014019CF27  jmp     loc_14019CE07
000000014019CF2C  mov     eax, [rbp+3F0h+var_3C4]
000000014019CF2F  mov     ecx, [rbp+3F0h+var_3DC]
000000014019CF32  sub     ecx, eax
000000014019CF34  mov     eax, ecx
000000014019CF36  cvtsi2ss xmm0, eax
000000014019CF3A  movss   xmm1, [rbp+3F0h+var_110]
000000014019CF42  divss   xmm1, xmm0
000000014019CF46  movaps  xmm0, xmm1
000000014019CF49  movss   [rbp+3F0h+var_110], xmm0
000000014019CF51  mov     rax, [rbp+3F0h+]
000000014019CF58  movss   xmm0, dword ptr [rax+0F8h]
000000014019CF60  movss   xmm1, [rbp+3F0h+var_110]
000000014019CF68  subss   xmm1, xmm0
000000014019CF6C  movaps  xmm0, xmm1
000000014019CF6F  movss   [rbp+3F0h+_250var_24Cvar_248var_244var_240var_23Cvar_238var_234var_230var_22Cvar_228var_224var_220var_21Cvar_], xmm0
000000014019CF74  movss   xmm0, cs:dword_140283394
000000014019CF7C  comiss  xmm0, [rbp+3F0h+_250var_24Cvar_248var_244var_240var_23Cvar_238var_234var_230var_22Cvar_228var_224var_220var_21Cvar_]
000000014019CF80  jbe     short loc_14019CF94
000000014019CF82  movss   xmm0, cs:dword_140283394
000000014019CF8A  movss   [rbp+3F0h+], xmm0
000000014019CF92  jmp     short loc_14019CFA1
000000014019CF94  movss   xmm0, [rbp+3F0h+_250var_24Cvar_248var_244var_240var_23Cvar_238var_234var_230var_22Cvar_228var_224var_220var_21Cvar_]
000000014019CF99  movss   [rbp+3F0h+], xmm0
000000014019CFA1  movss   xmm0, [rbp+3F0h+]
000000014019CFA9  comiss  xmm0, cs:dword_140278644
000000014019CFB0  jbe     short loc_14019CFC4
000000014019CFB2  movss   xmm0, cs:dword_140278644
000000014019CFBA  movss   [rbp+3F0h+], xmm0
000000014019CFC2  jmp     short loc_14019D001
000000014019CFC4  movss   xmm0, cs:dword_140283394
000000014019CFCC  comiss  xmm0, [rbp+3F0h+_250var_24Cvar_248var_244var_240var_23Cvar_238var_234var_230var_22Cvar_228var_224var_220var_21Cvar_]
000000014019CFD0  jbe     short loc_14019CFE4
000000014019CFD2  movss   xmm0, cs:dword_140283394
000000014019CFDA  movss   [rbp+3F0h+], xmm0
000000014019CFE2  jmp     short loc_14019CFF1
000000014019CFE4  movss   xmm0, [rbp+3F0h+_250var_24Cvar_248var_244var_240var_23Cvar_238var_234var_230var_22Cvar_228var_224var_220var_21Cvar_]
000000014019CFE9  movss   [rbp+3F0h+], xmm0
000000014019CFF1  movss   xmm0, [rbp+3F0h+]
000000014019CFF9  movss   [rbp+3F0h+], xmm0
000000014019D001  movss   xmm0, [rbp+3F0h+]
000000014019D009  movss   [rbp+3F0h+_250var_24Cvar_248var_244var_240var_23Cvar_238var_234var_230var_22Cvar_228var_224var_220var_21Cvar_], xmm0
000000014019D00E  movss   xmm0, cs:dword_140278160
000000014019D016  mulss   xmm0, [rbp+3F0h+_250var_24Cvar_248var_244var_240var_23Cvar_238var_234var_230var_22Cvar_228var_224var_220var_21Cvar_]
000000014019D01B  mov     rax, [rbp+3F0h+]
000000014019D022  movss   xmm1, dword ptr [rax+0F8h]
000000014019D02A  addss   xmm1, xmm0
000000014019D02E  movaps  xmm0, xmm1
000000014019D031  mov     rax, [rbp+3F0h+]
000000014019D038  movss   dword ptr [rax+0F8h], xmm0
000000014019D040  cmp     [rbp+3F0h+], 0
000000014019D047  jnz     short loc_14019D088
000000014019D049  mov     eax, [rbp+3F0h+var_3EC]
000000014019D04C  imul    eax, [rbp+3F0h+var_3E8]
000000014019D050  cdqe
000000014019D052  mov     rcx, [rbp+3F0h+var_13C]
000000014019D059  mov     rdx, [rbp+3F0h+var_D4]
000000014019D060  sub     rdx, rcx
000000014019D063  mov     rcx, rdx
000000014019D066  sar     rcx, 2
000000014019D06A  imul    rcx, 0
000000014019D06E  lea     rax, [rcx+rax*4]
000000014019D072  mov     r8, rax
000000014019D075  mov     rdx, [rbp+3F0h+var_13C]
000000014019D07C  mov     rcx, [rbp+3F0h+var_D4]
000000014019D083  call    1401FC920h
000000014019D088  cmp     [rbp+3F0h+var_3E0], 0
000000014019D08C  jle     loc_14019D234
000000014019D092  mov     rcx, [rbp+3F0h+]
000000014019D099  call    sub_14019A0A0
000000014019D09E  add     eax, 3
000000014019D0A1  cmp     eax, [rbp+3F0h+va_3A4]
000000014019D0A4  jg      loc_14019D234
000000014019D0AA  cmp     [rbp+3F0h+var_3BC], 0
000000014019D0AE  jnz     loc_14019D234
000000014019D0B4  mov     rax, [rbp+3F0h+]
000000014019D0BB  cmp     dword ptr [rax+1Ch], 5
000000014019D0BF  jl      loc_14019D234
000000014019D0C5  mov     rax, [rbp+3F0h+]
000000014019D0CC  cmp     dword ptr [rax+44h], 0
000000014019D0D0  jnz     loc_14019D234
000000014019D0D6  cmp     [rbp+3F0h+var_3A4], 0
000000014019D0DA  jnz     loc_14019D234
000000014019D0E0  mov     eax, [rbp+3F0h+var_3EC]
000000014019D0E3  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019D0E7  mov     eax, [rbp+3F0h+var_3DC]
000000014019D0EA  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019D0EE  mov     r9d, [rbp+3F0h+var_3C4]
000000014019D0F2  mov     r8d, [rbp+3F0h+var_3E8]
000000014019D0F6  mov     rdx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019D0FA  mov     rcx, [rbp+3F0h+var_13C]
000000014019D101  call    sub_1401AEB90
000000014019D106  test    eax, eax
000000014019D108  jz      loc_14019D234
000000014019D10E  mov     [rbp+3F0h+var_3BC], 1
000000014019D115  mov     eax, [rbp+3F0h+var_108]
000000014019D11B  mov     [rbp+3F0h+_33Cvar_338var_334var_330var_32Cvar_328var_320var_318var_314var_310var_30Cvar_308var_304var_300var_], eax
000000014019D11E  mov     rax, [rbp+3F0h+]
000000014019D125  mov     eax, [rax+4Ch]
000000014019D128  mov     dword ptr [rsp+4B0h+var_470], eax
000000014019D12C  mov     rax, [rbp+3F0h+]
000000014019D133  mov     eax, [rax+20h]
000000014019D136  mov     dword ptr [rsp+4B0h+var_478], eax
000000014019D13A  mov     eax, [rbp+3F0h+var_3E0]
000000014019D13D  mov     dword ptr [rsp+4B0h+var_480], eax
000000014019D141  mov     eax, [rbp+3F0h+var_3D4]
000000014019D144  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019D148  mov     eax, [rbp+3F0h+var_3EC]
000000014019D14B  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019D14F  mov     r9, [rbp+3F0h+var_90]
000000014019D156  mov     r8, [rbp+3F0h+var_70]
000000014019D15D  mov     edx, [rbp+3F0h+_33Cvar_338var_334var_330var_32Cvar_328var_320var_318var_314var_310var_30Cvar_308var_304var_300var_]
000000014019D160  mov     rcx, [rbp+3F0h+var_3D0]
000000014019D164  call    sub_1401AF0F0
000000014019D169  mov     rax, [rbp+3F0h+]
000000014019D170  mov     eax, [rax+4Ch]
000000014019D173  mov     dword ptr [rsp+4B0h+var_480], eax
000000014019D177  mov     eax, [rbp+3F0h+var_3E0]
000000014019D17A  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019D17E  mov     eax, [rbp+3F0h+var_3EC]
000000014019D181  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019D185  mov     r9d, [rbp+3F0h+var_3AC]
000000014019D189  mov     r8, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019D190  mov     rdx, [rbp+3F0h+var_90]
000000014019D197  mov     rcx, [rbp+3F0h+var_3D0]
000000014019D19B  call    sub_1401A3450
000000014019D1A0  mov     eax, [rbp+3F0h+var_3EC]
000000014019D1A3  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019D1A7  mov     rax, [rbp+3F0h+var_13C]
000000014019D1AE  mov     [rsp+4B0h+var_490], rax
000000014019D1B3  mov     r9, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019D1BA  mov     r8d, [rbp+3F0h+var_3DC]
000000014019D1BE  mov     edx, [rbp+3F0h+var_3AC]
000000014019D1C1  mov     rcx, [rbp+3F0h+var_3D0]
000000014019D1C5  call    sub_1401A6EA0
000000014019D1CA  mov     [rbp+3F0h+var_3F0], 0
000000014019D1D1  jmp     short loc_14019D1DB
000000014019D1D3  mov     eax, [rbp+3F0h+var_3F0]
000000014019D1D6  inc     eax
000000014019D1D8  mov     [rbp+3F0h+var_3F0], eax
000000014019D1DB  mov     eax, [rbp+3F0h+var_3EC]
000000014019D1DE  imul    eax, [rbp+3F0h+var_3E8]
000000014019D1E2  cmp     [rbp+3F0h+var_3F0], eax
000000014019D1E5  jge     short loc_14019D224
000000014019D1E7  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019D1EB  cvtsi2ss xmm0, [rbp+3F0h+var_3E0]
000000014019D1F0  movss   xmm1, cs:dword_140278338
000000014019D1F8  mulss   xmm1, xmm0
000000014019D1FC  movaps  xmm0, xmm1
000000014019D1FF  mov     rcx, [rbp+3F0h+var_D4]
000000014019D206  movss   xmm1, dword ptr [rcx+rax*4]
000000014019D20B  addss   xmm1, xmm0
000000014019D20F  movaps  xmm0, xmm1
000000014019D212  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019D216  mov     rcx, [rbp+3F0h+var_D4]
000000014019D21D  movss   dword ptr [rcx+rax*4], xmm0
000000014019D222  jmp     short loc_14019D1D3
000000014019D224  movss   xmm0, cs:dword_140278254
000000014019D22C  movss   [rbp+3F0h+r_1A8var_1A4var_1A0var_19Cvar_198var_194var_190var_18Cvar_188var_184var_180var_17Cva], xmm0
000000014019D234  cmp     [rbp+3F0h+var_3E0], 0
000000014019D238  jle     short loc_14019D263
000000014019D23A  mov     rcx, [rbp+3F0h+]
000000014019D241  call    sub_14019A0A0
000000014019D246  add     eax, 3
000000014019D249  cmp     eax, [rbp+3F0h+va_3A4]
000000014019D24C  jg      short loc_14019D263
000000014019D24E  mov     r8d, 3
000000014019D254  mov     edx, [rbp+3F0h+var_3BC]
000000014019D257  mov     rcx, [rbp+3F0h+]
000000014019D25E  call    sub_14019A450
000000014019D263  mov     eax, [rbp+3F0h+var_3EC]
000000014019D266  imul    eax, [rbp+3F0h+var_3A8]
000000014019D26A  cdqe
000000014019D26C  shl     rax, 2
000000014019D270  mov     rcx, rax
000000014019D273  add     rcx, 0Fh
000000014019D277  cmp     rcx, rax
000000014019D27A  ja      short loc_14019D286
000000014019D27C  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019D286  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019D28A  mov     rax, rcx
000000014019D28D  call    sub_1401F89D0
000000014019D292  sub     rsp, rax
000000014019D295  lea     rax, [rsp+4B0h+var_3F0]
000000014019D29D  mov     [rbp+3F0h+var_80], rax
000000014019D2A4  mov     eax, [rbp+3F0h+var_108]
000000014019D2AA  mov     dword ptr [rsp+4B0h+var_480], eax
000000014019D2AE  mov     eax, [rbp+3F0h+var_3EC]
000000014019D2B1  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019D2B5  mov     eax, [rbp+3F0h+var_3AC]
000000014019D2B8  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019D2BC  mov     r9, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019D2C3  mov     r8, [rbp+3F0h+var_80]
000000014019D2CA  mov     rdx, [rbp+3F0h+var_90]
000000014019D2D1  mov     rcx, [rbp+3F0h+var_3D0]
000000014019D2D5  call    sub_1401A35F0
000000014019D2DA  imul    eax, [rbp+3F0h+var_3EC], 0Fh
000000014019D2DE  cmp     [rbp+3F0h+ar_3A0var_39Cvar_398var_394var_390var_38Cvar_388var_384var_380var_37Cvar_378var_370var_368var_364var_36], eax
000000014019D2E1  jl      short loc_14019D30F
000000014019D2E3  cmp     [rbp+3F0h+var_3A4], 0
000000014019D2E7  jnz     short loc_14019D30F
000000014019D2E9  mov     rax, [rbp+3F0h+]
000000014019D2F0  cmp     dword ptr [rax+1Ch], 2
000000014019D2F4  jl      short loc_14019D30F
000000014019D2F6  mov     rax, [rbp+3F0h+]
000000014019D2FD  cmp     dword ptr [rax+44h], 0
000000014019D301  jnz     short loc_14019D30F
000000014019D303  mov     [rbp+3F0h+], 1
000000014019D30D  jmp     short loc_14019D319
000000014019D30F  mov     [rbp+3F0h+], 0
000000014019D319  mov     eax, [rbp+3F0h+]
000000014019D31F  mov     [rbp+3F0h+], eax
000000014019D325  movsxd  rax, [rbp+3F0h+var_3E8]
000000014019D329  shl     rax, 2
000000014019D32D  mov     rcx, rax
000000014019D330  add     rcx, 0Fh
000000014019D334  cmp     rcx, rax
000000014019D337  ja      short loc_14019D343
000000014019D339  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019D343  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019D347  mov     rax, rcx
000000014019D34A  call    sub_1401F89D0
000000014019D34F  sub     rsp, rax
000000014019D352  lea     rax, [rsp+4B0h+var_3F0]
000000014019D35A  mov     [rbp+3F0h+], rax
000000014019D361  movsxd  rax, [rbp+3F0h+var_3E8]
000000014019D365  shl     rax, 2
000000014019D369  mov     rcx, rax
000000014019D36C  add     rcx, 0Fh
000000014019D370  cmp     rcx, rax
000000014019D373  ja      short loc_14019D37F
000000014019D375  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019D37F  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019D383  mov     rax, rcx
000000014019D386  call    sub_1401F89D0
000000014019D38B  sub     rsp, rax
000000014019D38E  lea     rax, [rsp+4B0h+var_3F0]
000000014019D396  mov     [rbp+3F0h+], rax
000000014019D39D  movsxd  rax, [rbp+3F0h+var_3E8]
000000014019D3A1  shl     rax, 2
000000014019D3A5  mov     rcx, rax
000000014019D3A8  add     rcx, 0Fh
000000014019D3AC  cmp     rcx, rax
000000014019D3AF  ja      short loc_14019D3BB
000000014019D3B1  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019D3BB  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019D3BF  mov     rax, rcx
000000014019D3C2  call    sub_1401F89D0
000000014019D3C7  sub     rsp, rax
000000014019D3CA  lea     rax, [rsp+4B0h+var_3F0]
000000014019D3D2  mov     [rbp+3F0h+], rax
000000014019D3D9  mov     rax, [rbp+3F0h+]
000000014019D3E0  add     rax, 7Ch ; '|'
000000014019D3E4  mov     rcx, [rbp+3F0h+]
000000014019D3EB  mov     [rsp+4B0h+var_410], rcx
000000014019D3F3  mov     rcx, [rbp+3F0h+]
000000014019D3FA  mov     [rsp+4B0h+var_418], rcx
000000014019D402  mov     [rsp+4B0h+var_420], rax
000000014019D40A  mov     rax, [rbp+3F0h+var_88]
000000014019D411  mov     [rsp+4B0h+var_428], rax
000000014019D419  mov     rax, [rbp+3F0h+]
000000014019D420  mov     eax, [rax+44h]
000000014019D423  mov     dword ptr [rsp+4B0h+var_430], eax
000000014019D42A  lea     rax, [rbp+3F0h+]
000000014019D431  mov     [rsp+4B0h+var_438], rax
000000014019D436  mov     eax, [rbp+3F0h+ar_3A0var_39Cvar_398var_394var_390var_38Cvar_388var_384var_380var_37Cvar_378var_370var_368var_364var_36]
000000014019D439  mov     [rsp+4B0h+var_440], eax
000000014019D43D  mov     eax, [rbp+3F0h+var_3E0]
000000014019D440  mov     dword ptr [rsp+4B0h+var_448], eax
000000014019D444  mov     rax, [rbp+3F0h+var_D8]
000000014019D44B  mov     [rsp+4B0h+var_450], rax
000000014019D450  mov     rax, [rbp+3F0h+]
000000014019D457  mov     eax, [rax+38h]
000000014019D45A  mov     dword ptr [rsp+4B0h+var_458], eax
000000014019D45E  mov     rax, [rbp+3F0h+]
000000014019D465  mov     eax, [rax+30h]
000000014019D468  mov     dword ptr [rsp+4B0h+var_460], eax
000000014019D46C  mov     eax, [rbp+3F0h+var_3BC]
000000014019D46F  mov     dword ptr [rsp+4B0h+var_468], eax
000000014019D473  mov     rax, [rbp+3F0h+var_3D0]
000000014019D477  mov     rax, [rax+40h]
000000014019D47B  mov     [rsp+4B0h+var_470], rax
000000014019D480  mov     rax, [rbp+3F0h+]
000000014019D487  mov     eax, [rax+40h]
000000014019D48A  mov     dword ptr [rsp+4B0h+var_478], eax
000000014019D48E  mov     rax, [rbp+3F0h+]
000000014019D495  mov     [rsp+4B0h+var_480], rax
000000014019D49A  mov     eax, [rbp+3F0h+var_3EC]
000000014019D49D  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019D4A1  mov     eax, [rbp+3F0h+var_3DC]
000000014019D4A4  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019D4A8  mov     r9d, [rbp+3F0h+var_3C4]
000000014019D4AC  mov     r8d, [rbp+3F0h+var_3E8]
000000014019D4B0  mov     rdx, [rbp+3F0h+var_D4]
000000014019D4B7  mov     rcx, [rbp+3F0h+var_13C]
000000014019D4BE  call    sub_1401B1250
000000014019D4C3  movss   [rbp+3F0h+], xmm0
000000014019D4CB  movsxd  rax, [rbp+3F0h+var_3E8]
000000014019D4CF  shl     rax, 2
000000014019D4D3  mov     rcx, rax
000000014019D4D6  add     rcx, 0Fh
000000014019D4DA  cmp     rcx, rax
000000014019D4DD  ja      short loc_14019D4E9
000000014019D4DF  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019D4E9  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019D4ED  mov     rax, rcx
000000014019D4F0  call    sub_1401F89D0
000000014019D4F5  sub     rsp, rax
000000014019D4F8  lea     rax, [rsp+4B0h+var_3F0]
000000014019D500  mov     [rbp+3F0h+var_D0], rax
000000014019D507  cmp     [rbp+3F0h+], 0
000000014019D50E  jz      loc_14019D5F3
000000014019D514  mov     eax, 5000h
000000014019D519  cdq
000000014019D51A  idiv    [rbp+3F0h+ar_3A0var_39Cvar_398var_394var_390var_38Cvar_388var_384var_380var_37Cvar_378var_370var_368var_364var_36]
000000014019D51D  add     eax, 2
000000014019D520  cmp     eax, 50h ; 'P'
000000014019D523  jge     short loc_14019D531
000000014019D525  mov     [rbp+3F0h+], 50h ; 'P'
000000014019D52F  jmp     short loc_14019D543
000000014019D531  mov     eax, 5000h
000000014019D536  cdq
000000014019D537  idiv    [rbp+3F0h+ar_3A0var_39Cvar_398var_394var_390var_38Cvar_388var_384var_380var_37Cvar_378var_370var_368var_364var_36]
000000014019D53A  add     eax, 2
000000014019D53D  mov     [rbp+3F0h+], eax
000000014019D543  mov     eax, [rbp+3F0h+]
000000014019D549  mov     [rbp+3F0h+], eax
000000014019D54F  mov     rax, [rbp+3F0h+]
000000014019D556  mov     [rsp+4B0h+var_460], rax
000000014019D55B  mov     eax, [rbp+3F0h+var_BC]
000000014019D561  mov     dword ptr [rsp+4B0h+var_468], eax
000000014019D565  movss   xmm0, [rbp+3F0h+r_1A8var_1A4var_1A0var_19Cvar_198var_194var_190var_18Cvar_188var_184var_180var_17Cva]
000000014019D56D  movss   dword ptr [rsp+4B0h+var_470], xmm0
000000014019D573  mov     eax, [rbp+3F0h+var_3E0]
000000014019D576  mov     dword ptr [rsp+4B0h+var_478], eax
000000014019D57A  mov     eax, [rbp+3F0h+var_3A8]
000000014019D57D  mov     dword ptr [rsp+4B0h+var_480], eax
000000014019D581  mov     rax, [rbp+3F0h+var_80]
000000014019D588  mov     [rsp+4B0h+var_488], rax
000000014019D58D  mov     eax, [rbp+3F0h+]
000000014019D593  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019D597  mov     r9, [rbp+3F0h+var_D0]
000000014019D59E  mov     r8d, [rbp+3F0h+var_3BC]
000000014019D5A2  mov     edx, [rbp+3F0h+var_3AC]
000000014019D5A5  mov     rcx, [rbp+3F0h+var_3D0]
000000014019D5A9  call    sub_1401AF4F0
000000014019D5AE  mov     [rbp+3F0h+var_DC], eax
000000014019D5B4  mov     eax, [rbp+3F0h+var_3AC]
000000014019D5B7  mov     [rbp+3F0h+var_3F0], eax
000000014019D5BA  jmp     short loc_14019D5C4
000000014019D5BC  mov     eax, [rbp+3F0h+var_3F0]
000000014019D5BF  inc     eax
000000014019D5C1  mov     [rbp+3F0h+var_3F0], eax
000000014019D5C4  mov     eax, [rbp+3F0h+var_3DC]
000000014019D5C7  cmp     [rbp+3F0h+var_3F0], eax
000000014019D5CA  jge     short loc_14019D5EE
000000014019D5CC  mov     eax, [rbp+3F0h+var_3AC]
000000014019D5CF  dec     eax
000000014019D5D1  cdqe
000000014019D5D3  movsxd  rcx, [rbp+3F0h+var_3F0]
000000014019D5D7  mov     rdx, [rbp+3F0h+var_D0]
000000014019D5DE  mov     r8, [rbp+3F0h+var_D0]
000000014019D5E5  mov     eax, [r8+rax*4]
000000014019D5E9  mov     [rdx+rcx*4], eax
000000014019D5EC  jmp     short loc_14019D5BC
000000014019D5EE  jmp     loc_14019D6C8
000000014019D5F3  cmp     [rbp+3F0h+var_3A4], 0
000000014019D5F7  jz      short loc_14019D63E
000000014019D5F9  cmp     [rbp+3F0h+], 0
000000014019D600  jz      short loc_14019D63E
000000014019D602  mov     [rbp+3F0h+var_3F0], 0
000000014019D609  jmp     short loc_14019D613
000000014019D60B  mov     eax, [rbp+3F0h+var_3F0]
000000014019D60E  inc     eax
000000014019D610  mov     [rbp+3F0h+var_3F0], eax
000000014019D613  mov     eax, [rbp+3F0h+var_3DC]
000000014019D616  cmp     [rbp+3F0h+var_3F0], eax
000000014019D619  jge     short loc_14019D62F
000000014019D61B  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019D61F  mov     rcx, [rbp+3F0h+var_D0]
000000014019D626  mov     dword ptr [rcx+rax*4], 1
000000014019D62D  jmp     short loc_14019D60B
000000014019D62F  mov     [rbp+3F0h+var_DC], 0
000000014019D639  jmp     loc_14019D6C8
000000014019D63E  cmp     [rbp+3F0h+var_3A4], 0
000000014019D642  jz      short loc_14019D692
000000014019D644  cmp     [rbp+3F0h+ar_3A0var_39Cvar_398var_394var_390var_38Cvar_388var_384var_380var_37Cvar_378var_370var_368var_364var_36], 0Fh
000000014019D648  jge     short loc_14019D692
000000014019D64A  mov     rax, [rbp+3F0h+]
000000014019D651  cmp     dword ptr [rax+0BCh], 2
000000014019D658  jz      short loc_14019D692
000000014019D65A  mov     [rbp+3F0h+var_3F0], 0
000000014019D661  jmp     short loc_14019D66B
000000014019D663  mov     eax, [rbp+3F0h+var_3F0]
000000014019D666  inc     eax
000000014019D668  mov     [rbp+3F0h+var_3F0], eax
000000014019D66B  mov     eax, [rbp+3F0h+var_3DC]
000000014019D66E  cmp     [rbp+3F0h+var_3F0], eax
000000014019D671  jge     short loc_14019D687
000000014019D673  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019D677  mov     rcx, [rbp+3F0h+var_D0]
000000014019D67E  mov     dword ptr [rcx+rax*4], 0
000000014019D685  jmp     short loc_14019D663
000000014019D687  mov     eax, [rbp+3F0h+var_3BC]
000000014019D68A  mov     [rbp+3F0h+var_DC], eax
000000014019D690  jmp     short loc_14019D6C8
000000014019D692  mov     [rbp+3F0h+var_3F0], 0
000000014019D699  jmp     short loc_14019D6A3
000000014019D69B  mov     eax, [rbp+3F0h+var_3F0]
000000014019D69E  inc     eax
000000014019D6A0  mov     [rbp+3F0h+var_3F0], eax
000000014019D6A3  mov     eax, [rbp+3F0h+var_3DC]
000000014019D6A6  cmp     [rbp+3F0h+var_3F0], eax
000000014019D6A9  jge     short loc_14019D6BE
000000014019D6AB  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019D6AF  mov     rcx, [rbp+3F0h+var_D0]
000000014019D6B6  mov     edx, [rbp+3F0h+var_3BC]
000000014019D6B9  mov     [rcx+rax*4], edx
000000014019D6BC  jmp     short loc_14019D69B
000000014019D6BE  mov     [rbp+3F0h+var_DC], 0
000000014019D6C8  mov     eax, [rbp+3F0h+var_3EC]
000000014019D6CB  imul    eax, [rbp+3F0h+var_3E8]
000000014019D6CF  cdqe
000000014019D6D1  shl     rax, 2
000000014019D6D5  mov     rcx, rax
000000014019D6D8  add     rcx, 0Fh
000000014019D6DC  cmp     rcx, rax
000000014019D6DF  ja      short loc_14019D6EB
000000014019D6E1  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019D6EB  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019D6EF  mov     rax, rcx
000000014019D6F2  call    sub_1401F89D0
000000014019D6F7  sub     rsp, rax
000000014019D6FA  lea     rax, [rsp+4B0h+var_3F0]
000000014019D702  mov     [rbp+3F0h+var_78], rax
000000014019D709  mov     [rbp+3F0h+var_3E4], 0
000000014019D710  mov     eax, [rbp+3F0h+var_3C4]
000000014019D713  mov     [rbp+3F0h+var_3F0], eax
000000014019D716  jmp     short loc_14019D720
000000014019D718  mov     eax, [rbp+3F0h+var_3F0]
000000014019D71B  inc     eax
000000014019D71D  mov     [rbp+3F0h+var_3F0], eax
000000014019D720  mov     eax, [rbp+3F0h+var_3DC]
000000014019D723  cmp     [rbp+3F0h+var_3F0], eax
000000014019D726  jge     loc_14019D7E8
000000014019D72C  mov     eax, [rbp+3F0h+var_3E4]
000000014019D72F  imul    eax, [rbp+3F0h+var_3E8]
000000014019D733  mov     ecx, [rbp+3F0h+var_3F0]
000000014019D736  add     ecx, eax
000000014019D738  mov     eax, ecx
000000014019D73A  cdqe
000000014019D73C  mov     rcx, [rbp+3F0h+var_13C]
000000014019D743  movss   xmm0, dword ptr [rcx+rax*4]
000000014019D748  mov     eax, [rbp+3F0h+var_3E4]
000000014019D74B  imul    eax, [rbp+3F0h+var_3E8]
000000014019D74F  mov     ecx, [rbp+3F0h+var_3F0]
000000014019D752  add     ecx, eax
000000014019D754  mov     eax, ecx
000000014019D756  cdqe
000000014019D758  mov     rcx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019D75C  movss   xmm1, dword ptr [rcx+rax*4]
000000014019D761  subss   xmm0, xmm1
000000014019D765  cvtss2sd xmm0, xmm0
000000014019D769  call    sub_140244390
000000014019D76E  cvtsd2ss xmm0, xmm0
000000014019D772  movss   xmm1, cs:dword_1402785B8
000000014019D77A  comiss  xmm1, xmm0
000000014019D77D  jbe     short loc_14019D7E3
000000014019D77F  mov     eax, [rbp+3F0h+var_3E4]
000000014019D782  imul    eax, [rbp+3F0h+var_3E8]
000000014019D786  mov     ecx, [rbp+3F0h+var_3F0]
000000014019D789  add     ecx, eax
000000014019D78B  mov     eax, ecx
000000014019D78D  cdqe
000000014019D78F  mov     ecx, [rbp+3F0h+var_3E4]
000000014019D792  imul    ecx, [rbp+3F0h+var_3E8]
000000014019D796  mov     edx, [rbp+3F0h+var_3F0]
000000014019D799  add     edx, ecx
000000014019D79B  mov     ecx, edx
000000014019D79D  movsxd  rcx, ecx
000000014019D7A0  mov     rdx, [rbp+3F0h+]
000000014019D7A7  movss   xmm0, dword ptr [rdx+rcx*4]
000000014019D7AC  mulss   xmm0, cs:dword_140278280
000000014019D7B4  mov     rcx, [rbp+3F0h+var_13C]
000000014019D7BB  movss   xmm1, dword ptr [rcx+rax*4]
000000014019D7C0  subss   xmm1, xmm0
000000014019D7C4  movaps  xmm0, xmm1
000000014019D7C7  mov     eax, [rbp+3F0h+var_3E4]
000000014019D7CA  imul    eax, [rbp+3F0h+var_3E8]
000000014019D7CE  mov     ecx, [rbp+3F0h+var_3F0]
000000014019D7D1  add     ecx, eax
000000014019D7D3  mov     eax, ecx
000000014019D7D5  cdqe
000000014019D7D7  mov     rcx, [rbp+3F0h+var_13C]
000000014019D7DE  movss   dword ptr [rcx+rax*4], xmm0
000000014019D7E3  jmp     loc_14019D718
000000014019D7E8  mov     eax, [rbp+3F0h+var_3E4]
000000014019D7EB  inc     eax
000000014019D7ED  mov     [rbp+3F0h+var_3E4], eax
000000014019D7F0  mov     eax, [rbp+3F0h+var_3EC]
000000014019D7F3  cmp     [rbp+3F0h+var_3E4], eax
000000014019D7F6  jl      loc_14019D710
000000014019D7FC  mov     rax, [rbp+3F0h+]
000000014019D803  cmp     dword ptr [rax+1Ch], 4
000000014019D807  jl      short loc_14019D815
000000014019D809  mov     [rbp+3F0h+], 1
000000014019D813  jmp     short loc_14019D81F
000000014019D815  mov     [rbp+3F0h+], 0
000000014019D81F  mov     rax, [rbp+3F0h+]
000000014019D826  add     rax, 58h ; 'X'
000000014019D82A  mov     rcx, [rbp+3F0h+]
000000014019D831  mov     ecx, [rcx+44h]
000000014019D834  mov     dword ptr [rsp+4B0h+var_430], ecx
000000014019D83B  mov     rcx, [rbp+3F0h+]
000000014019D842  mov     ecx, [rcx+3Ch]
000000014019D845  mov     dword ptr [rsp+4B0h+var_438], ecx
000000014019D849  mov     ecx, [rbp+3F0h+]
000000014019D84F  mov     [rsp+4B0h+var_440], ecx
000000014019D853  mov     [rsp+4B0h+var_448], rax
000000014019D858  mov     rax, [rbp+3F0h+]
000000014019D85F  mov     eax, [rax+10h]
000000014019D862  mov     dword ptr [rsp+4B0h+var_450], eax
000000014019D866  mov     eax, [rbp+3F0h+var_3D8]
000000014019D869  mov     dword ptr [rsp+4B0h+var_458], eax
000000014019D86D  mov     eax, [rbp+3F0h+var_3E0]
000000014019D870  mov     dword ptr [rsp+4B0h+var_460], eax
000000014019D874  mov     eax, [rbp+3F0h+var_3EC]
000000014019D877  mov     dword ptr [rsp+4B0h+var_468], eax
000000014019D87B  mov     rax, [rbp+3F0h+]
000000014019D882  mov     [rsp+4B0h+var_470], rax
000000014019D887  mov     rax, [rbp+3F0h+var_78]
000000014019D88E  mov     [rsp+4B0h+var_478], rax
000000014019D893  mov     eax, [rbp+3F0h+va_3A4]
000000014019D896  mov     dword ptr [rsp+4B0h+var_480], eax
000000014019D89A  mov     rax, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019D89E  mov     [rsp+4B0h+var_488], rax
000000014019D8A3  mov     rax, [rbp+3F0h+var_13C]
000000014019D8AA  mov     [rsp+4B0h+var_490], rax
000000014019D8AF  mov     r9d, [rbp+3F0h+var_3AC]
000000014019D8B3  mov     r8d, [rbp+3F0h+var_3DC]
000000014019D8B7  mov     edx, [rbp+3F0h+var_3C4]
000000014019D8BA  mov     rcx, [rbp+3F0h+var_3D0]
000000014019D8BE  call    sub_1401A6FC0
000000014019D8C3  mov     rax, [rbp+3F0h+]
000000014019D8CA  mov     [rsp+4B0h+var_480], rax
000000014019D8CF  mov     eax, [rbp+3F0h+var_DC]
000000014019D8D5  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019D8D9  mov     eax, [rbp+3F0h+var_3E0]
000000014019D8DC  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019D8E0  mov     r9, [rbp+3F0h+var_D0]
000000014019D8E7  mov     r8d, [rbp+3F0h+var_3BC]
000000014019D8EB  mov     edx, [rbp+3F0h+var_3DC]
000000014019D8EE  mov     ecx, [rbp+3F0h+var_3C4]
000000014019D8F1  call    sub_1401B0110
000000014019D8F6  mov     rcx, [rbp+3F0h+]
000000014019D8FD  call    sub_14019A0A0
000000014019D902  add     eax, 4
000000014019D905  cmp     eax, [rbp+3F0h+va_3A4]
000000014019D908  jg      loc_14019DAA5
000000014019D90E  mov     rax, [rbp+3F0h+]
000000014019D915  cmp     dword ptr [rax+44h], 0
000000014019D919  jz      short loc_14019D93C
000000014019D91B  mov     rax, [rbp+3F0h+]
000000014019D922  mov     dword ptr [rax+68h], 0
000000014019D929  mov     rax, [rbp+3F0h+]
000000014019D930  mov     dword ptr [rax+54h], 2
000000014019D937  jmp     loc_14019DA82
000000014019D93C  cmp     [rbp+3F0h+var_3A4], 0
000000014019D940  jz      short loc_14019D988
000000014019D942  mov     rax, [rbp+3F0h+]
000000014019D949  cmp     dword ptr [rax+1Ch], 0
000000014019D94D  jnz     short loc_14019D95F
000000014019D94F  mov     rax, [rbp+3F0h+]
000000014019D956  mov     dword ptr [rax+54h], 0
000000014019D95D  jmp     short loc_14019D983
000000014019D95F  cmp     [rbp+3F0h+var_3BC], 0
000000014019D963  jz      short loc_14019D975
000000014019D965  mov     rax, [rbp+3F0h+]
000000014019D96C  mov     dword ptr [rax+54h], 2
000000014019D973  jmp     short loc_14019D983
000000014019D975  mov     rax, [rbp+3F0h+]
000000014019D97C  mov     dword ptr [rax+54h], 3
000000014019D983  jmp     loc_14019DA82
000000014019D988  cmp     [rbp+3F0h+_33Cvar_338var_334var_330var_32Cvar_328var_320var_318var_314var_310var_30Cvar_308var_304var_300var_], 0
000000014019D98C  jnz     short loc_14019D9A4
000000014019D98E  mov     rax, [rbp+3F0h+]
000000014019D995  cmp     dword ptr [rax+1Ch], 3
000000014019D999  jl      short loc_14019D9A4
000000014019D99B  imul    eax, [rbp+3F0h+var_3EC], 0Ah
000000014019D99F  cmp     [rbp+3F0h+var_3D8], eax
000000014019D9A2  jge     short loc_14019D9D4
000000014019D9A4  mov     rax, [rbp+3F0h+]
000000014019D9AB  cmp     dword ptr [rax+1Ch], 0
000000014019D9AF  jnz     short loc_14019D9C1
000000014019D9B1  mov     rax, [rbp+3F0h+]
000000014019D9B8  mov     dword ptr [rax+54h], 0
000000014019D9BF  jmp     short loc_14019D9CF
000000014019D9C1  mov     rax, [rbp+3F0h+]
000000014019D9C8  mov     dword ptr [rax+54h], 2
000000014019D9CF  jmp     loc_14019DA82
000000014019D9D4  cmp     [rbp+3F0h+], 0
000000014019D9DB  jz      short loc_14019D9EF
000000014019D9DD  cmp     [rbp+3F0h+_33Cvar_338var_334var_330var_32Cvar_328var_320var_318var_314var_310var_30Cvar_308var_304var_300var_], 0
000000014019D9E1  jnz     short loc_14019D9EF
000000014019D9E3  mov     [rbp+3F0h+], 1
000000014019D9ED  jmp     short loc_14019D9F9
000000014019D9EF  mov     [rbp+3F0h+], 0
000000014019D9F9  mov     rax, [rbp+3F0h+]
000000014019DA00  add     rax, 68h ; 'h'
000000014019DA04  mov     rcx, [rbp+3F0h+]
000000014019DA0B  add     rcx, 64h ; 'd'
000000014019DA0F  mov     rdx, [rbp+3F0h+]
000000014019DA16  add     rdx, 5Ch ; '\'
000000014019DA1A  mov     r8, [rbp+3F0h+]
000000014019DA21  mov     [rsp+4B0h+var_460], r8
000000014019DA26  mov     r8d, [rbp+3F0h+var_108]
000000014019DA2D  mov     dword ptr [rsp+4B0h+var_468], r8d
000000014019DA32  mov     r8d, [rbp+3F0h+var_3EC]
000000014019DA36  mov     dword ptr [rsp+4B0h+var_470], r8d
000000014019DA3B  mov     r8d, [rbp+3F0h+var_3AC]
000000014019DA3F  mov     dword ptr [rsp+4B0h+var_478], r8d
000000014019DA44  mov     r8d, [rbp+3F0h+]
000000014019DA4B  mov     dword ptr [rsp+4B0h+var_480], r8d
000000014019DA50  mov     [rsp+4B0h+var_488], rax
000000014019DA55  mov     [rsp+4B0h+var_490], rcx
000000014019DA5A  mov     rax, [rbp+3F0h+]
000000014019DA61  mov     r9d, [rax+54h]
000000014019DA65  mov     r8, rdx
000000014019DA68  mov     rdx, [rbp+3F0h+var_80]
000000014019DA6F  mov     rcx, [rbp+3F0h+var_3D0]
000000014019DA73  call    sub_1401A3A00
000000014019DA78  mov     rcx, [rbp+3F0h+]
000000014019DA7F  mov     [rcx+54h], eax
000000014019DA82  mov     r9d, 5
000000014019DA88  lea     r8, unk_140279CE4
000000014019DA8F  mov     rax, [rbp+3F0h+]
000000014019DA96  mov     edx, [rax+54h]
000000014019DA99  mov     rcx, [rbp+3F0h+]
000000014019DAA0  call    sub_14019A4F0
000000014019DAA5  mov     rax, [rbp+3F0h+]
000000014019DAAC  cmp     dword ptr [rax+44h], 0
000000014019DAB0  jz      short loc_14019DAF8
000000014019DAB2  mov     eax, [rbp+3F0h+ar_3A0var_39Cvar_398var_394var_390var_38Cvar_388var_384var_380var_37Cvar_378var_370var_368var_364var_36]
000000014019DAB5  cdq
000000014019DAB6  mov     ecx, 3
000000014019DABB  idiv    ecx
000000014019DABD  cmp     eax, 8
000000014019DAC0  jle     short loc_14019DACE
000000014019DAC2  mov     [rbp+3F0h+], 8
000000014019DACC  jmp     short loc_14019DADF
000000014019DACE  mov     eax, [rbp+3F0h+ar_3A0var_39Cvar_398var_394var_390var_38Cvar_388var_384var_380var_37Cvar_378var_370var_368var_364var_36]
000000014019DAD1  cdq
000000014019DAD2  mov     ecx, 3
000000014019DAD7  idiv    ecx
000000014019DAD9  mov     [rbp+3F0h+], eax
000000014019DADF  mov     eax, 4
000000014019DAE4  imul    rax, 0
000000014019DAE8  mov     rcx, [rbp+3F0h+]
000000014019DAEF  mov     edx, [rbp+3F0h+]
000000014019DAF5  mov     [rcx+rax], edx
000000014019DAF8  movsxd  rax, [rbp+3F0h+var_3E8]
000000014019DAFC  shl     rax, 2
000000014019DB00  mov     rcx, rax
000000014019DB03  add     rcx, 0Fh
000000014019DB07  cmp     rcx, rax
000000014019DB0A  ja      short loc_14019DB16
000000014019DB0C  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019DB16  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019DB1A  mov     rax, rcx
000000014019DB1D  call    sub_1401F89D0
000000014019DB22  sub     rsp, rax
000000014019DB25  lea     rax, [rsp+4B0h+var_3F0]
000000014019DB2D  mov     [rbp+3F0h+], rax
000000014019DB34  mov     r9d, [rbp+3F0h+var_3EC]
000000014019DB38  mov     r8d, [rbp+3F0h+var_3E0]
000000014019DB3C  mov     rdx, [rbp+3F0h+]
000000014019DB43  mov     rcx, [rbp+3F0h+var_3D0]
000000014019DB47  call    sub_1401A12E0
000000014019DB4C  mov     [rbp+3F0h+var_FC], 6
000000014019DB56  mov     eax, [rbp+3F0h+va_3A4]
000000014019DB59  shl     eax, 3
000000014019DB5C  mov     [rbp+3F0h+va_3A4], eax
000000014019DB5F  mov     [rbp+3F0h+_178var_174var_170var_16Cvar_168r_164var_160var_15Cvar_158var_154var_150var_14Cvar_148var_144var_140], 0
000000014019DB69  mov     rcx, [rbp+3F0h+]
000000014019DB70  call    sub_14019A0E0
000000014019DB75  mov     [rbp+3F0h+var_3C8], eax
000000014019DB78  mov     eax, [rbp+3F0h+var_3C4]
000000014019DB7B  mov     [rbp+3F0h+var_3F0], eax
000000014019DB7E  jmp     short loc_14019DB88
000000014019DB80  mov     eax, [rbp+3F0h+var_3F0]
000000014019DB83  inc     eax
000000014019DB85  mov     [rbp+3F0h+var_3F0], eax
000000014019DB88  mov     eax, [rbp+3F0h+var_3DC]
000000014019DB8B  cmp     [rbp+3F0h+var_3F0], eax
000000014019DB8E  jge     loc_14019DDAC
000000014019DB94  mov     eax, [rbp+3F0h+var_3F0]
000000014019DB97  inc     eax
000000014019DB99  cdqe
000000014019DB9B  mov     rcx, [rbp+3F0h+var_D8]
000000014019DBA2  movsx   eax, word ptr [rcx+rax*2]
000000014019DBA6  movsxd  rcx, [rbp+3F0h+var_3F0]
000000014019DBAA  mov     rdx, [rbp+3F0h+var_D8]
000000014019DBB1  movsx   ecx, word ptr [rdx+rcx*2]
000000014019DBB5  sub     eax, ecx
000000014019DBB7  mov     ecx, [rbp+3F0h+var_3EC]
000000014019DBBA  imul    ecx, eax
000000014019DBBD  mov     eax, ecx
000000014019DBBF  mov     ecx, [rbp+3F0h+var_3E0]
000000014019DBC2  shl     eax, cl
000000014019DBC4  mov     [rbp+3F0h+var_130], eax
000000014019DBCA  cmp     [rbp+3F0h+var_130], 30h ; '0'
000000014019DBD1  jge     short loc_14019DBDF
000000014019DBD3  mov     [rbp+3F0h+], 30h ; '0'
000000014019DBDD  jmp     short loc_14019DBEB
000000014019DBDF  mov     eax, [rbp+3F0h+var_130]
000000014019DBE5  mov     [rbp+3F0h+], eax
000000014019DBEB  mov     eax, [rbp+3F0h+var_130]
000000014019DBF1  shl     eax, 3
000000014019DBF4  cmp     eax, [rbp+3F0h+]
000000014019DBFA  jge     short loc_14019DC0D
000000014019DBFC  mov     eax, [rbp+3F0h+var_130]
000000014019DC02  shl     eax, 3
000000014019DC05  mov     [rbp+3F0h+], eax
000000014019DC0B  jmp     short loc_14019DC3A
000000014019DC0D  cmp     [rbp+3F0h+var_130], 30h ; '0'
000000014019DC14  jge     short loc_14019DC22
000000014019DC16  mov     [rbp+3F0h+], 30h ; '0'
000000014019DC20  jmp     short loc_14019DC2E
000000014019DC22  mov     eax, [rbp+3F0h+var_130]
000000014019DC28  mov     [rbp+3F0h+], eax
000000014019DC2E  mov     eax, [rbp+3F0h+]
000000014019DC34  mov     [rbp+3F0h+], eax
000000014019DC3A  mov     eax, [rbp+3F0h+]
000000014019DC40  mov     [rbp+3F0h+], eax
000000014019DC46  mov     eax, [rbp+3F0h+var_FC]
000000014019DC4C  mov     [rbp+3F0h+var_98], eax
000000014019DC52  mov     [rbp+3F0h+var_F8], 0
000000014019DC5C  mov     [rbp+3F0h+var_100], 0
000000014019DC66  jmp     short loc_14019DC76
000000014019DC68  mov     eax, [rbp+3F0h+var_100]
000000014019DC6E  inc     eax
000000014019DC70  mov     [rbp+3F0h+var_100], eax
000000014019DC76  mov     eax, [rbp+3F0h+var_3C8]
000000014019DC79  mov     ecx, [rbp+3F0h+var_98]
000000014019DC7F  lea     eax, [rax+rcx*8]
000000014019DC82  mov     ecx, [rbp+3F0h+_178var_174var_170var_16Cvar_168r_164var_160var_15Cvar_158var_154var_150var_14Cvar_148var_144var_140]
000000014019DC88  mov     edx, [rbp+3F0h+va_3A4]
000000014019DC8B  sub     edx, ecx
000000014019DC8D  mov     ecx, edx
000000014019DC8F  cmp     eax, ecx
000000014019DC91  jge     loc_14019DD57
000000014019DC97  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019DC9B  mov     rcx, [rbp+3F0h+]
000000014019DCA2  mov     eax, [rcx+rax*4]
000000014019DCA5  cmp     [rbp+3F0h+var_F8], eax
000000014019DCAB  jge     loc_14019DD57
000000014019DCB1  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019DCB5  mov     rcx, [rbp+3F0h+]
000000014019DCBC  mov     eax, [rcx+rax*4]
000000014019DCBF  cmp     [rbp+3F0h+var_100], eax
000000014019DCC5  jge     short loc_14019DCD3
000000014019DCC7  mov     [rbp+3F0h+], 1
000000014019DCD1  jmp     short loc_14019DCDD
000000014019DCD3  mov     [rbp+3F0h+], 0
000000014019DCDD  mov     eax, [rbp+3F0h+]
000000014019DCE3  mov     [rbp+3F0h+], eax
000000014019DCE9  mov     r8d, [rbp+3F0h+var_98]
000000014019DCF0  mov     edx, [rbp+3F0h+]
000000014019DCF6  mov     rcx, [rbp+3F0h+]
000000014019DCFD  call    sub_14019A450
000000014019DD02  mov     rcx, [rbp+3F0h+]
000000014019DD09  call    sub_14019A0E0
000000014019DD0E  mov     [rbp+3F0h+var_3C8], eax
000000014019DD11  cmp     [rbp+3F0h+], 0
000000014019DD18  jnz     short loc_14019DD1C
000000014019DD1A  jmp     short loc_14019DD57
000000014019DD1C  mov     eax, [rbp+3F0h+]
000000014019DD22  mov     ecx, [rbp+3F0h+var_F8]
000000014019DD28  add     ecx, eax
000000014019DD2A  mov     eax, ecx
000000014019DD2C  mov     [rbp+3F0h+var_F8], eax
000000014019DD32  mov     eax, [rbp+3F0h+]
000000014019DD38  mov     ecx, [rbp+3F0h+_178var_174var_170var_16Cvar_168r_164var_160var_15Cvar_158var_154var_150var_14Cvar_148var_144var_140]
000000014019DD3E  add     ecx, eax
000000014019DD40  mov     eax, ecx
000000014019DD42  mov     [rbp+3F0h+_178var_174var_170var_16Cvar_168r_164var_160var_15Cvar_158var_154var_150var_14Cvar_148var_144var_140], eax
000000014019DD48  mov     [rbp+3F0h+var_98], 1
000000014019DD52  jmp     loc_14019DC68
000000014019DD57  cmp     [rbp+3F0h+var_100], 0
000000014019DD5E  jz      short loc_14019DD93
000000014019DD60  mov     eax, [rbp+3F0h+var_FC]
000000014019DD66  dec     eax
000000014019DD68  cmp     eax, 2
000000014019DD6B  jge     short loc_14019DD79
000000014019DD6D  mov     [rbp+3F0h+], 2
000000014019DD77  jmp     short loc_14019DD87
000000014019DD79  mov     eax, [rbp+3F0h+var_FC]
000000014019DD7F  dec     eax
000000014019DD81  mov     [rbp+3F0h+], eax
000000014019DD87  mov     eax, [rbp+3F0h+]
000000014019DD8D  mov     [rbp+3F0h+var_FC], eax
000000014019DD93  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019DD97  mov     rcx, [rbp+3F0h+]
000000014019DD9E  mov     edx, [rbp+3F0h+var_F8]
000000014019DDA4  mov     [rcx+rax*4], edx
000000014019DDA7  jmp     loc_14019DB80
000000014019DDAC  cmp     [rbp+3F0h+var_3EC], 2
000000014019DDB0  jnz     loc_14019DEB5
000000014019DDB6  cmp     [rbp+3F0h+var_3E0], 0
000000014019DDBA  jz      short loc_14019DDDA
000000014019DDBC  mov     r9d, [rbp+3F0h+var_3A8]
000000014019DDC0  mov     r8d, [rbp+3F0h+var_3E0]
000000014019DDC4  mov     rdx, [rbp+3F0h+var_80]
000000014019DDCB  mov     rcx, [rbp+3F0h+var_3D0]
000000014019DDCF  call    sub_1401B0C90
000000014019DDD4  mov     [rbp+3F0h+var_B0], eax
000000014019DDDA  mov     eax, [rbp+3F0h+Srcvar_350var_34Cvar_348var_344var_340va]
000000014019DDDD  cdq
000000014019DDDE  mov     ecx, 3E8h
000000014019DDE3  idiv    ecx
000000014019DDE5  cvtsi2ss xmm0, eax
000000014019DDE9  mov     rax, [rbp+3F0h+]
000000014019DDF0  mov     eax, [rax+0ECh]
000000014019DDF6  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019DDFA  mov     r9d, 15h
000000014019DE00  lea     r8, unk_14027BC20
000000014019DE07  lea     rdx, unk_14027BBC0
000000014019DE0E  call    sub_1401A5C90
000000014019DE13  mov     rcx, [rbp+3F0h+]
000000014019DE1A  mov     [rcx+0ECh], eax
000000014019DE20  mov     rax, [rbp+3F0h+]
000000014019DE27  mov     eax, [rax+0ECh]
000000014019DE2D  cmp     [rbp+3F0h+var_3C4], eax
000000014019DE30  jle     short loc_14019DE3D
000000014019DE32  mov     eax, [rbp+3F0h+var_3C4]
000000014019DE35  mov     [rbp+3F0h+], eax
000000014019DE3B  jmp     short loc_14019DE50
000000014019DE3D  mov     rax, [rbp+3F0h+]
000000014019DE44  mov     eax, [rax+0ECh]
000000014019DE4A  mov     [rbp+3F0h+], eax
000000014019DE50  mov     eax, [rbp+3F0h+]
000000014019DE56  cmp     [rbp+3F0h+var_3DC], eax
000000014019DE59  jge     short loc_14019DE66
000000014019DE5B  mov     eax, [rbp+3F0h+var_3DC]
000000014019DE5E  mov     [rbp+3F0h+], eax
000000014019DE64  jmp     short loc_14019DEA2
000000014019DE66  mov     rax, [rbp+3F0h+]
000000014019DE6D  mov     eax, [rax+0ECh]
000000014019DE73  cmp     [rbp+3F0h+var_3C4], eax
000000014019DE76  jle     short loc_14019DE83
000000014019DE78  mov     eax, [rbp+3F0h+var_3C4]
000000014019DE7B  mov     [rbp+3F0h+], eax
000000014019DE81  jmp     short loc_14019DE96
000000014019DE83  mov     rax, [rbp+3F0h+]
000000014019DE8A  mov     eax, [rax+0ECh]
000000014019DE90  mov     [rbp+3F0h+], eax
000000014019DE96  mov     eax, [rbp+3F0h+]
000000014019DE9C  mov     [rbp+3F0h+], eax
000000014019DEA2  mov     rax, [rbp+3F0h+]
000000014019DEA9  mov     ecx, [rbp+3F0h+]
000000014019DEAF  mov     [rax+0ECh], ecx
000000014019DEB5  mov     [rbp+3F0h+var_F0], 5
000000014019DEBF  mov     eax, [rbp+3F0h+var_3C8]
000000014019DEC2  add     eax, 30h ; '0'
000000014019DEC5  mov     ecx, [rbp+3F0h+_178var_174var_170var_16Cvar_168r_164var_160var_15Cvar_158var_154var_150var_14Cvar_148var_144var_140]
000000014019DECB  mov     edx, [rbp+3F0h+va_3A4]
000000014019DECE  sub     edx, ecx
000000014019DED0  mov     ecx, edx
000000014019DED2  cmp     eax, ecx
000000014019DED4  jg      loc_14019DFD6
000000014019DEDA  cmp     [rbp+3F0h+var_3C4], 0
000000014019DEDE  jg      short loc_14019DEED
000000014019DEE0  mov     rax, [rbp+3F0h+]
000000014019DEE7  cmp     dword ptr [rax+44h], 0
000000014019DEEB  jz      short loc_14019DF0E
000000014019DEED  mov     rax, [rbp+3F0h+]
000000014019DEF4  xorps   xmm0, xmm0
000000014019DEF7  movss   dword ptr [rax+0E8h], xmm0
000000014019DEFF  mov     [rbp+3F0h+var_F0], 5
000000014019DF09  jmp     loc_14019DFA8
000000014019DF0E  mov     rax, [rbp+3F0h+]
000000014019DF15  add     rax, 0E8h
000000014019DF1B  mov     rcx, [rbp+3F0h+]
000000014019DF22  add     rcx, 7Ch ; '|'
000000014019DF26  mov     rdx, [rbp+3F0h+]
000000014019DF2D  mov     edx, [rdx+4Ch]
000000014019DF30  mov     dword ptr [rsp+4B0h+var_448], edx
000000014019DF34  mov     edx, [rbp+3F0h+Srcvar_350var_34Cvar_348var_344var_340va]
000000014019DF37  mov     dword ptr [rsp+4B0h+var_450], edx
000000014019DF3B  movss   xmm0, [rbp+3F0h+]
000000014019DF43  movss   dword ptr [rsp+4B0h+var_458], xmm0
000000014019DF49  mov     rdx, [rbp+3F0h+]
000000014019DF50  mov     edx, [rdx+0ECh]
000000014019DF56  mov     dword ptr [rsp+4B0h+var_460], edx
000000014019DF5A  movss   xmm0, [rbp+3F0h+r_1A8var_1A4var_1A0var_19Cvar_198var_194var_190var_18Cvar_188var_184var_180var_17Cva]
000000014019DF62  movss   dword ptr [rsp+4B0h+var_468], xmm0
000000014019DF68  mov     [rsp+4B0h+var_470], rax
000000014019DF6D  mov     [rsp+4B0h+var_478], rcx
000000014019DF72  mov     eax, [rbp+3F0h+var_3A8]
000000014019DF75  mov     dword ptr [rsp+4B0h+var_480], eax
000000014019DF79  mov     eax, [rbp+3F0h+var_3EC]
000000014019DF7C  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019DF80  mov     eax, [rbp+3F0h+var_3E0]
000000014019DF83  mov     dword ptr [rsp+4B0h+var_490], eax
000000014019DF87  mov     r9d, [rbp+3F0h+var_3DC]
000000014019DF8B  mov     r8, [rbp+3F0h+var_13C]
000000014019DF92  mov     rdx, [rbp+3F0h+var_80]
000000014019DF99  mov     rcx, [rbp+3F0h+var_3D0]
000000014019DF9D  call    sub_1401B0380
000000014019DFA2  mov     [rbp+3F0h+var_F0], eax
000000014019DFA8  mov     r9d, 7
000000014019DFAE  lea     r8, unk_14027BB88
000000014019DFB5  mov     edx, [rbp+3F0h+var_F0]
000000014019DFBB  mov     rcx, [rbp+3F0h+]
000000014019DFC2  call    sub_14019A4F0
000000014019DFC7  mov     rcx, [rbp+3F0h+]
000000014019DFCE  call    sub_14019A0E0
000000014019DFD3  mov     [rbp+3F0h+var_3C8], eax
000000014019DFD6  cmp     [rbp+3F0h+var_3B8], 0
000000014019DFDA  jle     loc_14019E5F7
000000014019DFE0  mov     rax, [rbp+3F0h+var_3D0]
000000014019DFE4  mov     ecx, [rbp+3F0h+var_3E0]
000000014019DFE7  mov     eax, [rax+28h]
000000014019DFEA  sub     eax, ecx
000000014019DFEC  mov     [rbp+3F0h+], eax
000000014019DFF2  mov     eax, 3
000000014019DFF7  sub     eax, [rbp+3F0h+var_3E0]
000000014019DFFA  mov     ecx, 4FBh
000000014019DFFF  mov     [rbp+3F0h+], ecx
000000014019E005  movzx   ecx, al
000000014019E008  mov     eax, [rbp+3F0h+]
000000014019E00E  sar     eax, cl
000000014019E010  cmp     [rbp+3F0h+], eax
000000014019E016  jge     short loc_14019E026
000000014019E018  mov     eax, [rbp+3F0h+]
000000014019E01E  mov     [rbp+3F0h+], eax
000000014019E024  jmp     short loc_14019E04A
000000014019E026  mov     eax, 3
000000014019E02B  sub     eax, [rbp+3F0h+var_3E0]
000000014019E02E  mov     ecx, 4FBh
000000014019E033  mov     [rbp+3F0h+], ecx
000000014019E039  movzx   ecx, al
000000014019E03C  mov     eax, [rbp+3F0h+]
000000014019E042  sar     eax, cl
000000014019E044  mov     [rbp+3F0h+], eax
000000014019E04A  mov     eax, [rbp+3F0h+]
000000014019E050  mov     [rbp+3F0h+], eax
000000014019E056  cmp     [rbp+3F0h+var_3A4], 0
000000014019E05A  jnz     short loc_14019E076
000000014019E05C  imul    eax, [rbp+3F0h+var_3EC], 28h ; '('
000000014019E060  lea     eax, ds:0A0h[rax*8]
000000014019E067  mov     ecx, [rbp+3F0h+var_3B8]
000000014019E06A  sub     ecx, eax
000000014019E06C  mov     eax, ecx
000000014019E06E  mov     [rbp+3F0h+var_124], eax
000000014019E074  jmp     short loc_14019E0BC
000000014019E076  imul    eax, [rbp+3F0h+var_3EC], 9
000000014019E07A  lea     eax, ds:20h[rax*8]
000000014019E081  mov     ecx, [rbp+3F0h+var_3B8]
000000014019E084  sub     ecx, eax
000000014019E086  mov     eax, ecx
000000014019E088  test    eax, eax
000000014019E08A  jge     short loc_14019E098
000000014019E08C  mov     [rbp+3F0h+], 0
000000014019E096  jmp     short loc_14019E0B0
000000014019E098  imul    eax, [rbp+3F0h+var_3EC], 9
000000014019E09C  lea     eax, ds:20h[rax*8]
000000014019E0A3  mov     ecx, [rbp+3F0h+var_3B8]
000000014019E0A6  sub     ecx, eax
000000014019E0A8  mov     eax, ecx
000000014019E0AA  mov     [rbp+3F0h+], eax
000000014019E0B0  mov     eax, [rbp+3F0h+]
000000014019E0B6  mov     [rbp+3F0h+var_124], eax
000000014019E0BC  mov     rax, [rbp+3F0h+]
000000014019E0C3  cmp     dword ptr [rax+38h], 0
000000014019E0C7  jz      short loc_14019E0FF
000000014019E0C9  mov     eax, [rbp+3F0h+]
000000014019E0CF  mov     rcx, [rbp+3F0h+]
000000014019E0D6  mov     [rbp+3F0h+], rcx
000000014019E0DD  movzx   ecx, al
000000014019E0E0  mov     rax, [rbp+3F0h+]
000000014019E0E7  mov     eax, [rax+0DCh]
000000014019E0ED  sar     eax, cl
000000014019E0EF  mov     ecx, [rbp+3F0h+var_124]
000000014019E0F5  add     ecx, eax
000000014019E0F7  mov     eax, ecx
000000014019E0F9  mov     [rbp+3F0h+var_124], eax
000000014019E0FF  cmp     [rbp+3F0h+var_3A4], 0
000000014019E103  jnz     loc_14019E211
000000014019E109  mov     rax, [rbp+3F0h+]
000000014019E110  cmp     qword ptr [rax+0F0h], 0
000000014019E118  jz      short loc_14019E126
000000014019E11A  mov     [rbp+3F0h+], 1
000000014019E124  jmp     short loc_14019E130
000000014019E126  mov     [rbp+3F0h+], 0
000000014019E130  mov     rax, [rbp+3F0h+]
000000014019E137  add     rax, 7Ch ; '|'
000000014019E13B  movss   xmm0, [rbp+3F0h+_250var_24Cvar_248var_244var_240var_23Cvar_238var_234var_230var_22Cvar_228var_224var_220var_21Cvar_]
000000014019E140  movss   dword ptr [rsp+4B0h+var_428], xmm0
000000014019E149  movss   xmm0, [rbp+3F0h+]
000000014019E151  movss   dword ptr [rsp+4B0h+var_430], xmm0
000000014019E15A  mov     ecx, [rbp+3F0h+]
000000014019E160  mov     dword ptr [rsp+4B0h+var_438], ecx
000000014019E164  mov     rcx, [rbp+3F0h+]
000000014019E16B  mov     ecx, [rcx+44h]
000000014019E16E  mov     [rsp+4B0h+var_440], ecx
000000014019E172  movss   xmm0, [rbp+3F0h+]
000000014019E17A  movss   dword ptr [rsp+4B0h+var_448], xmm0
000000014019E180  mov     ecx, [rbp+3F0h+]
000000014019E186  mov     dword ptr [rsp+4B0h+var_450], ecx
000000014019E18A  movss   xmm0, [rbp+3F0h+r_1A8var_1A4var_1A0var_19Cvar_198var_194var_190var_18Cvar_188var_184var_180var_17Cva]
000000014019E192  movss   dword ptr [rsp+4B0h+var_458], xmm0
000000014019E198  mov     ecx, [rbp+3F0h+]
000000014019E19E  mov     dword ptr [rsp+4B0h+var_460], ecx
000000014019E1A2  mov     rcx, [rbp+3F0h+]
000000014019E1A9  movss   xmm0, dword ptr [rcx+0E8h]
000000014019E1B1  movss   dword ptr [rsp+4B0h+var_468], xmm0
000000014019E1B7  mov     rcx, [rbp+3F0h+]
000000014019E1BE  mov     ecx, [rcx+38h]
000000014019E1C1  mov     dword ptr [rsp+4B0h+var_470], ecx
000000014019E1C5  mov     rcx, [rbp+3F0h+]
000000014019E1CC  mov     ecx, [rcx+0ECh]
000000014019E1D2  mov     dword ptr [rsp+4B0h+var_478], ecx
000000014019E1D6  mov     ecx, [rbp+3F0h+var_3EC]
000000014019E1D9  mov     dword ptr [rsp+4B0h+var_480], ecx
000000014019E1DD  mov     rcx, [rbp+3F0h+]
000000014019E1E4  mov     ecx, [rcx+60h]
000000014019E1E7  mov     dword ptr [rsp+4B0h+var_488], ecx
000000014019E1EB  mov     ecx, [rbp+3F0h+Srcvar_350var_34Cvar_348var_344var_340va]
000000014019E1EE  mov     dword ptr [rsp+4B0h+var_490], ecx
000000014019E1F2  mov     r9d, [rbp+3F0h+var_3E0]
000000014019E1F6  mov     r8d, [rbp+3F0h+var_124]
000000014019E1FD  mov     rdx, rax
000000014019E200  mov     rcx, [rbp+3F0h+var_3D0]
000000014019E204  call    sub_1401B32A0
000000014019E209  mov     [rbp+3F0h+var_3C0], eax
000000014019E20C  jmp     loc_14019E2E8
000000014019E211  mov     eax, [rbp+3F0h+var_124]
000000014019E217  mov     [rbp+3F0h+var_3C0], eax
000000014019E21A  mov     rax, [rbp+3F0h+]
000000014019E221  cmp     dword ptr [rax+0C0h], 64h ; 'd'
000000014019E228  jge     short loc_14019E252
000000014019E22A  mov     eax, 3
000000014019E22F  sub     eax, [rbp+3F0h+var_3E0]
000000014019E232  mov     ecx, 60h ; '`'
000000014019E237  mov     [rbp+3F0h+], ecx
000000014019E23D  movzx   ecx, al
000000014019E240  mov     eax, [rbp+3F0h+]
000000014019E246  sar     eax, cl
000000014019E248  mov     ecx, [rbp+3F0h+var_3C0]
000000014019E24B  add     ecx, eax
000000014019E24D  mov     eax, ecx
000000014019E24F  mov     [rbp+3F0h+var_3C0], eax
000000014019E252  mov     rax, [rbp+3F0h+]
000000014019E259  cmp     dword ptr [rax+0C0h], 64h ; 'd'
000000014019E260  jle     short loc_14019E28A
000000014019E262  mov     eax, 3
000000014019E267  sub     eax, [rbp+3F0h+var_3E0]
000000014019E26A  mov     ecx, 90h
000000014019E26F  mov     [rbp+3F0h+], ecx
000000014019E275  movzx   ecx, al
000000014019E278  mov     eax, [rbp+3F0h+]
000000014019E27E  sar     eax, cl
000000014019E280  mov     ecx, [rbp+3F0h+var_3C0]
000000014019E283  sub     ecx, eax
000000014019E285  mov     eax, ecx
000000014019E287  mov     [rbp+3F0h+var_3C0], eax
000000014019E28A  movss   xmm0, [rbp+3F0h+r_1A8var_1A4var_1A0var_19Cvar_198var_194var_190var_18Cvar_188var_184var_180var_17Cva]
000000014019E292  subss   xmm0, cs:dword_140278280
000000014019E29A  mulss   xmm0, cs:dword_140278924
000000014019E2A2  cvttss2si eax, xmm0
000000014019E2A6  mov     ecx, [rbp+3F0h+var_3C0]
000000014019E2A9  add     ecx, eax
000000014019E2AB  mov     eax, ecx
000000014019E2AD  mov     [rbp+3F0h+var_3C0], eax
000000014019E2B0  movss   xmm0, [rbp+3F0h+r_1A8var_1A4var_1A0var_19Cvar_198var_194var_190var_18Cvar_188var_184var_180var_17Cva]
000000014019E2B8  comiss  xmm0, cs:dword_140278388
000000014019E2BF  jbe     short loc_14019E2E8
000000014019E2C1  cmp     [rbp+3F0h+var_3C0], 190h
000000014019E2C8  jle     short loc_14019E2D5
000000014019E2CA  mov     eax, [rbp+3F0h+var_3C0]
000000014019E2CD  mov     [rbp+3F0h+], eax
000000014019E2D3  jmp     short loc_14019E2DF
000000014019E2D5  mov     [rbp+3F0h+], 190h
000000014019E2DF  mov     eax, [rbp+3F0h+]
000000014019E2E5  mov     [rbp+3F0h+var_3C0], eax
000000014019E2E8  mov     eax, [rbp+3F0h+var_3C8]
000000014019E2EB  mov     ecx, [rbp+3F0h+var_3C0]
000000014019E2EE  add     ecx, eax
000000014019E2F0  mov     eax, ecx
000000014019E2F2  mov     [rbp+3F0h+var_3C0], eax
000000014019E2F5  mov     eax, [rbp+3F0h+var_3C8]
000000014019E2F8  mov     ecx, [rbp+3F0h+_178var_174var_170var_16Cvar_168r_164var_160var_15Cvar_158var_154var_150var_14Cvar_148var_144var_140]
000000014019E2FE  lea     eax, [rax+rcx+3Fh]
000000014019E302  sar     eax, 6
000000014019E305  add     eax, 2
000000014019E308  mov     [rbp+3F0h+var_120], eax
000000014019E30E  cmp     [rbp+3F0h+var_3A4], 0
000000014019E312  jz      short loc_14019E368
000000014019E314  mov     eax, [rbp+3F0h+var_B8]
000000014019E31A  mov     ecx, [rbp+3F0h+_178var_174var_170var_16Cvar_168r_164var_160var_15Cvar_158var_154var_150var_14Cvar_148var_144var_140]
000000014019E320  lea     eax, [rax+rcx+167h]
000000014019E327  sar     eax, 6
000000014019E32A  cmp     [rbp+3F0h+var_120], eax
000000014019E330  jle     short loc_14019E340
000000014019E332  mov     eax, [rbp+3F0h+var_120]
000000014019E338  mov     [rbp+3F0h+], eax
000000014019E33E  jmp     short loc_14019E35C
000000014019E340  mov     eax, [rbp+3F0h+var_B8]
000000014019E346  mov     ecx, [rbp+3F0h+_178var_174var_170var_16Cvar_168r_164var_160var_15Cvar_158var_154var_150var_14Cvar_148var_144var_140]
000000014019E34C  lea     eax, [rax+rcx+167h]
000000014019E353  sar     eax, 6
000000014019E356  mov     [rbp+3F0h+], eax
000000014019E35C  mov     eax, [rbp+3F0h+]
000000014019E362  mov     [rbp+3F0h+var_120], eax
000000014019E368  mov     eax, [rbp+3F0h+var_3C0]
000000014019E36B  add     eax, 20h ; ' '
000000014019E36E  sar     eax, 6
000000014019E371  mov     [rbp+3F0h+var_3D8], eax
000000014019E374  mov     eax, [rbp+3F0h+var_3D8]
000000014019E377  cmp     [rbp+3F0h+var_120], eax
000000014019E37D  jle     short loc_14019E38D
000000014019E37F  mov     eax, [rbp+3F0h+var_120]
000000014019E385  mov     [rbp+3F0h+], eax
000000014019E38B  jmp     short loc_14019E396
000000014019E38D  mov     eax, [rbp+3F0h+var_3D8]
000000014019E390  mov     [rbp+3F0h+], eax
000000014019E396  mov     eax, [rbp+3F0h+]
000000014019E39C  mov     [rbp+3F0h+var_3D8], eax
000000014019E39F  mov     eax, [rbp+3F0h+var_3D8]
000000014019E3A2  cmp     [rbp+3F0h+], eax
000000014019E3A8  jge     short loc_14019E3B8
000000014019E3AA  mov     eax, [rbp+3F0h+]
000000014019E3B0  mov     [rbp+3F0h+], eax
000000014019E3B6  jmp     short loc_14019E3C1
000000014019E3B8  mov     eax, [rbp+3F0h+var_3D8]
000000014019E3BB  mov     [rbp+3F0h+], eax
000000014019E3C1  mov     eax, [rbp+3F0h+]
000000014019E3C7  mov     [rbp+3F0h+var_3D8], eax
000000014019E3CA  mov     eax, [rbp+3F0h+var_3B8]
000000014019E3CD  mov     ecx, [rbp+3F0h+var_3C0]
000000014019E3D0  sub     ecx, eax
000000014019E3D2  mov     eax, ecx
000000014019E3D4  mov     [rbp+3F0h+], eax
000000014019E3DA  mov     eax, [rbp+3F0h+var_3D8]
000000014019E3DD  shl     eax, 6
000000014019E3E0  mov     [rbp+3F0h+var_3C0], eax
000000014019E3E3  cmp     [rbp+3F0h+18var_214var_210var_20Cvar_208var_204var_20], 0
000000014019E3E7  jz      short loc_14019E401
000000014019E3E9  mov     [rbp+3F0h+var_3D8], 2
000000014019E3F0  mov     [rbp+3F0h+var_3C0], 80h
000000014019E3F7  mov     [rbp+3F0h+], 0
000000014019E401  mov     rax, [rbp+3F0h+]
000000014019E408  cmp     dword ptr [rax+0E0h], 3CAh
000000014019E412  jge     short loc_14019E45D
000000014019E414  mov     rax, [rbp+3F0h+]
000000014019E41B  mov     eax, [rax+0E0h]
000000014019E421  inc     eax
000000014019E423  mov     rcx, [rbp+3F0h+]
000000014019E42A  mov     [rcx+0E0h], eax
000000014019E430  mov     rax, [rbp+3F0h+]
000000014019E437  mov     eax, [rax+0E0h]
000000014019E43D  add     eax, 14h
000000014019E440  cvtsi2ss xmm0, eax
000000014019E444  movss   xmm1, cs:dword_1402783F4
000000014019E44C  divss   xmm1, xmm0
000000014019E450  movaps  xmm0, xmm1
000000014019E453  movss   [rbp+3F0h+], xmm0
000000014019E45B  jmp     short loc_14019E46D
000000014019E45D  movss   xmm0, cs:dword_140278098
000000014019E465  movss   [rbp+3F0h+], xmm0
000000014019E46D  mov     rax, [rbp+3F0h+]
000000014019E474  cmp     dword ptr [rax+38h], 0
000000014019E478  jz      short loc_14019E49E
000000014019E47A  mov     eax, [rbp+3F0h+var_3B8]
000000014019E47D  mov     ecx, [rbp+3F0h+var_3C0]
000000014019E480  sub     ecx, eax
000000014019E482  mov     eax, ecx
000000014019E484  mov     rcx, [rbp+3F0h+]
000000014019E48B  add     eax, [rcx+0D4h]
000000014019E491  mov     rcx, [rbp+3F0h+]
000000014019E498  mov     [rcx+0D4h], eax
000000014019E49E  mov     rax, [rbp+3F0h+]
000000014019E4A5  cmp     dword ptr [rax+38h], 0
000000014019E4A9  jz      loc_14019E53D
000000014019E4AF  mov     eax, [rbp+3F0h+]
000000014019E4B5  mov     ecx, 1
000000014019E4BA  mov     [rbp+3F0h+], ecx
000000014019E4C0  movzx   ecx, al
000000014019E4C3  mov     eax, [rbp+3F0h+]
000000014019E4C9  shl     eax, cl
000000014019E4CB  mov     ecx, [rbp+3F0h+]
000000014019E4D1  imul    ecx, eax
000000014019E4D4  mov     eax, ecx
000000014019E4D6  mov     rcx, [rbp+3F0h+]
000000014019E4DD  sub     eax, [rcx+0DCh]
000000014019E4E3  mov     rcx, [rbp+3F0h+]
000000014019E4EA  sub     eax, [rcx+0D8h]
000000014019E4F0  cvtsi2ss xmm0, eax
000000014019E4F4  movss   xmm1, [rbp+3F0h+]
000000014019E4FC  mulss   xmm1, xmm0
000000014019E500  movaps  xmm0, xmm1
000000014019E503  cvttss2si eax, xmm0
000000014019E507  mov     rcx, [rbp+3F0h+]
000000014019E50E  add     eax, [rcx+0D8h]
000000014019E514  mov     rcx, [rbp+3F0h+]
000000014019E51B  mov     [rcx+0D8h], eax
000000014019E521  mov     rax, [rbp+3F0h+]
000000014019E528  mov     eax, [rax+0D8h]
000000014019E52E  neg     eax
000000014019E530  mov     rcx, [rbp+3F0h+]
000000014019E537  mov     [rcx+0DCh], eax
000000014019E53D  mov     rax, [rbp+3F0h+]
000000014019E544  cmp     dword ptr [rax+38h], 0
000000014019E548  jz      short loc_14019E5B7
000000014019E54A  mov     rax, [rbp+3F0h+]
000000014019E551  cmp     dword ptr [rax+0D4h], 0
000000014019E558  jge     short loc_14019E5B7
000000014019E55A  mov     rax, [rbp+3F0h+]
000000014019E561  mov     eax, [rax+0D4h]
000000014019E567  neg     eax
000000014019E569  cdq
000000014019E56A  and     edx, 3Fh
000000014019E56D  add     eax, edx
000000014019E56F  sar     eax, 6
000000014019E572  mov     [rbp+3F0h+], eax
000000014019E578  cmp     [rbp+3F0h+18var_214var_210var_20Cvar_208var_204var_20], 0
000000014019E57C  jz      short loc_14019E58A
000000014019E57E  mov     [rbp+3F0h+], 0
000000014019E588  jmp     short loc_14019E596
000000014019E58A  mov     eax, [rbp+3F0h+]
000000014019E590  mov     [rbp+3F0h+], eax
000000014019E596  mov     eax, [rbp+3F0h+]
000000014019E59C  mov     ecx, [rbp+3F0h+var_3D8]
000000014019E59F  add     ecx, eax
000000014019E5A1  mov     eax, ecx
000000014019E5A3  mov     [rbp+3F0h+var_3D8], eax
000000014019E5A6  mov     rax, [rbp+3F0h+]
000000014019E5AD  mov     dword ptr [rax+0D4h], 0
000000014019E5B7  mov     eax, [rbp+3F0h+var_3D8]
000000014019E5BA  cmp     [rbp+3F0h+], eax
000000014019E5C0  jge     short loc_14019E5D0
000000014019E5C2  mov     eax, [rbp+3F0h+]
000000014019E5C8  mov     [rbp+3F0h+], eax
000000014019E5CE  jmp     short loc_14019E5D9
000000014019E5D0  mov     eax, [rbp+3F0h+var_3D8]
000000014019E5D3  mov     [rbp+3F0h+], eax
000000014019E5D9  mov     eax, [rbp+3F0h+]
000000014019E5DF  mov     [rbp+3F0h+], eax
000000014019E5E5  mov     edx, [rbp+3F0h+]
000000014019E5EB  mov     rcx, [rbp+3F0h+]
000000014019E5F2  call    sub_14019A8F0
000000014019E5F7  movsxd  rax, [rbp+3F0h+var_3E8]
000000014019E5FB  shl     rax, 2
000000014019E5FF  mov     rcx, rax
000000014019E602  add     rcx, 0Fh
000000014019E606  cmp     rcx, rax
000000014019E609  ja      short loc_14019E615
000000014019E60B  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019E615  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019E619  mov     rax, rcx
000000014019E61C  call    sub_1401F89D0
000000014019E621  sub     rsp, rax
000000014019E624  lea     rax, [rsp+4B0h+var_3F0]
000000014019E62C  mov     [rbp+3F0h+], rax
000000014019E633  movsxd  rax, [rbp+3F0h+var_3E8]
000000014019E637  shl     rax, 2
000000014019E63B  mov     rcx, rax
000000014019E63E  add     rcx, 0Fh
000000014019E642  cmp     rcx, rax
000000014019E645  ja      short loc_14019E651
000000014019E647  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019E651  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019E655  mov     rax, rcx
000000014019E658  call    sub_1401F89D0
000000014019E65D  sub     rsp, rax
000000014019E660  lea     rax, [rsp+4B0h+var_3F0]
000000014019E668  mov     [rbp+3F0h+], rax
000000014019E66F  movsxd  rax, [rbp+3F0h+var_3E8]
000000014019E673  shl     rax, 2
000000014019E677  mov     rcx, rax
000000014019E67A  add     rcx, 0Fh
000000014019E67E  cmp     rcx, rax
000000014019E681  ja      short loc_14019E68D
000000014019E683  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019E68D  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019E691  mov     rax, rcx
000000014019E694  call    sub_1401F89D0
000000014019E699  sub     rsp, rax
000000014019E69C  lea     rax, [rsp+4B0h+var_3F0]
000000014019E6A4  mov     [rbp+3F0h+], rax
000000014019E6AB  mov     eax, [rbp+3F0h+]
000000014019E6B1  shl     eax, 3
000000014019E6B4  shl     eax, 3
000000014019E6B7  mov     [rbp+3F0h+], eax
000000014019E6BD  mov     rcx, [rbp+3F0h+]
000000014019E6C4  call    sub_14019A0E0
000000014019E6C9  mov     ecx, [rbp+3F0h+]
000000014019E6CF  sub     ecx, eax
000000014019E6D1  mov     eax, ecx
000000014019E6D3  dec     eax
000000014019E6D5  mov     [rbp+3F0h+var_F4], eax
000000014019E6DB  cmp     [rbp+3F0h+var_3BC], 0
000000014019E6DF  jz      short loc_14019E705
000000014019E6E1  cmp     [rbp+3F0h+var_3E0], 2
000000014019E6E5  jl      short loc_14019E705
000000014019E6E7  mov     eax, [rbp+3F0h+var_3E0]
000000014019E6EA  lea     eax, ds:10h[rax*8]
000000014019E6F1  cmp     [rbp+3F0h+var_F4], eax
000000014019E6F7  jl      short loc_14019E705
000000014019E6F9  mov     [rbp+3F0h+], 8
000000014019E703  jmp     short loc_14019E70F
000000014019E705  mov     [rbp+3F0h+], 0
000000014019E70F  mov     eax, [rbp+3F0h+]
000000014019E715  mov     [rbp+3F0h+var_A8], eax
000000014019E71B  mov     eax, [rbp+3F0h+var_A8]
000000014019E721  mov     ecx, [rbp+3F0h+var_F4]
000000014019E727  sub     ecx, eax
000000014019E729  mov     eax, ecx
000000014019E72B  mov     [rbp+3F0h+var_F4], eax
000000014019E731  mov     eax, [rbp+3F0h+var_3DC]
000000014019E734  dec     eax
000000014019E736  mov     [rbp+3F0h+var_B4], eax
000000014019E73C  mov     rax, [rbp+3F0h+]
000000014019E743  cmp     dword ptr [rax+7Ch], 0
000000014019E747  jz      loc_14019E7F9
000000014019E74D  imul    eax, [rbp+3F0h+var_3EC], 7D00h
000000014019E754  cmp     [rbp+3F0h+Srcvar_350var_34Cvar_348var_344var_340va], eax
000000014019E757  jge     short loc_14019E765
000000014019E759  mov     [rbp+3F0h+var_12C], 0Dh
000000014019E763  jmp     short loc_14019E7B7
000000014019E765  imul    eax, [rbp+3F0h+var_3EC], 0BB80h
000000014019E76C  cmp     [rbp+3F0h+Srcvar_350var_34Cvar_348var_344var_340va], eax
000000014019E76F  jge     short loc_14019E77D
000000014019E771  mov     [rbp+3F0h+var_12C], 10h
000000014019E77B  jmp     short loc_14019E7B7
000000014019E77D  imul    eax, [rbp+3F0h+var_3EC], 0EA60h
000000014019E784  cmp     [rbp+3F0h+Srcvar_350var_34Cvar_348var_344var_340va], eax
000000014019E787  jge     short loc_14019E795
000000014019E789  mov     [rbp+3F0h+var_12C], 12h
000000014019E793  jmp     short loc_14019E7B7
000000014019E795  imul    eax, [rbp+3F0h+var_3EC], 13880h
000000014019E79C  cmp     [rbp+3F0h+Srcvar_350var_34Cvar_348var_344var_340va], eax
000000014019E79F  jge     short loc_14019E7AD
000000014019E7A1  mov     [rbp+3F0h+var_12C], 13h
000000014019E7AB  jmp     short loc_14019E7B7
000000014019E7AD  mov     [rbp+3F0h+var_12C], 14h
000000014019E7B7  mov     rax, [rbp+3F0h+]
000000014019E7BE  mov     ecx, [rbp+3F0h+var_12C]
000000014019E7C4  cmp     [rax+9Ch], ecx
000000014019E7CA  jle     short loc_14019E7E1
000000014019E7CC  mov     rax, [rbp+3F0h+]
000000014019E7D3  mov     eax, [rax+9Ch]
000000014019E7D9  mov     [rbp+3F0h+], eax
000000014019E7DF  jmp     short loc_14019E7ED
000000014019E7E1  mov     eax, [rbp+3F0h+var_12C]
000000014019E7E7  mov     [rbp+3F0h+], eax
000000014019E7ED  mov     eax, [rbp+3F0h+]
000000014019E7F3  mov     [rbp+3F0h+var_B4], eax
000000014019E7F9  mov     rax, [rbp+3F0h+]
000000014019E800  cmp     dword ptr [rax+44h], 0
000000014019E804  jz      short loc_14019E810
000000014019E806  mov     [rbp+3F0h+var_B4], 1
000000014019E810  mov     rax, [rbp+3F0h+]
000000014019E817  add     rax, 0ECh
000000014019E81D  mov     ecx, [rbp+3F0h+var_B4]
000000014019E823  mov     dword ptr [rsp+4B0h+var_420], ecx
000000014019E82A  mov     rcx, [rbp+3F0h+]
000000014019E831  mov     ecx, [rcx+60h]
000000014019E834  mov     dword ptr [rsp+4B0h+var_428], ecx
000000014019E83B  mov     dword ptr [rsp+4B0h+var_430], 1
000000014019E846  mov     rcx, [rbp+3F0h+]
000000014019E84D  mov     [rsp+4B0h+var_438], rcx
000000014019E852  mov     ecx, [rbp+3F0h+var_3E0]
000000014019E855  mov     [rsp+4B0h+var_440], ecx
000000014019E859  mov     ecx, [rbp+3F0h+var_3EC]
000000014019E85C  mov     dword ptr [rsp+4B0h+var_448], ecx
000000014019E860  mov     rcx, [rbp+3F0h+]
000000014019E867  mov     [rsp+4B0h+var_450], rcx
000000014019E86C  mov     rcx, [rbp+3F0h+]
000000014019E873  mov     [rsp+4B0h+var_458], rcx
000000014019E878  mov     rcx, [rbp+3F0h+]
000000014019E87F  mov     [rsp+4B0h+var_460], rcx
000000014019E884  lea     rcx, [rbp+3F0h+]
000000014019E88B  mov     [rsp+4B0h+var_468], rcx
000000014019E890  mov     ecx, [rbp+3F0h+var_F4]
000000014019E896  mov     dword ptr [rsp+4B0h+var_470], ecx
000000014019E89A  lea     rcx, [rbp+3F0h+var_B0]
000000014019E8A1  mov     [rsp+4B0h+var_478], rcx
000000014019E8A6  mov     [rsp+4B0h+var_480], rax
000000014019E8AB  mov     eax, [rbp+3F0h+var_F0]
000000014019E8B1  mov     dword ptr [rsp+4B0h+var_488], eax
000000014019E8B5  mov     rax, [rbp+3F0h+]
000000014019E8BC  mov     [rsp+4B0h+var_490], rax
000000014019E8C1  mov     r9, [rbp+3F0h+]
000000014019E8C8  mov     r8d, [rbp+3F0h+var_3DC]
000000014019E8CC  mov     edx, [rbp+3F0h+var_3C4]
000000014019E8CF  mov     rcx, [rbp+3F0h+var_3D0]
000000014019E8D3  call    sub_1401A29F0
000000014019E8D8  mov     [rbp+3F0h+var_128], eax
000000014019E8DE  mov     rax, [rbp+3F0h+]
000000014019E8E5  cmp     dword ptr [rax+60h], 0
000000014019E8E9  jz      loc_14019E99D
000000014019E8EF  mov     rax, [rbp+3F0h+]
000000014019E8F6  mov     eax, [rax+60h]
000000014019E8F9  dec     eax
000000014019E8FB  cmp     eax, [rbp+3F0h+var_128]
000000014019E901  jle     short loc_14019E917
000000014019E903  mov     rax, [rbp+3F0h+]
000000014019E90A  mov     eax, [rax+60h]
000000014019E90D  dec     eax
000000014019E90F  mov     [rbp+3F0h+], eax
000000014019E915  jmp     short loc_14019E923
000000014019E917  mov     eax, [rbp+3F0h+var_128]
000000014019E91D  mov     [rbp+3F0h+], eax
000000014019E923  mov     rax, [rbp+3F0h+]
000000014019E92A  mov     eax, [rax+60h]
000000014019E92D  inc     eax
000000014019E92F  cmp     eax, [rbp+3F0h+]
000000014019E935  jge     short loc_14019E94B
000000014019E937  mov     rax, [rbp+3F0h+]
000000014019E93E  mov     eax, [rax+60h]
000000014019E941  inc     eax
000000014019E943  mov     [rbp+3F0h+], eax
000000014019E949  jmp     short loc_14019E98B
000000014019E94B  mov     rax, [rbp+3F0h+]
000000014019E952  mov     eax, [rax+60h]
000000014019E955  dec     eax
000000014019E957  cmp     eax, [rbp+3F0h+var_128]
000000014019E95D  jle     short loc_14019E973
000000014019E95F  mov     rax, [rbp+3F0h+]
000000014019E966  mov     eax, [rax+60h]
000000014019E969  dec     eax
000000014019E96B  mov     [rbp+3F0h+], eax
000000014019E971  jmp     short loc_14019E97F
000000014019E973  mov     eax, [rbp+3F0h+var_128]
000000014019E979  mov     [rbp+3F0h+], eax
000000014019E97F  mov     eax, [rbp+3F0h+]
000000014019E985  mov     [rbp+3F0h+], eax
000000014019E98B  mov     rax, [rbp+3F0h+]
000000014019E992  mov     ecx, [rbp+3F0h+]
000000014019E998  mov     [rax+60h], ecx
000000014019E99B  jmp     short loc_14019E9AD
000000014019E99D  mov     rax, [rbp+3F0h+]
000000014019E9A4  mov     ecx, [rbp+3F0h+var_128]
000000014019E9AA  mov     [rax+60h], ecx
000000014019E9AD  mov     eax, [rbp+3F0h+var_3EC]
000000014019E9B0  mov     dword ptr [rsp+4B0h+var_478], eax
000000014019E9B4  mov     rax, [rbp+3F0h+]
000000014019E9BB  mov     [rsp+4B0h+var_480], rax
000000014019E9C0  mov     rax, [rbp+3F0h+]
000000014019E9C7  mov     [rsp+4B0h+var_488], rax
000000014019E9CC  mov     rax, [rbp+3F0h+var_78]
000000014019E9D3  mov     [rsp+4B0h+var_490], rax
000000014019E9D8  mov     r9, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019E9DC  mov     r8d, [rbp+3F0h+var_3DC]
000000014019E9E0  mov     edx, [rbp+3F0h+var_3C4]
000000014019E9E3  mov     rcx, [rbp+3F0h+var_3D0]
000000014019E9E7  call    sub_1401A7710
000000014019E9EC  mov     eax, [rbp+3F0h+var_3EC]
000000014019E9EF  imul    eax, [rbp+3F0h+var_3E8]
000000014019E9F3  cdqe
000000014019E9F5  mov     rcx, rax
000000014019E9F8  add     rcx, 0Fh
000000014019E9FC  cmp     rcx, rax
000000014019E9FF  ja      short loc_14019EA0B
000000014019EA01  mov     rcx, 0FFFFFFFFFFFFFF0h
000000014019EA0B  and     rcx, 0FFFFFFFFFFFFFFF0h
000000014019EA0F  mov     rax, rcx
000000014019EA12  call    sub_1401F89D0
000000014019EA17  sub     rsp, rax
000000014019EA1A  lea     rax, [rsp+4B0h+var_3F0]
000000014019EA22  mov     [rbp+3F0h+], rax
000000014019EA29  cmp     [rbp+3F0h+var_3EC], 2
000000014019EA2D  jnz     short loc_14019EA47
000000014019EA2F  movsxd  rax, [rbp+3F0h+var_3A8]
000000014019EA33  mov     rcx, [rbp+3F0h+var_80]
000000014019EA3A  lea     rax, [rcx+rax*4]
000000014019EA3E  mov     [rbp+3F0h+], rax
000000014019EA45  jmp     short loc_14019EA52
000000014019EA47  mov     [rbp+3F0h+], 0
000000014019EA52  mov     rax, [rbp+3F0h+]
000000014019EA59  add     rax, 50h ; 'P'
000000014019EA5D  imul    ecx, [rbp+3F0h+], 40h ; '@'
000000014019EA64  sub     ecx, [rbp+3F0h+var_A8]
000000014019EA6A  mov     rdx, [rbp+3F0h+]
000000014019EA71  mov     edx, [rdx+48h]
000000014019EA74  mov     [rsp+4B0h+var_400], edx
000000014019EA7B  mov     rdx, [rbp+3F0h+]
000000014019EA82  mov     edx, [rdx+4Ch]
000000014019EA85  mov     [rsp+4B0h+var_408], edx
000000014019EA8C  mov     rdx, [rbp+3F0h+]
000000014019EA93  mov     edx, [rdx+1Ch]
000000014019EA96  mov     dword ptr [rsp+4B0h+var_410], edx
000000014019EA9D  mov     [rsp+4B0h+var_418], rax
000000014019EAA5  mov     eax, [rbp+3F0h+var_128]
000000014019EAAB  mov     dword ptr [rsp+4B0h+var_420], eax
000000014019EAB2  mov     eax, [rbp+3F0h+var_3E0]
000000014019EAB5  mov     dword ptr [rsp+4B0h+var_428], eax
000000014019EABC  mov     rax, [rbp+3F0h+]
000000014019EAC3  mov     [rsp+4B0h+var_430], rax
000000014019EACB  mov     eax, [rbp+3F0h+]
000000014019EAD1  mov     dword ptr [rsp+4B0h+var_438], eax
000000014019EAD5  mov     [rsp+4B0h+var_440], ecx
000000014019EAD9  mov     rax, [rbp+3F0h+var_D0]
000000014019EAE0  mov     [rsp+4B0h+var_448], rax
000000014019EAE5  mov     rax, [rbp+3F0h+]
000000014019EAEC  mov     eax, [rax+0ECh]
000000014019EAF2  mov     dword ptr [rsp+4B0h+var_450], eax
000000014019EAF6  mov     eax, [rbp+3F0h+var_B0]
000000014019EAFC  mov     dword ptr [rsp+4B0h+var_458], eax
000000014019EB00  mov     rax, [rbp+3F0h+]
000000014019EB07  mov     eax, [rax+54h]
000000014019EB0A  mov     dword ptr [rsp+4B0h+var_460], eax
000000014019EB0E  mov     eax, [rbp+3F0h+_33Cvar_338var_334var_330var_32Cvar_328var_320var_318var_314var_310var_30Cvar_308var_304var_300var_]
000000014019EB11  mov     dword ptr [rsp+4B0h+var_468], eax
000000014019EB15  mov     rax, [rbp+3F0h+]
000000014019EB1C  mov     [rsp+4B0h+var_470], rax
000000014019EB21  mov     rax, [rbp+3F0h+var_1E4var_1E0var_1DCvar_1D8var_1D4var_1D0var_1C]
000000014019EB28  mov     [rsp+4B0h+var_478], rax
000000014019EB2D  mov     rax, [rbp+3F0h+]
000000014019EB34  mov     [rsp+4B0h+var_480], rax
000000014019EB39  mov     rax, [rbp+3F0h+]
000000014019EB40  mov     [rsp+4B0h+var_488], rax
000000014019EB45  mov     rax, [rbp+3F0h+var_80]
000000014019EB4C  mov     [rsp+4B0h+var_490], rax
000000014019EB51  mov     r9d, [rbp+3F0h+var_3DC]
000000014019EB55  mov     r8d, [rbp+3F0h+var_3C4]
000000014019EB59  mov     rdx, [rbp+3F0h+var_3D0]
000000014019EB5D  mov     ecx, 1
000000014019EB62  call    sub_1401A4050
000000014019EB67  cmp     [rbp+3F0h+var_A8], 0
000000014019EB6E  jle     short loc_14019EBB7
000000014019EB70  mov     rax, [rbp+3F0h+]
000000014019EB77  cmp     dword ptr [rax+78h], 2
000000014019EB7B  jge     short loc_14019EB89
000000014019EB7D  mov     [rbp+3F0h+], 1
000000014019EB87  jmp     short loc_14019EB93
000000014019EB89  mov     [rbp+3F0h+], 0
000000014019EB93  mov     eax, [rbp+3F0h+]
000000014019EB99  mov     [rbp+3F0h+], eax
000000014019EB9F  mov     r8d, 1
000000014019EBA5  mov     edx, [rbp+3F0h+]
000000014019EBAB  mov     rcx, [rbp+3F0h+]
000000014019EBB2  call    sub_14019A6D0
000000014019EBB7  mov     eax, [rbp+3F0h+]
000000014019EBBD  shl     eax, 3
000000014019EBC0  mov     [rbp+3F0h+], eax
000000014019EBC6  mov     rcx, [rbp+3F0h+]
000000014019EBCD  call    sub_14019A0A0
000000014019EBD2  mov     ecx, [rbp+3F0h+]
000000014019EBD8  sub     ecx, eax
000000014019EBDA  mov     eax, ecx
000000014019EBDC  mov     ecx, [rbp+3F0h+var_3EC]
000000014019EBDF  mov     dword ptr [rsp+4B0h+var_468], ecx
000000014019EBE3  mov     rcx, [rbp+3F0h+]
000000014019EBEA  mov     [rsp+4B0h+var_470], rcx
000000014019EBEF  mov     dword ptr [rsp+4B0h+var_478], eax
000000014019EBF3  mov     rax, [rbp+3F0h+]
000000014019EBFA  mov     [rsp+4B0h+var_480], rax
000000014019EBFF  mov     rax, [rbp+3F0h+]
000000014019EC06  mov     [rsp+4B0h+var_488], rax
000000014019EC0B  mov     rax, [rbp+3F0h+var_78]
000000014019EC12  mov     [rsp+4B0h+var_490], rax
000000014019EC17  mov     r9, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EC1B  mov     r8d, [rbp+3F0h+var_3DC]
000000014019EC1F  mov     edx, [rbp+3F0h+var_3C4]
000000014019EC22  mov     rcx, [rbp+3F0h+var_3D0]
000000014019EC26  call    sub_1401A7930
000000014019EC2B  mov     eax, [rbp+3F0h+var_3E8]
000000014019EC2E  imul    eax, [rbp+3F0h+var_3D4]
000000014019EC32  cdqe
000000014019EC34  shl     rax, 2
000000014019EC38  mov     r8, rax
000000014019EC3B  xor     edx, edx
000000014019EC3D  mov     rcx, [rbp+3F0h+]
000000014019EC44  call    1401FCD30h
000000014019EC49  mov     [rbp+3F0h+var_3E4], 0
000000014019EC50  mov     eax, [rbp+3F0h+var_3C4]
000000014019EC53  mov     [rbp+3F0h+var_3F0], eax
000000014019EC56  jmp     short loc_14019EC60
000000014019EC58  mov     eax, [rbp+3F0h+var_3F0]
000000014019EC5B  inc     eax
000000014019EC5D  mov     [rbp+3F0h+var_3F0], eax
000000014019EC60  mov     eax, [rbp+3F0h+var_3DC]
000000014019EC63  cmp     [rbp+3F0h+var_3F0], eax
000000014019EC66  jge     loc_14019ED7E
000000014019EC6C  mov     eax, [rbp+3F0h+var_3E4]
000000014019EC6F  imul    eax, [rbp+3F0h+var_3E8]
000000014019EC73  mov     ecx, [rbp+3F0h+var_3F0]
000000014019EC76  add     ecx, eax
000000014019EC78  mov     eax, ecx
000000014019EC7A  cdqe
000000014019EC7C  mov     rcx, [rbp+3F0h+var_78]
000000014019EC83  movss   xmm0, dword ptr [rcx+rax*4]
000000014019EC88  comiss  xmm0, cs:dword_140278338
000000014019EC8F  jbe     short loc_14019ECA3
000000014019EC91  movss   xmm0, cs:dword_140278338
000000014019EC99  movss   [rbp+3F0h+], xmm0
000000014019ECA1  jmp     short loc_14019ECC7
000000014019ECA3  mov     eax, [rbp+3F0h+var_3E4]
000000014019ECA6  imul    eax, [rbp+3F0h+var_3E8]
000000014019ECAA  mov     ecx, [rbp+3F0h+var_3F0]
000000014019ECAD  add     ecx, eax
000000014019ECAF  mov     eax, ecx
000000014019ECB1  cdqe
000000014019ECB3  mov     rcx, [rbp+3F0h+var_78]
000000014019ECBA  movss   xmm0, dword ptr [rcx+rax*4]
000000014019ECBF  movss   [rbp+3F0h+], xmm0
000000014019ECC7  movss   xmm0, cs:dword_140278BD0
000000014019ECCF  comiss  xmm0, [rbp+3F0h+]
000000014019ECD6  jbe     short loc_14019ECEA
000000014019ECD8  movss   xmm0, cs:dword_140278BD0
000000014019ECE0  movss   [rbp+3F0h+], xmm0
000000014019ECE8  jmp     short loc_14019ED55
000000014019ECEA  mov     eax, [rbp+3F0h+var_3E4]
000000014019ECED  imul    eax, [rbp+3F0h+var_3E8]
000000014019ECF1  mov     ecx, [rbp+3F0h+var_3F0]
000000014019ECF4  add     ecx, eax
000000014019ECF6  mov     eax, ecx
000000014019ECF8  cdqe
000000014019ECFA  mov     rcx, [rbp+3F0h+var_78]
000000014019ED01  movss   xmm0, dword ptr [rcx+rax*4]
000000014019ED06  comiss  xmm0, cs:dword_140278338
000000014019ED0D  jbe     short loc_14019ED21
000000014019ED0F  movss   xmm0, cs:dword_140278338
000000014019ED17  movss   [rbp+3F0h+], xmm0
000000014019ED1F  jmp     short loc_14019ED45
000000014019ED21  mov     eax, [rbp+3F0h+var_3E4]
000000014019ED24  imul    eax, [rbp+3F0h+var_3E8]
000000014019ED28  mov     ecx, [rbp+3F0h+var_3F0]
000000014019ED2B  add     ecx, eax
000000014019ED2D  mov     eax, ecx
000000014019ED2F  cdqe
000000014019ED31  mov     rcx, [rbp+3F0h+var_78]
000000014019ED38  movss   xmm0, dword ptr [rcx+rax*4]
000000014019ED3D  movss   [rbp+3F0h+], xmm0
000000014019ED45  movss   xmm0, [rbp+3F0h+]
000000014019ED4D  movss   [rbp+3F0h+], xmm0
000000014019ED55  mov     eax, [rbp+3F0h+var_3E4]
000000014019ED58  imul    eax, [rbp+3F0h+var_3E8]
000000014019ED5C  mov     ecx, [rbp+3F0h+var_3F0]
000000014019ED5F  add     ecx, eax
000000014019ED61  mov     eax, ecx
000000014019ED63  cdqe
000000014019ED65  mov     rcx, [rbp+3F0h+]
000000014019ED6C  movss   xmm0, [rbp+3F0h+]
000000014019ED74  movss   dword ptr [rcx+rax*4], xmm0
000000014019ED79  jmp     loc_14019EC58
000000014019ED7E  mov     eax, [rbp+3F0h+var_3E4]
000000014019ED81  inc     eax
000000014019ED83  mov     [rbp+3F0h+var_3E4], eax
000000014019ED86  mov     eax, [rbp+3F0h+var_3EC]
000000014019ED89  cmp     [rbp+3F0h+var_3E4], eax
000000014019ED8C  jl      loc_14019EC50
000000014019ED92  cmp     [rbp+3F0h+18var_214var_210var_20Cvar_208var_204var_20], 0
000000014019ED96  jz      short loc_14019EDCC
000000014019ED98  mov     [rbp+3F0h+var_3F0], 0
000000014019ED9F  jmp     short loc_14019EDA9
000000014019EDA1  mov     eax, [rbp+3F0h+var_3F0]
000000014019EDA4  inc     eax
000000014019EDA6  mov     [rbp+3F0h+var_3F0], eax
000000014019EDA9  mov     eax, [rbp+3F0h+var_3EC]
000000014019EDAC  imul    eax, [rbp+3F0h+var_3E8]
000000014019EDB0  cmp     [rbp+3F0h+var_3F0], eax
000000014019EDB3  jge     short loc_14019EDCC
000000014019EDB5  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019EDB9  mov     rcx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EDBD  movss   xmm0, cs:dword_1402833A0
000000014019EDC5  movss   dword ptr [rcx+rax*4], xmm0
000000014019EDCA  jmp     short loc_14019EDA1
000000014019EDCC  mov     rax, [rbp+3F0h+]
000000014019EDD3  mov     ecx, [rbp+3F0h+FCvar_2F8var_2F4var_2F0var_2E8var_2E0var_2D]
000000014019EDD6  mov     [rax+6Ch], ecx
000000014019EDD9  mov     rax, [rbp+3F0h+]
000000014019EDE0  movss   xmm0, [rbp+3F0h+var_A0]
000000014019EDE8  movss   dword ptr [rax+70h], xmm0
000000014019EDED  mov     rax, [rbp+3F0h+]
000000014019EDF4  mov     ecx, [rbp+3F0h+var_EC]
000000014019EDFA  mov     [rax+74h], ecx
000000014019EDFD  cmp     [rbp+3F0h+var_3D4], 2
000000014019EE01  jnz     short loc_14019EE41
000000014019EE03  cmp     [rbp+3F0h+var_3EC], 1
000000014019EE07  jnz     short loc_14019EE41
000000014019EE09  movsxd  rax, [rbp+3F0h+var_3E8]
000000014019EE0D  movsxd  rcx, [rbp+3F0h+var_3E8]
000000014019EE11  mov     rdx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EE15  lea     rcx, [rdx+rcx*4]
000000014019EE19  sub     rcx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EE1D  sar     rcx, 2
000000014019EE21  imul    rcx, 0
000000014019EE25  lea     rax, [rcx+rax*4]
000000014019EE29  movsxd  rcx, [rbp+3F0h+var_3E8]
000000014019EE2D  mov     rdx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EE31  lea     rcx, [rdx+rcx*4]
000000014019EE35  mov     r8, rax
000000014019EE38  mov     rdx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EE3C  call    1401FC920h
000000014019EE41  cmp     [rbp+3F0h+var_3BC], 0
000000014019EE45  jnz     short loc_14019EEC4
000000014019EE47  mov     eax, [rbp+3F0h+var_3D4]
000000014019EE4A  imul    eax, [rbp+3F0h+var_3E8]
000000014019EE4E  cdqe
000000014019EE50  mov     rcx, [rbp+3F0h+var_104]
000000014019EE57  mov     rdx, [rbp+3F0h+]
000000014019EE5E  sub     rdx, rcx
000000014019EE61  mov     rcx, rdx
000000014019EE64  sar     rcx, 2
000000014019EE68  imul    rcx, 0
000000014019EE6C  lea     rax, [rcx+rax*4]
000000014019EE70  mov     r8, rax
000000014019EE73  mov     rdx, [rbp+3F0h+var_104]
000000014019EE7A  mov     rcx, [rbp+3F0h+]
000000014019EE81  call    1401FC920h
000000014019EE86  mov     eax, [rbp+3F0h+var_3D4]
000000014019EE89  imul    eax, [rbp+3F0h+var_3E8]
000000014019EE8D  cdqe
000000014019EE8F  mov     rcx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EE93  mov     rdx, [rbp+3F0h+var_104]
000000014019EE9A  sub     rdx, rcx
000000014019EE9D  mov     rcx, rdx
000000014019EEA0  sar     rcx, 2
000000014019EEA4  imul    rcx, 0
000000014019EEA8  lea     rax, [rcx+rax*4]
000000014019EEAC  mov     r8, rax
000000014019EEAF  mov     rdx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EEB3  mov     rcx, [rbp+3F0h+var_104]
000000014019EEBA  call    1401FC920h
000000014019EEBF  jmp     loc_14019EF4C
000000014019EEC4  mov     [rbp+3F0h+var_3F0], 0
000000014019EECB  jmp     short loc_14019EED5
000000014019EECD  mov     eax, [rbp+3F0h+var_3F0]
000000014019EED0  inc     eax
000000014019EED2  mov     [rbp+3F0h+var_3F0], eax
000000014019EED5  mov     eax, [rbp+3F0h+var_3D4]
000000014019EED8  imul    eax, [rbp+3F0h+var_3E8]
000000014019EEDC  cmp     [rbp+3F0h+var_3F0], eax
000000014019EEDF  jge     short loc_14019EF4C
000000014019EEE1  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019EEE5  mov     rcx, [rbp+3F0h+var_104]
000000014019EEEC  movss   xmm0, dword ptr [rcx+rax*4]
000000014019EEF1  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019EEF5  mov     rcx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EEF9  movss   xmm1, dword ptr [rcx+rax*4]
000000014019EEFE  comiss  xmm1, xmm0
000000014019EF01  jbe     short loc_14019EF1D
000000014019EF03  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019EF07  mov     rcx, [rbp+3F0h+var_104]
000000014019EF0E  movss   xmm0, dword ptr [rcx+rax*4]
000000014019EF13  movss   [rbp+3F0h+], xmm0
000000014019EF1B  jmp     short loc_14019EF32
000000014019EF1D  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019EF21  mov     rcx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EF25  movss   xmm0, dword ptr [rcx+rax*4]
000000014019EF2A  movss   [rbp+3F0h+], xmm0
000000014019EF32  movsxd  rax, [rbp+3F0h+var_3F0]
000000014019EF36  mov     rcx, [rbp+3F0h+var_104]
000000014019EF3D  movss   xmm0, [rbp+3F0h+]
000000014019EF45  movss   dword ptr [rcx+rax*4], xmm0
000000014019EF4A  jmp     short loc_14019EECD
000000014019EF4C  mov     [rbp+3F0h+var_3E4], 0
000000014019EF53  mov     [rbp+3F0h+var_3F0], 0
000000014019EF5A  jmp     short loc_14019EF64
000000014019EF5C  mov     eax, [rbp+3F0h+var_3F0]
000000014019EF5F  inc     eax
000000014019EF61  mov     [rbp+3F0h+var_3F0], eax
000000014019EF64  mov     eax, [rbp+3F0h+var_3C4]
000000014019EF67  cmp     [rbp+3F0h+var_3F0], eax
000000014019EF6A  jge     short loc_14019EFC6
000000014019EF6C  mov     eax, [rbp+3F0h+var_3E4]
000000014019EF6F  imul    eax, [rbp+3F0h+var_3E8]
000000014019EF73  add     eax, [rbp+3F0h+var_3F0]
000000014019EF76  cdqe
000000014019EF78  mov     rcx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EF7C  xorps   xmm0, xmm0
000000014019EF7F  movss   dword ptr [rcx+rax*4], xmm0
000000014019EF84  mov     eax, [rbp+3F0h+var_3E4]
000000014019EF87  imul    eax, [rbp+3F0h+var_3E8]
000000014019EF8B  add     eax, [rbp+3F0h+var_3F0]
000000014019EF8E  cdqe
000000014019EF90  mov     rcx, [rbp+3F0h+]
000000014019EF97  movss   xmm0, cs:dword_1402833A0
000000014019EF9F  movss   dword ptr [rcx+rax*4], xmm0
000000014019EFA4  mov     eax, [rbp+3F0h+var_3E4]
000000014019EFA7  imul    eax, [rbp+3F0h+var_3E8]
000000014019EFAB  add     eax, [rbp+3F0h+var_3F0]
000000014019EFAE  cdqe
000000014019EFB0  mov     rcx, [rbp+3F0h+var_104]
000000014019EFB7  movss   xmm0, cs:dword_1402833A0
000000014019EFBF  movss   dword ptr [rcx+rax*4], xmm0
000000014019EFC4  jmp     short loc_14019EF5C
000000014019EFC6  mov     eax, [rbp+3F0h+var_3DC]
000000014019EFC9  mov     [rbp+3F0h+var_3F0], eax
000000014019EFCC  jmp     short loc_14019EFD6
000000014019EFCE  mov     eax, [rbp+3F0h+var_3F0]
000000014019EFD1  inc     eax
000000014019EFD3  mov     [rbp+3F0h+var_3F0], eax
000000014019EFD6  mov     eax, [rbp+3F0h+var_3E8]
000000014019EFD9  cmp     [rbp+3F0h+var_3F0], eax
000000014019EFDC  jge     short loc_14019F038
000000014019EFDE  mov     eax, [rbp+3F0h+var_3E4]
000000014019EFE1  imul    eax, [rbp+3F0h+var_3E8]
000000014019EFE5  add     eax, [rbp+3F0h+var_3F0]
000000014019EFE8  cdqe
000000014019EFEA  mov     rcx, [rbp+3F0h+var_1FCvar_1F8var_1F4var_1F0var_1ECvar_1E]
000000014019EFEE  xorps   xmm0, xmm0
000000014019EFF1  movss   dword ptr [rcx+rax*4], xmm0
000000014019EFF6  mov     eax, [rbp+3F0h+var_3E4]
000000014019EFF9  imul    eax, [rbp+3F0h+var_3E8]
000000014019EFFD  add     eax, [rbp+3F0h+var_3F0]
000000014019F000  cdqe
000000014019F002  mov     rcx, [rbp+3F0h+]
000000014019F009  movss   xmm0, cs:dword_1402833A0
000000014019F011  movss   dword ptr [rcx+rax*4], xmm0
000000014019F016  mov     eax, [rbp+3F0h+var_3E4]
000000014019F019  imul    eax, [rbp+3F0h+var_3E8]
000000014019F01D  add     eax, [rbp+3F0h+var_3F0]
000000014019F020  cdqe
000000014019F022  mov     rcx, [rbp+3F0h+var_104]
000000014019F029  movss   xmm0, cs:dword_1402833A0
000000014019F031  movss   dword ptr [rcx+rax*4], xmm0
000000014019F036  jmp     short loc_14019EFCE
000000014019F038  mov     eax, [rbp+3F0h+var_3E4]
000000014019F03B  inc     eax
000000014019F03D  mov     [rbp+3F0h+var_3E4], eax
000000014019F040  mov     eax, [rbp+3F0h+var_3D4]
000000014019F043  cmp     [rbp+3F0h+var_3E4], eax
000000014019F046  jl      loc_14019EF53
000000014019F04C  cmp     [rbp+3F0h+var_3BC], 0
000000014019F050  jnz     short loc_14019F05B
000000014019F052  cmp     [rbp+3F0h+], 0
000000014019F059  jz      short loc_14019F073
000000014019F05B  mov     rax, [rbp+3F0h+]
000000014019F062  mov     eax, [rax+78h]
000000014019F065  inc     eax
000000014019F067  mov     rcx, [rbp+3F0h+]
000000014019F06E  mov     [rcx+78h], eax
000000014019F071  jmp     short loc_14019F081
000000014019F073  mov     rax, [rbp+3F0h+]
000000014019F07A  mov     dword ptr [rax+78h], 0
000000014019F081  mov     rax, [rbp+3F0h+]
000000014019F088  mov     rcx, [rbp+3F0h+]
000000014019F08F  mov     ecx, [rcx+20h]
000000014019F092  mov     [rax+50h], ecx
000000014019F095  mov     rcx, [rbp+3F0h+]
000000014019F09C  call    sub_14019A9C0
000000014019F0A1  mov     rcx, [rbp+3F0h+]
000000014019F0A8  call    unknown_libname_997
000000014019F0AD  test    eax, eax
000000014019F0AF  jz      short loc_14019F0BA
000000014019F0B1  mov     eax, 0FFFFFFFDh
000000014019F0B6  jmp     short loc_14019F0C0
000000014019F0B8  jmp     short loc_14019F0C0
000000014019F0BA  mov     eax, [rbp+3F0h+]
000000014019F0C0  mov     rcx, [rbp+3F0h+]
000000014019F0C7  xor     rcx, rbp
000000014019F0CA  call    1401F8B20h
000000014019F0CF  lea     rsp, [rbp+3F0h]
000000014019F0D6  pop     rbp
000000014019F0D7  retn
