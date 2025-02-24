/**
 * Programa que cuenta hacia atrás desde un número dado.
 */
public class CuentaAtras extends Programa{
    // Constructor de la clase CuentaAtras
    // pre: ---
    // post: inicializa el programa con 7 instrucciones para contar hacia atras
    public CuentaAtras(){
        numInstrucciones = 7;
        instrucciones = new Instruccion[numInstrucciones];  

        instrucciones[0] = new Read();
        instrucciones[1] = new Dup();
        instrucciones[2] = new Write();
        instrucciones[3] = new Push(-1);
        instrucciones[4] = new Add();
        instrucciones[5] = new Dup();
        instrucciones[6] = new JumpIf(1);
    }
}
