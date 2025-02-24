/**
 * Programa que calcula el factorial de un número dado.
 */
public class Factorial extends Programa{
    // Constructor de la clase Factorial
    // pre: ---
    // post: inicializa el programa con 14 instrucciones para calcular el factorial de un numero
    public Factorial(){
        numInstrucciones = 14;
        instrucciones = new Instruccion[numInstrucciones];  

        instrucciones[0] = new Push(1);
        instrucciones[1] = new Read();
        instrucciones[2] = new Swap();
        instrucciones[3] = new Over();
        instrucciones[4] = new Mul();
        instrucciones[5] = new Swap();
        instrucciones[6] = new Push(-1);
        instrucciones[7] = new Add();
        instrucciones[8] = new Dup();
        instrucciones[9] = new Push(-2);
        instrucciones[10] = new Add();
        instrucciones[11] = new JumpIf(2);
        instrucciones[12] = new Swap();
        instrucciones[13] = new Write();
    }
}