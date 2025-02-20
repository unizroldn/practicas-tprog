import java.util.Stack;

class Write extends Instruccion{
    @Override
    boolean ejecutar(Stack<Integer> pila, int pc){
        /*if(pila.empty()){
            return false;
        }*/
        int r1 = pila.pop();
        System.out.println(r1);
        pc++;
        return true;
    }
    @Override
    String listar(){
        return "read\n";
    }
}