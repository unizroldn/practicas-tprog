import java.util.Stack;

public class Swap extends Instruccion{
    @Override
    public void ejecutar(Stack<Integer> pila, int pc){

        int r1 = pila.pop();
        int r2 = pila.pop();
        pila.push(r1);
        pila.push(r2);
        pc++;

    }
    @Override
    public String listar(){
        return "swap\n";
    }
}