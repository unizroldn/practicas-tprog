import java.util.Stack;

public class Push extends Instruccion{
    private int constante;
    public Push(int valor){
        constante = valor;
    }
    @Override
    public void ejecutar(Stack<Integer> pila, int pc){
        System.out.println("push");

        pila.push(constante);
        pc++;
    }
    @Override
    public String listar(){
        return "push " + constante + "\n";
    }
}