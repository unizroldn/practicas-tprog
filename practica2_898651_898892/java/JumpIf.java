import java.util.Stack;

// Instrucción para saltar si el valor superior de la pila es no negativo
public class JumpIf extends Instruccion{
    private int constante;
    // Constructor de la clase Jumpif
    public JumpIf(int valor){
        constante = valor;
    }
    // Pre: Hay al menos un elemento en la pila
    // Post: Si el valor superior de la pila es no negativo, 
    //       salta a la dirección constante; de lo contrario, 
    //       incrementa el contador de programa
    @Override
    public void ejecutar(Stack<Integer> pila, int[] pc){

        int cima=pila.peek();
        pila.pop();
        if (cima>=0){
            pc[0]=constante;
        }else{
            pc[0]++;
        }
    }
    // Pre: ---
    // Post: Devuelve la cadena "jumpif <constante>\n"
    @Override
    public String listar(){
        return "Jumpif " + constante + " \n";
    }
}