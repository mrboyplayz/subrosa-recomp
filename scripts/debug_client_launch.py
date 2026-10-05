"""Bounded GDB/MI client launch; record crashes and progress past startup swaps."""
import argparse
import json
import os
from pathlib import Path
import queue
import re
import subprocess
import struct
import threading
import time

PROJECT=Path(__file__).resolve().parent.parent


def main():
    parser=argparse.ArgumentParser()
    parser.add_argument('--directory',type=Path,required=True)
    parser.add_argument('--gdb-init',type=Path,help='diagnostic only: load a local GDB command file before launching')
    parser.add_argument('--gdb-menu',type=Path,help='diagnostic only: load a local GDB command file at the third menu swap')
    parser.add_argument('--reference',action='store_true',help='diagnostic comparison: launch the pinned original executable')
    parser.add_argument('--executable',type=Path,help='diagnostic only: use a particular rebuilt client instead of the directory copy')
    parser.add_argument('--startup-seconds',type=float,default=45)
    parser.add_argument('--frame-seconds',type=float,default=10)
    parser.add_argument('--cookie-mismatch',action='store_true',help='stop before a recovered security-cookie failure loses its caller stack')
    parser.add_argument('--keep-running',action='store_true',help='leave the launched client running after startup; no observation timeout')
    parser.add_argument('--detach-on-complete',action='store_true',help='detach after a completed bounded observation, leaving a healthy client running')
    parser.add_argument('--trace-menus',action='store_true',help='record the first entry into reported menu and Practice paths')
    parser.add_argument('--trace-frame-progress',action='store_true',help='count swap entries in batches of 120 after startup')
    parser.add_argument('--exercise-practice',action='store_true',help='integration test: return a pressed result once at the native Practice button boundary after menu startup')
    parser.add_argument('--exercise-menu',choices=['options','credits','join','copy-system-info','character'],help='integration test: exercise a menu action with button results controlled')
    parser.add_argument('--trace-gl',action='store_true',help='record the first eight entries of buffer uploads and vertex/draw API calls')
    parser.add_argument('--gl-start-world',action='store_true',help='arm graphics tracing at the world frame instead of startup assets')
    parser.add_argument('--gl-start-symbol',help='arm graphics tracing at a specific recovered function')
    parser.add_argument('--gl-query-buffers',action='store_true',help='diagnostic only: query current GL buffer bindings and sizes before traced multi-draws')
    parser.add_argument('--gl-capture-indices',action='store_true',help='diagnostic only: capture the first bound world element buffer through its GL readback API')
    parser.add_argument('--gl-debug-output',action='store_true',help='diagnostic only: load the local diagnostic DLL at world entry to record driver messages')
    parser.add_argument('--capture-frame',action='store_true',help='diagnostic only: capture a presented frame after the menu transition settles')
    parser.add_argument('--gl-wrap-draws',action='store_true',help='diagnostic only: synchronously log all world draw calls through the diagnostic DLL')
    parser.add_argument('--gl-stop-draw',type=int,help='diagnostic only: break before a numbered wrapped element draw')
    parser.add_argument('--gl-stop-array',type=int,help='diagnostic only: break before an element draw with this array buffer')
    parser.add_argument('--gl-stop-program',type=int,help='diagnostic only: restrict the array-buffer stop to this GL program')
    parser.add_argument('--gl-trace-limit',type=int,default=8,help='maximum entries per graphics API trace')
    parser.add_argument('--synchronize-gl-trace',action='store_true',help='diagnostic only: call GL finish before each traced multi-draw to narrow asynchronous driver failures')
    args=parser.parse_args();directory=args.directory.resolve()
    directory.mkdir(parents=True,exist_ok=True)
    if args.reference and (args.cookie_mismatch or args.trace_menus or args.gl_query_buffers or args.gl_capture_indices):parser.error('Reference launch supports native frame/Practice/GL boundaries, not rebuilt-symbol checks')
    if args.reference and args.exercise_menu not in (None,'character'):parser.error('Reference launch currently supports Practice and Character')
    if args.exercise_practice and args.exercise_menu:parser.error('Choose one menu exercise')
    if args.capture_frame and not (args.trace_gl and args.gl_debug_output):parser.error('Frame capture requires GL tracing and its diagnostic DLL')
    if args.reference and args.executable:parser.error('Reference comparison always uses the pinned original executable')
    actions={'options':['Options'],'credits':['Credits'],'join':['Join Game'],
             'copy-system-info':['Options','Copy System Info'],'character':['Character']}
    pending_actions=['Practice'] if args.exercise_practice else actions.get(args.exercise_menu,[]).copy()
    executable=PROJECT.parent/'subrosa.exe' if args.reference else args.executable.resolve() if args.executable else directory/'client-link-probe.exe'
    if args.reference:
        from repair_client_menu_actions import pinned_pe
        pinned_pe()
    if not executable.is_file():raise FileNotFoundError(executable)
    process=subprocess.Popen(['C:/Users/junin/mingw64/bin/gdb.exe','--interpreter=mi2','-q',str(executable)],
                             cwd=PROJECT.parent,stdin=subprocess.PIPE,stdout=subprocess.PIPE,
                             stderr=subprocess.STDOUT,text=True,encoding='utf-8',errors='replace',bufsize=1)
    output=queue.Queue()
    def reader():
        for line in process.stdout:output.put(line)
        output.put(None)
    threading.Thread(target=reader,daemon=True).start()
    token=0
    def send(command):
        nonlocal token
        token+=1;process.stdin.write(str(token)+command+'\n');process.stdin.flush()
        return token
    status={'executable':str(executable),'third_swap_reached':False,'status':'starting'}
    if args.reference:status['reference_executable']=True
    inferior_pid=None;reference_base=None
    menu_breakpoints={}
    menu_insert_tokens={}
    practice_insert_token=None
    practice_breakpoint=None
    action_label=None
    gl_insert_tokens={};gl_breakpoints={};gl_counts={}
    gl_read_tokens={};gl_events={}
    gl_start_token=None;gl_start_breakpoint=None;gl_armed=False
    frame_insert_token=None;frame_breakpoint=None
    def arm_gl():
        nonlocal gl_armed
        if gl_armed:return
        gl_armed=True
        for name,symbol in [('buffer-data','unk_140404190'),('buffer-subdata','qword_140404198'),('bind-buffer','qword_140404170'),('vertex','qword_1404044A8'),('multi-draw','unk_140404808'),('draw-elements','(*(void **)&flt_140384000[131076])'),('draw-arrays','qword_140302FF8')]:
            if args.reference:
                offset={'buffer-data':0x404190,'buffer-subdata':0x404198,'bind-buffer':0x404170,'vertex':0x4044a8,'multi-draw':0x404808,'draw-elements':0x404010,'draw-arrays':0x302ff8}[name]
                symbol='(*(void **)'+hex(reference_base+offset)+')'
            gl_insert_tokens[str(send('-break-insert '+json.dumps('*'+symbol)))]=name
    def arm_action():
        nonlocal practice_insert_token,action_label
        action_label=pending_actions.pop(0)
        encoded=(action_label+'\0').encode('ascii')
        prefix=int.from_bytes(encoded[:8],'little')
        # At this entry breakpoint the argument has not yet been spilled into
        # its DWARF stack slot. Use the Windows x64 argument register.
        condition='*(unsigned long long *)$rcx == '+hex(prefix)
        condition+=''.join(' && ((unsigned char *)$rcx)[%d] == %d'%(i,b) for i,b in enumerate(encoded[8:],8))
        button='*'+hex(reference_base+0x6f1f0) if args.reference else 'sr_DrawMenuButton'
        practice_insert_token=str(send('-break-insert -c "'+condition+'" '+button))
    deadline=time.monotonic()+args.startup_seconds;closing=False;requested_stop=None;detach_token=None
    with (directory/'live-debug.txt').open('w',encoding='utf-8') as log:
        def capture():
            nonlocal detach_token
            stopped=re.search(r'thread-id="(\d+)"',status.get('stop_record',''))
            if stopped:send('-thread-select '+stopped[1])
            send('-interpreter-exec console "bt 20"')
            if status.get('status') in ('crashed','cookie_mismatch'):
                send('-interpreter-exec console "info locals"')
            send('-interpreter-exec console "info registers rip rsp rcx rdx r8 r9 rax rbp rbx rsi rdi r12 r13 r14 r15"')
            send('-interpreter-exec console "x/8i $rip"')
            send('-interpreter-exec console "x/8gx $rbp"')
            send('-interpreter-exec console "info symbol *(unsigned long long *)($rbp + 8)"')
            if status.get('status')=='cookie_mismatch':
                send('-stack-select-frame 1')
                send('-interpreter-exec console "info args"')
                send('-interpreter-exec console "info locals"')
                send('-stack-select-frame 0')
            if 'func="sub_1401FC920"' in status.get('stop_record',''):
                send('-interpreter-exec console "x/4gx $rbp+0x5d0"')
                send('-interpreter-exec console "info symbol *(unsigned long long *)($rbp + 0x5d8)"')
            send('-break-list')
            if stopped and stopped[1]!='1':
                send('-thread-select 1')
                send('-interpreter-exec console "bt 20"')
                send('-interpreter-exec console "info args"')
                send('-interpreter-exec console "info locals"')
            if args.detach_on_complete and requested_stop=='observation_complete' and status['status']=='observation_complete':
                detach_token=str(send('-target-detach'))
            send('-gdb-exit')
        try:
            send('-gdb-set mi-async on');send('-gdb-set confirm off')
            send('-interpreter-exec console "set print elements 24"')
            send('-interpreter-exec console "set print thread-events off"')
            send('-break-insert -f SDL_GL_SwapWindow' if args.reference else '-break-insert sub_140198EF3');send('-break-after 1 2')
            if args.cookie_mismatch:
                send('-break-insert sub_1401F8B20')
                send('-break-condition 2 "$rcx != *(unsigned long long *)&_security_cookie"')
            if args.trace_menus:
                names=['ui_build_options_menu_candidate','SDL_SetClipboardText','sub_1400FCC90',
                       'sub_1400FD300','sub_1400CFC80','sub_140095B00','sub_140056980',
                       'sub_140027230','sub_140010110','sub_140124320','sub_14011FD00',
                       'sub_140094A90','sub_14011E210','sub_140123190']
                for name in names:
                    command_token=send('-break-insert '+name)
                    menu_insert_tokens[str(command_token)]=name
                status['menu_paths_entered']=[]
            if args.trace_gl and not args.reference:gl_start_token=str(send('-break-insert '+(args.gl_start_symbol or ('sub_14011FD00' if args.gl_start_world else 'sub_1400C2DB0'))))
            if args.gdb_init:
                send('-interpreter-exec console '+json.dumps('source '+args.gdb_init.resolve().as_posix()))
            send('-exec-run')
            while process.poll() is None or not output.empty():
                try:line=output.get(timeout=0.2)
                except queue.Empty:line=''
                if line is None:break
                if line:log.write(line);log.flush()
                started=re.search(r'=thread-group-started,.*pid="(\d+)"',line)
                if started:inferior_pid=int(started[1])
                insert=re.match(r'(\d+)\^done,bkpt=\{number="(\d+)"',line)
                if insert and insert[1] in menu_insert_tokens:
                    menu_breakpoints[insert[2]]=menu_insert_tokens.pop(insert[1])
                if insert and insert[1]==practice_insert_token:
                    practice_breakpoint=insert[2]
                if insert and insert[1] in gl_insert_tokens:
                    gl_breakpoints[insert[2]]=gl_insert_tokens.pop(insert[1])
                if insert and insert[1]==gl_start_token:gl_start_breakpoint=insert[2]
                if insert and insert[1]==frame_insert_token:frame_breakpoint=insert[2]
                failed=re.match(r'(\d+)\^error,',line)
                if failed and failed[1] in menu_insert_tokens:
                    status.setdefault('trace_setup_failures',[]).append(menu_insert_tokens.pop(failed[1]))
                if failed and failed[1] in gl_insert_tokens:
                    status.setdefault('trace_setup_failures',[]).append(gl_insert_tokens.pop(failed[1]))
                read_result=re.match(r'(\d+)\^(done|error)(.*)',line)
                if read_result and read_result[1]==detach_token:
                    status['detached_client_running']=read_result[2]=='done'
                    if read_result[2]=='error':status['detach_error']=read_result[3]
                if read_result and not closing and read_result[1] in gl_read_tokens:
                    event_id,field=gl_read_tokens.pop(read_result[1]);event=gl_events[event_id]
                    if field in ('target','size','pointer','draw-count'):
                        value=re.search(r'value="([^"]+)"',read_result[3])
                        if value:
                            number=re.match(r'(?:0x[0-9a-fA-F]+|\d+)',value[1])
                            if number:event[field]=int(number[0],0)
                        if field=='pointer':
                            n=event.get('size',0)
                            if event.get('target')==34963 and 0<n<=0x2000000:
                                gl_read_tokens[str(send('-data-read-memory-bytes '+hex(event['pointer'])+' '+str(n)))]=(event_id,'indices')
                            else:send('-exec-continue')
                        elif field=='draw-count':
                            n=event.get('draw-count',0)
                            if 0<n<=16384:
                                for key,expr,width in [('counts','$rdx',4),('offsets','$r9',8),('base-vertices','*(void **)($rsp+0x30)',4)]:
                                    gl_read_tokens[str(send('-data-read-memory-bytes '+json.dumps(expr)+' '+str(n*width)))]=(event_id,key)
                            else:
                                event['invalid-draw-count']=n;send('-exec-continue')
                    else:
                        contents=re.search(r'contents="([0-9a-fA-F]+)"',read_result[3])
                        if contents:
                            data=bytes.fromhex(contents[1]);path=directory/('gl-'+event_id+'-'+field+'.bin');path.write_bytes(data)
                            fmt='Q' if field=='offsets' else 'i' if field in ('counts','base-vertices') else 'I'
                            values=[v[0] for v in struct.iter_unpack('<'+fmt,data)]
                            event[field]={'file':path.name,'elements':len(values),'min':min(values,default=0),'max':max(values,default=0)}
                        else:event[field]={'error':read_result[3]}
                        if field in ('indices','base-vertices'):send('-exec-continue')
                    (directory/'gl-trace-summary.json').write_text(json.dumps(gl_events,indent=2)+'\n',encoding='utf-8')
                # GDB command-list breakpoints emit a bare stop before their
                # own continuation. It is not a crash or a completed exercise.
                if line.strip()=='*stopped' and (args.gdb_init or args.gdb_menu):continue
                if line.startswith('*stopped') and not closing:
                    if 'reason="breakpoint-hit"' in line:
                        menu_number=next((number for number in menu_breakpoints if 'bkptno="'+number+'"' in line),None)
                        gl_number=next((number for number in gl_breakpoints if 'bkptno="'+number+'"' in line),None)
                        if frame_breakpoint is not None and 'bkptno="'+frame_breakpoint+'"' in line:
                            send('-interpreter-exec console '+json.dumps('set $sr_gl_frame = ((void *(*)(void *,const char *))GetProcAddress)($sr_gl_debug_dll,"sr_gl_debug_frame")'))
                            state=hex(reference_base+0x404a6c) if args.reference else 'dword_140404A6C'
                            size='((unsigned *)'+state+')[137297755],((unsigned *)'+state+')[137297756]'
                            path=(directory/'frame.bmp').as_posix()
                            send('-interpreter-exec console '+json.dumps('call ((void (*)(const char *,int,int))$sr_gl_frame)("'+path+'",'+size+')'))
                            send('-break-disable '+frame_breakpoint);send('-exec-continue')
                            status['frame_capture']='frame.bmp'
                        elif gl_number is not None:
                            name=gl_breakpoints[gl_number];gl_counts[name]=gl_counts.get(name,0)+1
                            send('-interpreter-exec console '+json.dumps('printf "GL '+name+' rcx=%llx rdx=%llx r8=%llx r9=%llx\\n", $rcx, $rdx, $r8, $r9'))
                            if name in ('vertex','multi-draw'):
                                send('-interpreter-exec console "x/2gx $rsp+0x28"')
                            if name=='multi-draw':
                                send('-interpreter-exec console "x/8dw $rdx"')
                                send('-interpreter-exec console "x/8gx $r9"')
                                send('-interpreter-exec console "x/8dw *(void **)($rsp+0x30)"')
                                if args.gl_query_buffers or (args.gl_capture_indices and gl_counts[name]==1):
                                    if gl_counts[name]==1:
                                        allocation=0x2001000 if args.gl_capture_indices else 4096
                                        send('-interpreter-exec console "set $sr_gl_scratch = ((void *(*)(void *,unsigned long long,unsigned int,unsigned int))VirtualAlloc)(0,'+str(allocation)+',12288,4)"')
                                    for target,pname,offset,slot in [(34964,34964,0,'qword_140302FA0'),(34965,34965,4,'qword_140302FA0'),(34962,34660,8,'unk_1404041B8'),(34963,34660,16,'unk_1404041B8')]:
                                        query=('((void (*)(unsigned,unsigned,void *))(*(void **)&'+slot+'))('+str(target)+','+str(pname)+',(char *)$sr_gl_scratch+'+str(offset)+')') if slot=='unk_1404041B8' else '((void (*)(unsigned,void *))(*(void **)&'+slot+'))('+str(pname)+',(char *)$sr_gl_scratch+'+str(offset)+')'
                                        send('-interpreter-exec console '+json.dumps('call '+query))
                                    send('-interpreter-exec console '+json.dumps('printf "GL buffers array=%u elements=%u array-size=%u element-size=%u\\n", *(unsigned *)$sr_gl_scratch, *(unsigned *)((char *)$sr_gl_scratch+4), *(unsigned *)((char *)$sr_gl_scratch+8), *(unsigned *)((char *)$sr_gl_scratch+16)'))
                                    if args.gl_capture_indices and gl_counts[name]==1:
                                        send('-interpreter-exec console '+json.dumps('set $sr_gl_readback = ((void *(*)(const char *))SDL_GL_GetProcAddress)("glGetBufferSubData")'))
                                        send('-interpreter-exec console "call ((void (*)(unsigned,long long,long long,void *))$sr_gl_readback)(34963,0,*(unsigned *)((char *)$sr_gl_scratch+16),(char *)$sr_gl_scratch+4096)"')
                                        # GDB's dump parser splits filenames at spaces even when
                                        # quoted. Its inferior cwd is the game's parent directory.
                                        output_path=(directory/'world-elements.bin').relative_to(PROJECT.parent).as_posix()
                                        send('-interpreter-exec console "set $sr_gl_data = (char *)$sr_gl_scratch+4096"')
                                        send('-interpreter-exec console "set $sr_gl_end = $sr_gl_data+*(unsigned *)((char *)$sr_gl_scratch+16)"')
                                        send('-interpreter-exec console '+json.dumps('dump binary memory '+output_path+' $sr_gl_data $sr_gl_end'))
                            if name in ('buffer-data','multi-draw','draw-elements','draw-arrays'):send('-interpreter-exec console "bt 3"')
                            if name in ('draw-elements','draw-arrays') and gl_counts[name]==1 and args.gl_debug_output:
                                send('-interpreter-exec console '+json.dumps('set $sr_gl_snapshot = ((void *(*)(void *,const char *))GetProcAddress)($sr_gl_debug_dll,"sr_gl_debug_snapshot")'))
                                send('-interpreter-exec console "call ((void (*)(void))$sr_gl_snapshot)()"')
                            if name=='multi-draw' and args.synchronize_gl_trace:
                                send('-interpreter-exec console "call ((void (*)(void))(*(void **)&dword_140404A6C[18215105]))()"')
                            if gl_counts[name]>=args.gl_trace_limit:send('-break-disable '+gl_number)
                            status['gl_entries_observed']=gl_counts.copy()
                            if name in ('buffer-subdata','multi-draw'):
                                event_id=name+'-'+str(gl_counts[name]);gl_events[event_id]={}
                                fields=[('target','$rcx'),('size','$r8'),('pointer','$r9')] if name=='buffer-subdata' else [('draw-count','(unsigned int)*(unsigned int *)($rsp+0x28)')]
                                for field,expr in fields:gl_read_tokens[str(send('-data-evaluate-expression '+json.dumps(expr)))]=(event_id,field)
                            else:send('-exec-continue')
                        elif gl_start_breakpoint is not None and 'bkptno="'+gl_start_breakpoint+'"' in line:
                            if args.gl_debug_output:
                                helper=(PROJECT/'reports/client-gl-debug-20261004/client-gl-debug.dll').as_posix()
                                messages=(directory/'driver-messages.txt').as_posix()
                                send('-interpreter-exec console '+json.dumps('set $sr_gl_debug_dll = ((void *(*)(const char *))LoadLibraryA)("'+helper+'")'))
                                send('-interpreter-exec console '+json.dumps('set $sr_gl_debug_start = ((void *(*)(void *,const char *))GetProcAddress)($sr_gl_debug_dll,"sr_gl_debug_start")'))
                                send('-interpreter-exec console '+json.dumps('call ((void (*)(void *,const char *))$sr_gl_debug_start)((void *)SDL_GL_GetProcAddress,"'+messages+'")'))
                                send('-interpreter-exec console '+json.dumps('set $sr_gl_textures = ((void *(*)(void *,const char *))GetProcAddress)($sr_gl_debug_dll,"sr_gl_debug_textures")'))
                                records=hex(reference_base+0x404a6c+4*284024913) if args.reference else '&dword_140404A6C[284024913]'
                                send('-interpreter-exec console '+json.dumps('call ((void (*)(void *,unsigned))$sr_gl_textures)((void *)'+records+',4096)'))
                                if args.gl_wrap_draws:
                                    send('-interpreter-exec console '+json.dumps('set $sr_gl_wrap = ((void *(*)(void *,const char *))GetProcAddress)($sr_gl_debug_dll,"sr_gl_debug_wrap_draws")'))
                                    slots=[hex(reference_base+x) for x in (0x302ff8,0x404010,0x404808)] if args.reference else ['&qword_140302FF8','&flt_140384000[131076]','&unk_140404808']
                                    send('-interpreter-exec console '+json.dumps('call ((void (*)(void *,void *,void *))$sr_gl_wrap)('+','.join('(void *)'+x for x in slots)+')'))
                                    send('-interpreter-exec console '+json.dumps('set $sr_gl_wrap_base = ((void *(*)(void *,const char *))GetProcAddress)($sr_gl_debug_dll,"sr_gl_debug_wrap_base")'))
                                    base_slot=hex(reference_base+0x4047f0) if args.reference else '&unk_1404047F0'
                                    send('-interpreter-exec console '+json.dumps('call ((void (*)(void *))$sr_gl_wrap_base)((void *)'+base_slot+')'))
                                    if args.gl_stop_draw:
                                        send('-interpreter-exec console '+json.dumps('set $sr_gl_stop = ((void *(*)(void *,const char *))GetProcAddress)($sr_gl_debug_dll,"sr_gl_debug_stop_at")'))
                                        send('-interpreter-exec console "call ((void (*)(unsigned))$sr_gl_stop)('+str(args.gl_stop_draw)+')"')
                                    if args.gl_stop_array:
                                        send('-interpreter-exec console '+json.dumps('set $sr_gl_stop = ((void *(*)(void *,const char *))GetProcAddress)($sr_gl_debug_dll,"sr_gl_debug_stop_array")'))
                                        send('-interpreter-exec console "call ((void (*)(unsigned))$sr_gl_stop)('+str(args.gl_stop_array)+')"')
                                    if args.gl_stop_program:
                                        send('-interpreter-exec console '+json.dumps('set $sr_gl_stop = ((void *(*)(void *,const char *))GetProcAddress)($sr_gl_debug_dll,"sr_gl_debug_stop_program")'))
                                        send('-interpreter-exec console "call ((void (*)(unsigned))$sr_gl_stop)('+str(args.gl_stop_program)+')"')
                            if args.capture_frame:
                                frame_insert_token=str(send('-break-insert -i 2 SDL_GL_SwapWindow' if args.reference else '-break-insert -i 2 sub_140198EF3'))
                            arm_gl();send('-break-disable '+gl_start_breakpoint);send('-exec-continue')
                        elif practice_breakpoint is not None and 'bkptno="'+practice_breakpoint+'"' in line:
                            send('-break-disable '+practice_breakpoint)
                            send('-exec-return (int)1')
                            status.setdefault('menu_buttons_exercised',[]).append(action_label)
                            if action_label=='Practice':status['practice_boundary_exercised']=True
                            print('Exercising '+action_label+' through the original menu transition; button result controlled.',flush=True)
                            practice_breakpoint=None
                            if pending_actions:arm_action()
                            send('-exec-continue')
                            (directory/'launch-status.json').write_text(json.dumps(status,indent=2)+'\n',encoding='utf-8')
                        elif menu_number is not None:
                            name=menu_breakpoints.pop(menu_number)
                            status['menu_paths_entered'].append(name)
                            send('-break-disable '+menu_number);send('-exec-continue')
                            (directory/'launch-status.json').write_text(json.dumps(status,indent=2)+'\n',encoding='utf-8')
                            print('Entered '+name,flush=True)
                        elif 'bkptno="2"' in line and args.cookie_mismatch:
                            status.update(status='cookie_mismatch',stop_record=line.strip())
                            closing=True;capture();deadline=time.monotonic()+10
                        elif 'bkptno="1"' in line and status['third_swap_reached']:
                            status['swap_entries_counted']=status.get('swap_entries_counted',3)+120
                            send('-break-after 1 119');send('-exec-continue')
                            (directory/'launch-status.json').write_text(json.dumps(status,indent=2)+'\n',encoding='utf-8')
                            print('Swap entries counted: '+str(status['swap_entries_counted']),flush=True)
                        else:
                            status.update(third_swap_reached=True,status='frames_observed')
                            status['swap_entries_counted']=3
                            if args.reference:
                                if inferior_pid is None:raise RuntimeError('Reference PID unavailable')
                                shell=Path(os.environ['SystemRoot'])/'System32/WindowsPowerShell/v1.0/powershell.exe'
                                base_text=subprocess.check_output([str(shell),'-NoProfile','-Command','(Get-Process -Id '+str(inferior_pid)+').MainModule.BaseAddress.ToInt64()'],text=True)
                                reference_base=int(base_text.strip());status['reference_image_base']=hex(reference_base)
                                send('-interpreter-exec console "set $sr_reference_base = '+hex(reference_base)+'"')
                                if args.trace_gl:
                                    rva=int(args.gl_start_symbol.removeprefix('sub_'),16)-0x140000000 if args.gl_start_symbol else 0x11fd00 if args.gl_start_world else 0xc2db0
                                    gl_start_token=str(send('-break-insert *'+hex(reference_base+rva)))
                            if args.gdb_menu:
                                send('-interpreter-exec console '+json.dumps('source '+args.gdb_menu.resolve().as_posix()))
                            if args.trace_gl and not (args.gl_start_world or args.gl_start_symbol):arm_gl()
                            if pending_actions and practice_insert_token is None:arm_action()
                            send('-break-after 1 119' if args.trace_frame_progress else '-break-disable 1');send('-exec-continue');deadline=float('inf') if args.keep_running else time.monotonic()+args.frame_seconds
                            if args.keep_running:
                                (directory/'launch-status.json').write_text(json.dumps(status,indent=2)+'\n',encoding='utf-8')
                                print('Client reached menu frames and is being kept running.',flush=True)
                    else:
                        status['stop_record']=line.strip()
                        if requested_stop is not None and 'signal-name="SIGINT"' in line:status['status']=requested_stop
                        elif 'signal-name="SIGTRAP"' not in line:status['status']='crashed' if 'signal-received' in line else 'exited'
                        closing=True;capture();deadline=time.monotonic()+10
                if time.monotonic()>deadline:
                    if closing:raise TimeoutError('Debugger did not close')
                    requested_stop='observation_complete' if status['third_swap_reached'] else 'startup_timeout'
                    status['status']=requested_stop
                    send('-exec-interrupt');deadline=time.monotonic()+10
            process.wait(timeout=10)
        finally:
            if process.poll() is None:
                try:send('-gdb-exit');process.wait(timeout=5)
                except (OSError,subprocess.TimeoutExpired):process.kill();process.wait()
    (directory/'launch-status.json').write_text(json.dumps(status,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(status))


if __name__=='__main__':main()
