// Restore a tail fragment to its owning tick routine before C decompilation.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.util.ArrayList;

public class RecoverTickBody extends GhidraScript {
    public void run() throws Exception {
        String pin="e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e";
        if(!pin.equalsIgnoreCase(currentProgram.getExecutableSHA256()))
            throw new IllegalStateException("Wrong executable");
        FunctionManager manager=currentProgram.getFunctionManager();
        Address entry=toAddr(0x14003b920L),fragment=toAddr(0x1400403f0L);
        Function owner=manager.getFunctionAt(entry);
        if(owner==null)throw new IllegalStateException("Missing tick owner");
        AddressSet body=new AddressSet(entry,toAddr(0x14003c6e5L));
        body.add(fragment,toAddr(0x14004048cL));
        FunctionIterator functions=manager.getFunctions(body,true);
        ArrayList<Address> overlaps=new ArrayList<>();
        while(functions.hasNext()){
            Function f=functions.next();if(!f.getEntryPoint().equals(entry))overlaps.add(f.getEntryPoint());
        }
        // The fragment can have been inferred as a separate tail-call function.
        // Remove that one known overlap, retaining its instructions and symbols.
        for(Address at:overlaps){println("Reattaching inferred tick fragment: "+at);manager.removeFunction(at);}
        InstructionIterator instructions=currentProgram.getListing().getInstructions(body,true);
        while(instructions.hasNext()){
            Instruction instruction=instructions.next();
            if(instruction.getFlowOverride()!=FlowOverride.NONE)instruction.setFlowOverride(FlowOverride.NONE);
        }
        owner.setBody(body);
        println("Recovered tick body: "+owner.getBody().getNumAddresses()+" bytes");
    }
}
