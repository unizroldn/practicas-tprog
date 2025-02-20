import java.util.Stack;

class Push extends Instruccion{
    private int constante;
    public Push(int valor){
        constante = valor;
    }
    @Override
    boolean ejecutar(Stack<Integer> pila, int pc){
        pila.push(constante);
        pc++;
        return true;
    }
    @Override
    String listar(){
        return "push " + constante + "\n";
    }
}