// @category SubRosa
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

import java.io.File;
import java.io.PrintWriter;
import java.util.LinkedHashSet;
import java.util.Set;

public class TraceItemRendering extends GhidraScript {
    private void addReferences(Address target, Set<Function> functions) {
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(target);
        while (refs.hasNext()) {
            Reference ref = refs.next();
            Function function = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
            if (function != null) functions.add(function);
        }
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File output = new File(args.length > 0 ? args[0] : "subrosa-item-render.txt");
        Set<Function> roots = new LinkedHashSet<>();
        // 38f Windows image base 0x140000000 plus Suitium's verified RVAs.
        addReferences(toAddr(0x182bbb180L), roots); // Item[1024]
        addReferences(toAddr(0x182a7e180L), roots); // ItemType[46]

        Set<Function> all = new LinkedHashSet<>(roots);
        for (Function root : roots) {
            for (Reference ref : currentProgram.getReferenceManager().getReferencesTo(root.getEntryPoint())) {
                Function caller = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
                if (caller != null) all.add(caller);
            }
        }

        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try (PrintWriter writer = new PrintWriter(output, "UTF-8")) {
            writer.printf("program=%s roots=%d expanded=%d%n", currentProgram.getName(), roots.size(), all.size());
            for (Function function : all) {
                if (monitor.isCancelled()) break;
                writer.printf("%n===== %s @ %s root=%s =====%n", function.getName(), function.getEntryPoint(), roots.contains(function));
                DecompileResults result = decompiler.decompileFunction(function, 45, monitor);
                if (result.decompileCompleted()) writer.println(result.getDecompiledFunction().getC());
                else writer.println("DECOMPILE FAILED: " + result.getErrorMessage());
            }
        }
        decompiler.dispose();
        println("Wrote " + all.size() + " functions to " + output.getAbsolutePath());
    }
}
