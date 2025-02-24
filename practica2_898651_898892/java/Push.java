import java.util.Stack;

// Instrucción para apilar un valor constante
public class Push extends Instruccion{
    private int constante;
    // Constructor de la clase Push
    public Push(int valor){
        constante = valor;
    }
    // Pre: ---
    // Post: Apila el valor constante en la pila
    //       Además actualiza el valor de pc
    @Override
    public void ejecutar(Stack<Integer> pila, int[] pc){

        pila.push(constante);
        pc[0]++;
    }
    // Pre: ---
    // Post: Devuelve la cadena "push <constante>\n"
    @Override
    public String listar(){
        return "push " + constante + "\n";
    }
}