import java.util.Stack;

// Clase base para todas las instrucciones
public abstract class Instruccion {
    // Pre: ---
    // Post: ejecuta todas las instrucciones en orden hasta finalizar
    public abstract void ejecutar(Stack<Integer> pila, int[] pc);

    // Pre: ---
    // Post: imprime en pantalla la lista de instrucciones con su indice
    public abstract String listar();
}






