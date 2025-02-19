import java.util.Stack;
import java.util.Scanner; 


abstract class Instruccion {

    // Método abstracto para ejecutar la instrucción
    abstract boolean ejecutar(Stack<Integer> pila, int pc);

    // Método abstracto para listar la instrucción
    abstract String listar();
}

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

class Read extends Instruccion{
    @Override
    boolean ejecutar(Stack<Integer> pila, int pc){
        System.out.print("?");
        System.out.flush();
        Scanner sc = new Scanner(System.in); 

        int r1 = sc.nextInt(); 
        
        
        pila.push(r1);
        pc++;
        

        return true;
    }
    @Override
    String listar(){
        return "read\n";
    }
}

class Write extends Instruccion{
    @Override
    boolean ejecutar(Stack<Integer> pila, int pc){
        if(pila.empty()){
            return false;
        }
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
