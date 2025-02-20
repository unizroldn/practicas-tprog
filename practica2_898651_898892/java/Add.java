import java.util.Stack;

class Add extends Instruccion{
    @Override
    boolean ejecutar(Stack<Integer> pila, int pc){
        if(pila.size() < 2){
            return false;
        }
        int r1 = pila.pop();
        int r2 = pila.pop();
        pila.push(r1 + r2);
        pc++;
        return true;
    }
    @Override
    String listar(){
        return "add\n";
    }
}