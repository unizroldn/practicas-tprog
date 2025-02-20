import java.util.Stack;

public class Dup extends Instruccion{
    @Override
    public void ejecutar(Stack<Integer> pila, int[] pc){
        int valor = pila.pop();
        pila.push(valor);
        pila.push(valor);

        pc++;
    }
    @Override
    public String listar(){
        return "dup\n";
    }
}
