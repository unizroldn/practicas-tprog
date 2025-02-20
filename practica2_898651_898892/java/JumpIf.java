import java.util.Stack;

public class JumpIf extends Instruccion{
    private int constante;
    public JumpIf(int valor){
        constante = valor;
    }
    @Override
    public void ejecutar(Stack<Integer> pila, int pc){
        System.out.println("jumpif");

        int cima=pila.pop();
        if (cima>=0){
            pc=constante;
        }else{
            pc++;
        }
    }
    @Override
    public String listar(){
        return "Jumpif " + constante + " \n";
    }
}