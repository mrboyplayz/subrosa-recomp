"""Build the requested GhidraMCP extension against the installed Ghidra libraries."""
from pathlib import Path
import hashlib
import json
import shutil
import subprocess
import tomllib

PROJECT=Path(__file__).resolve().parent.parent
ROOT=PROJECT/'tools/ghidra-mcp'
GHIDRA=Path('C:/Users/junin/Downloads/ghidra_12.1.3_PUBLIC')
INSTALL=Path('C:/Users/junin/AppData/Roaming/ghidra/ghidra_12.1.3_PUBLIC/Extensions/GhidraMCP')


def main():
    if not (GHIDRA/'Ghidra/application.properties').is_file():raise FileNotFoundError(GHIDRA)
    original=ROOT/'src/main/java/com/lauriewired/GhidraMCPPlugin.java'
    text=original.read_text();old='new InetSocketAddress(port)'
    if text.count(old)!=1:raise ValueError('GhidraMCP bind expression changed')
    build=ROOT/'build-local';build.mkdir(exist_ok=True)
    source=build/'GhidraMCPPlugin.java';source.write_text(text.replace(old,'new InetSocketAddress("127.0.0.1", port)'),encoding='utf-8')
    classes=build/'classes';classes.mkdir(exist_ok=True)
    jars=sorted((GHIDRA/'Ghidra').rglob('*.jar'))
    classpath=';'.join(str(p) for p in jars)
    arguments=build/'javac.args'
    arguments.write_text('-encoding\nUTF-8\n-classpath\n"'+classpath.replace('\\','/')+'"\n-d\n"'+classes.as_posix()+'"\n"'+source.as_posix()+'"\n',encoding='utf-8')
    result=subprocess.run([shutil.which('javac'),'@'+str(arguments)],capture_output=True,text=True)
    (build/'compile.log').write_text(result.stdout+result.stderr,encoding='utf-8')
    if result.returncode:raise RuntimeError('Extension compile failed: '+result.stderr[:4000])
    jar=build/'GhidraMCP.jar'
    subprocess.run([shutil.which('jar'),'--create','--file',str(jar),'-C',str(classes),'.'],check=True)
    if INSTALL.exists():raise FileExistsError('Existing extension preserved: '+str(INSTALL))
    (INSTALL/'lib').mkdir(parents=True)
    shutil.copyfile(jar,INSTALL/'lib/GhidraMCP.jar')
    properties=(ROOT/'src/main/resources/extension.properties').read_text().replace('11.3.2','12.1.3')
    (INSTALL/'extension.properties').write_text(properties,encoding='utf-8')
    shutil.copyfile(ROOT/'src/main/resources/Module.manifest',INSTALL/'Module.manifest')
    python=ROOT/'.venv/Scripts/python.exe'
    subprocess.run([shutil.which('uv'),'venv','--python',shutil.which('python'),str(ROOT/'.venv')],check=True)
    subprocess.run([shutil.which('uv'),'pip','install','--python',str(python),'-r',str(ROOT/'requirements.txt')],check=True)
    config=Path('C:/Users/junin/.codex/config.toml');raw=config.read_bytes();parsed=tomllib.loads(raw.decode())
    if 'ghidra' in parsed.get('mcp_servers',{}):raise ValueError('Existing Ghidra configuration preserved; inspect before changing')
    backup=config.with_name('config.toml.before-ghidra-20261003')
    if not backup.exists():backup.write_bytes(raw)
    command=json.dumps(str(python));bridge=json.dumps(str(ROOT/'bridge_mcp_ghidra.py'))
    addition=f'\n[mcp_servers.ghidra]\ncommand = {command}\nargs = [{bridge}, "--ghidra-server", "http://127.0.0.1:8080/", "--transport", "stdio"]\nstartup_timeout_sec = 30\ntool_timeout_sec = 90\n'
    updated=raw.decode().rstrip()+'\n'+addition
    tomllib.loads(updated);config.write_text(updated,encoding='utf-8')
    record={'repository':'https://github.com/LaurieWired/GhidraMCP','source_commit':subprocess.check_output(['git','-C',str(ROOT),'rev-parse','HEAD'],text=True).strip(),
            'ghidra_version':'12.1.3','extension':str(INSTALL),'jar_sha256':hashlib.sha256(jar.read_bytes()).hexdigest(),
            'local_patch':'Bind HTTP server to 127.0.0.1 only','python':str(python),'config':str(config),'config_backup':str(backup),'status':'installed; plugin activation and live MCP verification pending'}
    (PROJECT/'reports/ghidra-mcp-setup-20261003.json').write_text(json.dumps(record,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(record))


if __name__=='__main__':main()
