import java.util.Stack;

public class Write extends Instruccion{
    @Override
    public void ejecutar(Stack<Integer> pila, int pc){
        /*if(pila.empty()){
            return false;
        }*/
        int r1 = pila.pop();
        System.out.println(r1);
        pc++;

    }
    @Override
    public String listar(){
        return "read\n";
    }
}