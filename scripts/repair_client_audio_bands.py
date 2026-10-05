"""Recover CELT band allocation scratch, result ABI, and caller scratch argument."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in [(0x1b12c1,'488d44242048894508'),(0x1b1302,'488d44242048894548'),
        (0x1b14d0,'488d44242048894520'),(0x1b1509,'488d442420488985e0000000'),
        (0x1b2721,'f30f104528'),(0x1b2730,'e8eb630400488da5f00000005dc3'),
        (0x19d3e4,'488b8d6803000048898c24a0000000'),(0x19d4be,'e88d3d0100f30f118540030000')]:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native bands changed at '+hex(rva))
    marker=b'//----- (00000001401B1250)'
    a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in [(b'v38 = &i;',b'v38 = (int *)v22;'),(b'v49 = &i;',b'v49 = (int *)v24;'),
        (b'p_i = (     __m128i *)&i;',b'p_i = (__m128i *)v26;'),(b'v85 = (__m128i *)&i;',b'v85 = (__m128i *)v28;'),
        (b'return sub_1401F8B20((unsigned __int64)&i ^ v86);',b'return v42; /* native XMM0 maximum spectral level */'),
        (b'-31.9;',b'-31.9f;'),(b'0.0062000002 *',b'0.0062000002f *')]:
        if body.count(old)!=1:raise ValueError('Band expression changed: '+repr(old))
        body=body.replace(old,new)
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_1401B1250('
    if source.count(sig)!=2:raise ValueError('Band signature changed')
    source=source.replace(sig,b'float              sub_1401B1250(')
    marker=b'//----- (000000014019B2E0)'
    a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in [(b'      sub_1401B1250(',b'      v238 = sub_1401B1250('),
        (b'        (__int64)v242,\n        (__int64)&j);\n      v238 = *(float *)&v11;',b'        (__int64)v242,\n        (__int64)v243);')]:
        if body.count(old)!=1:raise ValueError('Band caller changed: '+repr(old))
        body=body.replace(old,new)
    source=source[:a]+body+source[b:]
    source,extra=repair_downstream(source,pe)
    source,energy=repair_energy(source,pe)
    extra.update(energy)
    source,scan=repair_bit_scan(source,pe)
    extra.update(scan)
    source,partition=repair_partition(source,pe)
    extra.update(partition)
    return source,dict(recovered_audio_band_scratch=4,recovered_audio_band_returns=1,recovered_audio_band_result_calls=1,recovered_audio_band_scratch_calls=1,**extra)

def repair_downstream(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    # Native allocation LEA, destination slot, and matching export pointer.
    groups=[('1401AF4F0',[(0x1af5ab,'488d44242048894520','v42','(int *)v12'),
        (0x1af619,'488d44242048894540','v49','(__m128i *)v15'),
        (0x1af687,'488d44242048898580000000','v63','(__m128i *)v18'),
        (0x1af6c3,'488d442420488985a8000000','v71','(int *)v20'),
        (0x1af6ff,'488d442420488985a0000000','v70','(int *)v22')],b'&i ^ v81',b'v41',0x1b00e6,'8b451c',b'int'),
        ('1401A29F0',[(0x1a2b4c,'488d8424c000000048898590000000','v61','(int *)v20'),
        (0x1a2b88,'488d8424c000000048898588000000','v60','(int *)v22'),
        (0x1a2bc4,'488d8424c000000048898580000000','v59','(int *)v24'),
        (0x1a2c00,'488d8424c000000048894528','v38','(int *)v26')],b'&i ^ v62',b'v57',0x1a329e,'8b4578',b'int'),
        ('1401A4050',[(0x1a41f1,'488d44246048898508020000','v125','(int *)v24'),
        (0x1a42be,'488d44246048898500020000','v124','(__m128i *)v26'),
        (0x1a4342,'488d44246048898590000000','v70','(int *)v28'),
        (0x1a437b,'488d44246048898598000000','v71','(int *)v30'),
        (0x1a43b4,'488d44246048898500010000','v95','(int *)v32'),
        (0x1a43ed,'488d44246048898508010000','v96','(int *)v34'),
        (0x1a4426,'488d44246048898510010000','v97','(int *)v36')],b'&i ^ v131',b'',0x1a56f7,'e824340500488da5300800005f5e5dc3',b'void')]
    import re
    for name,bindings,cookie,result,rva,code,return_type in groups:
        marker=('//----- (0000000'+name+')').encode();a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
        for address,code_bytes,pointer,value in bindings:
            if pe.get_data(address,len(bytes.fromhex(code_bytes)))!=bytes.fromhex(code_bytes):raise ValueError('Native codec allocation changed at '+hex(address))
            pattern=rb'\b'+pointer.encode()+rb' = (?:\([^;]*?\))?&i;'
            body,n=re.subn(pattern,(pointer+' = '+value+';').encode(),body)
            if n!=1:raise ValueError('Codec scratch binding changed: '+name+'/'+pointer)
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native codec result changed at '+hex(rva))
        old=b'return sub_1401F8B20((unsigned __int64)'+cookie+b');'
        if body.count(old)!=1:raise ValueError('Codec result changed: '+name)
        body=body.replace(old,b'return '+result+b'; /* original result ABI */')
        if name=='1401A4050':
            if body.count(b'v50 = &i;')!=1 or body.count(b'v92 = &i +')!=1:raise ValueError('Residual band base changed')
            body=body.replace(b'v50 = &i;',b'v50 = v125;').replace(b'v92 = &i +',b'v92 = v125 +')
        source=source[:a]+body+source[b:]
        sig=('__int64            sub_'+name+'(').encode()
        if source.count(sig)!=2:raise ValueError('Codec signature changed: '+name)
        source=source.replace(sig,return_type+b' '*(19-len(return_type))+('sub_'+name+'(').encode())
    return source,dict(recovered_audio_tf_scratch=5,recovered_audio_tf_returns=1,recovered_audio_bit_allocation_scratch=4,recovered_audio_bit_allocation_returns=1,recovered_audio_quantization_scratch=7,recovered_audio_quantization_derived_pointers=2,recovered_audio_quantization_void_exits=1)

def repair_energy(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in [(0x1a71f6,'488d84248000000048894520'),(0x1a7240,'488d84248000000048894538'),
        (0x1a73ed,'488d84248000000048894540'),(0x1a76f9,'e822140500488da5d00000005f5e5dc3')]:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native energy layout changed at '+hex(rva))
    marker=b'//----- (00000001401A6FC0)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in [(b'v30 = &v26;',b'v30 = (__m128i *)v18;'),(b'v35 = &v26;',b'v35 = (__m128i *)v20;'),
        (b'v36 = &v26;',b'v36 = (__m128i *)v23;'),(b'sub_1401FC920(&v26, v37,',b'sub_1401FC920(v36, v37,'),
        (b'return sub_1401F8B20((unsigned __int64)&v26 ^ v42);',b'return; /* original void energy quantizer */')]:
        if body.count(old)!=1:raise ValueError('Energy expression changed: '+repr(old))
        body=body.replace(old,new)
    source=source[:a]+body+source[b:];sig=b'__int64            sub_1401A6FC0('
    if source.count(sig)!=2:raise ValueError('Energy signature changed')
    return source.replace(sig,b'void               sub_1401A6FC0('),dict(recovered_audio_energy_scratch=3,recovered_audio_energy_backup_arguments=1,recovered_audio_energy_void_exits=1)

def repair_bit_scan(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    code=bytes.fromhex('894c24084883ec188b4424200fbdc08904248b04244883c418c3')
    if pe.get_data(0x19a020,len(code))!=code:raise ValueError('Native bit scan changed')
    marker=b'//----- (000000014019A020)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    old=b'  unsigned int v1; // eax\n  __int64 result; // rax\n\n  _BitScanReverse((unsigned int *)&result, a1);\n  return v1;'
    if body.count(old)!=1:raise ValueError('Bit scan export changed')
    body=body.replace(old,b'  unsigned long result = a1;\n  _BitScanReverse(&result, a1);\n  return (unsigned int)result; /* native EAX bit index, not an unrelated local */')
    source=source[:a]+body+source[b:];sig=b'__int64            sub_14019A020('
    if source.count(sig)!=2:raise ValueError('Bit scan signature changed')
    return source.replace(sig,b'unsigned int       sub_14019A020('),dict(recovered_audio_bit_scan_results=1)

def repair_partition(source,pe=None):
    """Restore the six-int theta result and the recursive collapse-mask return."""
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in [(0x1ab758,'488d9424f8000000'),(0x1ab768,'e823f0ffff'),
        (0x1ab2f5,'8908'),(0x1ab303,'894804'),(0x1ab312,'894808'),
        (0x1ab321,'89480c'),(0x1ab330,'894810'),(0x1ab342,'894814'),
        (0x1ac035,'8b442460488b8c24100100004833cce8d7ca0400'),
        (0x278068,'00000038')]:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native partition changed at '+hex(rva))
    import re
    marker=b'//----- (00000001401AB510)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    declaration=rb'  BOOL v43;[^\n]*\n(?:  int v4[4-8];[^\n]*\n){5}'
    body,n=re.subn(declaration,b'  int theta[6]; /* native contiguous output at frame F8..10C */\n',body)
    if n!=1:raise ValueError('Partition theta declaration changed')
    for index in range(6):body=re.sub(rb'\bv'+str(43+index).encode()+rb'\b',('theta['+str(index)+']').encode(),body)
    old=b'return sub_1401F8B20((unsigned __int64)v10 ^ v49);'
    if body.count(old)!=1:raise ValueError('Partition result changed')
    body=body.replace(old,b'return v11; /* native EAX collapse mask */').replace(b'0.000030517578 *',b'0x1p-15f *')
    source=source[:a]+body+source[b:];sig=b'__int64            sub_1401AB510('
    if source.count(sig)!=2:raise ValueError('Partition signature changed')
    return source.replace(sig,b'unsigned int       sub_1401AB510('),dict(recovered_audio_partition_structs=1,recovered_audio_partition_returns=1,recovered_audio_partition_constants=2)
