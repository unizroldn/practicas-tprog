import java.util.Stack;


abstract class Instruccion {

    abstract boolean ejecutar(Stack<Integer> pila, int pc);

    abstract String listar();
}






