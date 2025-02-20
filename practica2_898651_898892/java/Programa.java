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
       
        boolean resultado = true;
        System.out.println("Ejecutar: ");
        
        while (pc < numInstrucciones && resultado) {

            resultado = instrucciones[pc].ejecutar(pila, pc);
            if (!resultado) {
                System.out.println("Hubo un error al ejecutar " + instrucciones[pc].listar());
            }
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

class Suma extends Programa{
    public Suma(){
        numInstrucciones = 4;
        instrucciones = new Instruccion[numInstrucciones];  

        instrucciones[0] = new Read();
        instrucciones[1] = new Read();
        instrucciones[2] = new Add();
        instrucciones[3] = new Write();
        
    }
}
