// Export pinned program identity, function inventory and bounded assembly evidence.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.io.*;

public class ExportRecoveryEvidence extends GhidraScript {
    private String cell(Object value) {
        return String.valueOf(value).replace('\t', ' ').replace('\n', ' ').replace('\r', ' ');
    }
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) throw new IllegalArgumentException("Expected output directory");
        String expected = "e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e";
        if (!expected.equalsIgnoreCase(currentProgram.getExecutableSHA256()))
            throw new IllegalStateException("Wrong executable: " + currentProgram.getExecutableSHA256());
        Path output = Paths.get(args[0]);
        Files.createDirectories(output);
        Files.writeString(output.resolve("identity.txt"), "program=" + currentProgram.getName()
            + "\nsha256=" + currentProgram.getExecutableSHA256()
            + "\nsource=" + currentProgram.getExecutablePath()
            + "\nlanguage=" + currentProgram.getLanguageID() + "\n", StandardCharsets.UTF_8);
        int count = 0;
        try (BufferedWriter out = Files.newBufferedWriter(output.resolve("functions.tsv"), StandardCharsets.UTF_8)) {
            out.write("address\tname\tsignature\tbody_bytes\n");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function f = functions.next();
                out.write(cell(f.getEntryPoint()) + "\t" + cell(f.getName()) + "\t"
                    + cell(f.getSignature()) + "\t" + f.getBody().getNumAddresses() + "\n");
                count++;
            }
        }
        if (count < 4000) throw new IllegalStateException("Incomplete function inventory: " + count);
        int instructionCount = 0;
        try (BufferedWriter out = Files.newBufferedWriter(output.resolve("blocker-disassembly.txt"), StandardCharsets.UTF_8)) {
            for (String address : new String[] { "1400dc050", "14014fcf0" }) {
                Function f = currentProgram.getFunctionManager().getFunctionAt(toAddr(address));
                if (f == null) throw new IllegalStateException("Missing function " + address);
                out.write(f.getEntryPoint() + " " + f.getSignature() + "\n");
                InstructionIterator instructions = currentProgram.getListing().getInstructions(f.getBody(), true);
                while (instructions.hasNext()) {
                    monitor.checkCancelled();
                    Instruction i = instructions.next();
                    out.write(i.getAddress() + " " + i + "\n");
                    instructionCount++;
                }
            }
        }
        if (instructionCount < 500) throw new IllegalStateException("Incomplete assembly export: " + instructionCount);
        println("Exported " + count + " functions from pinned vanilla executable");
    }
}
