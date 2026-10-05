"""Recover correlation result storage and autocorrelation scratch/void exits."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in [(0x1a9d04,'4c8d442428'),(0x1a9df4,'488b4c24384833cce81fed04004883c448c3'),
        (0x1ae003,'482be0488d442430'),(0x1ae1bc,'e85fa90400488d65305dc3')]:
        expected=bytes.fromhex(code)
        if pe.get_data(rva,len(expected))!=expected:raise ValueError('Native correlation changed at '+hex(rva))
    marker=b'//----- (00000001401A9C80)'
    a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in [
        (b'  int v9; // [rsp+28h] [rbp-20h] BYREF\n  int v10; // [rsp+2Ch] [rbp-1Ch]\n  int v11; // [rsp+30h] [rbp-18h]\n  int v12; // [rsp+34h] [rbp-14h]',b'  float result4[4]; /* native contiguous +28..+37 result vector */'),
        (b'    v9 = 0;\n    v10 = 0;\n    v11 = 0;\n    v12 = 0;',b'    result4[0] = result4[1] = result4[2] = result4[3] = 0.0f;'),
        (b'(float *)&v9',b'result4'),
        (b'*(_DWORD *)(a3 + 4LL * i) = v9;',b'*(float *)(a3 + 4LL * i) = result4[0];'),
        (b'*(_DWORD *)(a3 + 4LL * (i + 1)) = v10;',b'*(float *)(a3 + 4LL * (i + 1)) = result4[1];'),
        (b'*(_DWORD *)(a3 + 4LL * (i + 2)) = v11;',b'*(float *)(a3 + 4LL * (i + 2)) = result4[2];'),
        (b'*(_DWORD *)(a3 + 4LL * (i + 3)) = v12;',b'*(float *)(a3 + 4LL * (i + 3)) = result4[3];'),
        (b'return sub_1401F8B20((unsigned __int64)&v6 ^ v13);',b'return; /* original void epilogue; compiler cookie is not a result */')]:
        if body.count(old)!=1:raise ValueError('Correlation expression changed: '+repr(old))
        body=body.replace(old,new)
    source=source[:a]+body+source[b:]
    marker=b'//----- (00000001401ADFA0)'
    a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in [(b'v14 = (float *)&i;',b'v14 = (float *)v7; /* original dynamic allocation, not frame counter */'),
        (b'return sub_1401F8B20((unsigned __int64)&i ^ v16);',b'return; /* original void epilogue */')]:
        if body.count(old)!=1:raise ValueError('Autocorrelation expression changed: '+repr(old))
        body=body.replace(old,new)
    source=source[:a]+body+source[b:]
    for name in ['1401A9C80','1401ADFA0']:
        signature=('__int64            sub_'+name+'(').encode()
        if source.count(signature)!=2:raise ValueError('Correlation signature inventory changed')
        source=source.replace(signature,('void               sub_'+name+'(').encode())
    source,extra=repair_downsample(source,pe)
    source,pitch=repair_pitch(source,pe)
    extra.update(pitch)
    source,doubling=repair_pitch_doubling(source,pe)
    extra.update(doubling)
    source,transient=repair_transient(source,pe)
    extra.update(transient)
    source,fft=repair_fft(source,pe)
    extra.update(fft)
    return source,dict(recovered_audio_correlation_vectors=1,recovered_audio_correlation_scratch=1,recovered_audio_correlation_void_exits=2,**extra)

def repair_downsample(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    expected=bytes.fromhex('e8fa0305004881c4a8000000c3')
    if pe.get_data(0x1a8721,len(expected))!=expected:raise ValueError('Native downsample epilogue changed')
    for rva,code in [(0x2832bc,'4703803f'),(0x283208,'6f12033c'),(0x2783bc,'6666663f'),(0x2783b0,'cdcc4c3f')]:
        if pe.get_data(rva,4)!=bytes.fromhex(code):raise ValueError('Native downsample constant changed at '+hex(rva))
    marker=b'//----- (00000001401A8190)'
    a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    old=b'return sub_1401F8B20((unsigned __int64)v6 ^ v13);'
    if body.count(old)!=1:raise ValueError('Downsample return changed')
    body=body.replace(old,b'return; /* original void downsample/filter */')
    import re
    for number in [b'1.0001',b'0.0080000004',b'0.89999998',b'0.80000001',b'0.5']:
        body=re.sub(rb'(?<![\w.])'+re.escape(number)+rb'(?![\w.])',number+b'f',body)
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_1401A8190('
    if source.count(sig)!=2:raise ValueError('Downsample signature inventory changed')
    return source.replace(sig,b'void               sub_1401A8190('),dict(recovered_audio_downsample_void_exits=1,recovered_audio_downsample_float_constants=5)

def repair_pitch(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in [(0x1a87bb,'488d44243048894540'),(0x1a87f5,'488d44243048894538'),
        (0x1a882e,'488d44243048894518'),(0x1a88e9,'488d5508'),
        (0x1a8b1f,'e8fcff0400488d65505dc3'),(0x278388,'3333333f')]:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native pitch changed at '+hex(rva))
    marker=b'//----- (00000001401A8740)'
    a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in [(b'v25 = (float *)&i;',b'v25 = (float *)v6;'),(b'v24 = &i;',b'v24 = (int *)v8;'),
        (b'v17 = &i;',b'v17 = (int *)v10;'),
        (b'  signed int v14; // [rsp+38h] [rbp+8h] BYREF\n  int v15; // [rsp+3Ch] [rbp+Ch]',b'  int best_pitch[2]; /* native contiguous +8/+c pair */'),
        (b'&v14',b'best_pitch'),
        (b'0.69999999',b'0.69999999f'),
        (b'return sub_1401F8B20((unsigned __int64)&i ^ v26);',b'return; /* original void pitch search */')]:
        if body.count(old)==0:raise ValueError('Pitch expression changed: '+repr(old))
        body=body.replace(old,new)
    import re
    body=re.sub(rb'\bv14\b',b'best_pitch[0]',body)
    body=re.sub(rb'\bv15\b',b'best_pitch[1]',body)
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_1401A8740('
    if source.count(sig)!=2:raise ValueError('Pitch signature inventory changed')
    return source.replace(sig,b'void               sub_1401A8740('),dict(recovered_audio_pitch_scratch=3,recovered_audio_pitch_result_pairs=1,recovered_audio_pitch_void_exits=1)

def repair_pitch_doubling(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in [(0x1a8c45,'488d44243048894560'),(0x1a9277,'f30f10452c'),
        (0x1a9286,'e895f80400488da5900000005dc3'),(0x1b2a4f,'e8dc60fffff30f114508'),
        (0x1b327e,'8b4544488b8da0000000')]:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native pitch gain changed at '+hex(rva))
    marker=b'//----- (00000001401A8B30)'
    a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in [(b'v35 = &j;',b'v35 = (int *)v8;'),
        (b'return sub_1401F8B20((unsigned __int64)&j ^ v38);',b'return v22; /* native XMM0 pitch gain */')]:
        if body.count(old)!=1:raise ValueError('Pitch gain expression changed: '+repr(old))
        body=body.replace(old,new)
    import re
    for number in [b'0.5',b'0.69999999',b'0.30000001',b'0.89999998',b'0.85000002',b'0.40000001',b'1.0']:
        body=re.sub(rb'(?<![\w.])'+re.escape(number)+rb'(?![\w.])',number+b'f',body)
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_1401A8B30('
    if source.count(sig)!=2:raise ValueError('Pitch gain signature inventory changed')
    source=source.replace(sig,b'float              sub_1401A8B30(')
    marker=b'//----- (00000001401B2750)'
    a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    old=b'    sub_1401A8B30((__int64)v38, 1024, 15, a5, &v28, *((_DWORD *)a1 + 27), v16);\n    v26 = v16;'
    if body.count(old)!=1:raise ValueError('Prefilter pitch gain call changed')
    body=body.replace(old,b'    v26 = sub_1401A8B30((__int64)v38, 1024, 15, a5, &v28, *((_DWORD *)a1 + 27), v16);')
    old=b'return sub_1401F8B20((unsigned __int64)&v24 ^ v49);'
    if body.count(old)!=1:raise ValueError('Prefilter return changed')
    body=body.replace(old,b'return v37; /* native EAX filter-enabled result */')
    source=source[:a]+body+source[b:]
    return source,dict(recovered_audio_pitch_gain_scratch=1,recovered_audio_pitch_gain_returns=1,recovered_audio_prefilter_gain_calls=1,recovered_audio_prefilter_returns=1)

def repair_transient(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in [(0x1ae58c,'488d44242048894510'),(0x1aeb6d,'8b4534'),(0x1aeb7a,'e8a19f0400488da5900000005dc3')]:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native transient changed at '+hex(rva))
    marker=b'//----- (00000001401AE510)'
    a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in [(b'v17 = &j;',b'v17 = (int *)v8;'),
        (b'return sub_1401F8B20((unsigned __int64)&j ^ v41);',b'return v25; /* native EAX transient decision */')]:
        if body.count(old)!=1:raise ValueError('Transient expression changed: '+repr(old))
        body=body.replace(old,new)
    import re
    for number in [b'2.0',b'0.5',b'0.125',b'1.0e-15',b'64.0',b'42.0',b'0.0068999999']:
        # The sqrt energy scaling uses a native double 0.5; preserve that site.
        if number==b'0.5':body=body.replace(b'(float)(0.5 * v27)',b'(float)(0.5f * v27)');continue
        body=re.sub(rb'(?<![\w.])'+re.escape(number)+rb'(?![\w.])',number+b'f',body)
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_1401AE510('
    if source.count(sig)!=2:raise ValueError('Transient signature inventory changed')
    return source.replace(sig,b'int                sub_1401AE510('),dict(recovered_audio_transient_scratch=1,recovered_audio_transient_returns=1)

def repair_fft(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    routines=[('1401B6640','CGlobalUtils__SetNewParent',b'&i ^ v31',0x1b6f7e,'e89d1b04004881c488000000c3'),
        ('1401B6FA0','sub_1401B6FA0',b'&i ^ v22',0x1b74fc,'e81f1604004883c478c3'),
        ('1401B7510','sub_1401B7510',b'&j ^ v43',0x1b7f6c,'e8af0b04004881c4e8000000c3'),
        ('1401A15A0','sub_1401A15A0',b'&v3 ^ v16',0x1a184d,'e8ce7205004881c498000000c3')]
    for address,name,cookie,rva,code in routines:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native FFT exit changed at '+hex(rva))
        marker=('//----- (0000000'+address+')').encode()
        a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
        old=b'return sub_1401F8B20((unsigned __int64)'+cookie+b');'
        if body.count(old)!=1:raise ValueError('FFT exit changed: '+name)
        body=body.replace(old,b'return; /* original void FFT stage */')
        source=source[:a]+body+source[b:]
        sig=('__int64            '+name+'(').encode()
        if source.count(sig)!=2:raise ValueError('FFT signature changed: '+name)
        source=source.replace(sig,('void               '+name+'(').encode())
    source,wrapper=repair_fft_wrapper(source)
    source,mdct=repair_mdct(source,pe)
    return source,dict(recovered_audio_fft_void_exits=4,**wrapper,**mdct)

def repair_fft_wrapper(source):
    old=b'  return sub_1401A15A0(a1, a3);'
    if source.count(old)!=1:raise ValueError('FFT wrapper tail changed')
    source=source.replace(old,b'  sub_1401A15A0(a1, a3);\n  return; /* void FFT wrapper */')
    sig=b'__int64            sub_1401A13C0('
    if source.count(sig)!=2:raise ValueError('FFT wrapper signature changed')
    return source.replace(sig,b'void               sub_1401A13C0('),dict(recovered_audio_fft_wrapper_void_exits=1)

def repair_mdct(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in [(0x1a194c,'488d442420488985b0000000'),(0x1a1985,'488d44242048898598000000'),
        (0x1a1f3b,'e8e06b0500488da5d00000005dc3')]:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native MDCT changed at '+hex(rva))
    marker=b'//----- (00000001401A1860)'
    a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in [(b'p_i = &i;',b'p_i = (int *)v8;'),(b'v36 = (CGlobalUtils *)&i;',b'v36 = (CGlobalUtils *)v10;'),
        (b'return sub_1401F8B20((unsigned __int64)&i ^ v41);',b'return; /* native void MDCT */')]:
        if body.count(old)!=1:raise ValueError('MDCT expression changed: '+repr(old))
        body=body.replace(old,new)
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_1401A1860('
    if source.count(sig)!=2:raise ValueError('MDCT signature changed')
    return source.replace(sig,b'void               sub_1401A1860('),dict(recovered_audio_mdct_scratch=2,recovered_audio_mdct_void_exits=1)
