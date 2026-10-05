import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;

public class DumpFocused extends GhidraScript {
  public void run() throws Exception {
    String[] targets={"1400e35d0"};
    File out=new File("D:/SteamLibrary/steamapps/common/Sub Rosa/decompilation/ghidra/focused-render.txt");
    PrintWriter w=new PrintWriter(new FileWriter(out));
    DecompInterface d=new DecompInterface(); d.openProgram(currentProgram);
    for(String s:targets){
      Address a=toAddr(s); Function f=getFunctionAt(a); if(f==null) continue;
      dump(w,d,f,"TARGET");
    }
    w.close(); d.dispose();
  }
  void dump(PrintWriter w, DecompInterface d, Function f, String tag){
    w.println("\n===== "+tag+" "+f.getName()+" @ "+f.getEntryPoint()+" =====");
    DecompileResults r=d.decompileFunction(f,120,monitor);
    w.println(r.decompileCompleted()?r.getDecompiledFunction().getC():"FAILED "+r.getErrorMessage());
  }
}
