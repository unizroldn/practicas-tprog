import java.util.Stack;

public class Programa {
    protected Instruccion[] instrucciones;
    protected int numInstrucciones;
    // Constructor de la clase Programa
    // Pre: ---
    // Post: inicializa el programa sin instrucciones
    public Programa(){
        instrucciones = new Instruccion[0];
        numInstrucciones = 0;
    }
    // Ejecuta el programa
    // Pre: ---
    // Post: ejecuta todas las instrucciones en orden hasta finalizar
    public void ejecutar(){
        int pc[] = {0};
        Stack<Integer> pila = new Stack<>();
       
        System.out.println("Ejecutar: ");
        
        while (pc[0] < numInstrucciones) {

            instrucciones[pc[0]].ejecutar(pila, pc);
            
            // pc++; 
        }
    }
    // Lista las instrucciones del programa
    // Pre: ---
    // Post: imprime en pantalla la lista de instrucciones con su indice
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


