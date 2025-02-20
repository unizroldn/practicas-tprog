import java.util.Stack;

public class Programa {
    protected Instruccion[] instrucciones;
    protected int numInstrucciones;

    public Programa(){
        instrucciones = new Instruccion[0];
        numInstrucciones = 0;
    }

    public void ejecutar(){
        int pc = 0;
        Stack<Integer> pila = new Stack<>();
       
        System.out.println("Ejecutar: ");
        
        while (pc < numInstrucciones) {

            instrucciones[pc].ejecutar(pila, pc);
            
            pc++; 
        }
    }

    public void listar() {
        int pc = 0;
        System.out.println("Programa: ");
        while (pc < numInstrucciones) {

            System.out.print(pc + " " + instrucciones[pc].listar());
            System.out.flush();
            pc++;
        }
        System.out.println();
    }
}


