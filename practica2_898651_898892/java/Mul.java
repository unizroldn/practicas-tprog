import java.util.Stack;

// Instrucción para multiplicar los dos valores superiores de la pila
public class Mul extends Instruccion{
    // Pre: Hay al menos dos elementos en la pila
    // Post: Multiplica los dos elementos superiores de la pila y apila el resultado
    //       Además actualiza el valor de pc
    @Override
    public void ejecutar(Stack<Integer> pila, int[] pc){

        int r1 = pila.peek();
        pila.pop();
        int r2 = pila.peek();
        pila.pop();
        
        pila.push(r1 * r2);
        pc[0]++;

    }
    // Pre: ---
    // Post: Devuelve la cadena "mul\n"
    @Override
    public String listar(){
        return "mul\n";
    }
}