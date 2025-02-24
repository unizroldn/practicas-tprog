import java.util.Stack;

// Instrucción para sumar los dos valores superiores de la pila
public class Add extends Instruccion{
// Pre: Hay al menos dos elementos en la pila
// Post: Suma los dos elementos superiores de la pila, apila el resultado y actualiza el valor de pc
//       Además actualiza el valor de pc

    @Override
    public void ejecutar(Stack<Integer> pila, int[] pc){

        int r1 = pila.peek();
        pila.pop();
        int r2 = pila.peek();
        pila.pop();
        
        pila.push(r1 + r2);
        pc[0]++;

    }
// Pre: ---
// Post: Devuelve la cadena "add\n"
    @Override
    public String listar(){
        return "add\n";
    }
}