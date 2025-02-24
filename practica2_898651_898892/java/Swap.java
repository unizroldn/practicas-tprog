import java.util.Stack;

// Instrucción para intercambiar los dos valores superiores de la pila
public class Swap extends Instruccion{
    // Pre: Hay al menos dos elementos en la pila
    // Post: Intercambia los dos elementos superiores de la pila
    //       Además actualiza el valor de pc
    @Override
    public void ejecutar(Stack<Integer> pila, int[] pc){

        int r1 = pila.peek();
        pila.pop();
        int r2 = pila.peek();
        pila.pop();
        
        pila.push(r1);
        pila.push(r2);
        pc[0]++;

    }
    // Pre: ---
    // Post: Devuelve la cadena "swap\n"
    @Override
    public String listar(){
        return "swap\n";
    }
}