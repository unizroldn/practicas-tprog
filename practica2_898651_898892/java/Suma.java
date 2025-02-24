/**
 * Programa que suma dos números.
 */
public class Suma extends Programa{
    // Constructor de la clase Suma
    // Pre: ---
    // Post: inicializa el programa con 4 instrucciones para sumar dos numeros
    public Suma(){
        numInstrucciones = 4;
        instrucciones = new Instruccion[numInstrucciones];  

        instrucciones[0] = new Read();
        instrucciones[1] = new Read();
        instrucciones[2] = new Add();
        instrucciones[3] = new Write();
    }
}