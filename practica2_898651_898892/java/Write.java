import java.util.Stack;

// Instrucción para escribir el valor superior de la pila
public class Write extends Instruccion{
    // Pre: Hay al menos un elemento en la pila.
    // Post: Muestra el valor superior de la pila y lo desapila.
    //       Además actualiza el valor de pc.
    @Override
    public void ejecutar(Stack<Integer> pila, int[] pc){

        int r1 = pila.peek();
        pila.pop();
        System.out.println(r1);
        pc[0]++;

    }
    // Pre: ---
    // Post: Devuelve la cadena "write\n"
    @Override
    public String listar(){
        return "write\n";
    }
}