import java.util.Stack;
import java.util.Scanner; 

// Instrucción para leer un valor y apilarlosumarsumar
public class Read extends Instruccion{
    // Pre: ---
    // Post: Lee un valor entero y lo apila en la pila.
    //       Además actualiza el valor de pc
    @Override
    public void ejecutar(Stack<Integer> pila, int[] pc){
        System.out.print("? ");
        System.out.flush();
        Scanner sc = new Scanner(System.in); 

        int r1 = sc.nextInt(); 
        
        pila.push(r1);
        pc[0]++;
        
        // sc.close();
    }
    // Pre: ---
    // Post: Devuelve la cadena "read\n"
    @Override
    public String listar(){
        return "read\n";
    }
}