import java.util.Stack;


public abstract class Instruccion {

    public abstract void ejecutar(Stack<Integer> pila, int pc);

    public abstract String listar();
}






