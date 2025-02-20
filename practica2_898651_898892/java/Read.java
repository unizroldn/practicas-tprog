import java.util.Stack;
import java.util.Scanner; 

public class Read extends Instruccion{
    @Override
    public void ejecutar(Stack<Integer> pila, int pc){
        System.out.print("?");
        System.out.flush();
        Scanner sc = new Scanner(System.in); 

        int r1 = sc.nextInt(); 
        
        pila.push(r1);
        pc++;
        
        // sc.close();
    }
    @Override
    public String listar(){
        return "read\n";
    }
}