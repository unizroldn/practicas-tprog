public class Suma extends Programa{
    public Suma(){
        numInstrucciones = 4;
        instrucciones = new Instruccion[numInstrucciones];  

        instrucciones[0] = new Read();
        instrucciones[1] = new Read();
        instrucciones[2] = new Add();
        instrucciones[3] = new Write();
    }
}