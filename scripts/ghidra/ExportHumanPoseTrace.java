// Export original instructions and references; no program changes.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.io.*;

public class ExportHumanPoseTrace extends GhidraScript {
    private String cell(Object value) {
        return String.valueOf(value).replace('\t', ' ').replace('\n', ' ').replace('\r', ' ');
    }
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) throw new IllegalArgumentException("Expected output directory");
        String expected = "e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e";
        if (!expected.equalsIgnoreCase(currentProgram.getExecutableSHA256()))
            throw new IllegalStateException("Wrong executable");
        Path output = Paths.get(args[0]);
        Files.createDirectories(output);
        Files.writeString(output.resolve("identity.txt"), "program=" + currentProgram.getName()
            + "\nsha256=" + currentProgram.getExecutableSHA256()
            + "\nlanguage=" + currentProgram.getLanguageID() + "\n", StandardCharsets.UTF_8);
        int count = 0;
        try (BufferedWriter instructions = Files.newBufferedWriter(output.resolve("native-instructions.tsv"), StandardCharsets.UTF_8);
             BufferedWriter refs = Files.newBufferedWriter(output.resolve("native-edges.tsv"), StandardCharsets.UTF_8)) {
            instructions.write("function\taddress\tbytes\tinstruction\n");
            refs.write("function\tfrom\tto\ttype\ttarget_function\n");
            for (String address : new String[] { "1400ad2b0", "1400b1450", "1400b78f0", "1400b9d90", "1400ba210", "1400bca30",
                    "1400be010", "140116210", "14001d080", "14001bf70", "14001c780", "14001cbb0", "14005cf80",
                    "1400e9a60", "140139e90", "1400a4440", "1400e8580", "14011e730", "1400a9940", "1400b2bf0",
                    "140022df0", "1400932d0", "140092d70", "1400212e0", "14014b2a0",
                    "140040490", "140030590", "1400c2f90", "14003ba57", "14010e370", "14011c340",
                    "140127300", "14018f1b0", "140115ae0", "140191f90", "140192160", "140042930", "14018ef40", "14011c760",
                    "14018d510", "14018d5e0", "140115d20", "14010d610", "140107ed0",
                    "14005d1f0", "14004de30", "14004e160", "14004e2e0", "14004e430", "14004e5b0",
                    "1401154d0", "14012b2d0", "14007b2a0", "140005160", "1400052c0",
                    "1400779f0", "140077fa0", "1400dad20", "14004a7a0", "14008ceb0", "140187410" }) {
                Function f = currentProgram.getFunctionManager().getFunctionAt(toAddr(address));
                if (f == null) throw new IllegalStateException("Missing function " + address);
                InstructionIterator iterator = currentProgram.getListing().getInstructions(f.getBody(), true);
                while (iterator.hasNext()) {
                    monitor.checkCancelled();
                    Instruction i = iterator.next();
                    StringBuilder bytes = new StringBuilder();
                    for (byte b : i.getBytes()) bytes.append(String.format("%02x", b & 255));
                    instructions.write(address + "\t" + i.getAddress() + "\t" + bytes + "\t" + cell(i) + "\n");
                    for (Reference r : currentProgram.getReferenceManager().getReferencesFrom(i.getAddress())) {
                        Function target = currentProgram.getFunctionManager().getFunctionContaining(r.getToAddress());
                        refs.write(address + "\t" + r.getFromAddress() + "\t" + r.getToAddress() + "\t"
                            + cell(r.getReferenceType()) + "\t" + (target == null ? "" : target.getEntryPoint()) + "\n");
                    }
                    count++;
                }
            }
        }
        if (count < 1000) throw new IllegalStateException("Incomplete native listing: " + count);
        try (BufferedWriter constants = Files.newBufferedWriter(output.resolve("constants.tsv"), StandardCharsets.UTF_8)) {
            constants.write("address\tbits32\tfloat32_interpretation\tbits64\tfloat64_interpretation\n");
            for (String address : new String[] { "140278180", "140278224", "140278338", "1402783b8", "1402783f4", "140278c08", "140278cc0",
                    "140278058", "140278280", "140278568", "140279490", "140279494", "140279498", "14027949c",
                    "140279700", "140279704", "140279708", "14027970c", "140279870", "140279874", "140279878", "14027987c",
                    "140278370", "140278268", "140278ba0", "140278588", "1402785b0", "140278cb0", "140301dd8", "140301df8",
                    "1402780c0", "140278240", "14027816c", "140278728",
                    "1402780cc", "140278118", "140278148", "1402781bc", "14027824c",
                    "140278108", "140278950", "140278a1c" }) {
                int bits = currentProgram.getMemory().getInt(toAddr(address));
                long bits64 = currentProgram.getMemory().getLong(toAddr(address));
                constants.write(address + "\t" + Integer.toUnsignedString(bits, 16) + "\t" + Float.intBitsToFloat(bits)
                    + "\t" + Long.toUnsignedString(bits64, 16) + "\t" + Double.longBitsToDouble(bits64) + "\n");
            }
        }
        println("Exported " + count + " native instructions with references from 61 functions");
    }
}
