import java.util.Stack;

// Instrucción para copiar el segundo valor de la pila y apilarlo
public class Over extends Instruccion{
    // Pre: Hay al menos dos elementos en la pila
    // Post: Copia el segundo elemento de la pila y lo apila sobre el primero
    //       Además actualiza el valor de pc
    @Override
    public void ejecutar(Stack<Integer> pila, int[] pc){
        int r1 =  pila.peek();
        pila.pop();
        int r2 = pila.peek();
        pila.pop();

        pila.push(r2);
        pila.push(r1);
        pila.push(r2);
        pc[0]++;
    }
    // Pre: ---
    // Post: Devuelve la cadena "over\n"
    @Override
    public String listar(){
        return "over\n";
    }
}