import java.util.Stack;
import java.util.Scanner; 

class Read extends Instruccion{
    @Override
    void ejecutar(Stack<Integer> pila, int pc){
        System.out.print("?");
        System.out.flush();
        Scanner sc = new Scanner(System.in); 

        int r1 = sc.nextInt(); 
        
        pila.push(r1);
        pc++;
        
        sc.close();
        return true;
    }
    @Override
    String listar(){
        return "read\n";
    }
}