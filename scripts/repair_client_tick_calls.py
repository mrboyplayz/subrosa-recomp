"""Restore the simulation tick's integer argument and result at main-loop callers."""
from repair_client_menu_actions import pinned_pe,region,check


def repair(source):
    pe=pinned_pe()
    check(pe,0x98d23,'b901000000')
    calls=(0x98d2a,0x98d49,0x98d65,0x98d7e,0x98d9d,0x98dd5,
           0x98dee,0x98e0d,0x98e25,0x98e4a,0x98e66,0x98e86,0x98e99)
    for rva in calls:
        raw=pe.get_data(rva,5)
        if raw[0]!=0xe8 or rva+5+int.from_bytes(raw[1:],'little',signed=True)!=0x3b920:
            raise ValueError('Native tick call target changed')
    for rva in (0x98d2f,0x98d4e,0x98d83,0x98da2,0x98df3,0x98e12,0x98e6b,0x98e8b):
        check(pe,rva,'85c0')
    for rva in (0x98d42,0x98d60,0x98d96,0x98dd0,0x98e06,0x98e20,0x98e45,0x98e7f,0x98e94):
        check(pe,rva,'b901000000')
    # The four first calls share ECX=1 across comparisons and branches; all
    # repeat calls reload ECX. EAX is the Boolean tested immediately after.
    old=b'void sub_14003B920()'
    if source.count(old)!=2:raise ValueError('Tick signature inventory changed')
    source=source.replace(old,b'int sub_14003B920(int process_input)')
    a,b,body=region(source,0x96440)
    old=b'sub_14003B920();'
    if body.count(old)!=13:raise ValueError('Main-loop tick call inventory changed')
    outputs=('v169','v170',None,'v172','v173',None,'v179','v180',None,'v175','v176',None,None)
    for output in outputs:
        call=(output+' = ' if output else '')+'sub_14003B920(1);'
        body=body.replace(old,call.encode(),1)
    return source[:a]+body+source[b:],{'recovered_tick_input_arguments':13,'recovered_tick_boolean_results':8}
