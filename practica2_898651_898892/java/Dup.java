import java.util.Stack;

// Instrucción para duplicar el valor superior de la pila
public class Dup extends Instruccion{
    // Pre: Hay al menos un elemento en la pila
    // Post: Duplica el valor superior de la pila y lo apila
    //       Además actualiza el valor de pc

    @Override
    public void ejecutar(Stack<Integer> pila, int[] pc){
        int valor = pila.peek();
        pila.pop();
            
        pila.push(valor);
        pila.push(valor);

        pc[0]++;
    }
    // Pre: ---
    // Post: Devuelve la cadena "dup\n"
    @Override
    public String listar(){
        return "dup\n";
    }
}
